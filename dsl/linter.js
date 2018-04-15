/* eslint no-unused-vars: ["error", { "args": "none" }] */
/**
 * Linter
 *
 * Collect a series of named rangelists, and creates
 * a distinct list of rangelists.
 *
 * a-z, d-f -> a-c, d-f, g-z
 */
const { Range } = require('./range');
const { RangeList } = require('./rangelist');

function sortNamedRangeLists(array) {
  array.sort((a, b) => a.rangelist[0].start - b.rangelist[0].start);
}

function nextRange(inputs) {
  sortNamedRangeLists(inputs);
  const start = inputs[0].rangelist[0].start;
  // all ranglists starting at our start
  const current = inputs.filter(
    ({ rangelist }) => rangelist[0].start === start
  );
  let end = Math.min(...current.map(( { rangelist } ) => rangelist[0].end));
  if (inputs.length > current.length) {
    // we have more ranges, we might need to stop at the start of
    // the next in the (sorted) list.
    end = Math.min(end, inputs[current.length].rangelist[0].start - 1);
  }
  // Adjust current ranges
  // Possibly drop Range from RangeList
  // Possibly drop RangeList from inputs if empty
  const newStart = end + 1;
  for (const namedRangeList of current) {
    if (namedRangeList.rangelist[0].end === end) {
      // The Range is dealt with, shift it.
      namedRangeList.rangelist.shift();
    }
    else {
      namedRangeList.rangelist[0].start = newStart;
    }
  }
  const names = current.map(({ name }) => name);
  names.sort();
  return [
    names,
    new Range(start, end)
  ];
}

class Linter {

  constructor(rangelists) {
    rangelists = rangelists || {};
    this._rangelists = new Map();
    for (const name of Object.keys(rangelists)) {
      this.addRangeList(name, rangelists[name]);
    }
  }

  addRangeList(name, rangelist, excludes='') {
    if (typeof rangelist === 'string') {
      rangelist = RangeList.parseFromString(rangelist, excludes);
    }
    this._rangelists.set(name, rangelist);
  }

  splitRangeLists() {
    let inputs = Array.from(
      this._rangelists,
      ([name, rl]) =>
        ({
          'name': name,
          'rangelist': new RangeList(...rl.map(
            range => new Range(range)
          ))  // deep clone Rangelist, we'll modify
        }));
    const result = {}, dependencies = new Map();
    while (inputs.length) {
      if (inputs.length === 1) {
        const {name, rangelist} = inputs.pop();
        if (!(name in result)) {
          result[name] = new RangeList();
        }
        result[name].push(...rangelist);
      }
      else {
        const [names, range] = nextRange(inputs);
        let name = names[0];
        if (names.length > 1) {
          name = '_' + names.join('_');
          for (const dependent of names) {
            if (!dependencies.has(dependent)) {
              dependencies.set(dependent, new Set());
            }
            dependencies.get(dependent).add(name);
          }
        }
        if (!(name in result)) {
          result[name] = new RangeList();
        }
        result[name].push(range);
        // we might need to strip empty RangeLists from inputs
        inputs = inputs.filter(({rangelist}) => rangelist.length);
      }
    }
    return {
      ranges: result,
      dependencies: dependencies
    };
  }

  rules(splitRules, choice) {
    splitRules = splitRules || this.splitRangeLists();
    choice = choice || global.choice;
    const { ranges, dependencies } = splitRules;
    const rules = {};
    const ruleNames = new Set(
      Object.keys(
        ranges
      ).concat(
        ...dependencies.keys()
      )
    );
    for (const name of ruleNames) {
      const args = [];
      if (name in ranges) {
        args.push(ranges[name].re);
      }
      if (dependencies.has(name)) {
        args.splice(
          2, 0,
          ...Array.from(
            dependencies.get(name)
          )
            .sort()
            .map(dep_name => dep_name[0] === '_' ? dep_name : '_' + dep_name)
        );
      }
      if (args.length > 1) {
        rules[name] = function($) {
          return choice(
            ...args
              .map(arg => (arg instanceof RegExp) ? arg : $[arg])
          );
        };
      }
      else {
        if (args[0] instanceof RegExp) {
          rules[name] = $ => args[0];
        }
        else {
          rules[name] = $ => $[args[0]];
        }
      }
    }
    return rules;
  }

}

module.exports = {
  Linter: Linter,
  nextRange: nextRange
};
