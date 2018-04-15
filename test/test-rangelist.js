const
  vows = require('vows'),
  assert = require('assert');
const { RangeList } = require('../dsl/rangelist');
const { Range } = require('../dsl/range');

const suite = vows.describe('RangeList');

suite.addBatch({
  'parsing a sequence of chars': {
    topic: RangeList.parseFromString('azk'),
    'has 3 ranges': function(ranges) {
      assert.equal(ranges.length, 3);
    },
    'starts with a': function(ranges) {
      var range = ranges[0];
      var a_charcode = 'a'.charCodeAt(0);
      assert.equal(range.start, a_charcode);
      assert.equal(range.end, a_charcode);
    },
    'ends with z': function(ranges) {
      var range = ranges[2];
      var a_charcode = 'z'.charCodeAt(0);
      assert.equal(range.start, a_charcode);
      assert.equal(range.end, a_charcode);
    }
  },
  'collapses code points': {
    topic: RangeList.parseFromString('ab'),
    'has 1 range': function(ranges) {
      assert.equal(ranges.length, 1);
    },
    'goes from a to b': function(ranges) {
      var range = ranges[0];
      var start_charcode = 'a'.charCodeAt(0);
      var end_charcode = 'b'.charCodeAt(0);
      assert.equal(range.start, start_charcode);
      assert.equal(range.end, end_charcode);
    }
  },
  'parse a range': {
    topic: RangeList.parseFromString('a-k'),
    'has 1 range': function(ranges) {
      assert.equal(ranges.length, 1);
    },
    'goes from a to k': function(ranges) {
      var range = ranges[0];
      var a_charcode = 'a'.charCodeAt(0);
      var k_charcode = 'k'.charCodeAt(0);
      assert.equal(range.start, a_charcode);
      assert.equal(range.end, k_charcode);
    }
  },
  'collapses ranges': {
    topic: RangeList.parseFromString('a-kc-m'),
    'has 1 range': function(ranges) {
      assert.equal(ranges.length, 1);
    },
    'goes from a to m': function(ranges) {
      var range = ranges[0];
      var a_charcode = 'a'.charCodeAt(0);
      var m_charcode = 'm'.charCodeAt(0);
      assert.equal(range.start, a_charcode);
      assert.equal(range.end, m_charcode);
    }
  }
});

suite.addBatch({
  'empty other rangelist': {
    topic: Array.from(RangeList.parseFromString('d-f').setdiff(undefined)),
    'should just yield one Range': function(ranges) {
      assert.deepStrictEqual(ranges, [
        new Range(100, 102)
      ]);
    }
  },
  'equal other rangelist': {
    topic: Array.from(
      RangeList.parseFromString('d-f').setdiff(
        RangeList.parseFromString('d-f')
      )),
    'should be empty': function(ranges) {
      assert.deepStrictEqual(ranges, []);
    }
  },
  'no overlap leading': {
    topic: Array.from(
      RangeList.parseFromString('d-f').setdiff(
        RangeList.parseFromString('a-c')
      )),
    'should be empty': function(ranges) {
      assert.deepStrictEqual(ranges, [
        new Range(100, 102)
      ]);
    }
  },
  'no overlap trailin': {
    topic: Array.from(
      RangeList.parseFromString('d-f').setdiff(
        RangeList.parseFromString('g-h')
      )),
    'should be empty': function(ranges) {
      assert.deepStrictEqual(ranges, [
        new Range(100, 102)
      ]);
    }
  },
  'slicing': {
    topic: Array.from(
      RangeList.parseFromString('d-f').setdiff(
        RangeList.parseFromString('e')
      )),
    'should have head and tail': function(ranges) {
      assert.deepStrictEqual(ranges, [
        new Range(100),
        new Range(102)
      ]);
    }
  },
  'slicing with head': {
    topic: Array.from(
      RangeList.parseFromString('ad-f').setdiff(
        RangeList.parseFromString('e')
      )),
    'should have two heads and tail': function(ranges) {
      assert.deepStrictEqual(ranges, [
        new Range(97),
        new Range(100),
        new Range(102)
      ]);
    }
  },
  'slicing with tail': {
    topic: Array.from(
      RangeList.parseFromString('d-fi').setdiff(
        RangeList.parseFromString('e')
      )),
    'should have head and two tails': function(ranges) {
      assert.deepStrictEqual(ranges, [
        new Range(100),
        new Range(102),
        new Range(105)
      ]);
    }
  }
});

suite.export(module);
