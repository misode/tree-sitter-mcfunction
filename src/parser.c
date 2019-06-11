#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 181
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__line_break = 1,
  anon_sym_POUND = 2,
  aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH = 3,
  anon_sym_teleport = 4,
  anon_sym_tp = 5,
  anon_sym_setblock = 6,
  anon_sym_summon = 7,
  anon_sym_say = 8,
  anon_sym_data = 9,
  anon_sym_merge = 10,
  anon_sym_entity = 11,
  anon_sym_block = 12,
  anon_sym_get = 13,
  anon_sym_remove = 14,
  anon_sym_modify = 15,
  anon_sym_set = 16,
  anon_sym_append = 17,
  anon_sym_prepend = 18,
  anon_sym_insert = 19,
  anon_sym_value = 20,
  anon_sym_from = 21,
  anon_sym_AT = 22,
  anon_sym_p = 23,
  anon_sym_a = 24,
  anon_sym_r = 25,
  anon_sym_s = 26,
  anon_sym_e = 27,
  anon_sym_LBRACK = 28,
  anon_sym_COMMA = 29,
  anon_sym_RBRACK = 30,
  anon_sym_EQ = 31,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH = 32,
  sym_coordinate = 33,
  sym_integer = 34,
  anon_sym_minecraft_COLON = 35,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH = 36,
  sym_block_state_value = 37,
  anon_sym_LBRACE = 38,
  anon_sym_RBRACE = 39,
  anon_sym_COLON = 40,
  sym_nbt_key = 41,
  sym_nbt_number = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 44,
  anon_sym_SQUOTE = 45,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 46,
  sym_escape_sequence = 47,
  sym_nbt_path = 48,
  sym_function = 49,
  sym_comment = 50,
  sym_command = 51,
  sym__teleport_command = 52,
  sym__setblock_command = 53,
  sym__summon_command = 54,
  sym__say_command = 55,
  sym__data_command = 56,
  sym__data_merge_command = 57,
  sym__data_get_command = 58,
  sym__data_remove_command = 59,
  sym__data_modify_command = 60,
  sym__data_modify_value_command = 61,
  sym__data_modify_from_command = 62,
  sym_selector = 63,
  sym__selector_argument = 64,
  sym_selector_key = 65,
  sym_selector_value = 66,
  sym__coordinate3 = 67,
  sym_block = 68,
  sym_block_type = 69,
  sym_block_state = 70,
  sym__block_state_argument = 71,
  sym_block_state_key = 72,
  sym_entity_type = 73,
  sym_message = 74,
  sym_nbt_compound = 75,
  sym__nbt_pair = 76,
  sym_nbt_array = 77,
  sym__nbt_value = 78,
  sym_nbt_string = 79,
  sym__quoted_string = 80,
  aux_sym_function_repeat1 = 81,
  aux_sym_selector_repeat1 = 82,
  aux_sym_block_state_repeat1 = 83,
  aux_sym_nbt_compound_repeat1 = 84,
  aux_sym_nbt_array_repeat1 = 85,
  aux_sym__quoted_string_repeat1 = 86,
  aux_sym__quoted_string_repeat2 = 87,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [anon_sym_POUND] = "#",
  [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = "/[^\n\r]+/",
  [anon_sym_teleport] = "teleport",
  [anon_sym_tp] = "tp",
  [anon_sym_setblock] = "setblock",
  [anon_sym_summon] = "summon",
  [anon_sym_say] = "say",
  [anon_sym_data] = "data",
  [anon_sym_merge] = "merge",
  [anon_sym_entity] = "entity",
  [anon_sym_block] = "block",
  [anon_sym_get] = "get",
  [anon_sym_remove] = "remove",
  [anon_sym_modify] = "modify",
  [anon_sym_set] = "set",
  [anon_sym_append] = "append",
  [anon_sym_prepend] = "prepend",
  [anon_sym_insert] = "insert",
  [anon_sym_value] = "value",
  [anon_sym_from] = "from",
  [anon_sym_AT] = "@",
  [anon_sym_p] = "p",
  [anon_sym_a] = "a",
  [anon_sym_r] = "r",
  [anon_sym_s] = "s",
  [anon_sym_e] = "e",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = "/[A-Za-z0-9_.-]+/",
  [sym_coordinate] = "coordinate",
  [sym_integer] = "integer",
  [anon_sym_minecraft_COLON] = "minecraft:",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = "/[a-z_]+/",
  [sym_block_state_value] = "block_state_value",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_nbt_key] = "nbt_key",
  [sym_nbt_number] = "nbt_number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = "/[^\"\\\\\\n]+/",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = "/[^'\\\\\\n]+/",
  [sym_escape_sequence] = "escape_sequence",
  [sym_nbt_path] = "nbt_path",
  [sym_function] = "function",
  [sym_comment] = "comment",
  [sym_command] = "command",
  [sym__teleport_command] = "_teleport_command",
  [sym__setblock_command] = "_setblock_command",
  [sym__summon_command] = "_summon_command",
  [sym__say_command] = "_say_command",
  [sym__data_command] = "_data_command",
  [sym__data_merge_command] = "_data_merge_command",
  [sym__data_get_command] = "_data_get_command",
  [sym__data_remove_command] = "_data_remove_command",
  [sym__data_modify_command] = "_data_modify_command",
  [sym__data_modify_value_command] = "_data_modify_value_command",
  [sym__data_modify_from_command] = "_data_modify_from_command",
  [sym_selector] = "selector",
  [sym__selector_argument] = "_selector_argument",
  [sym_selector_key] = "selector_key",
  [sym_selector_value] = "selector_value",
  [sym__coordinate3] = "_coordinate3",
  [sym_block] = "block",
  [sym_block_type] = "block_type",
  [sym_block_state] = "block_state",
  [sym__block_state_argument] = "_block_state_argument",
  [sym_block_state_key] = "block_state_key",
  [sym_entity_type] = "entity_type",
  [sym_message] = "message",
  [sym_nbt_compound] = "nbt_compound",
  [sym__nbt_pair] = "_nbt_pair",
  [sym_nbt_array] = "nbt_array",
  [sym__nbt_value] = "_nbt_value",
  [sym_nbt_string] = "nbt_string",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_selector_repeat1] = "selector_repeat1",
  [aux_sym_block_state_repeat1] = "block_state_repeat1",
  [aux_sym_nbt_compound_repeat1] = "nbt_compound_repeat1",
  [aux_sym_nbt_array_repeat1] = "nbt_array_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat2] = "_quoted_string_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_teleport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_summon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_say] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_coordinate] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_minecraft_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_block_state_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_nbt_key] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_path] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__teleport_command] = {
    .visible = false,
    .named = true,
  },
  [sym__setblock_command] = {
    .visible = false,
    .named = true,
  },
  [sym__summon_command] = {
    .visible = false,
    .named = true,
  },
  [sym__say_command] = {
    .visible = false,
    .named = true,
  },
  [sym__data_command] = {
    .visible = false,
    .named = true,
  },
  [sym__data_merge_command] = {
    .visible = false,
    .named = true,
  },
  [sym__data_get_command] = {
    .visible = false,
    .named = true,
  },
  [sym__data_remove_command] = {
    .visible = false,
    .named = true,
  },
  [sym__data_modify_command] = {
    .visible = false,
    .named = true,
  },
  [sym__data_modify_value_command] = {
    .visible = false,
    .named = true,
  },
  [sym__data_modify_from_command] = {
    .visible = false,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym__selector_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_selector_key] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_value] = {
    .visible = true,
    .named = true,
  },
  [sym__coordinate3] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block_state] = {
    .visible = true,
    .named = true,
  },
  [sym__block_state_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_block_state_key] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_type] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_compound] = {
    .visible = true,
    .named = true,
  },
  [sym__nbt_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_nbt_array] = {
    .visible = true,
    .named = true,
  },
  [sym__nbt_value] = {
    .visible = false,
    .named = true,
  },
  [sym_nbt_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
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
  [aux_sym_block_state_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_compound_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat2] = {
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(23);
      if (lookahead == 'b')
        ADVANCE(24);
      if (lookahead == 'd')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'g')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == 'm')
        ADVANCE(47);
      if (lookahead == 'p')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 's')
        ADVANCE(68);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == 'v')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      if (lookahead == 'u')
        ADVANCE(13);
      if (lookahead == 'x')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '{')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(17);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '}')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(19);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 24:
      if (lookahead == 'l')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'o')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'c')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'k')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 29:
      if (lookahead == 'a')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 't')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'a')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 34:
      if (lookahead == 'r')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'o')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'm')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 38:
      if (lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 's')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      if (lookahead == 'i')
        ADVANCE(52);
      if (lookahead == 'o')
        ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'g')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'c')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'r')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'a')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'f')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 't')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == ':')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_minecraft_COLON);
      END_STATE();
    case 61:
      if (lookahead == 'd')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'i')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'f')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'y')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(70);
      if (lookahead == 'p')
        ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'l')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'e')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'p')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'o')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_teleport);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_tp);
      END_STATE();
    case 78:
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'l')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'u')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'e')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_coordinate);
      END_STATE();
    case 86:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(23);
      if (lookahead == 'b')
        ADVANCE(24);
      if (lookahead == 'd')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'g')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == 'm')
        ADVANCE(47);
      if (lookahead == 'p')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 's')
        ADVANCE(68);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == 'v')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 87:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'd')
        ADVANCE(29);
      if (lookahead == 's')
        ADVANCE(88);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      END_STATE();
    case 88:
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'e')
        ADVANCE(91);
      if (lookahead == 'u')
        ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'y')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_say);
      END_STATE();
    case 91:
      if (lookahead == 't')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'b')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'l')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'c')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'k')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_setblock);
      END_STATE();
    case 98:
      if (lookahead == 'm')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'm')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'n')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_summon);
      END_STATE();
    case 103:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(103);
      if (lookahead != 0)
        ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(106);
      END_STATE();
    case 107:
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      END_STATE();
    case 108:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'm')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(110);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(112);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(113);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(115);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(117);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == ':')
        ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == 'g')
        ADVANCE(38);
      if (lookahead == 'm')
        ADVANCE(120);
      if (lookahead == 'r')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == 'e')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(61);
      END_STATE();
    case 121:
      if (lookahead == 'e')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'm')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'v')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'e')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 127:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      END_STATE();
    case 128:
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(128);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == 'a')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'p')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 's')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      END_STATE();
    case 131:
      if (lookahead == 'b')
        ADVANCE(24);
      if (lookahead == 'e')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      END_STATE();
    case 132:
      if (lookahead == 'n')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'i')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'y')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 138:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_nbt_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(143);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_nbt_number);
      if (lookahead == '.')
        ADVANCE(145);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_nbt_number);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_nbt_number);
      END_STATE();
    case 148:
      if (lookahead == '\t')
        ADVANCE(149);
      if (lookahead == ' ')
        SKIP(148);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == '\t')
        ADVANCE(153);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (lookahead != 0)
        ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(150);
      END_STATE();
    case 154:
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      END_STATE();
    case 155:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      END_STATE();
    case 156:
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      END_STATE();
    case 157:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      END_STATE();
    case 158:
      if (lookahead == '\t')
        ADVANCE(159);
      if (lookahead == ' ')
        SKIP(158);
      if (lookahead == '[')
        ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(161);
      if (lookahead != 0)
        ADVANCE(150);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(159);
      if (lookahead == '[')
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(150);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(150);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(161);
      END_STATE();
    case 162:
      if (lookahead == '\t')
        ADVANCE(163);
      if (lookahead == '[')
        ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(162);
      if (lookahead != 0)
        ADVANCE(150);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(163);
      if (lookahead == '[')
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(150);
      END_STATE();
    case 164:
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == 'm')
        ADVANCE(171);
      if (lookahead == 'p')
        ADVANCE(172);
      if (lookahead == 's')
        ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      END_STATE();
    case 165:
      if (lookahead == 'p')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'p')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'n')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'd')
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 171:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 172:
      if (lookahead == 'r')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'p')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'e')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'n')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'd')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 179:
      if (lookahead == 'e')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 182:
      if (lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'v')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      END_STATE();
    case 183:
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 184:
      if (lookahead == '\n')
        SKIP(185);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(187);
      END_STATE();
    case 185:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == '\n')
        SKIP(189);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(191);
      END_STATE();
    case 189:
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(191);
      END_STATE();
    case 192:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_block_state_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 103},
  [3] = {.lex_state = 106},
  [4] = {.lex_state = 107},
  [5] = {.lex_state = 108},
  [6] = {.lex_state = 103},
  [7] = {.lex_state = 119},
  [8] = {.lex_state = 127},
  [9] = {.lex_state = 128},
  [10] = {.lex_state = 128},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 128},
  [13] = {.lex_state = 130},
  [14] = {.lex_state = 128},
  [15] = {.lex_state = 107},
  [16] = {.lex_state = 108},
  [17] = {.lex_state = 107},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 128},
  [20] = {.lex_state = 128},
  [21] = {.lex_state = 131},
  [22] = {.lex_state = 131},
  [23] = {.lex_state = 131},
  [24] = {.lex_state = 131},
  [25] = {.lex_state = 128},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 128},
  [29] = {.lex_state = 107},
  [30] = {.lex_state = 107},
  [31] = {.lex_state = 107},
  [32] = {.lex_state = 128},
  [33] = {.lex_state = 106},
  [34] = {.lex_state = 107},
  [35] = {.lex_state = 106},
  [36] = {.lex_state = 107},
  [37] = {.lex_state = 106},
  [38] = {.lex_state = 107},
  [39] = {.lex_state = 106},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 138},
  [42] = {.lex_state = 108},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 140},
  [45] = {.lex_state = 128},
  [46] = {.lex_state = 130},
  [47] = {.lex_state = 142},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 130},
  [50] = {.lex_state = 148},
  [51] = {.lex_state = 107},
  [52] = {.lex_state = 130},
  [53] = {.lex_state = 152},
  [54] = {.lex_state = 107},
  [55] = {.lex_state = 152},
  [56] = {.lex_state = 154},
  [57] = {.lex_state = 155},
  [58] = {.lex_state = 154},
  [59] = {.lex_state = 108},
  [60] = {.lex_state = 108},
  [61] = {.lex_state = 128},
  [62] = {.lex_state = 128},
  [63] = {.lex_state = 128},
  [64] = {.lex_state = 128},
  [65] = {.lex_state = 128},
  [66] = {.lex_state = 156},
  [67] = {.lex_state = 157},
  [68] = {.lex_state = 142},
  [69] = {.lex_state = 128},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 158},
  [72] = {.lex_state = 128},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 162},
  [75] = {.lex_state = 128},
  [76] = {.lex_state = 107},
  [77] = {.lex_state = 164},
  [78] = {.lex_state = 138},
  [79] = {.lex_state = 128},
  [80] = {.lex_state = 155},
  [81] = {.lex_state = 138},
  [82] = {.lex_state = 128},
  [83] = {.lex_state = 128},
  [84] = {.lex_state = 108},
  [85] = {.lex_state = 128},
  [86] = {.lex_state = 128},
  [87] = {.lex_state = 142},
  [88] = {.lex_state = 140},
  [89] = {.lex_state = 128},
  [90] = {.lex_state = 157},
  [91] = {.lex_state = 138},
  [92] = {.lex_state = 142},
  [93] = {.lex_state = 138},
  [94] = {.lex_state = 148},
  [95] = {.lex_state = 138},
  [96] = {.lex_state = 152},
  [97] = {.lex_state = 182},
  [98] = {.lex_state = 183},
  [99] = {.lex_state = 155},
  [100] = {.lex_state = 128},
  [101] = {.lex_state = 155},
  [102] = {.lex_state = 155},
  [103] = {.lex_state = 155},
  [104] = {.lex_state = 128},
  [105] = {.lex_state = 128},
  [106] = {.lex_state = 154},
  [107] = {.lex_state = 155},
  [108] = {.lex_state = 154},
  [109] = {.lex_state = 142},
  [110] = {.lex_state = 140},
  [111] = {.lex_state = 184},
  [112] = {.lex_state = 188},
  [113] = {.lex_state = 157},
  [114] = {.lex_state = 192},
  [115] = {.lex_state = 157},
  [116] = {.lex_state = 128},
  [117] = {.lex_state = 157},
  [118] = {.lex_state = 155},
  [119] = {.lex_state = 155},
  [120] = {.lex_state = 155},
  [121] = {.lex_state = 142},
  [122] = {.lex_state = 131},
  [123] = {.lex_state = 128},
  [124] = {.lex_state = 182},
  [125] = {.lex_state = 128},
  [126] = {.lex_state = 108},
  [127] = {.lex_state = 128},
  [128] = {.lex_state = 155},
  [129] = {.lex_state = 193},
  [130] = {.lex_state = 192},
  [131] = {.lex_state = 155},
  [132] = {.lex_state = 192},
  [133] = {.lex_state = 157},
  [134] = {.lex_state = 192},
  [135] = {.lex_state = 184},
  [136] = {.lex_state = 188},
  [137] = {.lex_state = 142},
  [138] = {.lex_state = 155},
  [139] = {.lex_state = 148},
  [140] = {.lex_state = 155},
  [141] = {.lex_state = 152},
  [142] = {.lex_state = 155},
  [143] = {.lex_state = 142},
  [144] = {.lex_state = 184},
  [145] = {.lex_state = 188},
  [146] = {.lex_state = 128},
  [147] = {.lex_state = 128},
  [148] = {.lex_state = 106},
  [149] = {.lex_state = 107},
  [150] = {.lex_state = 128},
  [151] = {.lex_state = 155},
  [152] = {.lex_state = 128},
  [153] = {.lex_state = 155},
  [154] = {.lex_state = 155},
  [155] = {.lex_state = 142},
  [156] = {.lex_state = 192},
  [157] = {.lex_state = 155},
  [158] = {.lex_state = 192},
  [159] = {.lex_state = 157},
  [160] = {.lex_state = 192},
  [161] = {.lex_state = 184},
  [162] = {.lex_state = 188},
  [163] = {.lex_state = 142},
  [164] = {.lex_state = 148},
  [165] = {.lex_state = 152},
  [166] = {.lex_state = 128},
  [167] = {.lex_state = 155},
  [168] = {.lex_state = 128},
  [169] = {.lex_state = 184},
  [170] = {.lex_state = 188},
  [171] = {.lex_state = 152},
  [172] = {.lex_state = 155},
  [173] = {.lex_state = 192},
  [174] = {.lex_state = 155},
  [175] = {.lex_state = 192},
  [176] = {.lex_state = 128},
  [177] = {.lex_state = 155},
  [178] = {.lex_state = 128},
  [179] = {.lex_state = 128},
  [180] = {.lex_state = 128},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_teleport] = ACTIONS(1),
    [anon_sym_tp] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_modify] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_coordinate] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_minecraft_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_function] = STATE(8),
    [sym_comment] = STATE(9),
    [sym_command] = STATE(9),
    [sym__teleport_command] = STATE(10),
    [sym__setblock_command] = STATE(10),
    [sym__summon_command] = STATE(10),
    [sym__say_command] = STATE(10),
    [sym__data_command] = STATE(10),
    [aux_sym_function_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_teleport] = ACTIONS(7),
    [anon_sym_tp] = ACTIONS(7),
    [anon_sym_setblock] = ACTIONS(9),
    [anon_sym_summon] = ACTIONS(11),
    [anon_sym_say] = ACTIONS(13),
    [anon_sym_data] = ACTIONS(15),
  },
  [2] = {
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(17),
  },
  [3] = {
    [sym_selector] = STATE(14),
    [anon_sym_AT] = ACTIONS(19),
  },
  [4] = {
    [sym_coordinate] = ACTIONS(21),
  },
  [5] = {
    [sym_entity_type] = STATE(18),
    [anon_sym_minecraft_COLON] = ACTIONS(23),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(25),
  },
  [6] = {
    [sym_message] = STATE(20),
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(27),
  },
  [7] = {
    [sym__data_merge_command] = STATE(25),
    [sym__data_get_command] = STATE(25),
    [sym__data_remove_command] = STATE(25),
    [sym__data_modify_command] = STATE(25),
    [anon_sym_merge] = ACTIONS(29),
    [anon_sym_get] = ACTIONS(31),
    [anon_sym_remove] = ACTIONS(33),
    [anon_sym_modify] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [9] = {
    [sym__line_break] = ACTIONS(39),
  },
  [10] = {
    [sym__line_break] = ACTIONS(41),
  },
  [11] = {
    [sym_comment] = STATE(9),
    [sym_command] = STATE(9),
    [sym__teleport_command] = STATE(10),
    [sym__setblock_command] = STATE(10),
    [sym__summon_command] = STATE(10),
    [sym__say_command] = STATE(10),
    [sym__data_command] = STATE(10),
    [aux_sym_function_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_teleport] = ACTIONS(7),
    [anon_sym_tp] = ACTIONS(7),
    [anon_sym_setblock] = ACTIONS(9),
    [anon_sym_summon] = ACTIONS(11),
    [anon_sym_say] = ACTIONS(13),
    [anon_sym_data] = ACTIONS(15),
  },
  [12] = {
    [sym__line_break] = ACTIONS(45),
  },
  [13] = {
    [anon_sym_p] = ACTIONS(47),
    [anon_sym_a] = ACTIONS(47),
    [anon_sym_r] = ACTIONS(47),
    [anon_sym_s] = ACTIONS(47),
    [anon_sym_e] = ACTIONS(47),
  },
  [14] = {
    [sym__line_break] = ACTIONS(49),
  },
  [15] = {
    [sym_coordinate] = ACTIONS(51),
  },
  [16] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(53),
  },
  [17] = {
    [sym_coordinate] = ACTIONS(55),
  },
  [18] = {
    [sym__coordinate3] = STATE(32),
    [sym_coordinate] = ACTIONS(57),
  },
  [19] = {
    [sym__line_break] = ACTIONS(59),
  },
  [20] = {
    [sym__line_break] = ACTIONS(61),
  },
  [21] = {
    [anon_sym_entity] = ACTIONS(63),
    [anon_sym_block] = ACTIONS(65),
  },
  [22] = {
    [anon_sym_entity] = ACTIONS(67),
    [anon_sym_block] = ACTIONS(69),
  },
  [23] = {
    [anon_sym_entity] = ACTIONS(71),
    [anon_sym_block] = ACTIONS(73),
  },
  [24] = {
    [anon_sym_entity] = ACTIONS(75),
    [anon_sym_block] = ACTIONS(77),
  },
  [25] = {
    [sym__line_break] = ACTIONS(79),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_teleport] = ACTIONS(81),
    [anon_sym_tp] = ACTIONS(81),
    [anon_sym_setblock] = ACTIONS(81),
    [anon_sym_summon] = ACTIONS(81),
    [anon_sym_say] = ACTIONS(81),
    [anon_sym_data] = ACTIONS(81),
  },
  [27] = {
    [sym_comment] = STATE(9),
    [sym_command] = STATE(9),
    [sym__teleport_command] = STATE(10),
    [sym__setblock_command] = STATE(10),
    [sym__summon_command] = STATE(10),
    [sym__say_command] = STATE(10),
    [sym__data_command] = STATE(10),
    [aux_sym_function_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_teleport] = ACTIONS(86),
    [anon_sym_tp] = ACTIONS(86),
    [anon_sym_setblock] = ACTIONS(89),
    [anon_sym_summon] = ACTIONS(92),
    [anon_sym_say] = ACTIONS(95),
    [anon_sym_data] = ACTIONS(98),
  },
  [28] = {
    [sym__line_break] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
  },
  [29] = {
    [sym_coordinate] = ACTIONS(105),
  },
  [30] = {
    [sym_coordinate] = ACTIONS(107),
  },
  [31] = {
    [sym_coordinate] = ACTIONS(109),
  },
  [32] = {
    [sym_nbt_compound] = STATE(45),
    [sym__line_break] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
  },
  [33] = {
    [sym_selector] = STATE(47),
    [anon_sym_AT] = ACTIONS(115),
  },
  [34] = {
    [sym__coordinate3] = STATE(47),
    [sym_coordinate] = ACTIONS(117),
  },
  [35] = {
    [sym_selector] = STATE(50),
    [anon_sym_AT] = ACTIONS(119),
  },
  [36] = {
    [sym__coordinate3] = STATE(50),
    [sym_coordinate] = ACTIONS(121),
  },
  [37] = {
    [sym_selector] = STATE(53),
    [anon_sym_AT] = ACTIONS(123),
  },
  [38] = {
    [sym__coordinate3] = STATE(53),
    [sym_coordinate] = ACTIONS(125),
  },
  [39] = {
    [sym_selector] = STATE(55),
    [anon_sym_AT] = ACTIONS(123),
  },
  [40] = {
    [sym__coordinate3] = STATE(55),
    [sym_coordinate] = ACTIONS(125),
  },
  [41] = {
    [sym__selector_argument] = STATE(57),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(127),
  },
  [42] = {
    [sym_block] = STATE(62),
    [sym_block_type] = STATE(63),
    [anon_sym_POUND] = ACTIONS(129),
    [anon_sym_minecraft_COLON] = ACTIONS(131),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(133),
  },
  [43] = {
    [sym_coordinate] = ACTIONS(135),
  },
  [44] = {
    [sym__nbt_pair] = STATE(67),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_nbt_key] = ACTIONS(139),
  },
  [45] = {
    [sym__line_break] = ACTIONS(141),
  },
  [46] = {
    [anon_sym_p] = ACTIONS(143),
    [anon_sym_a] = ACTIONS(143),
    [anon_sym_r] = ACTIONS(143),
    [anon_sym_s] = ACTIONS(143),
    [anon_sym_e] = ACTIONS(143),
  },
  [47] = {
    [sym_nbt_compound] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(145),
  },
  [48] = {
    [sym_coordinate] = ACTIONS(147),
  },
  [49] = {
    [anon_sym_p] = ACTIONS(149),
    [anon_sym_a] = ACTIONS(149),
    [anon_sym_r] = ACTIONS(149),
    [anon_sym_s] = ACTIONS(149),
    [anon_sym_e] = ACTIONS(149),
  },
  [50] = {
    [sym__line_break] = ACTIONS(151),
    [sym_nbt_path] = ACTIONS(153),
  },
  [51] = {
    [sym_coordinate] = ACTIONS(155),
  },
  [52] = {
    [anon_sym_p] = ACTIONS(157),
    [anon_sym_a] = ACTIONS(157),
    [anon_sym_r] = ACTIONS(157),
    [anon_sym_s] = ACTIONS(157),
    [anon_sym_e] = ACTIONS(157),
  },
  [53] = {
    [sym_nbt_path] = ACTIONS(159),
  },
  [54] = {
    [sym_coordinate] = ACTIONS(161),
  },
  [55] = {
    [sym_nbt_path] = ACTIONS(163),
  },
  [56] = {
    [anon_sym_EQ] = ACTIONS(165),
  },
  [57] = {
    [aux_sym_selector_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(169),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(171),
  },
  [59] = {
    [sym_block_type] = STATE(82),
    [anon_sym_minecraft_COLON] = ACTIONS(131),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(133),
  },
  [60] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(173),
  },
  [61] = {
    [sym__line_break] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
  },
  [62] = {
    [sym__line_break] = ACTIONS(179),
  },
  [63] = {
    [sym_block_state] = STATE(85),
    [sym_nbt_compound] = STATE(86),
    [sym__line_break] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(113),
  },
  [64] = {
    [sym__line_break] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
  },
  [65] = {
    [sym__line_break] = ACTIONS(189),
  },
  [66] = {
    [anon_sym_COLON] = ACTIONS(191),
  },
  [67] = {
    [aux_sym_nbt_compound_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(195),
  },
  [68] = {
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(101),
  },
  [69] = {
    [sym__line_break] = ACTIONS(199),
  },
  [70] = {
    [sym_coordinate] = ACTIONS(201),
  },
  [71] = {
    [sym__line_break] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [sym_nbt_path] = ACTIONS(203),
  },
  [72] = {
    [sym__line_break] = ACTIONS(207),
  },
  [73] = {
    [sym_coordinate] = ACTIONS(209),
  },
  [74] = {
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym_nbt_path] = ACTIONS(203),
  },
  [75] = {
    [sym__line_break] = ACTIONS(213),
  },
  [76] = {
    [sym_coordinate] = ACTIONS(215),
  },
  [77] = {
    [anon_sym_merge] = ACTIONS(217),
    [anon_sym_set] = ACTIONS(217),
    [anon_sym_append] = ACTIONS(217),
    [anon_sym_prepend] = ACTIONS(217),
    [anon_sym_insert] = ACTIONS(219),
  },
  [78] = {
    [sym__selector_argument] = STATE(99),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(127),
  },
  [79] = {
    [sym__line_break] = ACTIONS(221),
  },
  [80] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(223),
  },
  [81] = {
    [sym_selector_value] = STATE(103),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(225),
  },
  [82] = {
    [sym_block_state] = STATE(104),
    [sym_nbt_compound] = STATE(105),
    [sym__line_break] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(113),
  },
  [83] = {
    [sym__line_break] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
  },
  [84] = {
    [sym__block_state_argument] = STATE(107),
    [sym_block_state_key] = STATE(108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(233),
  },
  [85] = {
    [sym_nbt_compound] = STATE(105),
    [sym__line_break] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(113),
  },
  [86] = {
    [sym__line_break] = ACTIONS(227),
  },
  [87] = {
    [sym_nbt_compound] = STATE(113),
    [sym_nbt_array] = STATE(113),
    [sym__nbt_value] = STATE(113),
    [sym_nbt_string] = STATE(113),
    [sym__quoted_string] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_nbt_number] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(243),
  },
  [88] = {
    [sym__nbt_pair] = STATE(115),
    [sym_nbt_key] = ACTIONS(139),
  },
  [89] = {
    [sym__line_break] = ACTIONS(245),
  },
  [90] = {
    [aux_sym_nbt_compound_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(247),
  },
  [91] = {
    [sym__selector_argument] = STATE(118),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(127),
  },
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(185),
  },
  [93] = {
    [sym__selector_argument] = STATE(119),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(127),
  },
  [94] = {
    [sym__line_break] = ACTIONS(187),
    [sym_nbt_path] = ACTIONS(187),
  },
  [95] = {
    [sym__selector_argument] = STATE(120),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(127),
  },
  [96] = {
    [sym_nbt_path] = ACTIONS(185),
  },
  [97] = {
    [sym__data_modify_value_command] = STATE(123),
    [sym__data_modify_from_command] = STATE(123),
    [anon_sym_value] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(251),
  },
  [98] = {
    [sym_integer] = ACTIONS(253),
  },
  [99] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
  },
  [100] = {
    [sym__line_break] = ACTIONS(257),
  },
  [101] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(255),
  },
  [102] = {
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
  },
  [104] = {
    [sym_nbt_compound] = STATE(125),
    [sym__line_break] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(113),
  },
  [105] = {
    [sym__line_break] = ACTIONS(266),
  },
  [106] = {
    [anon_sym_EQ] = ACTIONS(268),
  },
  [107] = {
    [aux_sym_block_state_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(272),
  },
  [108] = {
    [anon_sym_EQ] = ACTIONS(274),
  },
  [109] = {
    [sym_nbt_compound] = STATE(131),
    [sym_nbt_array] = STATE(131),
    [sym__nbt_value] = STATE(131),
    [sym_nbt_string] = STATE(131),
    [sym__quoted_string] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_nbt_number] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(243),
  },
  [110] = {
    [sym__nbt_pair] = STATE(133),
    [anon_sym_RBRACE] = ACTIONS(280),
    [sym_nbt_key] = ACTIONS(139),
  },
  [111] = {
    [aux_sym__quoted_string_repeat1] = STATE(135),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(284),
    [sym_escape_sequence] = ACTIONS(284),
  },
  [112] = {
    [aux_sym__quoted_string_repeat2] = STATE(136),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(286),
    [sym_escape_sequence] = ACTIONS(286),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
  },
  [116] = {
    [sym__line_break] = ACTIONS(294),
  },
  [117] = {
    [aux_sym_nbt_compound_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(292),
  },
  [118] = {
    [aux_sym_selector_repeat1] = STATE(138),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(299),
  },
  [119] = {
    [aux_sym_selector_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(301),
  },
  [120] = {
    [aux_sym_selector_repeat1] = STATE(142),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(303),
  },
  [121] = {
    [sym_nbt_compound] = STATE(146),
    [sym_nbt_array] = STATE(146),
    [sym__nbt_value] = STATE(146),
    [sym_nbt_string] = STATE(146),
    [sym__quoted_string] = STATE(147),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_nbt_number] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(311),
  },
  [122] = {
    [anon_sym_entity] = ACTIONS(313),
    [anon_sym_block] = ACTIONS(315),
  },
  [123] = {
    [sym__line_break] = ACTIONS(317),
  },
  [124] = {
    [sym__data_modify_value_command] = STATE(150),
    [sym__data_modify_from_command] = STATE(150),
    [anon_sym_value] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(251),
  },
  [125] = {
    [sym__line_break] = ACTIONS(319),
  },
  [126] = {
    [sym__block_state_argument] = STATE(151),
    [sym_block_state_key] = STATE(108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(233),
  },
  [127] = {
    [sym__line_break] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(323),
  },
  [128] = {
    [aux_sym_block_state_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(325),
  },
  [129] = {
    [sym_block_state_value] = ACTIONS(327),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
  },
  [131] = {
    [aux_sym_nbt_array_repeat1] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(333),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
  },
  [133] = {
    [aux_sym_nbt_compound_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(335),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
  },
  [135] = {
    [aux_sym__quoted_string_repeat1] = STATE(161),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(341),
    [sym_escape_sequence] = ACTIONS(341),
  },
  [136] = {
    [aux_sym__quoted_string_repeat2] = STATE(162),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(343),
    [sym_escape_sequence] = ACTIONS(343),
  },
  [137] = {
    [anon_sym_LBRACE] = ACTIONS(221),
  },
  [138] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(345),
  },
  [139] = {
    [sym__line_break] = ACTIONS(347),
    [sym_nbt_path] = ACTIONS(347),
  },
  [140] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(349),
  },
  [141] = {
    [sym_nbt_path] = ACTIONS(221),
  },
  [142] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(351),
  },
  [143] = {
    [sym_nbt_compound] = STATE(167),
    [sym_nbt_array] = STATE(167),
    [sym__nbt_value] = STATE(167),
    [sym_nbt_string] = STATE(167),
    [sym__quoted_string] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_nbt_number] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(243),
  },
  [144] = {
    [aux_sym__quoted_string_repeat1] = STATE(169),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(359),
    [sym_escape_sequence] = ACTIONS(359),
  },
  [145] = {
    [aux_sym__quoted_string_repeat2] = STATE(170),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(361),
    [sym_escape_sequence] = ACTIONS(361),
  },
  [146] = {
    [sym__line_break] = ACTIONS(363),
  },
  [147] = {
    [sym__line_break] = ACTIONS(290),
  },
  [148] = {
    [sym_selector] = STATE(171),
    [anon_sym_AT] = ACTIONS(123),
  },
  [149] = {
    [sym__coordinate3] = STATE(171),
    [sym_coordinate] = ACTIONS(125),
  },
  [150] = {
    [sym__line_break] = ACTIONS(365),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
  },
  [152] = {
    [sym__line_break] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(371),
  },
  [153] = {
    [aux_sym_block_state_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(367),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RBRACK] = ACTIONS(376),
  },
  [155] = {
    [sym_nbt_compound] = STATE(172),
    [sym_nbt_array] = STATE(172),
    [sym__nbt_value] = STATE(172),
    [sym_nbt_string] = STATE(172),
    [sym__quoted_string] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_nbt_number] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(243),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RBRACK] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(380),
  },
  [157] = {
    [aux_sym_nbt_array_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(382),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
  },
  [159] = {
    [aux_sym_nbt_compound_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(384),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RBRACK] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(386),
  },
  [161] = {
    [aux_sym__quoted_string_repeat1] = STATE(161),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(390),
    [sym_escape_sequence] = ACTIONS(390),
  },
  [162] = {
    [aux_sym__quoted_string_repeat2] = STATE(162),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(395),
    [sym_escape_sequence] = ACTIONS(395),
  },
  [163] = {
    [anon_sym_LBRACE] = ACTIONS(257),
  },
  [164] = {
    [sym__line_break] = ACTIONS(398),
    [sym_nbt_path] = ACTIONS(398),
  },
  [165] = {
    [sym_nbt_path] = ACTIONS(257),
  },
  [166] = {
    [sym__line_break] = ACTIONS(329),
  },
  [167] = {
    [aux_sym_nbt_array_repeat1] = STATE(177),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(400),
  },
  [168] = {
    [sym__line_break] = ACTIONS(337),
  },
  [169] = {
    [aux_sym__quoted_string_repeat1] = STATE(161),
    [anon_sym_DQUOTE] = ACTIONS(402),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(341),
    [sym_escape_sequence] = ACTIONS(341),
  },
  [170] = {
    [aux_sym__quoted_string_repeat2] = STATE(162),
    [anon_sym_SQUOTE] = ACTIONS(402),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(343),
    [sym_escape_sequence] = ACTIONS(343),
  },
  [171] = {
    [sym_nbt_path] = ACTIONS(404),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(406),
  },
  [173] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_RBRACE] = ACTIONS(408),
  },
  [174] = {
    [aux_sym_nbt_array_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_RBRACK] = ACTIONS(406),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
  },
  [176] = {
    [sym__line_break] = ACTIONS(380),
  },
  [177] = {
    [aux_sym_nbt_array_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(413),
  },
  [178] = {
    [sym__line_break] = ACTIONS(386),
  },
  [179] = {
    [sym__line_break] = ACTIONS(415),
  },
  [180] = {
    [sym__line_break] = ACTIONS(408),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_function, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, SHIFT(15),
  [23] = {.count = 1, .reusable = true}, SHIFT(16),
  [25] = {.count = 1, .reusable = false}, SHIFT(17),
  [27] = {.count = 1, .reusable = true}, SHIFT(19),
  [29] = {.count = 1, .reusable = true}, SHIFT(21),
  [31] = {.count = 1, .reusable = true}, SHIFT(22),
  [33] = {.count = 1, .reusable = true}, SHIFT(23),
  [35] = {.count = 1, .reusable = true}, SHIFT(24),
  [37] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = true}, SHIFT(26),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [47] = {.count = 1, .reusable = true}, SHIFT(28),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__teleport_command, 2),
  [51] = {.count = 1, .reusable = true}, SHIFT(29),
  [53] = {.count = 1, .reusable = true}, SHIFT(30),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(31),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_message, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym__say_command, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(33),
  [65] = {.count = 1, .reusable = true}, SHIFT(34),
  [67] = {.count = 1, .reusable = true}, SHIFT(35),
  [69] = {.count = 1, .reusable = true}, SHIFT(36),
  [71] = {.count = 1, .reusable = true}, SHIFT(37),
  [73] = {.count = 1, .reusable = true}, SHIFT(38),
  [75] = {.count = 1, .reusable = true}, SHIFT(39),
  [77] = {.count = 1, .reusable = true}, SHIFT(40),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym__data_command, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [103] = {.count = 1, .reusable = false}, SHIFT(41),
  [105] = {.count = 1, .reusable = true}, SHIFT(42),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(43),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 3),
  [113] = {.count = 1, .reusable = false}, SHIFT(44),
  [115] = {.count = 1, .reusable = true}, SHIFT(46),
  [117] = {.count = 1, .reusable = true}, SHIFT(48),
  [119] = {.count = 1, .reusable = true}, SHIFT(49),
  [121] = {.count = 1, .reusable = true}, SHIFT(51),
  [123] = {.count = 1, .reusable = true}, SHIFT(52),
  [125] = {.count = 1, .reusable = true}, SHIFT(54),
  [127] = {.count = 1, .reusable = true}, SHIFT(56),
  [129] = {.count = 1, .reusable = true}, SHIFT(59),
  [131] = {.count = 1, .reusable = true}, SHIFT(60),
  [133] = {.count = 1, .reusable = false}, SHIFT(61),
  [135] = {.count = 1, .reusable = true}, SHIFT(64),
  [137] = {.count = 1, .reusable = true}, SHIFT(65),
  [139] = {.count = 1, .reusable = true}, SHIFT(66),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 4),
  [143] = {.count = 1, .reusable = true}, SHIFT(68),
  [145] = {.count = 1, .reusable = true}, SHIFT(44),
  [147] = {.count = 1, .reusable = true}, SHIFT(70),
  [149] = {.count = 1, .reusable = true}, SHIFT(71),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__data_get_command, 3),
  [153] = {.count = 1, .reusable = false}, SHIFT(72),
  [155] = {.count = 1, .reusable = true}, SHIFT(73),
  [157] = {.count = 1, .reusable = true}, SHIFT(74),
  [159] = {.count = 1, .reusable = true}, SHIFT(75),
  [161] = {.count = 1, .reusable = true}, SHIFT(76),
  [163] = {.count = 1, .reusable = true}, SHIFT(77),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_selector_key, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(78),
  [169] = {.count = 1, .reusable = true}, SHIFT(79),
  [171] = {.count = 1, .reusable = true}, SHIFT(81),
  [173] = {.count = 1, .reusable = true}, SHIFT(83),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 1),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 1),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__setblock_command, 5),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [183] = {.count = 1, .reusable = false}, SHIFT(84),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__coordinate3, 3),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__coordinate3, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(87),
  [193] = {.count = 1, .reusable = true}, SHIFT(88),
  [195] = {.count = 1, .reusable = true}, SHIFT(89),
  [197] = {.count = 1, .reusable = true}, SHIFT(91),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__data_merge_command, 4),
  [201] = {.count = 1, .reusable = true}, SHIFT(92),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [205] = {.count = 1, .reusable = false}, SHIFT(93),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym__data_get_command, 4),
  [209] = {.count = 1, .reusable = true}, SHIFT(94),
  [211] = {.count = 1, .reusable = false}, SHIFT(95),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__data_remove_command, 4),
  [215] = {.count = 1, .reusable = true}, SHIFT(96),
  [217] = {.count = 1, .reusable = true}, SHIFT(97),
  [219] = {.count = 1, .reusable = true}, SHIFT(98),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 5),
  [223] = {.count = 1, .reusable = true}, SHIFT(100),
  [225] = {.count = 1, .reusable = true}, SHIFT(102),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 2),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 2),
  [233] = {.count = 1, .reusable = true}, SHIFT(106),
  [235] = {.count = 1, .reusable = true}, SHIFT(109),
  [237] = {.count = 1, .reusable = true}, SHIFT(110),
  [239] = {.count = 1, .reusable = true}, SHIFT(113),
  [241] = {.count = 1, .reusable = true}, SHIFT(111),
  [243] = {.count = 1, .reusable = true}, SHIFT(112),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 3),
  [247] = {.count = 1, .reusable = true}, SHIFT(116),
  [249] = {.count = 1, .reusable = true}, SHIFT(121),
  [251] = {.count = 1, .reusable = true}, SHIFT(122),
  [253] = {.count = 1, .reusable = true}, SHIFT(124),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 6),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(78),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_selector_value, 1),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym__selector_argument, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_block_state_key, 1),
  [270] = {.count = 1, .reusable = true}, SHIFT(126),
  [272] = {.count = 1, .reusable = true}, SHIFT(127),
  [274] = {.count = 1, .reusable = true}, SHIFT(129),
  [276] = {.count = 1, .reusable = true}, SHIFT(130),
  [278] = {.count = 1, .reusable = true}, SHIFT(131),
  [280] = {.count = 1, .reusable = true}, SHIFT(132),
  [282] = {.count = 1, .reusable = false}, SHIFT(134),
  [284] = {.count = 1, .reusable = true}, SHIFT(135),
  [286] = {.count = 1, .reusable = true}, SHIFT(136),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym__nbt_pair, 3),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_string, 1),
  [292] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 4),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2), SHIFT_REPEAT(88),
  [299] = {.count = 1, .reusable = true}, SHIFT(137),
  [301] = {.count = 1, .reusable = true}, SHIFT(139),
  [303] = {.count = 1, .reusable = true}, SHIFT(141),
  [305] = {.count = 1, .reusable = true}, SHIFT(143),
  [307] = {.count = 1, .reusable = true}, SHIFT(146),
  [309] = {.count = 1, .reusable = true}, SHIFT(144),
  [311] = {.count = 1, .reusable = true}, SHIFT(145),
  [313] = {.count = 1, .reusable = true}, SHIFT(148),
  [315] = {.count = 1, .reusable = true}, SHIFT(149),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 6),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 3),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 3),
  [325] = {.count = 1, .reusable = true}, SHIFT(152),
  [327] = {.count = 1, .reusable = true}, SHIFT(154),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 2),
  [331] = {.count = 1, .reusable = true}, SHIFT(155),
  [333] = {.count = 1, .reusable = true}, SHIFT(156),
  [335] = {.count = 1, .reusable = true}, SHIFT(158),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 2),
  [339] = {.count = 1, .reusable = false}, SHIFT(160),
  [341] = {.count = 1, .reusable = true}, SHIFT(161),
  [343] = {.count = 1, .reusable = true}, SHIFT(162),
  [345] = {.count = 1, .reusable = true}, SHIFT(163),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 5),
  [349] = {.count = 1, .reusable = true}, SHIFT(164),
  [351] = {.count = 1, .reusable = true}, SHIFT(165),
  [353] = {.count = 1, .reusable = true}, SHIFT(166),
  [355] = {.count = 1, .reusable = true}, SHIFT(167),
  [357] = {.count = 1, .reusable = false}, SHIFT(168),
  [359] = {.count = 1, .reusable = true}, SHIFT(169),
  [361] = {.count = 1, .reusable = true}, SHIFT(170),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_value_command, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 7),
  [367] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 4),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 4),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2), SHIFT_REPEAT(126),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym__block_state_argument, 3),
  [378] = {.count = 1, .reusable = true}, SHIFT(172),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 3),
  [382] = {.count = 1, .reusable = true}, SHIFT(173),
  [384] = {.count = 1, .reusable = true}, SHIFT(175),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [388] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(161),
  [393] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat2, 2),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat2, 2), SHIFT_REPEAT(162),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 6),
  [400] = {.count = 1, .reusable = true}, SHIFT(176),
  [402] = {.count = 1, .reusable = false}, SHIFT(178),
  [404] = {.count = 1, .reusable = true}, SHIFT(179),
  [406] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 4),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(155),
  [413] = {.count = 1, .reusable = true}, SHIFT(180),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_from_command, 4),
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
