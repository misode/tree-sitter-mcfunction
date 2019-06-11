#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 252
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 101
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
  anon_sym_scoreboard = 24,
  anon_sym_objectives = 25,
  anon_sym_add = 26,
  anon_sym_list = 27,
  anon_sym_displayname = 28,
  anon_sym_rendertype = 29,
  anon_sym_hearts = 30,
  anon_sym_integer = 31,
  anon_sym_setdisplay = 32,
  anon_sym_belowName = 33,
  anon_sym_sidebar = 34,
  anon_sym_sidebar_DOTteam_DOTaqua = 35,
  anon_sym_sidebar_DOTteam_DOTblack = 36,
  anon_sym_sidebar_DOTteam_DOTblue = 37,
  anon_sym_sidebar_DOTteam_DOTdark_aqua = 38,
  anon_sym_sidebar_DOTteam_DOTdark_blue = 39,
  anon_sym_sidebar_DOTteam_DOTdark_gray = 40,
  anon_sym_sidebar_DOTteam_DOTdark_green = 41,
  anon_sym_sidebar_DOTteam_DOTdark_purple = 42,
  anon_sym_sidebar_DOTteam_DOTdark_red = 43,
  anon_sym_sidebar_DOTteam_DOTgold = 44,
  anon_sym_sidebar_DOTteam_DOTgray = 45,
  anon_sym_sidebar_DOTteam_DOTgreen = 46,
  anon_sym_sidebar_DOTteam_DOTlight_purple = 47,
  anon_sym_sidebar_DOTteam_DOTred = 48,
  anon_sym_sidebar_DOTteam_DOTwhite = 49,
  anon_sym_sidebar_DOTteam_DOTyellow = 50,
  anon_sym_players = 51,
  anon_sym_enable = 52,
  anon_sym_operation = 53,
  anon_sym_reset = 54,
  anon_sym_team = 55,
  anon_sym_empty = 56,
  anon_sym_join = 57,
  anon_sym_leave = 58,
  anon_sym_tag = 59,
  anon_sym_AT = 60,
  anon_sym_p = 61,
  anon_sym_a = 62,
  anon_sym_r = 63,
  anon_sym_s = 64,
  anon_sym_e = 65,
  anon_sym_LBRACK = 66,
  anon_sym_COMMA = 67,
  anon_sym_RBRACK = 68,
  anon_sym_EQ = 69,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH = 70,
  sym_coordinate = 71,
  sym_integer = 72,
  anon_sym_minecraft_COLON = 73,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH = 74,
  sym_block_state_value = 75,
  anon_sym_LBRACE = 76,
  anon_sym_RBRACE = 77,
  anon_sym_COLON = 78,
  sym_nbt_key = 79,
  sym_nbt_number = 80,
  anon_sym_DQUOTE = 81,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 82,
  anon_sym_SQUOTE = 83,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 84,
  sym_escape_sequence = 85,
  sym_nbt_path = 86,
  sym_function_name = 87,
  sym_time = 88,
  aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH = 89,
  sym_scoreboard_criteria = 90,
  anon_sym_PERCENT_EQ = 91,
  anon_sym_STAR_EQ = 92,
  anon_sym_PLUS_EQ = 93,
  anon_sym_DASH_EQ = 94,
  anon_sym_SLASH_EQ = 95,
  anon_sym_LT_EQ = 96,
  anon_sym_GT_EQ = 97,
  anon_sym_GT_LT = 98,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH = 99,
  sym_tag = 100,
  sym_function = 101,
  sym_comment = 102,
  sym_command = 103,
  sym__teleport_command = 104,
  sym__setblock_command = 105,
  sym__summon_command = 106,
  sym__say_command = 107,
  sym__data_command = 108,
  sym__data_merge_command = 109,
  sym__data_get_command = 110,
  sym__data_remove_command = 111,
  sym__data_modify_command = 112,
  sym__data_modify_value_command = 113,
  sym__data_modify_from_command = 114,
  sym__function_command = 115,
  sym__schedule_command = 116,
  sym__scoreboard_command = 117,
  sym__scoreboard_objectives_command = 118,
  sym__scoreboard_players_command = 119,
  sym__team_command = 120,
  sym__tag_command = 121,
  sym_selector = 122,
  sym__selector_argument = 123,
  sym_selector_key = 124,
  sym_selector_value = 125,
  sym__coordinate3 = 126,
  sym_block = 127,
  sym_block_type = 128,
  sym_block_state = 129,
  sym__block_state_argument = 130,
  sym_block_state_key = 131,
  sym_entity_type = 132,
  sym_message = 133,
  sym_nbt_compound = 134,
  sym__nbt_pair = 135,
  sym_nbt_array = 136,
  sym__nbt_value = 137,
  sym_nbt_string = 138,
  sym__quoted_string = 139,
  sym_objective = 140,
  sym_scoreboard_operation = 141,
  sym_team = 142,
  sym_team_option = 143,
  sym_team_option_value = 144,
  aux_sym_function_repeat1 = 145,
  aux_sym_selector_repeat1 = 146,
  aux_sym_block_state_repeat1 = 147,
  aux_sym_nbt_compound_repeat1 = 148,
  aux_sym_nbt_array_repeat1 = 149,
  aux_sym__quoted_string_repeat1 = 150,
  aux_sym__quoted_string_repeat2 = 151,
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
  [anon_sym_scoreboard] = "scoreboard",
  [anon_sym_objectives] = "objectives",
  [anon_sym_add] = "add",
  [anon_sym_list] = "list",
  [anon_sym_displayname] = "displayname",
  [anon_sym_rendertype] = "rendertype",
  [anon_sym_hearts] = "hearts",
  [anon_sym_integer] = "integer",
  [anon_sym_setdisplay] = "setdisplay",
  [anon_sym_belowName] = "belowName",
  [anon_sym_sidebar] = "sidebar",
  [anon_sym_sidebar_DOTteam_DOTaqua] = "sidebar.team.aqua",
  [anon_sym_sidebar_DOTteam_DOTblack] = "sidebar.team.black",
  [anon_sym_sidebar_DOTteam_DOTblue] = "sidebar.team.blue",
  [anon_sym_sidebar_DOTteam_DOTdark_aqua] = "sidebar.team.dark_aqua",
  [anon_sym_sidebar_DOTteam_DOTdark_blue] = "sidebar.team.dark_blue",
  [anon_sym_sidebar_DOTteam_DOTdark_gray] = "sidebar.team.dark_gray",
  [anon_sym_sidebar_DOTteam_DOTdark_green] = "sidebar.team.dark_green",
  [anon_sym_sidebar_DOTteam_DOTdark_purple] = "sidebar.team.dark_purple",
  [anon_sym_sidebar_DOTteam_DOTdark_red] = "sidebar.team.dark_red",
  [anon_sym_sidebar_DOTteam_DOTgold] = "sidebar.team.gold",
  [anon_sym_sidebar_DOTteam_DOTgray] = "sidebar.team.gray",
  [anon_sym_sidebar_DOTteam_DOTgreen] = "sidebar.team.green",
  [anon_sym_sidebar_DOTteam_DOTlight_purple] = "sidebar.team.light_purple",
  [anon_sym_sidebar_DOTteam_DOTred] = "sidebar.team.red",
  [anon_sym_sidebar_DOTteam_DOTwhite] = "sidebar.team.white",
  [anon_sym_sidebar_DOTteam_DOTyellow] = "sidebar.team.yellow",
  [anon_sym_players] = "players",
  [anon_sym_enable] = "enable",
  [anon_sym_operation] = "operation",
  [anon_sym_reset] = "reset",
  [anon_sym_team] = "team",
  [anon_sym_empty] = "empty",
  [anon_sym_join] = "join",
  [anon_sym_leave] = "leave",
  [anon_sym_tag] = "tag",
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
  [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = "/[\\.A-Za-z0-9_-]{1,16}/",
  [sym_scoreboard_criteria] = "scoreboard_criteria",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT_LT] = "><",
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = "/[A-Za-z]+/",
  [sym_tag] = "tag",
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
  [sym__scoreboard_command] = "_scoreboard_command",
  [sym__scoreboard_objectives_command] = "_scoreboard_objectives_command",
  [sym__scoreboard_players_command] = "_scoreboard_players_command",
  [sym__team_command] = "_team_command",
  [sym__tag_command] = "_tag_command",
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
  [sym_objective] = "objective",
  [sym_scoreboard_operation] = "scoreboard_operation",
  [sym_team] = "team",
  [sym_team_option] = "team_option",
  [sym_team_option_value] = "team_option_value",
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
  [anon_sym_scoreboard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_objectives] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_displayname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rendertype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hearts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setdisplay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_belowName] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTaqua] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTblack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTblue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTdark_aqua] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTdark_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTdark_gray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTdark_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTdark_purple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTdark_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTgold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTgray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTgreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTlight_purple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTwhite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_DOTteam_DOTyellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_players] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_team] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
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
  [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_scoreboard_criteria] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_tag] = {
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
  [sym__scoreboard_command] = {
    .visible = false,
    .named = true,
  },
  [sym__scoreboard_objectives_command] = {
    .visible = false,
    .named = true,
  },
  [sym__scoreboard_players_command] = {
    .visible = false,
    .named = true,
  },
  [sym__team_command] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_command] = {
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
  [sym_objective] = {
    .visible = true,
    .named = true,
  },
  [sym_scoreboard_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_team] = {
    .visible = true,
    .named = true,
  },
  [sym_team_option] = {
    .visible = true,
    .named = true,
  },
  [sym_team_option_value] = {
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
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead == ']')
        ADVANCE(36);
      if (lookahead == 'a')
        ADVANCE(37);
      if (lookahead == 'b')
        ADVANCE(38);
      if (lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'f')
        ADVANCE(66);
      if (lookahead == 'g')
        ADVANCE(77);
      if (lookahead == 'h')
        ADVANCE(80);
      if (lookahead == 'i')
        ADVANCE(86);
      if (lookahead == 'j')
        ADVANCE(97);
      if (lookahead == 'l')
        ADVANCE(101);
      if (lookahead == 'm')
        ADVANCE(109);
      if (lookahead == 'o')
        ADVANCE(128);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 'r')
        ADVANCE(147);
      if (lookahead == 's')
        ADVANCE(148);
      if (lookahead == 't')
        ADVANCE(149);
      if (lookahead == 'v')
        ADVANCE(162);
      if (lookahead == '{')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
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
      if (lookahead == '=')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      if (lookahead == '=')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 9:
      if (lookahead == '=')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      if (lookahead == '=')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '=')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      if (lookahead == 'u')
        ADVANCE(27);
      if (lookahead == 'x')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == '{')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '}')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(32);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(30);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 38:
      if (lookahead == 'e')
        ADVANCE(39);
      if (lookahead == 'l')
        ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'o')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'w')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'N')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'a')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'm')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_belowName);
      END_STATE();
    case 47:
      if (lookahead == 'o')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'c')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'k')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 51:
      if (lookahead == 'a')
        ADVANCE(52);
      if (lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 't')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'a')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 55:
      if (lookahead == 's')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'p')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'l')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'y')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'a')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'm')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_displayname);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 66:
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'o')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'm')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'c')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 't')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'i')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'o')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'n')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 77:
      if (lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 't')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 80:
      if (lookahead == 'e')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'a')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'r')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 't')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 's')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_hearts);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 's')
        ADVANCE(88);
      if (lookahead == 't')
        ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 't')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 92:
      if (lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'g')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'e')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'r')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 97:
      if (lookahead == 'o')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'i')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'n')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 101:
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 'a')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'v')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_leave);
      END_STATE();
    case 106:
      if (lookahead == 's')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 't')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      if (lookahead == 'i')
        ADVANCE(114);
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'r')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'g')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 114:
      if (lookahead == 'n')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'c')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'r')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'a')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'f')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == ':')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_minecraft_COLON);
      END_STATE();
    case 123:
      if (lookahead == 'd')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'i')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'f')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'y')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 128:
      if (lookahead == 'b')
        ADVANCE(129);
      if (lookahead == 'p')
        ADVANCE(138);
      END_STATE();
    case 129:
      if (lookahead == 'j')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'c')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'i')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'v')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'e')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 's')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_objectives);
      END_STATE();
    case 138:
      if (lookahead == 'e')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'r')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'a')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 't')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'i')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'o')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'n')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_operation);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 149:
      if (lookahead == 'a')
        ADVANCE(150);
      if (lookahead == 'e')
        ADVANCE(152);
      if (lookahead == 'p')
        ADVANCE(161);
      END_STATE();
    case 150:
      if (lookahead == 'g')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 152:
      if (lookahead == 'a')
        ADVANCE(153);
      if (lookahead == 'l')
        ADVANCE(155);
      END_STATE();
    case 153:
      if (lookahead == 'm')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_team);
      END_STATE();
    case 155:
      if (lookahead == 'e')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'p')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'r')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 't')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_teleport);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_tp);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'l')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_coordinate);
      END_STATE();
    case 170:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == ']')
        ADVANCE(36);
      if (lookahead == 'a')
        ADVANCE(37);
      if (lookahead == 'b')
        ADVANCE(38);
      if (lookahead == 'd')
        ADVANCE(51);
      if (lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'f')
        ADVANCE(66);
      if (lookahead == 'g')
        ADVANCE(77);
      if (lookahead == 'h')
        ADVANCE(80);
      if (lookahead == 'i')
        ADVANCE(86);
      if (lookahead == 'j')
        ADVANCE(97);
      if (lookahead == 'l')
        ADVANCE(101);
      if (lookahead == 'm')
        ADVANCE(109);
      if (lookahead == 'o')
        ADVANCE(128);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 'r')
        ADVANCE(147);
      if (lookahead == 's')
        ADVANCE(148);
      if (lookahead == 't')
        ADVANCE(149);
      if (lookahead == 'v')
        ADVANCE(162);
      if (lookahead == '{')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(172);
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 175:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'd')
        ADVANCE(176);
      if (lookahead == 'f')
        ADVANCE(177);
      if (lookahead == 's')
        ADVANCE(178);
      if (lookahead == 't')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
      END_STATE();
    case 176:
      if (lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 177:
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 178:
      if (lookahead == 'a')
        ADVANCE(179);
      if (lookahead == 'c')
        ADVANCE(181);
      if (lookahead == 'e')
        ADVANCE(196);
      if (lookahead == 'u')
        ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 'y')
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_say);
      END_STATE();
    case 181:
      if (lookahead == 'h')
        ADVANCE(182);
      if (lookahead == 'o')
        ADVANCE(188);
      END_STATE();
    case 182:
      if (lookahead == 'e')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'd')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'u')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'l')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_schedule);
      END_STATE();
    case 188:
      if (lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'b')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'o')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'a')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'r')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'd')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_scoreboard);
      END_STATE();
    case 196:
      if (lookahead == 't')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'b')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'l')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'o')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'c')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'k')
        ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_setblock);
      END_STATE();
    case 203:
      if (lookahead == 'm')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'm')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'o')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'n')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_summon);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(209);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(208);
      if (lookahead != 0)
        ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(210);
      END_STATE();
    case 211:
      if (lookahead == '@')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 212:
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'm')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(217);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(218);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(220);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(222);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == ':')
        ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 224:
      if (lookahead == 'g')
        ADVANCE(77);
      if (lookahead == 'm')
        ADVANCE(225);
      if (lookahead == 'r')
        ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      END_STATE();
    case 225:
      if (lookahead == 'e')
        ADVANCE(110);
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 226:
      if (lookahead == 'e')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'm')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'o')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'v')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 232:
      if (lookahead == '/')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_function_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '/')
        ADVANCE(233);
      if (lookahead == ':')
        ADVANCE(235);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 235:
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 236:
      if (lookahead == 'o')
        ADVANCE(237);
      if (lookahead == 'p')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(236);
      END_STATE();
    case 237:
      if (lookahead == 'b')
        ADVANCE(129);
      END_STATE();
    case 238:
      if (lookahead == 'l')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'a')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'y')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'e')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'r')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 's')
        ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_players);
      END_STATE();
    case 245:
      if (lookahead == 'a')
        ADVANCE(246);
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead == 'j')
        ADVANCE(97);
      if (lookahead == 'l')
        ADVANCE(101);
      if (lookahead == 'm')
        ADVANCE(254);
      if (lookahead == 'r')
        ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      END_STATE();
    case 246:
      if (lookahead == 'd')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'd')
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 249:
      if (lookahead == 'm')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'p')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 't')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'y')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 254:
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 255:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(255);
      END_STATE();
    case 256:
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(256);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      END_STATE();
    case 274:
      if (lookahead == 'a')
        ADVANCE(37);
      if (lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 'r')
        ADVANCE(147);
      if (lookahead == 's')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    case 275:
      if (lookahead == 'b')
        ADVANCE(276);
      if (lookahead == 'e')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      END_STATE();
    case 276:
      if (lookahead == 'l')
        ADVANCE(47);
      END_STATE();
    case 277:
      if (lookahead == 'n')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 't')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'i')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 't')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'y')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 283:
      if (lookahead == 'a')
        ADVANCE(246);
      if (lookahead == 'l')
        ADVANCE(284);
      if (lookahead == 'm')
        ADVANCE(254);
      if (lookahead == 'r')
        ADVANCE(226);
      if (lookahead == 's')
        ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      END_STATE();
    case 284:
      if (lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 285:
      if (lookahead == 'e')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 't')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'd')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'i')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 's')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'p')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'l')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'a')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'y')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_setdisplay);
      END_STATE();
    case 295:
      if (lookahead == 'a')
        ADVANCE(246);
      if (lookahead == 'e')
        ADVANCE(296);
      if (lookahead == 'g')
        ADVANCE(77);
      if (lookahead == 'l')
        ADVANCE(284);
      if (lookahead == 'o')
        ADVANCE(302);
      if (lookahead == 'r')
        ADVANCE(303);
      if (lookahead == 's')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      END_STATE();
    case 296:
      if (lookahead == 'n')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'a')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'b')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'l')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 302:
      if (lookahead == 'p')
        ADVANCE(138);
      END_STATE();
    case 303:
      if (lookahead == 'e')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'm')
        ADVANCE(228);
      if (lookahead == 's')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'e')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 308:
      if (lookahead == 'e')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 't')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 311:
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(311);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(258);
      END_STATE();
    case 312:
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(312);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(313);
      END_STATE();
    case 314:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(314);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == '.')
        ADVANCE(172);
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(315);
      END_STATE();
    case 316:
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'l')
        ADVANCE(284);
      if (lookahead == 's')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 318:
      if (lookahead == 'i')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'd')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'e')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'b')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'a')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'r')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_sidebar);
      if (lookahead == '.')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 't')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'e')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'a')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'm')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == '.')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'a')
        ADVANCE(331);
      if (lookahead == 'b')
        ADVANCE(335);
      if (lookahead == 'd')
        ADVANCE(342);
      if (lookahead == 'g')
        ADVANCE(371);
      if (lookahead == 'l')
        ADVANCE(381);
      if (lookahead == 'r')
        ADVANCE(393);
      if (lookahead == 'w')
        ADVANCE(396);
      if (lookahead == 'y')
        ADVANCE(401);
      END_STATE();
    case 331:
      if (lookahead == 'q')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'u')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'a')
        ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTaqua);
      END_STATE();
    case 335:
      if (lookahead == 'l')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'a')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(340);
      END_STATE();
    case 337:
      if (lookahead == 'c')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'k')
        ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTblack);
      END_STATE();
    case 340:
      if (lookahead == 'e')
        ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTblue);
      END_STATE();
    case 342:
      if (lookahead == 'a')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'r')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'k')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == '_')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'a')
        ADVANCE(347);
      if (lookahead == 'b')
        ADVANCE(351);
      if (lookahead == 'g')
        ADVANCE(355);
      if (lookahead == 'p')
        ADVANCE(362);
      if (lookahead == 'r')
        ADVANCE(368);
      END_STATE();
    case 347:
      if (lookahead == 'q')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'u')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'a')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_aqua);
      END_STATE();
    case 351:
      if (lookahead == 'l')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 'u')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'e')
        ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_blue);
      END_STATE();
    case 355:
      if (lookahead == 'r')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'a')
        ADVANCE(357);
      if (lookahead == 'e')
        ADVANCE(359);
      END_STATE();
    case 357:
      if (lookahead == 'y')
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_gray);
      END_STATE();
    case 359:
      if (lookahead == 'e')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'n')
        ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_green);
      END_STATE();
    case 362:
      if (lookahead == 'u')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'r')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'p')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'l')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == 'e')
        ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_purple);
      END_STATE();
    case 368:
      if (lookahead == 'e')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'd')
        ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_red);
      END_STATE();
    case 371:
      if (lookahead == 'o')
        ADVANCE(372);
      if (lookahead == 'r')
        ADVANCE(375);
      END_STATE();
    case 372:
      if (lookahead == 'l')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'd')
        ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgold);
      END_STATE();
    case 375:
      if (lookahead == 'a')
        ADVANCE(376);
      if (lookahead == 'e')
        ADVANCE(378);
      END_STATE();
    case 376:
      if (lookahead == 'y')
        ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgray);
      END_STATE();
    case 378:
      if (lookahead == 'e')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'n')
        ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgreen);
      END_STATE();
    case 381:
      if (lookahead == 'i')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'g')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'h')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 't')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == '_')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'p')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'u')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'r')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'p')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'l')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'e')
        ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTlight_purple);
      END_STATE();
    case 393:
      if (lookahead == 'e')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'd')
        ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTred);
      END_STATE();
    case 396:
      if (lookahead == 'h')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'i')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 't')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'e')
        ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTwhite);
      END_STATE();
    case 401:
      if (lookahead == 'e')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'l')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 'l')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'o')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'w')
        ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTyellow);
      END_STATE();
    case 407:
      if (lookahead == '@')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(408);
      END_STATE();
    case 409:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(408);
      END_STATE();
    case 410:
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(246);
      if (lookahead == 'l')
        ADVANCE(284);
      if (lookahead == 'r')
        ADVANCE(226);
      if (lookahead == '{')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(410);
      END_STATE();
    case 411:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(411);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(412);
      END_STATE();
    case 413:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(414);
      END_STATE();
    case 415:
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_nbt_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(416);
      END_STATE();
    case 417:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(418);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == ']')
        ADVANCE(36);
      if (lookahead == '{')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(417);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(419);
      END_STATE();
    case 418:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_nbt_number);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(419);
      END_STATE();
    case 420:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_nbt_number);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_nbt_number);
      END_STATE();
    case 423:
      if (lookahead == '\t')
        ADVANCE(424);
      if (lookahead == ' ')
        SKIP(423);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(426);
      if (lookahead != 0)
        ADVANCE(425);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(426);
      END_STATE();
    case 427:
      if (lookahead == '\t')
        ADVANCE(428);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(427);
      if (lookahead != 0)
        ADVANCE(425);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(425);
      END_STATE();
    case 429:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == 'd')
        ADVANCE(430);
      if (lookahead == 'r')
        ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(429);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 430:
      if (lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 431:
      if (lookahead == 'e')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'n')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'd')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'e')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'r')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 't')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'y')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'p')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'e')
        ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_rendertype);
      END_STATE();
    case 441:
      if (lookahead == 'd')
        ADVANCE(430);
      if (lookahead == 'r')
        ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(441);
      END_STATE();
    case 442:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_scoreboard_criteria);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(443);
      END_STATE();
    case 444:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(445);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(444);
      END_STATE();
    case 445:
      if (lookahead == '=')
        ADVANCE(13);
      END_STATE();
    case 446:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(446);
      END_STATE();
    case 447:
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(447);
      END_STATE();
    case 448:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(448);
      END_STATE();
    case 449:
      if (lookahead == '\t')
        ADVANCE(450);
      if (lookahead == ' ')
        SKIP(449);
      if (lookahead == '[')
        ADVANCE(451);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(452);
      if (lookahead != 0)
        ADVANCE(425);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(450);
      if (lookahead == '[')
        ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(425);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(425);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(452);
      END_STATE();
    case 453:
      if (lookahead == '\t')
        ADVANCE(454);
      if (lookahead == '[')
        ADVANCE(451);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(453);
      if (lookahead != 0)
        ADVANCE(425);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(454);
      if (lookahead == '[')
        ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(425);
      END_STATE();
    case 455:
      if (lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'i')
        ADVANCE(462);
      if (lookahead == 'm')
        ADVANCE(464);
      if (lookahead == 'p')
        ADVANCE(465);
      if (lookahead == 's')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(455);
      END_STATE();
    case 456:
      if (lookahead == 'p')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'p')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'e')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'n')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'd')
        ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 462:
      if (lookahead == 'n')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 's')
        ADVANCE(88);
      END_STATE();
    case 464:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 465:
      if (lookahead == 'r')
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == 'e')
        ADVANCE(467);
      END_STATE();
    case 467:
      if (lookahead == 'p')
        ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'e')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'n')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 'd')
        ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 472:
      if (lookahead == 'h')
        ADVANCE(80);
      if (lookahead == 'i')
        ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(472);
      END_STATE();
    case 473:
      if (lookahead == 'n')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 't')
        ADVANCE(92);
      END_STATE();
    case 475:
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(475);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 476:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 477:
      if (lookahead == 'f')
        ADVANCE(478);
      if (lookahead == 'v')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(477);
      END_STATE();
    case 478:
      if (lookahead == 'r')
        ADVANCE(67);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        SKIP(480);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(481);
      if (lookahead != 0)
        ADVANCE(482);
      END_STATE();
    case 480:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(482);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        SKIP(484);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(485);
      if (lookahead != 0)
        ADVANCE(486);
      END_STATE();
    case 484:
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(486);
      END_STATE();
    case 487:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(487);
      END_STATE();
    case 488:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_block_state_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(489);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 175},
  [2] = {.lex_state = 208},
  [3] = {.lex_state = 211},
  [4] = {.lex_state = 212},
  [5] = {.lex_state = 213},
  [6] = {.lex_state = 208},
  [7] = {.lex_state = 224},
  [8] = {.lex_state = 232},
  [9] = {.lex_state = 175},
  [10] = {.lex_state = 236},
  [11] = {.lex_state = 245},
  [12] = {.lex_state = 211},
  [13] = {.lex_state = 255},
  [14] = {.lex_state = 256},
  [15] = {.lex_state = 256},
  [16] = {.lex_state = 175},
  [17] = {.lex_state = 256},
  [18] = {.lex_state = 274},
  [19] = {.lex_state = 256},
  [20] = {.lex_state = 212},
  [21] = {.lex_state = 213},
  [22] = {.lex_state = 212},
  [23] = {.lex_state = 212},
  [24] = {.lex_state = 256},
  [25] = {.lex_state = 256},
  [26] = {.lex_state = 275},
  [27] = {.lex_state = 275},
  [28] = {.lex_state = 275},
  [29] = {.lex_state = 275},
  [30] = {.lex_state = 256},
  [31] = {.lex_state = 256},
  [32] = {.lex_state = 232},
  [33] = {.lex_state = 283},
  [34] = {.lex_state = 295},
  [35] = {.lex_state = 256},
  [36] = {.lex_state = 311},
  [37] = {.lex_state = 311},
  [38] = {.lex_state = 256},
  [39] = {.lex_state = 311},
  [40] = {.lex_state = 211},
  [41] = {.lex_state = 274},
  [42] = {.lex_state = 245},
  [43] = {.lex_state = 175},
  [44] = {.lex_state = 175},
  [45] = {.lex_state = 256},
  [46] = {.lex_state = 212},
  [47] = {.lex_state = 212},
  [48] = {.lex_state = 212},
  [49] = {.lex_state = 312},
  [50] = {.lex_state = 211},
  [51] = {.lex_state = 212},
  [52] = {.lex_state = 211},
  [53] = {.lex_state = 212},
  [54] = {.lex_state = 211},
  [55] = {.lex_state = 212},
  [56] = {.lex_state = 211},
  [57] = {.lex_state = 212},
  [58] = {.lex_state = 314},
  [59] = {.lex_state = 311},
  [60] = {.lex_state = 311},
  [61] = {.lex_state = 311},
  [62] = {.lex_state = 256},
  [63] = {.lex_state = 316},
  [64] = {.lex_state = 211},
  [65] = {.lex_state = 211},
  [66] = {.lex_state = 211},
  [67] = {.lex_state = 211},
  [68] = {.lex_state = 211},
  [69] = {.lex_state = 256},
  [70] = {.lex_state = 256},
  [71] = {.lex_state = 407},
  [72] = {.lex_state = 409},
  [73] = {.lex_state = 211},
  [74] = {.lex_state = 410},
  [75] = {.lex_state = 411},
  [76] = {.lex_state = 256},
  [77] = {.lex_state = 413},
  [78] = {.lex_state = 213},
  [79] = {.lex_state = 212},
  [80] = {.lex_state = 415},
  [81] = {.lex_state = 256},
  [82] = {.lex_state = 417},
  [83] = {.lex_state = 212},
  [84] = {.lex_state = 274},
  [85] = {.lex_state = 423},
  [86] = {.lex_state = 212},
  [87] = {.lex_state = 274},
  [88] = {.lex_state = 427},
  [89] = {.lex_state = 212},
  [90] = {.lex_state = 427},
  [91] = {.lex_state = 256},
  [92] = {.lex_state = 256},
  [93] = {.lex_state = 256},
  [94] = {.lex_state = 429},
  [95] = {.lex_state = 441},
  [96] = {.lex_state = 442},
  [97] = {.lex_state = 442},
  [98] = {.lex_state = 311},
  [99] = {.lex_state = 274},
  [100] = {.lex_state = 311},
  [101] = {.lex_state = 311},
  [102] = {.lex_state = 256},
  [103] = {.lex_state = 311},
  [104] = {.lex_state = 256},
  [105] = {.lex_state = 409},
  [106] = {.lex_state = 409},
  [107] = {.lex_state = 256},
  [108] = {.lex_state = 413},
  [109] = {.lex_state = 256},
  [110] = {.lex_state = 444},
  [111] = {.lex_state = 446},
  [112] = {.lex_state = 444},
  [113] = {.lex_state = 213},
  [114] = {.lex_state = 213},
  [115] = {.lex_state = 312},
  [116] = {.lex_state = 256},
  [117] = {.lex_state = 312},
  [118] = {.lex_state = 312},
  [119] = {.lex_state = 256},
  [120] = {.lex_state = 447},
  [121] = {.lex_state = 448},
  [122] = {.lex_state = 256},
  [123] = {.lex_state = 212},
  [124] = {.lex_state = 449},
  [125] = {.lex_state = 256},
  [126] = {.lex_state = 212},
  [127] = {.lex_state = 453},
  [128] = {.lex_state = 256},
  [129] = {.lex_state = 212},
  [130] = {.lex_state = 455},
  [131] = {.lex_state = 256},
  [132] = {.lex_state = 472},
  [133] = {.lex_state = 311},
  [134] = {.lex_state = 256},
  [135] = {.lex_state = 475},
  [136] = {.lex_state = 444},
  [137] = {.lex_state = 256},
  [138] = {.lex_state = 256},
  [139] = {.lex_state = 446},
  [140] = {.lex_state = 413},
  [141] = {.lex_state = 256},
  [142] = {.lex_state = 446},
  [143] = {.lex_state = 413},
  [144] = {.lex_state = 312},
  [145] = {.lex_state = 312},
  [146] = {.lex_state = 213},
  [147] = {.lex_state = 312},
  [148] = {.lex_state = 256},
  [149] = {.lex_state = 417},
  [150] = {.lex_state = 415},
  [151] = {.lex_state = 256},
  [152] = {.lex_state = 448},
  [153] = {.lex_state = 417},
  [154] = {.lex_state = 413},
  [155] = {.lex_state = 423},
  [156] = {.lex_state = 413},
  [157] = {.lex_state = 427},
  [158] = {.lex_state = 477},
  [159] = {.lex_state = 475},
  [160] = {.lex_state = 256},
  [161] = {.lex_state = 413},
  [162] = {.lex_state = 256},
  [163] = {.lex_state = 211},
  [164] = {.lex_state = 211},
  [165] = {.lex_state = 410},
  [166] = {.lex_state = 446},
  [167] = {.lex_state = 446},
  [168] = {.lex_state = 256},
  [169] = {.lex_state = 446},
  [170] = {.lex_state = 446},
  [171] = {.lex_state = 446},
  [172] = {.lex_state = 312},
  [173] = {.lex_state = 256},
  [174] = {.lex_state = 444},
  [175] = {.lex_state = 446},
  [176] = {.lex_state = 444},
  [177] = {.lex_state = 417},
  [178] = {.lex_state = 415},
  [179] = {.lex_state = 479},
  [180] = {.lex_state = 483},
  [181] = {.lex_state = 448},
  [182] = {.lex_state = 487},
  [183] = {.lex_state = 448},
  [184] = {.lex_state = 256},
  [185] = {.lex_state = 448},
  [186] = {.lex_state = 446},
  [187] = {.lex_state = 446},
  [188] = {.lex_state = 417},
  [189] = {.lex_state = 275},
  [190] = {.lex_state = 256},
  [191] = {.lex_state = 477},
  [192] = {.lex_state = 446},
  [193] = {.lex_state = 311},
  [194] = {.lex_state = 410},
  [195] = {.lex_state = 256},
  [196] = {.lex_state = 213},
  [197] = {.lex_state = 312},
  [198] = {.lex_state = 446},
  [199] = {.lex_state = 488},
  [200] = {.lex_state = 487},
  [201] = {.lex_state = 446},
  [202] = {.lex_state = 487},
  [203] = {.lex_state = 448},
  [204] = {.lex_state = 487},
  [205] = {.lex_state = 479},
  [206] = {.lex_state = 483},
  [207] = {.lex_state = 423},
  [208] = {.lex_state = 446},
  [209] = {.lex_state = 427},
  [210] = {.lex_state = 446},
  [211] = {.lex_state = 417},
  [212] = {.lex_state = 479},
  [213] = {.lex_state = 483},
  [214] = {.lex_state = 256},
  [215] = {.lex_state = 256},
  [216] = {.lex_state = 211},
  [217] = {.lex_state = 212},
  [218] = {.lex_state = 256},
  [219] = {.lex_state = 311},
  [220] = {.lex_state = 446},
  [221] = {.lex_state = 256},
  [222] = {.lex_state = 446},
  [223] = {.lex_state = 312},
  [224] = {.lex_state = 446},
  [225] = {.lex_state = 446},
  [226] = {.lex_state = 417},
  [227] = {.lex_state = 487},
  [228] = {.lex_state = 446},
  [229] = {.lex_state = 487},
  [230] = {.lex_state = 448},
  [231] = {.lex_state = 487},
  [232] = {.lex_state = 479},
  [233] = {.lex_state = 483},
  [234] = {.lex_state = 423},
  [235] = {.lex_state = 427},
  [236] = {.lex_state = 256},
  [237] = {.lex_state = 446},
  [238] = {.lex_state = 256},
  [239] = {.lex_state = 479},
  [240] = {.lex_state = 483},
  [241] = {.lex_state = 427},
  [242] = {.lex_state = 311},
  [243] = {.lex_state = 446},
  [244] = {.lex_state = 487},
  [245] = {.lex_state = 446},
  [246] = {.lex_state = 487},
  [247] = {.lex_state = 256},
  [248] = {.lex_state = 446},
  [249] = {.lex_state = 256},
  [250] = {.lex_state = 256},
  [251] = {.lex_state = 256},
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
    [anon_sym_objectives] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_displayname] = ACTIONS(1),
    [anon_sym_hearts] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_belowName] = ACTIONS(1),
    [anon_sym_operation] = ACTIONS(1),
    [anon_sym_team] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_leave] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
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
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT_LT] = ACTIONS(1),
  },
  [1] = {
    [sym_function] = STATE(13),
    [sym_comment] = STATE(14),
    [sym_command] = STATE(14),
    [sym__teleport_command] = STATE(15),
    [sym__setblock_command] = STATE(15),
    [sym__summon_command] = STATE(15),
    [sym__say_command] = STATE(15),
    [sym__data_command] = STATE(15),
    [sym__function_command] = STATE(15),
    [sym__schedule_command] = STATE(15),
    [sym__scoreboard_command] = STATE(15),
    [sym__team_command] = STATE(15),
    [sym__tag_command] = STATE(15),
    [aux_sym_function_repeat1] = STATE(16),
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
    [anon_sym_scoreboard] = ACTIONS(23),
    [anon_sym_team] = ACTIONS(25),
    [anon_sym_tag] = ACTIONS(27),
  },
  [2] = {
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(29),
  },
  [3] = {
    [sym_selector] = STATE(19),
    [anon_sym_AT] = ACTIONS(31),
  },
  [4] = {
    [sym_coordinate] = ACTIONS(33),
  },
  [5] = {
    [sym_entity_type] = STATE(23),
    [anon_sym_minecraft_COLON] = ACTIONS(35),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(37),
  },
  [6] = {
    [sym_message] = STATE(25),
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(39),
  },
  [7] = {
    [sym__data_merge_command] = STATE(30),
    [sym__data_get_command] = STATE(30),
    [sym__data_remove_command] = STATE(30),
    [sym__data_modify_command] = STATE(30),
    [anon_sym_merge] = ACTIONS(41),
    [anon_sym_get] = ACTIONS(43),
    [anon_sym_remove] = ACTIONS(45),
    [anon_sym_modify] = ACTIONS(47),
  },
  [8] = {
    [sym_function_name] = ACTIONS(49),
  },
  [9] = {
    [anon_sym_function] = ACTIONS(51),
  },
  [10] = {
    [sym__scoreboard_objectives_command] = STATE(35),
    [sym__scoreboard_players_command] = STATE(35),
    [anon_sym_objectives] = ACTIONS(53),
    [anon_sym_players] = ACTIONS(55),
  },
  [11] = {
    [anon_sym_remove] = ACTIONS(57),
    [anon_sym_modify] = ACTIONS(59),
    [anon_sym_add] = ACTIONS(57),
    [anon_sym_list] = ACTIONS(61),
    [anon_sym_empty] = ACTIONS(57),
    [anon_sym_join] = ACTIONS(63),
    [anon_sym_leave] = ACTIONS(65),
  },
  [12] = {
    [sym_selector] = STATE(42),
    [anon_sym_AT] = ACTIONS(67),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(69),
  },
  [14] = {
    [sym__line_break] = ACTIONS(71),
  },
  [15] = {
    [sym__line_break] = ACTIONS(73),
  },
  [16] = {
    [sym_comment] = STATE(14),
    [sym_command] = STATE(14),
    [sym__teleport_command] = STATE(15),
    [sym__setblock_command] = STATE(15),
    [sym__summon_command] = STATE(15),
    [sym__say_command] = STATE(15),
    [sym__data_command] = STATE(15),
    [sym__function_command] = STATE(15),
    [sym__schedule_command] = STATE(15),
    [sym__scoreboard_command] = STATE(15),
    [sym__team_command] = STATE(15),
    [sym__tag_command] = STATE(15),
    [aux_sym_function_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_teleport] = ACTIONS(9),
    [anon_sym_tp] = ACTIONS(9),
    [anon_sym_setblock] = ACTIONS(11),
    [anon_sym_summon] = ACTIONS(13),
    [anon_sym_say] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_schedule] = ACTIONS(21),
    [anon_sym_scoreboard] = ACTIONS(23),
    [anon_sym_team] = ACTIONS(25),
    [anon_sym_tag] = ACTIONS(27),
  },
  [17] = {
    [sym__line_break] = ACTIONS(77),
  },
  [18] = {
    [anon_sym_p] = ACTIONS(79),
    [anon_sym_a] = ACTIONS(79),
    [anon_sym_r] = ACTIONS(79),
    [anon_sym_s] = ACTIONS(79),
    [anon_sym_e] = ACTIONS(79),
  },
  [19] = {
    [sym__line_break] = ACTIONS(81),
  },
  [20] = {
    [sym_coordinate] = ACTIONS(83),
  },
  [21] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(85),
  },
  [22] = {
    [sym_coordinate] = ACTIONS(87),
  },
  [23] = {
    [sym__coordinate3] = STATE(49),
    [sym_coordinate] = ACTIONS(89),
  },
  [24] = {
    [sym__line_break] = ACTIONS(91),
  },
  [25] = {
    [sym__line_break] = ACTIONS(93),
  },
  [26] = {
    [anon_sym_entity] = ACTIONS(95),
    [anon_sym_block] = ACTIONS(97),
  },
  [27] = {
    [anon_sym_entity] = ACTIONS(99),
    [anon_sym_block] = ACTIONS(101),
  },
  [28] = {
    [anon_sym_entity] = ACTIONS(103),
    [anon_sym_block] = ACTIONS(105),
  },
  [29] = {
    [anon_sym_entity] = ACTIONS(107),
    [anon_sym_block] = ACTIONS(109),
  },
  [30] = {
    [sym__line_break] = ACTIONS(111),
  },
  [31] = {
    [sym__line_break] = ACTIONS(113),
  },
  [32] = {
    [sym_function_name] = ACTIONS(115),
  },
  [33] = {
    [anon_sym_remove] = ACTIONS(117),
    [anon_sym_modify] = ACTIONS(119),
    [anon_sym_add] = ACTIONS(121),
    [anon_sym_list] = ACTIONS(123),
    [anon_sym_setdisplay] = ACTIONS(125),
  },
  [34] = {
    [anon_sym_get] = ACTIONS(127),
    [anon_sym_remove] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(129),
    [anon_sym_add] = ACTIONS(129),
    [anon_sym_list] = ACTIONS(131),
    [anon_sym_enable] = ACTIONS(127),
    [anon_sym_operation] = ACTIONS(133),
    [anon_sym_reset] = ACTIONS(135),
  },
  [35] = {
    [sym__line_break] = ACTIONS(137),
  },
  [36] = {
    [sym_team] = STATE(70),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(139),
  },
  [37] = {
    [sym_team] = STATE(72),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(141),
  },
  [38] = {
    [sym_team] = STATE(70),
    [sym__line_break] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(145),
  },
  [39] = {
    [sym_team] = STATE(73),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(141),
  },
  [40] = {
    [sym_selector] = STATE(70),
    [anon_sym_AT] = ACTIONS(31),
  },
  [41] = {
    [anon_sym_p] = ACTIONS(147),
    [anon_sym_a] = ACTIONS(147),
    [anon_sym_r] = ACTIONS(147),
    [anon_sym_s] = ACTIONS(147),
    [anon_sym_e] = ACTIONS(147),
  },
  [42] = {
    [anon_sym_remove] = ACTIONS(149),
    [anon_sym_add] = ACTIONS(149),
    [anon_sym_list] = ACTIONS(151),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_teleport] = ACTIONS(153),
    [anon_sym_tp] = ACTIONS(153),
    [anon_sym_setblock] = ACTIONS(153),
    [anon_sym_summon] = ACTIONS(153),
    [anon_sym_say] = ACTIONS(153),
    [anon_sym_data] = ACTIONS(153),
    [anon_sym_function] = ACTIONS(153),
    [anon_sym_schedule] = ACTIONS(153),
    [anon_sym_scoreboard] = ACTIONS(153),
    [anon_sym_team] = ACTIONS(153),
    [anon_sym_tag] = ACTIONS(153),
  },
  [44] = {
    [sym_comment] = STATE(14),
    [sym_command] = STATE(14),
    [sym__teleport_command] = STATE(15),
    [sym__setblock_command] = STATE(15),
    [sym__summon_command] = STATE(15),
    [sym__say_command] = STATE(15),
    [sym__data_command] = STATE(15),
    [sym__function_command] = STATE(15),
    [sym__schedule_command] = STATE(15),
    [sym__scoreboard_command] = STATE(15),
    [sym__team_command] = STATE(15),
    [sym__tag_command] = STATE(15),
    [aux_sym_function_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(155),
    [anon_sym_teleport] = ACTIONS(158),
    [anon_sym_tp] = ACTIONS(158),
    [anon_sym_setblock] = ACTIONS(161),
    [anon_sym_summon] = ACTIONS(164),
    [anon_sym_say] = ACTIONS(167),
    [anon_sym_data] = ACTIONS(170),
    [anon_sym_function] = ACTIONS(173),
    [anon_sym_schedule] = ACTIONS(176),
    [anon_sym_scoreboard] = ACTIONS(179),
    [anon_sym_team] = ACTIONS(182),
    [anon_sym_tag] = ACTIONS(185),
  },
  [45] = {
    [sym__line_break] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(192),
  },
  [46] = {
    [sym_coordinate] = ACTIONS(194),
  },
  [47] = {
    [sym_coordinate] = ACTIONS(196),
  },
  [48] = {
    [sym_coordinate] = ACTIONS(198),
  },
  [49] = {
    [sym_nbt_compound] = STATE(81),
    [sym__line_break] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(202),
  },
  [50] = {
    [sym_selector] = STATE(82),
    [anon_sym_AT] = ACTIONS(67),
  },
  [51] = {
    [sym__coordinate3] = STATE(82),
    [sym_coordinate] = ACTIONS(204),
  },
  [52] = {
    [sym_selector] = STATE(85),
    [anon_sym_AT] = ACTIONS(206),
  },
  [53] = {
    [sym__coordinate3] = STATE(85),
    [sym_coordinate] = ACTIONS(208),
  },
  [54] = {
    [sym_selector] = STATE(88),
    [anon_sym_AT] = ACTIONS(210),
  },
  [55] = {
    [sym__coordinate3] = STATE(88),
    [sym_coordinate] = ACTIONS(212),
  },
  [56] = {
    [sym_selector] = STATE(90),
    [anon_sym_AT] = ACTIONS(210),
  },
  [57] = {
    [sym__coordinate3] = STATE(90),
    [sym_coordinate] = ACTIONS(212),
  },
  [58] = {
    [sym_time] = ACTIONS(214),
  },
  [59] = {
    [sym_objective] = STATE(93),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(216),
  },
  [60] = {
    [sym_objective] = STATE(95),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(218),
  },
  [61] = {
    [sym_objective] = STATE(97),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(220),
  },
  [62] = {
    [sym__line_break] = ACTIONS(222),
  },
  [63] = {
    [anon_sym_list] = ACTIONS(224),
    [anon_sym_belowName] = ACTIONS(224),
    [anon_sym_sidebar] = ACTIONS(226),
    [anon_sym_sidebar_DOTteam_DOTaqua] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTblack] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTblue] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTdark_aqua] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTdark_blue] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTdark_gray] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTdark_green] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTdark_purple] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTdark_red] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTgold] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTgray] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTgreen] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTlight_purple] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTred] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTwhite] = ACTIONS(224),
    [anon_sym_sidebar_DOTteam_DOTyellow] = ACTIONS(224),
  },
  [64] = {
    [sym_selector] = STATE(100),
    [anon_sym_AT] = ACTIONS(228),
  },
  [65] = {
    [sym_selector] = STATE(101),
    [anon_sym_AT] = ACTIONS(228),
  },
  [66] = {
    [sym_selector] = STATE(102),
    [anon_sym_AT] = ACTIONS(31),
  },
  [67] = {
    [sym_selector] = STATE(103),
    [anon_sym_AT] = ACTIONS(228),
  },
  [68] = {
    [sym_selector] = STATE(104),
    [anon_sym_AT] = ACTIONS(31),
  },
  [69] = {
    [sym__line_break] = ACTIONS(230),
  },
  [70] = {
    [sym__line_break] = ACTIONS(232),
  },
  [71] = {
    [anon_sym_AT] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(230),
  },
  [72] = {
    [sym_team_option] = STATE(106),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(234),
  },
  [73] = {
    [sym_selector] = STATE(107),
    [anon_sym_AT] = ACTIONS(31),
  },
  [74] = {
    [anon_sym_remove] = ACTIONS(188),
    [anon_sym_add] = ACTIONS(188),
    [anon_sym_list] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(188),
  },
  [75] = {
    [sym_tag] = ACTIONS(238),
  },
  [76] = {
    [sym__line_break] = ACTIONS(240),
  },
  [77] = {
    [sym__selector_argument] = STATE(111),
    [sym_selector_key] = STATE(112),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(242),
  },
  [78] = {
    [sym_block] = STATE(116),
    [sym_block_type] = STATE(117),
    [anon_sym_POUND] = ACTIONS(244),
    [anon_sym_minecraft_COLON] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(248),
  },
  [79] = {
    [sym_coordinate] = ACTIONS(250),
  },
  [80] = {
    [sym__nbt_pair] = STATE(121),
    [anon_sym_RBRACE] = ACTIONS(252),
    [sym_nbt_key] = ACTIONS(254),
  },
  [81] = {
    [sym__line_break] = ACTIONS(256),
  },
  [82] = {
    [sym_nbt_compound] = STATE(122),
    [anon_sym_LBRACE] = ACTIONS(258),
  },
  [83] = {
    [sym_coordinate] = ACTIONS(260),
  },
  [84] = {
    [anon_sym_p] = ACTIONS(262),
    [anon_sym_a] = ACTIONS(262),
    [anon_sym_r] = ACTIONS(262),
    [anon_sym_s] = ACTIONS(262),
    [anon_sym_e] = ACTIONS(262),
  },
  [85] = {
    [sym__line_break] = ACTIONS(264),
    [sym_nbt_path] = ACTIONS(266),
  },
  [86] = {
    [sym_coordinate] = ACTIONS(268),
  },
  [87] = {
    [anon_sym_p] = ACTIONS(270),
    [anon_sym_a] = ACTIONS(270),
    [anon_sym_r] = ACTIONS(270),
    [anon_sym_s] = ACTIONS(270),
    [anon_sym_e] = ACTIONS(270),
  },
  [88] = {
    [sym_nbt_path] = ACTIONS(272),
  },
  [89] = {
    [sym_coordinate] = ACTIONS(274),
  },
  [90] = {
    [sym_nbt_path] = ACTIONS(276),
  },
  [91] = {
    [sym__line_break] = ACTIONS(278),
  },
  [92] = {
    [sym__line_break] = ACTIONS(280),
  },
  [93] = {
    [sym__line_break] = ACTIONS(282),
  },
  [94] = {
    [anon_sym_displayname] = ACTIONS(280),
    [anon_sym_rendertype] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(280),
    [sym_integer] = ACTIONS(280),
    [anon_sym_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_STAR_EQ] = ACTIONS(280),
    [anon_sym_PLUS_EQ] = ACTIONS(280),
    [anon_sym_DASH_EQ] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_GT_LT] = ACTIONS(280),
  },
  [95] = {
    [anon_sym_displayname] = ACTIONS(284),
    [anon_sym_rendertype] = ACTIONS(286),
  },
  [96] = {
    [sym_scoreboard_criteria] = ACTIONS(280),
  },
  [97] = {
    [sym_scoreboard_criteria] = ACTIONS(284),
  },
  [98] = {
    [sym_objective] = STATE(131),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(216),
  },
  [99] = {
    [anon_sym_p] = ACTIONS(288),
    [anon_sym_a] = ACTIONS(288),
    [anon_sym_r] = ACTIONS(288),
    [anon_sym_s] = ACTIONS(288),
    [anon_sym_e] = ACTIONS(288),
  },
  [100] = {
    [sym_objective] = STATE(134),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(216),
  },
  [101] = {
    [sym_objective] = STATE(135),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(218),
  },
  [102] = {
    [sym__line_break] = ACTIONS(290),
  },
  [103] = {
    [sym_objective] = STATE(136),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(218),
  },
  [104] = {
    [sym_objective] = STATE(134),
    [sym__line_break] = ACTIONS(290),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(292),
  },
  [105] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(294),
  },
  [106] = {
    [sym_team_option_value] = STATE(138),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(296),
  },
  [107] = {
    [sym__line_break] = ACTIONS(298),
  },
  [108] = {
    [sym__selector_argument] = STATE(139),
    [sym_selector_key] = STATE(112),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(242),
  },
  [109] = {
    [sym__line_break] = ACTIONS(300),
  },
  [110] = {
    [anon_sym_EQ] = ACTIONS(302),
  },
  [111] = {
    [aux_sym_selector_repeat1] = STATE(142),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(306),
  },
  [112] = {
    [anon_sym_EQ] = ACTIONS(308),
  },
  [113] = {
    [sym_block_type] = STATE(144),
    [anon_sym_minecraft_COLON] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(248),
  },
  [114] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(310),
  },
  [115] = {
    [sym__line_break] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_LBRACE] = ACTIONS(314),
  },
  [116] = {
    [sym__line_break] = ACTIONS(316),
  },
  [117] = {
    [sym_block_state] = STATE(147),
    [sym_nbt_compound] = STATE(148),
    [sym__line_break] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(202),
  },
  [118] = {
    [sym__line_break] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(324),
  },
  [119] = {
    [sym__line_break] = ACTIONS(326),
  },
  [120] = {
    [anon_sym_COLON] = ACTIONS(328),
  },
  [121] = {
    [aux_sym_nbt_compound_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(332),
  },
  [122] = {
    [sym__line_break] = ACTIONS(334),
  },
  [123] = {
    [sym_coordinate] = ACTIONS(336),
  },
  [124] = {
    [sym__line_break] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(338),
    [sym_nbt_path] = ACTIONS(192),
  },
  [125] = {
    [sym__line_break] = ACTIONS(340),
  },
  [126] = {
    [sym_coordinate] = ACTIONS(342),
  },
  [127] = {
    [anon_sym_LBRACK] = ACTIONS(344),
    [sym_nbt_path] = ACTIONS(192),
  },
  [128] = {
    [sym__line_break] = ACTIONS(346),
  },
  [129] = {
    [sym_coordinate] = ACTIONS(348),
  },
  [130] = {
    [anon_sym_merge] = ACTIONS(350),
    [anon_sym_set] = ACTIONS(350),
    [anon_sym_append] = ACTIONS(350),
    [anon_sym_prepend] = ACTIONS(350),
    [anon_sym_insert] = ACTIONS(352),
  },
  [131] = {
    [sym__line_break] = ACTIONS(354),
  },
  [132] = {
    [anon_sym_hearts] = ACTIONS(356),
    [anon_sym_integer] = ACTIONS(356),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(358),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(188),
  },
  [134] = {
    [sym__line_break] = ACTIONS(360),
  },
  [135] = {
    [sym_integer] = ACTIONS(362),
  },
  [136] = {
    [sym_scoreboard_operation] = STATE(164),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_PERCENT_EQ] = ACTIONS(364),
    [anon_sym_STAR_EQ] = ACTIONS(364),
    [anon_sym_PLUS_EQ] = ACTIONS(364),
    [anon_sym_DASH_EQ] = ACTIONS(364),
    [anon_sym_SLASH_EQ] = ACTIONS(364),
    [anon_sym_LT_EQ] = ACTIONS(364),
    [anon_sym_GT_EQ] = ACTIONS(364),
    [anon_sym_GT_LT] = ACTIONS(364),
  },
  [137] = {
    [sym__line_break] = ACTIONS(366),
  },
  [138] = {
    [sym__line_break] = ACTIONS(368),
  },
  [139] = {
    [aux_sym_selector_repeat1] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(370),
  },
  [140] = {
    [sym__selector_argument] = STATE(167),
    [sym_selector_key] = STATE(112),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(242),
  },
  [141] = {
    [sym__line_break] = ACTIONS(372),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(374),
  },
  [142] = {
    [aux_sym_selector_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(376),
  },
  [143] = {
    [sym_selector_value] = STATE(171),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(378),
  },
  [144] = {
    [sym_block_state] = STATE(172),
    [sym_nbt_compound] = STATE(173),
    [sym__line_break] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(202),
  },
  [145] = {
    [sym__line_break] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(384),
  },
  [146] = {
    [sym__block_state_argument] = STATE(175),
    [sym_block_state_key] = STATE(176),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(386),
  },
  [147] = {
    [sym_nbt_compound] = STATE(173),
    [sym__line_break] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(202),
  },
  [148] = {
    [sym__line_break] = ACTIONS(380),
  },
  [149] = {
    [sym_nbt_compound] = STATE(181),
    [sym_nbt_array] = STATE(181),
    [sym__nbt_value] = STATE(181),
    [sym_nbt_string] = STATE(181),
    [sym__quoted_string] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(390),
    [sym_nbt_number] = ACTIONS(392),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_SQUOTE] = ACTIONS(396),
  },
  [150] = {
    [sym__nbt_pair] = STATE(183),
    [sym_nbt_key] = ACTIONS(254),
  },
  [151] = {
    [sym__line_break] = ACTIONS(398),
  },
  [152] = {
    [aux_sym_nbt_compound_repeat1] = STATE(185),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(400),
  },
  [153] = {
    [anon_sym_LBRACE] = ACTIONS(322),
  },
  [154] = {
    [sym__selector_argument] = STATE(186),
    [sym_selector_key] = STATE(112),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(242),
  },
  [155] = {
    [sym__line_break] = ACTIONS(324),
    [sym_nbt_path] = ACTIONS(324),
  },
  [156] = {
    [sym__selector_argument] = STATE(187),
    [sym_selector_key] = STATE(112),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(242),
  },
  [157] = {
    [sym_nbt_path] = ACTIONS(322),
  },
  [158] = {
    [sym__data_modify_value_command] = STATE(190),
    [sym__data_modify_from_command] = STATE(190),
    [anon_sym_value] = ACTIONS(402),
    [anon_sym_from] = ACTIONS(404),
  },
  [159] = {
    [sym_integer] = ACTIONS(406),
  },
  [160] = {
    [sym__line_break] = ACTIONS(408),
  },
  [161] = {
    [sym__selector_argument] = STATE(192),
    [sym_selector_key] = STATE(112),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(242),
  },
  [162] = {
    [sym__line_break] = ACTIONS(410),
  },
  [163] = {
    [anon_sym_AT] = ACTIONS(412),
  },
  [164] = {
    [sym_selector] = STATE(193),
    [anon_sym_AT] = ACTIONS(228),
  },
  [165] = {
    [anon_sym_remove] = ACTIONS(372),
    [anon_sym_add] = ACTIONS(372),
    [anon_sym_list] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
  },
  [166] = {
    [aux_sym_selector_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(414),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(416),
  },
  [168] = {
    [sym__line_break] = ACTIONS(418),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(420),
  },
  [169] = {
    [aux_sym_selector_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_RBRACK] = ACTIONS(416),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
  },
  [172] = {
    [sym_nbt_compound] = STATE(195),
    [sym__line_break] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(202),
  },
  [173] = {
    [sym__line_break] = ACTIONS(429),
  },
  [174] = {
    [anon_sym_EQ] = ACTIONS(431),
  },
  [175] = {
    [aux_sym_block_state_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(435),
  },
  [176] = {
    [anon_sym_EQ] = ACTIONS(437),
  },
  [177] = {
    [sym_nbt_compound] = STATE(201),
    [sym_nbt_array] = STATE(201),
    [sym__nbt_value] = STATE(201),
    [sym_nbt_string] = STATE(201),
    [sym__quoted_string] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(390),
    [sym_nbt_number] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_SQUOTE] = ACTIONS(396),
  },
  [178] = {
    [sym__nbt_pair] = STATE(203),
    [anon_sym_RBRACE] = ACTIONS(443),
    [sym_nbt_key] = ACTIONS(254),
  },
  [179] = {
    [aux_sym__quoted_string_repeat1] = STATE(205),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(447),
    [sym_escape_sequence] = ACTIONS(447),
  },
  [180] = {
    [aux_sym__quoted_string_repeat2] = STATE(206),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(449),
    [sym_escape_sequence] = ACTIONS(449),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(451),
  },
  [182] = {
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
  },
  [183] = {
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(455),
  },
  [184] = {
    [sym__line_break] = ACTIONS(457),
  },
  [185] = {
    [aux_sym_nbt_compound_repeat1] = STATE(185),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(455),
  },
  [186] = {
    [aux_sym_selector_repeat1] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(462),
  },
  [187] = {
    [aux_sym_selector_repeat1] = STATE(210),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(464),
  },
  [188] = {
    [sym_nbt_compound] = STATE(214),
    [sym_nbt_array] = STATE(214),
    [sym__nbt_value] = STATE(214),
    [sym_nbt_string] = STATE(214),
    [sym__quoted_string] = STATE(215),
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(258),
    [sym_nbt_number] = ACTIONS(468),
    [anon_sym_DQUOTE] = ACTIONS(470),
    [anon_sym_SQUOTE] = ACTIONS(472),
  },
  [189] = {
    [anon_sym_entity] = ACTIONS(474),
    [anon_sym_block] = ACTIONS(476),
  },
  [190] = {
    [sym__line_break] = ACTIONS(478),
  },
  [191] = {
    [sym__data_modify_value_command] = STATE(218),
    [sym__data_modify_from_command] = STATE(218),
    [anon_sym_value] = ACTIONS(402),
    [anon_sym_from] = ACTIONS(404),
  },
  [192] = {
    [aux_sym_selector_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(480),
  },
  [193] = {
    [sym_objective] = STATE(221),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(216),
  },
  [194] = {
    [anon_sym_remove] = ACTIONS(418),
    [anon_sym_add] = ACTIONS(418),
    [anon_sym_list] = ACTIONS(418),
    [anon_sym_LBRACE] = ACTIONS(418),
  },
  [195] = {
    [sym__line_break] = ACTIONS(482),
  },
  [196] = {
    [sym__block_state_argument] = STATE(222),
    [sym_block_state_key] = STATE(176),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(386),
  },
  [197] = {
    [sym__line_break] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
  },
  [198] = {
    [aux_sym_block_state_repeat1] = STATE(224),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(488),
  },
  [199] = {
    [sym_block_state_value] = ACTIONS(490),
  },
  [200] = {
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_RBRACK] = ACTIONS(492),
    [anon_sym_RBRACE] = ACTIONS(492),
  },
  [201] = {
    [aux_sym_nbt_array_repeat1] = STATE(228),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(496),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
  },
  [203] = {
    [aux_sym_nbt_compound_repeat1] = STATE(230),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(498),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_RBRACK] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
  },
  [205] = {
    [aux_sym__quoted_string_repeat1] = STATE(232),
    [anon_sym_DQUOTE] = ACTIONS(502),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(504),
    [sym_escape_sequence] = ACTIONS(504),
  },
  [206] = {
    [aux_sym__quoted_string_repeat2] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(502),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(506),
    [sym_escape_sequence] = ACTIONS(506),
  },
  [207] = {
    [sym__line_break] = ACTIONS(374),
    [sym_nbt_path] = ACTIONS(374),
  },
  [208] = {
    [aux_sym_selector_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(508),
  },
  [209] = {
    [sym_nbt_path] = ACTIONS(372),
  },
  [210] = {
    [aux_sym_selector_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(510),
  },
  [211] = {
    [sym_nbt_compound] = STATE(237),
    [sym_nbt_array] = STATE(237),
    [sym__nbt_value] = STATE(237),
    [sym_nbt_string] = STATE(237),
    [sym__quoted_string] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(512),
    [anon_sym_LBRACE] = ACTIONS(390),
    [sym_nbt_number] = ACTIONS(514),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_SQUOTE] = ACTIONS(396),
  },
  [212] = {
    [aux_sym__quoted_string_repeat1] = STATE(239),
    [anon_sym_DQUOTE] = ACTIONS(516),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(518),
    [sym_escape_sequence] = ACTIONS(518),
  },
  [213] = {
    [aux_sym__quoted_string_repeat2] = STATE(240),
    [anon_sym_SQUOTE] = ACTIONS(516),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(520),
    [sym_escape_sequence] = ACTIONS(520),
  },
  [214] = {
    [sym__line_break] = ACTIONS(522),
  },
  [215] = {
    [sym__line_break] = ACTIONS(453),
  },
  [216] = {
    [sym_selector] = STATE(241),
    [anon_sym_AT] = ACTIONS(210),
  },
  [217] = {
    [sym__coordinate3] = STATE(241),
    [sym_coordinate] = ACTIONS(212),
  },
  [218] = {
    [sym__line_break] = ACTIONS(524),
  },
  [219] = {
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(372),
  },
  [220] = {
    [aux_sym_selector_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(526),
  },
  [221] = {
    [sym__line_break] = ACTIONS(528),
  },
  [222] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RBRACK] = ACTIONS(530),
  },
  [223] = {
    [sym__line_break] = ACTIONS(532),
    [anon_sym_LBRACE] = ACTIONS(534),
  },
  [224] = {
    [aux_sym_block_state_repeat1] = STATE(224),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(530),
  },
  [225] = {
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(539),
  },
  [226] = {
    [sym_nbt_compound] = STATE(243),
    [sym_nbt_array] = STATE(243),
    [sym__nbt_value] = STATE(243),
    [sym_nbt_string] = STATE(243),
    [sym__quoted_string] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(390),
    [sym_nbt_number] = ACTIONS(541),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_SQUOTE] = ACTIONS(396),
  },
  [227] = {
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
  },
  [228] = {
    [aux_sym_nbt_array_repeat1] = STATE(245),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(545),
  },
  [229] = {
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(398),
    [anon_sym_RBRACE] = ACTIONS(398),
  },
  [230] = {
    [aux_sym_nbt_compound_repeat1] = STATE(185),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(547),
  },
  [231] = {
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
  },
  [232] = {
    [aux_sym__quoted_string_repeat1] = STATE(232),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(553),
    [sym_escape_sequence] = ACTIONS(553),
  },
  [233] = {
    [aux_sym__quoted_string_repeat2] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(558),
    [sym_escape_sequence] = ACTIONS(558),
  },
  [234] = {
    [sym__line_break] = ACTIONS(420),
    [sym_nbt_path] = ACTIONS(420),
  },
  [235] = {
    [sym_nbt_path] = ACTIONS(418),
  },
  [236] = {
    [sym__line_break] = ACTIONS(492),
  },
  [237] = {
    [aux_sym_nbt_array_repeat1] = STATE(248),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(561),
  },
  [238] = {
    [sym__line_break] = ACTIONS(500),
  },
  [239] = {
    [aux_sym__quoted_string_repeat1] = STATE(232),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(504),
    [sym_escape_sequence] = ACTIONS(504),
  },
  [240] = {
    [aux_sym__quoted_string_repeat2] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(506),
    [sym_escape_sequence] = ACTIONS(506),
  },
  [241] = {
    [sym_nbt_path] = ACTIONS(565),
  },
  [242] = {
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(418),
  },
  [243] = {
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(567),
  },
  [244] = {
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(569),
  },
  [245] = {
    [aux_sym_nbt_array_repeat1] = STATE(245),
    [anon_sym_COMMA] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(567),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(457),
  },
  [247] = {
    [sym__line_break] = ACTIONS(543),
  },
  [248] = {
    [aux_sym_nbt_array_repeat1] = STATE(245),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(574),
  },
  [249] = {
    [sym__line_break] = ACTIONS(549),
  },
  [250] = {
    [sym__line_break] = ACTIONS(576),
  },
  [251] = {
    [sym__line_break] = ACTIONS(569),
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
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = false}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, SHIFT(24),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, SHIFT(27),
  [45] = {.count = 1, .reusable = true}, SHIFT(28),
  [47] = {.count = 1, .reusable = true}, SHIFT(29),
  [49] = {.count = 1, .reusable = true}, SHIFT(31),
  [51] = {.count = 1, .reusable = true}, SHIFT(32),
  [53] = {.count = 1, .reusable = true}, SHIFT(33),
  [55] = {.count = 1, .reusable = true}, SHIFT(34),
  [57] = {.count = 1, .reusable = true}, SHIFT(36),
  [59] = {.count = 1, .reusable = true}, SHIFT(37),
  [61] = {.count = 1, .reusable = true}, SHIFT(38),
  [63] = {.count = 1, .reusable = true}, SHIFT(39),
  [65] = {.count = 1, .reusable = true}, SHIFT(40),
  [67] = {.count = 1, .reusable = true}, SHIFT(41),
  [69] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [71] = {.count = 1, .reusable = true}, SHIFT(43),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [79] = {.count = 1, .reusable = true}, SHIFT(45),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__teleport_command, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(46),
  [85] = {.count = 1, .reusable = true}, SHIFT(47),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(48),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_message, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym__say_command, 2),
  [95] = {.count = 1, .reusable = true}, SHIFT(50),
  [97] = {.count = 1, .reusable = true}, SHIFT(51),
  [99] = {.count = 1, .reusable = true}, SHIFT(52),
  [101] = {.count = 1, .reusable = true}, SHIFT(53),
  [103] = {.count = 1, .reusable = true}, SHIFT(54),
  [105] = {.count = 1, .reusable = true}, SHIFT(55),
  [107] = {.count = 1, .reusable = true}, SHIFT(56),
  [109] = {.count = 1, .reusable = true}, SHIFT(57),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__data_command, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__function_command, 2),
  [115] = {.count = 1, .reusable = true}, SHIFT(58),
  [117] = {.count = 1, .reusable = true}, SHIFT(59),
  [119] = {.count = 1, .reusable = true}, SHIFT(60),
  [121] = {.count = 1, .reusable = true}, SHIFT(61),
  [123] = {.count = 1, .reusable = true}, SHIFT(62),
  [125] = {.count = 1, .reusable = true}, SHIFT(63),
  [127] = {.count = 1, .reusable = true}, SHIFT(64),
  [129] = {.count = 1, .reusable = true}, SHIFT(65),
  [131] = {.count = 1, .reusable = true}, SHIFT(66),
  [133] = {.count = 1, .reusable = true}, SHIFT(67),
  [135] = {.count = 1, .reusable = true}, SHIFT(68),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_command, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(69),
  [141] = {.count = 1, .reusable = true}, SHIFT(71),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 2),
  [145] = {.count = 1, .reusable = false}, SHIFT(69),
  [147] = {.count = 1, .reusable = true}, SHIFT(74),
  [149] = {.count = 1, .reusable = true}, SHIFT(75),
  [151] = {.count = 1, .reusable = true}, SHIFT(76),
  [153] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [190] = {.count = 1, .reusable = false}, SHIFT(77),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [194] = {.count = 1, .reusable = true}, SHIFT(78),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 2),
  [198] = {.count = 1, .reusable = true}, SHIFT(79),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 3),
  [202] = {.count = 1, .reusable = false}, SHIFT(80),
  [204] = {.count = 1, .reusable = true}, SHIFT(83),
  [206] = {.count = 1, .reusable = true}, SHIFT(84),
  [208] = {.count = 1, .reusable = true}, SHIFT(86),
  [210] = {.count = 1, .reusable = true}, SHIFT(87),
  [212] = {.count = 1, .reusable = true}, SHIFT(89),
  [214] = {.count = 1, .reusable = true}, SHIFT(91),
  [216] = {.count = 1, .reusable = true}, SHIFT(92),
  [218] = {.count = 1, .reusable = true}, SHIFT(94),
  [220] = {.count = 1, .reusable = true}, SHIFT(96),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 2),
  [224] = {.count = 1, .reusable = true}, SHIFT(98),
  [226] = {.count = 1, .reusable = false}, SHIFT(98),
  [228] = {.count = 1, .reusable = true}, SHIFT(99),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_team, 1),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 3),
  [234] = {.count = 1, .reusable = true}, SHIFT(105),
  [236] = {.count = 1, .reusable = true}, SHIFT(108),
  [238] = {.count = 1, .reusable = true}, SHIFT(109),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__tag_command, 3),
  [242] = {.count = 1, .reusable = true}, SHIFT(110),
  [244] = {.count = 1, .reusable = true}, SHIFT(113),
  [246] = {.count = 1, .reusable = true}, SHIFT(114),
  [248] = {.count = 1, .reusable = false}, SHIFT(115),
  [250] = {.count = 1, .reusable = true}, SHIFT(118),
  [252] = {.count = 1, .reusable = true}, SHIFT(119),
  [254] = {.count = 1, .reusable = true}, SHIFT(120),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 4),
  [258] = {.count = 1, .reusable = true}, SHIFT(80),
  [260] = {.count = 1, .reusable = true}, SHIFT(123),
  [262] = {.count = 1, .reusable = true}, SHIFT(124),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym__data_get_command, 3),
  [266] = {.count = 1, .reusable = false}, SHIFT(125),
  [268] = {.count = 1, .reusable = true}, SHIFT(126),
  [270] = {.count = 1, .reusable = true}, SHIFT(127),
  [272] = {.count = 1, .reusable = true}, SHIFT(128),
  [274] = {.count = 1, .reusable = true}, SHIFT(129),
  [276] = {.count = 1, .reusable = true}, SHIFT(130),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym__schedule_command, 4),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_objective, 1),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 3),
  [284] = {.count = 1, .reusable = true}, SHIFT(131),
  [286] = {.count = 1, .reusable = true}, SHIFT(132),
  [288] = {.count = 1, .reusable = true}, SHIFT(133),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 3),
  [292] = {.count = 1, .reusable = false}, SHIFT(92),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_team_option, 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(137),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 4),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__tag_command, 4),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_selector_key, 1),
  [304] = {.count = 1, .reusable = true}, SHIFT(140),
  [306] = {.count = 1, .reusable = true}, SHIFT(141),
  [308] = {.count = 1, .reusable = true}, SHIFT(143),
  [310] = {.count = 1, .reusable = true}, SHIFT(145),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 1),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 1),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym__setblock_command, 5),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [320] = {.count = 1, .reusable = false}, SHIFT(146),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym__coordinate3, 3),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym__coordinate3, 3),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 2),
  [328] = {.count = 1, .reusable = true}, SHIFT(149),
  [330] = {.count = 1, .reusable = true}, SHIFT(150),
  [332] = {.count = 1, .reusable = true}, SHIFT(151),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__data_merge_command, 4),
  [336] = {.count = 1, .reusable = true}, SHIFT(153),
  [338] = {.count = 1, .reusable = false}, SHIFT(154),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym__data_get_command, 4),
  [342] = {.count = 1, .reusable = true}, SHIFT(155),
  [344] = {.count = 1, .reusable = false}, SHIFT(156),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym__data_remove_command, 4),
  [348] = {.count = 1, .reusable = true}, SHIFT(157),
  [350] = {.count = 1, .reusable = true}, SHIFT(158),
  [352] = {.count = 1, .reusable = true}, SHIFT(159),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 4),
  [356] = {.count = 1, .reusable = true}, SHIFT(160),
  [358] = {.count = 1, .reusable = true}, SHIFT(161),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 4),
  [362] = {.count = 1, .reusable = true}, SHIFT(162),
  [364] = {.count = 1, .reusable = true}, SHIFT(163),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_team_option_value, 1),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 5),
  [370] = {.count = 1, .reusable = true}, SHIFT(165),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 5),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 5),
  [376] = {.count = 1, .reusable = true}, SHIFT(168),
  [378] = {.count = 1, .reusable = true}, SHIFT(170),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 2),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 2),
  [386] = {.count = 1, .reusable = true}, SHIFT(174),
  [388] = {.count = 1, .reusable = true}, SHIFT(177),
  [390] = {.count = 1, .reusable = true}, SHIFT(178),
  [392] = {.count = 1, .reusable = true}, SHIFT(181),
  [394] = {.count = 1, .reusable = true}, SHIFT(179),
  [396] = {.count = 1, .reusable = true}, SHIFT(180),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 3),
  [400] = {.count = 1, .reusable = true}, SHIFT(184),
  [402] = {.count = 1, .reusable = true}, SHIFT(188),
  [404] = {.count = 1, .reusable = true}, SHIFT(189),
  [406] = {.count = 1, .reusable = true}, SHIFT(191),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 5),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 5),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_scoreboard_operation, 1),
  [414] = {.count = 1, .reusable = true}, SHIFT(194),
  [416] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 6),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 6),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(140),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_selector_value, 1),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym__selector_argument, 3),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_block_state_key, 1),
  [433] = {.count = 1, .reusable = true}, SHIFT(196),
  [435] = {.count = 1, .reusable = true}, SHIFT(197),
  [437] = {.count = 1, .reusable = true}, SHIFT(199),
  [439] = {.count = 1, .reusable = true}, SHIFT(200),
  [441] = {.count = 1, .reusable = true}, SHIFT(201),
  [443] = {.count = 1, .reusable = true}, SHIFT(202),
  [445] = {.count = 1, .reusable = false}, SHIFT(204),
  [447] = {.count = 1, .reusable = true}, SHIFT(205),
  [449] = {.count = 1, .reusable = true}, SHIFT(206),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym__nbt_pair, 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_string, 1),
  [455] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 4),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2), SHIFT_REPEAT(150),
  [462] = {.count = 1, .reusable = true}, SHIFT(207),
  [464] = {.count = 1, .reusable = true}, SHIFT(209),
  [466] = {.count = 1, .reusable = true}, SHIFT(211),
  [468] = {.count = 1, .reusable = true}, SHIFT(214),
  [470] = {.count = 1, .reusable = true}, SHIFT(212),
  [472] = {.count = 1, .reusable = true}, SHIFT(213),
  [474] = {.count = 1, .reusable = true}, SHIFT(216),
  [476] = {.count = 1, .reusable = true}, SHIFT(217),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 6),
  [480] = {.count = 1, .reusable = true}, SHIFT(219),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 3),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 3),
  [488] = {.count = 1, .reusable = true}, SHIFT(223),
  [490] = {.count = 1, .reusable = true}, SHIFT(225),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 2),
  [494] = {.count = 1, .reusable = true}, SHIFT(226),
  [496] = {.count = 1, .reusable = true}, SHIFT(227),
  [498] = {.count = 1, .reusable = true}, SHIFT(229),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 2),
  [502] = {.count = 1, .reusable = false}, SHIFT(231),
  [504] = {.count = 1, .reusable = true}, SHIFT(232),
  [506] = {.count = 1, .reusable = true}, SHIFT(233),
  [508] = {.count = 1, .reusable = true}, SHIFT(234),
  [510] = {.count = 1, .reusable = true}, SHIFT(235),
  [512] = {.count = 1, .reusable = true}, SHIFT(236),
  [514] = {.count = 1, .reusable = true}, SHIFT(237),
  [516] = {.count = 1, .reusable = false}, SHIFT(238),
  [518] = {.count = 1, .reusable = true}, SHIFT(239),
  [520] = {.count = 1, .reusable = true}, SHIFT(240),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_value_command, 2),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 7),
  [526] = {.count = 1, .reusable = true}, SHIFT(242),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 7),
  [530] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 4),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 4),
  [536] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2), SHIFT_REPEAT(196),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym__block_state_argument, 3),
  [541] = {.count = 1, .reusable = true}, SHIFT(243),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 3),
  [545] = {.count = 1, .reusable = true}, SHIFT(244),
  [547] = {.count = 1, .reusable = true}, SHIFT(246),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [551] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(232),
  [556] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat2, 2),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat2, 2), SHIFT_REPEAT(233),
  [561] = {.count = 1, .reusable = true}, SHIFT(247),
  [563] = {.count = 1, .reusable = false}, SHIFT(249),
  [565] = {.count = 1, .reusable = true}, SHIFT(250),
  [567] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 4),
  [571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(226),
  [574] = {.count = 1, .reusable = true}, SHIFT(251),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_from_command, 4),
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
