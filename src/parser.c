#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 25
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_say = 2,
  aux_sym_SLASH_DOT_STAR_SLASH = 3,
  anon_sym_tp = 4,
  aux_sym_SLASH_AT_LBRACKaeprs_RBRACK_SLASH = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_name_EQ = 9,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH = 10,
  anon_sym_tag_EQ = 11,
  anon_sym_type_EQ = 12,
  anon_sym_minecraft_COLON = 13,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH = 14,
  sym_function = 15,
  sym_command = 16,
  sym__say_command = 17,
  sym__tp_command = 18,
  sym_selector = 19,
  sym_selector_argument = 20,
  sym_entity_type = 21,
  aux_sym_function_repeat1 = 22,
  aux_sym_selector_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_say] = "say",
  [aux_sym_SLASH_DOT_STAR_SLASH] = "/.*/",
  [anon_sym_tp] = "tp",
  [aux_sym_SLASH_AT_LBRACKaeprs_RBRACK_SLASH] = "/@[aeprs]/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_name_EQ] = "name=",
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = "/[A-Za-z_]+/",
  [anon_sym_tag_EQ] = "tag=",
  [anon_sym_type_EQ] = "type=",
  [anon_sym_minecraft_COLON] = "minecraft:",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = "/[a-z]+/",
  [sym_function] = "function",
  [sym_command] = "command",
  [sym__say_command] = "_say_command",
  [sym__tp_command] = "_tp_command",
  [sym_selector] = "selector",
  [sym_selector_argument] = "selector_argument",
  [sym_entity_type] = "entity_type",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_selector_repeat1] = "selector_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_say] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_tp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_AT_LBRACKaeprs_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_tag_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minecraft_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__say_command] = {
    .visible = false,
    .named = true,
  },
  [sym__tp_command] = {
    .visible = false,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_repeat1] = {
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
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '@')
        ADVANCE(4);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == 'm')
        ADVANCE(8);
      if (lookahead == 'n')
        ADVANCE(18);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      if (lookahead == 'a' ||
          lookahead == 'e' ||
          lookahead == 'p' ||
          lookahead == 'r' ||
          lookahead == 's')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_LBRACKaeprs_RBRACK_SLASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 8:
      if (lookahead == 'i')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'n')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'e')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'c')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'r')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'a')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'f')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 't')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == ':')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_minecraft_COLON);
      END_STATE();
    case 18:
      if (lookahead == 'a')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'm')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'e')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '=')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_name_EQ);
      END_STATE();
    case 23:
      if (lookahead == 'a')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'y')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_say);
      END_STATE();
    case 26:
      if (lookahead == 'a')
        ADVANCE(27);
      if (lookahead == 'p')
        ADVANCE(30);
      if (lookahead == 'y')
        ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'g')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_tag_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_tp);
      END_STATE();
    case 31:
      if (lookahead == 'p')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'e')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_type_EQ);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == 'p')
        ADVANCE(30);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '@')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      if (lookahead == 'a')
        ADVANCE(27);
      if (lookahead == 'y')
        ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 'm')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(54);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == ':')
        ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 58},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_say] = ACTIONS(1),
    [anon_sym_tp] = ACTIONS(1),
    [aux_sym_SLASH_AT_LBRACKaeprs_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_name_EQ] = ACTIONS(1),
    [anon_sym_tag_EQ] = ACTIONS(1),
    [anon_sym_type_EQ] = ACTIONS(1),
    [anon_sym_minecraft_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_function] = STATE(4),
    [sym_command] = STATE(6),
    [sym__say_command] = STATE(5),
    [sym__tp_command] = STATE(5),
    [aux_sym_function_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_say] = ACTIONS(7),
    [anon_sym_tp] = ACTIONS(9),
  },
  [2] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(11),
  },
  [3] = {
    [sym_selector] = STATE(9),
    [aux_sym_SLASH_AT_LBRACKaeprs_RBRACK_SLASH] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(17),
    [anon_sym_say] = ACTIONS(17),
    [anon_sym_tp] = ACTIONS(17),
  },
  [6] = {
    [sym_command] = STATE(10),
    [sym__say_command] = STATE(5),
    [sym__tp_command] = STATE(5),
    [aux_sym_function_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_say] = ACTIONS(7),
    [anon_sym_tp] = ACTIONS(9),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(23),
    [anon_sym_say] = ACTIONS(23),
    [anon_sym_tp] = ACTIONS(23),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(25),
    [anon_sym_say] = ACTIONS(25),
    [anon_sym_tp] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_comment] = ACTIONS(29),
    [anon_sym_say] = ACTIONS(29),
    [anon_sym_tp] = ACTIONS(29),
  },
  [10] = {
    [sym_command] = STATE(10),
    [sym__say_command] = STATE(5),
    [sym__tp_command] = STATE(5),
    [aux_sym_function_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
    [anon_sym_say] = ACTIONS(36),
    [anon_sym_tp] = ACTIONS(39),
  },
  [11] = {
    [sym_selector_argument] = STATE(14),
    [anon_sym_name_EQ] = ACTIONS(42),
    [anon_sym_tag_EQ] = ACTIONS(42),
    [anon_sym_type_EQ] = ACTIONS(44),
  },
  [12] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(46),
  },
  [13] = {
    [sym_entity_type] = STATE(15),
    [anon_sym_minecraft_COLON] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(50),
  },
  [14] = {
    [aux_sym_selector_repeat1] = STATE(20),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(54),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RBRACK] = ACTIONS(56),
  },
  [16] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(58),
  },
  [17] = {
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RBRACK] = ACTIONS(60),
  },
  [18] = {
    [sym_selector_argument] = STATE(22),
    [anon_sym_name_EQ] = ACTIONS(42),
    [anon_sym_tag_EQ] = ACTIONS(42),
    [anon_sym_type_EQ] = ACTIONS(44),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_comment] = ACTIONS(62),
    [anon_sym_say] = ACTIONS(62),
    [anon_sym_tp] = ACTIONS(62),
  },
  [20] = {
    [aux_sym_selector_repeat1] = STATE(24),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(64),
  },
  [21] = {
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
  },
  [22] = {
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(68),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_comment] = ACTIONS(70),
    [anon_sym_say] = ACTIONS(70),
    [anon_sym_tp] = ACTIONS(70),
  },
  [24] = {
    [aux_sym_selector_repeat1] = STATE(24),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(68),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_function, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(6),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym__say_command, 2),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__tp_command, 2),
  [31] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.count = 1, .reusable = true}, SHIFT(12),
  [44] = {.count = 1, .reusable = true}, SHIFT(13),
  [46] = {.count = 1, .reusable = true}, SHIFT(15),
  [48] = {.count = 1, .reusable = true}, SHIFT(16),
  [50] = {.count = 1, .reusable = false}, SHIFT(17),
  [52] = {.count = 1, .reusable = true}, SHIFT(18),
  [54] = {.count = 1, .reusable = true}, SHIFT(19),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_selector_argument, 2),
  [58] = {.count = 1, .reusable = true}, SHIFT(21),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 1),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 4),
  [64] = {.count = 1, .reusable = true}, SHIFT(23),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 2),
  [68] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 5),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(18),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mcfunction() {
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
