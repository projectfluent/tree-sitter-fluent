#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 62
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND_POUND_POUND = 1,
  aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH = 2,
  anon_sym_POUND_POUND = 3,
  anon_sym_POUND = 4,
  sym_identifier = 5,
  sym_term_identifier = 6,
  sym__line_break = 7,
  sym__inline_space = 8,
  sym__inline_char = 9,
  sym__hexdigit = 10,
  anon_sym_BSLASH_LBRACE = 11,
  anon_sym_BSLASHu = 12,
  aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH = 13,
  anon_sym_EQ = 14,
  anon_sym_DOT = 15,
  sym_body = 16,
  sym__entry = 17,
  sym__comment = 18,
  sym_resource_comment = 19,
  sym_block_comment = 20,
  sym_comment = 21,
  sym__blank_line = 22,
  sym__text = 23,
  sym_message = 24,
  sym_term = 25,
  sym_pattern = 26,
  aux_sym_body_repeat1 = 27,
  aux_sym_body_repeat2 = 28,
  aux_sym__text_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_POUND_POUND_POUND] = "###",
  [aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH] = "/[ \\t].*/",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND] = "#",
  [sym_identifier] = "identifier",
  [sym_term_identifier] = "term_identifier",
  [sym__line_break] = "_line_break",
  [sym__inline_space] = "_inline_space",
  [sym__inline_char] = "_inline_char",
  [sym__hexdigit] = "_hexdigit",
  [anon_sym_BSLASH_LBRACE] = "\\{",
  [anon_sym_BSLASHu] = "\\u",
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = "/\\\\[\\\\{]/",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym_body] = "body",
  [sym__entry] = "_entry",
  [sym__comment] = "_comment",
  [sym_resource_comment] = "resource_comment",
  [sym_block_comment] = "block_comment",
  [sym_comment] = "comment",
  [sym__blank_line] = "_blank_line",
  [sym__text] = "_text",
  [sym_message] = "message",
  [sym_term] = "term",
  [sym_pattern] = "pattern",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_term_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_space] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_char] = {
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
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat2] = {
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
      if (lookahead == '.')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(12);
      if (('!' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65533))
        ADVANCE(12);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 5:
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead == 'u')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__inline_char);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_term_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(20);
      if (('!' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65533))
        ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65533))
        ADVANCE(12);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__hexdigit);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASHt_RBRACK_DOT_STAR_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__inline_space] = ACTIONS(3),
    [sym__inline_char] = ACTIONS(3),
    [sym__hexdigit] = ACTIONS(3),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_body] = STATE(8),
    [sym__entry] = STATE(9),
    [sym__comment] = STATE(9),
    [sym_resource_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__blank_line] = STATE(10),
    [sym_message] = STATE(9),
    [sym_term] = STATE(9),
    [aux_sym_body_repeat1] = STATE(10),
    [aux_sym_body_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_term_identifier] = ACTIONS(15),
    [sym__line_break] = ACTIONS(17),
    [sym__inline_space] = ACTIONS(19),
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
    [sym__inline_space] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(35),
  },
  [6] = {
    [sym__inline_space] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(39),
  },
  [7] = {
    [sym__line_break] = ACTIONS(41),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym__line_break] = ACTIONS(47),
  },
  [10] = {
    [sym__entry] = STATE(21),
    [sym__comment] = STATE(21),
    [sym_resource_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym__blank_line] = STATE(22),
    [sym_message] = STATE(21),
    [sym_term] = STATE(21),
    [aux_sym_body_repeat1] = STATE(22),
    [aux_sym_body_repeat2] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_term_identifier] = ACTIONS(15),
    [sym__line_break] = ACTIONS(49),
    [sym__inline_space] = ACTIONS(19),
  },
  [11] = {
    [sym__entry] = STATE(21),
    [sym__comment] = STATE(21),
    [sym_resource_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_message] = STATE(21),
    [sym_term] = STATE(21),
    [aux_sym_body_repeat2] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_term_identifier] = ACTIONS(15),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__line_break] = ACTIONS(51),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym__line_break] = ACTIONS(53),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__line_break] = ACTIONS(55),
  },
  [15] = {
    [anon_sym_EQ] = ACTIONS(57),
  },
  [16] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(29),
    [aux_sym__text_repeat1] = STATE(30),
    [sym__inline_space] = ACTIONS(59),
    [sym__inline_char] = ACTIONS(61),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(63),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(61),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(67),
  },
  [18] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(33),
    [aux_sym__text_repeat1] = STATE(30),
    [sym__inline_space] = ACTIONS(69),
    [sym__inline_char] = ACTIONS(61),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(63),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(61),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(71),
    [anon_sym_POUND_POUND] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [sym_identifier] = ACTIONS(71),
    [sym_term_identifier] = ACTIONS(71),
    [sym__line_break] = ACTIONS(71),
    [sym__inline_space] = ACTIONS(71),
  },
  [20] = {
    [sym__blank_line] = STATE(34),
    [aux_sym_body_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(75),
    [anon_sym_POUND_POUND] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(77),
    [sym_identifier] = ACTIONS(75),
    [sym_term_identifier] = ACTIONS(75),
    [sym__line_break] = ACTIONS(79),
    [sym__inline_space] = ACTIONS(19),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym__line_break] = ACTIONS(47),
  },
  [22] = {
    [sym__blank_line] = STATE(22),
    [aux_sym_body_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(83),
    [anon_sym_POUND_POUND] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(85),
    [sym_identifier] = ACTIONS(83),
    [sym_term_identifier] = ACTIONS(83),
    [sym__line_break] = ACTIONS(87),
    [sym__inline_space] = ACTIONS(90),
  },
  [23] = {
    [sym__entry] = STATE(35),
    [sym__comment] = STATE(35),
    [sym_resource_comment] = STATE(35),
    [sym_block_comment] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_message] = STATE(35),
    [sym_term] = STATE(35),
    [aux_sym_body_repeat2] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_term_identifier] = ACTIONS(15),
  },
  [24] = {
    [sym__entry] = STATE(38),
    [sym__comment] = STATE(38),
    [sym_resource_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_message] = STATE(38),
    [sym_term] = STATE(38),
    [aux_sym_body_repeat2] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(93),
    [anon_sym_POUND_POUND] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(99),
    [sym_identifier] = ACTIONS(102),
    [sym_term_identifier] = ACTIONS(105),
  },
  [25] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(40),
    [aux_sym__text_repeat1] = STATE(30),
    [sym__inline_space] = ACTIONS(108),
    [sym__inline_char] = ACTIONS(61),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(63),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(61),
  },
  [26] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(40),
    [aux_sym__text_repeat1] = STATE(30),
    [sym__inline_char] = ACTIONS(63),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(63),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(61),
  },
  [27] = {
    [sym__hexdigit] = ACTIONS(110),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym__line_break] = ACTIONS(112),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym__line_break] = ACTIONS(114),
  },
  [30] = {
    [aux_sym__text_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym__line_break] = ACTIONS(116),
    [sym__inline_char] = ACTIONS(118),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(118),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(120),
  },
  [31] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(44),
    [aux_sym__text_repeat1] = STATE(30),
    [sym__inline_space] = ACTIONS(122),
    [sym__inline_char] = ACTIONS(61),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(63),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(61),
  },
  [32] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(44),
    [aux_sym__text_repeat1] = STATE(30),
    [sym__inline_char] = ACTIONS(63),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(63),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(61),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym__line_break] = ACTIONS(124),
  },
  [34] = {
    [sym__blank_line] = STATE(22),
    [aux_sym_body_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(126),
    [anon_sym_POUND_POUND] = ACTIONS(128),
    [anon_sym_POUND] = ACTIONS(128),
    [sym_identifier] = ACTIONS(126),
    [sym_term_identifier] = ACTIONS(126),
    [sym__line_break] = ACTIONS(49),
    [sym__inline_space] = ACTIONS(19),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym__line_break] = ACTIONS(47),
  },
  [36] = {
    [sym__inline_space] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(134),
  },
  [37] = {
    [sym__inline_space] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(138),
  },
  [38] = {
    [sym__line_break] = ACTIONS(47),
  },
  [39] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(49),
    [aux_sym__text_repeat1] = STATE(30),
    [sym__inline_char] = ACTIONS(63),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(63),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(61),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym__line_break] = ACTIONS(140),
  },
  [41] = {
    [sym__hexdigit] = ACTIONS(142),
  },
  [42] = {
    [aux_sym__text_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym__line_break] = ACTIONS(144),
    [sym__inline_char] = ACTIONS(146),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(146),
    [anon_sym_BSLASHu] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(152),
  },
  [43] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(51),
    [aux_sym__text_repeat1] = STATE(30),
    [sym__inline_char] = ACTIONS(63),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(63),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(61),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym__line_break] = ACTIONS(155),
  },
  [45] = {
    [anon_sym_EQ] = ACTIONS(157),
  },
  [46] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(29),
    [aux_sym__text_repeat1] = STATE(54),
    [sym__inline_space] = ACTIONS(159),
    [sym__inline_char] = ACTIONS(161),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(163),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(161),
  },
  [47] = {
    [anon_sym_EQ] = ACTIONS(165),
  },
  [48] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(33),
    [aux_sym__text_repeat1] = STATE(54),
    [sym__inline_space] = ACTIONS(167),
    [sym__inline_char] = ACTIONS(161),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(163),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(161),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym__line_break] = ACTIONS(169),
  },
  [50] = {
    [sym__hexdigit] = ACTIONS(171),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym__line_break] = ACTIONS(173),
  },
  [52] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(40),
    [aux_sym__text_repeat1] = STATE(54),
    [sym__inline_space] = ACTIONS(175),
    [sym__inline_char] = ACTIONS(161),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(163),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(161),
  },
  [53] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(40),
    [aux_sym__text_repeat1] = STATE(54),
    [sym__inline_char] = ACTIONS(163),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(163),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(161),
  },
  [54] = {
    [aux_sym__text_repeat1] = STATE(59),
    [sym__line_break] = ACTIONS(116),
    [sym__inline_char] = ACTIONS(177),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(177),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(179),
  },
  [55] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(44),
    [aux_sym__text_repeat1] = STATE(54),
    [sym__inline_space] = ACTIONS(181),
    [sym__inline_char] = ACTIONS(161),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(163),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(161),
  },
  [56] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(44),
    [aux_sym__text_repeat1] = STATE(54),
    [sym__inline_char] = ACTIONS(163),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(163),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(161),
  },
  [57] = {
    [sym__hexdigit] = ACTIONS(183),
  },
  [58] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(49),
    [aux_sym__text_repeat1] = STATE(54),
    [sym__inline_char] = ACTIONS(163),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(163),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(161),
  },
  [59] = {
    [aux_sym__text_repeat1] = STATE(59),
    [sym__line_break] = ACTIONS(144),
    [sym__inline_char] = ACTIONS(185),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(185),
    [anon_sym_BSLASHu] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(188),
  },
  [60] = {
    [sym__text] = STATE(28),
    [sym_pattern] = STATE(51),
    [aux_sym__text_repeat1] = STATE(54),
    [sym__inline_char] = ACTIONS(163),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(163),
    [anon_sym_BSLASHu] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(161),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym__line_break] = ACTIONS(191),
    [sym__inline_char] = ACTIONS(191),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(191),
    [anon_sym_BSLASHu] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_LBRACE_RBRACK_SLASH] = ACTIONS(193),
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
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_resource_comment, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_block_comment, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_resource_comment, 2),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_block_comment, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = true}, SHIFT(26),
  [61] = {.count = 1, .reusable = false}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(30),
  [65] = {.count = 1, .reusable = true}, SHIFT(27),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, SHIFT(32),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__blank_line, 2),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__blank_line, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2),
  [77] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat1, 2),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(22),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(7),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(2),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(3),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(4),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(36),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(37),
  [108] = {.count = 1, .reusable = true}, SHIFT(39),
  [110] = {.count = 1, .reusable = true}, SHIFT(41),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_message, 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym__text, 1),
  [118] = {.count = 1, .reusable = true}, SHIFT(42),
  [120] = {.count = 1, .reusable = false}, SHIFT(42),
  [122] = {.count = 1, .reusable = true}, SHIFT(43),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(aux_sym_body_repeat2, 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(aux_sym_body_repeat2, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [132] = {.count = 1, .reusable = true}, SHIFT(45),
  [134] = {.count = 1, .reusable = true}, SHIFT(46),
  [136] = {.count = 1, .reusable = true}, SHIFT(47),
  [138] = {.count = 1, .reusable = true}, SHIFT(48),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_message, 4),
  [142] = {.count = 1, .reusable = true}, SHIFT(50),
  [144] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(42),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(27),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(42),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_term, 4),
  [157] = {.count = 1, .reusable = true}, SHIFT(52),
  [159] = {.count = 1, .reusable = true}, SHIFT(53),
  [161] = {.count = 1, .reusable = false}, SHIFT(54),
  [163] = {.count = 1, .reusable = true}, SHIFT(54),
  [165] = {.count = 1, .reusable = true}, SHIFT(55),
  [167] = {.count = 1, .reusable = true}, SHIFT(56),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_message, 5),
  [171] = {.count = 1, .reusable = true}, SHIFT(57),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_term, 5),
  [175] = {.count = 1, .reusable = true}, SHIFT(58),
  [177] = {.count = 1, .reusable = true}, SHIFT(59),
  [179] = {.count = 1, .reusable = false}, SHIFT(59),
  [181] = {.count = 1, .reusable = true}, SHIFT(60),
  [183] = {.count = 1, .reusable = true}, SHIFT(61),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(59),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(59),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_repeat1, 5),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym__text_repeat1, 5),
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
