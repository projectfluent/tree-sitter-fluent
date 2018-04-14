const
  vows = require('vows'),
  assert = require('assert');
const {Document} = require('tree-sitter');
const Language = require('..');

const suite = vows.describe('Parsing Errors');

suite.addBatch({
  'break pattern': {
    'with {': function() {
      const document = new Document();
      document.setLanguage(Language);
      document.setInputString('one = has a string');
      document.parse();
      document.setInputString('one = has a { string');
      document.parse();
      let node = document.rootNode.descendantForIndex(12);
      console.log(node.toString(), node);
      node = document.rootNode.descendantForIndex(13);
      console.log(node.toString(), node);
      node = document.rootNode.descendantForIndex(14);
      console.log(node);
      node = document.rootNode.descendantForIndex(15);
      console.log(node);
    }
  }
});

suite.export(module);
