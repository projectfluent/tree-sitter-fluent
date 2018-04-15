#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 68
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND_POUND_POUND = 1,
  aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH = 2,
  anon_sym_POUND_POUND = 3,
  anon_sym_POUND = 4,
  sym__line_break = 5,
  sym__inline_space = 6,
  sym__hexdigit = 7,
  anon_sym_BSLASH_LBRACE = 8,
  anon_sym_BSLASHu = 9,
  aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH = 10,
  anon_sym_EQ = 11,
  anon_sym_DOT = 12,
  aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH = 13,
  sym___external_sigil__inline_char = 14,
  sym___identifier__inline_char__term_sigil = 15,
  sym___identifier__inline_char = 16,
  sym___identifier__identifier_start__inline_char = 17,
  sym___identifier_start__inline_char = 18,
  sym_body = 19,
  sym__entry = 20,
  sym__comment = 21,
  sym_resource_comment = 22,
  sym_block_comment = 23,
  sym_comment = 24,
  sym_identifier = 25,
  sym_term_identifier = 26,
  sym__blank_line = 27,
  sym__text = 28,
  sym_message = 29,
  sym_term = 30,
  sym_pattern = 31,
  sym__inline_char = 32,
  sym__identifier = 33,
  sym__term_sigil = 34,
  sym__identifier_start = 35,
  aux_sym_body_repeat1 = 36,
  aux_sym_body_repeat2 = 37,
  aux_sym_identifier_repeat1 = 38,
  aux_sym__text_repeat1 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_POUND_POUND_POUND] = "###",
  [aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH] = "/[ \\t].*/",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND] = "#",
  [sym__line_break] = "_line_break",
  [sym__inline_space] = "_inline_space",
  [sym__hexdigit] = "_hexdigit",
  [anon_sym_BSLASH_LBRACE] = "\\{",
  [anon_sym_BSLASHu] = "\\u",
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = "/\\\\[\\\\{]/",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = "/[	 -#%-,\\.-\\/:-@^`|-퟿-�]/",
  [sym___external_sigil__inline_char] = "__external_sigil__inline_char",
  [sym___identifier__inline_char__term_sigil] = "__identifier__inline_char__term_sigil",
  [sym___identifier__inline_char] = "__identifier__inline_char",
  [sym___identifier__identifier_start__inline_char] = "__identifier__identifier_start__inline_char",
  [sym___identifier_start__inline_char] = "__identifier_start__inline_char",
  [sym_body] = "body",
  [sym__entry] = "_entry",
  [sym__comment] = "_comment",
  [sym_resource_comment] = "resource_comment",
  [sym_block_comment] = "block_comment",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_term_identifier] = "term_identifier",
  [sym__blank_line] = "_blank_line",
  [sym__text] = "_text",
  [sym_message] = "message",
  [sym_term] = "term",
  [sym_pattern] = "pattern",
  [sym__inline_char] = "_inline_char",
  [sym__identifier] = "_identifier",
  [sym__term_sigil] = "_term_sigil",
  [sym__identifier_start] = "_identifier_start",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym__text_repeat1] = "_text_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_space] = {
    .visible = false,
    .named = true,
  },
  [sym__hexdigit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHu] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym___external_sigil__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier__inline_char__term_sigil] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier__identifier_start__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier_start__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_resource_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_term_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__term_sigil] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_start] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '_')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(14);
      if (('[' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      if (('!' <= lookahead && lookahead <= '`') ||
          ('|' <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65533))
        ADVANCE(18);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym___external_sigil__inline_char);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym___identifier__inline_char__term_sigil);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == 'u')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym___identifier__inline_char);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym___identifier_start__inline_char);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__hexdigit);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym___identifier__identifier_start__inline_char);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(14);
      if (lookahead == '[' ||
          lookahead == ']')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(13);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(23);
      if (('[' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      if (('!' <= lookahead && lookahead <= '`') ||
          ('|' <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65533))
        ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(14);
      if (('[' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '`') ||
          ('|' <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65533))
        ADVANCE(18);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__inline_space] = ACTIONS(3),
    [sym__hexdigit] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(3),
    [sym___external_sigil__inline_char] = ACTIONS(1),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(1),
    [sym___identifier__inline_char] = ACTIONS(3),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(3),
    [sym___identifier_start__inline_char] = ACTIONS(1),
  },
  [1] = {
    [sym_body] = STATE(6),
    [sym__entry] = STATE(7),
    [sym__comment] = STATE(7),
    [sym_resource_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_identifier] = STATE(8),
    [sym_term_identifier] = STATE(9),
    [sym__blank_line] = STATE(12),
    [sym_message] = STATE(7),
    [sym_term] = STATE(7),
    [sym__term_sigil] = STATE(10),
    [sym__identifier_start] = STATE(11),
    [aux_sym_body_repeat1] = STATE(12),
    [aux_sym_body_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym__line_break] = ACTIONS(13),
    [sym__inline_space] = ACTIONS(15),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(17),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(19),
    [sym___identifier_start__inline_char] = ACTIONS(19),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH] = ACTIONS(23),
    [sym__line_break] = ACTIONS(21),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH] = ACTIONS(27),
    [sym__line_break] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH] = ACTIONS(31),
    [sym__line_break] = ACTIONS(29),
  },
  [5] = {
    [sym__line_break] = ACTIONS(33),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__line_break] = ACTIONS(39),
  },
  [8] = {
    [sym__inline_space] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(43),
  },
  [9] = {
    [sym__inline_space] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(47),
  },
  [10] = {
    [sym__identifier_start] = STATE(23),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(49),
    [sym___identifier_start__inline_char] = ACTIONS(49),
  },
  [11] = {
    [sym__identifier] = STATE(24),
    [aux_sym_identifier_repeat1] = STATE(24),
    [sym__inline_space] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(53),
    [sym___identifier__inline_char] = ACTIONS(53),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(53),
  },
  [12] = {
    [sym__entry] = STATE(25),
    [sym__comment] = STATE(25),
    [sym_resource_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_identifier] = STATE(8),
    [sym_term_identifier] = STATE(9),
    [sym__blank_line] = STATE(26),
    [sym_message] = STATE(25),
    [sym_term] = STATE(25),
    [sym__term_sigil] = STATE(10),
    [sym__identifier_start] = STATE(11),
    [aux_sym_body_repeat1] = STATE(26),
    [aux_sym_body_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym__line_break] = ACTIONS(55),
    [sym__inline_space] = ACTIONS(15),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(17),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(19),
    [sym___identifier_start__inline_char] = ACTIONS(19),
  },
  [13] = {
    [sym__entry] = STATE(25),
    [sym__comment] = STATE(25),
    [sym_resource_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_identifier] = STATE(8),
    [sym_term_identifier] = STATE(9),
    [sym_message] = STATE(25),
    [sym_term] = STATE(25),
    [sym__term_sigil] = STATE(10),
    [sym__identifier_start] = STATE(11),
    [aux_sym_body_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(17),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(19),
    [sym___identifier_start__inline_char] = ACTIONS(19),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym__line_break] = ACTIONS(57),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__line_break] = ACTIONS(59),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__line_break] = ACTIONS(61),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(63),
    [anon_sym_POUND_POUND] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(65),
    [sym__line_break] = ACTIONS(63),
    [sym__inline_space] = ACTIONS(63),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(63),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(63),
    [sym___identifier_start__inline_char] = ACTIONS(63),
  },
  [18] = {
    [sym__blank_line] = STATE(29),
    [aux_sym_body_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(67),
    [anon_sym_POUND_POUND] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(69),
    [sym__line_break] = ACTIONS(71),
    [sym__inline_space] = ACTIONS(15),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(67),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(67),
    [sym___identifier_start__inline_char] = ACTIONS(67),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(73),
  },
  [20] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(34),
    [sym__inline_char] = STATE(35),
    [aux_sym__text_repeat1] = STATE(35),
    [sym__inline_space] = ACTIONS(75),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(77),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(81),
    [sym___external_sigil__inline_char] = ACTIONS(77),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(77),
    [sym___identifier__inline_char] = ACTIONS(77),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(77),
    [sym___identifier_start__inline_char] = ACTIONS(77),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(83),
  },
  [22] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(38),
    [sym__inline_char] = STATE(35),
    [aux_sym__text_repeat1] = STATE(35),
    [sym__inline_space] = ACTIONS(85),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(77),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(81),
    [sym___external_sigil__inline_char] = ACTIONS(77),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(77),
    [sym___identifier__inline_char] = ACTIONS(77),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(77),
    [sym___identifier_start__inline_char] = ACTIONS(77),
  },
  [23] = {
    [sym__identifier] = STATE(39),
    [aux_sym_identifier_repeat1] = STATE(39),
    [sym__inline_space] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(89),
    [sym___identifier__inline_char] = ACTIONS(89),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(89),
  },
  [24] = {
    [sym__identifier] = STATE(40),
    [aux_sym_identifier_repeat1] = STATE(40),
    [sym__inline_space] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(91),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(93),
    [sym___identifier__inline_char] = ACTIONS(93),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(93),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym__line_break] = ACTIONS(39),
  },
  [26] = {
    [sym__blank_line] = STATE(26),
    [aux_sym_body_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(97),
    [anon_sym_POUND_POUND] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [sym__line_break] = ACTIONS(101),
    [sym__inline_space] = ACTIONS(104),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(97),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(97),
    [sym___identifier_start__inline_char] = ACTIONS(97),
  },
  [27] = {
    [sym__entry] = STATE(41),
    [sym__comment] = STATE(41),
    [sym_resource_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_identifier] = STATE(8),
    [sym_term_identifier] = STATE(9),
    [sym_message] = STATE(41),
    [sym_term] = STATE(41),
    [sym__term_sigil] = STATE(10),
    [sym__identifier_start] = STATE(11),
    [aux_sym_body_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(17),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(19),
    [sym___identifier_start__inline_char] = ACTIONS(19),
  },
  [28] = {
    [sym__entry] = STATE(42),
    [sym__comment] = STATE(42),
    [sym_resource_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_identifier] = STATE(43),
    [sym_term_identifier] = STATE(44),
    [sym_message] = STATE(42),
    [sym_term] = STATE(42),
    [sym__term_sigil] = STATE(10),
    [sym__identifier_start] = STATE(11),
    [aux_sym_body_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(107),
    [anon_sym_POUND_POUND] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(113),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(116),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(119),
    [sym___identifier_start__inline_char] = ACTIONS(119),
  },
  [29] = {
    [sym__blank_line] = STATE(26),
    [aux_sym_body_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(122),
    [anon_sym_POUND_POUND] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(124),
    [sym__line_break] = ACTIONS(55),
    [sym__inline_space] = ACTIONS(15),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(122),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(122),
    [sym___identifier_start__inline_char] = ACTIONS(122),
  },
  [30] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(46),
    [sym__inline_char] = STATE(35),
    [aux_sym__text_repeat1] = STATE(35),
    [sym__inline_space] = ACTIONS(126),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(77),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(81),
    [sym___external_sigil__inline_char] = ACTIONS(77),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(77),
    [sym___identifier__inline_char] = ACTIONS(77),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(77),
    [sym___identifier_start__inline_char] = ACTIONS(77),
  },
  [31] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(46),
    [sym__inline_char] = STATE(35),
    [aux_sym__text_repeat1] = STATE(35),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(77),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(77),
    [sym___external_sigil__inline_char] = ACTIONS(77),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(77),
    [sym___identifier__inline_char] = ACTIONS(77),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(77),
    [sym___identifier_start__inline_char] = ACTIONS(77),
  },
  [32] = {
    [sym__hexdigit] = ACTIONS(128),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym__line_break] = ACTIONS(130),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym__line_break] = ACTIONS(132),
  },
  [35] = {
    [sym__inline_char] = STATE(48),
    [aux_sym__text_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym__line_break] = ACTIONS(134),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(136),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(136),
    [sym___external_sigil__inline_char] = ACTIONS(136),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(136),
    [sym___identifier__inline_char] = ACTIONS(136),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(136),
    [sym___identifier_start__inline_char] = ACTIONS(136),
  },
  [36] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(50),
    [sym__inline_char] = STATE(35),
    [aux_sym__text_repeat1] = STATE(35),
    [sym__inline_space] = ACTIONS(140),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(77),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(81),
    [sym___external_sigil__inline_char] = ACTIONS(77),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(77),
    [sym___identifier__inline_char] = ACTIONS(77),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(77),
    [sym___identifier_start__inline_char] = ACTIONS(77),
  },
  [37] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(50),
    [sym__inline_char] = STATE(35),
    [aux_sym__text_repeat1] = STATE(35),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(77),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(77),
    [sym___external_sigil__inline_char] = ACTIONS(77),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(77),
    [sym___identifier__inline_char] = ACTIONS(77),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(77),
    [sym___identifier_start__inline_char] = ACTIONS(77),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym__line_break] = ACTIONS(142),
  },
  [39] = {
    [sym__identifier] = STATE(40),
    [aux_sym_identifier_repeat1] = STATE(40),
    [sym__inline_space] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(93),
    [sym___identifier__inline_char] = ACTIONS(93),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(93),
  },
  [40] = {
    [sym__identifier] = STATE(40),
    [aux_sym_identifier_repeat1] = STATE(40),
    [sym__inline_space] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(146),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(148),
    [sym___identifier__inline_char] = ACTIONS(148),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(148),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym__line_break] = ACTIONS(39),
  },
  [42] = {
    [sym__line_break] = ACTIONS(39),
  },
  [43] = {
    [sym__inline_space] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(155),
  },
  [44] = {
    [sym__inline_space] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(159),
  },
  [45] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(55),
    [sym__inline_char] = STATE(35),
    [aux_sym__text_repeat1] = STATE(35),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(77),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(77),
    [sym___external_sigil__inline_char] = ACTIONS(77),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(77),
    [sym___identifier__inline_char] = ACTIONS(77),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(77),
    [sym___identifier_start__inline_char] = ACTIONS(77),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym__line_break] = ACTIONS(161),
  },
  [47] = {
    [sym__hexdigit] = ACTIONS(163),
  },
  [48] = {
    [sym__inline_char] = STATE(48),
    [aux_sym__text_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym__line_break] = ACTIONS(165),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(167),
    [anon_sym_BSLASHu] = ACTIONS(170),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(167),
    [sym___external_sigil__inline_char] = ACTIONS(167),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(167),
    [sym___identifier__inline_char] = ACTIONS(167),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(167),
    [sym___identifier_start__inline_char] = ACTIONS(167),
  },
  [49] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(57),
    [sym__inline_char] = STATE(35),
    [aux_sym__text_repeat1] = STATE(35),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(77),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(77),
    [sym___external_sigil__inline_char] = ACTIONS(77),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(77),
    [sym___identifier__inline_char] = ACTIONS(77),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(77),
    [sym___identifier_start__inline_char] = ACTIONS(77),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym__line_break] = ACTIONS(176),
  },
  [51] = {
    [anon_sym_EQ] = ACTIONS(178),
  },
  [52] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(34),
    [sym__inline_char] = STATE(60),
    [aux_sym__text_repeat1] = STATE(60),
    [sym__inline_space] = ACTIONS(180),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(182),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(184),
    [sym___external_sigil__inline_char] = ACTIONS(182),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(182),
    [sym___identifier__inline_char] = ACTIONS(182),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(182),
    [sym___identifier_start__inline_char] = ACTIONS(182),
  },
  [53] = {
    [anon_sym_EQ] = ACTIONS(186),
  },
  [54] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(38),
    [sym__inline_char] = STATE(60),
    [aux_sym__text_repeat1] = STATE(60),
    [sym__inline_space] = ACTIONS(188),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(182),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(184),
    [sym___external_sigil__inline_char] = ACTIONS(182),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(182),
    [sym___identifier__inline_char] = ACTIONS(182),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(182),
    [sym___identifier_start__inline_char] = ACTIONS(182),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym__line_break] = ACTIONS(190),
  },
  [56] = {
    [sym__hexdigit] = ACTIONS(192),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym__line_break] = ACTIONS(194),
  },
  [58] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(46),
    [sym__inline_char] = STATE(60),
    [aux_sym__text_repeat1] = STATE(60),
    [sym__inline_space] = ACTIONS(196),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(182),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(184),
    [sym___external_sigil__inline_char] = ACTIONS(182),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(182),
    [sym___identifier__inline_char] = ACTIONS(182),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(182),
    [sym___identifier_start__inline_char] = ACTIONS(182),
  },
  [59] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(46),
    [sym__inline_char] = STATE(60),
    [aux_sym__text_repeat1] = STATE(60),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(182),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(182),
    [sym___external_sigil__inline_char] = ACTIONS(182),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(182),
    [sym___identifier__inline_char] = ACTIONS(182),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(182),
    [sym___identifier_start__inline_char] = ACTIONS(182),
  },
  [60] = {
    [sym__inline_char] = STATE(65),
    [aux_sym__text_repeat1] = STATE(65),
    [sym__line_break] = ACTIONS(134),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(198),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(198),
    [sym___external_sigil__inline_char] = ACTIONS(198),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(198),
    [sym___identifier__inline_char] = ACTIONS(198),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(198),
    [sym___identifier_start__inline_char] = ACTIONS(198),
  },
  [61] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(50),
    [sym__inline_char] = STATE(60),
    [aux_sym__text_repeat1] = STATE(60),
    [sym__inline_space] = ACTIONS(202),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(182),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(184),
    [sym___external_sigil__inline_char] = ACTIONS(182),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(182),
    [sym___identifier__inline_char] = ACTIONS(182),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(182),
    [sym___identifier_start__inline_char] = ACTIONS(182),
  },
  [62] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(50),
    [sym__inline_char] = STATE(60),
    [aux_sym__text_repeat1] = STATE(60),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(182),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(182),
    [sym___external_sigil__inline_char] = ACTIONS(182),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(182),
    [sym___identifier__inline_char] = ACTIONS(182),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(182),
    [sym___identifier_start__inline_char] = ACTIONS(182),
  },
  [63] = {
    [sym__hexdigit] = ACTIONS(204),
  },
  [64] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(55),
    [sym__inline_char] = STATE(60),
    [aux_sym__text_repeat1] = STATE(60),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(182),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(182),
    [sym___external_sigil__inline_char] = ACTIONS(182),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(182),
    [sym___identifier__inline_char] = ACTIONS(182),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(182),
    [sym___identifier_start__inline_char] = ACTIONS(182),
  },
  [65] = {
    [sym__inline_char] = STATE(65),
    [aux_sym__text_repeat1] = STATE(65),
    [sym__line_break] = ACTIONS(165),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(206),
    [anon_sym_BSLASHu] = ACTIONS(170),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(206),
    [sym___external_sigil__inline_char] = ACTIONS(206),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(206),
    [sym___identifier__inline_char] = ACTIONS(206),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(206),
    [sym___identifier_start__inline_char] = ACTIONS(206),
  },
  [66] = {
    [sym__text] = STATE(33),
    [sym_pattern] = STATE(57),
    [sym__inline_char] = STATE(60),
    [aux_sym__text_repeat1] = STATE(60),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(182),
    [anon_sym_BSLASHu] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(182),
    [sym___external_sigil__inline_char] = ACTIONS(182),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(182),
    [sym___identifier__inline_char] = ACTIONS(182),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(182),
    [sym___identifier_start__inline_char] = ACTIONS(182),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym__line_break] = ACTIONS(212),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(212),
    [anon_sym_BSLASHu] = ACTIONS(212),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACK_TAB_DASH_POUND_PERCENT_DASH_COMMA_BSLASH_DOT_DASH_BSLASH_SLASH_COLON_DASH_AT_CARET_BQUOTE_PIPE_DASH_DASH_RBRACK_SLASH] = ACTIONS(212),
    [sym___external_sigil__inline_char] = ACTIONS(212),
    [sym___identifier__inline_char__term_sigil] = ACTIONS(212),
    [sym___identifier__inline_char] = ACTIONS(212),
    [sym___identifier__identifier_start__inline_char] = ACTIONS(212),
    [sym___identifier_start__inline_char] = ACTIONS(212),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_body, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(12),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_resource_comment, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_block_comment, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_resource_comment, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_block_comment, 2),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym__blank_line, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym__blank_line, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, SHIFT(30),
  [75] = {.count = 1, .reusable = true}, SHIFT(31),
  [77] = {.count = 1, .reusable = true}, SHIFT(35),
  [79] = {.count = 1, .reusable = true}, SHIFT(32),
  [81] = {.count = 1, .reusable = false}, SHIFT(35),
  [83] = {.count = 1, .reusable = true}, SHIFT(36),
  [85] = {.count = 1, .reusable = true}, SHIFT(37),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_term_identifier, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(39),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(40),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat1, 2),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(26),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(5),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(2),
  [110] = {.count = 2, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(3),
  [113] = {.count = 2, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(4),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(10),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(11),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat2, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat2, 3),
  [126] = {.count = 1, .reusable = true}, SHIFT(45),
  [128] = {.count = 1, .reusable = true}, SHIFT(47),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_message, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__text, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(48),
  [138] = {.count = 1, .reusable = false}, SHIFT(48),
  [140] = {.count = 1, .reusable = true}, SHIFT(49),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_term_identifier, 3),
  [146] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(40),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [153] = {.count = 1, .reusable = true}, SHIFT(51),
  [155] = {.count = 1, .reusable = true}, SHIFT(52),
  [157] = {.count = 1, .reusable = true}, SHIFT(53),
  [159] = {.count = 1, .reusable = true}, SHIFT(54),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_message, 4),
  [163] = {.count = 1, .reusable = true}, SHIFT(56),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(48),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(32),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(48),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_term, 4),
  [178] = {.count = 1, .reusable = true}, SHIFT(58),
  [180] = {.count = 1, .reusable = true}, SHIFT(59),
  [182] = {.count = 1, .reusable = true}, SHIFT(60),
  [184] = {.count = 1, .reusable = false}, SHIFT(60),
  [186] = {.count = 1, .reusable = true}, SHIFT(61),
  [188] = {.count = 1, .reusable = true}, SHIFT(62),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_message, 5),
  [192] = {.count = 1, .reusable = true}, SHIFT(63),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_term, 5),
  [196] = {.count = 1, .reusable = true}, SHIFT(64),
  [198] = {.count = 1, .reusable = true}, SHIFT(65),
  [200] = {.count = 1, .reusable = false}, SHIFT(65),
  [202] = {.count = 1, .reusable = true}, SHIFT(66),
  [204] = {.count = 1, .reusable = true}, SHIFT(67),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(65),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(65),
  [212] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_repeat1, 5),
  [214] = {.count = 1, .reusable = false}, REDUCE(aux_sym__text_repeat1, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fluent() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
