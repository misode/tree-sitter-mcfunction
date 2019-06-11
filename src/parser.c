#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 346
#define SYMBOL_COUNT 215
#define ALIAS_COUNT 0
#define TOKEN_COUNT 142
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
  anon_sym_execute = 60,
  anon_sym_run = 61,
  anon_sym_as = 62,
  anon_sym_at = 63,
  anon_sym_if = 64,
  anon_sym_unless = 65,
  anon_sym_blocks = 66,
  anon_sym_all = 67,
  anon_sym_masked = 68,
  anon_sym_score = 69,
  anon_sym_matches = 70,
  anon_sym_in = 71,
  anon_sym_positioned = 72,
  anon_sym_rotated = 73,
  anon_sym_facing = 74,
  anon_sym_store = 75,
  anon_sym_result = 76,
  anon_sym_success = 77,
  anon_sym_bossbar = 78,
  anon_sym_max = 79,
  anon_sym_anchored = 80,
  anon_sym_align = 81,
  anon_sym_DOT_DOT = 82,
  anon_sym_AT = 83,
  anon_sym_p = 84,
  anon_sym_a = 85,
  anon_sym_r = 86,
  anon_sym_s = 87,
  anon_sym_e = 88,
  anon_sym_LBRACK = 89,
  anon_sym_COMMA = 90,
  anon_sym_RBRACK = 91,
  anon_sym_EQ = 92,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH = 93,
  sym_coordinate = 94,
  sym_integer = 95,
  sym_float = 96,
  anon_sym_minecraft_COLON = 97,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH = 98,
  sym_block_state_value = 99,
  anon_sym_LBRACE = 100,
  anon_sym_RBRACE = 101,
  anon_sym_COLON = 102,
  sym_nbt_key = 103,
  sym_nbt_number = 104,
  anon_sym_DQUOTE = 105,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 106,
  anon_sym_SQUOTE = 107,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 108,
  sym_escape_sequence = 109,
  sym_nbt_path = 110,
  aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH = 111,
  sym_time = 112,
  aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH = 113,
  sym_scoreboard_criteria = 114,
  anon_sym_PERCENT_EQ = 115,
  anon_sym_STAR_EQ = 116,
  anon_sym_PLUS_EQ = 117,
  anon_sym_DASH_EQ = 118,
  anon_sym_SLASH_EQ = 119,
  anon_sym_LT_EQ = 120,
  anon_sym_GT_EQ = 121,
  anon_sym_GT_LT = 122,
  anon_sym_LT = 123,
  anon_sym_GT = 124,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH = 125,
  sym_tag = 126,
  anon_sym_minecraft = 127,
  anon_sym_overworld = 128,
  anon_sym_the_nether = 129,
  anon_sym_the_end = 130,
  aux_sym_SLASHxy_QMARKz_QMARK_SLASH = 131,
  aux_sym_SLASHx_QMARKyz_QMARK_SLASH = 132,
  aux_sym_SLASHx_QMARKy_QMARKz_SLASH = 133,
  anon_sym_feet = 134,
  anon_sym_eyes = 135,
  anon_sym_byte = 136,
  anon_sym_double = 137,
  anon_sym_float = 138,
  anon_sym_int = 139,
  anon_sym_long = 140,
  anon_sym_short = 141,
  sym_function = 142,
  sym_comment = 143,
  sym_command = 144,
  sym__teleport_command = 145,
  sym__setblock_command = 146,
  sym__summon_command = 147,
  sym__say_command = 148,
  sym__data_command = 149,
  sym__data_merge_command = 150,
  sym__data_get_command = 151,
  sym__data_remove_command = 152,
  sym__data_modify_command = 153,
  sym__data_modify_value_command = 154,
  sym__data_modify_from_command = 155,
  sym__function_command = 156,
  sym__schedule_command = 157,
  sym__scoreboard_command = 158,
  sym__scoreboard_objectives_command = 159,
  sym__scoreboard_players_command = 160,
  sym__team_command = 161,
  sym__tag_command = 162,
  sym__execute_command = 163,
  sym__execute_as_command = 164,
  sym__execute_at_command = 165,
  sym__execute_if_command = 166,
  sym__execute_unless_command = 167,
  sym__if_unless_command = 168,
  sym__execute_in_command = 169,
  sym__execute_positioned_command = 170,
  sym__execute_rotated_command = 171,
  sym__execute_facing_command = 172,
  sym__execute_store_command = 173,
  sym__execute_anchored_command = 174,
  sym__execute_align_command = 175,
  sym_integer_range = 176,
  sym_selector = 177,
  sym__selector_argument = 178,
  sym_selector_key = 179,
  sym_selector_value = 180,
  sym__coordinate3 = 181,
  sym_block = 182,
  sym_block_type = 183,
  sym_block_state = 184,
  sym__block_state_argument = 185,
  sym_block_state_key = 186,
  sym_entity_type = 187,
  sym_message = 188,
  sym_nbt_compound = 189,
  sym__nbt_pair = 190,
  sym_nbt_array = 191,
  sym__nbt_value = 192,
  sym_nbt_string = 193,
  sym__quoted_string = 194,
  sym_function_name = 195,
  sym_objective = 196,
  sym_scoreboard_operator = 197,
  sym_scoreboard_comparator = 198,
  sym_team = 199,
  sym_team_option = 200,
  sym_team_option_value = 201,
  sym_dimension = 202,
  sym_axes_swizzle = 203,
  sym_anchor = 204,
  sym_nbt_type = 205,
  sym_bossbar = 206,
  aux_sym_function_repeat1 = 207,
  aux_sym__execute_command_repeat1 = 208,
  aux_sym_selector_repeat1 = 209,
  aux_sym_block_state_repeat1 = 210,
  aux_sym_nbt_compound_repeat1 = 211,
  aux_sym_nbt_array_repeat1 = 212,
  aux_sym__quoted_string_repeat1 = 213,
  aux_sym__quoted_string_repeat2 = 214,
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
  [anon_sym_execute] = "execute",
  [anon_sym_run] = "run",
  [anon_sym_as] = "as",
  [anon_sym_at] = "at",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_blocks] = "blocks",
  [anon_sym_all] = "all",
  [anon_sym_masked] = "masked",
  [anon_sym_score] = "score",
  [anon_sym_matches] = "matches",
  [anon_sym_in] = "in",
  [anon_sym_positioned] = "positioned",
  [anon_sym_rotated] = "rotated",
  [anon_sym_facing] = "facing",
  [anon_sym_store] = "store",
  [anon_sym_result] = "result",
  [anon_sym_success] = "success",
  [anon_sym_bossbar] = "bossbar",
  [anon_sym_max] = "max",
  [anon_sym_anchored] = "anchored",
  [anon_sym_align] = "align",
  [anon_sym_DOT_DOT] = "..",
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
  [sym_float] = "float",
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
  [aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH] = "/([\\.a-z0-9_-]+:)?[\\/\\.a-z0-9_-]+/",
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = "/[A-Za-z]+/",
  [sym_tag] = "tag",
  [anon_sym_minecraft] = "minecraft",
  [anon_sym_overworld] = "overworld",
  [anon_sym_the_nether] = "the_nether",
  [anon_sym_the_end] = "the_end",
  [aux_sym_SLASHxy_QMARKz_QMARK_SLASH] = "/xy?z?/",
  [aux_sym_SLASHx_QMARKyz_QMARK_SLASH] = "/x?yz?/",
  [aux_sym_SLASHx_QMARKy_QMARKz_SLASH] = "/x?y?z/",
  [anon_sym_feet] = "feet",
  [anon_sym_eyes] = "eyes",
  [anon_sym_byte] = "byte",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_short] = "short",
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
  [sym__execute_command] = "_execute_command",
  [sym__execute_as_command] = "_execute_as_command",
  [sym__execute_at_command] = "_execute_at_command",
  [sym__execute_if_command] = "_execute_if_command",
  [sym__execute_unless_command] = "_execute_unless_command",
  [sym__if_unless_command] = "_if_unless_command",
  [sym__execute_in_command] = "_execute_in_command",
  [sym__execute_positioned_command] = "_execute_positioned_command",
  [sym__execute_rotated_command] = "_execute_rotated_command",
  [sym__execute_facing_command] = "_execute_facing_command",
  [sym__execute_store_command] = "_execute_store_command",
  [sym__execute_anchored_command] = "_execute_anchored_command",
  [sym__execute_align_command] = "_execute_align_command",
  [sym_integer_range] = "integer_range",
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
  [sym_function_name] = "function_name",
  [sym_objective] = "objective",
  [sym_scoreboard_operator] = "scoreboard_operator",
  [sym_scoreboard_comparator] = "scoreboard_comparator",
  [sym_team] = "team",
  [sym_team_option] = "team_option",
  [sym_team_option_value] = "team_option_value",
  [sym_dimension] = "dimension",
  [sym_axes_swizzle] = "axes_swizzle",
  [sym_anchor] = "anchor",
  [sym_nbt_type] = "nbt_type",
  [sym_bossbar] = "bossbar",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym__execute_command_repeat1] = "_execute_command_repeat1",
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
  [anon_sym_execute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blocks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_masked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_score] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positioned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_facing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_success] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bossbar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anchored] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [sym_float] = {
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
  [aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_minecraft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overworld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the_nether] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHxy_QMARKz_QMARK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASHx_QMARKyz_QMARK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASHx_QMARKy_QMARKz_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_feet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eyes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
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
  [sym__execute_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_as_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_at_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_if_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_unless_command] = {
    .visible = false,
    .named = true,
  },
  [sym__if_unless_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_in_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_positioned_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_rotated_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_facing_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_store_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_anchored_command] = {
    .visible = false,
    .named = true,
  },
  [sym__execute_align_command] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_range] = {
    .visible = true,
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
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_objective] = {
    .visible = true,
    .named = true,
  },
  [sym_scoreboard_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_scoreboard_comparator] = {
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
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_axes_swizzle] = {
    .visible = true,
    .named = true,
  },
  [sym_anchor] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bossbar] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__execute_command_repeat1] = {
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
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(40);
      if (lookahead == 'd')
        ADVANCE(63);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 'g')
        ADVANCE(106);
      if (lookahead == 'h')
        ADVANCE(109);
      if (lookahead == 'i')
        ADVANCE(115);
      if (lookahead == 'j')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(126);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(166);
      if (lookahead == 'p')
        ADVANCE(192);
      if (lookahead == 'r')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'u')
        ADVANCE(220);
      if (lookahead == 'v')
        ADVANCE(226);
      if (lookahead == 'x')
        ADVANCE(231);
      if (lookahead == 'y')
        ADVANCE(234);
      if (lookahead == 'z')
        ADVANCE(236);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '~')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(240);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
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
      if (lookahead == '.')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 17:
      if (lookahead == '=')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '<')
        ADVANCE(24);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT_LT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      if (lookahead == 'u')
        ADVANCE(29);
      if (lookahead == 'x')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '{')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(33);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '}')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(32);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(32);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 40:
      if (lookahead == 'e')
        ADVANCE(41);
      if (lookahead == 'l')
        ADVANCE(49);
      if (lookahead == 'o')
        ADVANCE(54);
      if (lookahead == 'y')
        ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'l')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'o')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'w')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'N')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'a')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'm')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_belowName);
      END_STATE();
    case 49:
      if (lookahead == 'o')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'c')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'k')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 's')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_blocks);
      END_STATE();
    case 54:
      if (lookahead == 's')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 's')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'b')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'r')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_bossbar);
      END_STATE();
    case 60:
      if (lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 63:
      if (lookahead == 'a')
        ADVANCE(64);
      if (lookahead == 'i')
        ADVANCE(67);
      if (lookahead == 'o')
        ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 't')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'a')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 67:
      if (lookahead == 's')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'p')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'l')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'a')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'y')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'n')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'a')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'm')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'e')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_displayname);
      END_STATE();
    case 77:
      if (lookahead == 'u')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'b')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'l')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'e')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 83:
      if (lookahead == 'a')
        ADVANCE(84);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 'l')
        ADVANCE(92);
      if (lookahead == 'r')
        ADVANCE(96);
      if (lookahead == 'u')
        ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'c')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'i')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'g')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 89:
      if (lookahead == 'e')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 't')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_feet);
      END_STATE();
    case 92:
      if (lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'a')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 't')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 96:
      if (lookahead == 'o')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'm')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 99:
      if (lookahead == 'n')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'c')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 't')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'i')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'o')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'n')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 106:
      if (lookahead == 'e')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 't')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'a')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'r')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 't')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 's')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_hearts);
      END_STATE();
    case 115:
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'e')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'r')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 122:
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'i')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'n')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 126:
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'o')
        ADVANCE(134);
      END_STATE();
    case 127:
      if (lookahead == 'a')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'v')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'e')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_leave);
      END_STATE();
    case 131:
      if (lookahead == 's')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 134:
      if (lookahead == 'n')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'g')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 137:
      if (lookahead == 'a')
        ADVANCE(138);
      if (lookahead == 'e')
        ADVANCE(149);
      if (lookahead == 'i')
        ADVANCE(153);
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 's')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(143);
      if (lookahead == 'x')
        ADVANCE(148);
      END_STATE();
    case 139:
      if (lookahead == 'k')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'e')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'd')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_masked);
      END_STATE();
    case 143:
      if (lookahead == 'c')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'h')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 's')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 149:
      if (lookahead == 'r')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'g')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 153:
      if (lookahead == 'n')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'e')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'c')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'r')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'a')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'f')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 't')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_minecraft);
      END_STATE();
    case 161:
      if (lookahead == 'd')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'i')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'f')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'y')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 166:
      if (lookahead == 'b')
        ADVANCE(167);
      if (lookahead == 'p')
        ADVANCE(176);
      if (lookahead == 'v')
        ADVANCE(184);
      END_STATE();
    case 167:
      if (lookahead == 'j')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'c')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'i')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'v')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 's')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_objectives);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'r')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'a')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 't')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'i')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'o')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'n')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_operation);
      END_STATE();
    case 184:
      if (lookahead == 'e')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'r')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'w')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'o')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'l')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'd')
        ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_overworld);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 195:
      if (lookahead == 'a')
        ADVANCE(196);
      if (lookahead == 'e')
        ADVANCE(198);
      if (lookahead == 'h')
        ADVANCE(207);
      if (lookahead == 'p')
        ADVANCE(219);
      END_STATE();
    case 196:
      if (lookahead == 'g')
        ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 198:
      if (lookahead == 'a')
        ADVANCE(199);
      if (lookahead == 'l')
        ADVANCE(201);
      END_STATE();
    case 199:
      if (lookahead == 'm')
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_team);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'p')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'o')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'r')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 't')
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_teleport);
      END_STATE();
    case 207:
      if (lookahead == 'e')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == '_')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'e')
        ADVANCE(210);
      if (lookahead == 'n')
        ADVANCE(213);
      END_STATE();
    case 210:
      if (lookahead == 'n')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'd')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_the_end);
      END_STATE();
    case 213:
      if (lookahead == 'e')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 't')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'h')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'e')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'r')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_the_nether);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_tp);
      END_STATE();
    case 220:
      if (lookahead == 'n')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'l')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 's')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 's')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 226:
      if (lookahead == 'a')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'l')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'u')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASHxy_QMARKz_QMARK_SLASH);
      if (lookahead == 'y')
        ADVANCE(232);
      if (lookahead == 'z')
        ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASHxy_QMARKz_QMARK_SLASH);
      if (lookahead == 'z')
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASHxy_QMARKz_QMARK_SLASH);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASHx_QMARKyz_QMARK_SLASH);
      if (lookahead == 'z')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASHx_QMARKyz_QMARK_SLASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASHx_QMARKy_QMARKz_SLASH);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_coordinate);
      END_STATE();
    case 240:
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
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(40);
      if (lookahead == 'd')
        ADVANCE(63);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 'g')
        ADVANCE(106);
      if (lookahead == 'h')
        ADVANCE(109);
      if (lookahead == 'i')
        ADVANCE(115);
      if (lookahead == 'j')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(126);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(166);
      if (lookahead == 'p')
        ADVANCE(192);
      if (lookahead == 'r')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'u')
        ADVANCE(220);
      if (lookahead == 'v')
        ADVANCE(226);
      if (lookahead == 'x')
        ADVANCE(231);
      if (lookahead == 'y')
        ADVANCE(234);
      if (lookahead == 'z')
        ADVANCE(236);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '~')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(240);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 241:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'd')
        ADVANCE(242);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(250);
      if (lookahead == 's')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      END_STATE();
    case 242:
      if (lookahead == 'a')
        ADVANCE(64);
      END_STATE();
    case 243:
      if (lookahead == 'x')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'e')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'c')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'u')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 't')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'e')
        ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 250:
      if (lookahead == 'u')
        ADVANCE(99);
      END_STATE();
    case 251:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'c')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(269);
      if (lookahead == 'u')
        ADVANCE(276);
      END_STATE();
    case 252:
      if (lookahead == 'y')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_say);
      END_STATE();
    case 254:
      if (lookahead == 'h')
        ADVANCE(255);
      if (lookahead == 'o')
        ADVANCE(261);
      END_STATE();
    case 255:
      if (lookahead == 'e')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'd')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'u')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'l')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'e')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_schedule);
      END_STATE();
    case 261:
      if (lookahead == 'r')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'e')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'b')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'o')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'a')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'r')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'd')
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_scoreboard);
      END_STATE();
    case 269:
      if (lookahead == 't')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'b')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'l')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'c')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'k')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_setblock);
      END_STATE();
    case 276:
      if (lookahead == 'm')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'm')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'o')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'n')
        ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_summon);
      END_STATE();
    case 281:
      if (lookahead == 'a')
        ADVANCE(196);
      if (lookahead == 'e')
        ADVANCE(198);
      if (lookahead == 'p')
        ADVANCE(219);
      END_STATE();
    case 282:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(283);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(282);
      if (lookahead != 0)
        ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(284);
      END_STATE();
    case 285:
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      END_STATE();
    case 286:
      if (lookahead == 'a')
        ADVANCE(287);
      if (lookahead == '~')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      END_STATE();
    case 287:
      if (lookahead == 's')
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 289:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'm')
        ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(289);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(291);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(294);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(295);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(298);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == ':')
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_minecraft_COLON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 301:
      if (lookahead == 'g')
        ADVANCE(106);
      if (lookahead == 'm')
        ADVANCE(302);
      if (lookahead == 'r')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(301);
      END_STATE();
    case 302:
      if (lookahead == 'e')
        ADVANCE(149);
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 303:
      if (lookahead == 'e')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'm')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'o')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'v')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'e')
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 309:
      if (lookahead == '/')
        ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(309);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '/')
        ADVANCE(310);
      if (lookahead == ':')
        ADVANCE(312);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 312:
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 313:
      if (lookahead == 'o')
        ADVANCE(314);
      if (lookahead == 'p')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(313);
      END_STATE();
    case 314:
      if (lookahead == 'b')
        ADVANCE(167);
      END_STATE();
    case 315:
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'a')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'y')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'e')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'r')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 's')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_players);
      END_STATE();
    case 322:
      if (lookahead == 'a')
        ADVANCE(323);
      if (lookahead == 'e')
        ADVANCE(326);
      if (lookahead == 'j')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(331);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'r')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(322);
      END_STATE();
    case 323:
      if (lookahead == 'd')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'd')
        ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 326:
      if (lookahead == 'm')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'p')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 't')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'y')
        ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 331:
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == 'i')
        ADVANCE(131);
      END_STATE();
    case 332:
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 333:
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == 'a')
        ADVANCE(334);
      if (lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == 'p')
        ADVANCE(350);
      if (lookahead == 'r')
        ADVANCE(360);
      if (lookahead == 's')
        ADVANCE(369);
      if (lookahead == 'u')
        ADVANCE(220);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(333);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(374);
      END_STATE();
    case 334:
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'n')
        ADVANCE(339);
      if (lookahead == 's')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(346);
      END_STATE();
    case 335:
      if (lookahead == 'i')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'g')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'n')
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 339:
      if (lookahead == 'c')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'h')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'o')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'r')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'e')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'd')
        ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 347:
      if (lookahead == 'a')
        ADVANCE(84);
      END_STATE();
    case 348:
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 350:
      if (lookahead == 'o')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 's')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 'i')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 't')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'i')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'o')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'n')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'e')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'd')
        ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 360:
      if (lookahead == 'o')
        ADVANCE(361);
      if (lookahead == 'u')
        ADVANCE(367);
      END_STATE();
    case 361:
      if (lookahead == 't')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'a')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 't')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'e')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'd')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 367:
      if (lookahead == 'n')
        ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 369:
      if (lookahead == 't')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'o')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'r')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'e')
        ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_store);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(374);
      END_STATE();
    case 375:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(375);
      END_STATE();
    case 376:
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'p')
        ADVANCE(192);
      if (lookahead == 'r')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      END_STATE();
    case 377:
      if (lookahead == 'b')
        ADVANCE(378);
      if (lookahead == 'd')
        ADVANCE(242);
      if (lookahead == 'e')
        ADVANCE(379);
      if (lookahead == 's')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(377);
      END_STATE();
    case 378:
      if (lookahead == 'l')
        ADVANCE(49);
      END_STATE();
    case 379:
      if (lookahead == 'n')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 't')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'i')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 't')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'y')
        ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 385:
      if (lookahead == 'c')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'o')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'r')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'e')
        ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_score);
      END_STATE();
    case 390:
      if (lookahead == 'a')
        ADVANCE(323);
      if (lookahead == 'l')
        ADVANCE(391);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'r')
        ADVANCE(303);
      if (lookahead == 's')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(390);
      END_STATE();
    case 391:
      if (lookahead == 'i')
        ADVANCE(131);
      END_STATE();
    case 392:
      if (lookahead == 'e')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 't')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'd')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'i')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 's')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'p')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'l')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'a')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'y')
        ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_setdisplay);
      END_STATE();
    case 402:
      if (lookahead == 'a')
        ADVANCE(323);
      if (lookahead == 'e')
        ADVANCE(403);
      if (lookahead == 'g')
        ADVANCE(106);
      if (lookahead == 'l')
        ADVANCE(391);
      if (lookahead == 'o')
        ADVANCE(409);
      if (lookahead == 'r')
        ADVANCE(410);
      if (lookahead == 's')
        ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(402);
      END_STATE();
    case 403:
      if (lookahead == 'n')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'a')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'b')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'l')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 'e')
        ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 409:
      if (lookahead == 'p')
        ADVANCE(176);
      END_STATE();
    case 410:
      if (lookahead == 'e')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'm')
        ADVANCE(305);
      if (lookahead == 's')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'e')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 't')
        ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 415:
      if (lookahead == 'e')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 't')
        ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 418:
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(418);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      END_STATE();
    case 435:
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(435);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(436);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(419);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(436);
      END_STATE();
    case 437:
      if (lookahead == 'm')
        ADVANCE(438);
      if (lookahead == 'o')
        ADVANCE(439);
      if (lookahead == 't')
        ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      END_STATE();
    case 438:
      if (lookahead == 'i')
        ADVANCE(153);
      END_STATE();
    case 439:
      if (lookahead == 'v')
        ADVANCE(184);
      END_STATE();
    case 440:
      if (lookahead == 'h')
        ADVANCE(207);
      END_STATE();
    case 441:
      if (lookahead == 'e')
        ADVANCE(379);
      if (lookahead == '~')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(441);
      END_STATE();
    case 442:
      if (lookahead == 'r')
        ADVANCE(443);
      if (lookahead == 's')
        ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      END_STATE();
    case 443:
      if (lookahead == 'e')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 's')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'u')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'l')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 't')
        ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 449:
      if (lookahead == 'u')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'c')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'c')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'e')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 's')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 's')
        ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_success);
      END_STATE();
    case 456:
      if (lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'f')
        ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(456);
      END_STATE();
    case 457:
      if (lookahead == 'y')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'e')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 's')
        ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_eyes);
      END_STATE();
    case 461:
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 462:
      if (lookahead == 'x')
        ADVANCE(231);
      if (lookahead == 'y')
        ADVANCE(234);
      if (lookahead == 'z')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(462);
      END_STATE();
    case 463:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(463);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == '.')
        ADVANCE(465);
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(464);
      END_STATE();
    case 465:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 468:
      if (lookahead == 'b')
        ADVANCE(469);
      if (lookahead == 'l')
        ADVANCE(391);
      if (lookahead == 's')
        ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(468);
      END_STATE();
    case 469:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 470:
      if (lookahead == 'i')
        ADVANCE(471);
      END_STATE();
    case 471:
      if (lookahead == 'd')
        ADVANCE(472);
      END_STATE();
    case 472:
      if (lookahead == 'e')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'b')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 'a')
        ADVANCE(475);
      END_STATE();
    case 475:
      if (lookahead == 'r')
        ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_sidebar);
      if (lookahead == '.')
        ADVANCE(477);
      END_STATE();
    case 477:
      if (lookahead == 't')
        ADVANCE(478);
      END_STATE();
    case 478:
      if (lookahead == 'e')
        ADVANCE(479);
      END_STATE();
    case 479:
      if (lookahead == 'a')
        ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead == 'm')
        ADVANCE(481);
      END_STATE();
    case 481:
      if (lookahead == '.')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead == 'a')
        ADVANCE(483);
      if (lookahead == 'b')
        ADVANCE(487);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'g')
        ADVANCE(523);
      if (lookahead == 'l')
        ADVANCE(533);
      if (lookahead == 'r')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(548);
      if (lookahead == 'y')
        ADVANCE(553);
      END_STATE();
    case 483:
      if (lookahead == 'q')
        ADVANCE(484);
      END_STATE();
    case 484:
      if (lookahead == 'u')
        ADVANCE(485);
      END_STATE();
    case 485:
      if (lookahead == 'a')
        ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTaqua);
      END_STATE();
    case 487:
      if (lookahead == 'l')
        ADVANCE(488);
      END_STATE();
    case 488:
      if (lookahead == 'a')
        ADVANCE(489);
      if (lookahead == 'u')
        ADVANCE(492);
      END_STATE();
    case 489:
      if (lookahead == 'c')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 'k')
        ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTblack);
      END_STATE();
    case 492:
      if (lookahead == 'e')
        ADVANCE(493);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTblue);
      END_STATE();
    case 494:
      if (lookahead == 'a')
        ADVANCE(495);
      END_STATE();
    case 495:
      if (lookahead == 'r')
        ADVANCE(496);
      END_STATE();
    case 496:
      if (lookahead == 'k')
        ADVANCE(497);
      END_STATE();
    case 497:
      if (lookahead == '_')
        ADVANCE(498);
      END_STATE();
    case 498:
      if (lookahead == 'a')
        ADVANCE(499);
      if (lookahead == 'b')
        ADVANCE(503);
      if (lookahead == 'g')
        ADVANCE(507);
      if (lookahead == 'p')
        ADVANCE(514);
      if (lookahead == 'r')
        ADVANCE(520);
      END_STATE();
    case 499:
      if (lookahead == 'q')
        ADVANCE(500);
      END_STATE();
    case 500:
      if (lookahead == 'u')
        ADVANCE(501);
      END_STATE();
    case 501:
      if (lookahead == 'a')
        ADVANCE(502);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_aqua);
      END_STATE();
    case 503:
      if (lookahead == 'l')
        ADVANCE(504);
      END_STATE();
    case 504:
      if (lookahead == 'u')
        ADVANCE(505);
      END_STATE();
    case 505:
      if (lookahead == 'e')
        ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_blue);
      END_STATE();
    case 507:
      if (lookahead == 'r')
        ADVANCE(508);
      END_STATE();
    case 508:
      if (lookahead == 'a')
        ADVANCE(509);
      if (lookahead == 'e')
        ADVANCE(511);
      END_STATE();
    case 509:
      if (lookahead == 'y')
        ADVANCE(510);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_gray);
      END_STATE();
    case 511:
      if (lookahead == 'e')
        ADVANCE(512);
      END_STATE();
    case 512:
      if (lookahead == 'n')
        ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_green);
      END_STATE();
    case 514:
      if (lookahead == 'u')
        ADVANCE(515);
      END_STATE();
    case 515:
      if (lookahead == 'r')
        ADVANCE(516);
      END_STATE();
    case 516:
      if (lookahead == 'p')
        ADVANCE(517);
      END_STATE();
    case 517:
      if (lookahead == 'l')
        ADVANCE(518);
      END_STATE();
    case 518:
      if (lookahead == 'e')
        ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_purple);
      END_STATE();
    case 520:
      if (lookahead == 'e')
        ADVANCE(521);
      END_STATE();
    case 521:
      if (lookahead == 'd')
        ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_red);
      END_STATE();
    case 523:
      if (lookahead == 'o')
        ADVANCE(524);
      if (lookahead == 'r')
        ADVANCE(527);
      END_STATE();
    case 524:
      if (lookahead == 'l')
        ADVANCE(525);
      END_STATE();
    case 525:
      if (lookahead == 'd')
        ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgold);
      END_STATE();
    case 527:
      if (lookahead == 'a')
        ADVANCE(528);
      if (lookahead == 'e')
        ADVANCE(530);
      END_STATE();
    case 528:
      if (lookahead == 'y')
        ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgray);
      END_STATE();
    case 530:
      if (lookahead == 'e')
        ADVANCE(531);
      END_STATE();
    case 531:
      if (lookahead == 'n')
        ADVANCE(532);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgreen);
      END_STATE();
    case 533:
      if (lookahead == 'i')
        ADVANCE(534);
      END_STATE();
    case 534:
      if (lookahead == 'g')
        ADVANCE(535);
      END_STATE();
    case 535:
      if (lookahead == 'h')
        ADVANCE(536);
      END_STATE();
    case 536:
      if (lookahead == 't')
        ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == '_')
        ADVANCE(538);
      END_STATE();
    case 538:
      if (lookahead == 'p')
        ADVANCE(539);
      END_STATE();
    case 539:
      if (lookahead == 'u')
        ADVANCE(540);
      END_STATE();
    case 540:
      if (lookahead == 'r')
        ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 'p')
        ADVANCE(542);
      END_STATE();
    case 542:
      if (lookahead == 'l')
        ADVANCE(543);
      END_STATE();
    case 543:
      if (lookahead == 'e')
        ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTlight_purple);
      END_STATE();
    case 545:
      if (lookahead == 'e')
        ADVANCE(546);
      END_STATE();
    case 546:
      if (lookahead == 'd')
        ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTred);
      END_STATE();
    case 548:
      if (lookahead == 'h')
        ADVANCE(549);
      END_STATE();
    case 549:
      if (lookahead == 'i')
        ADVANCE(550);
      END_STATE();
    case 550:
      if (lookahead == 't')
        ADVANCE(551);
      END_STATE();
    case 551:
      if (lookahead == 'e')
        ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTwhite);
      END_STATE();
    case 553:
      if (lookahead == 'e')
        ADVANCE(554);
      END_STATE();
    case 554:
      if (lookahead == 'l')
        ADVANCE(555);
      END_STATE();
    case 555:
      if (lookahead == 'l')
        ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == 'o')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'w')
        ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTyellow);
      END_STATE();
    case 559:
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(559);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(560);
      END_STATE();
    case 561:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(561);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(560);
      END_STATE();
    case 562:
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == 'a')
        ADVANCE(323);
      if (lookahead == 'l')
        ADVANCE(391);
      if (lookahead == 'r')
        ADVANCE(303);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(562);
      END_STATE();
    case 563:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(563);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(564);
      END_STATE();
    case 565:
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(565);
      END_STATE();
    case 566:
      if (lookahead == 'b')
        ADVANCE(567);
      if (lookahead == 'e')
        ADVANCE(379);
      if (lookahead == 's')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(566);
      END_STATE();
    case 567:
      if (lookahead == 'l')
        ADVANCE(568);
      if (lookahead == 'o')
        ADVANCE(54);
      END_STATE();
    case 568:
      if (lookahead == 'o')
        ADVANCE(569);
      END_STATE();
    case 569:
      if (lookahead == 'c')
        ADVANCE(570);
      END_STATE();
    case 570:
      if (lookahead == 'k')
        ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 572:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(572);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(573);
      END_STATE();
    case 574:
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_nbt_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(575);
      END_STATE();
    case 576:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(577);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(576);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(578);
      END_STATE();
    case 577:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_nbt_number);
      if (lookahead == '.')
        ADVANCE(579);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(578);
      END_STATE();
    case 579:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_nbt_number);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 's')
        ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_nbt_number);
      END_STATE();
    case 582:
      if (lookahead == '\t')
        ADVANCE(583);
      if (lookahead == ' ')
        SKIP(582);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(585);
      if (lookahead != 0)
        ADVANCE(584);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(585);
      END_STATE();
    case 586:
      if (lookahead == '\t')
        ADVANCE(587);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(586);
      if (lookahead != 0)
        ADVANCE(584);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(584);
      END_STATE();
    case 588:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == 'd')
        ADVANCE(589);
      if (lookahead == 'm')
        ADVANCE(590);
      if (lookahead == 'r')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(588);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 589:
      if (lookahead == 'i')
        ADVANCE(67);
      END_STATE();
    case 590:
      if (lookahead == 'a')
        ADVANCE(591);
      END_STATE();
    case 591:
      if (lookahead == 't')
        ADVANCE(143);
      END_STATE();
    case 592:
      if (lookahead == 'e')
        ADVANCE(593);
      END_STATE();
    case 593:
      if (lookahead == 'n')
        ADVANCE(594);
      END_STATE();
    case 594:
      if (lookahead == 'd')
        ADVANCE(595);
      END_STATE();
    case 595:
      if (lookahead == 'e')
        ADVANCE(596);
      END_STATE();
    case 596:
      if (lookahead == 'r')
        ADVANCE(597);
      END_STATE();
    case 597:
      if (lookahead == 't')
        ADVANCE(598);
      END_STATE();
    case 598:
      if (lookahead == 'y')
        ADVANCE(599);
      END_STATE();
    case 599:
      if (lookahead == 'p')
        ADVANCE(600);
      END_STATE();
    case 600:
      if (lookahead == 'e')
        ADVANCE(601);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_rendertype);
      END_STATE();
    case 602:
      if (lookahead == 'd')
        ADVANCE(589);
      if (lookahead == 'r')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(602);
      END_STATE();
    case 603:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(603);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(604);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_scoreboard_criteria);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(604);
      END_STATE();
    case 605:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(606);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(607);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(605);
      END_STATE();
    case 606:
      if (lookahead == '=')
        ADVANCE(13);
      END_STATE();
    case 607:
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 608:
      if (lookahead == '<')
        ADVANCE(24);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 609:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(609);
      END_STATE();
    case 610:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(610);
      END_STATE();
    case 611:
      if (lookahead == '\t')
        ADVANCE(612);
      if (lookahead == ' ')
        SKIP(611);
      if (lookahead == '[')
        ADVANCE(613);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(614);
      if (lookahead != 0)
        ADVANCE(584);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(612);
      if (lookahead == '[')
        ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(584);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(584);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(614);
      END_STATE();
    case 615:
      if (lookahead == '\t')
        ADVANCE(616);
      if (lookahead == '[')
        ADVANCE(613);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(615);
      if (lookahead != 0)
        ADVANCE(584);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_nbt_path);
      if (lookahead == '\t')
        ADVANCE(616);
      if (lookahead == '[')
        ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(584);
      END_STATE();
    case 617:
      if (lookahead == 'a')
        ADVANCE(618);
      if (lookahead == 'i')
        ADVANCE(624);
      if (lookahead == 'm')
        ADVANCE(626);
      if (lookahead == 'p')
        ADVANCE(627);
      if (lookahead == 's')
        ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(617);
      END_STATE();
    case 618:
      if (lookahead == 'p')
        ADVANCE(619);
      END_STATE();
    case 619:
      if (lookahead == 'p')
        ADVANCE(620);
      END_STATE();
    case 620:
      if (lookahead == 'e')
        ADVANCE(621);
      END_STATE();
    case 621:
      if (lookahead == 'n')
        ADVANCE(622);
      END_STATE();
    case 622:
      if (lookahead == 'd')
        ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 624:
      if (lookahead == 'n')
        ADVANCE(625);
      END_STATE();
    case 625:
      if (lookahead == 's')
        ADVANCE(118);
      END_STATE();
    case 626:
      if (lookahead == 'e')
        ADVANCE(149);
      END_STATE();
    case 627:
      if (lookahead == 'r')
        ADVANCE(628);
      END_STATE();
    case 628:
      if (lookahead == 'e')
        ADVANCE(629);
      END_STATE();
    case 629:
      if (lookahead == 'p')
        ADVANCE(630);
      END_STATE();
    case 630:
      if (lookahead == 'e')
        ADVANCE(631);
      END_STATE();
    case 631:
      if (lookahead == 'n')
        ADVANCE(632);
      END_STATE();
    case 632:
      if (lookahead == 'd')
        ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 634:
      if (lookahead == 'h')
        ADVANCE(109);
      if (lookahead == 'i')
        ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(634);
      END_STATE();
    case 635:
      if (lookahead == 'n')
        ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == 't')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'e')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'g')
        ADVANCE(639);
      END_STATE();
    case 639:
      if (lookahead == 'e')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 'r')
        ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 642:
      if (lookahead == '-')
        ADVANCE(643);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(642);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 643:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 644:
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(645);
      if (lookahead == 'm')
        ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 646:
      if (lookahead == 'm')
        ADVANCE(647);
      if (lookahead == 'v')
        ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(646);
      END_STATE();
    case 647:
      if (lookahead == 'a')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'x')
        ADVANCE(148);
      END_STATE();
    case 649:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'm')
        ADVANCE(290);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '~')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(649);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 650:
      if (lookahead == 'f')
        ADVANCE(651);
      if (lookahead == 'v')
        ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(650);
      END_STATE();
    case 651:
      if (lookahead == 'r')
        ADVANCE(96);
      END_STATE();
    case 652:
      if (lookahead == 'a')
        ADVANCE(653);
      if (lookahead == 'm')
        ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(652);
      END_STATE();
    case 653:
      if (lookahead == 'l')
        ADVANCE(654);
      END_STATE();
    case 654:
      if (lookahead == 'l')
        ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 656:
      if (lookahead == 'a')
        ADVANCE(657);
      END_STATE();
    case 657:
      if (lookahead == 's')
        ADVANCE(139);
      END_STATE();
    case 658:
      if (lookahead == 'b')
        ADVANCE(659);
      if (lookahead == 'd')
        ADVANCE(660);
      if (lookahead == 'f')
        ADVANCE(661);
      if (lookahead == 'i')
        ADVANCE(662);
      if (lookahead == 'l')
        ADVANCE(665);
      if (lookahead == 's')
        ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(658);
      END_STATE();
    case 659:
      if (lookahead == 'y')
        ADVANCE(60);
      END_STATE();
    case 660:
      if (lookahead == 'o')
        ADVANCE(77);
      END_STATE();
    case 661:
      if (lookahead == 'l')
        ADVANCE(92);
      END_STATE();
    case 662:
      if (lookahead == 'n')
        ADVANCE(663);
      END_STATE();
    case 663:
      if (lookahead == 't')
        ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 665:
      if (lookahead == 'o')
        ADVANCE(134);
      END_STATE();
    case 666:
      if (lookahead == 'h')
        ADVANCE(667);
      END_STATE();
    case 667:
      if (lookahead == 'o')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'r')
        ADVANCE(669);
      END_STATE();
    case 669:
      if (lookahead == 't')
        ADVANCE(670);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 671:
      if (lookahead == '\n')
        SKIP(672);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(674);
      END_STATE();
    case 672:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(674);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(674);
      END_STATE();
    case 675:
      if (lookahead == '\n')
        SKIP(676);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(678);
      END_STATE();
    case 676:
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(678);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(678);
      END_STATE();
    case 679:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(679);
      END_STATE();
    case 680:
      if (lookahead == '-')
        ADVANCE(643);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(334);
      if (lookahead == 'f')
        ADVANCE(347);
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == 'p')
        ADVANCE(350);
      if (lookahead == 'r')
        ADVANCE(360);
      if (lookahead == 's')
        ADVANCE(369);
      if (lookahead == 'u')
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(680);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(681);
      END_STATE();
    case 682:
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(682);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(684);
      END_STATE();
    case 683:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.')
        ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(684);
      END_STATE();
    case 685:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(686);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(686);
      END_STATE();
    case 687:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_block_state_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(688);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 241},
  [2] = {.lex_state = 282},
  [3] = {.lex_state = 285},
  [4] = {.lex_state = 286},
  [5] = {.lex_state = 289},
  [6] = {.lex_state = 282},
  [7] = {.lex_state = 301},
  [8] = {.lex_state = 309},
  [9] = {.lex_state = 241},
  [10] = {.lex_state = 313},
  [11] = {.lex_state = 322},
  [12] = {.lex_state = 285},
  [13] = {.lex_state = 333},
  [14] = {.lex_state = 375},
  [15] = {.lex_state = 333},
  [16] = {.lex_state = 333},
  [17] = {.lex_state = 241},
  [18] = {.lex_state = 333},
  [19] = {.lex_state = 376},
  [20] = {.lex_state = 333},
  [21] = {.lex_state = 286},
  [22] = {.lex_state = 289},
  [23] = {.lex_state = 286},
  [24] = {.lex_state = 286},
  [25] = {.lex_state = 333},
  [26] = {.lex_state = 333},
  [27] = {.lex_state = 377},
  [28] = {.lex_state = 377},
  [29] = {.lex_state = 377},
  [30] = {.lex_state = 377},
  [31] = {.lex_state = 333},
  [32] = {.lex_state = 333},
  [33] = {.lex_state = 333},
  [34] = {.lex_state = 309},
  [35] = {.lex_state = 390},
  [36] = {.lex_state = 402},
  [37] = {.lex_state = 333},
  [38] = {.lex_state = 418},
  [39] = {.lex_state = 418},
  [40] = {.lex_state = 435},
  [41] = {.lex_state = 418},
  [42] = {.lex_state = 285},
  [43] = {.lex_state = 376},
  [44] = {.lex_state = 322},
  [45] = {.lex_state = 241},
  [46] = {.lex_state = 285},
  [47] = {.lex_state = 285},
  [48] = {.lex_state = 377},
  [49] = {.lex_state = 377},
  [50] = {.lex_state = 437},
  [51] = {.lex_state = 286},
  [52] = {.lex_state = 286},
  [53] = {.lex_state = 441},
  [54] = {.lex_state = 442},
  [55] = {.lex_state = 456},
  [56] = {.lex_state = 462},
  [57] = {.lex_state = 333},
  [58] = {.lex_state = 241},
  [59] = {.lex_state = 241},
  [60] = {.lex_state = 333},
  [61] = {.lex_state = 286},
  [62] = {.lex_state = 286},
  [63] = {.lex_state = 286},
  [64] = {.lex_state = 333},
  [65] = {.lex_state = 285},
  [66] = {.lex_state = 286},
  [67] = {.lex_state = 285},
  [68] = {.lex_state = 286},
  [69] = {.lex_state = 285},
  [70] = {.lex_state = 286},
  [71] = {.lex_state = 285},
  [72] = {.lex_state = 286},
  [73] = {.lex_state = 463},
  [74] = {.lex_state = 463},
  [75] = {.lex_state = 418},
  [76] = {.lex_state = 418},
  [77] = {.lex_state = 418},
  [78] = {.lex_state = 333},
  [79] = {.lex_state = 468},
  [80] = {.lex_state = 285},
  [81] = {.lex_state = 285},
  [82] = {.lex_state = 285},
  [83] = {.lex_state = 285},
  [84] = {.lex_state = 285},
  [85] = {.lex_state = 333},
  [86] = {.lex_state = 333},
  [87] = {.lex_state = 559},
  [88] = {.lex_state = 561},
  [89] = {.lex_state = 285},
  [90] = {.lex_state = 562},
  [91] = {.lex_state = 563},
  [92] = {.lex_state = 333},
  [93] = {.lex_state = 333},
  [94] = {.lex_state = 333},
  [95] = {.lex_state = 333},
  [96] = {.lex_state = 377},
  [97] = {.lex_state = 285},
  [98] = {.lex_state = 286},
  [99] = {.lex_state = 286},
  [100] = {.lex_state = 285},
  [101] = {.lex_state = 333},
  [102] = {.lex_state = 333},
  [103] = {.lex_state = 565},
  [104] = {.lex_state = 333},
  [105] = {.lex_state = 333},
  [106] = {.lex_state = 285},
  [107] = {.lex_state = 333},
  [108] = {.lex_state = 285},
  [109] = {.lex_state = 286},
  [110] = {.lex_state = 285},
  [111] = {.lex_state = 333},
  [112] = {.lex_state = 566},
  [113] = {.lex_state = 333},
  [114] = {.lex_state = 333},
  [115] = {.lex_state = 333},
  [116] = {.lex_state = 333},
  [117] = {.lex_state = 241},
  [118] = {.lex_state = 333},
  [119] = {.lex_state = 572},
  [120] = {.lex_state = 289},
  [121] = {.lex_state = 286},
  [122] = {.lex_state = 574},
  [123] = {.lex_state = 333},
  [124] = {.lex_state = 576},
  [125] = {.lex_state = 286},
  [126] = {.lex_state = 376},
  [127] = {.lex_state = 582},
  [128] = {.lex_state = 286},
  [129] = {.lex_state = 376},
  [130] = {.lex_state = 586},
  [131] = {.lex_state = 286},
  [132] = {.lex_state = 586},
  [133] = {.lex_state = 333},
  [134] = {.lex_state = 333},
  [135] = {.lex_state = 333},
  [136] = {.lex_state = 588},
  [137] = {.lex_state = 602},
  [138] = {.lex_state = 603},
  [139] = {.lex_state = 603},
  [140] = {.lex_state = 418},
  [141] = {.lex_state = 376},
  [142] = {.lex_state = 418},
  [143] = {.lex_state = 418},
  [144] = {.lex_state = 333},
  [145] = {.lex_state = 418},
  [146] = {.lex_state = 376},
  [147] = {.lex_state = 435},
  [148] = {.lex_state = 561},
  [149] = {.lex_state = 561},
  [150] = {.lex_state = 333},
  [151] = {.lex_state = 572},
  [152] = {.lex_state = 333},
  [153] = {.lex_state = 285},
  [154] = {.lex_state = 286},
  [155] = {.lex_state = 333},
  [156] = {.lex_state = 289},
  [157] = {.lex_state = 286},
  [158] = {.lex_state = 418},
  [159] = {.lex_state = 437},
  [160] = {.lex_state = 333},
  [161] = {.lex_state = 333},
  [162] = {.lex_state = 333},
  [163] = {.lex_state = 285},
  [164] = {.lex_state = 286},
  [165] = {.lex_state = 285},
  [166] = {.lex_state = 309},
  [167] = {.lex_state = 333},
  [168] = {.lex_state = 605},
  [169] = {.lex_state = 609},
  [170] = {.lex_state = 605},
  [171] = {.lex_state = 289},
  [172] = {.lex_state = 289},
  [173] = {.lex_state = 333},
  [174] = {.lex_state = 333},
  [175] = {.lex_state = 333},
  [176] = {.lex_state = 333},
  [177] = {.lex_state = 333},
  [178] = {.lex_state = 565},
  [179] = {.lex_state = 610},
  [180] = {.lex_state = 333},
  [181] = {.lex_state = 286},
  [182] = {.lex_state = 611},
  [183] = {.lex_state = 333},
  [184] = {.lex_state = 286},
  [185] = {.lex_state = 615},
  [186] = {.lex_state = 333},
  [187] = {.lex_state = 286},
  [188] = {.lex_state = 617},
  [189] = {.lex_state = 333},
  [190] = {.lex_state = 634},
  [191] = {.lex_state = 418},
  [192] = {.lex_state = 333},
  [193] = {.lex_state = 642},
  [194] = {.lex_state = 605},
  [195] = {.lex_state = 435},
  [196] = {.lex_state = 333},
  [197] = {.lex_state = 333},
  [198] = {.lex_state = 609},
  [199] = {.lex_state = 586},
  [200] = {.lex_state = 333},
  [201] = {.lex_state = 286},
  [202] = {.lex_state = 644},
  [203] = {.lex_state = 333},
  [204] = {.lex_state = 586},
  [205] = {.lex_state = 418},
  [206] = {.lex_state = 646},
  [207] = {.lex_state = 646},
  [208] = {.lex_state = 572},
  [209] = {.lex_state = 333},
  [210] = {.lex_state = 609},
  [211] = {.lex_state = 572},
  [212] = {.lex_state = 333},
  [213] = {.lex_state = 333},
  [214] = {.lex_state = 289},
  [215] = {.lex_state = 333},
  [216] = {.lex_state = 333},
  [217] = {.lex_state = 576},
  [218] = {.lex_state = 574},
  [219] = {.lex_state = 333},
  [220] = {.lex_state = 610},
  [221] = {.lex_state = 649},
  [222] = {.lex_state = 572},
  [223] = {.lex_state = 582},
  [224] = {.lex_state = 572},
  [225] = {.lex_state = 586},
  [226] = {.lex_state = 650},
  [227] = {.lex_state = 642},
  [228] = {.lex_state = 333},
  [229] = {.lex_state = 572},
  [230] = {.lex_state = 333},
  [231] = {.lex_state = 285},
  [232] = {.lex_state = 285},
  [233] = {.lex_state = 572},
  [234] = {.lex_state = 562},
  [235] = {.lex_state = 609},
  [236] = {.lex_state = 333},
  [237] = {.lex_state = 286},
  [238] = {.lex_state = 652},
  [239] = {.lex_state = 642},
  [240] = {.lex_state = 285},
  [241] = {.lex_state = 285},
  [242] = {.lex_state = 658},
  [243] = {.lex_state = 333},
  [244] = {.lex_state = 609},
  [245] = {.lex_state = 333},
  [246] = {.lex_state = 609},
  [247] = {.lex_state = 609},
  [248] = {.lex_state = 609},
  [249] = {.lex_state = 333},
  [250] = {.lex_state = 333},
  [251] = {.lex_state = 605},
  [252] = {.lex_state = 609},
  [253] = {.lex_state = 605},
  [254] = {.lex_state = 576},
  [255] = {.lex_state = 574},
  [256] = {.lex_state = 671},
  [257] = {.lex_state = 675},
  [258] = {.lex_state = 610},
  [259] = {.lex_state = 679},
  [260] = {.lex_state = 610},
  [261] = {.lex_state = 333},
  [262] = {.lex_state = 610},
  [263] = {.lex_state = 609},
  [264] = {.lex_state = 609},
  [265] = {.lex_state = 576},
  [266] = {.lex_state = 377},
  [267] = {.lex_state = 333},
  [268] = {.lex_state = 650},
  [269] = {.lex_state = 609},
  [270] = {.lex_state = 418},
  [271] = {.lex_state = 609},
  [272] = {.lex_state = 562},
  [273] = {.lex_state = 286},
  [274] = {.lex_state = 333},
  [275] = {.lex_state = 642},
  [276] = {.lex_state = 680},
  [277] = {.lex_state = 418},
  [278] = {.lex_state = 682},
  [279] = {.lex_state = 682},
  [280] = {.lex_state = 333},
  [281] = {.lex_state = 289},
  [282] = {.lex_state = 333},
  [283] = {.lex_state = 609},
  [284] = {.lex_state = 687},
  [285] = {.lex_state = 679},
  [286] = {.lex_state = 609},
  [287] = {.lex_state = 679},
  [288] = {.lex_state = 610},
  [289] = {.lex_state = 679},
  [290] = {.lex_state = 671},
  [291] = {.lex_state = 675},
  [292] = {.lex_state = 582},
  [293] = {.lex_state = 609},
  [294] = {.lex_state = 586},
  [295] = {.lex_state = 609},
  [296] = {.lex_state = 576},
  [297] = {.lex_state = 671},
  [298] = {.lex_state = 675},
  [299] = {.lex_state = 333},
  [300] = {.lex_state = 333},
  [301] = {.lex_state = 285},
  [302] = {.lex_state = 286},
  [303] = {.lex_state = 333},
  [304] = {.lex_state = 418},
  [305] = {.lex_state = 609},
  [306] = {.lex_state = 333},
  [307] = {.lex_state = 435},
  [308] = {.lex_state = 609},
  [309] = {.lex_state = 652},
  [310] = {.lex_state = 333},
  [311] = {.lex_state = 680},
  [312] = {.lex_state = 333},
  [313] = {.lex_state = 333},
  [314] = {.lex_state = 609},
  [315] = {.lex_state = 333},
  [316] = {.lex_state = 609},
  [317] = {.lex_state = 609},
  [318] = {.lex_state = 576},
  [319] = {.lex_state = 679},
  [320] = {.lex_state = 609},
  [321] = {.lex_state = 679},
  [322] = {.lex_state = 610},
  [323] = {.lex_state = 679},
  [324] = {.lex_state = 671},
  [325] = {.lex_state = 675},
  [326] = {.lex_state = 582},
  [327] = {.lex_state = 586},
  [328] = {.lex_state = 333},
  [329] = {.lex_state = 609},
  [330] = {.lex_state = 333},
  [331] = {.lex_state = 671},
  [332] = {.lex_state = 675},
  [333] = {.lex_state = 586},
  [334] = {.lex_state = 418},
  [335] = {.lex_state = 435},
  [336] = {.lex_state = 333},
  [337] = {.lex_state = 609},
  [338] = {.lex_state = 679},
  [339] = {.lex_state = 609},
  [340] = {.lex_state = 679},
  [341] = {.lex_state = 333},
  [342] = {.lex_state = 609},
  [343] = {.lex_state = 333},
  [344] = {.lex_state = 333},
  [345] = {.lex_state = 333},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_teleport] = ACTIONS(1),
    [anon_sym_tp] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(3),
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
    [anon_sym_belowName] = ACTIONS(1),
    [anon_sym_operation] = ACTIONS(1),
    [anon_sym_team] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_leave] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_blocks] = ACTIONS(1),
    [anon_sym_masked] = ACTIONS(1),
    [anon_sym_matches] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(3),
    [anon_sym_facing] = ACTIONS(1),
    [anon_sym_bossbar] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT_LT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_minecraft] = ACTIONS(1),
    [anon_sym_overworld] = ACTIONS(1),
    [anon_sym_the_nether] = ACTIONS(1),
    [anon_sym_the_end] = ACTIONS(1),
    [aux_sym_SLASHxy_QMARKz_QMARK_SLASH] = ACTIONS(1),
    [aux_sym_SLASHx_QMARKyz_QMARK_SLASH] = ACTIONS(3),
    [aux_sym_SLASHx_QMARKy_QMARKz_SLASH] = ACTIONS(3),
    [anon_sym_feet] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
  },
  [1] = {
    [sym_function] = STATE(14),
    [sym_comment] = STATE(15),
    [sym_command] = STATE(15),
    [sym__teleport_command] = STATE(16),
    [sym__setblock_command] = STATE(16),
    [sym__summon_command] = STATE(16),
    [sym__say_command] = STATE(16),
    [sym__data_command] = STATE(16),
    [sym__function_command] = STATE(16),
    [sym__schedule_command] = STATE(16),
    [sym__scoreboard_command] = STATE(16),
    [sym__team_command] = STATE(16),
    [sym__tag_command] = STATE(16),
    [sym__execute_command] = STATE(16),
    [aux_sym_function_repeat1] = STATE(17),
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
    [anon_sym_execute] = ACTIONS(29),
  },
  [2] = {
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(31),
  },
  [3] = {
    [sym_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
  },
  [4] = {
    [sym_coordinate] = ACTIONS(35),
  },
  [5] = {
    [sym_entity_type] = STATE(24),
    [anon_sym_minecraft_COLON] = ACTIONS(37),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(39),
  },
  [6] = {
    [sym_message] = STATE(26),
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(41),
  },
  [7] = {
    [sym__data_merge_command] = STATE(31),
    [sym__data_get_command] = STATE(31),
    [sym__data_remove_command] = STATE(31),
    [sym__data_modify_command] = STATE(31),
    [anon_sym_merge] = ACTIONS(43),
    [anon_sym_get] = ACTIONS(45),
    [anon_sym_remove] = ACTIONS(47),
    [anon_sym_modify] = ACTIONS(49),
  },
  [8] = {
    [sym_function_name] = STATE(33),
    [aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [9] = {
    [anon_sym_function] = ACTIONS(53),
  },
  [10] = {
    [sym__scoreboard_objectives_command] = STATE(37),
    [sym__scoreboard_players_command] = STATE(37),
    [anon_sym_objectives] = ACTIONS(55),
    [anon_sym_players] = ACTIONS(57),
  },
  [11] = {
    [anon_sym_remove] = ACTIONS(59),
    [anon_sym_modify] = ACTIONS(61),
    [anon_sym_add] = ACTIONS(59),
    [anon_sym_list] = ACTIONS(63),
    [anon_sym_empty] = ACTIONS(59),
    [anon_sym_join] = ACTIONS(65),
    [anon_sym_leave] = ACTIONS(67),
  },
  [12] = {
    [sym_selector] = STATE(44),
    [anon_sym_AT] = ACTIONS(69),
  },
  [13] = {
    [sym__execute_as_command] = STATE(57),
    [sym__execute_at_command] = STATE(57),
    [sym__execute_if_command] = STATE(57),
    [sym__execute_unless_command] = STATE(57),
    [sym__execute_in_command] = STATE(57),
    [sym__execute_positioned_command] = STATE(57),
    [sym__execute_rotated_command] = STATE(57),
    [sym__execute_facing_command] = STATE(57),
    [sym__execute_store_command] = STATE(57),
    [sym__execute_anchored_command] = STATE(57),
    [sym__execute_align_command] = STATE(57),
    [aux_sym__execute_command_repeat1] = STATE(57),
    [sym__line_break] = ACTIONS(71),
    [anon_sym_run] = ACTIONS(73),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_at] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_unless] = ACTIONS(81),
    [anon_sym_in] = ACTIONS(83),
    [anon_sym_positioned] = ACTIONS(85),
    [anon_sym_rotated] = ACTIONS(87),
    [anon_sym_facing] = ACTIONS(89),
    [anon_sym_store] = ACTIONS(91),
    [anon_sym_anchored] = ACTIONS(93),
    [anon_sym_align] = ACTIONS(95),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(97),
  },
  [15] = {
    [sym__line_break] = ACTIONS(99),
  },
  [16] = {
    [sym__line_break] = ACTIONS(101),
  },
  [17] = {
    [sym_comment] = STATE(15),
    [sym_command] = STATE(15),
    [sym__teleport_command] = STATE(16),
    [sym__setblock_command] = STATE(16),
    [sym__summon_command] = STATE(16),
    [sym__say_command] = STATE(16),
    [sym__data_command] = STATE(16),
    [sym__function_command] = STATE(16),
    [sym__schedule_command] = STATE(16),
    [sym__scoreboard_command] = STATE(16),
    [sym__team_command] = STATE(16),
    [sym__tag_command] = STATE(16),
    [sym__execute_command] = STATE(16),
    [aux_sym_function_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(103),
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
    [anon_sym_execute] = ACTIONS(29),
  },
  [18] = {
    [sym__line_break] = ACTIONS(105),
  },
  [19] = {
    [anon_sym_p] = ACTIONS(107),
    [anon_sym_a] = ACTIONS(107),
    [anon_sym_r] = ACTIONS(107),
    [anon_sym_s] = ACTIONS(107),
    [anon_sym_e] = ACTIONS(107),
  },
  [20] = {
    [sym__line_break] = ACTIONS(109),
  },
  [21] = {
    [sym_coordinate] = ACTIONS(111),
  },
  [22] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(113),
  },
  [23] = {
    [sym_coordinate] = ACTIONS(115),
  },
  [24] = {
    [sym__coordinate3] = STATE(64),
    [sym_coordinate] = ACTIONS(117),
  },
  [25] = {
    [sym__line_break] = ACTIONS(119),
  },
  [26] = {
    [sym__line_break] = ACTIONS(121),
  },
  [27] = {
    [anon_sym_entity] = ACTIONS(123),
    [anon_sym_block] = ACTIONS(125),
  },
  [28] = {
    [anon_sym_entity] = ACTIONS(127),
    [anon_sym_block] = ACTIONS(129),
  },
  [29] = {
    [anon_sym_entity] = ACTIONS(131),
    [anon_sym_block] = ACTIONS(133),
  },
  [30] = {
    [anon_sym_entity] = ACTIONS(135),
    [anon_sym_block] = ACTIONS(137),
  },
  [31] = {
    [sym__line_break] = ACTIONS(139),
  },
  [32] = {
    [sym__line_break] = ACTIONS(141),
  },
  [33] = {
    [sym__line_break] = ACTIONS(143),
  },
  [34] = {
    [sym_function_name] = STATE(74),
    [aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH] = ACTIONS(145),
  },
  [35] = {
    [anon_sym_remove] = ACTIONS(147),
    [anon_sym_modify] = ACTIONS(149),
    [anon_sym_add] = ACTIONS(151),
    [anon_sym_list] = ACTIONS(153),
    [anon_sym_setdisplay] = ACTIONS(155),
  },
  [36] = {
    [anon_sym_get] = ACTIONS(157),
    [anon_sym_remove] = ACTIONS(159),
    [anon_sym_set] = ACTIONS(159),
    [anon_sym_add] = ACTIONS(159),
    [anon_sym_list] = ACTIONS(161),
    [anon_sym_enable] = ACTIONS(157),
    [anon_sym_operation] = ACTIONS(163),
    [anon_sym_reset] = ACTIONS(165),
  },
  [37] = {
    [sym__line_break] = ACTIONS(167),
  },
  [38] = {
    [sym_team] = STATE(86),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(169),
  },
  [39] = {
    [sym_team] = STATE(88),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(171),
  },
  [40] = {
    [sym_team] = STATE(86),
    [sym__line_break] = ACTIONS(173),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(175),
  },
  [41] = {
    [sym_team] = STATE(89),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(171),
  },
  [42] = {
    [sym_selector] = STATE(86),
    [anon_sym_AT] = ACTIONS(33),
  },
  [43] = {
    [anon_sym_p] = ACTIONS(177),
    [anon_sym_a] = ACTIONS(177),
    [anon_sym_r] = ACTIONS(177),
    [anon_sym_s] = ACTIONS(177),
    [anon_sym_e] = ACTIONS(177),
  },
  [44] = {
    [anon_sym_remove] = ACTIONS(179),
    [anon_sym_add] = ACTIONS(179),
    [anon_sym_list] = ACTIONS(181),
  },
  [45] = {
    [sym_command] = STATE(93),
    [sym__teleport_command] = STATE(16),
    [sym__setblock_command] = STATE(16),
    [sym__summon_command] = STATE(16),
    [sym__say_command] = STATE(16),
    [sym__data_command] = STATE(16),
    [sym__function_command] = STATE(16),
    [sym__schedule_command] = STATE(16),
    [sym__scoreboard_command] = STATE(16),
    [sym__team_command] = STATE(16),
    [sym__tag_command] = STATE(16),
    [sym__execute_command] = STATE(16),
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
    [anon_sym_execute] = ACTIONS(29),
  },
  [46] = {
    [sym_selector] = STATE(94),
    [anon_sym_AT] = ACTIONS(33),
  },
  [47] = {
    [sym_selector] = STATE(95),
    [anon_sym_AT] = ACTIONS(33),
  },
  [48] = {
    [sym__if_unless_command] = STATE(101),
    [anon_sym_data] = ACTIONS(183),
    [anon_sym_entity] = ACTIONS(185),
    [anon_sym_block] = ACTIONS(187),
    [anon_sym_blocks] = ACTIONS(189),
    [anon_sym_score] = ACTIONS(191),
  },
  [49] = {
    [sym__if_unless_command] = STATE(102),
    [anon_sym_data] = ACTIONS(183),
    [anon_sym_entity] = ACTIONS(185),
    [anon_sym_block] = ACTIONS(187),
    [anon_sym_blocks] = ACTIONS(189),
    [anon_sym_score] = ACTIONS(191),
  },
  [50] = {
    [sym_dimension] = STATE(105),
    [anon_sym_minecraft] = ACTIONS(193),
    [anon_sym_overworld] = ACTIONS(195),
    [anon_sym_the_nether] = ACTIONS(195),
    [anon_sym_the_end] = ACTIONS(195),
  },
  [51] = {
    [sym__coordinate3] = STATE(107),
    [anon_sym_as] = ACTIONS(197),
    [sym_coordinate] = ACTIONS(117),
  },
  [52] = {
    [anon_sym_as] = ACTIONS(199),
    [sym_coordinate] = ACTIONS(201),
  },
  [53] = {
    [sym__coordinate3] = STATE(111),
    [anon_sym_entity] = ACTIONS(203),
    [sym_coordinate] = ACTIONS(117),
  },
  [54] = {
    [anon_sym_result] = ACTIONS(205),
    [anon_sym_success] = ACTIONS(205),
  },
  [55] = {
    [sym_anchor] = STATE(114),
    [anon_sym_feet] = ACTIONS(207),
    [anon_sym_eyes] = ACTIONS(207),
  },
  [56] = {
    [sym_axes_swizzle] = STATE(116),
    [aux_sym_SLASHxy_QMARKz_QMARK_SLASH] = ACTIONS(209),
    [aux_sym_SLASHx_QMARKyz_QMARK_SLASH] = ACTIONS(211),
    [aux_sym_SLASHx_QMARKy_QMARKz_SLASH] = ACTIONS(211),
  },
  [57] = {
    [sym__execute_as_command] = STATE(118),
    [sym__execute_at_command] = STATE(118),
    [sym__execute_if_command] = STATE(118),
    [sym__execute_unless_command] = STATE(118),
    [sym__execute_in_command] = STATE(118),
    [sym__execute_positioned_command] = STATE(118),
    [sym__execute_rotated_command] = STATE(118),
    [sym__execute_facing_command] = STATE(118),
    [sym__execute_store_command] = STATE(118),
    [sym__execute_anchored_command] = STATE(118),
    [sym__execute_align_command] = STATE(118),
    [aux_sym__execute_command_repeat1] = STATE(118),
    [sym__line_break] = ACTIONS(213),
    [anon_sym_run] = ACTIONS(215),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_at] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_unless] = ACTIONS(81),
    [anon_sym_in] = ACTIONS(83),
    [anon_sym_positioned] = ACTIONS(85),
    [anon_sym_rotated] = ACTIONS(87),
    [anon_sym_facing] = ACTIONS(89),
    [anon_sym_store] = ACTIONS(91),
    [anon_sym_anchored] = ACTIONS(93),
    [anon_sym_align] = ACTIONS(95),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_teleport] = ACTIONS(217),
    [anon_sym_tp] = ACTIONS(217),
    [anon_sym_setblock] = ACTIONS(217),
    [anon_sym_summon] = ACTIONS(217),
    [anon_sym_say] = ACTIONS(217),
    [anon_sym_data] = ACTIONS(217),
    [anon_sym_function] = ACTIONS(217),
    [anon_sym_schedule] = ACTIONS(217),
    [anon_sym_scoreboard] = ACTIONS(217),
    [anon_sym_team] = ACTIONS(217),
    [anon_sym_tag] = ACTIONS(217),
    [anon_sym_execute] = ACTIONS(217),
  },
  [59] = {
    [sym_comment] = STATE(15),
    [sym_command] = STATE(15),
    [sym__teleport_command] = STATE(16),
    [sym__setblock_command] = STATE(16),
    [sym__summon_command] = STATE(16),
    [sym__say_command] = STATE(16),
    [sym__data_command] = STATE(16),
    [sym__function_command] = STATE(16),
    [sym__schedule_command] = STATE(16),
    [sym__scoreboard_command] = STATE(16),
    [sym__team_command] = STATE(16),
    [sym__tag_command] = STATE(16),
    [sym__execute_command] = STATE(16),
    [aux_sym_function_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
    [anon_sym_teleport] = ACTIONS(222),
    [anon_sym_tp] = ACTIONS(222),
    [anon_sym_setblock] = ACTIONS(225),
    [anon_sym_summon] = ACTIONS(228),
    [anon_sym_say] = ACTIONS(231),
    [anon_sym_data] = ACTIONS(234),
    [anon_sym_function] = ACTIONS(237),
    [anon_sym_schedule] = ACTIONS(240),
    [anon_sym_scoreboard] = ACTIONS(243),
    [anon_sym_team] = ACTIONS(246),
    [anon_sym_tag] = ACTIONS(249),
    [anon_sym_execute] = ACTIONS(252),
  },
  [60] = {
    [sym__line_break] = ACTIONS(255),
    [anon_sym_run] = ACTIONS(257),
    [anon_sym_as] = ACTIONS(257),
    [anon_sym_at] = ACTIONS(257),
    [anon_sym_if] = ACTIONS(257),
    [anon_sym_unless] = ACTIONS(257),
    [anon_sym_in] = ACTIONS(257),
    [anon_sym_positioned] = ACTIONS(257),
    [anon_sym_rotated] = ACTIONS(257),
    [anon_sym_facing] = ACTIONS(257),
    [anon_sym_store] = ACTIONS(257),
    [anon_sym_anchored] = ACTIONS(257),
    [anon_sym_align] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(259),
  },
  [61] = {
    [sym_coordinate] = ACTIONS(261),
  },
  [62] = {
    [sym_coordinate] = ACTIONS(263),
  },
  [63] = {
    [sym_coordinate] = ACTIONS(265),
  },
  [64] = {
    [sym_nbt_compound] = STATE(123),
    [sym__line_break] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [65] = {
    [sym_selector] = STATE(124),
    [anon_sym_AT] = ACTIONS(69),
  },
  [66] = {
    [sym__coordinate3] = STATE(124),
    [sym_coordinate] = ACTIONS(271),
  },
  [67] = {
    [sym_selector] = STATE(127),
    [anon_sym_AT] = ACTIONS(273),
  },
  [68] = {
    [sym__coordinate3] = STATE(127),
    [sym_coordinate] = ACTIONS(275),
  },
  [69] = {
    [sym_selector] = STATE(130),
    [anon_sym_AT] = ACTIONS(277),
  },
  [70] = {
    [sym__coordinate3] = STATE(130),
    [sym_coordinate] = ACTIONS(279),
  },
  [71] = {
    [sym_selector] = STATE(132),
    [anon_sym_AT] = ACTIONS(277),
  },
  [72] = {
    [sym__coordinate3] = STATE(132),
    [sym_coordinate] = ACTIONS(279),
  },
  [73] = {
    [sym_time] = ACTIONS(141),
  },
  [74] = {
    [sym_time] = ACTIONS(281),
  },
  [75] = {
    [sym_objective] = STATE(135),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(283),
  },
  [76] = {
    [sym_objective] = STATE(137),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(285),
  },
  [77] = {
    [sym_objective] = STATE(139),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(287),
  },
  [78] = {
    [sym__line_break] = ACTIONS(289),
  },
  [79] = {
    [anon_sym_list] = ACTIONS(291),
    [anon_sym_belowName] = ACTIONS(291),
    [anon_sym_sidebar] = ACTIONS(293),
    [anon_sym_sidebar_DOTteam_DOTaqua] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTblack] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTblue] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTdark_aqua] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTdark_blue] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTdark_gray] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTdark_green] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTdark_purple] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTdark_red] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTgold] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTgray] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTgreen] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTlight_purple] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTred] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTwhite] = ACTIONS(291),
    [anon_sym_sidebar_DOTteam_DOTyellow] = ACTIONS(291),
  },
  [80] = {
    [sym_selector] = STATE(142),
    [anon_sym_AT] = ACTIONS(295),
  },
  [81] = {
    [sym_selector] = STATE(143),
    [anon_sym_AT] = ACTIONS(295),
  },
  [82] = {
    [sym_selector] = STATE(144),
    [anon_sym_AT] = ACTIONS(33),
  },
  [83] = {
    [sym_selector] = STATE(145),
    [anon_sym_AT] = ACTIONS(295),
  },
  [84] = {
    [sym_selector] = STATE(147),
    [anon_sym_AT] = ACTIONS(297),
  },
  [85] = {
    [sym__line_break] = ACTIONS(299),
  },
  [86] = {
    [sym__line_break] = ACTIONS(301),
  },
  [87] = {
    [anon_sym_AT] = ACTIONS(299),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(299),
  },
  [88] = {
    [sym_team_option] = STATE(149),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(303),
  },
  [89] = {
    [sym_selector] = STATE(150),
    [anon_sym_AT] = ACTIONS(33),
  },
  [90] = {
    [anon_sym_remove] = ACTIONS(255),
    [anon_sym_add] = ACTIONS(255),
    [anon_sym_list] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(255),
  },
  [91] = {
    [sym_tag] = ACTIONS(307),
  },
  [92] = {
    [sym__line_break] = ACTIONS(309),
  },
  [93] = {
    [sym__line_break] = ACTIONS(311),
  },
  [94] = {
    [sym__line_break] = ACTIONS(313),
    [anon_sym_run] = ACTIONS(315),
    [anon_sym_as] = ACTIONS(315),
    [anon_sym_at] = ACTIONS(315),
    [anon_sym_if] = ACTIONS(315),
    [anon_sym_unless] = ACTIONS(315),
    [anon_sym_in] = ACTIONS(315),
    [anon_sym_positioned] = ACTIONS(315),
    [anon_sym_rotated] = ACTIONS(315),
    [anon_sym_facing] = ACTIONS(315),
    [anon_sym_store] = ACTIONS(315),
    [anon_sym_anchored] = ACTIONS(315),
    [anon_sym_align] = ACTIONS(315),
  },
  [95] = {
    [sym__line_break] = ACTIONS(317),
    [anon_sym_run] = ACTIONS(319),
    [anon_sym_as] = ACTIONS(319),
    [anon_sym_at] = ACTIONS(319),
    [anon_sym_if] = ACTIONS(319),
    [anon_sym_unless] = ACTIONS(319),
    [anon_sym_in] = ACTIONS(319),
    [anon_sym_positioned] = ACTIONS(319),
    [anon_sym_rotated] = ACTIONS(319),
    [anon_sym_facing] = ACTIONS(319),
    [anon_sym_store] = ACTIONS(319),
    [anon_sym_anchored] = ACTIONS(319),
    [anon_sym_align] = ACTIONS(319),
  },
  [96] = {
    [anon_sym_entity] = ACTIONS(321),
    [anon_sym_block] = ACTIONS(323),
  },
  [97] = {
    [sym_selector] = STATE(155),
    [anon_sym_AT] = ACTIONS(33),
  },
  [98] = {
    [sym__coordinate3] = STATE(156),
    [sym_coordinate] = ACTIONS(271),
  },
  [99] = {
    [sym__coordinate3] = STATE(157),
    [sym_coordinate] = ACTIONS(271),
  },
  [100] = {
    [sym_selector] = STATE(158),
    [anon_sym_AT] = ACTIONS(295),
  },
  [101] = {
    [sym__line_break] = ACTIONS(325),
    [anon_sym_run] = ACTIONS(327),
    [anon_sym_as] = ACTIONS(327),
    [anon_sym_at] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_unless] = ACTIONS(327),
    [anon_sym_in] = ACTIONS(327),
    [anon_sym_positioned] = ACTIONS(327),
    [anon_sym_rotated] = ACTIONS(327),
    [anon_sym_facing] = ACTIONS(327),
    [anon_sym_store] = ACTIONS(327),
    [anon_sym_anchored] = ACTIONS(327),
    [anon_sym_align] = ACTIONS(327),
  },
  [102] = {
    [sym__line_break] = ACTIONS(329),
    [anon_sym_run] = ACTIONS(331),
    [anon_sym_as] = ACTIONS(331),
    [anon_sym_at] = ACTIONS(331),
    [anon_sym_if] = ACTIONS(331),
    [anon_sym_unless] = ACTIONS(331),
    [anon_sym_in] = ACTIONS(331),
    [anon_sym_positioned] = ACTIONS(331),
    [anon_sym_rotated] = ACTIONS(331),
    [anon_sym_facing] = ACTIONS(331),
    [anon_sym_store] = ACTIONS(331),
    [anon_sym_anchored] = ACTIONS(331),
    [anon_sym_align] = ACTIONS(331),
  },
  [103] = {
    [anon_sym_COLON] = ACTIONS(333),
  },
  [104] = {
    [sym__line_break] = ACTIONS(335),
    [anon_sym_run] = ACTIONS(337),
    [anon_sym_as] = ACTIONS(337),
    [anon_sym_at] = ACTIONS(337),
    [anon_sym_if] = ACTIONS(337),
    [anon_sym_unless] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_positioned] = ACTIONS(337),
    [anon_sym_rotated] = ACTIONS(337),
    [anon_sym_facing] = ACTIONS(337),
    [anon_sym_store] = ACTIONS(337),
    [anon_sym_anchored] = ACTIONS(337),
    [anon_sym_align] = ACTIONS(337),
  },
  [105] = {
    [sym__line_break] = ACTIONS(339),
    [anon_sym_run] = ACTIONS(341),
    [anon_sym_as] = ACTIONS(341),
    [anon_sym_at] = ACTIONS(341),
    [anon_sym_if] = ACTIONS(341),
    [anon_sym_unless] = ACTIONS(341),
    [anon_sym_in] = ACTIONS(341),
    [anon_sym_positioned] = ACTIONS(341),
    [anon_sym_rotated] = ACTIONS(341),
    [anon_sym_facing] = ACTIONS(341),
    [anon_sym_store] = ACTIONS(341),
    [anon_sym_anchored] = ACTIONS(341),
    [anon_sym_align] = ACTIONS(341),
  },
  [106] = {
    [sym_selector] = STATE(160),
    [anon_sym_AT] = ACTIONS(33),
  },
  [107] = {
    [sym__line_break] = ACTIONS(343),
    [anon_sym_run] = ACTIONS(345),
    [anon_sym_as] = ACTIONS(345),
    [anon_sym_at] = ACTIONS(345),
    [anon_sym_if] = ACTIONS(345),
    [anon_sym_unless] = ACTIONS(345),
    [anon_sym_in] = ACTIONS(345),
    [anon_sym_positioned] = ACTIONS(345),
    [anon_sym_rotated] = ACTIONS(345),
    [anon_sym_facing] = ACTIONS(345),
    [anon_sym_store] = ACTIONS(345),
    [anon_sym_anchored] = ACTIONS(345),
    [anon_sym_align] = ACTIONS(345),
  },
  [108] = {
    [sym_selector] = STATE(161),
    [anon_sym_AT] = ACTIONS(33),
  },
  [109] = {
    [sym_coordinate] = ACTIONS(347),
  },
  [110] = {
    [sym_selector] = STATE(162),
    [anon_sym_AT] = ACTIONS(33),
  },
  [111] = {
    [sym__line_break] = ACTIONS(349),
    [anon_sym_run] = ACTIONS(351),
    [anon_sym_as] = ACTIONS(351),
    [anon_sym_at] = ACTIONS(351),
    [anon_sym_if] = ACTIONS(351),
    [anon_sym_unless] = ACTIONS(351),
    [anon_sym_in] = ACTIONS(351),
    [anon_sym_positioned] = ACTIONS(351),
    [anon_sym_rotated] = ACTIONS(351),
    [anon_sym_facing] = ACTIONS(351),
    [anon_sym_store] = ACTIONS(351),
    [anon_sym_anchored] = ACTIONS(351),
    [anon_sym_align] = ACTIONS(351),
  },
  [112] = {
    [anon_sym_entity] = ACTIONS(353),
    [anon_sym_block] = ACTIONS(355),
    [anon_sym_score] = ACTIONS(357),
    [anon_sym_bossbar] = ACTIONS(359),
  },
  [113] = {
    [sym__line_break] = ACTIONS(361),
    [anon_sym_run] = ACTIONS(363),
    [anon_sym_as] = ACTIONS(363),
    [anon_sym_at] = ACTIONS(363),
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_unless] = ACTIONS(363),
    [anon_sym_in] = ACTIONS(363),
    [anon_sym_positioned] = ACTIONS(363),
    [anon_sym_rotated] = ACTIONS(363),
    [anon_sym_facing] = ACTIONS(363),
    [anon_sym_store] = ACTIONS(363),
    [anon_sym_anchored] = ACTIONS(363),
    [anon_sym_align] = ACTIONS(363),
  },
  [114] = {
    [sym__line_break] = ACTIONS(365),
    [anon_sym_run] = ACTIONS(367),
    [anon_sym_as] = ACTIONS(367),
    [anon_sym_at] = ACTIONS(367),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_unless] = ACTIONS(367),
    [anon_sym_in] = ACTIONS(367),
    [anon_sym_positioned] = ACTIONS(367),
    [anon_sym_rotated] = ACTIONS(367),
    [anon_sym_facing] = ACTIONS(367),
    [anon_sym_store] = ACTIONS(367),
    [anon_sym_anchored] = ACTIONS(367),
    [anon_sym_align] = ACTIONS(367),
  },
  [115] = {
    [sym__line_break] = ACTIONS(369),
    [anon_sym_run] = ACTIONS(371),
    [anon_sym_as] = ACTIONS(371),
    [anon_sym_at] = ACTIONS(371),
    [anon_sym_if] = ACTIONS(371),
    [anon_sym_unless] = ACTIONS(371),
    [anon_sym_in] = ACTIONS(371),
    [anon_sym_positioned] = ACTIONS(371),
    [anon_sym_rotated] = ACTIONS(371),
    [anon_sym_facing] = ACTIONS(371),
    [anon_sym_store] = ACTIONS(371),
    [anon_sym_anchored] = ACTIONS(371),
    [anon_sym_align] = ACTIONS(371),
  },
  [116] = {
    [sym__line_break] = ACTIONS(373),
    [anon_sym_run] = ACTIONS(375),
    [anon_sym_as] = ACTIONS(375),
    [anon_sym_at] = ACTIONS(375),
    [anon_sym_if] = ACTIONS(375),
    [anon_sym_unless] = ACTIONS(375),
    [anon_sym_in] = ACTIONS(375),
    [anon_sym_positioned] = ACTIONS(375),
    [anon_sym_rotated] = ACTIONS(375),
    [anon_sym_facing] = ACTIONS(375),
    [anon_sym_store] = ACTIONS(375),
    [anon_sym_anchored] = ACTIONS(375),
    [anon_sym_align] = ACTIONS(375),
  },
  [117] = {
    [sym_command] = STATE(167),
    [sym__teleport_command] = STATE(16),
    [sym__setblock_command] = STATE(16),
    [sym__summon_command] = STATE(16),
    [sym__say_command] = STATE(16),
    [sym__data_command] = STATE(16),
    [sym__function_command] = STATE(16),
    [sym__schedule_command] = STATE(16),
    [sym__scoreboard_command] = STATE(16),
    [sym__team_command] = STATE(16),
    [sym__tag_command] = STATE(16),
    [sym__execute_command] = STATE(16),
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
    [anon_sym_execute] = ACTIONS(29),
  },
  [118] = {
    [sym__execute_as_command] = STATE(118),
    [sym__execute_at_command] = STATE(118),
    [sym__execute_if_command] = STATE(118),
    [sym__execute_unless_command] = STATE(118),
    [sym__execute_in_command] = STATE(118),
    [sym__execute_positioned_command] = STATE(118),
    [sym__execute_rotated_command] = STATE(118),
    [sym__execute_facing_command] = STATE(118),
    [sym__execute_store_command] = STATE(118),
    [sym__execute_anchored_command] = STATE(118),
    [sym__execute_align_command] = STATE(118),
    [aux_sym__execute_command_repeat1] = STATE(118),
    [sym__line_break] = ACTIONS(377),
    [anon_sym_run] = ACTIONS(379),
    [anon_sym_as] = ACTIONS(381),
    [anon_sym_at] = ACTIONS(384),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_unless] = ACTIONS(390),
    [anon_sym_in] = ACTIONS(393),
    [anon_sym_positioned] = ACTIONS(396),
    [anon_sym_rotated] = ACTIONS(399),
    [anon_sym_facing] = ACTIONS(402),
    [anon_sym_store] = ACTIONS(405),
    [anon_sym_anchored] = ACTIONS(408),
    [anon_sym_align] = ACTIONS(411),
  },
  [119] = {
    [sym__selector_argument] = STATE(169),
    [sym_selector_key] = STATE(170),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(414),
  },
  [120] = {
    [sym_block] = STATE(174),
    [sym_block_type] = STATE(175),
    [anon_sym_POUND] = ACTIONS(416),
    [anon_sym_minecraft_COLON] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(420),
  },
  [121] = {
    [sym_coordinate] = ACTIONS(422),
  },
  [122] = {
    [sym__nbt_pair] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(424),
    [sym_nbt_key] = ACTIONS(426),
  },
  [123] = {
    [sym__line_break] = ACTIONS(428),
  },
  [124] = {
    [sym_nbt_compound] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(430),
  },
  [125] = {
    [sym_coordinate] = ACTIONS(432),
  },
  [126] = {
    [anon_sym_p] = ACTIONS(434),
    [anon_sym_a] = ACTIONS(434),
    [anon_sym_r] = ACTIONS(434),
    [anon_sym_s] = ACTIONS(434),
    [anon_sym_e] = ACTIONS(434),
  },
  [127] = {
    [sym__line_break] = ACTIONS(436),
    [sym_nbt_path] = ACTIONS(438),
  },
  [128] = {
    [sym_coordinate] = ACTIONS(440),
  },
  [129] = {
    [anon_sym_p] = ACTIONS(442),
    [anon_sym_a] = ACTIONS(442),
    [anon_sym_r] = ACTIONS(442),
    [anon_sym_s] = ACTIONS(442),
    [anon_sym_e] = ACTIONS(442),
  },
  [130] = {
    [sym_nbt_path] = ACTIONS(444),
  },
  [131] = {
    [sym_coordinate] = ACTIONS(446),
  },
  [132] = {
    [sym_nbt_path] = ACTIONS(448),
  },
  [133] = {
    [sym__line_break] = ACTIONS(450),
  },
  [134] = {
    [sym__line_break] = ACTIONS(452),
    [anon_sym_run] = ACTIONS(454),
    [anon_sym_as] = ACTIONS(454),
    [anon_sym_at] = ACTIONS(454),
    [anon_sym_if] = ACTIONS(454),
    [anon_sym_unless] = ACTIONS(454),
    [anon_sym_in] = ACTIONS(454),
    [anon_sym_positioned] = ACTIONS(454),
    [anon_sym_rotated] = ACTIONS(454),
    [anon_sym_facing] = ACTIONS(454),
    [anon_sym_store] = ACTIONS(454),
    [anon_sym_anchored] = ACTIONS(454),
    [anon_sym_align] = ACTIONS(454),
  },
  [135] = {
    [sym__line_break] = ACTIONS(456),
  },
  [136] = {
    [anon_sym_displayname] = ACTIONS(452),
    [anon_sym_rendertype] = ACTIONS(452),
    [anon_sym_matches] = ACTIONS(452),
    [anon_sym_EQ] = ACTIONS(452),
    [sym_integer] = ACTIONS(452),
    [anon_sym_PERCENT_EQ] = ACTIONS(452),
    [anon_sym_STAR_EQ] = ACTIONS(452),
    [anon_sym_PLUS_EQ] = ACTIONS(452),
    [anon_sym_DASH_EQ] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(452),
    [anon_sym_LT_EQ] = ACTIONS(452),
    [anon_sym_GT_EQ] = ACTIONS(452),
    [anon_sym_GT_LT] = ACTIONS(452),
    [anon_sym_LT] = ACTIONS(454),
    [anon_sym_GT] = ACTIONS(454),
  },
  [137] = {
    [anon_sym_displayname] = ACTIONS(458),
    [anon_sym_rendertype] = ACTIONS(460),
  },
  [138] = {
    [sym_scoreboard_criteria] = ACTIONS(452),
  },
  [139] = {
    [sym_scoreboard_criteria] = ACTIONS(458),
  },
  [140] = {
    [sym_objective] = STATE(189),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(283),
  },
  [141] = {
    [anon_sym_p] = ACTIONS(462),
    [anon_sym_a] = ACTIONS(462),
    [anon_sym_r] = ACTIONS(462),
    [anon_sym_s] = ACTIONS(462),
    [anon_sym_e] = ACTIONS(462),
  },
  [142] = {
    [sym_objective] = STATE(192),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(283),
  },
  [143] = {
    [sym_objective] = STATE(193),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(285),
  },
  [144] = {
    [sym__line_break] = ACTIONS(464),
  },
  [145] = {
    [sym_objective] = STATE(194),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(285),
  },
  [146] = {
    [anon_sym_p] = ACTIONS(466),
    [anon_sym_a] = ACTIONS(466),
    [anon_sym_r] = ACTIONS(466),
    [anon_sym_s] = ACTIONS(466),
    [anon_sym_e] = ACTIONS(466),
  },
  [147] = {
    [sym_objective] = STATE(192),
    [sym__line_break] = ACTIONS(464),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(468),
  },
  [148] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(470),
  },
  [149] = {
    [sym_team_option_value] = STATE(197),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(472),
  },
  [150] = {
    [sym__line_break] = ACTIONS(474),
  },
  [151] = {
    [sym__selector_argument] = STATE(198),
    [sym_selector_key] = STATE(170),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(414),
  },
  [152] = {
    [sym__line_break] = ACTIONS(476),
  },
  [153] = {
    [sym_selector] = STATE(199),
    [anon_sym_AT] = ACTIONS(277),
  },
  [154] = {
    [sym__coordinate3] = STATE(199),
    [sym_coordinate] = ACTIONS(279),
  },
  [155] = {
    [sym__line_break] = ACTIONS(478),
    [anon_sym_run] = ACTIONS(480),
    [anon_sym_as] = ACTIONS(480),
    [anon_sym_at] = ACTIONS(480),
    [anon_sym_if] = ACTIONS(480),
    [anon_sym_unless] = ACTIONS(480),
    [anon_sym_in] = ACTIONS(480),
    [anon_sym_positioned] = ACTIONS(480),
    [anon_sym_rotated] = ACTIONS(480),
    [anon_sym_facing] = ACTIONS(480),
    [anon_sym_store] = ACTIONS(480),
    [anon_sym_anchored] = ACTIONS(480),
    [anon_sym_align] = ACTIONS(480),
  },
  [156] = {
    [sym_block] = STATE(200),
    [sym_block_type] = STATE(175),
    [anon_sym_POUND] = ACTIONS(416),
    [anon_sym_minecraft_COLON] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(420),
  },
  [157] = {
    [sym__coordinate3] = STATE(201),
    [sym_coordinate] = ACTIONS(271),
  },
  [158] = {
    [sym_objective] = STATE(202),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(285),
  },
  [159] = {
    [anon_sym_overworld] = ACTIONS(482),
    [anon_sym_the_nether] = ACTIONS(482),
    [anon_sym_the_end] = ACTIONS(482),
  },
  [160] = {
    [sym__line_break] = ACTIONS(484),
    [anon_sym_run] = ACTIONS(486),
    [anon_sym_as] = ACTIONS(486),
    [anon_sym_at] = ACTIONS(486),
    [anon_sym_if] = ACTIONS(486),
    [anon_sym_unless] = ACTIONS(486),
    [anon_sym_in] = ACTIONS(486),
    [anon_sym_positioned] = ACTIONS(486),
    [anon_sym_rotated] = ACTIONS(486),
    [anon_sym_facing] = ACTIONS(486),
    [anon_sym_store] = ACTIONS(486),
    [anon_sym_anchored] = ACTIONS(486),
    [anon_sym_align] = ACTIONS(486),
  },
  [161] = {
    [sym__line_break] = ACTIONS(488),
    [anon_sym_run] = ACTIONS(490),
    [anon_sym_as] = ACTIONS(490),
    [anon_sym_at] = ACTIONS(490),
    [anon_sym_if] = ACTIONS(490),
    [anon_sym_unless] = ACTIONS(490),
    [anon_sym_in] = ACTIONS(490),
    [anon_sym_positioned] = ACTIONS(490),
    [anon_sym_rotated] = ACTIONS(490),
    [anon_sym_facing] = ACTIONS(490),
    [anon_sym_store] = ACTIONS(490),
    [anon_sym_anchored] = ACTIONS(490),
    [anon_sym_align] = ACTIONS(490),
  },
  [162] = {
    [sym__line_break] = ACTIONS(492),
    [anon_sym_run] = ACTIONS(494),
    [anon_sym_as] = ACTIONS(494),
    [anon_sym_at] = ACTIONS(494),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_unless] = ACTIONS(494),
    [anon_sym_in] = ACTIONS(494),
    [anon_sym_positioned] = ACTIONS(494),
    [anon_sym_rotated] = ACTIONS(494),
    [anon_sym_facing] = ACTIONS(494),
    [anon_sym_store] = ACTIONS(494),
    [anon_sym_anchored] = ACTIONS(494),
    [anon_sym_align] = ACTIONS(494),
  },
  [163] = {
    [sym_selector] = STATE(204),
    [anon_sym_AT] = ACTIONS(277),
  },
  [164] = {
    [sym__coordinate3] = STATE(204),
    [sym_coordinate] = ACTIONS(279),
  },
  [165] = {
    [sym_selector] = STATE(205),
    [anon_sym_AT] = ACTIONS(295),
  },
  [166] = {
    [sym_bossbar] = STATE(207),
    [aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH] = ACTIONS(496),
  },
  [167] = {
    [sym__line_break] = ACTIONS(498),
  },
  [168] = {
    [anon_sym_EQ] = ACTIONS(500),
  },
  [169] = {
    [aux_sym_selector_repeat1] = STATE(210),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(504),
  },
  [170] = {
    [anon_sym_EQ] = ACTIONS(506),
  },
  [171] = {
    [sym_block_type] = STATE(212),
    [anon_sym_minecraft_COLON] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(420),
  },
  [172] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(508),
  },
  [173] = {
    [sym__line_break] = ACTIONS(510),
    [anon_sym_run] = ACTIONS(512),
    [anon_sym_as] = ACTIONS(512),
    [anon_sym_at] = ACTIONS(512),
    [anon_sym_if] = ACTIONS(512),
    [anon_sym_unless] = ACTIONS(512),
    [anon_sym_in] = ACTIONS(512),
    [anon_sym_positioned] = ACTIONS(512),
    [anon_sym_rotated] = ACTIONS(512),
    [anon_sym_facing] = ACTIONS(512),
    [anon_sym_store] = ACTIONS(512),
    [anon_sym_anchored] = ACTIONS(512),
    [anon_sym_align] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_LBRACE] = ACTIONS(512),
  },
  [174] = {
    [sym__line_break] = ACTIONS(514),
  },
  [175] = {
    [sym_block_state] = STATE(215),
    [sym_nbt_compound] = STATE(216),
    [sym__line_break] = ACTIONS(516),
    [anon_sym_run] = ACTIONS(518),
    [anon_sym_as] = ACTIONS(518),
    [anon_sym_at] = ACTIONS(518),
    [anon_sym_if] = ACTIONS(518),
    [anon_sym_unless] = ACTIONS(518),
    [anon_sym_in] = ACTIONS(518),
    [anon_sym_positioned] = ACTIONS(518),
    [anon_sym_rotated] = ACTIONS(518),
    [anon_sym_facing] = ACTIONS(518),
    [anon_sym_store] = ACTIONS(518),
    [anon_sym_anchored] = ACTIONS(518),
    [anon_sym_align] = ACTIONS(518),
    [anon_sym_LBRACK] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [176] = {
    [sym__line_break] = ACTIONS(522),
    [anon_sym_run] = ACTIONS(524),
    [anon_sym_as] = ACTIONS(524),
    [anon_sym_at] = ACTIONS(524),
    [anon_sym_if] = ACTIONS(524),
    [anon_sym_unless] = ACTIONS(524),
    [anon_sym_in] = ACTIONS(524),
    [anon_sym_positioned] = ACTIONS(524),
    [anon_sym_rotated] = ACTIONS(524),
    [anon_sym_facing] = ACTIONS(524),
    [anon_sym_store] = ACTIONS(524),
    [anon_sym_anchored] = ACTIONS(524),
    [anon_sym_align] = ACTIONS(524),
    [anon_sym_LBRACE] = ACTIONS(524),
  },
  [177] = {
    [sym__line_break] = ACTIONS(526),
    [anon_sym_run] = ACTIONS(528),
    [anon_sym_as] = ACTIONS(528),
    [anon_sym_at] = ACTIONS(528),
    [anon_sym_if] = ACTIONS(528),
    [anon_sym_unless] = ACTIONS(528),
    [anon_sym_in] = ACTIONS(528),
    [anon_sym_positioned] = ACTIONS(528),
    [anon_sym_rotated] = ACTIONS(528),
    [anon_sym_facing] = ACTIONS(528),
    [anon_sym_store] = ACTIONS(528),
    [anon_sym_anchored] = ACTIONS(528),
    [anon_sym_align] = ACTIONS(528),
  },
  [178] = {
    [anon_sym_COLON] = ACTIONS(530),
  },
  [179] = {
    [aux_sym_nbt_compound_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(534),
  },
  [180] = {
    [sym__line_break] = ACTIONS(536),
  },
  [181] = {
    [sym_coordinate] = ACTIONS(538),
  },
  [182] = {
    [sym__line_break] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(540),
    [sym_nbt_path] = ACTIONS(257),
  },
  [183] = {
    [sym__line_break] = ACTIONS(542),
  },
  [184] = {
    [sym_coordinate] = ACTIONS(544),
  },
  [185] = {
    [anon_sym_LBRACK] = ACTIONS(546),
    [sym_nbt_path] = ACTIONS(257),
  },
  [186] = {
    [sym__line_break] = ACTIONS(548),
  },
  [187] = {
    [sym_coordinate] = ACTIONS(550),
  },
  [188] = {
    [anon_sym_merge] = ACTIONS(552),
    [anon_sym_set] = ACTIONS(552),
    [anon_sym_append] = ACTIONS(552),
    [anon_sym_prepend] = ACTIONS(552),
    [anon_sym_insert] = ACTIONS(554),
  },
  [189] = {
    [sym__line_break] = ACTIONS(556),
  },
  [190] = {
    [anon_sym_hearts] = ACTIONS(558),
    [anon_sym_integer] = ACTIONS(558),
  },
  [191] = {
    [anon_sym_LBRACK] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(255),
  },
  [192] = {
    [sym__line_break] = ACTIONS(562),
  },
  [193] = {
    [sym_integer] = ACTIONS(564),
  },
  [194] = {
    [sym_scoreboard_operator] = STATE(232),
    [anon_sym_EQ] = ACTIONS(566),
    [anon_sym_PERCENT_EQ] = ACTIONS(566),
    [anon_sym_STAR_EQ] = ACTIONS(566),
    [anon_sym_PLUS_EQ] = ACTIONS(566),
    [anon_sym_DASH_EQ] = ACTIONS(566),
    [anon_sym_SLASH_EQ] = ACTIONS(566),
    [anon_sym_LT_EQ] = ACTIONS(566),
    [anon_sym_GT_EQ] = ACTIONS(566),
    [anon_sym_GT_LT] = ACTIONS(566),
  },
  [195] = {
    [sym__line_break] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(568),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(257),
  },
  [196] = {
    [sym__line_break] = ACTIONS(570),
  },
  [197] = {
    [sym__line_break] = ACTIONS(572),
  },
  [198] = {
    [aux_sym_selector_repeat1] = STATE(235),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(574),
  },
  [199] = {
    [sym_nbt_path] = ACTIONS(576),
  },
  [200] = {
    [sym__line_break] = ACTIONS(578),
    [anon_sym_run] = ACTIONS(580),
    [anon_sym_as] = ACTIONS(580),
    [anon_sym_at] = ACTIONS(580),
    [anon_sym_if] = ACTIONS(580),
    [anon_sym_unless] = ACTIONS(580),
    [anon_sym_in] = ACTIONS(580),
    [anon_sym_positioned] = ACTIONS(580),
    [anon_sym_rotated] = ACTIONS(580),
    [anon_sym_facing] = ACTIONS(580),
    [anon_sym_store] = ACTIONS(580),
    [anon_sym_anchored] = ACTIONS(580),
    [anon_sym_align] = ACTIONS(580),
  },
  [201] = {
    [sym__coordinate3] = STATE(238),
    [sym_coordinate] = ACTIONS(582),
  },
  [202] = {
    [sym_scoreboard_comparator] = STATE(241),
    [anon_sym_matches] = ACTIONS(584),
    [anon_sym_EQ] = ACTIONS(586),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [anon_sym_LT] = ACTIONS(588),
    [anon_sym_GT] = ACTIONS(588),
  },
  [203] = {
    [sym__line_break] = ACTIONS(590),
    [anon_sym_run] = ACTIONS(592),
    [anon_sym_as] = ACTIONS(592),
    [anon_sym_at] = ACTIONS(592),
    [anon_sym_if] = ACTIONS(592),
    [anon_sym_unless] = ACTIONS(592),
    [anon_sym_in] = ACTIONS(592),
    [anon_sym_positioned] = ACTIONS(592),
    [anon_sym_rotated] = ACTIONS(592),
    [anon_sym_facing] = ACTIONS(592),
    [anon_sym_store] = ACTIONS(592),
    [anon_sym_anchored] = ACTIONS(592),
    [anon_sym_align] = ACTIONS(592),
  },
  [204] = {
    [sym_nbt_path] = ACTIONS(594),
  },
  [205] = {
    [sym_objective] = STATE(243),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(283),
  },
  [206] = {
    [anon_sym_value] = ACTIONS(596),
    [anon_sym_max] = ACTIONS(596),
  },
  [207] = {
    [anon_sym_value] = ACTIONS(598),
    [anon_sym_max] = ACTIONS(598),
  },
  [208] = {
    [sym__selector_argument] = STATE(244),
    [sym_selector_key] = STATE(170),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(414),
  },
  [209] = {
    [sym__line_break] = ACTIONS(600),
    [anon_sym_run] = ACTIONS(602),
    [anon_sym_as] = ACTIONS(602),
    [anon_sym_at] = ACTIONS(602),
    [anon_sym_if] = ACTIONS(602),
    [anon_sym_unless] = ACTIONS(602),
    [anon_sym_in] = ACTIONS(602),
    [anon_sym_positioned] = ACTIONS(602),
    [anon_sym_rotated] = ACTIONS(602),
    [anon_sym_facing] = ACTIONS(602),
    [anon_sym_store] = ACTIONS(602),
    [anon_sym_anchored] = ACTIONS(602),
    [anon_sym_align] = ACTIONS(602),
  },
  [210] = {
    [aux_sym_selector_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(604),
  },
  [211] = {
    [sym_selector_value] = STATE(248),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(606),
  },
  [212] = {
    [sym_block_state] = STATE(249),
    [sym_nbt_compound] = STATE(250),
    [sym__line_break] = ACTIONS(608),
    [anon_sym_run] = ACTIONS(610),
    [anon_sym_as] = ACTIONS(610),
    [anon_sym_at] = ACTIONS(610),
    [anon_sym_if] = ACTIONS(610),
    [anon_sym_unless] = ACTIONS(610),
    [anon_sym_in] = ACTIONS(610),
    [anon_sym_positioned] = ACTIONS(610),
    [anon_sym_rotated] = ACTIONS(610),
    [anon_sym_facing] = ACTIONS(610),
    [anon_sym_store] = ACTIONS(610),
    [anon_sym_anchored] = ACTIONS(610),
    [anon_sym_align] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [213] = {
    [sym__line_break] = ACTIONS(612),
    [anon_sym_run] = ACTIONS(614),
    [anon_sym_as] = ACTIONS(614),
    [anon_sym_at] = ACTIONS(614),
    [anon_sym_if] = ACTIONS(614),
    [anon_sym_unless] = ACTIONS(614),
    [anon_sym_in] = ACTIONS(614),
    [anon_sym_positioned] = ACTIONS(614),
    [anon_sym_rotated] = ACTIONS(614),
    [anon_sym_facing] = ACTIONS(614),
    [anon_sym_store] = ACTIONS(614),
    [anon_sym_anchored] = ACTIONS(614),
    [anon_sym_align] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
  },
  [214] = {
    [sym__block_state_argument] = STATE(252),
    [sym_block_state_key] = STATE(253),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(616),
  },
  [215] = {
    [sym_nbt_compound] = STATE(250),
    [sym__line_break] = ACTIONS(608),
    [anon_sym_run] = ACTIONS(610),
    [anon_sym_as] = ACTIONS(610),
    [anon_sym_at] = ACTIONS(610),
    [anon_sym_if] = ACTIONS(610),
    [anon_sym_unless] = ACTIONS(610),
    [anon_sym_in] = ACTIONS(610),
    [anon_sym_positioned] = ACTIONS(610),
    [anon_sym_rotated] = ACTIONS(610),
    [anon_sym_facing] = ACTIONS(610),
    [anon_sym_store] = ACTIONS(610),
    [anon_sym_anchored] = ACTIONS(610),
    [anon_sym_align] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [216] = {
    [sym__line_break] = ACTIONS(608),
    [anon_sym_run] = ACTIONS(610),
    [anon_sym_as] = ACTIONS(610),
    [anon_sym_at] = ACTIONS(610),
    [anon_sym_if] = ACTIONS(610),
    [anon_sym_unless] = ACTIONS(610),
    [anon_sym_in] = ACTIONS(610),
    [anon_sym_positioned] = ACTIONS(610),
    [anon_sym_rotated] = ACTIONS(610),
    [anon_sym_facing] = ACTIONS(610),
    [anon_sym_store] = ACTIONS(610),
    [anon_sym_anchored] = ACTIONS(610),
    [anon_sym_align] = ACTIONS(610),
  },
  [217] = {
    [sym_nbt_compound] = STATE(258),
    [sym_nbt_array] = STATE(258),
    [sym__nbt_value] = STATE(258),
    [sym_nbt_string] = STATE(258),
    [sym__quoted_string] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(620),
    [sym_nbt_number] = ACTIONS(622),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(626),
  },
  [218] = {
    [sym__nbt_pair] = STATE(260),
    [sym_nbt_key] = ACTIONS(426),
  },
  [219] = {
    [sym__line_break] = ACTIONS(628),
    [anon_sym_run] = ACTIONS(630),
    [anon_sym_as] = ACTIONS(630),
    [anon_sym_at] = ACTIONS(630),
    [anon_sym_if] = ACTIONS(630),
    [anon_sym_unless] = ACTIONS(630),
    [anon_sym_in] = ACTIONS(630),
    [anon_sym_positioned] = ACTIONS(630),
    [anon_sym_rotated] = ACTIONS(630),
    [anon_sym_facing] = ACTIONS(630),
    [anon_sym_store] = ACTIONS(630),
    [anon_sym_anchored] = ACTIONS(630),
    [anon_sym_align] = ACTIONS(630),
  },
  [220] = {
    [aux_sym_nbt_compound_repeat1] = STATE(262),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(632),
  },
  [221] = {
    [anon_sym_POUND] = ACTIONS(522),
    [sym_coordinate] = ACTIONS(522),
    [anon_sym_minecraft_COLON] = ACTIONS(522),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(524),
    [anon_sym_LBRACE] = ACTIONS(522),
  },
  [222] = {
    [sym__selector_argument] = STATE(263),
    [sym_selector_key] = STATE(170),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(414),
  },
  [223] = {
    [sym__line_break] = ACTIONS(524),
    [sym_nbt_path] = ACTIONS(524),
  },
  [224] = {
    [sym__selector_argument] = STATE(264),
    [sym_selector_key] = STATE(170),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(414),
  },
  [225] = {
    [sym_nbt_path] = ACTIONS(522),
  },
  [226] = {
    [sym__data_modify_value_command] = STATE(267),
    [sym__data_modify_from_command] = STATE(267),
    [anon_sym_value] = ACTIONS(634),
    [anon_sym_from] = ACTIONS(636),
  },
  [227] = {
    [sym_integer] = ACTIONS(638),
  },
  [228] = {
    [sym__line_break] = ACTIONS(640),
  },
  [229] = {
    [sym__selector_argument] = STATE(269),
    [sym_selector_key] = STATE(170),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(414),
  },
  [230] = {
    [sym__line_break] = ACTIONS(642),
  },
  [231] = {
    [anon_sym_AT] = ACTIONS(644),
  },
  [232] = {
    [sym_selector] = STATE(270),
    [anon_sym_AT] = ACTIONS(295),
  },
  [233] = {
    [sym__selector_argument] = STATE(271),
    [sym_selector_key] = STATE(170),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(414),
  },
  [234] = {
    [anon_sym_remove] = ACTIONS(600),
    [anon_sym_add] = ACTIONS(600),
    [anon_sym_list] = ACTIONS(600),
    [anon_sym_LBRACE] = ACTIONS(600),
  },
  [235] = {
    [aux_sym_selector_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(646),
  },
  [236] = {
    [sym__line_break] = ACTIONS(648),
    [anon_sym_run] = ACTIONS(650),
    [anon_sym_as] = ACTIONS(650),
    [anon_sym_at] = ACTIONS(650),
    [anon_sym_if] = ACTIONS(650),
    [anon_sym_unless] = ACTIONS(650),
    [anon_sym_in] = ACTIONS(650),
    [anon_sym_positioned] = ACTIONS(650),
    [anon_sym_rotated] = ACTIONS(650),
    [anon_sym_facing] = ACTIONS(650),
    [anon_sym_store] = ACTIONS(650),
    [anon_sym_anchored] = ACTIONS(650),
    [anon_sym_align] = ACTIONS(650),
  },
  [237] = {
    [sym_coordinate] = ACTIONS(652),
  },
  [238] = {
    [anon_sym_all] = ACTIONS(654),
    [anon_sym_masked] = ACTIONS(654),
  },
  [239] = {
    [sym_integer_range] = STATE(274),
    [anon_sym_DOT_DOT] = ACTIONS(656),
    [sym_integer] = ACTIONS(658),
  },
  [240] = {
    [anon_sym_AT] = ACTIONS(660),
  },
  [241] = {
    [sym_selector] = STATE(277),
    [anon_sym_AT] = ACTIONS(295),
  },
  [242] = {
    [sym_nbt_type] = STATE(279),
    [anon_sym_byte] = ACTIONS(662),
    [anon_sym_double] = ACTIONS(662),
    [anon_sym_float] = ACTIONS(662),
    [anon_sym_int] = ACTIONS(662),
    [anon_sym_long] = ACTIONS(662),
    [anon_sym_short] = ACTIONS(662),
  },
  [243] = {
    [sym__line_break] = ACTIONS(664),
    [anon_sym_run] = ACTIONS(666),
    [anon_sym_as] = ACTIONS(666),
    [anon_sym_at] = ACTIONS(666),
    [anon_sym_if] = ACTIONS(666),
    [anon_sym_unless] = ACTIONS(666),
    [anon_sym_in] = ACTIONS(666),
    [anon_sym_positioned] = ACTIONS(666),
    [anon_sym_rotated] = ACTIONS(666),
    [anon_sym_facing] = ACTIONS(666),
    [anon_sym_store] = ACTIONS(666),
    [anon_sym_anchored] = ACTIONS(666),
    [anon_sym_align] = ACTIONS(666),
  },
  [244] = {
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_RBRACK] = ACTIONS(668),
  },
  [245] = {
    [sym__line_break] = ACTIONS(670),
    [anon_sym_run] = ACTIONS(672),
    [anon_sym_as] = ACTIONS(672),
    [anon_sym_at] = ACTIONS(672),
    [anon_sym_if] = ACTIONS(672),
    [anon_sym_unless] = ACTIONS(672),
    [anon_sym_in] = ACTIONS(672),
    [anon_sym_positioned] = ACTIONS(672),
    [anon_sym_rotated] = ACTIONS(672),
    [anon_sym_facing] = ACTIONS(672),
    [anon_sym_store] = ACTIONS(672),
    [anon_sym_anchored] = ACTIONS(672),
    [anon_sym_align] = ACTIONS(672),
  },
  [246] = {
    [aux_sym_selector_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(668),
  },
  [247] = {
    [anon_sym_COMMA] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
  },
  [248] = {
    [anon_sym_COMMA] = ACTIONS(679),
    [anon_sym_RBRACK] = ACTIONS(679),
  },
  [249] = {
    [sym_nbt_compound] = STATE(280),
    [sym__line_break] = ACTIONS(681),
    [anon_sym_run] = ACTIONS(683),
    [anon_sym_as] = ACTIONS(683),
    [anon_sym_at] = ACTIONS(683),
    [anon_sym_if] = ACTIONS(683),
    [anon_sym_unless] = ACTIONS(683),
    [anon_sym_in] = ACTIONS(683),
    [anon_sym_positioned] = ACTIONS(683),
    [anon_sym_rotated] = ACTIONS(683),
    [anon_sym_facing] = ACTIONS(683),
    [anon_sym_store] = ACTIONS(683),
    [anon_sym_anchored] = ACTIONS(683),
    [anon_sym_align] = ACTIONS(683),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [250] = {
    [sym__line_break] = ACTIONS(681),
    [anon_sym_run] = ACTIONS(683),
    [anon_sym_as] = ACTIONS(683),
    [anon_sym_at] = ACTIONS(683),
    [anon_sym_if] = ACTIONS(683),
    [anon_sym_unless] = ACTIONS(683),
    [anon_sym_in] = ACTIONS(683),
    [anon_sym_positioned] = ACTIONS(683),
    [anon_sym_rotated] = ACTIONS(683),
    [anon_sym_facing] = ACTIONS(683),
    [anon_sym_store] = ACTIONS(683),
    [anon_sym_anchored] = ACTIONS(683),
    [anon_sym_align] = ACTIONS(683),
  },
  [251] = {
    [anon_sym_EQ] = ACTIONS(685),
  },
  [252] = {
    [aux_sym_block_state_repeat1] = STATE(283),
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(689),
  },
  [253] = {
    [anon_sym_EQ] = ACTIONS(691),
  },
  [254] = {
    [sym_nbt_compound] = STATE(286),
    [sym_nbt_array] = STATE(286),
    [sym__nbt_value] = STATE(286),
    [sym_nbt_string] = STATE(286),
    [sym__quoted_string] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_RBRACK] = ACTIONS(693),
    [anon_sym_LBRACE] = ACTIONS(620),
    [sym_nbt_number] = ACTIONS(695),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(626),
  },
  [255] = {
    [sym__nbt_pair] = STATE(288),
    [anon_sym_RBRACE] = ACTIONS(697),
    [sym_nbt_key] = ACTIONS(426),
  },
  [256] = {
    [aux_sym__quoted_string_repeat1] = STATE(290),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(701),
    [sym_escape_sequence] = ACTIONS(701),
  },
  [257] = {
    [aux_sym__quoted_string_repeat2] = STATE(291),
    [anon_sym_SQUOTE] = ACTIONS(699),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(703),
    [sym_escape_sequence] = ACTIONS(703),
  },
  [258] = {
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RBRACE] = ACTIONS(705),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_RBRACK] = ACTIONS(707),
    [anon_sym_RBRACE] = ACTIONS(707),
  },
  [260] = {
    [anon_sym_COMMA] = ACTIONS(709),
    [anon_sym_RBRACE] = ACTIONS(709),
  },
  [261] = {
    [sym__line_break] = ACTIONS(711),
    [anon_sym_run] = ACTIONS(713),
    [anon_sym_as] = ACTIONS(713),
    [anon_sym_at] = ACTIONS(713),
    [anon_sym_if] = ACTIONS(713),
    [anon_sym_unless] = ACTIONS(713),
    [anon_sym_in] = ACTIONS(713),
    [anon_sym_positioned] = ACTIONS(713),
    [anon_sym_rotated] = ACTIONS(713),
    [anon_sym_facing] = ACTIONS(713),
    [anon_sym_store] = ACTIONS(713),
    [anon_sym_anchored] = ACTIONS(713),
    [anon_sym_align] = ACTIONS(713),
  },
  [262] = {
    [aux_sym_nbt_compound_repeat1] = STATE(262),
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RBRACE] = ACTIONS(709),
  },
  [263] = {
    [aux_sym_selector_repeat1] = STATE(293),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(718),
  },
  [264] = {
    [aux_sym_selector_repeat1] = STATE(295),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(720),
  },
  [265] = {
    [sym_nbt_compound] = STATE(299),
    [sym_nbt_array] = STATE(299),
    [sym__nbt_value] = STATE(299),
    [sym_nbt_string] = STATE(299),
    [sym__quoted_string] = STATE(300),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_LBRACE] = ACTIONS(430),
    [sym_nbt_number] = ACTIONS(724),
    [anon_sym_DQUOTE] = ACTIONS(726),
    [anon_sym_SQUOTE] = ACTIONS(728),
  },
  [266] = {
    [anon_sym_entity] = ACTIONS(730),
    [anon_sym_block] = ACTIONS(732),
  },
  [267] = {
    [sym__line_break] = ACTIONS(734),
  },
  [268] = {
    [sym__data_modify_value_command] = STATE(303),
    [sym__data_modify_from_command] = STATE(303),
    [anon_sym_value] = ACTIONS(634),
    [anon_sym_from] = ACTIONS(636),
  },
  [269] = {
    [aux_sym_selector_repeat1] = STATE(305),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(736),
  },
  [270] = {
    [sym_objective] = STATE(306),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(283),
  },
  [271] = {
    [aux_sym_selector_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(738),
  },
  [272] = {
    [anon_sym_remove] = ACTIONS(670),
    [anon_sym_add] = ACTIONS(670),
    [anon_sym_list] = ACTIONS(670),
    [anon_sym_LBRACE] = ACTIONS(670),
  },
  [273] = {
    [sym_coordinate] = ACTIONS(740),
  },
  [274] = {
    [sym__line_break] = ACTIONS(742),
    [anon_sym_run] = ACTIONS(744),
    [anon_sym_as] = ACTIONS(744),
    [anon_sym_at] = ACTIONS(744),
    [anon_sym_if] = ACTIONS(744),
    [anon_sym_unless] = ACTIONS(744),
    [anon_sym_in] = ACTIONS(744),
    [anon_sym_positioned] = ACTIONS(744),
    [anon_sym_rotated] = ACTIONS(744),
    [anon_sym_facing] = ACTIONS(744),
    [anon_sym_store] = ACTIONS(744),
    [anon_sym_anchored] = ACTIONS(744),
    [anon_sym_align] = ACTIONS(744),
  },
  [275] = {
    [sym_integer] = ACTIONS(746),
  },
  [276] = {
    [sym__line_break] = ACTIONS(748),
    [anon_sym_run] = ACTIONS(750),
    [anon_sym_as] = ACTIONS(750),
    [anon_sym_at] = ACTIONS(750),
    [anon_sym_if] = ACTIONS(750),
    [anon_sym_unless] = ACTIONS(750),
    [anon_sym_in] = ACTIONS(750),
    [anon_sym_positioned] = ACTIONS(750),
    [anon_sym_rotated] = ACTIONS(750),
    [anon_sym_facing] = ACTIONS(750),
    [anon_sym_store] = ACTIONS(750),
    [anon_sym_anchored] = ACTIONS(750),
    [anon_sym_align] = ACTIONS(750),
    [anon_sym_DOT_DOT] = ACTIONS(752),
  },
  [277] = {
    [sym_objective] = STATE(312),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(283),
  },
  [278] = {
    [sym_float] = ACTIONS(754),
  },
  [279] = {
    [sym_float] = ACTIONS(756),
  },
  [280] = {
    [sym__line_break] = ACTIONS(758),
    [anon_sym_run] = ACTIONS(760),
    [anon_sym_as] = ACTIONS(760),
    [anon_sym_at] = ACTIONS(760),
    [anon_sym_if] = ACTIONS(760),
    [anon_sym_unless] = ACTIONS(760),
    [anon_sym_in] = ACTIONS(760),
    [anon_sym_positioned] = ACTIONS(760),
    [anon_sym_rotated] = ACTIONS(760),
    [anon_sym_facing] = ACTIONS(760),
    [anon_sym_store] = ACTIONS(760),
    [anon_sym_anchored] = ACTIONS(760),
    [anon_sym_align] = ACTIONS(760),
  },
  [281] = {
    [sym__block_state_argument] = STATE(314),
    [sym_block_state_key] = STATE(253),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(616),
  },
  [282] = {
    [sym__line_break] = ACTIONS(762),
    [anon_sym_run] = ACTIONS(764),
    [anon_sym_as] = ACTIONS(764),
    [anon_sym_at] = ACTIONS(764),
    [anon_sym_if] = ACTIONS(764),
    [anon_sym_unless] = ACTIONS(764),
    [anon_sym_in] = ACTIONS(764),
    [anon_sym_positioned] = ACTIONS(764),
    [anon_sym_rotated] = ACTIONS(764),
    [anon_sym_facing] = ACTIONS(764),
    [anon_sym_store] = ACTIONS(764),
    [anon_sym_anchored] = ACTIONS(764),
    [anon_sym_align] = ACTIONS(764),
    [anon_sym_LBRACE] = ACTIONS(764),
  },
  [283] = {
    [aux_sym_block_state_repeat1] = STATE(316),
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(766),
  },
  [284] = {
    [sym_block_state_value] = ACTIONS(768),
  },
  [285] = {
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(770),
    [anon_sym_RBRACE] = ACTIONS(770),
  },
  [286] = {
    [aux_sym_nbt_array_repeat1] = STATE(320),
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(774),
  },
  [287] = {
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_RBRACK] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
  },
  [288] = {
    [aux_sym_nbt_compound_repeat1] = STATE(322),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(776),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(778),
    [anon_sym_RBRACK] = ACTIONS(778),
    [anon_sym_RBRACE] = ACTIONS(778),
  },
  [290] = {
    [aux_sym__quoted_string_repeat1] = STATE(324),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(782),
    [sym_escape_sequence] = ACTIONS(782),
  },
  [291] = {
    [aux_sym__quoted_string_repeat2] = STATE(325),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(784),
    [sym_escape_sequence] = ACTIONS(784),
  },
  [292] = {
    [sym__line_break] = ACTIONS(602),
    [sym_nbt_path] = ACTIONS(602),
  },
  [293] = {
    [aux_sym_selector_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(786),
  },
  [294] = {
    [sym_nbt_path] = ACTIONS(600),
  },
  [295] = {
    [aux_sym_selector_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(788),
  },
  [296] = {
    [sym_nbt_compound] = STATE(329),
    [sym_nbt_array] = STATE(329),
    [sym__nbt_value] = STATE(329),
    [sym_nbt_string] = STATE(329),
    [sym__quoted_string] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_RBRACK] = ACTIONS(790),
    [anon_sym_LBRACE] = ACTIONS(620),
    [sym_nbt_number] = ACTIONS(792),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(626),
  },
  [297] = {
    [aux_sym__quoted_string_repeat1] = STATE(331),
    [anon_sym_DQUOTE] = ACTIONS(794),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(796),
    [sym_escape_sequence] = ACTIONS(796),
  },
  [298] = {
    [aux_sym__quoted_string_repeat2] = STATE(332),
    [anon_sym_SQUOTE] = ACTIONS(794),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(798),
    [sym_escape_sequence] = ACTIONS(798),
  },
  [299] = {
    [sym__line_break] = ACTIONS(800),
  },
  [300] = {
    [sym__line_break] = ACTIONS(707),
  },
  [301] = {
    [sym_selector] = STATE(333),
    [anon_sym_AT] = ACTIONS(277),
  },
  [302] = {
    [sym__coordinate3] = STATE(333),
    [sym_coordinate] = ACTIONS(279),
  },
  [303] = {
    [sym__line_break] = ACTIONS(802),
  },
  [304] = {
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(600),
  },
  [305] = {
    [aux_sym_selector_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(804),
  },
  [306] = {
    [sym__line_break] = ACTIONS(806),
  },
  [307] = {
    [sym__line_break] = ACTIONS(600),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(602),
  },
  [308] = {
    [aux_sym_selector_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(808),
  },
  [309] = {
    [anon_sym_all] = ACTIONS(522),
    [anon_sym_masked] = ACTIONS(522),
  },
  [310] = {
    [sym__line_break] = ACTIONS(810),
    [anon_sym_run] = ACTIONS(812),
    [anon_sym_as] = ACTIONS(812),
    [anon_sym_at] = ACTIONS(812),
    [anon_sym_if] = ACTIONS(812),
    [anon_sym_unless] = ACTIONS(812),
    [anon_sym_in] = ACTIONS(812),
    [anon_sym_positioned] = ACTIONS(812),
    [anon_sym_rotated] = ACTIONS(812),
    [anon_sym_facing] = ACTIONS(812),
    [anon_sym_store] = ACTIONS(812),
    [anon_sym_anchored] = ACTIONS(812),
    [anon_sym_align] = ACTIONS(812),
  },
  [311] = {
    [sym__line_break] = ACTIONS(810),
    [anon_sym_run] = ACTIONS(812),
    [anon_sym_as] = ACTIONS(812),
    [anon_sym_at] = ACTIONS(812),
    [anon_sym_if] = ACTIONS(812),
    [anon_sym_unless] = ACTIONS(812),
    [anon_sym_in] = ACTIONS(812),
    [anon_sym_positioned] = ACTIONS(812),
    [anon_sym_rotated] = ACTIONS(812),
    [anon_sym_facing] = ACTIONS(812),
    [anon_sym_store] = ACTIONS(812),
    [anon_sym_anchored] = ACTIONS(812),
    [anon_sym_align] = ACTIONS(812),
    [sym_integer] = ACTIONS(814),
  },
  [312] = {
    [sym__line_break] = ACTIONS(816),
    [anon_sym_run] = ACTIONS(818),
    [anon_sym_as] = ACTIONS(818),
    [anon_sym_at] = ACTIONS(818),
    [anon_sym_if] = ACTIONS(818),
    [anon_sym_unless] = ACTIONS(818),
    [anon_sym_in] = ACTIONS(818),
    [anon_sym_positioned] = ACTIONS(818),
    [anon_sym_rotated] = ACTIONS(818),
    [anon_sym_facing] = ACTIONS(818),
    [anon_sym_store] = ACTIONS(818),
    [anon_sym_anchored] = ACTIONS(818),
    [anon_sym_align] = ACTIONS(818),
  },
  [313] = {
    [sym__line_break] = ACTIONS(820),
    [anon_sym_run] = ACTIONS(822),
    [anon_sym_as] = ACTIONS(822),
    [anon_sym_at] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_unless] = ACTIONS(822),
    [anon_sym_in] = ACTIONS(822),
    [anon_sym_positioned] = ACTIONS(822),
    [anon_sym_rotated] = ACTIONS(822),
    [anon_sym_facing] = ACTIONS(822),
    [anon_sym_store] = ACTIONS(822),
    [anon_sym_anchored] = ACTIONS(822),
    [anon_sym_align] = ACTIONS(822),
  },
  [314] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RBRACK] = ACTIONS(824),
  },
  [315] = {
    [sym__line_break] = ACTIONS(826),
    [anon_sym_run] = ACTIONS(828),
    [anon_sym_as] = ACTIONS(828),
    [anon_sym_at] = ACTIONS(828),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_unless] = ACTIONS(828),
    [anon_sym_in] = ACTIONS(828),
    [anon_sym_positioned] = ACTIONS(828),
    [anon_sym_rotated] = ACTIONS(828),
    [anon_sym_facing] = ACTIONS(828),
    [anon_sym_store] = ACTIONS(828),
    [anon_sym_anchored] = ACTIONS(828),
    [anon_sym_align] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
  },
  [316] = {
    [aux_sym_block_state_repeat1] = STATE(316),
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RBRACK] = ACTIONS(824),
  },
  [317] = {
    [anon_sym_COMMA] = ACTIONS(833),
    [anon_sym_RBRACK] = ACTIONS(833),
  },
  [318] = {
    [sym_nbt_compound] = STATE(337),
    [sym_nbt_array] = STATE(337),
    [sym__nbt_value] = STATE(337),
    [sym_nbt_string] = STATE(337),
    [sym__quoted_string] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(620),
    [sym_nbt_number] = ACTIONS(835),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(626),
  },
  [319] = {
    [anon_sym_COMMA] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [anon_sym_RBRACE] = ACTIONS(837),
  },
  [320] = {
    [aux_sym_nbt_array_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(839),
  },
  [321] = {
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RBRACK] = ACTIONS(628),
    [anon_sym_RBRACE] = ACTIONS(628),
  },
  [322] = {
    [aux_sym_nbt_compound_repeat1] = STATE(262),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(841),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(843),
    [anon_sym_RBRACK] = ACTIONS(843),
    [anon_sym_RBRACE] = ACTIONS(843),
  },
  [324] = {
    [aux_sym__quoted_string_repeat1] = STATE(324),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(847),
  },
  [325] = {
    [aux_sym__quoted_string_repeat2] = STATE(325),
    [anon_sym_SQUOTE] = ACTIONS(850),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(852),
    [sym_escape_sequence] = ACTIONS(852),
  },
  [326] = {
    [sym__line_break] = ACTIONS(672),
    [sym_nbt_path] = ACTIONS(672),
  },
  [327] = {
    [sym_nbt_path] = ACTIONS(670),
  },
  [328] = {
    [sym__line_break] = ACTIONS(770),
  },
  [329] = {
    [aux_sym_nbt_array_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(855),
  },
  [330] = {
    [sym__line_break] = ACTIONS(778),
  },
  [331] = {
    [aux_sym__quoted_string_repeat1] = STATE(324),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(782),
    [sym_escape_sequence] = ACTIONS(782),
  },
  [332] = {
    [aux_sym__quoted_string_repeat2] = STATE(325),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(784),
    [sym_escape_sequence] = ACTIONS(784),
  },
  [333] = {
    [sym_nbt_path] = ACTIONS(859),
  },
  [334] = {
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(670),
  },
  [335] = {
    [sym__line_break] = ACTIONS(670),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(672),
  },
  [336] = {
    [sym__line_break] = ACTIONS(861),
    [anon_sym_run] = ACTIONS(863),
    [anon_sym_as] = ACTIONS(863),
    [anon_sym_at] = ACTIONS(863),
    [anon_sym_if] = ACTIONS(863),
    [anon_sym_unless] = ACTIONS(863),
    [anon_sym_in] = ACTIONS(863),
    [anon_sym_positioned] = ACTIONS(863),
    [anon_sym_rotated] = ACTIONS(863),
    [anon_sym_facing] = ACTIONS(863),
    [anon_sym_store] = ACTIONS(863),
    [anon_sym_anchored] = ACTIONS(863),
    [anon_sym_align] = ACTIONS(863),
  },
  [337] = {
    [anon_sym_COMMA] = ACTIONS(865),
    [anon_sym_RBRACK] = ACTIONS(865),
  },
  [338] = {
    [anon_sym_COMMA] = ACTIONS(867),
    [anon_sym_RBRACK] = ACTIONS(867),
    [anon_sym_RBRACE] = ACTIONS(867),
  },
  [339] = {
    [aux_sym_nbt_array_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(869),
    [anon_sym_RBRACK] = ACTIONS(865),
  },
  [340] = {
    [anon_sym_COMMA] = ACTIONS(711),
    [anon_sym_RBRACK] = ACTIONS(711),
    [anon_sym_RBRACE] = ACTIONS(711),
  },
  [341] = {
    [sym__line_break] = ACTIONS(837),
  },
  [342] = {
    [aux_sym_nbt_array_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(872),
  },
  [343] = {
    [sym__line_break] = ACTIONS(843),
  },
  [344] = {
    [sym__line_break] = ACTIONS(874),
  },
  [345] = {
    [sym__line_break] = ACTIONS(867),
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
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = false}, SHIFT(23),
  [41] = {.count = 1, .reusable = true}, SHIFT(25),
  [43] = {.count = 1, .reusable = true}, SHIFT(27),
  [45] = {.count = 1, .reusable = true}, SHIFT(28),
  [47] = {.count = 1, .reusable = true}, SHIFT(29),
  [49] = {.count = 1, .reusable = true}, SHIFT(30),
  [51] = {.count = 1, .reusable = true}, SHIFT(32),
  [53] = {.count = 1, .reusable = true}, SHIFT(34),
  [55] = {.count = 1, .reusable = true}, SHIFT(35),
  [57] = {.count = 1, .reusable = true}, SHIFT(36),
  [59] = {.count = 1, .reusable = true}, SHIFT(38),
  [61] = {.count = 1, .reusable = true}, SHIFT(39),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = true}, SHIFT(41),
  [67] = {.count = 1, .reusable = true}, SHIFT(42),
  [69] = {.count = 1, .reusable = true}, SHIFT(43),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__execute_command, 1),
  [73] = {.count = 1, .reusable = false}, SHIFT(45),
  [75] = {.count = 1, .reusable = false}, SHIFT(46),
  [77] = {.count = 1, .reusable = false}, SHIFT(47),
  [79] = {.count = 1, .reusable = false}, SHIFT(48),
  [81] = {.count = 1, .reusable = false}, SHIFT(49),
  [83] = {.count = 1, .reusable = false}, SHIFT(50),
  [85] = {.count = 1, .reusable = false}, SHIFT(51),
  [87] = {.count = 1, .reusable = false}, SHIFT(52),
  [89] = {.count = 1, .reusable = false}, SHIFT(53),
  [91] = {.count = 1, .reusable = false}, SHIFT(54),
  [93] = {.count = 1, .reusable = false}, SHIFT(55),
  [95] = {.count = 1, .reusable = false}, SHIFT(56),
  [97] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [99] = {.count = 1, .reusable = true}, SHIFT(58),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [107] = {.count = 1, .reusable = true}, SHIFT(60),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym__teleport_command, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(61),
  [113] = {.count = 1, .reusable = true}, SHIFT(62),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(63),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_message, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__say_command, 2),
  [123] = {.count = 1, .reusable = true}, SHIFT(65),
  [125] = {.count = 1, .reusable = true}, SHIFT(66),
  [127] = {.count = 1, .reusable = true}, SHIFT(67),
  [129] = {.count = 1, .reusable = true}, SHIFT(68),
  [131] = {.count = 1, .reusable = true}, SHIFT(69),
  [133] = {.count = 1, .reusable = true}, SHIFT(70),
  [135] = {.count = 1, .reusable = true}, SHIFT(71),
  [137] = {.count = 1, .reusable = true}, SHIFT(72),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym__data_command, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__function_command, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(73),
  [147] = {.count = 1, .reusable = true}, SHIFT(75),
  [149] = {.count = 1, .reusable = true}, SHIFT(76),
  [151] = {.count = 1, .reusable = true}, SHIFT(77),
  [153] = {.count = 1, .reusable = true}, SHIFT(78),
  [155] = {.count = 1, .reusable = true}, SHIFT(79),
  [157] = {.count = 1, .reusable = true}, SHIFT(80),
  [159] = {.count = 1, .reusable = true}, SHIFT(81),
  [161] = {.count = 1, .reusable = true}, SHIFT(82),
  [163] = {.count = 1, .reusable = true}, SHIFT(83),
  [165] = {.count = 1, .reusable = true}, SHIFT(84),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_command, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(85),
  [171] = {.count = 1, .reusable = true}, SHIFT(87),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 2),
  [175] = {.count = 1, .reusable = false}, SHIFT(85),
  [177] = {.count = 1, .reusable = true}, SHIFT(90),
  [179] = {.count = 1, .reusable = true}, SHIFT(91),
  [181] = {.count = 1, .reusable = true}, SHIFT(92),
  [183] = {.count = 1, .reusable = true}, SHIFT(96),
  [185] = {.count = 1, .reusable = true}, SHIFT(97),
  [187] = {.count = 1, .reusable = false}, SHIFT(98),
  [189] = {.count = 1, .reusable = true}, SHIFT(99),
  [191] = {.count = 1, .reusable = true}, SHIFT(100),
  [193] = {.count = 1, .reusable = true}, SHIFT(103),
  [195] = {.count = 1, .reusable = true}, SHIFT(104),
  [197] = {.count = 1, .reusable = true}, SHIFT(106),
  [199] = {.count = 1, .reusable = true}, SHIFT(108),
  [201] = {.count = 1, .reusable = true}, SHIFT(109),
  [203] = {.count = 1, .reusable = true}, SHIFT(110),
  [205] = {.count = 1, .reusable = true}, SHIFT(112),
  [207] = {.count = 1, .reusable = true}, SHIFT(113),
  [209] = {.count = 1, .reusable = true}, SHIFT(115),
  [211] = {.count = 1, .reusable = false}, SHIFT(115),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__execute_command, 2),
  [215] = {.count = 1, .reusable = false}, SHIFT(117),
  [217] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 2),
  [259] = {.count = 1, .reusable = false}, SHIFT(119),
  [261] = {.count = 1, .reusable = true}, SHIFT(120),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 2),
  [265] = {.count = 1, .reusable = true}, SHIFT(121),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 3),
  [269] = {.count = 1, .reusable = false}, SHIFT(122),
  [271] = {.count = 1, .reusable = true}, SHIFT(125),
  [273] = {.count = 1, .reusable = true}, SHIFT(126),
  [275] = {.count = 1, .reusable = true}, SHIFT(128),
  [277] = {.count = 1, .reusable = true}, SHIFT(129),
  [279] = {.count = 1, .reusable = true}, SHIFT(131),
  [281] = {.count = 1, .reusable = true}, SHIFT(133),
  [283] = {.count = 1, .reusable = true}, SHIFT(134),
  [285] = {.count = 1, .reusable = true}, SHIFT(136),
  [287] = {.count = 1, .reusable = true}, SHIFT(138),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(140),
  [293] = {.count = 1, .reusable = false}, SHIFT(140),
  [295] = {.count = 1, .reusable = true}, SHIFT(141),
  [297] = {.count = 1, .reusable = true}, SHIFT(146),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_team, 1),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 3),
  [303] = {.count = 1, .reusable = true}, SHIFT(148),
  [305] = {.count = 1, .reusable = true}, SHIFT(151),
  [307] = {.count = 1, .reusable = true}, SHIFT(152),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym__tag_command, 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__execute_command, 3),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__execute_as_command, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__execute_as_command, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym__execute_at_command, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym__execute_at_command, 2),
  [321] = {.count = 1, .reusable = true}, SHIFT(153),
  [323] = {.count = 1, .reusable = true}, SHIFT(154),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym__execute_if_command, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym__execute_if_command, 2),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym__execute_unless_command, 2),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym__execute_unless_command, 2),
  [333] = {.count = 1, .reusable = true}, SHIFT(159),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_dimension, 1),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_dimension, 1),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__execute_in_command, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__execute_in_command, 2),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__execute_positioned_command, 2),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym__execute_positioned_command, 2),
  [347] = {.count = 1, .reusable = true}, SHIFT(161),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym__execute_facing_command, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym__execute_facing_command, 2),
  [353] = {.count = 1, .reusable = true}, SHIFT(163),
  [355] = {.count = 1, .reusable = true}, SHIFT(164),
  [357] = {.count = 1, .reusable = true}, SHIFT(165),
  [359] = {.count = 1, .reusable = true}, SHIFT(166),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_anchor, 1),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_anchor, 1),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym__execute_anchored_command, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym__execute_anchored_command, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_axes_swizzle, 1),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_axes_swizzle, 1),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__execute_align_command, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__execute_align_command, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(aux_sym__execute_command_repeat1, 2),
  [379] = {.count = 1, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2),
  [381] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(46),
  [384] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(47),
  [387] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(48),
  [390] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(49),
  [393] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(50),
  [396] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(51),
  [399] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(52),
  [402] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(53),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(54),
  [408] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(55),
  [411] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(56),
  [414] = {.count = 1, .reusable = true}, SHIFT(168),
  [416] = {.count = 1, .reusable = true}, SHIFT(171),
  [418] = {.count = 1, .reusable = true}, SHIFT(172),
  [420] = {.count = 1, .reusable = false}, SHIFT(173),
  [422] = {.count = 1, .reusable = true}, SHIFT(176),
  [424] = {.count = 1, .reusable = true}, SHIFT(177),
  [426] = {.count = 1, .reusable = true}, SHIFT(178),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 4),
  [430] = {.count = 1, .reusable = true}, SHIFT(122),
  [432] = {.count = 1, .reusable = true}, SHIFT(181),
  [434] = {.count = 1, .reusable = true}, SHIFT(182),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym__data_get_command, 3),
  [438] = {.count = 1, .reusable = false}, SHIFT(183),
  [440] = {.count = 1, .reusable = true}, SHIFT(184),
  [442] = {.count = 1, .reusable = true}, SHIFT(185),
  [444] = {.count = 1, .reusable = true}, SHIFT(186),
  [446] = {.count = 1, .reusable = true}, SHIFT(187),
  [448] = {.count = 1, .reusable = true}, SHIFT(188),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym__schedule_command, 4),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_objective, 1),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_objective, 1),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 3),
  [458] = {.count = 1, .reusable = true}, SHIFT(189),
  [460] = {.count = 1, .reusable = true}, SHIFT(190),
  [462] = {.count = 1, .reusable = true}, SHIFT(191),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 3),
  [466] = {.count = 1, .reusable = true}, SHIFT(195),
  [468] = {.count = 1, .reusable = false}, SHIFT(134),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_team_option, 1),
  [472] = {.count = 1, .reusable = true}, SHIFT(196),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 4),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym__tag_command, 4),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 2),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 2),
  [482] = {.count = 1, .reusable = true}, SHIFT(203),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym__execute_positioned_command, 3),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym__execute_positioned_command, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym__execute_rotated_command, 3),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym__execute_rotated_command, 3),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym__execute_facing_command, 3),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym__execute_facing_command, 3),
  [496] = {.count = 1, .reusable = true}, SHIFT(206),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym__execute_command, 4),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_selector_key, 1),
  [502] = {.count = 1, .reusable = true}, SHIFT(208),
  [504] = {.count = 1, .reusable = true}, SHIFT(209),
  [506] = {.count = 1, .reusable = true}, SHIFT(211),
  [508] = {.count = 1, .reusable = true}, SHIFT(213),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 1),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 1),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym__setblock_command, 5),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_block, 1),
  [520] = {.count = 1, .reusable = false}, SHIFT(214),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym__coordinate3, 3),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym__coordinate3, 3),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 2),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_nbt_compound, 2),
  [530] = {.count = 1, .reusable = true}, SHIFT(217),
  [532] = {.count = 1, .reusable = true}, SHIFT(218),
  [534] = {.count = 1, .reusable = true}, SHIFT(219),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym__data_merge_command, 4),
  [538] = {.count = 1, .reusable = true}, SHIFT(221),
  [540] = {.count = 1, .reusable = false}, SHIFT(222),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym__data_get_command, 4),
  [544] = {.count = 1, .reusable = true}, SHIFT(223),
  [546] = {.count = 1, .reusable = false}, SHIFT(224),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym__data_remove_command, 4),
  [550] = {.count = 1, .reusable = true}, SHIFT(225),
  [552] = {.count = 1, .reusable = true}, SHIFT(226),
  [554] = {.count = 1, .reusable = true}, SHIFT(227),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 4),
  [558] = {.count = 1, .reusable = true}, SHIFT(228),
  [560] = {.count = 1, .reusable = true}, SHIFT(229),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 4),
  [564] = {.count = 1, .reusable = true}, SHIFT(230),
  [566] = {.count = 1, .reusable = true}, SHIFT(231),
  [568] = {.count = 1, .reusable = false}, SHIFT(233),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_team_option_value, 1),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 5),
  [574] = {.count = 1, .reusable = true}, SHIFT(234),
  [576] = {.count = 1, .reusable = true}, SHIFT(236),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 3),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 3),
  [582] = {.count = 1, .reusable = true}, SHIFT(237),
  [584] = {.count = 1, .reusable = true}, SHIFT(239),
  [586] = {.count = 1, .reusable = true}, SHIFT(240),
  [588] = {.count = 1, .reusable = false}, SHIFT(240),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_dimension, 3),
  [592] = {.count = 1, .reusable = false}, REDUCE(sym_dimension, 3),
  [594] = {.count = 1, .reusable = true}, SHIFT(242),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_bossbar, 1),
  [598] = {.count = 1, .reusable = true}, SHIFT(243),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 5),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 5),
  [604] = {.count = 1, .reusable = true}, SHIFT(245),
  [606] = {.count = 1, .reusable = true}, SHIFT(247),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [610] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 2),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 2),
  [616] = {.count = 1, .reusable = true}, SHIFT(251),
  [618] = {.count = 1, .reusable = true}, SHIFT(254),
  [620] = {.count = 1, .reusable = true}, SHIFT(255),
  [622] = {.count = 1, .reusable = true}, SHIFT(258),
  [624] = {.count = 1, .reusable = true}, SHIFT(256),
  [626] = {.count = 1, .reusable = true}, SHIFT(257),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 3),
  [630] = {.count = 1, .reusable = false}, REDUCE(sym_nbt_compound, 3),
  [632] = {.count = 1, .reusable = true}, SHIFT(261),
  [634] = {.count = 1, .reusable = true}, SHIFT(265),
  [636] = {.count = 1, .reusable = true}, SHIFT(266),
  [638] = {.count = 1, .reusable = true}, SHIFT(268),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 5),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 5),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_scoreboard_operator, 1),
  [646] = {.count = 1, .reusable = true}, SHIFT(272),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 4),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 4),
  [652] = {.count = 1, .reusable = true}, SHIFT(273),
  [654] = {.count = 1, .reusable = true}, SHIFT(274),
  [656] = {.count = 1, .reusable = true}, SHIFT(275),
  [658] = {.count = 1, .reusable = true}, SHIFT(276),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_scoreboard_comparator, 1),
  [662] = {.count = 1, .reusable = true}, SHIFT(278),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym__execute_store_command, 5),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym__execute_store_command, 5),
  [668] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 6),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 6),
  [674] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(208),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_selector_value, 1),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym__selector_argument, 3),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [683] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_block_state_key, 1),
  [687] = {.count = 1, .reusable = true}, SHIFT(281),
  [689] = {.count = 1, .reusable = true}, SHIFT(282),
  [691] = {.count = 1, .reusable = true}, SHIFT(284),
  [693] = {.count = 1, .reusable = true}, SHIFT(285),
  [695] = {.count = 1, .reusable = true}, SHIFT(286),
  [697] = {.count = 1, .reusable = true}, SHIFT(287),
  [699] = {.count = 1, .reusable = false}, SHIFT(289),
  [701] = {.count = 1, .reusable = true}, SHIFT(290),
  [703] = {.count = 1, .reusable = true}, SHIFT(291),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym__nbt_pair, 3),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_string, 1),
  [709] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 4),
  [713] = {.count = 1, .reusable = false}, REDUCE(sym_nbt_compound, 4),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2), SHIFT_REPEAT(218),
  [718] = {.count = 1, .reusable = true}, SHIFT(292),
  [720] = {.count = 1, .reusable = true}, SHIFT(294),
  [722] = {.count = 1, .reusable = true}, SHIFT(296),
  [724] = {.count = 1, .reusable = true}, SHIFT(299),
  [726] = {.count = 1, .reusable = true}, SHIFT(297),
  [728] = {.count = 1, .reusable = true}, SHIFT(298),
  [730] = {.count = 1, .reusable = true}, SHIFT(301),
  [732] = {.count = 1, .reusable = true}, SHIFT(302),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 6),
  [736] = {.count = 1, .reusable = true}, SHIFT(304),
  [738] = {.count = 1, .reusable = true}, SHIFT(307),
  [740] = {.count = 1, .reusable = true}, SHIFT(309),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 5),
  [744] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 5),
  [746] = {.count = 1, .reusable = true}, SHIFT(310),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_integer_range, 1),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym_integer_range, 1),
  [752] = {.count = 1, .reusable = false}, SHIFT(311),
  [754] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_type, 1),
  [756] = {.count = 1, .reusable = true}, SHIFT(313),
  [758] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [760] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 3),
  [764] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 3),
  [766] = {.count = 1, .reusable = true}, SHIFT(315),
  [768] = {.count = 1, .reusable = true}, SHIFT(317),
  [770] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 2),
  [772] = {.count = 1, .reusable = true}, SHIFT(318),
  [774] = {.count = 1, .reusable = true}, SHIFT(319),
  [776] = {.count = 1, .reusable = true}, SHIFT(321),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 2),
  [780] = {.count = 1, .reusable = false}, SHIFT(323),
  [782] = {.count = 1, .reusable = true}, SHIFT(324),
  [784] = {.count = 1, .reusable = true}, SHIFT(325),
  [786] = {.count = 1, .reusable = true}, SHIFT(326),
  [788] = {.count = 1, .reusable = true}, SHIFT(327),
  [790] = {.count = 1, .reusable = true}, SHIFT(328),
  [792] = {.count = 1, .reusable = true}, SHIFT(329),
  [794] = {.count = 1, .reusable = false}, SHIFT(330),
  [796] = {.count = 1, .reusable = true}, SHIFT(331),
  [798] = {.count = 1, .reusable = true}, SHIFT(332),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_value_command, 2),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 7),
  [804] = {.count = 1, .reusable = true}, SHIFT(334),
  [806] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 7),
  [808] = {.count = 1, .reusable = true}, SHIFT(335),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym_integer_range, 2),
  [812] = {.count = 1, .reusable = false}, REDUCE(sym_integer_range, 2),
  [814] = {.count = 1, .reusable = false}, SHIFT(336),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 6),
  [818] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 6),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym__execute_store_command, 7),
  [822] = {.count = 1, .reusable = false}, REDUCE(sym__execute_store_command, 7),
  [824] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 4),
  [828] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 4),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2), SHIFT_REPEAT(281),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym__block_state_argument, 3),
  [835] = {.count = 1, .reusable = true}, SHIFT(337),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 3),
  [839] = {.count = 1, .reusable = true}, SHIFT(338),
  [841] = {.count = 1, .reusable = true}, SHIFT(340),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [845] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [847] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(324),
  [850] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat2, 2),
  [852] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat2, 2), SHIFT_REPEAT(325),
  [855] = {.count = 1, .reusable = true}, SHIFT(341),
  [857] = {.count = 1, .reusable = false}, SHIFT(343),
  [859] = {.count = 1, .reusable = true}, SHIFT(344),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_integer_range, 3),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym_integer_range, 3),
  [865] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 4),
  [869] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(318),
  [872] = {.count = 1, .reusable = true}, SHIFT(345),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_from_command, 4),
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
