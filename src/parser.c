#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 82
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND_POUND_POUND = 1,
  anon_sym_POUND_POUND = 2,
  anon_sym_POUND = 3,
  sym__line_break = 4,
  sym__inline_space = 5,
  sym__hexdigit = 6,
  anon_sym_BSLASH_LBRACE = 7,
  anon_sym_BSLASHu = 8,
  aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH = 9,
  anon_sym_EQ = 10,
  anon_sym_DOT = 11,
  sym___comment_char__inline_char = 12,
  sym___comment_char__external_sigil__inline_char = 13,
  sym___comment_char__identifier__inline_char__term_sigil = 14,
  sym___comment_char__identifier__inline_char = 15,
  sym___comment_char__identifier__identifier_start__inline_char = 16,
  sym___comment_char__identifier_start__inline_char = 17,
  aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH = 18,
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
  sym__comment_char = 32,
  sym__inline_char = 33,
  sym__identifier = 34,
  sym__term_sigil = 35,
  sym__identifier_start = 36,
  aux_sym_body_repeat1 = 37,
  aux_sym_body_repeat2 = 38,
  aux_sym_resource_comment_repeat1 = 39,
  aux_sym_identifier_repeat1 = 40,
  aux_sym__text_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_POUND_POUND_POUND] = "###",
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
  [sym___comment_char__inline_char] = "__comment_char__inline_char",
  [sym___comment_char__external_sigil__inline_char] = "__comment_char__external_sigil__inline_char",
  [sym___comment_char__identifier__inline_char__term_sigil] = "__comment_char__identifier__inline_char__term_sigil",
  [sym___comment_char__identifier__inline_char] = "__comment_char__identifier__inline_char",
  [sym___comment_char__identifier__identifier_start__inline_char] = "__comment_char__identifier__identifier_start__inline_char",
  [sym___comment_char__identifier_start__inline_char] = "__comment_char__identifier_start__inline_char",
  [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = "/[\\{]/",
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
  [sym__comment_char] = "_comment_char",
  [sym__inline_char] = "_inline_char",
  [sym__identifier] = "_identifier",
  [sym__term_sigil] = "_term_sigil",
  [sym__identifier_start] = "_identifier_start",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
  [aux_sym_resource_comment_repeat1] = "resource_comment_repeat1",
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
  [sym___comment_char__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym___comment_char__external_sigil__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym___comment_char__identifier__inline_char__term_sigil] = {
    .visible = false,
    .named = true,
  },
  [sym___comment_char__identifier__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym___comment_char__identifier__identifier_start__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym___comment_char__identifier_start__inline_char] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
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
  [sym__comment_char] = {
    .visible = false,
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
  [aux_sym_resource_comment_repeat1] = {
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
      if (lookahead == '{')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(13);
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
      if (('!' <= lookahead && lookahead <= 55295) ||
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
      ACCEPT_TOKEN(sym___comment_char__external_sigil__inline_char);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym___comment_char__identifier__inline_char__term_sigil);
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
      ACCEPT_TOKEN(sym___comment_char__identifier__inline_char);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym___comment_char__identifier_start__inline_char);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__hexdigit);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym___comment_char__identifier__identifier_start__inline_char);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym___comment_char__inline_char);
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
        ADVANCE(13);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(14);
      if (lookahead == '[' ||
          lookahead == ']')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '@') ||
          ('^' <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65533))
        ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(13);
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
    case 26:
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
    case 27:
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
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 25},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 25},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 26},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 26},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__inline_space] = ACTIONS(1),
    [sym__hexdigit] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym___comment_char__inline_char] = ACTIONS(3),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(1),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(1),
    [sym___comment_char__identifier__inline_char] = ACTIONS(3),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(3),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(1),
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
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(17),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(19),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(19),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__line_break] = ACTIONS(21),
    [sym__inline_space] = ACTIONS(23),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__line_break] = ACTIONS(25),
    [sym__inline_space] = ACTIONS(27),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym__line_break] = ACTIONS(29),
    [sym__inline_space] = ACTIONS(31),
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
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(49),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(49),
  },
  [11] = {
    [sym__identifier] = STATE(24),
    [aux_sym_identifier_repeat1] = STATE(24),
    [sym__inline_space] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(53),
    [sym___comment_char__identifier__inline_char] = ACTIONS(53),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(53),
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
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(17),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(19),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(19),
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
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(17),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(19),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(19),
  },
  [14] = {
    [sym__comment_char] = STATE(29),
    [aux_sym_resource_comment_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym__line_break] = ACTIONS(57),
    [sym___comment_char__inline_char] = ACTIONS(59),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(59),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(59),
    [sym___comment_char__identifier__inline_char] = ACTIONS(59),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(59),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(59),
  },
  [15] = {
    [sym__comment_char] = STATE(30),
    [aux_sym_resource_comment_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__line_break] = ACTIONS(61),
    [sym___comment_char__inline_char] = ACTIONS(63),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(63),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(63),
    [sym___comment_char__identifier__inline_char] = ACTIONS(63),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(63),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(63),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(63),
  },
  [16] = {
    [sym__comment_char] = STATE(31),
    [aux_sym_resource_comment_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym__line_break] = ACTIONS(65),
    [sym___comment_char__inline_char] = ACTIONS(67),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(67),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(67),
    [sym___comment_char__identifier__inline_char] = ACTIONS(67),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(67),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(67),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(69),
    [anon_sym_POUND_POUND] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [sym__line_break] = ACTIONS(69),
    [sym__inline_space] = ACTIONS(69),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(69),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(69),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(69),
  },
  [18] = {
    [sym__blank_line] = STATE(32),
    [aux_sym_body_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(73),
    [anon_sym_POUND_POUND] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [sym__line_break] = ACTIONS(77),
    [sym__inline_space] = ACTIONS(15),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(73),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(73),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(73),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(79),
  },
  [20] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(37),
    [sym__inline_char] = STATE(38),
    [aux_sym__text_repeat1] = STATE(38),
    [sym__inline_space] = ACTIONS(81),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(83),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(87),
    [sym___comment_char__inline_char] = ACTIONS(87),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(83),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(89),
  },
  [22] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(41),
    [sym__inline_char] = STATE(38),
    [aux_sym__text_repeat1] = STATE(38),
    [sym__inline_space] = ACTIONS(91),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(83),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(87),
    [sym___comment_char__inline_char] = ACTIONS(87),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(83),
  },
  [23] = {
    [sym__identifier] = STATE(42),
    [aux_sym_identifier_repeat1] = STATE(42),
    [sym__inline_space] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(93),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(95),
    [sym___comment_char__identifier__inline_char] = ACTIONS(95),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(95),
  },
  [24] = {
    [sym__identifier] = STATE(43),
    [aux_sym_identifier_repeat1] = STATE(43),
    [sym__inline_space] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(99),
    [sym___comment_char__identifier__inline_char] = ACTIONS(99),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(99),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym__line_break] = ACTIONS(39),
  },
  [26] = {
    [sym__blank_line] = STATE(26),
    [aux_sym_body_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(103),
    [anon_sym_POUND_POUND] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(105),
    [sym__line_break] = ACTIONS(107),
    [sym__inline_space] = ACTIONS(110),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(103),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(103),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(103),
  },
  [27] = {
    [sym__entry] = STATE(44),
    [sym__comment] = STATE(44),
    [sym_resource_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_identifier] = STATE(8),
    [sym_term_identifier] = STATE(9),
    [sym_message] = STATE(44),
    [sym_term] = STATE(44),
    [sym__term_sigil] = STATE(10),
    [sym__identifier_start] = STATE(11),
    [aux_sym_body_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(17),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(19),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(19),
  },
  [28] = {
    [sym__entry] = STATE(48),
    [sym__comment] = STATE(48),
    [sym_resource_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_identifier] = STATE(49),
    [sym_term_identifier] = STATE(50),
    [sym_message] = STATE(48),
    [sym_term] = STATE(48),
    [sym__term_sigil] = STATE(10),
    [sym__identifier_start] = STATE(11),
    [aux_sym_body_repeat2] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(113),
    [anon_sym_POUND_POUND] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(119),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(122),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(125),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(125),
  },
  [29] = {
    [sym__comment_char] = STATE(51),
    [aux_sym_resource_comment_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym__line_break] = ACTIONS(128),
    [sym___comment_char__inline_char] = ACTIONS(130),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(130),
    [sym___comment_char__identifier__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(130),
  },
  [30] = {
    [sym__comment_char] = STATE(51),
    [aux_sym_resource_comment_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym__line_break] = ACTIONS(132),
    [sym___comment_char__inline_char] = ACTIONS(130),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(130),
    [sym___comment_char__identifier__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(130),
  },
  [31] = {
    [sym__comment_char] = STATE(51),
    [aux_sym_resource_comment_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym__line_break] = ACTIONS(134),
    [sym___comment_char__inline_char] = ACTIONS(130),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(130),
    [sym___comment_char__identifier__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(130),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(130),
  },
  [32] = {
    [sym__blank_line] = STATE(26),
    [aux_sym_body_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(136),
    [anon_sym_POUND_POUND] = ACTIONS(138),
    [anon_sym_POUND] = ACTIONS(138),
    [sym__line_break] = ACTIONS(55),
    [sym__inline_space] = ACTIONS(15),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(136),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(136),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(136),
  },
  [33] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(53),
    [sym__inline_char] = STATE(38),
    [aux_sym__text_repeat1] = STATE(38),
    [sym__inline_space] = ACTIONS(140),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(83),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(87),
    [sym___comment_char__inline_char] = ACTIONS(87),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(83),
  },
  [34] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(53),
    [sym__inline_char] = STATE(38),
    [aux_sym__text_repeat1] = STATE(38),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(83),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(87),
    [sym___comment_char__inline_char] = ACTIONS(83),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(83),
  },
  [35] = {
    [sym__hexdigit] = ACTIONS(142),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym__line_break] = ACTIONS(144),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym__line_break] = ACTIONS(146),
  },
  [38] = {
    [sym__inline_char] = STATE(55),
    [aux_sym__text_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym__line_break] = ACTIONS(148),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(150),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(152),
    [sym___comment_char__inline_char] = ACTIONS(150),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(150),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(150),
    [sym___comment_char__identifier__inline_char] = ACTIONS(150),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(150),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(150),
  },
  [39] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(57),
    [sym__inline_char] = STATE(38),
    [aux_sym__text_repeat1] = STATE(38),
    [sym__inline_space] = ACTIONS(154),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(83),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(87),
    [sym___comment_char__inline_char] = ACTIONS(87),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(83),
  },
  [40] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(57),
    [sym__inline_char] = STATE(38),
    [aux_sym__text_repeat1] = STATE(38),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(83),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(87),
    [sym___comment_char__inline_char] = ACTIONS(83),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(83),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym__line_break] = ACTIONS(156),
  },
  [42] = {
    [sym__identifier] = STATE(43),
    [aux_sym_identifier_repeat1] = STATE(43),
    [sym__inline_space] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(99),
    [sym___comment_char__identifier__inline_char] = ACTIONS(99),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(99),
  },
  [43] = {
    [sym__identifier] = STATE(43),
    [aux_sym_identifier_repeat1] = STATE(43),
    [sym__inline_space] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(162),
    [sym___comment_char__identifier__inline_char] = ACTIONS(162),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(162),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym__line_break] = ACTIONS(39),
  },
  [45] = {
    [sym__line_break] = ACTIONS(21),
    [sym__inline_space] = ACTIONS(167),
  },
  [46] = {
    [sym__line_break] = ACTIONS(25),
    [sym__inline_space] = ACTIONS(169),
  },
  [47] = {
    [sym__line_break] = ACTIONS(29),
    [sym__inline_space] = ACTIONS(171),
  },
  [48] = {
    [sym__line_break] = ACTIONS(39),
  },
  [49] = {
    [sym__inline_space] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(175),
  },
  [50] = {
    [sym__inline_space] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(179),
  },
  [51] = {
    [sym__comment_char] = STATE(51),
    [aux_sym_resource_comment_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym__line_break] = ACTIONS(181),
    [sym___comment_char__inline_char] = ACTIONS(183),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(183),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(183),
    [sym___comment_char__identifier__inline_char] = ACTIONS(183),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(183),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(183),
  },
  [52] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(65),
    [sym__inline_char] = STATE(38),
    [aux_sym__text_repeat1] = STATE(38),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(83),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(87),
    [sym___comment_char__inline_char] = ACTIONS(83),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(83),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym__line_break] = ACTIONS(186),
  },
  [54] = {
    [sym__hexdigit] = ACTIONS(188),
  },
  [55] = {
    [sym__inline_char] = STATE(55),
    [aux_sym__text_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym__line_break] = ACTIONS(190),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(192),
    [anon_sym_BSLASHu] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(198),
    [sym___comment_char__inline_char] = ACTIONS(192),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(192),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(192),
    [sym___comment_char__identifier__inline_char] = ACTIONS(192),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(192),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(192),
  },
  [56] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(67),
    [sym__inline_char] = STATE(38),
    [aux_sym__text_repeat1] = STATE(38),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(83),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(87),
    [sym___comment_char__inline_char] = ACTIONS(83),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(83),
    [sym___comment_char__identifier__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(83),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(83),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym__line_break] = ACTIONS(201),
  },
  [58] = {
    [sym__comment_char] = STATE(68),
    [aux_sym_resource_comment_repeat1] = STATE(68),
    [sym__line_break] = ACTIONS(57),
    [sym___comment_char__inline_char] = ACTIONS(203),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(203),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(203),
    [sym___comment_char__identifier__inline_char] = ACTIONS(203),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(203),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(203),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(203),
  },
  [59] = {
    [sym__comment_char] = STATE(69),
    [aux_sym_resource_comment_repeat1] = STATE(69),
    [sym__line_break] = ACTIONS(61),
    [sym___comment_char__inline_char] = ACTIONS(205),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(205),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(205),
    [sym___comment_char__identifier__inline_char] = ACTIONS(205),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(205),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(205),
  },
  [60] = {
    [sym__comment_char] = STATE(70),
    [aux_sym_resource_comment_repeat1] = STATE(70),
    [sym__line_break] = ACTIONS(65),
    [sym___comment_char__inline_char] = ACTIONS(207),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(207),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(207),
    [sym___comment_char__identifier__inline_char] = ACTIONS(207),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(207),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(207),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(207),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(209),
  },
  [62] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(37),
    [sym__inline_char] = STATE(73),
    [aux_sym__text_repeat1] = STATE(73),
    [sym__inline_space] = ACTIONS(211),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(213),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(215),
    [sym___comment_char__inline_char] = ACTIONS(215),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(213),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(217),
  },
  [64] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(41),
    [sym__inline_char] = STATE(73),
    [aux_sym__text_repeat1] = STATE(73),
    [sym__inline_space] = ACTIONS(219),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(213),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(215),
    [sym___comment_char__inline_char] = ACTIONS(215),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(213),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym__line_break] = ACTIONS(221),
  },
  [66] = {
    [sym__hexdigit] = ACTIONS(223),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym__line_break] = ACTIONS(225),
  },
  [68] = {
    [sym__comment_char] = STATE(77),
    [aux_sym_resource_comment_repeat1] = STATE(77),
    [sym__line_break] = ACTIONS(128),
    [sym___comment_char__inline_char] = ACTIONS(227),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(227),
    [sym___comment_char__identifier__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(227),
  },
  [69] = {
    [sym__comment_char] = STATE(77),
    [aux_sym_resource_comment_repeat1] = STATE(77),
    [sym__line_break] = ACTIONS(132),
    [sym___comment_char__inline_char] = ACTIONS(227),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(227),
    [sym___comment_char__identifier__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(227),
  },
  [70] = {
    [sym__comment_char] = STATE(77),
    [aux_sym_resource_comment_repeat1] = STATE(77),
    [sym__line_break] = ACTIONS(134),
    [sym___comment_char__inline_char] = ACTIONS(227),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(227),
    [sym___comment_char__identifier__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(227),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(227),
  },
  [71] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(53),
    [sym__inline_char] = STATE(73),
    [aux_sym__text_repeat1] = STATE(73),
    [sym__inline_space] = ACTIONS(229),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(213),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(215),
    [sym___comment_char__inline_char] = ACTIONS(215),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(213),
  },
  [72] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(53),
    [sym__inline_char] = STATE(73),
    [aux_sym__text_repeat1] = STATE(73),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(213),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(215),
    [sym___comment_char__inline_char] = ACTIONS(213),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(213),
  },
  [73] = {
    [sym__inline_char] = STATE(79),
    [aux_sym__text_repeat1] = STATE(79),
    [sym__line_break] = ACTIONS(148),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(231),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(233),
    [sym___comment_char__inline_char] = ACTIONS(231),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(231),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(231),
    [sym___comment_char__identifier__inline_char] = ACTIONS(231),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(231),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(231),
  },
  [74] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(57),
    [sym__inline_char] = STATE(73),
    [aux_sym__text_repeat1] = STATE(73),
    [sym__inline_space] = ACTIONS(235),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(213),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(215),
    [sym___comment_char__inline_char] = ACTIONS(215),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(213),
  },
  [75] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(57),
    [sym__inline_char] = STATE(73),
    [aux_sym__text_repeat1] = STATE(73),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(213),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(215),
    [sym___comment_char__inline_char] = ACTIONS(213),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(213),
  },
  [76] = {
    [sym__hexdigit] = ACTIONS(237),
  },
  [77] = {
    [sym__comment_char] = STATE(77),
    [aux_sym_resource_comment_repeat1] = STATE(77),
    [sym__line_break] = ACTIONS(181),
    [sym___comment_char__inline_char] = ACTIONS(239),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(239),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(239),
    [sym___comment_char__identifier__inline_char] = ACTIONS(239),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(239),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(239),
    [aux_sym_SLASH_LBRACK_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(239),
  },
  [78] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(65),
    [sym__inline_char] = STATE(73),
    [aux_sym__text_repeat1] = STATE(73),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(213),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(215),
    [sym___comment_char__inline_char] = ACTIONS(213),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(213),
  },
  [79] = {
    [sym__inline_char] = STATE(79),
    [aux_sym__text_repeat1] = STATE(79),
    [sym__line_break] = ACTIONS(190),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(242),
    [anon_sym_BSLASHu] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(245),
    [sym___comment_char__inline_char] = ACTIONS(242),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(242),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(242),
    [sym___comment_char__identifier__inline_char] = ACTIONS(242),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(242),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(242),
  },
  [80] = {
    [sym__text] = STATE(36),
    [sym_pattern] = STATE(67),
    [sym__inline_char] = STATE(73),
    [aux_sym__text_repeat1] = STATE(73),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(213),
    [anon_sym_BSLASHu] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(215),
    [sym___comment_char__inline_char] = ACTIONS(213),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(213),
    [sym___comment_char__identifier__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(213),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(213),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym__line_break] = ACTIONS(248),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(248),
    [anon_sym_BSLASHu] = ACTIONS(248),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(250),
    [sym___comment_char__inline_char] = ACTIONS(248),
    [sym___comment_char__external_sigil__inline_char] = ACTIONS(248),
    [sym___comment_char__identifier__inline_char__term_sigil] = ACTIONS(248),
    [sym___comment_char__identifier__inline_char] = ACTIONS(248),
    [sym___comment_char__identifier__identifier_start__inline_char] = ACTIONS(248),
    [sym___comment_char__identifier_start__inline_char] = ACTIONS(248),
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
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_block_comment, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(30),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__blank_line, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym__blank_line, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(32),
  [79] = {.count = 1, .reusable = true}, SHIFT(33),
  [81] = {.count = 1, .reusable = true}, SHIFT(34),
  [83] = {.count = 1, .reusable = true}, SHIFT(38),
  [85] = {.count = 1, .reusable = true}, SHIFT(35),
  [87] = {.count = 1, .reusable = false}, SHIFT(38),
  [89] = {.count = 1, .reusable = true}, SHIFT(39),
  [91] = {.count = 1, .reusable = true}, SHIFT(40),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_term_identifier, 2),
  [95] = {.count = 1, .reusable = true}, SHIFT(42),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(43),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat1, 2),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(26),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(5),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(45),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(46),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(47),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(10),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(11),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_resource_comment, 3),
  [130] = {.count = 1, .reusable = true}, SHIFT(51),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_block_comment, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [136] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat2, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat2, 3),
  [140] = {.count = 1, .reusable = true}, SHIFT(52),
  [142] = {.count = 1, .reusable = true}, SHIFT(54),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_message, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__text, 1),
  [150] = {.count = 1, .reusable = true}, SHIFT(55),
  [152] = {.count = 1, .reusable = false}, SHIFT(55),
  [154] = {.count = 1, .reusable = true}, SHIFT(56),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_term_identifier, 3),
  [160] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(43),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [167] = {.count = 1, .reusable = true}, SHIFT(58),
  [169] = {.count = 1, .reusable = true}, SHIFT(59),
  [171] = {.count = 1, .reusable = true}, SHIFT(60),
  [173] = {.count = 1, .reusable = true}, SHIFT(61),
  [175] = {.count = 1, .reusable = true}, SHIFT(62),
  [177] = {.count = 1, .reusable = true}, SHIFT(63),
  [179] = {.count = 1, .reusable = true}, SHIFT(64),
  [181] = {.count = 1, .reusable = true}, REDUCE(aux_sym_resource_comment_repeat1, 2),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_resource_comment_repeat1, 2), SHIFT_REPEAT(51),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_message, 4),
  [188] = {.count = 1, .reusable = true}, SHIFT(66),
  [190] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(55),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(35),
  [198] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(55),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_term, 4),
  [203] = {.count = 1, .reusable = true}, SHIFT(68),
  [205] = {.count = 1, .reusable = true}, SHIFT(69),
  [207] = {.count = 1, .reusable = true}, SHIFT(70),
  [209] = {.count = 1, .reusable = true}, SHIFT(71),
  [211] = {.count = 1, .reusable = true}, SHIFT(72),
  [213] = {.count = 1, .reusable = true}, SHIFT(73),
  [215] = {.count = 1, .reusable = false}, SHIFT(73),
  [217] = {.count = 1, .reusable = true}, SHIFT(74),
  [219] = {.count = 1, .reusable = true}, SHIFT(75),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_message, 5),
  [223] = {.count = 1, .reusable = true}, SHIFT(76),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_term, 5),
  [227] = {.count = 1, .reusable = true}, SHIFT(77),
  [229] = {.count = 1, .reusable = true}, SHIFT(78),
  [231] = {.count = 1, .reusable = true}, SHIFT(79),
  [233] = {.count = 1, .reusable = false}, SHIFT(79),
  [235] = {.count = 1, .reusable = true}, SHIFT(80),
  [237] = {.count = 1, .reusable = true}, SHIFT(81),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_resource_comment_repeat1, 2), SHIFT_REPEAT(77),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(79),
  [245] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(79),
  [248] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_repeat1, 5),
  [250] = {.count = 1, .reusable = false}, REDUCE(aux_sym__text_repeat1, 5),
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
