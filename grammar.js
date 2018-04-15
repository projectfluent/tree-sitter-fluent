/* global grammar, choice, optional, repeat, repeat1, seq */
/* eslint no-control-regex: "off" */
/* eslint no-unused-vars: ["error", { "args": "none" }] */

const { Linter, ranges_without } = require('./dsl');

// https://www.w3.org/TR/REC-xml/#NT-Char
// excluding two-word, \u{010000}-\u{10FFFF}
const NT_Char = '\x09\x0A\x0D\x20-\uD7FF\uE000-\uFFFD';

const linter = new Linter();
linter.addRangeList('_identifier_start', '[a-zA-Z]');
linter.addRangeList('_identifier', 'a-zA-Z_0-9_-');
linter.addRangeList('_term_sigil', '-');
linter.addRangeList('_external_sigil', '$');
linter.addRangeList('_inline_char', NT_Char, '\r\n\\{');
linter.addRangeList('_comment_char', NT_Char, '\r\n');

module.exports = grammar({
  name: 'fluent',

  extras: $ => [],

  rules: Object.assign({
    body: $ => seq(
      repeat($._blank_line),
      repeat(seq(
        $._entry,
        $._line_break,
        repeat($._blank_line)
      )),
      optional($._entry)
    ),

    _entry: $ => choice(
      $._comment,
      $.term,
      $.message
    ),

    _comment: $ => choice(
      $.resource_comment,
      $.block_comment,
      $.comment),
    resource_comment: $ => seq('###', optional(/[ \t].*/)),
    block_comment: $ => seq('##', optional(/[ \t].*/)),
    comment: $ => seq('#', optional(/[ \t].*/)),

    identifier: $ => seq(
      $._identifier_start,
      repeat($._identifier)
    ),
    term_identifier: $ => seq(
      $._term_sigil,
      $._identifier_start,
      repeat($._identifier)
    ),
    external_identifier: $ => seq(
      $._external_sigil,
      $._identifier_start,
      repeat($._identifier)
    ),

    /* line feed, carriage return; space, tab */
    _line_break: $ => /[\u000A\u000D]+/,
    _inline_space: $ => /[\u0020\u0009]+/,
    _blank_line: $ =>  seq(optional($._inline_space), $._line_break),

    /* if you break lines you need to indent afterwards */
    _break_indent: $ => seq($._line_break, $._inline_space),

    _char: $ => choice($._inline_char, $._line_break),
    _hexdigit: $ => /[0-9a-fA-F]/,
    _text: $ => repeat1(
      choice(
        $._inline_char,
        '\\{',
        seq('\\u', $._hexdigit, $._hexdigit, $._hexdigit, $._hexdigit),
        /\\[\\{]/
      )
    ),

    message: $ => seq(
      $.identifier,
      optional($._inline_space), '=', optional($._inline_space),
      $.pattern
    ),

    term: $ => seq(
      $.term_identifier,
      optional($._inline_space), '=', optional($._inline_space),
      $.pattern
    ),

    attribute: $ => seq(
      $._break_indent,  // required indent
      '.', $.identifier,
      optional($._inline_space), '=', optional($._inline_space),
      $.pattern
    ),

    pattern: $ => $._text
  }, linter.rules())
});
