/**
 * Range
 *
 * This class models a single character range with start and end point.
 * It can compute the remaining Ranges when doing a set-diff against
 * another range.
 * It serializes toString as a Regexp character range fragment, a-b.
 */

class Range {
  constructor(start, end=undefined) {
    end = end || start;
    if (typeof start === 'string') {
      start = start.codePointAt(0);
    }
    if (typeof end === 'string') {
      end = end.codePointAt(0);
    }
    this.start = start;
    this.end = end;
  }

  *setdiff(other) {
    if (!other) {
      yield {value: this, done: true};
      return;
    }
    if (other.start <= this.start) {
      // handle left side
      if (other.end < this.start) {
        // the other range has no overlap
        yield {value: this, done: false};
      }
      else {
        if (other.end < this.end) {
          // yield remaining range of the right side
          yield {value: new Range(other.end + 1, this.end), done: false};
        }
        else {
          // we're completely excluded
          yield {value: null, done: true};
        }
      }
    }
    else {
      if (other.start > this.end) {
        // other range is not overlapping
        // yield done to terminate, other_done to signal other to move forward
        yield {value: this, done: true};
      }
      else {
        // start with yielding our left side
        yield {
          value: new Range(this.start, other.start - 1),
          done: true
        };
        if (other.end < this.end) {
          // we have a trailing fragment
          // check trailing fragment against more others
          yield {
            value: new Range(other.end + 1, this.end),
            done: false
          };
        }
        else {
          // no trailing fragment
          // nothing to be done
        }
      }
    }
  }

  toString() {
    if (this.start === this.end) {
      return this.char(this.start );
    }
    return `${ this.char(this.start )}-${ this.char(this.end )}`;
  }

  char(codepoint) {
    let char = String.fromCodePoint(codepoint);
    switch (char) {
    case '.':
    case '[':
    case ']':
      char = '\\' + char;
    }
    return char;
  }
}

module.exports = {
  Range: Range
};
