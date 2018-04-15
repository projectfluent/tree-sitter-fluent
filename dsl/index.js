const { RangeList } = require('./rangelist');

function ranges_without(ranges, excludes='') {
  ranges = RangeList.parseFromString(ranges, excludes);
  return ranges.re;
}

module.exports = {
  ranges_without: ranges_without
};
