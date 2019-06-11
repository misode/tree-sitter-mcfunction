#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 175
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
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
  aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_STAR_SLASH = 44,
  sym__unquoted_string = 45,
  sym_nbt_path = 46,
  sym_function = 47,
  sym_comment = 48,
  sym_command = 49,
  sym__teleport_command = 50,
  sym__setblock_command = 51,
  sym__summon_command = 52,
  sym__say_command = 53,
  sym__data_command = 54,
  sym__data_merge_command = 55,
  sym__data_get_command = 56,
  sym__data_remove_command = 57,
  sym__data_modify_command = 58,
  sym__data_modify_value_command = 59,
  sym__data_modify_from_command = 60,
  sym_selector = 61,
  sym__selector_argument = 62,
  sym_selector_key = 63,
  sym_selector_value = 64,
  sym__coordinate3 = 65,
  sym_block = 66,
  sym_block_type = 67,
  sym_block_state = 68,
  sym__block_state_argument = 69,
  sym_block_state_key = 70,
  sym_entity_type = 71,
  sym_message = 72,
  sym_nbt_compound = 73,
  sym__nbt_pair = 74,
  sym_nbt_array = 75,
  sym__nbt_value = 76,
  sym_nbt_number = 77,
  sym_nbt_string = 78,
  sym__quoted_string = 79,
  aux_sym_function_repeat1 = 80,
  aux_sym_selector_repeat1 = 81,
  aux_sym_block_state_repeat1 = 82,
  aux_sym_nbt_compound_repeat1 = 83,
  aux_sym_nbt_array_repeat1 = 84,
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
  [aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH] = "/-?[0-9]+(\\.[0-9]+)?[bsfdl]?/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_STAR_SLASH] = "/[^\n\r ]*/",
  [sym__unquoted_string] = "_unquoted_string",
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
  [sym_nbt_number] = "nbt_number",
  [sym_nbt_string] = "nbt_string",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_selector_repeat1] = "selector_repeat1",
  [aux_sym_block_state_repeat1] = "block_state_repeat1",
  [aux_sym_nbt_compound_repeat1] = "nbt_compound_repeat1",
  [aux_sym_nbt_array_repeat1] = "nbt_array_repeat1",
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
  [aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
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
  [sym_nbt_number] = {
    .visible = true,
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
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(12);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'd')
        ADVANCE(18);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == 'f')
        ADVANCE(23);
      if (lookahead == 'g')
        ADVANCE(27);
      if (lookahead == 'i')
        ADVANCE(30);
      if (lookahead == 'm')
        ADVANCE(36);
      if (lookahead == 'p')
        ADVANCE(55);
      if (lookahead == 'r')
        ADVANCE(56);
      if (lookahead == 's')
        ADVANCE(57);
      if (lookahead == 't')
        ADVANCE(58);
      if (lookahead == 'v')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '~')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(75);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'o')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'c')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'k')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 't')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'a')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'o')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'm')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 't')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 's')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'e')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'r')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 't')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(37);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == 'o')
        ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'r')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'g')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'c')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'a')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'f')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 't')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_minecraft_COLON);
      END_STATE();
    case 50:
      if (lookahead == 'd')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'i')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'f')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'y')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e')
        ADVANCE(59);
      if (lookahead == 'p')
        ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'l')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'p')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'o')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'r')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 't')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_teleport);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_tp);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'l')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'e')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_coordinate);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__unquoted_string);
      END_STATE();
    case 76:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'd')
        ADVANCE(77);
      if (lookahead == 's')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == 'a')
        ADVANCE(19);
      END_STATE();
    case 78:
      if (lookahead == 'a')
        ADVANCE(79);
      if (lookahead == 'e')
        ADVANCE(81);
      if (lookahead == 'u')
        ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'y')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_say);
      END_STATE();
    case 81:
      if (lookahead == 't')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'b')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'l')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'o')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'c')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'k')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_setblock);
      END_STATE();
    case 88:
      if (lookahead == 'm')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'm')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'o')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'n')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_summon);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(59);
      if (lookahead == 'p')
        ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(94);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(97);
      END_STATE();
    case 98:
      if (lookahead == '~')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'm')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(105);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(106);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(108);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == ':')
        ADVANCE(49);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 110:
      if (lookahead == 'g')
        ADVANCE(111);
      if (lookahead == 'm')
        ADVANCE(112);
      if (lookahead == 'r')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      END_STATE();
    case 111:
      if (lookahead == 'e')
        ADVANCE(28);
      END_STATE();
    case 112:
      if (lookahead == 'e')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(50);
      END_STATE();
    case 113:
      if (lookahead == 'e')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'm')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'o')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'v')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'e')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 119:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == '[')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(120);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == 'a')
        ADVANCE(12);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == 'p')
        ADVANCE(55);
      if (lookahead == 'r')
        ADVANCE(56);
      if (lookahead == 's')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      END_STATE();
    case 123:
      if (lookahead == 'b')
        ADVANCE(124);
      if (lookahead == 'e')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      END_STATE();
    case 124:
      if (lookahead == 'l')
        ADVANCE(14);
      END_STATE();
    case 125:
      if (lookahead == 'n')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'i')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'y')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_nbt_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(136);
      if (lookahead == '[')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(75);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH);
      if (lookahead == '.')
        ADVANCE(138);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(137);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH);
      END_STATE();
    case 141:
      if (lookahead == '\t')
        ADVANCE(142);
      if (lookahead == ' ')
        SKIP(141);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(144);
      if (lookahead != 0)
        ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '\t')
        ADVANCE(146);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      if (lookahead != 0)
        ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(143);
      END_STATE();
    case 147:
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      END_STATE();
    case 148:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      END_STATE();
    case 149:
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(149);
      END_STATE();
    case 150:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      END_STATE();
    case 151:
      if (lookahead == '\t')
        ADVANCE(152);
      if (lookahead == ' ')
        SKIP(151);
      if (lookahead == '[')
        ADVANCE(153);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(154);
      if (lookahead != 0)
        ADVANCE(143);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(152);
      if (lookahead == '[')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(143);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(143);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == '\t')
        ADVANCE(156);
      if (lookahead == '[')
        ADVANCE(153);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      if (lookahead != 0)
        ADVANCE(143);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(156);
      if (lookahead == '[')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(143);
      END_STATE();
    case 157:
      if (lookahead == 'a')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'm')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(166);
      if (lookahead == 's')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      END_STATE();
    case 158:
      if (lookahead == 'p')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'p')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'n')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'd')
        ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 164:
      if (lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 166:
      if (lookahead == 'r')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'p')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'n')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'd')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 176:
      if (lookahead == 'f')
        ADVANCE(177);
      if (lookahead == 'v')
        ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(176);
      END_STATE();
    case 177:
      if (lookahead == 'r')
        ADVANCE(24);
      END_STATE();
    case 178:
      if (lookahead == 'a')
        ADVANCE(68);
      END_STATE();
    case 179:
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 180:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_STAR_SLASH);
      if (lookahead == '\t')
        ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_STAR_SLASH);
      if (lookahead == '\t')
        ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(183);
      END_STATE();
    case 184:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_block_state_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 97},
  [4] = {.lex_state = 98},
  [5] = {.lex_state = 99},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 110},
  [8] = {.lex_state = 119},
  [9] = {.lex_state = 120},
  [10] = {.lex_state = 120},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 122},
  [14] = {.lex_state = 120},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 98},
  [19] = {.lex_state = 120},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 123},
  [22] = {.lex_state = 123},
  [23] = {.lex_state = 123},
  [24] = {.lex_state = 123},
  [25] = {.lex_state = 120},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 120},
  [29] = {.lex_state = 98},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 98},
  [32] = {.lex_state = 120},
  [33] = {.lex_state = 97},
  [34] = {.lex_state = 98},
  [35] = {.lex_state = 97},
  [36] = {.lex_state = 98},
  [37] = {.lex_state = 97},
  [38] = {.lex_state = 98},
  [39] = {.lex_state = 97},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 131},
  [42] = {.lex_state = 99},
  [43] = {.lex_state = 98},
  [44] = {.lex_state = 133},
  [45] = {.lex_state = 120},
  [46] = {.lex_state = 122},
  [47] = {.lex_state = 135},
  [48] = {.lex_state = 98},
  [49] = {.lex_state = 122},
  [50] = {.lex_state = 141},
  [51] = {.lex_state = 98},
  [52] = {.lex_state = 122},
  [53] = {.lex_state = 145},
  [54] = {.lex_state = 98},
  [55] = {.lex_state = 145},
  [56] = {.lex_state = 147},
  [57] = {.lex_state = 148},
  [58] = {.lex_state = 147},
  [59] = {.lex_state = 99},
  [60] = {.lex_state = 99},
  [61] = {.lex_state = 120},
  [62] = {.lex_state = 120},
  [63] = {.lex_state = 120},
  [64] = {.lex_state = 120},
  [65] = {.lex_state = 120},
  [66] = {.lex_state = 149},
  [67] = {.lex_state = 150},
  [68] = {.lex_state = 135},
  [69] = {.lex_state = 120},
  [70] = {.lex_state = 98},
  [71] = {.lex_state = 151},
  [72] = {.lex_state = 120},
  [73] = {.lex_state = 98},
  [74] = {.lex_state = 155},
  [75] = {.lex_state = 120},
  [76] = {.lex_state = 98},
  [77] = {.lex_state = 157},
  [78] = {.lex_state = 131},
  [79] = {.lex_state = 120},
  [80] = {.lex_state = 148},
  [81] = {.lex_state = 131},
  [82] = {.lex_state = 120},
  [83] = {.lex_state = 120},
  [84] = {.lex_state = 99},
  [85] = {.lex_state = 120},
  [86] = {.lex_state = 120},
  [87] = {.lex_state = 135},
  [88] = {.lex_state = 133},
  [89] = {.lex_state = 120},
  [90] = {.lex_state = 150},
  [91] = {.lex_state = 131},
  [92] = {.lex_state = 135},
  [93] = {.lex_state = 131},
  [94] = {.lex_state = 141},
  [95] = {.lex_state = 131},
  [96] = {.lex_state = 145},
  [97] = {.lex_state = 176},
  [98] = {.lex_state = 179},
  [99] = {.lex_state = 148},
  [100] = {.lex_state = 120},
  [101] = {.lex_state = 148},
  [102] = {.lex_state = 148},
  [103] = {.lex_state = 148},
  [104] = {.lex_state = 120},
  [105] = {.lex_state = 120},
  [106] = {.lex_state = 147},
  [107] = {.lex_state = 148},
  [108] = {.lex_state = 147},
  [109] = {.lex_state = 135},
  [110] = {.lex_state = 133},
  [111] = {.lex_state = 180},
  [112] = {.lex_state = 181},
  [113] = {.lex_state = 180},
  [114] = {.lex_state = 150},
  [115] = {.lex_state = 150},
  [116] = {.lex_state = 120},
  [117] = {.lex_state = 150},
  [118] = {.lex_state = 148},
  [119] = {.lex_state = 148},
  [120] = {.lex_state = 148},
  [121] = {.lex_state = 135},
  [122] = {.lex_state = 123},
  [123] = {.lex_state = 120},
  [124] = {.lex_state = 176},
  [125] = {.lex_state = 120},
  [126] = {.lex_state = 99},
  [127] = {.lex_state = 120},
  [128] = {.lex_state = 148},
  [129] = {.lex_state = 184},
  [130] = {.lex_state = 180},
  [131] = {.lex_state = 148},
  [132] = {.lex_state = 180},
  [133] = {.lex_state = 150},
  [134] = {.lex_state = 135},
  [135] = {.lex_state = 135},
  [136] = {.lex_state = 148},
  [137] = {.lex_state = 141},
  [138] = {.lex_state = 148},
  [139] = {.lex_state = 145},
  [140] = {.lex_state = 148},
  [141] = {.lex_state = 135},
  [142] = {.lex_state = 120},
  [143] = {.lex_state = 181},
  [144] = {.lex_state = 120},
  [145] = {.lex_state = 120},
  [146] = {.lex_state = 97},
  [147] = {.lex_state = 98},
  [148] = {.lex_state = 120},
  [149] = {.lex_state = 148},
  [150] = {.lex_state = 120},
  [151] = {.lex_state = 148},
  [152] = {.lex_state = 148},
  [153] = {.lex_state = 135},
  [154] = {.lex_state = 180},
  [155] = {.lex_state = 148},
  [156] = {.lex_state = 180},
  [157] = {.lex_state = 150},
  [158] = {.lex_state = 180},
  [159] = {.lex_state = 135},
  [160] = {.lex_state = 141},
  [161] = {.lex_state = 145},
  [162] = {.lex_state = 120},
  [163] = {.lex_state = 148},
  [164] = {.lex_state = 135},
  [165] = {.lex_state = 145},
  [166] = {.lex_state = 148},
  [167] = {.lex_state = 180},
  [168] = {.lex_state = 148},
  [169] = {.lex_state = 180},
  [170] = {.lex_state = 120},
  [171] = {.lex_state = 148},
  [172] = {.lex_state = 120},
  [173] = {.lex_state = 120},
  [174] = {.lex_state = 120},
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
    [sym__unquoted_string] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_teleport] = ACTIONS(9),
    [anon_sym_tp] = ACTIONS(9),
    [anon_sym_setblock] = ACTIONS(11),
    [anon_sym_summon] = ACTIONS(13),
    [anon_sym_say] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
  },
  [2] = {
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [3] = {
    [sym_selector] = STATE(14),
    [anon_sym_AT] = ACTIONS(21),
  },
  [4] = {
    [sym_coordinate] = ACTIONS(23),
  },
  [5] = {
    [sym_entity_type] = STATE(18),
    [anon_sym_minecraft_COLON] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(27),
  },
  [6] = {
    [sym_message] = STATE(20),
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(29),
  },
  [7] = {
    [sym__data_merge_command] = STATE(25),
    [sym__data_get_command] = STATE(25),
    [sym__data_remove_command] = STATE(25),
    [sym__data_modify_command] = STATE(25),
    [anon_sym_merge] = ACTIONS(31),
    [anon_sym_get] = ACTIONS(33),
    [anon_sym_remove] = ACTIONS(35),
    [anon_sym_modify] = ACTIONS(37),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [9] = {
    [sym__line_break] = ACTIONS(41),
  },
  [10] = {
    [sym__line_break] = ACTIONS(43),
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
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_teleport] = ACTIONS(9),
    [anon_sym_tp] = ACTIONS(9),
    [anon_sym_setblock] = ACTIONS(11),
    [anon_sym_summon] = ACTIONS(13),
    [anon_sym_say] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
  },
  [12] = {
    [sym__line_break] = ACTIONS(47),
  },
  [13] = {
    [anon_sym_p] = ACTIONS(49),
    [anon_sym_a] = ACTIONS(49),
    [anon_sym_r] = ACTIONS(49),
    [anon_sym_s] = ACTIONS(49),
    [anon_sym_e] = ACTIONS(49),
  },
  [14] = {
    [sym__line_break] = ACTIONS(51),
  },
  [15] = {
    [sym_coordinate] = ACTIONS(53),
  },
  [16] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [17] = {
    [sym_coordinate] = ACTIONS(57),
  },
  [18] = {
    [sym__coordinate3] = STATE(32),
    [sym_coordinate] = ACTIONS(59),
  },
  [19] = {
    [sym__line_break] = ACTIONS(61),
  },
  [20] = {
    [sym__line_break] = ACTIONS(63),
  },
  [21] = {
    [anon_sym_entity] = ACTIONS(65),
    [anon_sym_block] = ACTIONS(67),
  },
  [22] = {
    [anon_sym_entity] = ACTIONS(69),
    [anon_sym_block] = ACTIONS(71),
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
    [sym__line_break] = ACTIONS(81),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_teleport] = ACTIONS(83),
    [anon_sym_tp] = ACTIONS(83),
    [anon_sym_setblock] = ACTIONS(83),
    [anon_sym_summon] = ACTIONS(83),
    [anon_sym_say] = ACTIONS(83),
    [anon_sym_data] = ACTIONS(83),
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
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_teleport] = ACTIONS(88),
    [anon_sym_tp] = ACTIONS(88),
    [anon_sym_setblock] = ACTIONS(91),
    [anon_sym_summon] = ACTIONS(94),
    [anon_sym_say] = ACTIONS(97),
    [anon_sym_data] = ACTIONS(100),
  },
  [28] = {
    [sym__line_break] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
  },
  [29] = {
    [sym_coordinate] = ACTIONS(107),
  },
  [30] = {
    [sym_coordinate] = ACTIONS(109),
  },
  [31] = {
    [sym_coordinate] = ACTIONS(111),
  },
  [32] = {
    [sym_nbt_compound] = STATE(45),
    [sym__line_break] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
  },
  [33] = {
    [sym_selector] = STATE(47),
    [anon_sym_AT] = ACTIONS(117),
  },
  [34] = {
    [sym__coordinate3] = STATE(47),
    [sym_coordinate] = ACTIONS(119),
  },
  [35] = {
    [sym_selector] = STATE(50),
    [anon_sym_AT] = ACTIONS(121),
  },
  [36] = {
    [sym__coordinate3] = STATE(50),
    [sym_coordinate] = ACTIONS(123),
  },
  [37] = {
    [sym_selector] = STATE(53),
    [anon_sym_AT] = ACTIONS(125),
  },
  [38] = {
    [sym__coordinate3] = STATE(53),
    [sym_coordinate] = ACTIONS(127),
  },
  [39] = {
    [sym_selector] = STATE(55),
    [anon_sym_AT] = ACTIONS(125),
  },
  [40] = {
    [sym__coordinate3] = STATE(55),
    [sym_coordinate] = ACTIONS(127),
  },
  [41] = {
    [sym__selector_argument] = STATE(57),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
  },
  [42] = {
    [sym_block] = STATE(62),
    [sym_block_type] = STATE(63),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_minecraft_COLON] = ACTIONS(133),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(135),
  },
  [43] = {
    [sym_coordinate] = ACTIONS(137),
  },
  [44] = {
    [sym__nbt_pair] = STATE(67),
    [anon_sym_RBRACE] = ACTIONS(139),
    [sym_nbt_key] = ACTIONS(141),
  },
  [45] = {
    [sym__line_break] = ACTIONS(143),
  },
  [46] = {
    [anon_sym_p] = ACTIONS(145),
    [anon_sym_a] = ACTIONS(145),
    [anon_sym_r] = ACTIONS(145),
    [anon_sym_s] = ACTIONS(145),
    [anon_sym_e] = ACTIONS(145),
  },
  [47] = {
    [sym_nbt_compound] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(147),
  },
  [48] = {
    [sym_coordinate] = ACTIONS(149),
  },
  [49] = {
    [anon_sym_p] = ACTIONS(151),
    [anon_sym_a] = ACTIONS(151),
    [anon_sym_r] = ACTIONS(151),
    [anon_sym_s] = ACTIONS(151),
    [anon_sym_e] = ACTIONS(151),
  },
  [50] = {
    [sym__line_break] = ACTIONS(153),
    [sym_nbt_path] = ACTIONS(155),
  },
  [51] = {
    [sym_coordinate] = ACTIONS(157),
  },
  [52] = {
    [anon_sym_p] = ACTIONS(159),
    [anon_sym_a] = ACTIONS(159),
    [anon_sym_r] = ACTIONS(159),
    [anon_sym_s] = ACTIONS(159),
    [anon_sym_e] = ACTIONS(159),
  },
  [53] = {
    [sym_nbt_path] = ACTIONS(161),
  },
  [54] = {
    [sym_coordinate] = ACTIONS(163),
  },
  [55] = {
    [sym_nbt_path] = ACTIONS(165),
  },
  [56] = {
    [anon_sym_EQ] = ACTIONS(167),
  },
  [57] = {
    [aux_sym_selector_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(171),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(173),
  },
  [59] = {
    [sym_block_type] = STATE(82),
    [anon_sym_minecraft_COLON] = ACTIONS(133),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(135),
  },
  [60] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(175),
  },
  [61] = {
    [sym__line_break] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
  },
  [62] = {
    [sym__line_break] = ACTIONS(181),
  },
  [63] = {
    [sym_block_state] = STATE(85),
    [sym_nbt_compound] = STATE(86),
    [sym__line_break] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(115),
  },
  [64] = {
    [sym__line_break] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
  },
  [65] = {
    [sym__line_break] = ACTIONS(191),
  },
  [66] = {
    [anon_sym_COLON] = ACTIONS(193),
  },
  [67] = {
    [aux_sym_nbt_compound_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(197),
  },
  [68] = {
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(103),
  },
  [69] = {
    [sym__line_break] = ACTIONS(201),
  },
  [70] = {
    [sym_coordinate] = ACTIONS(203),
  },
  [71] = {
    [sym__line_break] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_nbt_path] = ACTIONS(205),
  },
  [72] = {
    [sym__line_break] = ACTIONS(209),
  },
  [73] = {
    [sym_coordinate] = ACTIONS(211),
  },
  [74] = {
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym_nbt_path] = ACTIONS(205),
  },
  [75] = {
    [sym__line_break] = ACTIONS(215),
  },
  [76] = {
    [sym_coordinate] = ACTIONS(217),
  },
  [77] = {
    [anon_sym_merge] = ACTIONS(219),
    [anon_sym_set] = ACTIONS(219),
    [anon_sym_append] = ACTIONS(219),
    [anon_sym_prepend] = ACTIONS(219),
    [anon_sym_insert] = ACTIONS(221),
  },
  [78] = {
    [sym__selector_argument] = STATE(99),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
  },
  [79] = {
    [sym__line_break] = ACTIONS(223),
  },
  [80] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(225),
  },
  [81] = {
    [sym_selector_value] = STATE(103),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(227),
  },
  [82] = {
    [sym_block_state] = STATE(104),
    [sym_nbt_compound] = STATE(105),
    [sym__line_break] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(115),
  },
  [83] = {
    [sym__line_break] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
  },
  [84] = {
    [sym__block_state_argument] = STATE(107),
    [sym_block_state_key] = STATE(108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(235),
  },
  [85] = {
    [sym_nbt_compound] = STATE(105),
    [sym__line_break] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(115),
  },
  [86] = {
    [sym__line_break] = ACTIONS(229),
  },
  [87] = {
    [sym_nbt_compound] = STATE(114),
    [sym_nbt_array] = STATE(114),
    [sym__nbt_value] = STATE(114),
    [sym_nbt_number] = STATE(114),
    [sym_nbt_string] = STATE(114),
    [sym__quoted_string] = STATE(113),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(239),
    [aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym__unquoted_string] = ACTIONS(245),
  },
  [88] = {
    [sym__nbt_pair] = STATE(115),
    [sym_nbt_key] = ACTIONS(141),
  },
  [89] = {
    [sym__line_break] = ACTIONS(247),
  },
  [90] = {
    [aux_sym_nbt_compound_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(249),
  },
  [91] = {
    [sym__selector_argument] = STATE(118),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
  },
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(187),
  },
  [93] = {
    [sym__selector_argument] = STATE(119),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
  },
  [94] = {
    [sym__line_break] = ACTIONS(189),
    [sym_nbt_path] = ACTIONS(189),
  },
  [95] = {
    [sym__selector_argument] = STATE(120),
    [sym_selector_key] = STATE(58),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
  },
  [96] = {
    [sym_nbt_path] = ACTIONS(187),
  },
  [97] = {
    [sym__data_modify_value_command] = STATE(123),
    [sym__data_modify_from_command] = STATE(123),
    [anon_sym_value] = ACTIONS(251),
    [anon_sym_from] = ACTIONS(253),
  },
  [98] = {
    [sym_integer] = ACTIONS(255),
  },
  [99] = {
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
  },
  [100] = {
    [sym__line_break] = ACTIONS(259),
  },
  [101] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(257),
  },
  [102] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
  },
  [104] = {
    [sym_nbt_compound] = STATE(125),
    [sym__line_break] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(115),
  },
  [105] = {
    [sym__line_break] = ACTIONS(268),
  },
  [106] = {
    [anon_sym_EQ] = ACTIONS(270),
  },
  [107] = {
    [aux_sym_block_state_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_RBRACK] = ACTIONS(274),
  },
  [108] = {
    [anon_sym_EQ] = ACTIONS(276),
  },
  [109] = {
    [sym_nbt_compound] = STATE(131),
    [sym_nbt_array] = STATE(131),
    [sym__nbt_value] = STATE(131),
    [sym_nbt_number] = STATE(131),
    [sym_nbt_string] = STATE(131),
    [sym__quoted_string] = STATE(113),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(239),
    [aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym__unquoted_string] = ACTIONS(245),
  },
  [110] = {
    [sym__nbt_pair] = STATE(133),
    [anon_sym_RBRACE] = ACTIONS(280),
    [sym_nbt_key] = ACTIONS(141),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(282),
  },
  [112] = {
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_STAR_SLASH] = ACTIONS(284),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(286),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
  },
  [116] = {
    [sym__line_break] = ACTIONS(292),
  },
  [117] = {
    [aux_sym_nbt_compound_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(290),
  },
  [118] = {
    [aux_sym_selector_repeat1] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(297),
  },
  [119] = {
    [aux_sym_selector_repeat1] = STATE(138),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(299),
  },
  [120] = {
    [aux_sym_selector_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(301),
  },
  [121] = {
    [sym_nbt_compound] = STATE(145),
    [sym_nbt_array] = STATE(145),
    [sym__nbt_value] = STATE(145),
    [sym_nbt_number] = STATE(145),
    [sym_nbt_string] = STATE(145),
    [sym__quoted_string] = STATE(144),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(147),
    [aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [sym__unquoted_string] = ACTIONS(309),
  },
  [122] = {
    [anon_sym_entity] = ACTIONS(311),
    [anon_sym_block] = ACTIONS(313),
  },
  [123] = {
    [sym__line_break] = ACTIONS(315),
  },
  [124] = {
    [sym__data_modify_value_command] = STATE(148),
    [sym__data_modify_from_command] = STATE(148),
    [anon_sym_value] = ACTIONS(251),
    [anon_sym_from] = ACTIONS(253),
  },
  [125] = {
    [sym__line_break] = ACTIONS(317),
  },
  [126] = {
    [sym__block_state_argument] = STATE(149),
    [sym_block_state_key] = STATE(108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(235),
  },
  [127] = {
    [sym__line_break] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(321),
  },
  [128] = {
    [aux_sym_block_state_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_RBRACK] = ACTIONS(323),
  },
  [129] = {
    [sym_block_state_value] = ACTIONS(325),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [131] = {
    [aux_sym_nbt_array_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(331),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
  },
  [133] = {
    [aux_sym_nbt_compound_repeat1] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(333),
  },
  [134] = {
    [anon_sym_DQUOTE] = ACTIONS(335),
  },
  [135] = {
    [anon_sym_LBRACE] = ACTIONS(223),
  },
  [136] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(337),
  },
  [137] = {
    [sym__line_break] = ACTIONS(339),
    [sym_nbt_path] = ACTIONS(339),
  },
  [138] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(341),
  },
  [139] = {
    [sym_nbt_path] = ACTIONS(223),
  },
  [140] = {
    [aux_sym_selector_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(343),
  },
  [141] = {
    [sym_nbt_compound] = STATE(163),
    [sym_nbt_array] = STATE(163),
    [sym__nbt_value] = STATE(163),
    [sym_nbt_number] = STATE(163),
    [sym_nbt_string] = STATE(163),
    [sym__quoted_string] = STATE(113),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(239),
    [aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym__unquoted_string] = ACTIONS(245),
  },
  [142] = {
    [sym__line_break] = ACTIONS(282),
  },
  [143] = {
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_STAR_SLASH] = ACTIONS(347),
  },
  [144] = {
    [sym__line_break] = ACTIONS(286),
  },
  [145] = {
    [sym__line_break] = ACTIONS(349),
  },
  [146] = {
    [sym_selector] = STATE(165),
    [anon_sym_AT] = ACTIONS(125),
  },
  [147] = {
    [sym__coordinate3] = STATE(165),
    [sym_coordinate] = ACTIONS(127),
  },
  [148] = {
    [sym__line_break] = ACTIONS(351),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
  },
  [150] = {
    [sym__line_break] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(357),
  },
  [151] = {
    [aux_sym_block_state_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(353),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_RBRACK] = ACTIONS(362),
  },
  [153] = {
    [sym_nbt_compound] = STATE(166),
    [sym_nbt_array] = STATE(166),
    [sym__nbt_value] = STATE(166),
    [sym_nbt_number] = STATE(166),
    [sym_nbt_string] = STATE(166),
    [sym__quoted_string] = STATE(113),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(239),
    [aux_sym_SLASH_DASH_QMARK_LBRACK0_DASH9_RBRACK_PLUS_LPAREN_BSLASH_DOT_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_QMARK_LBRACKbsfdl_RBRACK_QMARK_SLASH] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym__unquoted_string] = ACTIONS(245),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RBRACK] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
  },
  [155] = {
    [aux_sym_nbt_array_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(366),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
  },
  [157] = {
    [aux_sym_nbt_compound_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(368),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
  },
  [159] = {
    [anon_sym_LBRACE] = ACTIONS(259),
  },
  [160] = {
    [sym__line_break] = ACTIONS(372),
    [sym_nbt_path] = ACTIONS(372),
  },
  [161] = {
    [sym_nbt_path] = ACTIONS(259),
  },
  [162] = {
    [sym__line_break] = ACTIONS(327),
  },
  [163] = {
    [aux_sym_nbt_array_repeat1] = STATE(171),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(374),
  },
  [164] = {
    [anon_sym_DQUOTE] = ACTIONS(376),
  },
  [165] = {
    [sym_nbt_path] = ACTIONS(378),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RBRACK] = ACTIONS(380),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(382),
  },
  [168] = {
    [aux_sym_nbt_array_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RBRACK] = ACTIONS(380),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RBRACK] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
  },
  [170] = {
    [sym__line_break] = ACTIONS(364),
  },
  [171] = {
    [aux_sym_nbt_array_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(387),
  },
  [172] = {
    [sym__line_break] = ACTIONS(370),
  },
  [173] = {
    [sym__line_break] = ACTIONS(389),
  },
  [174] = {
    [sym__line_break] = ACTIONS(382),
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
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(19),
  [31] = {.count = 1, .reusable = true}, SHIFT(21),
  [33] = {.count = 1, .reusable = true}, SHIFT(22),
  [35] = {.count = 1, .reusable = true}, SHIFT(23),
  [37] = {.count = 1, .reusable = true}, SHIFT(24),
  [39] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(28),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym__teleport_command, 2),
  [53] = {.count = 1, .reusable = true}, SHIFT(29),
  [55] = {.count = 1, .reusable = true}, SHIFT(30),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(31),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_message, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym__say_command, 2),
  [65] = {.count = 1, .reusable = true}, SHIFT(33),
  [67] = {.count = 1, .reusable = true}, SHIFT(34),
  [69] = {.count = 1, .reusable = true}, SHIFT(35),
  [71] = {.count = 1, .reusable = true}, SHIFT(36),
  [73] = {.count = 1, .reusable = true}, SHIFT(37),
  [75] = {.count = 1, .reusable = true}, SHIFT(38),
  [77] = {.count = 1, .reusable = true}, SHIFT(39),
  [79] = {.count = 1, .reusable = true}, SHIFT(40),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__data_command, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [105] = {.count = 1, .reusable = false}, SHIFT(41),
  [107] = {.count = 1, .reusable = true}, SHIFT(42),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(43),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 3),
  [115] = {.count = 1, .reusable = false}, SHIFT(44),
  [117] = {.count = 1, .reusable = true}, SHIFT(46),
  [119] = {.count = 1, .reusable = true}, SHIFT(48),
  [121] = {.count = 1, .reusable = true}, SHIFT(49),
  [123] = {.count = 1, .reusable = true}, SHIFT(51),
  [125] = {.count = 1, .reusable = true}, SHIFT(52),
  [127] = {.count = 1, .reusable = true}, SHIFT(54),
  [129] = {.count = 1, .reusable = true}, SHIFT(56),
  [131] = {.count = 1, .reusable = true}, SHIFT(59),
  [133] = {.count = 1, .reusable = true}, SHIFT(60),
  [135] = {.count = 1, .reusable = false}, SHIFT(61),
  [137] = {.count = 1, .reusable = true}, SHIFT(64),
  [139] = {.count = 1, .reusable = true}, SHIFT(65),
  [141] = {.count = 1, .reusable = true}, SHIFT(66),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 4),
  [145] = {.count = 1, .reusable = true}, SHIFT(68),
  [147] = {.count = 1, .reusable = true}, SHIFT(44),
  [149] = {.count = 1, .reusable = true}, SHIFT(70),
  [151] = {.count = 1, .reusable = true}, SHIFT(71),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym__data_get_command, 3),
  [155] = {.count = 1, .reusable = false}, SHIFT(72),
  [157] = {.count = 1, .reusable = true}, SHIFT(73),
  [159] = {.count = 1, .reusable = true}, SHIFT(74),
  [161] = {.count = 1, .reusable = true}, SHIFT(75),
  [163] = {.count = 1, .reusable = true}, SHIFT(76),
  [165] = {.count = 1, .reusable = true}, SHIFT(77),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_selector_key, 1),
  [169] = {.count = 1, .reusable = true}, SHIFT(78),
  [171] = {.count = 1, .reusable = true}, SHIFT(79),
  [173] = {.count = 1, .reusable = true}, SHIFT(81),
  [175] = {.count = 1, .reusable = true}, SHIFT(83),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__setblock_command, 5),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [185] = {.count = 1, .reusable = false}, SHIFT(84),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__coordinate3, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__coordinate3, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 2),
  [193] = {.count = 1, .reusable = true}, SHIFT(87),
  [195] = {.count = 1, .reusable = true}, SHIFT(88),
  [197] = {.count = 1, .reusable = true}, SHIFT(89),
  [199] = {.count = 1, .reusable = true}, SHIFT(91),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__data_merge_command, 4),
  [203] = {.count = 1, .reusable = true}, SHIFT(92),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [207] = {.count = 1, .reusable = false}, SHIFT(93),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__data_get_command, 4),
  [211] = {.count = 1, .reusable = true}, SHIFT(94),
  [213] = {.count = 1, .reusable = false}, SHIFT(95),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym__data_remove_command, 4),
  [217] = {.count = 1, .reusable = true}, SHIFT(96),
  [219] = {.count = 1, .reusable = true}, SHIFT(97),
  [221] = {.count = 1, .reusable = true}, SHIFT(98),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 5),
  [225] = {.count = 1, .reusable = true}, SHIFT(100),
  [227] = {.count = 1, .reusable = true}, SHIFT(102),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 2),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(106),
  [237] = {.count = 1, .reusable = true}, SHIFT(109),
  [239] = {.count = 1, .reusable = true}, SHIFT(110),
  [241] = {.count = 1, .reusable = true}, SHIFT(111),
  [243] = {.count = 1, .reusable = true}, SHIFT(112),
  [245] = {.count = 1, .reusable = false}, SHIFT(113),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 3),
  [249] = {.count = 1, .reusable = true}, SHIFT(116),
  [251] = {.count = 1, .reusable = true}, SHIFT(121),
  [253] = {.count = 1, .reusable = true}, SHIFT(122),
  [255] = {.count = 1, .reusable = true}, SHIFT(124),
  [257] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 6),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(78),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_selector_value, 1),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym__selector_argument, 3),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_block_state_key, 1),
  [272] = {.count = 1, .reusable = true}, SHIFT(126),
  [274] = {.count = 1, .reusable = true}, SHIFT(127),
  [276] = {.count = 1, .reusable = true}, SHIFT(129),
  [278] = {.count = 1, .reusable = true}, SHIFT(130),
  [280] = {.count = 1, .reusable = true}, SHIFT(132),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_number, 1),
  [284] = {.count = 1, .reusable = false}, SHIFT(134),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_string, 1),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym__nbt_pair, 3),
  [290] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 4),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2), SHIFT_REPEAT(88),
  [297] = {.count = 1, .reusable = true}, SHIFT(135),
  [299] = {.count = 1, .reusable = true}, SHIFT(137),
  [301] = {.count = 1, .reusable = true}, SHIFT(139),
  [303] = {.count = 1, .reusable = true}, SHIFT(141),
  [305] = {.count = 1, .reusable = true}, SHIFT(142),
  [307] = {.count = 1, .reusable = true}, SHIFT(143),
  [309] = {.count = 1, .reusable = false}, SHIFT(144),
  [311] = {.count = 1, .reusable = true}, SHIFT(146),
  [313] = {.count = 1, .reusable = true}, SHIFT(147),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 6),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 3),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 3),
  [323] = {.count = 1, .reusable = true}, SHIFT(150),
  [325] = {.count = 1, .reusable = true}, SHIFT(152),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 2),
  [329] = {.count = 1, .reusable = true}, SHIFT(153),
  [331] = {.count = 1, .reusable = true}, SHIFT(154),
  [333] = {.count = 1, .reusable = true}, SHIFT(156),
  [335] = {.count = 1, .reusable = true}, SHIFT(158),
  [337] = {.count = 1, .reusable = true}, SHIFT(159),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 5),
  [341] = {.count = 1, .reusable = true}, SHIFT(160),
  [343] = {.count = 1, .reusable = true}, SHIFT(161),
  [345] = {.count = 1, .reusable = true}, SHIFT(162),
  [347] = {.count = 1, .reusable = false}, SHIFT(164),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_value_command, 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 7),
  [353] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 4),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 4),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2), SHIFT_REPEAT(126),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym__block_state_argument, 3),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 3),
  [366] = {.count = 1, .reusable = true}, SHIFT(167),
  [368] = {.count = 1, .reusable = true}, SHIFT(169),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 6),
  [374] = {.count = 1, .reusable = true}, SHIFT(170),
  [376] = {.count = 1, .reusable = true}, SHIFT(172),
  [378] = {.count = 1, .reusable = true}, SHIFT(173),
  [380] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 4),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(153),
  [387] = {.count = 1, .reusable = true}, SHIFT(174),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_from_command, 4),
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
