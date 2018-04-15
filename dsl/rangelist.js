/**
 * RangeList
 *
 * Subclass of Array.
 * Parse character ranges into a list of ranges, and can setdiff two
 * ranges, using Range.setdiff under the hood.
 */
const { Range } = require('./range');

class RangeList extends Array {
  static parseFromString(ranges, excludes='') {
    var range_objects = [];
    var range_re = /^.-./;
    while (ranges) {
      if (range_re.test(ranges)) {
        range_objects.push(new Range(ranges[0], ranges[2]));
        ranges = ranges.substr(3);
      }
      else {
        range_objects.push(new Range(ranges[0]));
        ranges = ranges.substr(1);
      }
    }
    range_objects.sort((a, b) => a.start - b.start);
    var rangelist = new RangeList();
    while (range_objects.length) {
      var range = range_objects.shift();
      rangelist.push(range);
      if (!range_objects) {
        break;
      }
      while (range_objects.length && range.end + 1 >= range_objects[0].start) {
        var other_range = range_objects.shift();
        range.end = Math.max(range.end, other_range.end);
      }
    }
    if (excludes) {
      rangelist = new RangeList(
        ...rangelist.setdiff(RangeList.parseFromString(excludes))
      );
    }
    return rangelist;
  }

  *setdiff(other_list) {
    if (!other_list) {
      for (const range of this) {
        yield range;
      }
      return;
    }
    const this_iter = this[Symbol.iterator]();
    const other_iter = other_list[Symbol.iterator]();
    let {value: range, done: range_done} = this_iter.next();
    let {value: other} = other_iter.next();
    // console.log(this.map(r => r+''),other_list.map(r => r+''))
    while (range && !range_done) {
      let value, done;
      for ({value, done} of range.setdiff(other)) {
        if (done && value) {
          yield value;
        }
        else {
          break;
        }
      }
      if (range && other && range.end + 1 >= other.end) {
        ({value: other} = other_iter.next());
      }
      if (done) {
        ({value: range, done: range_done} = this_iter.next());
      }
      else {
        range = value;
      }
    }

  }

  get re() {
    return new RegExp('[' + this.join('') + ']');
  }
}

module.exports = {
  RangeList: RangeList
};
