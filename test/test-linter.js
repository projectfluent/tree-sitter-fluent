const
  vows = require('vows'),
  assert = require('assert');
const { Linter, nextRange } = require('../dsl/linter');
const { RangeList } = require('../dsl/rangelist');
const { Range } = require('../dsl/range');

const suite = vows.describe('Linter');

function inputsSummary(inputs) {
  const rv = {};
  for (const { name, rangelist } of inputs) {
    rv[name] = {
      length: rangelist.length,
      next: rangelist.length ? rangelist[0].start : null
    };
  }
  return rv;
}

suite.addBatch({
  'nextRange': {
    'equal ranges': function() {
      const inputs = [
        {
          name: 'one',
          rangelist: RangeList.parseFromString('g-n')
        },
        {
          name: 'two',
          rangelist: RangeList.parseFromString('g-n')
        }
      ];
      const [names, range] = nextRange(inputs);
      assert.deepStrictEqual(names, ['one', 'two']);
      assert.deepStrictEqual(range, new Range('g', 'n'));
      // check remainder
      assert.deepStrictEqual(
        inputsSummary(inputs),
        ({one: {length: 0, next: null}, two: {length: 0, next: null}})
      );
    },
    'distinct ranges': function() {
      const inputs = [
        {
          name: 'one',
          rangelist: RangeList.parseFromString('a-f')
        },
        {
          name: 'two',
          rangelist: RangeList.parseFromString('g-n')
        }
      ];
      const [names, range] = nextRange(inputs);
      assert.deepStrictEqual(names, ['one']);
      assert.deepStrictEqual(range, new Range('a', 'f'));
      // check remainder
      assert.deepStrictEqual(
        inputsSummary(inputs),
        ({one: {length: 0, next: null}, two: {length: 1, next: 103}})
      );
    },
    'same start and different end ranges': function() {
      const inputs = [
        {
          name: 'one',
          rangelist: RangeList.parseFromString('g-j')
        },
        {
          name: 'two',
          rangelist: RangeList.parseFromString('g-n')
        }
      ];
      const [names, range] = nextRange(inputs);
      assert.deepStrictEqual(names, ['one', 'two']);
      assert.deepStrictEqual(range, new Range('g', 'j'));
      // check remainder
      assert.deepStrictEqual(
        inputsSummary(inputs),
        ({one: {length: 0, next: null}, two: {length: 1, next: 107}})
      );
    },
    'overlapping ranges': function() {
      const inputs = [
        {
          name: 'one',
          rangelist: RangeList.parseFromString('g-n')
        },
        {
          name: 'two',
          rangelist: RangeList.parseFromString('k-z')
        }
      ];
      const [names, range] = nextRange(inputs);
      assert.deepStrictEqual(names, ['one']);
      assert.deepStrictEqual(range, new Range('g', 'j'));
      // check remainder
      assert.deepStrictEqual(
        inputsSummary(inputs),
        ({one: {length: 1, next: 107}, two: {length: 1, next: 107}})
      );
    },
    'three nested ranges': function() {
      const inputs = [
        {
          name: 'one',
          rangelist: RangeList.parseFromString('g-t')
        },
        {
          name: 'two',
          rangelist: RangeList.parseFromString('i-r')
        },
        {
          name: 'three',
          rangelist: RangeList.parseFromString('m-o')
        }
      ];
      const [names, range] = nextRange(inputs);
      assert.deepStrictEqual(names, ['one']);
      assert.deepStrictEqual(range, new Range('g', 'h'));
      // check remainder
      assert.deepStrictEqual(
        inputsSummary(inputs),
        ({
          one: {length: 1, next: 105},
          two: {length: 1, next: 105},
          three: {length: 1, next: 109}
        })
      );
    }
  }
});

suite.addBatch({
  'Linter constructor': {
    'empty constructor': function () {
      const linter = new Linter();
      linter.addRangeList('one', 'a-z');
      assert.equal(linter._rangelists.size, 1);
    },
    'with explicit rangelists': function() {
      const rangelist = RangeList.parseFromString('a-z');
      const linter = new Linter({one: rangelist});
      assert.equal(linter._rangelists.size, 1);
      linter.addRangeList(
        'two',
        RangeList.parseFromString('d-f')
      );
      assert.equal(linter._rangelists.size, 2);
    },
    'with string arguments': function() {
      const linter = new Linter({one: 'adf'});
      linter.addRangeList('two', 'm-z', 'k');
      assert.equal(linter._rangelists.size, 2);
    }
  }
});

