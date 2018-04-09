const vows = require('vows'),
    assert = require('assert');
const { ranges_without } = require('../dsl');

const suite = vows.describe('Integration Test');

suite.addBatch({
    'slicing a complex pattern': {
        topic: ranges_without('ad-gz', 'f'),
        'should produce 4 ranges': function(regex) {
            assert.equal(regex.source, '[ad-egz]');
        }
    },
    'practical example': {
        topic: ranges_without('\u0009\u0020-\uD7FF\uE000-\uFFFD', '\\{'),
        'should exclude backslash': function(regex) {
            assert.equal(
                regex.source,
                '[\u0009\u0020-\\[\\]-\u007A\u007C-\uD7FF\uE000-\uFFFD]');
        }
    }
});

suite.export(module);
