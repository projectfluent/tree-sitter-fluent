const { RangeList } = require('./rangelist');

function ranges_without(ranges, excludes='') {
    var ranges = RangeList.parseFromString(ranges);
    var excludes = RangeList.parseFromString(excludes);
    var re_source = '[';
    for (const range of ranges.setdiff(excludes)) {
        re_source += range;
    }
    re_source += ']';
    return new RegExp(re_source);
}

module.exports = {
    ranges_without: ranges_without
};