suite.addBatch({
  'Linter.splitRangeLists': {
    'disconnected rangelists': {
      topic: {
        'one': RangeList.parseFromString('g-n')
      },
      'simple returns a single rangelist': function(topic) {
        const linter = new Linter(topic);
        const result = linter.splitRangeLists();
        assert.deepStrictEqual(
          result.ranges.one,
          RangeList.parseFromString('g-n')
        );
        assert.deepStrictEqual(
          result.dependencies,
          new Map()
        );
      },
      'distinct ranges return two rangelists': function(topic) {
        const linter = new Linter(topic);
        linter.addRangeList('two', RangeList.parseFromString('a-f'));
        const result = linter.splitRangeLists();
        assert.deepStrictEqual(
          result.ranges.one,
          RangeList.parseFromString('g-n')
        );
        assert.deepStrictEqual(
          result.ranges.two,
          RangeList.parseFromString('a-f')
        );
        assert.deepStrictEqual(
          result.dependencies,
          new Map()
        );
      },
      'wrapped ranges return two rangelists': function(topic) {
        const linter = new Linter(topic);
        linter.addRangeList('two', RangeList.parseFromString('a-fu-z'));
        const result = linter.splitRangeLists();
        assert.deepStrictEqual(
          result.ranges.one,
          RangeList.parseFromString('g-n')
        );
        assert.deepStrictEqual(
          result.ranges.two,
          RangeList.parseFromString('a-fu-z')
        );
        assert.deepStrictEqual(
          result.dependencies,
          new Map()
        );
      }
    }
  }
});

suite.addBatch({
  'Linter.splitRangeLists': {
    'overlapping rangelists': {
      topic: {
        'one': RangeList.parseFromString('g-t')
      },
      'same ranges create one rangelist': function (topic) {
        const linter = new Linter(topic);
        linter.addRangeList('two', RangeList.parseFromString('g-t'));
        const result = linter.splitRangeLists();
        assert.deepStrictEqual(
          result.ranges._one_two,
          RangeList.parseFromString('g-t')
        );
        assert.deepStrictEqual(
          result.dependencies,
          new Map([
            ['one', new Set(['_one_two'])],
            ['two', new Set(['_one_two'])],
          ])
        );
      },
      'subset range creates three rangelists': function (topic) {
        const linter = new Linter(topic);
        linter.addRangeList('two', RangeList.parseFromString('j'));
        const result = linter.splitRangeLists();
        assert.deepStrictEqual(
          result.ranges.one,
          RangeList.parseFromString('g-ik-t')
        );
        assert.deepStrictEqual(
          result.ranges._one_two,
          RangeList.parseFromString('j')
        );
        assert.deepStrictEqual(
          result.dependencies,
          new Map([
            ['one', new Set(['_one_two'])],
            ['two', new Set(['_one_two'])],
          ])
        );
      },
      'double subset range creates many rangelists': function (topic) {
        const linter = new Linter(topic);
        linter.addRangeList('two', RangeList.parseFromString('i-r'));
        linter.addRangeList('three', RangeList.parseFromString('m-o'));
        const result = linter.splitRangeLists();
        assert.deepStrictEqual(
          Object.keys(result.ranges),
          ['one', '_one_two', '_one_three_two']
        );
        assert.deepStrictEqual(
          result.ranges.one,
          RangeList.parseFromString('g-hs-t')
        );
        assert.deepStrictEqual(
          result.ranges._one_two,
          RangeList.parseFromString('i-lp-r')
        );
        assert.deepStrictEqual(
          result.ranges._one_three_two,
          RangeList.parseFromString('m-o')
        );
        assert.deepStrictEqual(
          result.dependencies,
          new Map([
            ['one', new Set(['_one_two', '_one_three_two'])],
            ['two', new Set(['_one_two', '_one_three_two'])],
            ['three', new Set(['_one_three_two'])],
          ])
        );
      }
    }
  }
});

function gatherChoices(...args) {
  return new Array(...args);
}

suite.addBatch({
  'Linter.rules': {
    'Single rule': function() {
      const linter = new Linter();
      linter.addRangeList('one', 'a-z');
      const rules = linter.rules(null, gatherChoices);
      assert.deepStrictEqual(
        Object.keys(rules),
        ['one']
      );
      assert.ok(rules.one().test('a'));
    },
    'complex rules': function() {
      const linter = new Linter();
      linter.addRangeList('one', 'a-z');
      linter.addRangeList('two', 'c-w', 'g-t');
      linter.addRangeList('three', 'j-m');
      const rules = linter.rules(null, gatherChoices);
      assert.deepStrictEqual(
        Object.keys(rules).sort(),
        [ '_one_three', '_one_two', 'one', 'three', 'two' ]
      );
      // mock $ to have dependencies
      const $ = {
        _one_two: $ => $['foo'],
        _one_three: $ => $['bar']
      };
      // one depends on one_two and one_three
      let rule = rules.one($);
      assert.equal(rule.length, 3);
      assert.deepStrictEqual(rule[0], /[a-bg-in-tx-z]/);
      assert.equal(rule[1], $._one_three);
      assert.equal(rule[2], $._one_two);
      // two has only dependencies, so straight function
      rule = rules.two($);
      assert.equal(rule, $._one_two);
      // three depends on one_three only
      rule = rules.three($);
      assert.equal(rule, $._one_three);
    }
  }
});

suite.export(module);
