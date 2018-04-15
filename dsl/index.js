const { RangeList } = require('./rangelist');
const { Linter } = require('./linter');

function ranges_without(ranges, excludes='') {
  ranges = RangeList.parseFromString(ranges, excludes);
  return ranges.re;
}

module.exports = {
  Linter: Linter,
  ranges_without: ranges_without
};
