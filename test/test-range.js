const vows = require('vows'),
    assert = require('assert');
const { Range } = require('../dsl/range');

const suite = vows.describe('Range');

suite.addBatch({
    'create start': {
        topic: new Range('a'),
        'start === end': function(range) {
            assert.equal(range.start, range.end);
        }
    },
    'create start & end': {
        topic: new Range('a', 'b'),
        'start + 1 === end': function(range) {
            assert.equal(range.start + 1, range.end);
        },
        'start === a': function(range) {
            assert.equal(range.start, 'a'.codePointAt(0));
            assert.equal(range.start, 'a'.charCodeAt(0));
        }
    },
    'serialize dot': {
        topic: new Range('.', 'a'),
        'with toString': function(range) {
            let s = range + '';
            assert.equal(s, '\\.-a');
        }
    },
    'serialize []]': {
        topic: new Range('[', ']'),
        'with toString': function(range) {
            let s = range + '';
            assert.equal(s, '\\[-\\]');
        }
    }
});

suite.addBatch({
    'no other': {
        topic: Array.from(new Range('d', 'f').setdiff(undefined)),
        'get initial range, done': function(rangelist) {
            const ref = new Range('d', 'f');
            assert.deepStrictEqual(rangelist, [
                {
                    value: ref,
                    done: true
                }
            ]);
        }
    },
    'no overlap from left': {
        topic: Array.from(new Range('d', 'f').setdiff(new Range('a', 'c'))),
        'get initial range, not done': function(rangelist) {
            const ref = new Range('d', 'f');
            assert.deepStrictEqual(rangelist, [
                {
                    value: ref,
                    done: false
                }
            ]);
        }
    },
    'cut into the left': {
        topic: Array.from(new Range('d', 'f').setdiff(new Range('a', 'd'))),
        'get tail and not done': function(rangelist) {
            const ref = new Range('e', 'f');
            assert.deepStrictEqual(rangelist, [
                {
                    value: ref,
                    done: false
                }
            ]);
        }
    },
    'same range': {
        topic: Array.from(new Range('d', 'f').setdiff(new Range('d', 'f'))),
        'both this and other done': function(rangelist) {
            assert.deepStrictEqual(rangelist, [
                {
                    value: null,
                    done: true
                }
            ]);
        }
    },
    'overlapping range': {
        topic: Array.from(new Range('d', 'f').setdiff(new Range('c', 'h'))),
        'get just done': function(rangelist) {
            assert.deepStrictEqual(rangelist, [
                {
                    value: null,
                    done: true
                }
            ]);
        }
    },
    'subrange': {
        topic: Array.from(new Range('d', 'f').setdiff(new Range('e', 'e'))),
        'get head (done) and tail (not done)': function(rangelist) {
            assert.deepStrictEqual(rangelist, [
                {
                    value: new Range('d'),
                    done: true
                },
                {
                    value: new Range('f'),
                    done: false
                }
            ]);
        }
    },
    'head and done': {
        topic: Array.from(new Range('d', 'f').setdiff(new Range('e', 'f'))),
        'get head and done': function(rangelist) {
            assert.deepStrictEqual(rangelist, [
                {
                    value: new Range('d'),
                    done: true
                }
            ]);
        }
    },
    'no overlap on the right': {
        topic: Array.from(new Range('d', 'f').setdiff(new Range('g', 'j'))),
        'get initial range and done': function(rangelist) {
            const ref = new Range('d', 'f');
            assert.deepStrictEqual(rangelist, [
                {
                    value: ref,
                    done: true
                }
            ]);
        }
    }
});

suite.export(module);
