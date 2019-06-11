#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 187
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  anon_sym_function = 22,
  anon_sym_schedule = 23,
  anon_sym_AT = 24,
  anon_sym_p = 25,
  anon_sym_a = 26,
  anon_sym_r = 27,
  anon_sym_s = 28,
  anon_sym_e = 29,
  anon_sym_LBRACK = 30,
  anon_sym_COMMA = 31,
  anon_sym_RBRACK = 32,
  anon_sym_EQ = 33,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH = 34,
  sym_coordinate = 35,
  sym_integer = 36,
  anon_sym_minecraft_COLON = 37,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH = 38,
  sym_block_state_value = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  anon_sym_COLON = 42,
  sym_nbt_key = 43,
  sym_nbt_number = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 46,
  anon_sym_SQUOTE = 47,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 48,
  sym_escape_sequence = 49,
  sym_nbt_path = 50,
  sym_function_name = 51,
  sym_time = 52,
  sym_function = 53,
  sym_comment = 54,
  sym_command = 55,
  sym__teleport_command = 56,
  sym__setblock_command = 57,
  sym__summon_command = 58,
  sym__say_command = 59,
  sym__data_command = 60,
  sym__data_merge_command = 61,
  sym__data_get_command = 62,
  sym__data_remove_command = 63,
  sym__data_modify_command = 64,
  sym__data_modify_value_command = 65,
  sym__data_modify_from_command = 66,
  sym__function_command = 67,
  sym__schedule_command = 68,
  sym_selector = 69,
  sym__selector_argument = 70,
  sym_selector_key = 71,
  sym_selector_value = 72,
  sym__coordinate3 = 73,
  sym_block = 74,
  sym_block_type = 75,
  sym_block_state = 76,
  sym__block_state_argument = 77,
  sym_block_state_key = 78,
  sym_entity_type = 79,
  sym_message = 80,
  sym_nbt_compound = 81,
  sym__nbt_pair = 82,
  sym_nbt_array = 83,
  sym__nbt_value = 84,
  sym_nbt_string = 85,
  sym__quoted_string = 86,
  aux_sym_function_repeat1 = 87,
  aux_sym_selector_repeat1 = 88,
  aux_sym_block_state_repeat1 = 89,
  aux_sym_nbt_compound_repeat1 = 90,
  aux_sym_nbt_array_repeat1 = 91,
  aux_sym__quoted_string_repeat1 = 92,
  aux_sym__quoted_string_repeat2 = 93,
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
  [anon_sym_function] = "function",
  [anon_sym_schedule] = "schedule",
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
  [sym_function_name] = "function_name",
  [sym_time] = "time",
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
  [sym__function_command] = "_function_command",
  [sym__schedule_command] = "_schedule_command",
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_schedule] = {
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
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
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
  [sym__function_command] = {
    .visible = false,
    .named = true,
  },
  [sym__schedule_command] = {
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
        ADVANCE(45);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'm')
        ADVANCE(54);
      if (lookahead == 'p')
        ADVANCE(73);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 's')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
      if (lookahead == 'v')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(90);
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '~')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
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
      if (lookahead == 'u')
        ADVANCE(38);
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
      if (lookahead == 'n')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'c')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'i')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'o')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 't')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 's')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'r')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 't')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'i')
        ADVANCE(59);
      if (lookahead == 'o')
        ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'r')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'g')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 59:
      if (lookahead == 'n')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'c')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'a')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'f')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 't')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == ':')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_minecraft_COLON);
      END_STATE();
    case 68:
      if (lookahead == 'd')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'i')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'f')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'y')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'p')
        ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'l')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'e')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'p')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'o')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'r')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_teleport);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_tp);
      END_STATE();
    case 85:
      if (lookahead == 'a')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'l')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'u')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_coordinate);
      END_STATE();
    case 93:
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
        ADVANCE(45);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'm')
        ADVANCE(54);
      if (lookahead == 'p')
        ADVANCE(73);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 's')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
      if (lookahead == 'v')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(90);
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '~')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(95);
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 98:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'd')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 's')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == 'u')
        ADVANCE(38);
      END_STATE();
    case 100:
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'c')
        ADVANCE(103);
      if (lookahead == 'e')
        ADVANCE(110);
      if (lookahead == 'u')
        ADVANCE(117);
      END_STATE();
    case 101:
      if (lookahead == 'y')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_say);
      END_STATE();
    case 103:
      if (lookahead == 'h')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'd')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'u')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'l')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_schedule);
      END_STATE();
    case 110:
      if (lookahead == 't')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'b')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'l')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'c')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'k')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_setblock);
      END_STATE();
    case 117:
      if (lookahead == 'm')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'm')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'o')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'n')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_summon);
      END_STATE();
    case 122:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(123);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(122);
      if (lookahead != 0)
        ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      END_STATE();
    case 126:
      if (lookahead == '~')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      END_STATE();
    case 127:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'm')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(134);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == ':')
        ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'g')
        ADVANCE(45);
      if (lookahead == 'm')
        ADVANCE(139);
      if (lookahead == 'r')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(138);
      END_STATE();
    case 139:
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'o')
        ADVANCE(68);
      END_STATE();
    case 140:
      if (lookahead == 'e')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'm')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'o')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'v')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'e')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 146:
      if (lookahead == '/')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_function_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '/')
        ADVANCE(147);
      if (lookahead == ':')
        ADVANCE(149);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
      END_STATE();
    case 149:
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(147);
      END_STATE();
    case 150:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      END_STATE();
    case 151:
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(151);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == 'a')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'p')
        ADVANCE(73);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 's')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(153);
      END_STATE();
    case 154:
      if (lookahead == 'b')
        ADVANCE(24);
      if (lookahead == 'e')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      END_STATE();
    case 155:
      if (lookahead == 'n')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 't')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'i')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'y')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == '.')
        ADVANCE(95);
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 165:
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_nbt_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 167:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(168);
      if (lookahead == '[')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '{')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_nbt_number);
      if (lookahead == '.')
        ADVANCE(170);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_nbt_number);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_nbt_number);
      END_STATE();
    case 173:
      if (lookahead == '\t')
        ADVANCE(174);
      if (lookahead == ' ')
        SKIP(173);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(176);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == '\t')
        ADVANCE(178);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(175);
      END_STATE();
    case 179:
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      END_STATE();
    case 180:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      END_STATE();
    case 181:
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      END_STATE();
    case 182:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      END_STATE();
    case 183:
      if (lookahead == '\t')
        ADVANCE(184);
      if (lookahead == ' ')
        SKIP(183);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(175);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(175);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(186);
      END_STATE();
    case 187:
      if (lookahead == '\t')
        ADVANCE(188);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(188);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(175);
      END_STATE();
    case 189:
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'm')
        ADVANCE(196);
      if (lookahead == 'p')
        ADVANCE(197);
      if (lookahead == 's')
        ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      END_STATE();
    case 190:
      if (lookahead == 'p')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'p')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'd')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 196:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 197:
      if (lookahead == 'r')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'p')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'e')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'n')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'd')
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 204:
      if (lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 't')
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 207:
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'v')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      END_STATE();
    case 208:
      if (lookahead == 'r')
        ADVANCE(35);
      END_STATE();
    case 209:
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 210:
      if (lookahead == '\n')
        SKIP(211);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(212);
      if (lookahead != 0)
        ADVANCE(213);
      END_STATE();
    case 211:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(213);
      END_STATE();
    case 214:
      if (lookahead == '\n')
        SKIP(215);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(216);
      if (lookahead != 0)
        ADVANCE(217);
      END_STATE();
    case 215:
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(217);
      END_STATE();
    case 218:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_block_state_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(220);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 122},
  [3] = {.lex_state = 125},
  [4] = {.lex_state = 126},
  [5] = {.lex_state = 127},
  [6] = {.lex_state = 122},
  [7] = {.lex_state = 138},
  [8] = {.lex_state = 146},
  [9] = {.lex_state = 98},
  [10] = {.lex_state = 150},
  [11] = {.lex_state = 151},
  [12] = {.lex_state = 151},
  [13] = {.lex_state = 98},
  [14] = {.lex_state = 151},
  [15] = {.lex_state = 153},
  [16] = {.lex_state = 151},
  [17] = {.lex_state = 126},
  [18] = {.lex_state = 127},
  [19] = {.lex_state = 126},
  [20] = {.lex_state = 126},
  [21] = {.lex_state = 151},
  [22] = {.lex_state = 151},
  [23] = {.lex_state = 154},
  [24] = {.lex_state = 154},
  [25] = {.lex_state = 154},
  [26] = {.lex_state = 154},
  [27] = {.lex_state = 151},
  [28] = {.lex_state = 151},
  [29] = {.lex_state = 146},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 98},
  [32] = {.lex_state = 151},
  [33] = {.lex_state = 126},
  [34] = {.lex_state = 126},
  [35] = {.lex_state = 126},
  [36] = {.lex_state = 151},
  [37] = {.lex_state = 125},
  [38] = {.lex_state = 126},
  [39] = {.lex_state = 125},
  [40] = {.lex_state = 126},
  [41] = {.lex_state = 125},
  [42] = {.lex_state = 126},
  [43] = {.lex_state = 125},
  [44] = {.lex_state = 126},
  [45] = {.lex_state = 161},
  [46] = {.lex_state = 163},
  [47] = {.lex_state = 127},
  [48] = {.lex_state = 126},
  [49] = {.lex_state = 165},
  [50] = {.lex_state = 151},
  [51] = {.lex_state = 153},
  [52] = {.lex_state = 167},
  [53] = {.lex_state = 126},
  [54] = {.lex_state = 153},
  [55] = {.lex_state = 173},
  [56] = {.lex_state = 126},
  [57] = {.lex_state = 153},
  [58] = {.lex_state = 177},
  [59] = {.lex_state = 126},
  [60] = {.lex_state = 177},
  [61] = {.lex_state = 151},
  [62] = {.lex_state = 179},
  [63] = {.lex_state = 180},
  [64] = {.lex_state = 179},
  [65] = {.lex_state = 127},
  [66] = {.lex_state = 127},
  [67] = {.lex_state = 151},
  [68] = {.lex_state = 151},
  [69] = {.lex_state = 151},
  [70] = {.lex_state = 151},
  [71] = {.lex_state = 151},
  [72] = {.lex_state = 181},
  [73] = {.lex_state = 182},
  [74] = {.lex_state = 167},
  [75] = {.lex_state = 151},
  [76] = {.lex_state = 126},
  [77] = {.lex_state = 183},
  [78] = {.lex_state = 151},
  [79] = {.lex_state = 126},
  [80] = {.lex_state = 187},
  [81] = {.lex_state = 151},
  [82] = {.lex_state = 126},
  [83] = {.lex_state = 189},
  [84] = {.lex_state = 163},
  [85] = {.lex_state = 151},
  [86] = {.lex_state = 180},
  [87] = {.lex_state = 163},
  [88] = {.lex_state = 151},
  [89] = {.lex_state = 151},
  [90] = {.lex_state = 127},
  [91] = {.lex_state = 151},
  [92] = {.lex_state = 151},
  [93] = {.lex_state = 167},
  [94] = {.lex_state = 165},
  [95] = {.lex_state = 151},
  [96] = {.lex_state = 182},
  [97] = {.lex_state = 163},
  [98] = {.lex_state = 167},
  [99] = {.lex_state = 163},
  [100] = {.lex_state = 173},
  [101] = {.lex_state = 163},
  [102] = {.lex_state = 177},
  [103] = {.lex_state = 207},
  [104] = {.lex_state = 209},
  [105] = {.lex_state = 180},
  [106] = {.lex_state = 151},
  [107] = {.lex_state = 180},
  [108] = {.lex_state = 180},
  [109] = {.lex_state = 180},
  [110] = {.lex_state = 151},
  [111] = {.lex_state = 151},
  [112] = {.lex_state = 179},
  [113] = {.lex_state = 180},
  [114] = {.lex_state = 179},
  [115] = {.lex_state = 167},
  [116] = {.lex_state = 165},
  [117] = {.lex_state = 210},
  [118] = {.lex_state = 214},
  [119] = {.lex_state = 182},
  [120] = {.lex_state = 218},
  [121] = {.lex_state = 182},
  [122] = {.lex_state = 151},
  [123] = {.lex_state = 182},
  [124] = {.lex_state = 180},
  [125] = {.lex_state = 180},
  [126] = {.lex_state = 180},
  [127] = {.lex_state = 167},
  [128] = {.lex_state = 154},
  [129] = {.lex_state = 151},
  [130] = {.lex_state = 207},
  [131] = {.lex_state = 151},
  [132] = {.lex_state = 127},
  [133] = {.lex_state = 151},
  [134] = {.lex_state = 180},
  [135] = {.lex_state = 219},
  [136] = {.lex_state = 218},
  [137] = {.lex_state = 180},
  [138] = {.lex_state = 218},
  [139] = {.lex_state = 182},
  [140] = {.lex_state = 218},
  [141] = {.lex_state = 210},
  [142] = {.lex_state = 214},
  [143] = {.lex_state = 167},
  [144] = {.lex_state = 180},
  [145] = {.lex_state = 173},
  [146] = {.lex_state = 180},
  [147] = {.lex_state = 177},
  [148] = {.lex_state = 180},
  [149] = {.lex_state = 167},
  [150] = {.lex_state = 210},
  [151] = {.lex_state = 214},
  [152] = {.lex_state = 151},
  [153] = {.lex_state = 151},
  [154] = {.lex_state = 125},
  [155] = {.lex_state = 126},
  [156] = {.lex_state = 151},
  [157] = {.lex_state = 180},
  [158] = {.lex_state = 151},
  [159] = {.lex_state = 180},
  [160] = {.lex_state = 180},
  [161] = {.lex_state = 167},
  [162] = {.lex_state = 218},
  [163] = {.lex_state = 180},
  [164] = {.lex_state = 218},
  [165] = {.lex_state = 182},
  [166] = {.lex_state = 218},
  [167] = {.lex_state = 210},
  [168] = {.lex_state = 214},
  [169] = {.lex_state = 167},
  [170] = {.lex_state = 173},
  [171] = {.lex_state = 177},
  [172] = {.lex_state = 151},
  [173] = {.lex_state = 180},
  [174] = {.lex_state = 151},
  [175] = {.lex_state = 210},
  [176] = {.lex_state = 214},
  [177] = {.lex_state = 177},
  [178] = {.lex_state = 180},
  [179] = {.lex_state = 218},
  [180] = {.lex_state = 180},
  [181] = {.lex_state = 218},
  [182] = {.lex_state = 151},
  [183] = {.lex_state = 180},
  [184] = {.lex_state = 151},
  [185] = {.lex_state = 151},
  [186] = {.lex_state = 151},
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
    [anon_sym_function] = ACTIONS(1),
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
    [sym_integer] = ACTIONS(3),
    [anon_sym_minecraft_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
  },
  [1] = {
    [sym_function] = STATE(10),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym__teleport_command] = STATE(12),
    [sym__setblock_command] = STATE(12),
    [sym__summon_command] = STATE(12),
    [sym__say_command] = STATE(12),
    [sym__data_command] = STATE(12),
    [sym__function_command] = STATE(12),
    [sym__schedule_command] = STATE(12),
    [aux_sym_function_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_teleport] = ACTIONS(9),
    [anon_sym_tp] = ACTIONS(9),
    [anon_sym_setblock] = ACTIONS(11),
    [anon_sym_summon] = ACTIONS(13),
    [anon_sym_say] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_schedule] = ACTIONS(21),
  },
  [2] = {
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(23),
  },
  [3] = {
    [sym_selector] = STATE(16),
    [anon_sym_AT] = ACTIONS(25),
  },
  [4] = {
    [sym_coordinate] = ACTIONS(27),
  },
  [5] = {
    [sym_entity_type] = STATE(20),
    [anon_sym_minecraft_COLON] = ACTIONS(29),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(31),
  },
  [6] = {
    [sym_message] = STATE(22),
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(33),
  },
  [7] = {
    [sym__data_merge_command] = STATE(27),
    [sym__data_get_command] = STATE(27),
    [sym__data_remove_command] = STATE(27),
    [sym__data_modify_command] = STATE(27),
    [anon_sym_merge] = ACTIONS(35),
    [anon_sym_get] = ACTIONS(37),
    [anon_sym_remove] = ACTIONS(39),
    [anon_sym_modify] = ACTIONS(41),
  },
  [8] = {
    [sym_function_name] = ACTIONS(43),
  },
  [9] = {
    [anon_sym_function] = ACTIONS(45),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(47),
  },
  [11] = {
    [sym__line_break] = ACTIONS(49),
  },
  [12] = {
    [sym__line_break] = ACTIONS(51),
  },
  [13] = {
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym__teleport_command] = STATE(12),
    [sym__setblock_command] = STATE(12),
    [sym__summon_command] = STATE(12),
    [sym__say_command] = STATE(12),
    [sym__data_command] = STATE(12),
    [sym__function_command] = STATE(12),
    [sym__schedule_command] = STATE(12),
    [aux_sym_function_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_teleport] = ACTIONS(9),
    [anon_sym_tp] = ACTIONS(9),
    [anon_sym_setblock] = ACTIONS(11),
    [anon_sym_summon] = ACTIONS(13),
    [anon_sym_say] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_schedule] = ACTIONS(21),
  },
  [14] = {
    [sym__line_break] = ACTIONS(55),
  },
  [15] = {
    [anon_sym_p] = ACTIONS(57),
    [anon_sym_a] = ACTIONS(57),
    [anon_sym_r] = ACTIONS(57),
    [anon_sym_s] = ACTIONS(57),
    [anon_sym_e] = ACTIONS(57),
  },
  [16] = {
    [sym__line_break] = ACTIONS(59),
  },
  [17] = {
    [sym_coordinate] = ACTIONS(61),
  },
  [18] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(63),
  },
  [19] = {
    [sym_coordinate] = ACTIONS(65),
  },
  [20] = {
    [sym__coordinate3] = STATE(36),
    [sym_coordinate] = ACTIONS(67),
  },
  [21] = {
    [sym__line_break] = ACTIONS(69),
  },
  [22] = {
    [sym__line_break] = ACTIONS(71),
  },
  [23] = {
    [anon_sym_entity] = ACTIONS(73),
    [anon_sym_block] = ACTIONS(75),
  },
  [24] = {
    [anon_sym_entity] = ACTIONS(77),
    [anon_sym_block] = ACTIONS(79),
  },
  [25] = {
    [anon_sym_entity] = ACTIONS(81),
    [anon_sym_block] = ACTIONS(83),
  },
  [26] = {
    [anon_sym_entity] = ACTIONS(85),
    [anon_sym_block] = ACTIONS(87),
  },
  [27] = {
    [sym__line_break] = ACTIONS(89),
  },
  [28] = {
    [sym__line_break] = ACTIONS(91),
  },
  [29] = {
    [sym_function_name] = ACTIONS(93),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(95),
    [anon_sym_teleport] = ACTIONS(95),
    [anon_sym_tp] = ACTIONS(95),
    [anon_sym_setblock] = ACTIONS(95),
    [anon_sym_summon] = ACTIONS(95),
    [anon_sym_say] = ACTIONS(95),
    [anon_sym_data] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(95),
    [anon_sym_schedule] = ACTIONS(95),
  },
  [31] = {
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym__teleport_command] = STATE(12),
    [sym__setblock_command] = STATE(12),
    [sym__summon_command] = STATE(12),
    [sym__say_command] = STATE(12),
    [sym__data_command] = STATE(12),
    [sym__function_command] = STATE(12),
    [sym__schedule_command] = STATE(12),
    [aux_sym_function_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(97),
    [anon_sym_teleport] = ACTIONS(100),
    [anon_sym_tp] = ACTIONS(100),
    [anon_sym_setblock] = ACTIONS(103),
    [anon_sym_summon] = ACTIONS(106),
    [anon_sym_say] = ACTIONS(109),
    [anon_sym_data] = ACTIONS(112),
    [anon_sym_function] = ACTIONS(115),
    [anon_sym_schedule] = ACTIONS(118),
  },
  [32] = {
    [sym__line_break] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
  },
  [33] = {
    [sym_coordinate] = ACTIONS(125),
  },
  [34] = {
    [sym_coordinate] = ACTIONS(127),
  },
  [35] = {
    [sym_coordinate] = ACTIONS(129),
  },
  [36] = {
    [sym_nbt_compound] = STATE(50),
    [sym__line_break] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(133),
  },
  [37] = {
    [sym_selector] = STATE(52),
    [anon_sym_AT] = ACTIONS(135),
  },
  [38] = {
    [sym__coordinate3] = STATE(52),
    [sym_coordinate] = ACTIONS(137),
  },
  [39] = {
    [sym_selector] = STATE(55),
    [anon_sym_AT] = ACTIONS(139),
  },
  [40] = {
    [sym__coordinate3] = STATE(55),
    [sym_coordinate] = ACTIONS(141),
  },
  [41] = {
    [sym_selector] = STATE(58),
    [anon_sym_AT] = ACTIONS(143),
  },
  [42] = {
    [sym__coordinate3] = STATE(58),
    [sym_coordinate] = ACTIONS(145),
  },
  [43] = {
    [sym_selector] = STATE(60),
    [anon_sym_AT] = ACTIONS(143),
  },
  [44] = {
    [sym__coordinate3] = STATE(60),
    [sym_coordinate] = ACTIONS(145),
  },
  [45] = {
    [sym_time] = ACTIONS(147),
  },
  [46] = {
    [sym__selector_argument] = STATE(63),
    [sym_selector_key] = STATE(64),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(149),
  },
  [47] = {
    [sym_block] = STATE(68),
    [sym_block_type] = STATE(69),
    [anon_sym_POUND] = ACTIONS(151),
    [anon_sym_minecraft_COLON] = ACTIONS(153),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(155),
  },
  [48] = {
    [sym_coordinate] = ACTIONS(157),
  },
  [49] = {
    [sym__nbt_pair] = STATE(73),
    [anon_sym_RBRACE] = ACTIONS(159),
    [sym_nbt_key] = ACTIONS(161),
  },
  [50] = {
    [sym__line_break] = ACTIONS(163),
  },
  [51] = {
    [anon_sym_p] = ACTIONS(165),
    [anon_sym_a] = ACTIONS(165),
    [anon_sym_r] = ACTIONS(165),
    [anon_sym_s] = ACTIONS(165),
    [anon_sym_e] = ACTIONS(165),
  },
  [52] = {
    [sym_nbt_compound] = STATE(75),
    [anon_sym_LBRACE] = ACTIONS(167),
  },
  [53] = {
    [sym_coordinate] = ACTIONS(169),
  },
  [54] = {
    [anon_sym_p] = ACTIONS(171),
    [anon_sym_a] = ACTIONS(171),
    [anon_sym_r] = ACTIONS(171),
    [anon_sym_s] = ACTIONS(171),
    [anon_sym_e] = ACTIONS(171),
  },
  [55] = {
    [sym__line_break] = ACTIONS(173),
    [sym_nbt_path] = ACTIONS(175),
  },
  [56] = {
    [sym_coordinate] = ACTIONS(177),
  },
  [57] = {
    [anon_sym_p] = ACTIONS(179),
    [anon_sym_a] = ACTIONS(179),
    [anon_sym_r] = ACTIONS(179),
    [anon_sym_s] = ACTIONS(179),
    [anon_sym_e] = ACTIONS(179),
  },
  [58] = {
    [sym_nbt_path] = ACTIONS(181),
  },
  [59] = {
    [sym_coordinate] = ACTIONS(183),
  },
  [60] = {
    [sym_nbt_path] = ACTIONS(185),
  },
  [61] = {
    [sym__line_break] = ACTIONS(187),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(189),
  },
  [63] = {
    [aux_sym_selector_repeat1] = STATE(86),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(193),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(195),
  },
  [65] = {
    [sym_block_type] = STATE(88),
    [anon_sym_minecraft_COLON] = ACTIONS(153),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(155),
  },
  [66] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(197),
  },
  [67] = {
    [sym__line_break] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
  },
  [68] = {
    [sym__line_break] = ACTIONS(203),
  },
  [69] = {
    [sym_block_state] = STATE(91),
    [sym_nbt_compound] = STATE(92),
    [sym__line_break] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(133),
  },
  [70] = {
    [sym__line_break] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(211),
  },
  [71] = {
    [sym__line_break] = ACTIONS(213),
  },
  [72] = {
    [anon_sym_COLON] = ACTIONS(215),
  },
  [73] = {
    [aux_sym_nbt_compound_repeat1] = STATE(96),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(219),
  },
  [74] = {
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(121),
  },
  [75] = {
    [sym__line_break] = ACTIONS(223),
  },
  [76] = {
    [sym_coordinate] = ACTIONS(225),
  },
  [77] = {
    [sym__line_break] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [sym_nbt_path] = ACTIONS(227),
  },
  [78] = {
    [sym__line_break] = ACTIONS(231),
  },
  [79] = {
    [sym_coordinate] = ACTIONS(233),
  },
  [80] = {
    [anon_sym_LBRACK] = ACTIONS(235),
    [sym_nbt_path] = ACTIONS(227),
  },
  [81] = {
    [sym__line_break] = ACTIONS(237),
  },
  [82] = {
    [sym_coordinate] = ACTIONS(239),
  },
  [83] = {
    [anon_sym_merge] = ACTIONS(241),
    [anon_sym_set] = ACTIONS(241),
    [anon_sym_append] = ACTIONS(241),
    [anon_sym_prepend] = ACTIONS(241),
    [anon_sym_insert] = ACTIONS(243),
  },
  [84] = {
    [sym__selector_argument] = STATE(105),
    [sym_selector_key] = STATE(64),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(149),
  },
  [85] = {
    [sym__line_break] = ACTIONS(245),
  },
  [86] = {
    [aux_sym_selector_repeat1] = STATE(107),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(247),
  },
  [87] = {
    [sym_selector_value] = STATE(109),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(249),
  },
  [88] = {
    [sym_block_state] = STATE(110),
    [sym_nbt_compound] = STATE(111),
    [sym__line_break] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(133),
  },
  [89] = {
    [sym__line_break] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
  },
  [90] = {
    [sym__block_state_argument] = STATE(113),
    [sym_block_state_key] = STATE(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(257),
  },
  [91] = {
    [sym_nbt_compound] = STATE(111),
    [sym__line_break] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(133),
  },
  [92] = {
    [sym__line_break] = ACTIONS(251),
  },
  [93] = {
    [sym_nbt_compound] = STATE(119),
    [sym_nbt_array] = STATE(119),
    [sym__nbt_value] = STATE(119),
    [sym_nbt_string] = STATE(119),
    [sym__quoted_string] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(261),
    [sym_nbt_number] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(267),
  },
  [94] = {
    [sym__nbt_pair] = STATE(121),
    [sym_nbt_key] = ACTIONS(161),
  },
  [95] = {
    [sym__line_break] = ACTIONS(269),
  },
  [96] = {
    [aux_sym_nbt_compound_repeat1] = STATE(123),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(271),
  },
  [97] = {
    [sym__selector_argument] = STATE(124),
    [sym_selector_key] = STATE(64),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(149),
  },
  [98] = {
    [anon_sym_LBRACE] = ACTIONS(209),
  },
  [99] = {
    [sym__selector_argument] = STATE(125),
    [sym_selector_key] = STATE(64),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(149),
  },
  [100] = {
    [sym__line_break] = ACTIONS(211),
    [sym_nbt_path] = ACTIONS(211),
  },
  [101] = {
    [sym__selector_argument] = STATE(126),
    [sym_selector_key] = STATE(64),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(149),
  },
  [102] = {
    [sym_nbt_path] = ACTIONS(209),
  },
  [103] = {
    [sym__data_modify_value_command] = STATE(129),
    [sym__data_modify_from_command] = STATE(129),
    [anon_sym_value] = ACTIONS(273),
    [anon_sym_from] = ACTIONS(275),
  },
  [104] = {
    [sym_integer] = ACTIONS(277),
  },
  [105] = {
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
  },
  [106] = {
    [sym__line_break] = ACTIONS(281),
  },
  [107] = {
    [aux_sym_selector_repeat1] = STATE(107),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(279),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
  },
  [109] = {
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
  },
  [110] = {
    [sym_nbt_compound] = STATE(131),
    [sym__line_break] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(133),
  },
  [111] = {
    [sym__line_break] = ACTIONS(290),
  },
  [112] = {
    [anon_sym_EQ] = ACTIONS(292),
  },
  [113] = {
    [aux_sym_block_state_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(296),
  },
  [114] = {
    [anon_sym_EQ] = ACTIONS(298),
  },
  [115] = {
    [sym_nbt_compound] = STATE(137),
    [sym_nbt_array] = STATE(137),
    [sym__nbt_value] = STATE(137),
    [sym_nbt_string] = STATE(137),
    [sym__quoted_string] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(261),
    [sym_nbt_number] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(267),
  },
  [116] = {
    [sym__nbt_pair] = STATE(139),
    [anon_sym_RBRACE] = ACTIONS(304),
    [sym_nbt_key] = ACTIONS(161),
  },
  [117] = {
    [aux_sym__quoted_string_repeat1] = STATE(141),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(308),
    [sym_escape_sequence] = ACTIONS(308),
  },
  [118] = {
    [aux_sym__quoted_string_repeat2] = STATE(142),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(310),
    [sym_escape_sequence] = ACTIONS(310),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RBRACK] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
  },
  [121] = {
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(316),
  },
  [122] = {
    [sym__line_break] = ACTIONS(318),
  },
  [123] = {
    [aux_sym_nbt_compound_repeat1] = STATE(123),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(316),
  },
  [124] = {
    [aux_sym_selector_repeat1] = STATE(144),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(323),
  },
  [125] = {
    [aux_sym_selector_repeat1] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(325),
  },
  [126] = {
    [aux_sym_selector_repeat1] = STATE(148),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(327),
  },
  [127] = {
    [sym_nbt_compound] = STATE(152),
    [sym_nbt_array] = STATE(152),
    [sym__nbt_value] = STATE(152),
    [sym_nbt_string] = STATE(152),
    [sym__quoted_string] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(167),
    [sym_nbt_number] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(335),
  },
  [128] = {
    [anon_sym_entity] = ACTIONS(337),
    [anon_sym_block] = ACTIONS(339),
  },
  [129] = {
    [sym__line_break] = ACTIONS(341),
  },
  [130] = {
    [sym__data_modify_value_command] = STATE(156),
    [sym__data_modify_from_command] = STATE(156),
    [anon_sym_value] = ACTIONS(273),
    [anon_sym_from] = ACTIONS(275),
  },
  [131] = {
    [sym__line_break] = ACTIONS(343),
  },
  [132] = {
    [sym__block_state_argument] = STATE(157),
    [sym_block_state_key] = STATE(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(257),
  },
  [133] = {
    [sym__line_break] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(347),
  },
  [134] = {
    [aux_sym_block_state_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(349),
  },
  [135] = {
    [sym_block_state_value] = ACTIONS(351),
  },
  [136] = {
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
  },
  [137] = {
    [aux_sym_nbt_array_repeat1] = STATE(163),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(357),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
  },
  [139] = {
    [aux_sym_nbt_compound_repeat1] = STATE(165),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(359),
  },
  [140] = {
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
  },
  [141] = {
    [aux_sym__quoted_string_repeat1] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(365),
    [sym_escape_sequence] = ACTIONS(365),
  },
  [142] = {
    [aux_sym__quoted_string_repeat2] = STATE(168),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(367),
    [sym_escape_sequence] = ACTIONS(367),
  },
  [143] = {
    [anon_sym_LBRACE] = ACTIONS(245),
  },
  [144] = {
    [aux_sym_selector_repeat1] = STATE(107),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(369),
  },
  [145] = {
    [sym__line_break] = ACTIONS(371),
    [sym_nbt_path] = ACTIONS(371),
  },
  [146] = {
    [aux_sym_selector_repeat1] = STATE(107),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(373),
  },
  [147] = {
    [sym_nbt_path] = ACTIONS(245),
  },
  [148] = {
    [aux_sym_selector_repeat1] = STATE(107),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(375),
  },
  [149] = {
    [sym_nbt_compound] = STATE(173),
    [sym_nbt_array] = STATE(173),
    [sym__nbt_value] = STATE(173),
    [sym_nbt_string] = STATE(173),
    [sym__quoted_string] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(261),
    [sym_nbt_number] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(267),
  },
  [150] = {
    [aux_sym__quoted_string_repeat1] = STATE(175),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(383),
    [sym_escape_sequence] = ACTIONS(383),
  },
  [151] = {
    [aux_sym__quoted_string_repeat2] = STATE(176),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(385),
    [sym_escape_sequence] = ACTIONS(385),
  },
  [152] = {
    [sym__line_break] = ACTIONS(387),
  },
  [153] = {
    [sym__line_break] = ACTIONS(314),
  },
  [154] = {
    [sym_selector] = STATE(177),
    [anon_sym_AT] = ACTIONS(143),
  },
  [155] = {
    [sym__coordinate3] = STATE(177),
    [sym_coordinate] = ACTIONS(145),
  },
  [156] = {
    [sym__line_break] = ACTIONS(389),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
  },
  [158] = {
    [sym__line_break] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(395),
  },
  [159] = {
    [aux_sym_block_state_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(391),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
  },
  [161] = {
    [sym_nbt_compound] = STATE(178),
    [sym_nbt_array] = STATE(178),
    [sym__nbt_value] = STATE(178),
    [sym_nbt_string] = STATE(178),
    [sym__quoted_string] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(261),
    [sym_nbt_number] = ACTIONS(402),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(267),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(404),
  },
  [163] = {
    [aux_sym_nbt_array_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(406),
  },
  [164] = {
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [165] = {
    [aux_sym_nbt_compound_repeat1] = STATE(123),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(408),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_RBRACK] = ACTIONS(410),
    [anon_sym_RBRACE] = ACTIONS(410),
  },
  [167] = {
    [aux_sym__quoted_string_repeat1] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(414),
    [sym_escape_sequence] = ACTIONS(414),
  },
  [168] = {
    [aux_sym__quoted_string_repeat2] = STATE(168),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(419),
    [sym_escape_sequence] = ACTIONS(419),
  },
  [169] = {
    [anon_sym_LBRACE] = ACTIONS(281),
  },
  [170] = {
    [sym__line_break] = ACTIONS(422),
    [sym_nbt_path] = ACTIONS(422),
  },
  [171] = {
    [sym_nbt_path] = ACTIONS(281),
  },
  [172] = {
    [sym__line_break] = ACTIONS(353),
  },
  [173] = {
    [aux_sym_nbt_array_repeat1] = STATE(183),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(424),
  },
  [174] = {
    [sym__line_break] = ACTIONS(361),
  },
  [175] = {
    [aux_sym__quoted_string_repeat1] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(365),
    [sym_escape_sequence] = ACTIONS(365),
  },
  [176] = {
    [aux_sym__quoted_string_repeat2] = STATE(168),
    [anon_sym_SQUOTE] = ACTIONS(426),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(367),
    [sym_escape_sequence] = ACTIONS(367),
  },
  [177] = {
    [sym_nbt_path] = ACTIONS(428),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RBRACK] = ACTIONS(430),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(432),
  },
  [180] = {
    [aux_sym_nbt_array_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(430),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
  },
  [182] = {
    [sym__line_break] = ACTIONS(404),
  },
  [183] = {
    [aux_sym_nbt_array_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(437),
  },
  [184] = {
    [sym__line_break] = ACTIONS(410),
  },
  [185] = {
    [sym__line_break] = ACTIONS(439),
  },
  [186] = {
    [sym__line_break] = ACTIONS(432),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_function, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = false}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, SHIFT(21),
  [35] = {.count = 1, .reusable = true}, SHIFT(23),
  [37] = {.count = 1, .reusable = true}, SHIFT(24),
  [39] = {.count = 1, .reusable = true}, SHIFT(25),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, SHIFT(28),
  [45] = {.count = 1, .reusable = true}, SHIFT(29),
  [47] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [49] = {.count = 1, .reusable = true}, SHIFT(30),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(32),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym__teleport_command, 2),
  [61] = {.count = 1, .reusable = true}, SHIFT(33),
  [63] = {.count = 1, .reusable = true}, SHIFT(34),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(35),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_message, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__say_command, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(37),
  [75] = {.count = 1, .reusable = true}, SHIFT(38),
  [77] = {.count = 1, .reusable = true}, SHIFT(39),
  [79] = {.count = 1, .reusable = true}, SHIFT(40),
  [81] = {.count = 1, .reusable = true}, SHIFT(41),
  [83] = {.count = 1, .reusable = true}, SHIFT(42),
  [85] = {.count = 1, .reusable = true}, SHIFT(43),
  [87] = {.count = 1, .reusable = true}, SHIFT(44),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__data_command, 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__function_command, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(45),
  [95] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [123] = {.count = 1, .reusable = false}, SHIFT(46),
  [125] = {.count = 1, .reusable = true}, SHIFT(47),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(48),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 3),
  [133] = {.count = 1, .reusable = false}, SHIFT(49),
  [135] = {.count = 1, .reusable = true}, SHIFT(51),
  [137] = {.count = 1, .reusable = true}, SHIFT(53),
  [139] = {.count = 1, .reusable = true}, SHIFT(54),
  [141] = {.count = 1, .reusable = true}, SHIFT(56),
  [143] = {.count = 1, .reusable = true}, SHIFT(57),
  [145] = {.count = 1, .reusable = true}, SHIFT(59),
  [147] = {.count = 1, .reusable = true}, SHIFT(61),
  [149] = {.count = 1, .reusable = true}, SHIFT(62),
  [151] = {.count = 1, .reusable = true}, SHIFT(65),
  [153] = {.count = 1, .reusable = true}, SHIFT(66),
  [155] = {.count = 1, .reusable = false}, SHIFT(67),
  [157] = {.count = 1, .reusable = true}, SHIFT(70),
  [159] = {.count = 1, .reusable = true}, SHIFT(71),
  [161] = {.count = 1, .reusable = true}, SHIFT(72),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 4),
  [165] = {.count = 1, .reusable = true}, SHIFT(74),
  [167] = {.count = 1, .reusable = true}, SHIFT(49),
  [169] = {.count = 1, .reusable = true}, SHIFT(76),
  [171] = {.count = 1, .reusable = true}, SHIFT(77),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym__data_get_command, 3),
  [175] = {.count = 1, .reusable = false}, SHIFT(78),
  [177] = {.count = 1, .reusable = true}, SHIFT(79),
  [179] = {.count = 1, .reusable = true}, SHIFT(80),
  [181] = {.count = 1, .reusable = true}, SHIFT(81),
  [183] = {.count = 1, .reusable = true}, SHIFT(82),
  [185] = {.count = 1, .reusable = true}, SHIFT(83),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__schedule_command, 4),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_selector_key, 1),
  [191] = {.count = 1, .reusable = true}, SHIFT(84),
  [193] = {.count = 1, .reusable = true}, SHIFT(85),
  [195] = {.count = 1, .reusable = true}, SHIFT(87),
  [197] = {.count = 1, .reusable = true}, SHIFT(89),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 1),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 1),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__setblock_command, 5),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [207] = {.count = 1, .reusable = false}, SHIFT(90),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__coordinate3, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym__coordinate3, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 2),
  [215] = {.count = 1, .reusable = true}, SHIFT(93),
  [217] = {.count = 1, .reusable = true}, SHIFT(94),
  [219] = {.count = 1, .reusable = true}, SHIFT(95),
  [221] = {.count = 1, .reusable = true}, SHIFT(97),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym__data_merge_command, 4),
  [225] = {.count = 1, .reusable = true}, SHIFT(98),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [229] = {.count = 1, .reusable = false}, SHIFT(99),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym__data_get_command, 4),
  [233] = {.count = 1, .reusable = true}, SHIFT(100),
  [235] = {.count = 1, .reusable = false}, SHIFT(101),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__data_remove_command, 4),
  [239] = {.count = 1, .reusable = true}, SHIFT(102),
  [241] = {.count = 1, .reusable = true}, SHIFT(103),
  [243] = {.count = 1, .reusable = true}, SHIFT(104),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 5),
  [247] = {.count = 1, .reusable = true}, SHIFT(106),
  [249] = {.count = 1, .reusable = true}, SHIFT(108),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(112),
  [259] = {.count = 1, .reusable = true}, SHIFT(115),
  [261] = {.count = 1, .reusable = true}, SHIFT(116),
  [263] = {.count = 1, .reusable = true}, SHIFT(119),
  [265] = {.count = 1, .reusable = true}, SHIFT(117),
  [267] = {.count = 1, .reusable = true}, SHIFT(118),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 3),
  [271] = {.count = 1, .reusable = true}, SHIFT(122),
  [273] = {.count = 1, .reusable = true}, SHIFT(127),
  [275] = {.count = 1, .reusable = true}, SHIFT(128),
  [277] = {.count = 1, .reusable = true}, SHIFT(130),
  [279] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 6),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(84),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_selector_value, 1),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym__selector_argument, 3),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_block_state_key, 1),
  [294] = {.count = 1, .reusable = true}, SHIFT(132),
  [296] = {.count = 1, .reusable = true}, SHIFT(133),
  [298] = {.count = 1, .reusable = true}, SHIFT(135),
  [300] = {.count = 1, .reusable = true}, SHIFT(136),
  [302] = {.count = 1, .reusable = true}, SHIFT(137),
  [304] = {.count = 1, .reusable = true}, SHIFT(138),
  [306] = {.count = 1, .reusable = false}, SHIFT(140),
  [308] = {.count = 1, .reusable = true}, SHIFT(141),
  [310] = {.count = 1, .reusable = true}, SHIFT(142),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym__nbt_pair, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_string, 1),
  [316] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 4),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2), SHIFT_REPEAT(94),
  [323] = {.count = 1, .reusable = true}, SHIFT(143),
  [325] = {.count = 1, .reusable = true}, SHIFT(145),
  [327] = {.count = 1, .reusable = true}, SHIFT(147),
  [329] = {.count = 1, .reusable = true}, SHIFT(149),
  [331] = {.count = 1, .reusable = true}, SHIFT(152),
  [333] = {.count = 1, .reusable = true}, SHIFT(150),
  [335] = {.count = 1, .reusable = true}, SHIFT(151),
  [337] = {.count = 1, .reusable = true}, SHIFT(154),
  [339] = {.count = 1, .reusable = true}, SHIFT(155),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 6),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 3),
  [349] = {.count = 1, .reusable = true}, SHIFT(158),
  [351] = {.count = 1, .reusable = true}, SHIFT(160),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 2),
  [355] = {.count = 1, .reusable = true}, SHIFT(161),
  [357] = {.count = 1, .reusable = true}, SHIFT(162),
  [359] = {.count = 1, .reusable = true}, SHIFT(164),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 2),
  [363] = {.count = 1, .reusable = false}, SHIFT(166),
  [365] = {.count = 1, .reusable = true}, SHIFT(167),
  [367] = {.count = 1, .reusable = true}, SHIFT(168),
  [369] = {.count = 1, .reusable = true}, SHIFT(169),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 5),
  [373] = {.count = 1, .reusable = true}, SHIFT(170),
  [375] = {.count = 1, .reusable = true}, SHIFT(171),
  [377] = {.count = 1, .reusable = true}, SHIFT(172),
  [379] = {.count = 1, .reusable = true}, SHIFT(173),
  [381] = {.count = 1, .reusable = false}, SHIFT(174),
  [383] = {.count = 1, .reusable = true}, SHIFT(175),
  [385] = {.count = 1, .reusable = true}, SHIFT(176),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_value_command, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 7),
  [391] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 4),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 4),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2), SHIFT_REPEAT(132),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym__block_state_argument, 3),
  [402] = {.count = 1, .reusable = true}, SHIFT(178),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 3),
  [406] = {.count = 1, .reusable = true}, SHIFT(179),
  [408] = {.count = 1, .reusable = true}, SHIFT(181),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(167),
  [417] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat2, 2),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat2, 2), SHIFT_REPEAT(168),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 6),
  [424] = {.count = 1, .reusable = true}, SHIFT(182),
  [426] = {.count = 1, .reusable = false}, SHIFT(184),
  [428] = {.count = 1, .reusable = true}, SHIFT(185),
  [430] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 4),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(161),
  [437] = {.count = 1, .reusable = true}, SHIFT(186),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_from_command, 4),
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
