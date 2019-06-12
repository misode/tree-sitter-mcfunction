#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 353
#define SYMBOL_COUNT 217
#define ALIAS_COUNT 0
#define TOKEN_COUNT 143
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
  sym_fakeplayer = 92,
  anon_sym_EQ = 93,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH = 94,
  sym_coordinate = 95,
  sym_integer = 96,
  sym_float = 97,
  anon_sym_minecraft_COLON = 98,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH = 99,
  sym_block_state_value = 100,
  anon_sym_LBRACE = 101,
  anon_sym_RBRACE = 102,
  anon_sym_COLON = 103,
  sym_nbt_key = 104,
  sym_nbt_number = 105,
  anon_sym_DQUOTE = 106,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 107,
  anon_sym_SQUOTE = 108,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH = 109,
  sym_escape_sequence = 110,
  sym_nbt_path = 111,
  aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH = 112,
  sym_time = 113,
  aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH = 114,
  sym_scoreboard_criteria = 115,
  anon_sym_PERCENT_EQ = 116,
  anon_sym_STAR_EQ = 117,
  anon_sym_PLUS_EQ = 118,
  anon_sym_DASH_EQ = 119,
  anon_sym_SLASH_EQ = 120,
  anon_sym_LT_EQ = 121,
  anon_sym_GT_EQ = 122,
  anon_sym_GT_LT = 123,
  anon_sym_LT = 124,
  anon_sym_GT = 125,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH = 126,
  sym_tag = 127,
  anon_sym_minecraft = 128,
  anon_sym_overworld = 129,
  anon_sym_the_nether = 130,
  anon_sym_the_end = 131,
  aux_sym_SLASHxy_QMARKz_QMARK_SLASH = 132,
  aux_sym_SLASHx_QMARKyz_QMARK_SLASH = 133,
  aux_sym_SLASHx_QMARKy_QMARKz_SLASH = 134,
  anon_sym_feet = 135,
  anon_sym_eyes = 136,
  anon_sym_byte = 137,
  anon_sym_double = 138,
  anon_sym_float = 139,
  anon_sym_int = 140,
  anon_sym_long = 141,
  anon_sym_short = 142,
  sym_function = 143,
  sym_comment = 144,
  sym_command = 145,
  sym__teleport_command = 146,
  sym__setblock_command = 147,
  sym__summon_command = 148,
  sym__say_command = 149,
  sym__data_command = 150,
  sym__data_merge_command = 151,
  sym__data_get_command = 152,
  sym__data_remove_command = 153,
  sym__data_modify_command = 154,
  sym__data_modify_value_command = 155,
  sym__data_modify_from_command = 156,
  sym__function_command = 157,
  sym__schedule_command = 158,
  sym__scoreboard_command = 159,
  sym__scoreboard_objectives_command = 160,
  sym__scoreboard_players_command = 161,
  sym__team_command = 162,
  sym__tag_command = 163,
  sym__execute_command = 164,
  sym__execute_as_command = 165,
  sym__execute_at_command = 166,
  sym__execute_if_command = 167,
  sym__execute_unless_command = 168,
  sym__if_unless_command = 169,
  sym__execute_in_command = 170,
  sym__execute_positioned_command = 171,
  sym__execute_rotated_command = 172,
  sym__execute_facing_command = 173,
  sym__execute_store_command = 174,
  sym__execute_anchored_command = 175,
  sym__execute_align_command = 176,
  sym_integer_range = 177,
  sym_selector = 178,
  sym__entity_selector = 179,
  sym__selector_argument = 180,
  sym_selector_key = 181,
  sym_selector_value = 182,
  sym__coordinate3 = 183,
  sym_block = 184,
  sym_block_type = 185,
  sym_block_state = 186,
  sym__block_state_argument = 187,
  sym_block_state_key = 188,
  sym_entity_type = 189,
  sym_message = 190,
  sym_nbt_compound = 191,
  sym__nbt_pair = 192,
  sym_nbt_array = 193,
  sym__nbt_value = 194,
  sym_nbt_string = 195,
  sym__quoted_string = 196,
  sym_function_name = 197,
  sym_objective = 198,
  sym_scoreboard_operator = 199,
  sym_scoreboard_comparator = 200,
  sym_team = 201,
  sym_team_option = 202,
  sym_team_option_value = 203,
  sym_dimension = 204,
  sym_axes_swizzle = 205,
  sym_anchor = 206,
  sym_nbt_type = 207,
  sym_bossbar = 208,
  aux_sym_function_repeat1 = 209,
  aux_sym__execute_command_repeat1 = 210,
  aux_sym__entity_selector_repeat1 = 211,
  aux_sym_block_state_repeat1 = 212,
  aux_sym_nbt_compound_repeat1 = 213,
  aux_sym_nbt_array_repeat1 = 214,
  aux_sym__quoted_string_repeat1 = 215,
  aux_sym__quoted_string_repeat2 = 216,
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
  [sym_fakeplayer] = "fakeplayer",
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
  [sym__entity_selector] = "_entity_selector",
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
  [aux_sym__entity_selector_repeat1] = "_entity_selector_repeat1",
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
  [sym_fakeplayer] = {
    .visible = true,
    .named = true,
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
  [sym__entity_selector] = {
    .visible = false,
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
  [aux_sym__entity_selector_repeat1] = {
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
      if (lookahead == '#' ||
          lookahead == '$' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_fakeplayer);
      if (lookahead == '#' ||
          lookahead == '$' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 287:
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead == '~')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(287);
      END_STATE();
    case 288:
      if (lookahead == 's')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 290:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'm')
        ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(290);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(292);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(295);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(296);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(297);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == ':')
        ADVANCE(300);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_minecraft_COLON);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(301);
      END_STATE();
    case 302:
      if (lookahead == 'g')
        ADVANCE(106);
      if (lookahead == 'm')
        ADVANCE(303);
      if (lookahead == 'r')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(302);
      END_STATE();
    case 303:
      if (lookahead == 'e')
        ADVANCE(149);
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 304:
      if (lookahead == 'e')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'm')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'o')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'v')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'e')
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 310:
      if (lookahead == '/')
        ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(310);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH);
      if (lookahead == '/')
        ADVANCE(311);
      if (lookahead == ':')
        ADVANCE(313);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 313:
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 314:
      if (lookahead == 'o')
        ADVANCE(315);
      if (lookahead == 'p')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(314);
      END_STATE();
    case 315:
      if (lookahead == 'b')
        ADVANCE(167);
      END_STATE();
    case 316:
      if (lookahead == 'l')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'a')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'y')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'e')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'r')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 's')
        ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_players);
      END_STATE();
    case 323:
      if (lookahead == 'a')
        ADVANCE(324);
      if (lookahead == 'e')
        ADVANCE(327);
      if (lookahead == 'j')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(332);
      if (lookahead == 'm')
        ADVANCE(333);
      if (lookahead == 'r')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      END_STATE();
    case 324:
      if (lookahead == 'd')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'd')
        ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 327:
      if (lookahead == 'm')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'p')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 't')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'y')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 332:
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == 'i')
        ADVANCE(131);
      END_STATE();
    case 333:
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 334:
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == 'a')
        ADVANCE(335);
      if (lookahead == 'f')
        ADVANCE(348);
      if (lookahead == 'i')
        ADVANCE(349);
      if (lookahead == 'p')
        ADVANCE(351);
      if (lookahead == 'r')
        ADVANCE(361);
      if (lookahead == 's')
        ADVANCE(370);
      if (lookahead == 'u')
        ADVANCE(220);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(334);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(375);
      END_STATE();
    case 335:
      if (lookahead == 'l')
        ADVANCE(336);
      if (lookahead == 'n')
        ADVANCE(340);
      if (lookahead == 's')
        ADVANCE(289);
      if (lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 336:
      if (lookahead == 'i')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'g')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 340:
      if (lookahead == 'c')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'h')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'o')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'r')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'e')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'd')
        ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 348:
      if (lookahead == 'a')
        ADVANCE(84);
      END_STATE();
    case 349:
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 351:
      if (lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 's')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'i')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 't')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'i')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'o')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'n')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'e')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'd')
        ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 361:
      if (lookahead == 'o')
        ADVANCE(362);
      if (lookahead == 'u')
        ADVANCE(368);
      END_STATE();
    case 362:
      if (lookahead == 't')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'a')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 't')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'e')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == 'd')
        ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 368:
      if (lookahead == 'n')
        ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 370:
      if (lookahead == 't')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'o')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'r')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'e')
        ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_store);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(375);
      END_STATE();
    case 376:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      END_STATE();
    case 377:
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
        SKIP(377);
      END_STATE();
    case 378:
      if (lookahead == 'b')
        ADVANCE(379);
      if (lookahead == 'd')
        ADVANCE(242);
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == 's')
        ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(378);
      END_STATE();
    case 379:
      if (lookahead == 'l')
        ADVANCE(49);
      END_STATE();
    case 380:
      if (lookahead == 'n')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 't')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'i')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 't')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'y')
        ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 386:
      if (lookahead == 'c')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'o')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'r')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'e')
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_score);
      END_STATE();
    case 391:
      if (lookahead == 'a')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(392);
      if (lookahead == 'm')
        ADVANCE(333);
      if (lookahead == 'r')
        ADVANCE(304);
      if (lookahead == 's')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(391);
      END_STATE();
    case 392:
      if (lookahead == 'i')
        ADVANCE(131);
      END_STATE();
    case 393:
      if (lookahead == 'e')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 't')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'd')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 'i')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 's')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'p')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'l')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'a')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'y')
        ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_setdisplay);
      END_STATE();
    case 403:
      if (lookahead == 'a')
        ADVANCE(324);
      if (lookahead == 'e')
        ADVANCE(404);
      if (lookahead == 'g')
        ADVANCE(106);
      if (lookahead == 'l')
        ADVANCE(392);
      if (lookahead == 'o')
        ADVANCE(410);
      if (lookahead == 'r')
        ADVANCE(411);
      if (lookahead == 's')
        ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(403);
      END_STATE();
    case 404:
      if (lookahead == 'n')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'a')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'b')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 'l')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'e')
        ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 410:
      if (lookahead == 'p')
        ADVANCE(176);
      END_STATE();
    case 411:
      if (lookahead == 'e')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'm')
        ADVANCE(306);
      if (lookahead == 's')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'e')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 't')
        ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 416:
      if (lookahead == 'e')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 't')
        ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 419:
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(419);
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
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH);
      END_STATE();
    case 436:
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(436);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(437);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(420);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(437);
      END_STATE();
    case 438:
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == 'a')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(392);
      if (lookahead == 'r')
        ADVANCE(304);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(438);
      END_STATE();
    case 439:
      if (lookahead == 'm')
        ADVANCE(440);
      if (lookahead == 'o')
        ADVANCE(441);
      if (lookahead == 't')
        ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(439);
      END_STATE();
    case 440:
      if (lookahead == 'i')
        ADVANCE(153);
      END_STATE();
    case 441:
      if (lookahead == 'v')
        ADVANCE(184);
      END_STATE();
    case 442:
      if (lookahead == 'h')
        ADVANCE(207);
      END_STATE();
    case 443:
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == '~')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(443);
      END_STATE();
    case 444:
      if (lookahead == 'r')
        ADVANCE(445);
      if (lookahead == 's')
        ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(444);
      END_STATE();
    case 445:
      if (lookahead == 'e')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 's')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'u')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'l')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 't')
        ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 451:
      if (lookahead == 'u')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'c')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'c')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'e')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 's')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 's')
        ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_success);
      END_STATE();
    case 458:
      if (lookahead == 'e')
        ADVANCE(459);
      if (lookahead == 'f')
        ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(458);
      END_STATE();
    case 459:
      if (lookahead == 'y')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'e')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 's')
        ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_eyes);
      END_STATE();
    case 463:
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 464:
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
        SKIP(464);
      END_STATE();
    case 465:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(465);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == '.')
        ADVANCE(467);
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      END_STATE();
    case 467:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 't')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 470:
      if (lookahead == 'b')
        ADVANCE(471);
      if (lookahead == 'l')
        ADVANCE(392);
      if (lookahead == 's')
        ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(470);
      END_STATE();
    case 471:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 472:
      if (lookahead == 'i')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'd')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 'e')
        ADVANCE(475);
      END_STATE();
    case 475:
      if (lookahead == 'b')
        ADVANCE(476);
      END_STATE();
    case 476:
      if (lookahead == 'a')
        ADVANCE(477);
      END_STATE();
    case 477:
      if (lookahead == 'r')
        ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_sidebar);
      if (lookahead == '.')
        ADVANCE(479);
      END_STATE();
    case 479:
      if (lookahead == 't')
        ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead == 'e')
        ADVANCE(481);
      END_STATE();
    case 481:
      if (lookahead == 'a')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead == 'm')
        ADVANCE(483);
      END_STATE();
    case 483:
      if (lookahead == '.')
        ADVANCE(484);
      END_STATE();
    case 484:
      if (lookahead == 'a')
        ADVANCE(485);
      if (lookahead == 'b')
        ADVANCE(489);
      if (lookahead == 'd')
        ADVANCE(496);
      if (lookahead == 'g')
        ADVANCE(525);
      if (lookahead == 'l')
        ADVANCE(535);
      if (lookahead == 'r')
        ADVANCE(547);
      if (lookahead == 'w')
        ADVANCE(550);
      if (lookahead == 'y')
        ADVANCE(555);
      END_STATE();
    case 485:
      if (lookahead == 'q')
        ADVANCE(486);
      END_STATE();
    case 486:
      if (lookahead == 'u')
        ADVANCE(487);
      END_STATE();
    case 487:
      if (lookahead == 'a')
        ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTaqua);
      END_STATE();
    case 489:
      if (lookahead == 'l')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 'a')
        ADVANCE(491);
      if (lookahead == 'u')
        ADVANCE(494);
      END_STATE();
    case 491:
      if (lookahead == 'c')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 'k')
        ADVANCE(493);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTblack);
      END_STATE();
    case 494:
      if (lookahead == 'e')
        ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTblue);
      END_STATE();
    case 496:
      if (lookahead == 'a')
        ADVANCE(497);
      END_STATE();
    case 497:
      if (lookahead == 'r')
        ADVANCE(498);
      END_STATE();
    case 498:
      if (lookahead == 'k')
        ADVANCE(499);
      END_STATE();
    case 499:
      if (lookahead == '_')
        ADVANCE(500);
      END_STATE();
    case 500:
      if (lookahead == 'a')
        ADVANCE(501);
      if (lookahead == 'b')
        ADVANCE(505);
      if (lookahead == 'g')
        ADVANCE(509);
      if (lookahead == 'p')
        ADVANCE(516);
      if (lookahead == 'r')
        ADVANCE(522);
      END_STATE();
    case 501:
      if (lookahead == 'q')
        ADVANCE(502);
      END_STATE();
    case 502:
      if (lookahead == 'u')
        ADVANCE(503);
      END_STATE();
    case 503:
      if (lookahead == 'a')
        ADVANCE(504);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_aqua);
      END_STATE();
    case 505:
      if (lookahead == 'l')
        ADVANCE(506);
      END_STATE();
    case 506:
      if (lookahead == 'u')
        ADVANCE(507);
      END_STATE();
    case 507:
      if (lookahead == 'e')
        ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_blue);
      END_STATE();
    case 509:
      if (lookahead == 'r')
        ADVANCE(510);
      END_STATE();
    case 510:
      if (lookahead == 'a')
        ADVANCE(511);
      if (lookahead == 'e')
        ADVANCE(513);
      END_STATE();
    case 511:
      if (lookahead == 'y')
        ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_gray);
      END_STATE();
    case 513:
      if (lookahead == 'e')
        ADVANCE(514);
      END_STATE();
    case 514:
      if (lookahead == 'n')
        ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_green);
      END_STATE();
    case 516:
      if (lookahead == 'u')
        ADVANCE(517);
      END_STATE();
    case 517:
      if (lookahead == 'r')
        ADVANCE(518);
      END_STATE();
    case 518:
      if (lookahead == 'p')
        ADVANCE(519);
      END_STATE();
    case 519:
      if (lookahead == 'l')
        ADVANCE(520);
      END_STATE();
    case 520:
      if (lookahead == 'e')
        ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_purple);
      END_STATE();
    case 522:
      if (lookahead == 'e')
        ADVANCE(523);
      END_STATE();
    case 523:
      if (lookahead == 'd')
        ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTdark_red);
      END_STATE();
    case 525:
      if (lookahead == 'o')
        ADVANCE(526);
      if (lookahead == 'r')
        ADVANCE(529);
      END_STATE();
    case 526:
      if (lookahead == 'l')
        ADVANCE(527);
      END_STATE();
    case 527:
      if (lookahead == 'd')
        ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgold);
      END_STATE();
    case 529:
      if (lookahead == 'a')
        ADVANCE(530);
      if (lookahead == 'e')
        ADVANCE(532);
      END_STATE();
    case 530:
      if (lookahead == 'y')
        ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgray);
      END_STATE();
    case 532:
      if (lookahead == 'e')
        ADVANCE(533);
      END_STATE();
    case 533:
      if (lookahead == 'n')
        ADVANCE(534);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTgreen);
      END_STATE();
    case 535:
      if (lookahead == 'i')
        ADVANCE(536);
      END_STATE();
    case 536:
      if (lookahead == 'g')
        ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == 'h')
        ADVANCE(538);
      END_STATE();
    case 538:
      if (lookahead == 't')
        ADVANCE(539);
      END_STATE();
    case 539:
      if (lookahead == '_')
        ADVANCE(540);
      END_STATE();
    case 540:
      if (lookahead == 'p')
        ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 'u')
        ADVANCE(542);
      END_STATE();
    case 542:
      if (lookahead == 'r')
        ADVANCE(543);
      END_STATE();
    case 543:
      if (lookahead == 'p')
        ADVANCE(544);
      END_STATE();
    case 544:
      if (lookahead == 'l')
        ADVANCE(545);
      END_STATE();
    case 545:
      if (lookahead == 'e')
        ADVANCE(546);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTlight_purple);
      END_STATE();
    case 547:
      if (lookahead == 'e')
        ADVANCE(548);
      END_STATE();
    case 548:
      if (lookahead == 'd')
        ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTred);
      END_STATE();
    case 550:
      if (lookahead == 'h')
        ADVANCE(551);
      END_STATE();
    case 551:
      if (lookahead == 'i')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 't')
        ADVANCE(553);
      END_STATE();
    case 553:
      if (lookahead == 'e')
        ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTwhite);
      END_STATE();
    case 555:
      if (lookahead == 'e')
        ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == 'l')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'l')
        ADVANCE(558);
      END_STATE();
    case 558:
      if (lookahead == 'o')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == 'w')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_sidebar_DOTteam_DOTyellow);
      END_STATE();
    case 561:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(561);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(562);
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
        ADVANCE(380);
      if (lookahead == 's')
        ADVANCE(386);
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
        ADVANCE(416);
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
        ADVANCE(291);
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
        ADVANCE(301);
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
        ADVANCE(335);
      if (lookahead == 'f')
        ADVANCE(348);
      if (lookahead == 'i')
        ADVANCE(349);
      if (lookahead == 'p')
        ADVANCE(351);
      if (lookahead == 'r')
        ADVANCE(361);
      if (lookahead == 's')
        ADVANCE(370);
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
  [4] = {.lex_state = 287},
  [5] = {.lex_state = 290},
  [6] = {.lex_state = 282},
  [7] = {.lex_state = 302},
  [8] = {.lex_state = 310},
  [9] = {.lex_state = 241},
  [10] = {.lex_state = 314},
  [11] = {.lex_state = 323},
  [12] = {.lex_state = 285},
  [13] = {.lex_state = 334},
  [14] = {.lex_state = 376},
  [15] = {.lex_state = 334},
  [16] = {.lex_state = 334},
  [17] = {.lex_state = 241},
  [18] = {.lex_state = 334},
  [19] = {.lex_state = 377},
  [20] = {.lex_state = 334},
  [21] = {.lex_state = 334},
  [22] = {.lex_state = 287},
  [23] = {.lex_state = 290},
  [24] = {.lex_state = 287},
  [25] = {.lex_state = 287},
  [26] = {.lex_state = 334},
  [27] = {.lex_state = 334},
  [28] = {.lex_state = 378},
  [29] = {.lex_state = 378},
  [30] = {.lex_state = 378},
  [31] = {.lex_state = 378},
  [32] = {.lex_state = 334},
  [33] = {.lex_state = 334},
  [34] = {.lex_state = 334},
  [35] = {.lex_state = 310},
  [36] = {.lex_state = 391},
  [37] = {.lex_state = 403},
  [38] = {.lex_state = 334},
  [39] = {.lex_state = 419},
  [40] = {.lex_state = 419},
  [41] = {.lex_state = 436},
  [42] = {.lex_state = 419},
  [43] = {.lex_state = 285},
  [44] = {.lex_state = 377},
  [45] = {.lex_state = 438},
  [46] = {.lex_state = 323},
  [47] = {.lex_state = 241},
  [48] = {.lex_state = 285},
  [49] = {.lex_state = 285},
  [50] = {.lex_state = 378},
  [51] = {.lex_state = 378},
  [52] = {.lex_state = 439},
  [53] = {.lex_state = 287},
  [54] = {.lex_state = 287},
  [55] = {.lex_state = 443},
  [56] = {.lex_state = 444},
  [57] = {.lex_state = 458},
  [58] = {.lex_state = 464},
  [59] = {.lex_state = 334},
  [60] = {.lex_state = 241},
  [61] = {.lex_state = 241},
  [62] = {.lex_state = 334},
  [63] = {.lex_state = 287},
  [64] = {.lex_state = 287},
  [65] = {.lex_state = 287},
  [66] = {.lex_state = 334},
  [67] = {.lex_state = 285},
  [68] = {.lex_state = 287},
  [69] = {.lex_state = 285},
  [70] = {.lex_state = 287},
  [71] = {.lex_state = 285},
  [72] = {.lex_state = 287},
  [73] = {.lex_state = 285},
  [74] = {.lex_state = 287},
  [75] = {.lex_state = 465},
  [76] = {.lex_state = 465},
  [77] = {.lex_state = 419},
  [78] = {.lex_state = 419},
  [79] = {.lex_state = 419},
  [80] = {.lex_state = 334},
  [81] = {.lex_state = 470},
  [82] = {.lex_state = 285},
  [83] = {.lex_state = 285},
  [84] = {.lex_state = 285},
  [85] = {.lex_state = 285},
  [86] = {.lex_state = 285},
  [87] = {.lex_state = 334},
  [88] = {.lex_state = 334},
  [89] = {.lex_state = 561},
  [90] = {.lex_state = 561},
  [91] = {.lex_state = 285},
  [92] = {.lex_state = 285},
  [93] = {.lex_state = 438},
  [94] = {.lex_state = 563},
  [95] = {.lex_state = 334},
  [96] = {.lex_state = 334},
  [97] = {.lex_state = 334},
  [98] = {.lex_state = 334},
  [99] = {.lex_state = 378},
  [100] = {.lex_state = 285},
  [101] = {.lex_state = 287},
  [102] = {.lex_state = 287},
  [103] = {.lex_state = 285},
  [104] = {.lex_state = 334},
  [105] = {.lex_state = 334},
  [106] = {.lex_state = 565},
  [107] = {.lex_state = 334},
  [108] = {.lex_state = 334},
  [109] = {.lex_state = 285},
  [110] = {.lex_state = 334},
  [111] = {.lex_state = 285},
  [112] = {.lex_state = 287},
  [113] = {.lex_state = 285},
  [114] = {.lex_state = 334},
  [115] = {.lex_state = 566},
  [116] = {.lex_state = 334},
  [117] = {.lex_state = 334},
  [118] = {.lex_state = 334},
  [119] = {.lex_state = 334},
  [120] = {.lex_state = 241},
  [121] = {.lex_state = 334},
  [122] = {.lex_state = 572},
  [123] = {.lex_state = 290},
  [124] = {.lex_state = 287},
  [125] = {.lex_state = 574},
  [126] = {.lex_state = 334},
  [127] = {.lex_state = 576},
  [128] = {.lex_state = 287},
  [129] = {.lex_state = 377},
  [130] = {.lex_state = 582},
  [131] = {.lex_state = 582},
  [132] = {.lex_state = 287},
  [133] = {.lex_state = 377},
  [134] = {.lex_state = 586},
  [135] = {.lex_state = 586},
  [136] = {.lex_state = 287},
  [137] = {.lex_state = 586},
  [138] = {.lex_state = 334},
  [139] = {.lex_state = 334},
  [140] = {.lex_state = 334},
  [141] = {.lex_state = 588},
  [142] = {.lex_state = 602},
  [143] = {.lex_state = 603},
  [144] = {.lex_state = 603},
  [145] = {.lex_state = 419},
  [146] = {.lex_state = 377},
  [147] = {.lex_state = 419},
  [148] = {.lex_state = 419},
  [149] = {.lex_state = 419},
  [150] = {.lex_state = 334},
  [151] = {.lex_state = 419},
  [152] = {.lex_state = 377},
  [153] = {.lex_state = 436},
  [154] = {.lex_state = 436},
  [155] = {.lex_state = 561},
  [156] = {.lex_state = 561},
  [157] = {.lex_state = 334},
  [158] = {.lex_state = 572},
  [159] = {.lex_state = 334},
  [160] = {.lex_state = 285},
  [161] = {.lex_state = 287},
  [162] = {.lex_state = 334},
  [163] = {.lex_state = 290},
  [164] = {.lex_state = 287},
  [165] = {.lex_state = 419},
  [166] = {.lex_state = 439},
  [167] = {.lex_state = 334},
  [168] = {.lex_state = 334},
  [169] = {.lex_state = 334},
  [170] = {.lex_state = 285},
  [171] = {.lex_state = 287},
  [172] = {.lex_state = 285},
  [173] = {.lex_state = 310},
  [174] = {.lex_state = 334},
  [175] = {.lex_state = 605},
  [176] = {.lex_state = 609},
  [177] = {.lex_state = 605},
  [178] = {.lex_state = 290},
  [179] = {.lex_state = 290},
  [180] = {.lex_state = 334},
  [181] = {.lex_state = 334},
  [182] = {.lex_state = 334},
  [183] = {.lex_state = 334},
  [184] = {.lex_state = 334},
  [185] = {.lex_state = 565},
  [186] = {.lex_state = 610},
  [187] = {.lex_state = 334},
  [188] = {.lex_state = 287},
  [189] = {.lex_state = 611},
  [190] = {.lex_state = 334},
  [191] = {.lex_state = 287},
  [192] = {.lex_state = 615},
  [193] = {.lex_state = 334},
  [194] = {.lex_state = 287},
  [195] = {.lex_state = 617},
  [196] = {.lex_state = 334},
  [197] = {.lex_state = 634},
  [198] = {.lex_state = 419},
  [199] = {.lex_state = 334},
  [200] = {.lex_state = 642},
  [201] = {.lex_state = 605},
  [202] = {.lex_state = 436},
  [203] = {.lex_state = 334},
  [204] = {.lex_state = 334},
  [205] = {.lex_state = 609},
  [206] = {.lex_state = 586},
  [207] = {.lex_state = 334},
  [208] = {.lex_state = 287},
  [209] = {.lex_state = 644},
  [210] = {.lex_state = 334},
  [211] = {.lex_state = 586},
  [212] = {.lex_state = 419},
  [213] = {.lex_state = 646},
  [214] = {.lex_state = 646},
  [215] = {.lex_state = 572},
  [216] = {.lex_state = 334},
  [217] = {.lex_state = 609},
  [218] = {.lex_state = 572},
  [219] = {.lex_state = 334},
  [220] = {.lex_state = 334},
  [221] = {.lex_state = 290},
  [222] = {.lex_state = 334},
  [223] = {.lex_state = 334},
  [224] = {.lex_state = 576},
  [225] = {.lex_state = 574},
  [226] = {.lex_state = 334},
  [227] = {.lex_state = 610},
  [228] = {.lex_state = 649},
  [229] = {.lex_state = 572},
  [230] = {.lex_state = 582},
  [231] = {.lex_state = 572},
  [232] = {.lex_state = 586},
  [233] = {.lex_state = 650},
  [234] = {.lex_state = 642},
  [235] = {.lex_state = 334},
  [236] = {.lex_state = 572},
  [237] = {.lex_state = 334},
  [238] = {.lex_state = 285},
  [239] = {.lex_state = 285},
  [240] = {.lex_state = 572},
  [241] = {.lex_state = 438},
  [242] = {.lex_state = 609},
  [243] = {.lex_state = 334},
  [244] = {.lex_state = 287},
  [245] = {.lex_state = 652},
  [246] = {.lex_state = 642},
  [247] = {.lex_state = 285},
  [248] = {.lex_state = 285},
  [249] = {.lex_state = 658},
  [250] = {.lex_state = 334},
  [251] = {.lex_state = 609},
  [252] = {.lex_state = 334},
  [253] = {.lex_state = 609},
  [254] = {.lex_state = 609},
  [255] = {.lex_state = 609},
  [256] = {.lex_state = 334},
  [257] = {.lex_state = 334},
  [258] = {.lex_state = 605},
  [259] = {.lex_state = 609},
  [260] = {.lex_state = 605},
  [261] = {.lex_state = 576},
  [262] = {.lex_state = 574},
  [263] = {.lex_state = 671},
  [264] = {.lex_state = 675},
  [265] = {.lex_state = 610},
  [266] = {.lex_state = 679},
  [267] = {.lex_state = 610},
  [268] = {.lex_state = 334},
  [269] = {.lex_state = 610},
  [270] = {.lex_state = 609},
  [271] = {.lex_state = 609},
  [272] = {.lex_state = 576},
  [273] = {.lex_state = 378},
  [274] = {.lex_state = 334},
  [275] = {.lex_state = 650},
  [276] = {.lex_state = 609},
  [277] = {.lex_state = 419},
  [278] = {.lex_state = 609},
  [279] = {.lex_state = 438},
  [280] = {.lex_state = 287},
  [281] = {.lex_state = 334},
  [282] = {.lex_state = 642},
  [283] = {.lex_state = 680},
  [284] = {.lex_state = 419},
  [285] = {.lex_state = 682},
  [286] = {.lex_state = 682},
  [287] = {.lex_state = 334},
  [288] = {.lex_state = 290},
  [289] = {.lex_state = 334},
  [290] = {.lex_state = 609},
  [291] = {.lex_state = 687},
  [292] = {.lex_state = 679},
  [293] = {.lex_state = 609},
  [294] = {.lex_state = 679},
  [295] = {.lex_state = 610},
  [296] = {.lex_state = 679},
  [297] = {.lex_state = 671},
  [298] = {.lex_state = 675},
  [299] = {.lex_state = 582},
  [300] = {.lex_state = 609},
  [301] = {.lex_state = 586},
  [302] = {.lex_state = 609},
  [303] = {.lex_state = 576},
  [304] = {.lex_state = 671},
  [305] = {.lex_state = 675},
  [306] = {.lex_state = 334},
  [307] = {.lex_state = 334},
  [308] = {.lex_state = 285},
  [309] = {.lex_state = 287},
  [310] = {.lex_state = 334},
  [311] = {.lex_state = 419},
  [312] = {.lex_state = 609},
  [313] = {.lex_state = 334},
  [314] = {.lex_state = 436},
  [315] = {.lex_state = 609},
  [316] = {.lex_state = 652},
  [317] = {.lex_state = 334},
  [318] = {.lex_state = 680},
  [319] = {.lex_state = 334},
  [320] = {.lex_state = 334},
  [321] = {.lex_state = 609},
  [322] = {.lex_state = 334},
  [323] = {.lex_state = 609},
  [324] = {.lex_state = 609},
  [325] = {.lex_state = 576},
  [326] = {.lex_state = 679},
  [327] = {.lex_state = 609},
  [328] = {.lex_state = 679},
  [329] = {.lex_state = 610},
  [330] = {.lex_state = 679},
  [331] = {.lex_state = 671},
  [332] = {.lex_state = 675},
  [333] = {.lex_state = 582},
  [334] = {.lex_state = 586},
  [335] = {.lex_state = 334},
  [336] = {.lex_state = 609},
  [337] = {.lex_state = 334},
  [338] = {.lex_state = 671},
  [339] = {.lex_state = 675},
  [340] = {.lex_state = 586},
  [341] = {.lex_state = 419},
  [342] = {.lex_state = 436},
  [343] = {.lex_state = 334},
  [344] = {.lex_state = 609},
  [345] = {.lex_state = 679},
  [346] = {.lex_state = 609},
  [347] = {.lex_state = 679},
  [348] = {.lex_state = 334},
  [349] = {.lex_state = 609},
  [350] = {.lex_state = 334},
  [351] = {.lex_state = 334},
  [352] = {.lex_state = 334},
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
    [sym_selector] = STATE(21),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [4] = {
    [sym_coordinate] = ACTIONS(37),
  },
  [5] = {
    [sym_entity_type] = STATE(25),
    [anon_sym_minecraft_COLON] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(41),
  },
  [6] = {
    [sym_message] = STATE(27),
    [aux_sym_SLASH_LBRACK_CARET_LF_CR_RBRACK_PLUS_SLASH] = ACTIONS(43),
  },
  [7] = {
    [sym__data_merge_command] = STATE(32),
    [sym__data_get_command] = STATE(32),
    [sym__data_remove_command] = STATE(32),
    [sym__data_modify_command] = STATE(32),
    [anon_sym_merge] = ACTIONS(45),
    [anon_sym_get] = ACTIONS(47),
    [anon_sym_remove] = ACTIONS(49),
    [anon_sym_modify] = ACTIONS(51),
  },
  [8] = {
    [sym_function_name] = STATE(34),
    [aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH] = ACTIONS(53),
  },
  [9] = {
    [anon_sym_function] = ACTIONS(55),
  },
  [10] = {
    [sym__scoreboard_objectives_command] = STATE(38),
    [sym__scoreboard_players_command] = STATE(38),
    [anon_sym_objectives] = ACTIONS(57),
    [anon_sym_players] = ACTIONS(59),
  },
  [11] = {
    [anon_sym_remove] = ACTIONS(61),
    [anon_sym_modify] = ACTIONS(63),
    [anon_sym_add] = ACTIONS(61),
    [anon_sym_list] = ACTIONS(65),
    [anon_sym_empty] = ACTIONS(61),
    [anon_sym_join] = ACTIONS(67),
    [anon_sym_leave] = ACTIONS(69),
  },
  [12] = {
    [sym_selector] = STATE(46),
    [sym__entity_selector] = STATE(45),
    [anon_sym_AT] = ACTIONS(71),
    [sym_fakeplayer] = ACTIONS(73),
  },
  [13] = {
    [sym__execute_as_command] = STATE(59),
    [sym__execute_at_command] = STATE(59),
    [sym__execute_if_command] = STATE(59),
    [sym__execute_unless_command] = STATE(59),
    [sym__execute_in_command] = STATE(59),
    [sym__execute_positioned_command] = STATE(59),
    [sym__execute_rotated_command] = STATE(59),
    [sym__execute_facing_command] = STATE(59),
    [sym__execute_store_command] = STATE(59),
    [sym__execute_anchored_command] = STATE(59),
    [sym__execute_align_command] = STATE(59),
    [aux_sym__execute_command_repeat1] = STATE(59),
    [sym__line_break] = ACTIONS(75),
    [anon_sym_run] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_at] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_unless] = ACTIONS(85),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_positioned] = ACTIONS(89),
    [anon_sym_rotated] = ACTIONS(91),
    [anon_sym_facing] = ACTIONS(93),
    [anon_sym_store] = ACTIONS(95),
    [anon_sym_anchored] = ACTIONS(97),
    [anon_sym_align] = ACTIONS(99),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(101),
  },
  [15] = {
    [sym__line_break] = ACTIONS(103),
  },
  [16] = {
    [sym__line_break] = ACTIONS(105),
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
    [aux_sym_function_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [sym__line_break] = ACTIONS(109),
  },
  [19] = {
    [anon_sym_p] = ACTIONS(111),
    [anon_sym_a] = ACTIONS(111),
    [anon_sym_r] = ACTIONS(111),
    [anon_sym_s] = ACTIONS(111),
    [anon_sym_e] = ACTIONS(111),
  },
  [20] = {
    [sym__line_break] = ACTIONS(113),
    [anon_sym_run] = ACTIONS(115),
    [anon_sym_as] = ACTIONS(115),
    [anon_sym_at] = ACTIONS(115),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_unless] = ACTIONS(115),
    [anon_sym_in] = ACTIONS(115),
    [anon_sym_positioned] = ACTIONS(115),
    [anon_sym_rotated] = ACTIONS(115),
    [anon_sym_facing] = ACTIONS(115),
    [anon_sym_store] = ACTIONS(115),
    [anon_sym_anchored] = ACTIONS(115),
    [anon_sym_align] = ACTIONS(115),
  },
  [21] = {
    [sym__line_break] = ACTIONS(117),
  },
  [22] = {
    [sym_coordinate] = ACTIONS(119),
  },
  [23] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(121),
  },
  [24] = {
    [sym_coordinate] = ACTIONS(123),
  },
  [25] = {
    [sym__coordinate3] = STATE(66),
    [sym_coordinate] = ACTIONS(125),
  },
  [26] = {
    [sym__line_break] = ACTIONS(127),
  },
  [27] = {
    [sym__line_break] = ACTIONS(129),
  },
  [28] = {
    [anon_sym_entity] = ACTIONS(131),
    [anon_sym_block] = ACTIONS(133),
  },
  [29] = {
    [anon_sym_entity] = ACTIONS(135),
    [anon_sym_block] = ACTIONS(137),
  },
  [30] = {
    [anon_sym_entity] = ACTIONS(139),
    [anon_sym_block] = ACTIONS(141),
  },
  [31] = {
    [anon_sym_entity] = ACTIONS(143),
    [anon_sym_block] = ACTIONS(145),
  },
  [32] = {
    [sym__line_break] = ACTIONS(147),
  },
  [33] = {
    [sym__line_break] = ACTIONS(149),
  },
  [34] = {
    [sym__line_break] = ACTIONS(151),
  },
  [35] = {
    [sym_function_name] = STATE(76),
    [aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH] = ACTIONS(153),
  },
  [36] = {
    [anon_sym_remove] = ACTIONS(155),
    [anon_sym_modify] = ACTIONS(157),
    [anon_sym_add] = ACTIONS(159),
    [anon_sym_list] = ACTIONS(161),
    [anon_sym_setdisplay] = ACTIONS(163),
  },
  [37] = {
    [anon_sym_get] = ACTIONS(165),
    [anon_sym_remove] = ACTIONS(167),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_add] = ACTIONS(167),
    [anon_sym_list] = ACTIONS(169),
    [anon_sym_enable] = ACTIONS(165),
    [anon_sym_operation] = ACTIONS(171),
    [anon_sym_reset] = ACTIONS(173),
  },
  [38] = {
    [sym__line_break] = ACTIONS(175),
  },
  [39] = {
    [sym_team] = STATE(88),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(177),
  },
  [40] = {
    [sym_team] = STATE(90),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(179),
  },
  [41] = {
    [sym_team] = STATE(88),
    [sym__line_break] = ACTIONS(181),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(183),
  },
  [42] = {
    [sym_team] = STATE(92),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(185),
  },
  [43] = {
    [sym_selector] = STATE(88),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [44] = {
    [anon_sym_p] = ACTIONS(187),
    [anon_sym_a] = ACTIONS(187),
    [anon_sym_r] = ACTIONS(187),
    [anon_sym_s] = ACTIONS(187),
    [anon_sym_e] = ACTIONS(187),
  },
  [45] = {
    [anon_sym_remove] = ACTIONS(113),
    [anon_sym_add] = ACTIONS(113),
    [anon_sym_list] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
  },
  [46] = {
    [anon_sym_remove] = ACTIONS(189),
    [anon_sym_add] = ACTIONS(189),
    [anon_sym_list] = ACTIONS(191),
  },
  [47] = {
    [sym_command] = STATE(96),
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
  [48] = {
    [sym_selector] = STATE(97),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [49] = {
    [sym_selector] = STATE(98),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [50] = {
    [sym__if_unless_command] = STATE(104),
    [anon_sym_data] = ACTIONS(193),
    [anon_sym_entity] = ACTIONS(195),
    [anon_sym_block] = ACTIONS(197),
    [anon_sym_blocks] = ACTIONS(199),
    [anon_sym_score] = ACTIONS(201),
  },
  [51] = {
    [sym__if_unless_command] = STATE(105),
    [anon_sym_data] = ACTIONS(193),
    [anon_sym_entity] = ACTIONS(195),
    [anon_sym_block] = ACTIONS(197),
    [anon_sym_blocks] = ACTIONS(199),
    [anon_sym_score] = ACTIONS(201),
  },
  [52] = {
    [sym_dimension] = STATE(108),
    [anon_sym_minecraft] = ACTIONS(203),
    [anon_sym_overworld] = ACTIONS(205),
    [anon_sym_the_nether] = ACTIONS(205),
    [anon_sym_the_end] = ACTIONS(205),
  },
  [53] = {
    [sym__coordinate3] = STATE(110),
    [anon_sym_as] = ACTIONS(207),
    [sym_coordinate] = ACTIONS(125),
  },
  [54] = {
    [anon_sym_as] = ACTIONS(209),
    [sym_coordinate] = ACTIONS(211),
  },
  [55] = {
    [sym__coordinate3] = STATE(114),
    [anon_sym_entity] = ACTIONS(213),
    [sym_coordinate] = ACTIONS(125),
  },
  [56] = {
    [anon_sym_result] = ACTIONS(215),
    [anon_sym_success] = ACTIONS(215),
  },
  [57] = {
    [sym_anchor] = STATE(117),
    [anon_sym_feet] = ACTIONS(217),
    [anon_sym_eyes] = ACTIONS(217),
  },
  [58] = {
    [sym_axes_swizzle] = STATE(119),
    [aux_sym_SLASHxy_QMARKz_QMARK_SLASH] = ACTIONS(219),
    [aux_sym_SLASHx_QMARKyz_QMARK_SLASH] = ACTIONS(221),
    [aux_sym_SLASHx_QMARKy_QMARKz_SLASH] = ACTIONS(221),
  },
  [59] = {
    [sym__execute_as_command] = STATE(121),
    [sym__execute_at_command] = STATE(121),
    [sym__execute_if_command] = STATE(121),
    [sym__execute_unless_command] = STATE(121),
    [sym__execute_in_command] = STATE(121),
    [sym__execute_positioned_command] = STATE(121),
    [sym__execute_rotated_command] = STATE(121),
    [sym__execute_facing_command] = STATE(121),
    [sym__execute_store_command] = STATE(121),
    [sym__execute_anchored_command] = STATE(121),
    [sym__execute_align_command] = STATE(121),
    [aux_sym__execute_command_repeat1] = STATE(121),
    [sym__line_break] = ACTIONS(223),
    [anon_sym_run] = ACTIONS(225),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_at] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_unless] = ACTIONS(85),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_positioned] = ACTIONS(89),
    [anon_sym_rotated] = ACTIONS(91),
    [anon_sym_facing] = ACTIONS(93),
    [anon_sym_store] = ACTIONS(95),
    [anon_sym_anchored] = ACTIONS(97),
    [anon_sym_align] = ACTIONS(99),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_teleport] = ACTIONS(227),
    [anon_sym_tp] = ACTIONS(227),
    [anon_sym_setblock] = ACTIONS(227),
    [anon_sym_summon] = ACTIONS(227),
    [anon_sym_say] = ACTIONS(227),
    [anon_sym_data] = ACTIONS(227),
    [anon_sym_function] = ACTIONS(227),
    [anon_sym_schedule] = ACTIONS(227),
    [anon_sym_scoreboard] = ACTIONS(227),
    [anon_sym_team] = ACTIONS(227),
    [anon_sym_tag] = ACTIONS(227),
    [anon_sym_execute] = ACTIONS(227),
  },
  [61] = {
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
    [aux_sym_function_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_teleport] = ACTIONS(232),
    [anon_sym_tp] = ACTIONS(232),
    [anon_sym_setblock] = ACTIONS(235),
    [anon_sym_summon] = ACTIONS(238),
    [anon_sym_say] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(244),
    [anon_sym_function] = ACTIONS(247),
    [anon_sym_schedule] = ACTIONS(250),
    [anon_sym_scoreboard] = ACTIONS(253),
    [anon_sym_team] = ACTIONS(256),
    [anon_sym_tag] = ACTIONS(259),
    [anon_sym_execute] = ACTIONS(262),
  },
  [62] = {
    [sym__line_break] = ACTIONS(265),
    [anon_sym_run] = ACTIONS(267),
    [anon_sym_as] = ACTIONS(267),
    [anon_sym_at] = ACTIONS(267),
    [anon_sym_if] = ACTIONS(267),
    [anon_sym_unless] = ACTIONS(267),
    [anon_sym_in] = ACTIONS(267),
    [anon_sym_positioned] = ACTIONS(267),
    [anon_sym_rotated] = ACTIONS(267),
    [anon_sym_facing] = ACTIONS(267),
    [anon_sym_store] = ACTIONS(267),
    [anon_sym_anchored] = ACTIONS(267),
    [anon_sym_align] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(269),
  },
  [63] = {
    [sym_coordinate] = ACTIONS(271),
  },
  [64] = {
    [sym_coordinate] = ACTIONS(273),
  },
  [65] = {
    [sym_coordinate] = ACTIONS(275),
  },
  [66] = {
    [sym_nbt_compound] = STATE(126),
    [sym__line_break] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
  },
  [67] = {
    [sym_selector] = STATE(127),
    [sym__entity_selector] = STATE(45),
    [anon_sym_AT] = ACTIONS(71),
    [sym_fakeplayer] = ACTIONS(73),
  },
  [68] = {
    [sym__coordinate3] = STATE(127),
    [sym_coordinate] = ACTIONS(281),
  },
  [69] = {
    [sym_selector] = STATE(131),
    [sym__entity_selector] = STATE(130),
    [anon_sym_AT] = ACTIONS(283),
    [sym_fakeplayer] = ACTIONS(285),
  },
  [70] = {
    [sym__coordinate3] = STATE(131),
    [sym_coordinate] = ACTIONS(287),
  },
  [71] = {
    [sym_selector] = STATE(135),
    [sym__entity_selector] = STATE(134),
    [anon_sym_AT] = ACTIONS(289),
    [sym_fakeplayer] = ACTIONS(291),
  },
  [72] = {
    [sym__coordinate3] = STATE(135),
    [sym_coordinate] = ACTIONS(293),
  },
  [73] = {
    [sym_selector] = STATE(137),
    [sym__entity_selector] = STATE(134),
    [anon_sym_AT] = ACTIONS(289),
    [sym_fakeplayer] = ACTIONS(291),
  },
  [74] = {
    [sym__coordinate3] = STATE(137),
    [sym_coordinate] = ACTIONS(293),
  },
  [75] = {
    [sym_time] = ACTIONS(149),
  },
  [76] = {
    [sym_time] = ACTIONS(295),
  },
  [77] = {
    [sym_objective] = STATE(140),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(297),
  },
  [78] = {
    [sym_objective] = STATE(142),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(299),
  },
  [79] = {
    [sym_objective] = STATE(144),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(301),
  },
  [80] = {
    [sym__line_break] = ACTIONS(303),
  },
  [81] = {
    [anon_sym_list] = ACTIONS(305),
    [anon_sym_belowName] = ACTIONS(305),
    [anon_sym_sidebar] = ACTIONS(307),
    [anon_sym_sidebar_DOTteam_DOTaqua] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTblack] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTblue] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTdark_aqua] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTdark_blue] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTdark_gray] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTdark_green] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTdark_purple] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTdark_red] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTgold] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTgray] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTgreen] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTlight_purple] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTred] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTwhite] = ACTIONS(305),
    [anon_sym_sidebar_DOTteam_DOTyellow] = ACTIONS(305),
  },
  [82] = {
    [sym_selector] = STATE(148),
    [sym__entity_selector] = STATE(147),
    [anon_sym_AT] = ACTIONS(309),
    [sym_fakeplayer] = ACTIONS(311),
  },
  [83] = {
    [sym_selector] = STATE(149),
    [sym__entity_selector] = STATE(147),
    [anon_sym_AT] = ACTIONS(309),
    [sym_fakeplayer] = ACTIONS(311),
  },
  [84] = {
    [sym_selector] = STATE(150),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [85] = {
    [sym_selector] = STATE(151),
    [sym__entity_selector] = STATE(147),
    [anon_sym_AT] = ACTIONS(309),
    [sym_fakeplayer] = ACTIONS(311),
  },
  [86] = {
    [sym_selector] = STATE(154),
    [sym__entity_selector] = STATE(153),
    [anon_sym_AT] = ACTIONS(313),
    [sym_fakeplayer] = ACTIONS(315),
  },
  [87] = {
    [sym__line_break] = ACTIONS(317),
  },
  [88] = {
    [sym__line_break] = ACTIONS(319),
  },
  [89] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(317),
  },
  [90] = {
    [sym_team_option] = STATE(156),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(321),
  },
  [91] = {
    [anon_sym_AT] = ACTIONS(317),
    [sym_fakeplayer] = ACTIONS(317),
  },
  [92] = {
    [sym_selector] = STATE(157),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [93] = {
    [anon_sym_remove] = ACTIONS(265),
    [anon_sym_add] = ACTIONS(265),
    [anon_sym_list] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(265),
  },
  [94] = {
    [sym_tag] = ACTIONS(325),
  },
  [95] = {
    [sym__line_break] = ACTIONS(327),
  },
  [96] = {
    [sym__line_break] = ACTIONS(329),
  },
  [97] = {
    [sym__line_break] = ACTIONS(331),
    [anon_sym_run] = ACTIONS(333),
    [anon_sym_as] = ACTIONS(333),
    [anon_sym_at] = ACTIONS(333),
    [anon_sym_if] = ACTIONS(333),
    [anon_sym_unless] = ACTIONS(333),
    [anon_sym_in] = ACTIONS(333),
    [anon_sym_positioned] = ACTIONS(333),
    [anon_sym_rotated] = ACTIONS(333),
    [anon_sym_facing] = ACTIONS(333),
    [anon_sym_store] = ACTIONS(333),
    [anon_sym_anchored] = ACTIONS(333),
    [anon_sym_align] = ACTIONS(333),
  },
  [98] = {
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
  [99] = {
    [anon_sym_entity] = ACTIONS(339),
    [anon_sym_block] = ACTIONS(341),
  },
  [100] = {
    [sym_selector] = STATE(162),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [101] = {
    [sym__coordinate3] = STATE(163),
    [sym_coordinate] = ACTIONS(281),
  },
  [102] = {
    [sym__coordinate3] = STATE(164),
    [sym_coordinate] = ACTIONS(281),
  },
  [103] = {
    [sym_selector] = STATE(165),
    [sym__entity_selector] = STATE(147),
    [anon_sym_AT] = ACTIONS(309),
    [sym_fakeplayer] = ACTIONS(311),
  },
  [104] = {
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
  [105] = {
    [sym__line_break] = ACTIONS(347),
    [anon_sym_run] = ACTIONS(349),
    [anon_sym_as] = ACTIONS(349),
    [anon_sym_at] = ACTIONS(349),
    [anon_sym_if] = ACTIONS(349),
    [anon_sym_unless] = ACTIONS(349),
    [anon_sym_in] = ACTIONS(349),
    [anon_sym_positioned] = ACTIONS(349),
    [anon_sym_rotated] = ACTIONS(349),
    [anon_sym_facing] = ACTIONS(349),
    [anon_sym_store] = ACTIONS(349),
    [anon_sym_anchored] = ACTIONS(349),
    [anon_sym_align] = ACTIONS(349),
  },
  [106] = {
    [anon_sym_COLON] = ACTIONS(351),
  },
  [107] = {
    [sym__line_break] = ACTIONS(353),
    [anon_sym_run] = ACTIONS(355),
    [anon_sym_as] = ACTIONS(355),
    [anon_sym_at] = ACTIONS(355),
    [anon_sym_if] = ACTIONS(355),
    [anon_sym_unless] = ACTIONS(355),
    [anon_sym_in] = ACTIONS(355),
    [anon_sym_positioned] = ACTIONS(355),
    [anon_sym_rotated] = ACTIONS(355),
    [anon_sym_facing] = ACTIONS(355),
    [anon_sym_store] = ACTIONS(355),
    [anon_sym_anchored] = ACTIONS(355),
    [anon_sym_align] = ACTIONS(355),
  },
  [108] = {
    [sym__line_break] = ACTIONS(357),
    [anon_sym_run] = ACTIONS(359),
    [anon_sym_as] = ACTIONS(359),
    [anon_sym_at] = ACTIONS(359),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_unless] = ACTIONS(359),
    [anon_sym_in] = ACTIONS(359),
    [anon_sym_positioned] = ACTIONS(359),
    [anon_sym_rotated] = ACTIONS(359),
    [anon_sym_facing] = ACTIONS(359),
    [anon_sym_store] = ACTIONS(359),
    [anon_sym_anchored] = ACTIONS(359),
    [anon_sym_align] = ACTIONS(359),
  },
  [109] = {
    [sym_selector] = STATE(167),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [110] = {
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
  [111] = {
    [sym_selector] = STATE(168),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [112] = {
    [sym_coordinate] = ACTIONS(365),
  },
  [113] = {
    [sym_selector] = STATE(169),
    [sym__entity_selector] = STATE(20),
    [anon_sym_AT] = ACTIONS(33),
    [sym_fakeplayer] = ACTIONS(35),
  },
  [114] = {
    [sym__line_break] = ACTIONS(367),
    [anon_sym_run] = ACTIONS(369),
    [anon_sym_as] = ACTIONS(369),
    [anon_sym_at] = ACTIONS(369),
    [anon_sym_if] = ACTIONS(369),
    [anon_sym_unless] = ACTIONS(369),
    [anon_sym_in] = ACTIONS(369),
    [anon_sym_positioned] = ACTIONS(369),
    [anon_sym_rotated] = ACTIONS(369),
    [anon_sym_facing] = ACTIONS(369),
    [anon_sym_store] = ACTIONS(369),
    [anon_sym_anchored] = ACTIONS(369),
    [anon_sym_align] = ACTIONS(369),
  },
  [115] = {
    [anon_sym_entity] = ACTIONS(371),
    [anon_sym_block] = ACTIONS(373),
    [anon_sym_score] = ACTIONS(375),
    [anon_sym_bossbar] = ACTIONS(377),
  },
  [116] = {
    [sym__line_break] = ACTIONS(379),
    [anon_sym_run] = ACTIONS(381),
    [anon_sym_as] = ACTIONS(381),
    [anon_sym_at] = ACTIONS(381),
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_unless] = ACTIONS(381),
    [anon_sym_in] = ACTIONS(381),
    [anon_sym_positioned] = ACTIONS(381),
    [anon_sym_rotated] = ACTIONS(381),
    [anon_sym_facing] = ACTIONS(381),
    [anon_sym_store] = ACTIONS(381),
    [anon_sym_anchored] = ACTIONS(381),
    [anon_sym_align] = ACTIONS(381),
  },
  [117] = {
    [sym__line_break] = ACTIONS(383),
    [anon_sym_run] = ACTIONS(385),
    [anon_sym_as] = ACTIONS(385),
    [anon_sym_at] = ACTIONS(385),
    [anon_sym_if] = ACTIONS(385),
    [anon_sym_unless] = ACTIONS(385),
    [anon_sym_in] = ACTIONS(385),
    [anon_sym_positioned] = ACTIONS(385),
    [anon_sym_rotated] = ACTIONS(385),
    [anon_sym_facing] = ACTIONS(385),
    [anon_sym_store] = ACTIONS(385),
    [anon_sym_anchored] = ACTIONS(385),
    [anon_sym_align] = ACTIONS(385),
  },
  [118] = {
    [sym__line_break] = ACTIONS(387),
    [anon_sym_run] = ACTIONS(389),
    [anon_sym_as] = ACTIONS(389),
    [anon_sym_at] = ACTIONS(389),
    [anon_sym_if] = ACTIONS(389),
    [anon_sym_unless] = ACTIONS(389),
    [anon_sym_in] = ACTIONS(389),
    [anon_sym_positioned] = ACTIONS(389),
    [anon_sym_rotated] = ACTIONS(389),
    [anon_sym_facing] = ACTIONS(389),
    [anon_sym_store] = ACTIONS(389),
    [anon_sym_anchored] = ACTIONS(389),
    [anon_sym_align] = ACTIONS(389),
  },
  [119] = {
    [sym__line_break] = ACTIONS(391),
    [anon_sym_run] = ACTIONS(393),
    [anon_sym_as] = ACTIONS(393),
    [anon_sym_at] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(393),
    [anon_sym_unless] = ACTIONS(393),
    [anon_sym_in] = ACTIONS(393),
    [anon_sym_positioned] = ACTIONS(393),
    [anon_sym_rotated] = ACTIONS(393),
    [anon_sym_facing] = ACTIONS(393),
    [anon_sym_store] = ACTIONS(393),
    [anon_sym_anchored] = ACTIONS(393),
    [anon_sym_align] = ACTIONS(393),
  },
  [120] = {
    [sym_command] = STATE(174),
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
  [121] = {
    [sym__execute_as_command] = STATE(121),
    [sym__execute_at_command] = STATE(121),
    [sym__execute_if_command] = STATE(121),
    [sym__execute_unless_command] = STATE(121),
    [sym__execute_in_command] = STATE(121),
    [sym__execute_positioned_command] = STATE(121),
    [sym__execute_rotated_command] = STATE(121),
    [sym__execute_facing_command] = STATE(121),
    [sym__execute_store_command] = STATE(121),
    [sym__execute_anchored_command] = STATE(121),
    [sym__execute_align_command] = STATE(121),
    [aux_sym__execute_command_repeat1] = STATE(121),
    [sym__line_break] = ACTIONS(395),
    [anon_sym_run] = ACTIONS(397),
    [anon_sym_as] = ACTIONS(399),
    [anon_sym_at] = ACTIONS(402),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_unless] = ACTIONS(408),
    [anon_sym_in] = ACTIONS(411),
    [anon_sym_positioned] = ACTIONS(414),
    [anon_sym_rotated] = ACTIONS(417),
    [anon_sym_facing] = ACTIONS(420),
    [anon_sym_store] = ACTIONS(423),
    [anon_sym_anchored] = ACTIONS(426),
    [anon_sym_align] = ACTIONS(429),
  },
  [122] = {
    [sym__selector_argument] = STATE(176),
    [sym_selector_key] = STATE(177),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(432),
  },
  [123] = {
    [sym_block] = STATE(181),
    [sym_block_type] = STATE(182),
    [anon_sym_POUND] = ACTIONS(434),
    [anon_sym_minecraft_COLON] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(438),
  },
  [124] = {
    [sym_coordinate] = ACTIONS(440),
  },
  [125] = {
    [sym__nbt_pair] = STATE(186),
    [anon_sym_RBRACE] = ACTIONS(442),
    [sym_nbt_key] = ACTIONS(444),
  },
  [126] = {
    [sym__line_break] = ACTIONS(446),
  },
  [127] = {
    [sym_nbt_compound] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [128] = {
    [sym_coordinate] = ACTIONS(450),
  },
  [129] = {
    [anon_sym_p] = ACTIONS(452),
    [anon_sym_a] = ACTIONS(452),
    [anon_sym_r] = ACTIONS(452),
    [anon_sym_s] = ACTIONS(452),
    [anon_sym_e] = ACTIONS(452),
  },
  [130] = {
    [sym__line_break] = ACTIONS(115),
    [sym_nbt_path] = ACTIONS(115),
  },
  [131] = {
    [sym__line_break] = ACTIONS(454),
    [sym_nbt_path] = ACTIONS(456),
  },
  [132] = {
    [sym_coordinate] = ACTIONS(458),
  },
  [133] = {
    [anon_sym_p] = ACTIONS(460),
    [anon_sym_a] = ACTIONS(460),
    [anon_sym_r] = ACTIONS(460),
    [anon_sym_s] = ACTIONS(460),
    [anon_sym_e] = ACTIONS(460),
  },
  [134] = {
    [sym_nbt_path] = ACTIONS(113),
  },
  [135] = {
    [sym_nbt_path] = ACTIONS(462),
  },
  [136] = {
    [sym_coordinate] = ACTIONS(464),
  },
  [137] = {
    [sym_nbt_path] = ACTIONS(466),
  },
  [138] = {
    [sym__line_break] = ACTIONS(468),
  },
  [139] = {
    [sym__line_break] = ACTIONS(470),
    [anon_sym_run] = ACTIONS(472),
    [anon_sym_as] = ACTIONS(472),
    [anon_sym_at] = ACTIONS(472),
    [anon_sym_if] = ACTIONS(472),
    [anon_sym_unless] = ACTIONS(472),
    [anon_sym_in] = ACTIONS(472),
    [anon_sym_positioned] = ACTIONS(472),
    [anon_sym_rotated] = ACTIONS(472),
    [anon_sym_facing] = ACTIONS(472),
    [anon_sym_store] = ACTIONS(472),
    [anon_sym_anchored] = ACTIONS(472),
    [anon_sym_align] = ACTIONS(472),
  },
  [140] = {
    [sym__line_break] = ACTIONS(474),
  },
  [141] = {
    [anon_sym_displayname] = ACTIONS(470),
    [anon_sym_rendertype] = ACTIONS(470),
    [anon_sym_matches] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [sym_integer] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_GT_LT] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(472),
    [anon_sym_GT] = ACTIONS(472),
  },
  [142] = {
    [anon_sym_displayname] = ACTIONS(476),
    [anon_sym_rendertype] = ACTIONS(478),
  },
  [143] = {
    [sym_scoreboard_criteria] = ACTIONS(470),
  },
  [144] = {
    [sym_scoreboard_criteria] = ACTIONS(476),
  },
  [145] = {
    [sym_objective] = STATE(196),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(297),
  },
  [146] = {
    [anon_sym_p] = ACTIONS(480),
    [anon_sym_a] = ACTIONS(480),
    [anon_sym_r] = ACTIONS(480),
    [anon_sym_s] = ACTIONS(480),
    [anon_sym_e] = ACTIONS(480),
  },
  [147] = {
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(113),
  },
  [148] = {
    [sym_objective] = STATE(199),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(297),
  },
  [149] = {
    [sym_objective] = STATE(200),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(299),
  },
  [150] = {
    [sym__line_break] = ACTIONS(482),
  },
  [151] = {
    [sym_objective] = STATE(201),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(299),
  },
  [152] = {
    [anon_sym_p] = ACTIONS(484),
    [anon_sym_a] = ACTIONS(484),
    [anon_sym_r] = ACTIONS(484),
    [anon_sym_s] = ACTIONS(484),
    [anon_sym_e] = ACTIONS(484),
  },
  [153] = {
    [sym__line_break] = ACTIONS(113),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(115),
  },
  [154] = {
    [sym_objective] = STATE(199),
    [sym__line_break] = ACTIONS(482),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(486),
  },
  [155] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(488),
  },
  [156] = {
    [sym_team_option_value] = STATE(204),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(490),
  },
  [157] = {
    [sym__line_break] = ACTIONS(492),
  },
  [158] = {
    [sym__selector_argument] = STATE(205),
    [sym_selector_key] = STATE(177),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(432),
  },
  [159] = {
    [sym__line_break] = ACTIONS(494),
  },
  [160] = {
    [sym_selector] = STATE(206),
    [sym__entity_selector] = STATE(134),
    [anon_sym_AT] = ACTIONS(289),
    [sym_fakeplayer] = ACTIONS(291),
  },
  [161] = {
    [sym__coordinate3] = STATE(206),
    [sym_coordinate] = ACTIONS(293),
  },
  [162] = {
    [sym__line_break] = ACTIONS(496),
    [anon_sym_run] = ACTIONS(498),
    [anon_sym_as] = ACTIONS(498),
    [anon_sym_at] = ACTIONS(498),
    [anon_sym_if] = ACTIONS(498),
    [anon_sym_unless] = ACTIONS(498),
    [anon_sym_in] = ACTIONS(498),
    [anon_sym_positioned] = ACTIONS(498),
    [anon_sym_rotated] = ACTIONS(498),
    [anon_sym_facing] = ACTIONS(498),
    [anon_sym_store] = ACTIONS(498),
    [anon_sym_anchored] = ACTIONS(498),
    [anon_sym_align] = ACTIONS(498),
  },
  [163] = {
    [sym_block] = STATE(207),
    [sym_block_type] = STATE(182),
    [anon_sym_POUND] = ACTIONS(434),
    [anon_sym_minecraft_COLON] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(438),
  },
  [164] = {
    [sym__coordinate3] = STATE(208),
    [sym_coordinate] = ACTIONS(281),
  },
  [165] = {
    [sym_objective] = STATE(209),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(299),
  },
  [166] = {
    [anon_sym_overworld] = ACTIONS(500),
    [anon_sym_the_nether] = ACTIONS(500),
    [anon_sym_the_end] = ACTIONS(500),
  },
  [167] = {
    [sym__line_break] = ACTIONS(502),
    [anon_sym_run] = ACTIONS(504),
    [anon_sym_as] = ACTIONS(504),
    [anon_sym_at] = ACTIONS(504),
    [anon_sym_if] = ACTIONS(504),
    [anon_sym_unless] = ACTIONS(504),
    [anon_sym_in] = ACTIONS(504),
    [anon_sym_positioned] = ACTIONS(504),
    [anon_sym_rotated] = ACTIONS(504),
    [anon_sym_facing] = ACTIONS(504),
    [anon_sym_store] = ACTIONS(504),
    [anon_sym_anchored] = ACTIONS(504),
    [anon_sym_align] = ACTIONS(504),
  },
  [168] = {
    [sym__line_break] = ACTIONS(506),
    [anon_sym_run] = ACTIONS(508),
    [anon_sym_as] = ACTIONS(508),
    [anon_sym_at] = ACTIONS(508),
    [anon_sym_if] = ACTIONS(508),
    [anon_sym_unless] = ACTIONS(508),
    [anon_sym_in] = ACTIONS(508),
    [anon_sym_positioned] = ACTIONS(508),
    [anon_sym_rotated] = ACTIONS(508),
    [anon_sym_facing] = ACTIONS(508),
    [anon_sym_store] = ACTIONS(508),
    [anon_sym_anchored] = ACTIONS(508),
    [anon_sym_align] = ACTIONS(508),
  },
  [169] = {
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
  },
  [170] = {
    [sym_selector] = STATE(211),
    [sym__entity_selector] = STATE(134),
    [anon_sym_AT] = ACTIONS(289),
    [sym_fakeplayer] = ACTIONS(291),
  },
  [171] = {
    [sym__coordinate3] = STATE(211),
    [sym_coordinate] = ACTIONS(293),
  },
  [172] = {
    [sym_selector] = STATE(212),
    [sym__entity_selector] = STATE(147),
    [anon_sym_AT] = ACTIONS(309),
    [sym_fakeplayer] = ACTIONS(311),
  },
  [173] = {
    [sym_bossbar] = STATE(214),
    [aux_sym_SLASH_LPAREN_LBRACK_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_COLON_RPAREN_QMARK_LBRACK_BSLASH_SLASH_BSLASH_DOTa_DASHz0_DASH9_DASH_RBRACK_PLUS_SLASH] = ACTIONS(514),
  },
  [174] = {
    [sym__line_break] = ACTIONS(516),
  },
  [175] = {
    [anon_sym_EQ] = ACTIONS(518),
  },
  [176] = {
    [aux_sym__entity_selector_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(522),
  },
  [177] = {
    [anon_sym_EQ] = ACTIONS(524),
  },
  [178] = {
    [sym_block_type] = STATE(219),
    [anon_sym_minecraft_COLON] = ACTIONS(436),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(438),
  },
  [179] = {
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(526),
  },
  [180] = {
    [sym__line_break] = ACTIONS(528),
    [anon_sym_run] = ACTIONS(530),
    [anon_sym_as] = ACTIONS(530),
    [anon_sym_at] = ACTIONS(530),
    [anon_sym_if] = ACTIONS(530),
    [anon_sym_unless] = ACTIONS(530),
    [anon_sym_in] = ACTIONS(530),
    [anon_sym_positioned] = ACTIONS(530),
    [anon_sym_rotated] = ACTIONS(530),
    [anon_sym_facing] = ACTIONS(530),
    [anon_sym_store] = ACTIONS(530),
    [anon_sym_anchored] = ACTIONS(530),
    [anon_sym_align] = ACTIONS(530),
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
  },
  [181] = {
    [sym__line_break] = ACTIONS(532),
  },
  [182] = {
    [sym_block_state] = STATE(222),
    [sym_nbt_compound] = STATE(223),
    [sym__line_break] = ACTIONS(534),
    [anon_sym_run] = ACTIONS(536),
    [anon_sym_as] = ACTIONS(536),
    [anon_sym_at] = ACTIONS(536),
    [anon_sym_if] = ACTIONS(536),
    [anon_sym_unless] = ACTIONS(536),
    [anon_sym_in] = ACTIONS(536),
    [anon_sym_positioned] = ACTIONS(536),
    [anon_sym_rotated] = ACTIONS(536),
    [anon_sym_facing] = ACTIONS(536),
    [anon_sym_store] = ACTIONS(536),
    [anon_sym_anchored] = ACTIONS(536),
    [anon_sym_align] = ACTIONS(536),
    [anon_sym_LBRACK] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(279),
  },
  [183] = {
    [sym__line_break] = ACTIONS(540),
    [anon_sym_run] = ACTIONS(542),
    [anon_sym_as] = ACTIONS(542),
    [anon_sym_at] = ACTIONS(542),
    [anon_sym_if] = ACTIONS(542),
    [anon_sym_unless] = ACTIONS(542),
    [anon_sym_in] = ACTIONS(542),
    [anon_sym_positioned] = ACTIONS(542),
    [anon_sym_rotated] = ACTIONS(542),
    [anon_sym_facing] = ACTIONS(542),
    [anon_sym_store] = ACTIONS(542),
    [anon_sym_anchored] = ACTIONS(542),
    [anon_sym_align] = ACTIONS(542),
    [anon_sym_LBRACE] = ACTIONS(542),
  },
  [184] = {
    [sym__line_break] = ACTIONS(544),
    [anon_sym_run] = ACTIONS(546),
    [anon_sym_as] = ACTIONS(546),
    [anon_sym_at] = ACTIONS(546),
    [anon_sym_if] = ACTIONS(546),
    [anon_sym_unless] = ACTIONS(546),
    [anon_sym_in] = ACTIONS(546),
    [anon_sym_positioned] = ACTIONS(546),
    [anon_sym_rotated] = ACTIONS(546),
    [anon_sym_facing] = ACTIONS(546),
    [anon_sym_store] = ACTIONS(546),
    [anon_sym_anchored] = ACTIONS(546),
    [anon_sym_align] = ACTIONS(546),
  },
  [185] = {
    [anon_sym_COLON] = ACTIONS(548),
  },
  [186] = {
    [aux_sym_nbt_compound_repeat1] = STATE(227),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_RBRACE] = ACTIONS(552),
  },
  [187] = {
    [sym__line_break] = ACTIONS(554),
  },
  [188] = {
    [sym_coordinate] = ACTIONS(556),
  },
  [189] = {
    [sym__line_break] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(558),
    [sym_nbt_path] = ACTIONS(267),
  },
  [190] = {
    [sym__line_break] = ACTIONS(560),
  },
  [191] = {
    [sym_coordinate] = ACTIONS(562),
  },
  [192] = {
    [anon_sym_LBRACK] = ACTIONS(564),
    [sym_nbt_path] = ACTIONS(267),
  },
  [193] = {
    [sym__line_break] = ACTIONS(566),
  },
  [194] = {
    [sym_coordinate] = ACTIONS(568),
  },
  [195] = {
    [anon_sym_merge] = ACTIONS(570),
    [anon_sym_set] = ACTIONS(570),
    [anon_sym_append] = ACTIONS(570),
    [anon_sym_prepend] = ACTIONS(570),
    [anon_sym_insert] = ACTIONS(572),
  },
  [196] = {
    [sym__line_break] = ACTIONS(574),
  },
  [197] = {
    [anon_sym_hearts] = ACTIONS(576),
    [anon_sym_integer] = ACTIONS(576),
  },
  [198] = {
    [anon_sym_LBRACK] = ACTIONS(578),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(265),
  },
  [199] = {
    [sym__line_break] = ACTIONS(580),
  },
  [200] = {
    [sym_integer] = ACTIONS(582),
  },
  [201] = {
    [sym_scoreboard_operator] = STATE(239),
    [anon_sym_EQ] = ACTIONS(584),
    [anon_sym_PERCENT_EQ] = ACTIONS(584),
    [anon_sym_STAR_EQ] = ACTIONS(584),
    [anon_sym_PLUS_EQ] = ACTIONS(584),
    [anon_sym_DASH_EQ] = ACTIONS(584),
    [anon_sym_SLASH_EQ] = ACTIONS(584),
    [anon_sym_LT_EQ] = ACTIONS(584),
    [anon_sym_GT_EQ] = ACTIONS(584),
    [anon_sym_GT_LT] = ACTIONS(584),
  },
  [202] = {
    [sym__line_break] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(586),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(267),
  },
  [203] = {
    [sym__line_break] = ACTIONS(588),
  },
  [204] = {
    [sym__line_break] = ACTIONS(590),
  },
  [205] = {
    [aux_sym__entity_selector_repeat1] = STATE(242),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(592),
  },
  [206] = {
    [sym_nbt_path] = ACTIONS(594),
  },
  [207] = {
    [sym__line_break] = ACTIONS(596),
    [anon_sym_run] = ACTIONS(598),
    [anon_sym_as] = ACTIONS(598),
    [anon_sym_at] = ACTIONS(598),
    [anon_sym_if] = ACTIONS(598),
    [anon_sym_unless] = ACTIONS(598),
    [anon_sym_in] = ACTIONS(598),
    [anon_sym_positioned] = ACTIONS(598),
    [anon_sym_rotated] = ACTIONS(598),
    [anon_sym_facing] = ACTIONS(598),
    [anon_sym_store] = ACTIONS(598),
    [anon_sym_anchored] = ACTIONS(598),
    [anon_sym_align] = ACTIONS(598),
  },
  [208] = {
    [sym__coordinate3] = STATE(245),
    [sym_coordinate] = ACTIONS(600),
  },
  [209] = {
    [sym_scoreboard_comparator] = STATE(248),
    [anon_sym_matches] = ACTIONS(602),
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_LT_EQ] = ACTIONS(604),
    [anon_sym_GT_EQ] = ACTIONS(604),
    [anon_sym_LT] = ACTIONS(606),
    [anon_sym_GT] = ACTIONS(606),
  },
  [210] = {
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
  [211] = {
    [sym_nbt_path] = ACTIONS(612),
  },
  [212] = {
    [sym_objective] = STATE(250),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(297),
  },
  [213] = {
    [anon_sym_value] = ACTIONS(614),
    [anon_sym_max] = ACTIONS(614),
  },
  [214] = {
    [anon_sym_value] = ACTIONS(616),
    [anon_sym_max] = ACTIONS(616),
  },
  [215] = {
    [sym__selector_argument] = STATE(251),
    [sym_selector_key] = STATE(177),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(432),
  },
  [216] = {
    [sym__line_break] = ACTIONS(618),
    [anon_sym_run] = ACTIONS(620),
    [anon_sym_as] = ACTIONS(620),
    [anon_sym_at] = ACTIONS(620),
    [anon_sym_if] = ACTIONS(620),
    [anon_sym_unless] = ACTIONS(620),
    [anon_sym_in] = ACTIONS(620),
    [anon_sym_positioned] = ACTIONS(620),
    [anon_sym_rotated] = ACTIONS(620),
    [anon_sym_facing] = ACTIONS(620),
    [anon_sym_store] = ACTIONS(620),
    [anon_sym_anchored] = ACTIONS(620),
    [anon_sym_align] = ACTIONS(620),
  },
  [217] = {
    [aux_sym__entity_selector_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(622),
  },
  [218] = {
    [sym_selector_value] = STATE(255),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(624),
  },
  [219] = {
    [sym_block_state] = STATE(256),
    [sym_nbt_compound] = STATE(257),
    [sym__line_break] = ACTIONS(626),
    [anon_sym_run] = ACTIONS(628),
    [anon_sym_as] = ACTIONS(628),
    [anon_sym_at] = ACTIONS(628),
    [anon_sym_if] = ACTIONS(628),
    [anon_sym_unless] = ACTIONS(628),
    [anon_sym_in] = ACTIONS(628),
    [anon_sym_positioned] = ACTIONS(628),
    [anon_sym_rotated] = ACTIONS(628),
    [anon_sym_facing] = ACTIONS(628),
    [anon_sym_store] = ACTIONS(628),
    [anon_sym_anchored] = ACTIONS(628),
    [anon_sym_align] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(279),
  },
  [220] = {
    [sym__line_break] = ACTIONS(630),
    [anon_sym_run] = ACTIONS(632),
    [anon_sym_as] = ACTIONS(632),
    [anon_sym_at] = ACTIONS(632),
    [anon_sym_if] = ACTIONS(632),
    [anon_sym_unless] = ACTIONS(632),
    [anon_sym_in] = ACTIONS(632),
    [anon_sym_positioned] = ACTIONS(632),
    [anon_sym_rotated] = ACTIONS(632),
    [anon_sym_facing] = ACTIONS(632),
    [anon_sym_store] = ACTIONS(632),
    [anon_sym_anchored] = ACTIONS(632),
    [anon_sym_align] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_LBRACE] = ACTIONS(632),
  },
  [221] = {
    [sym__block_state_argument] = STATE(259),
    [sym_block_state_key] = STATE(260),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(634),
  },
  [222] = {
    [sym_nbt_compound] = STATE(257),
    [sym__line_break] = ACTIONS(626),
    [anon_sym_run] = ACTIONS(628),
    [anon_sym_as] = ACTIONS(628),
    [anon_sym_at] = ACTIONS(628),
    [anon_sym_if] = ACTIONS(628),
    [anon_sym_unless] = ACTIONS(628),
    [anon_sym_in] = ACTIONS(628),
    [anon_sym_positioned] = ACTIONS(628),
    [anon_sym_rotated] = ACTIONS(628),
    [anon_sym_facing] = ACTIONS(628),
    [anon_sym_store] = ACTIONS(628),
    [anon_sym_anchored] = ACTIONS(628),
    [anon_sym_align] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(279),
  },
  [223] = {
    [sym__line_break] = ACTIONS(626),
    [anon_sym_run] = ACTIONS(628),
    [anon_sym_as] = ACTIONS(628),
    [anon_sym_at] = ACTIONS(628),
    [anon_sym_if] = ACTIONS(628),
    [anon_sym_unless] = ACTIONS(628),
    [anon_sym_in] = ACTIONS(628),
    [anon_sym_positioned] = ACTIONS(628),
    [anon_sym_rotated] = ACTIONS(628),
    [anon_sym_facing] = ACTIONS(628),
    [anon_sym_store] = ACTIONS(628),
    [anon_sym_anchored] = ACTIONS(628),
    [anon_sym_align] = ACTIONS(628),
  },
  [224] = {
    [sym_nbt_compound] = STATE(265),
    [sym_nbt_array] = STATE(265),
    [sym__nbt_value] = STATE(265),
    [sym_nbt_string] = STATE(265),
    [sym__quoted_string] = STATE(266),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(638),
    [sym_nbt_number] = ACTIONS(640),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(644),
  },
  [225] = {
    [sym__nbt_pair] = STATE(267),
    [sym_nbt_key] = ACTIONS(444),
  },
  [226] = {
    [sym__line_break] = ACTIONS(646),
    [anon_sym_run] = ACTIONS(648),
    [anon_sym_as] = ACTIONS(648),
    [anon_sym_at] = ACTIONS(648),
    [anon_sym_if] = ACTIONS(648),
    [anon_sym_unless] = ACTIONS(648),
    [anon_sym_in] = ACTIONS(648),
    [anon_sym_positioned] = ACTIONS(648),
    [anon_sym_rotated] = ACTIONS(648),
    [anon_sym_facing] = ACTIONS(648),
    [anon_sym_store] = ACTIONS(648),
    [anon_sym_anchored] = ACTIONS(648),
    [anon_sym_align] = ACTIONS(648),
  },
  [227] = {
    [aux_sym_nbt_compound_repeat1] = STATE(269),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_RBRACE] = ACTIONS(650),
  },
  [228] = {
    [anon_sym_POUND] = ACTIONS(540),
    [sym_coordinate] = ACTIONS(540),
    [anon_sym_minecraft_COLON] = ACTIONS(540),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(542),
    [anon_sym_LBRACE] = ACTIONS(540),
  },
  [229] = {
    [sym__selector_argument] = STATE(270),
    [sym_selector_key] = STATE(177),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(432),
  },
  [230] = {
    [sym__line_break] = ACTIONS(542),
    [sym_nbt_path] = ACTIONS(542),
  },
  [231] = {
    [sym__selector_argument] = STATE(271),
    [sym_selector_key] = STATE(177),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(432),
  },
  [232] = {
    [sym_nbt_path] = ACTIONS(540),
  },
  [233] = {
    [sym__data_modify_value_command] = STATE(274),
    [sym__data_modify_from_command] = STATE(274),
    [anon_sym_value] = ACTIONS(652),
    [anon_sym_from] = ACTIONS(654),
  },
  [234] = {
    [sym_integer] = ACTIONS(656),
  },
  [235] = {
    [sym__line_break] = ACTIONS(658),
  },
  [236] = {
    [sym__selector_argument] = STATE(276),
    [sym_selector_key] = STATE(177),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(432),
  },
  [237] = {
    [sym__line_break] = ACTIONS(660),
  },
  [238] = {
    [anon_sym_AT] = ACTIONS(662),
    [sym_fakeplayer] = ACTIONS(662),
  },
  [239] = {
    [sym_selector] = STATE(277),
    [sym__entity_selector] = STATE(147),
    [anon_sym_AT] = ACTIONS(309),
    [sym_fakeplayer] = ACTIONS(311),
  },
  [240] = {
    [sym__selector_argument] = STATE(278),
    [sym_selector_key] = STATE(177),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_DOT_DASH_RBRACK_PLUS_SLASH] = ACTIONS(432),
  },
  [241] = {
    [anon_sym_remove] = ACTIONS(618),
    [anon_sym_add] = ACTIONS(618),
    [anon_sym_list] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(618),
  },
  [242] = {
    [aux_sym__entity_selector_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(664),
  },
  [243] = {
    [sym__line_break] = ACTIONS(666),
    [anon_sym_run] = ACTIONS(668),
    [anon_sym_as] = ACTIONS(668),
    [anon_sym_at] = ACTIONS(668),
    [anon_sym_if] = ACTIONS(668),
    [anon_sym_unless] = ACTIONS(668),
    [anon_sym_in] = ACTIONS(668),
    [anon_sym_positioned] = ACTIONS(668),
    [anon_sym_rotated] = ACTIONS(668),
    [anon_sym_facing] = ACTIONS(668),
    [anon_sym_store] = ACTIONS(668),
    [anon_sym_anchored] = ACTIONS(668),
    [anon_sym_align] = ACTIONS(668),
  },
  [244] = {
    [sym_coordinate] = ACTIONS(670),
  },
  [245] = {
    [anon_sym_all] = ACTIONS(672),
    [anon_sym_masked] = ACTIONS(672),
  },
  [246] = {
    [sym_integer_range] = STATE(281),
    [anon_sym_DOT_DOT] = ACTIONS(674),
    [sym_integer] = ACTIONS(676),
  },
  [247] = {
    [anon_sym_AT] = ACTIONS(678),
    [sym_fakeplayer] = ACTIONS(678),
  },
  [248] = {
    [sym_selector] = STATE(284),
    [sym__entity_selector] = STATE(147),
    [anon_sym_AT] = ACTIONS(309),
    [sym_fakeplayer] = ACTIONS(311),
  },
  [249] = {
    [sym_nbt_type] = STATE(286),
    [anon_sym_byte] = ACTIONS(680),
    [anon_sym_double] = ACTIONS(680),
    [anon_sym_float] = ACTIONS(680),
    [anon_sym_int] = ACTIONS(680),
    [anon_sym_long] = ACTIONS(680),
    [anon_sym_short] = ACTIONS(680),
  },
  [250] = {
    [sym__line_break] = ACTIONS(682),
    [anon_sym_run] = ACTIONS(684),
    [anon_sym_as] = ACTIONS(684),
    [anon_sym_at] = ACTIONS(684),
    [anon_sym_if] = ACTIONS(684),
    [anon_sym_unless] = ACTIONS(684),
    [anon_sym_in] = ACTIONS(684),
    [anon_sym_positioned] = ACTIONS(684),
    [anon_sym_rotated] = ACTIONS(684),
    [anon_sym_facing] = ACTIONS(684),
    [anon_sym_store] = ACTIONS(684),
    [anon_sym_anchored] = ACTIONS(684),
    [anon_sym_align] = ACTIONS(684),
  },
  [251] = {
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RBRACK] = ACTIONS(686),
  },
  [252] = {
    [sym__line_break] = ACTIONS(688),
    [anon_sym_run] = ACTIONS(690),
    [anon_sym_as] = ACTIONS(690),
    [anon_sym_at] = ACTIONS(690),
    [anon_sym_if] = ACTIONS(690),
    [anon_sym_unless] = ACTIONS(690),
    [anon_sym_in] = ACTIONS(690),
    [anon_sym_positioned] = ACTIONS(690),
    [anon_sym_rotated] = ACTIONS(690),
    [anon_sym_facing] = ACTIONS(690),
    [anon_sym_store] = ACTIONS(690),
    [anon_sym_anchored] = ACTIONS(690),
    [anon_sym_align] = ACTIONS(690),
  },
  [253] = {
    [aux_sym__entity_selector_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(686),
  },
  [254] = {
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_RBRACK] = ACTIONS(695),
  },
  [255] = {
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_RBRACK] = ACTIONS(697),
  },
  [256] = {
    [sym_nbt_compound] = STATE(287),
    [sym__line_break] = ACTIONS(699),
    [anon_sym_run] = ACTIONS(701),
    [anon_sym_as] = ACTIONS(701),
    [anon_sym_at] = ACTIONS(701),
    [anon_sym_if] = ACTIONS(701),
    [anon_sym_unless] = ACTIONS(701),
    [anon_sym_in] = ACTIONS(701),
    [anon_sym_positioned] = ACTIONS(701),
    [anon_sym_rotated] = ACTIONS(701),
    [anon_sym_facing] = ACTIONS(701),
    [anon_sym_store] = ACTIONS(701),
    [anon_sym_anchored] = ACTIONS(701),
    [anon_sym_align] = ACTIONS(701),
    [anon_sym_LBRACE] = ACTIONS(279),
  },
  [257] = {
    [sym__line_break] = ACTIONS(699),
    [anon_sym_run] = ACTIONS(701),
    [anon_sym_as] = ACTIONS(701),
    [anon_sym_at] = ACTIONS(701),
    [anon_sym_if] = ACTIONS(701),
    [anon_sym_unless] = ACTIONS(701),
    [anon_sym_in] = ACTIONS(701),
    [anon_sym_positioned] = ACTIONS(701),
    [anon_sym_rotated] = ACTIONS(701),
    [anon_sym_facing] = ACTIONS(701),
    [anon_sym_store] = ACTIONS(701),
    [anon_sym_anchored] = ACTIONS(701),
    [anon_sym_align] = ACTIONS(701),
  },
  [258] = {
    [anon_sym_EQ] = ACTIONS(703),
  },
  [259] = {
    [aux_sym_block_state_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RBRACK] = ACTIONS(707),
  },
  [260] = {
    [anon_sym_EQ] = ACTIONS(709),
  },
  [261] = {
    [sym_nbt_compound] = STATE(293),
    [sym_nbt_array] = STATE(293),
    [sym__nbt_value] = STATE(293),
    [sym_nbt_string] = STATE(293),
    [sym__quoted_string] = STATE(266),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(711),
    [anon_sym_LBRACE] = ACTIONS(638),
    [sym_nbt_number] = ACTIONS(713),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(644),
  },
  [262] = {
    [sym__nbt_pair] = STATE(295),
    [anon_sym_RBRACE] = ACTIONS(715),
    [sym_nbt_key] = ACTIONS(444),
  },
  [263] = {
    [aux_sym__quoted_string_repeat1] = STATE(297),
    [anon_sym_DQUOTE] = ACTIONS(717),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(719),
    [sym_escape_sequence] = ACTIONS(719),
  },
  [264] = {
    [aux_sym__quoted_string_repeat2] = STATE(298),
    [anon_sym_SQUOTE] = ACTIONS(717),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(721),
    [sym_escape_sequence] = ACTIONS(721),
  },
  [265] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(723),
  },
  [266] = {
    [anon_sym_COMMA] = ACTIONS(725),
    [anon_sym_RBRACK] = ACTIONS(725),
    [anon_sym_RBRACE] = ACTIONS(725),
  },
  [267] = {
    [anon_sym_COMMA] = ACTIONS(727),
    [anon_sym_RBRACE] = ACTIONS(727),
  },
  [268] = {
    [sym__line_break] = ACTIONS(729),
    [anon_sym_run] = ACTIONS(731),
    [anon_sym_as] = ACTIONS(731),
    [anon_sym_at] = ACTIONS(731),
    [anon_sym_if] = ACTIONS(731),
    [anon_sym_unless] = ACTIONS(731),
    [anon_sym_in] = ACTIONS(731),
    [anon_sym_positioned] = ACTIONS(731),
    [anon_sym_rotated] = ACTIONS(731),
    [anon_sym_facing] = ACTIONS(731),
    [anon_sym_store] = ACTIONS(731),
    [anon_sym_anchored] = ACTIONS(731),
    [anon_sym_align] = ACTIONS(731),
  },
  [269] = {
    [aux_sym_nbt_compound_repeat1] = STATE(269),
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RBRACE] = ACTIONS(727),
  },
  [270] = {
    [aux_sym__entity_selector_repeat1] = STATE(300),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(736),
  },
  [271] = {
    [aux_sym__entity_selector_repeat1] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(738),
  },
  [272] = {
    [sym_nbt_compound] = STATE(306),
    [sym_nbt_array] = STATE(306),
    [sym__nbt_value] = STATE(306),
    [sym_nbt_string] = STATE(306),
    [sym__quoted_string] = STATE(307),
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(448),
    [sym_nbt_number] = ACTIONS(742),
    [anon_sym_DQUOTE] = ACTIONS(744),
    [anon_sym_SQUOTE] = ACTIONS(746),
  },
  [273] = {
    [anon_sym_entity] = ACTIONS(748),
    [anon_sym_block] = ACTIONS(750),
  },
  [274] = {
    [sym__line_break] = ACTIONS(752),
  },
  [275] = {
    [sym__data_modify_value_command] = STATE(310),
    [sym__data_modify_from_command] = STATE(310),
    [anon_sym_value] = ACTIONS(652),
    [anon_sym_from] = ACTIONS(654),
  },
  [276] = {
    [aux_sym__entity_selector_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(754),
  },
  [277] = {
    [sym_objective] = STATE(313),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(297),
  },
  [278] = {
    [aux_sym__entity_selector_repeat1] = STATE(315),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(756),
  },
  [279] = {
    [anon_sym_remove] = ACTIONS(688),
    [anon_sym_add] = ACTIONS(688),
    [anon_sym_list] = ACTIONS(688),
    [anon_sym_LBRACE] = ACTIONS(688),
  },
  [280] = {
    [sym_coordinate] = ACTIONS(758),
  },
  [281] = {
    [sym__line_break] = ACTIONS(760),
    [anon_sym_run] = ACTIONS(762),
    [anon_sym_as] = ACTIONS(762),
    [anon_sym_at] = ACTIONS(762),
    [anon_sym_if] = ACTIONS(762),
    [anon_sym_unless] = ACTIONS(762),
    [anon_sym_in] = ACTIONS(762),
    [anon_sym_positioned] = ACTIONS(762),
    [anon_sym_rotated] = ACTIONS(762),
    [anon_sym_facing] = ACTIONS(762),
    [anon_sym_store] = ACTIONS(762),
    [anon_sym_anchored] = ACTIONS(762),
    [anon_sym_align] = ACTIONS(762),
  },
  [282] = {
    [sym_integer] = ACTIONS(764),
  },
  [283] = {
    [sym__line_break] = ACTIONS(766),
    [anon_sym_run] = ACTIONS(768),
    [anon_sym_as] = ACTIONS(768),
    [anon_sym_at] = ACTIONS(768),
    [anon_sym_if] = ACTIONS(768),
    [anon_sym_unless] = ACTIONS(768),
    [anon_sym_in] = ACTIONS(768),
    [anon_sym_positioned] = ACTIONS(768),
    [anon_sym_rotated] = ACTIONS(768),
    [anon_sym_facing] = ACTIONS(768),
    [anon_sym_store] = ACTIONS(768),
    [anon_sym_anchored] = ACTIONS(768),
    [anon_sym_align] = ACTIONS(768),
    [anon_sym_DOT_DOT] = ACTIONS(770),
  },
  [284] = {
    [sym_objective] = STATE(319),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(297),
  },
  [285] = {
    [sym_float] = ACTIONS(772),
  },
  [286] = {
    [sym_float] = ACTIONS(774),
  },
  [287] = {
    [sym__line_break] = ACTIONS(776),
    [anon_sym_run] = ACTIONS(778),
    [anon_sym_as] = ACTIONS(778),
    [anon_sym_at] = ACTIONS(778),
    [anon_sym_if] = ACTIONS(778),
    [anon_sym_unless] = ACTIONS(778),
    [anon_sym_in] = ACTIONS(778),
    [anon_sym_positioned] = ACTIONS(778),
    [anon_sym_rotated] = ACTIONS(778),
    [anon_sym_facing] = ACTIONS(778),
    [anon_sym_store] = ACTIONS(778),
    [anon_sym_anchored] = ACTIONS(778),
    [anon_sym_align] = ACTIONS(778),
  },
  [288] = {
    [sym__block_state_argument] = STATE(321),
    [sym_block_state_key] = STATE(260),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_PLUS_SLASH] = ACTIONS(634),
  },
  [289] = {
    [sym__line_break] = ACTIONS(780),
    [anon_sym_run] = ACTIONS(782),
    [anon_sym_as] = ACTIONS(782),
    [anon_sym_at] = ACTIONS(782),
    [anon_sym_if] = ACTIONS(782),
    [anon_sym_unless] = ACTIONS(782),
    [anon_sym_in] = ACTIONS(782),
    [anon_sym_positioned] = ACTIONS(782),
    [anon_sym_rotated] = ACTIONS(782),
    [anon_sym_facing] = ACTIONS(782),
    [anon_sym_store] = ACTIONS(782),
    [anon_sym_anchored] = ACTIONS(782),
    [anon_sym_align] = ACTIONS(782),
    [anon_sym_LBRACE] = ACTIONS(782),
  },
  [290] = {
    [aux_sym_block_state_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RBRACK] = ACTIONS(784),
  },
  [291] = {
    [sym_block_state_value] = ACTIONS(786),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(788),
    [anon_sym_RBRACK] = ACTIONS(788),
    [anon_sym_RBRACE] = ACTIONS(788),
  },
  [293] = {
    [aux_sym_nbt_array_repeat1] = STATE(327),
    [anon_sym_COMMA] = ACTIONS(790),
    [anon_sym_RBRACK] = ACTIONS(792),
  },
  [294] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RBRACK] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(544),
  },
  [295] = {
    [aux_sym_nbt_compound_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_RBRACE] = ACTIONS(794),
  },
  [296] = {
    [anon_sym_COMMA] = ACTIONS(796),
    [anon_sym_RBRACK] = ACTIONS(796),
    [anon_sym_RBRACE] = ACTIONS(796),
  },
  [297] = {
    [aux_sym__quoted_string_repeat1] = STATE(331),
    [anon_sym_DQUOTE] = ACTIONS(798),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(800),
    [sym_escape_sequence] = ACTIONS(800),
  },
  [298] = {
    [aux_sym__quoted_string_repeat2] = STATE(332),
    [anon_sym_SQUOTE] = ACTIONS(798),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(802),
    [sym_escape_sequence] = ACTIONS(802),
  },
  [299] = {
    [sym__line_break] = ACTIONS(620),
    [sym_nbt_path] = ACTIONS(620),
  },
  [300] = {
    [aux_sym__entity_selector_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(804),
  },
  [301] = {
    [sym_nbt_path] = ACTIONS(618),
  },
  [302] = {
    [aux_sym__entity_selector_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(806),
  },
  [303] = {
    [sym_nbt_compound] = STATE(336),
    [sym_nbt_array] = STATE(336),
    [sym__nbt_value] = STATE(336),
    [sym_nbt_string] = STATE(336),
    [sym__quoted_string] = STATE(266),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(808),
    [anon_sym_LBRACE] = ACTIONS(638),
    [sym_nbt_number] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(644),
  },
  [304] = {
    [aux_sym__quoted_string_repeat1] = STATE(338),
    [anon_sym_DQUOTE] = ACTIONS(812),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(814),
    [sym_escape_sequence] = ACTIONS(814),
  },
  [305] = {
    [aux_sym__quoted_string_repeat2] = STATE(339),
    [anon_sym_SQUOTE] = ACTIONS(812),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(816),
    [sym_escape_sequence] = ACTIONS(816),
  },
  [306] = {
    [sym__line_break] = ACTIONS(818),
  },
  [307] = {
    [sym__line_break] = ACTIONS(725),
  },
  [308] = {
    [sym_selector] = STATE(340),
    [sym__entity_selector] = STATE(134),
    [anon_sym_AT] = ACTIONS(289),
    [sym_fakeplayer] = ACTIONS(291),
  },
  [309] = {
    [sym__coordinate3] = STATE(340),
    [sym_coordinate] = ACTIONS(293),
  },
  [310] = {
    [sym__line_break] = ACTIONS(820),
  },
  [311] = {
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(618),
  },
  [312] = {
    [aux_sym__entity_selector_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(822),
  },
  [313] = {
    [sym__line_break] = ACTIONS(824),
  },
  [314] = {
    [sym__line_break] = ACTIONS(618),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(620),
  },
  [315] = {
    [aux_sym__entity_selector_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(826),
  },
  [316] = {
    [anon_sym_all] = ACTIONS(540),
    [anon_sym_masked] = ACTIONS(540),
  },
  [317] = {
    [sym__line_break] = ACTIONS(828),
    [anon_sym_run] = ACTIONS(830),
    [anon_sym_as] = ACTIONS(830),
    [anon_sym_at] = ACTIONS(830),
    [anon_sym_if] = ACTIONS(830),
    [anon_sym_unless] = ACTIONS(830),
    [anon_sym_in] = ACTIONS(830),
    [anon_sym_positioned] = ACTIONS(830),
    [anon_sym_rotated] = ACTIONS(830),
    [anon_sym_facing] = ACTIONS(830),
    [anon_sym_store] = ACTIONS(830),
    [anon_sym_anchored] = ACTIONS(830),
    [anon_sym_align] = ACTIONS(830),
  },
  [318] = {
    [sym__line_break] = ACTIONS(828),
    [anon_sym_run] = ACTIONS(830),
    [anon_sym_as] = ACTIONS(830),
    [anon_sym_at] = ACTIONS(830),
    [anon_sym_if] = ACTIONS(830),
    [anon_sym_unless] = ACTIONS(830),
    [anon_sym_in] = ACTIONS(830),
    [anon_sym_positioned] = ACTIONS(830),
    [anon_sym_rotated] = ACTIONS(830),
    [anon_sym_facing] = ACTIONS(830),
    [anon_sym_store] = ACTIONS(830),
    [anon_sym_anchored] = ACTIONS(830),
    [anon_sym_align] = ACTIONS(830),
    [sym_integer] = ACTIONS(832),
  },
  [319] = {
    [sym__line_break] = ACTIONS(834),
    [anon_sym_run] = ACTIONS(836),
    [anon_sym_as] = ACTIONS(836),
    [anon_sym_at] = ACTIONS(836),
    [anon_sym_if] = ACTIONS(836),
    [anon_sym_unless] = ACTIONS(836),
    [anon_sym_in] = ACTIONS(836),
    [anon_sym_positioned] = ACTIONS(836),
    [anon_sym_rotated] = ACTIONS(836),
    [anon_sym_facing] = ACTIONS(836),
    [anon_sym_store] = ACTIONS(836),
    [anon_sym_anchored] = ACTIONS(836),
    [anon_sym_align] = ACTIONS(836),
  },
  [320] = {
    [sym__line_break] = ACTIONS(838),
    [anon_sym_run] = ACTIONS(840),
    [anon_sym_as] = ACTIONS(840),
    [anon_sym_at] = ACTIONS(840),
    [anon_sym_if] = ACTIONS(840),
    [anon_sym_unless] = ACTIONS(840),
    [anon_sym_in] = ACTIONS(840),
    [anon_sym_positioned] = ACTIONS(840),
    [anon_sym_rotated] = ACTIONS(840),
    [anon_sym_facing] = ACTIONS(840),
    [anon_sym_store] = ACTIONS(840),
    [anon_sym_anchored] = ACTIONS(840),
    [anon_sym_align] = ACTIONS(840),
  },
  [321] = {
    [anon_sym_COMMA] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(842),
  },
  [322] = {
    [sym__line_break] = ACTIONS(844),
    [anon_sym_run] = ACTIONS(846),
    [anon_sym_as] = ACTIONS(846),
    [anon_sym_at] = ACTIONS(846),
    [anon_sym_if] = ACTIONS(846),
    [anon_sym_unless] = ACTIONS(846),
    [anon_sym_in] = ACTIONS(846),
    [anon_sym_positioned] = ACTIONS(846),
    [anon_sym_rotated] = ACTIONS(846),
    [anon_sym_facing] = ACTIONS(846),
    [anon_sym_store] = ACTIONS(846),
    [anon_sym_anchored] = ACTIONS(846),
    [anon_sym_align] = ACTIONS(846),
    [anon_sym_LBRACE] = ACTIONS(846),
  },
  [323] = {
    [aux_sym_block_state_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(842),
  },
  [324] = {
    [anon_sym_COMMA] = ACTIONS(851),
    [anon_sym_RBRACK] = ACTIONS(851),
  },
  [325] = {
    [sym_nbt_compound] = STATE(344),
    [sym_nbt_array] = STATE(344),
    [sym__nbt_value] = STATE(344),
    [sym_nbt_string] = STATE(344),
    [sym__quoted_string] = STATE(266),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(638),
    [sym_nbt_number] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(644),
  },
  [326] = {
    [anon_sym_COMMA] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
  },
  [327] = {
    [aux_sym_nbt_array_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(790),
    [anon_sym_RBRACK] = ACTIONS(857),
  },
  [328] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [anon_sym_RBRACE] = ACTIONS(646),
  },
  [329] = {
    [aux_sym_nbt_compound_repeat1] = STATE(269),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_RBRACE] = ACTIONS(859),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [anon_sym_RBRACE] = ACTIONS(861),
  },
  [331] = {
    [aux_sym__quoted_string_repeat1] = STATE(331),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(865),
    [sym_escape_sequence] = ACTIONS(865),
  },
  [332] = {
    [aux_sym__quoted_string_repeat2] = STATE(332),
    [anon_sym_SQUOTE] = ACTIONS(868),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(870),
    [sym_escape_sequence] = ACTIONS(870),
  },
  [333] = {
    [sym__line_break] = ACTIONS(690),
    [sym_nbt_path] = ACTIONS(690),
  },
  [334] = {
    [sym_nbt_path] = ACTIONS(688),
  },
  [335] = {
    [sym__line_break] = ACTIONS(788),
  },
  [336] = {
    [aux_sym_nbt_array_repeat1] = STATE(349),
    [anon_sym_COMMA] = ACTIONS(790),
    [anon_sym_RBRACK] = ACTIONS(873),
  },
  [337] = {
    [sym__line_break] = ACTIONS(796),
  },
  [338] = {
    [aux_sym__quoted_string_repeat1] = STATE(331),
    [anon_sym_DQUOTE] = ACTIONS(875),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(800),
    [sym_escape_sequence] = ACTIONS(800),
  },
  [339] = {
    [aux_sym__quoted_string_repeat2] = STATE(332),
    [anon_sym_SQUOTE] = ACTIONS(875),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(802),
    [sym_escape_sequence] = ACTIONS(802),
  },
  [340] = {
    [sym_nbt_path] = ACTIONS(877),
  },
  [341] = {
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(688),
  },
  [342] = {
    [sym__line_break] = ACTIONS(688),
    [aux_sym_SLASH_LBRACK_BSLASH_DOTA_DASHZa_DASHz0_DASH9_DASH_RBRACK_LBRACE1_COMMA16_RBRACE_SLASH] = ACTIONS(690),
  },
  [343] = {
    [sym__line_break] = ACTIONS(879),
    [anon_sym_run] = ACTIONS(881),
    [anon_sym_as] = ACTIONS(881),
    [anon_sym_at] = ACTIONS(881),
    [anon_sym_if] = ACTIONS(881),
    [anon_sym_unless] = ACTIONS(881),
    [anon_sym_in] = ACTIONS(881),
    [anon_sym_positioned] = ACTIONS(881),
    [anon_sym_rotated] = ACTIONS(881),
    [anon_sym_facing] = ACTIONS(881),
    [anon_sym_store] = ACTIONS(881),
    [anon_sym_anchored] = ACTIONS(881),
    [anon_sym_align] = ACTIONS(881),
  },
  [344] = {
    [anon_sym_COMMA] = ACTIONS(883),
    [anon_sym_RBRACK] = ACTIONS(883),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(885),
    [anon_sym_RBRACK] = ACTIONS(885),
    [anon_sym_RBRACE] = ACTIONS(885),
  },
  [346] = {
    [aux_sym_nbt_array_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(887),
    [anon_sym_RBRACK] = ACTIONS(883),
  },
  [347] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RBRACK] = ACTIONS(729),
    [anon_sym_RBRACE] = ACTIONS(729),
  },
  [348] = {
    [sym__line_break] = ACTIONS(855),
  },
  [349] = {
    [aux_sym_nbt_array_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(790),
    [anon_sym_RBRACK] = ACTIONS(890),
  },
  [350] = {
    [sym__line_break] = ACTIONS(861),
  },
  [351] = {
    [sym__line_break] = ACTIONS(892),
  },
  [352] = {
    [sym__line_break] = ACTIONS(885),
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
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = false}, SHIFT(24),
  [43] = {.count = 1, .reusable = true}, SHIFT(26),
  [45] = {.count = 1, .reusable = true}, SHIFT(28),
  [47] = {.count = 1, .reusable = true}, SHIFT(29),
  [49] = {.count = 1, .reusable = true}, SHIFT(30),
  [51] = {.count = 1, .reusable = true}, SHIFT(31),
  [53] = {.count = 1, .reusable = true}, SHIFT(33),
  [55] = {.count = 1, .reusable = true}, SHIFT(35),
  [57] = {.count = 1, .reusable = true}, SHIFT(36),
  [59] = {.count = 1, .reusable = true}, SHIFT(37),
  [61] = {.count = 1, .reusable = true}, SHIFT(39),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = true}, SHIFT(41),
  [67] = {.count = 1, .reusable = true}, SHIFT(42),
  [69] = {.count = 1, .reusable = true}, SHIFT(43),
  [71] = {.count = 1, .reusable = true}, SHIFT(44),
  [73] = {.count = 1, .reusable = true}, SHIFT(45),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__execute_command, 1),
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
  [97] = {.count = 1, .reusable = false}, SHIFT(57),
  [99] = {.count = 1, .reusable = false}, SHIFT(58),
  [101] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [103] = {.count = 1, .reusable = true}, SHIFT(60),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(62),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_selector, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__teleport_command, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(63),
  [121] = {.count = 1, .reusable = true}, SHIFT(64),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(65),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_message, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__say_command, 2),
  [131] = {.count = 1, .reusable = true}, SHIFT(67),
  [133] = {.count = 1, .reusable = true}, SHIFT(68),
  [135] = {.count = 1, .reusable = true}, SHIFT(69),
  [137] = {.count = 1, .reusable = true}, SHIFT(70),
  [139] = {.count = 1, .reusable = true}, SHIFT(71),
  [141] = {.count = 1, .reusable = true}, SHIFT(72),
  [143] = {.count = 1, .reusable = true}, SHIFT(73),
  [145] = {.count = 1, .reusable = true}, SHIFT(74),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__data_command, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym__function_command, 2),
  [153] = {.count = 1, .reusable = true}, SHIFT(75),
  [155] = {.count = 1, .reusable = true}, SHIFT(77),
  [157] = {.count = 1, .reusable = true}, SHIFT(78),
  [159] = {.count = 1, .reusable = true}, SHIFT(79),
  [161] = {.count = 1, .reusable = true}, SHIFT(80),
  [163] = {.count = 1, .reusable = true}, SHIFT(81),
  [165] = {.count = 1, .reusable = true}, SHIFT(82),
  [167] = {.count = 1, .reusable = true}, SHIFT(83),
  [169] = {.count = 1, .reusable = true}, SHIFT(84),
  [171] = {.count = 1, .reusable = true}, SHIFT(85),
  [173] = {.count = 1, .reusable = true}, SHIFT(86),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_command, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(87),
  [179] = {.count = 1, .reusable = true}, SHIFT(89),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 2),
  [183] = {.count = 1, .reusable = false}, SHIFT(87),
  [185] = {.count = 1, .reusable = true}, SHIFT(91),
  [187] = {.count = 1, .reusable = true}, SHIFT(93),
  [189] = {.count = 1, .reusable = true}, SHIFT(94),
  [191] = {.count = 1, .reusable = true}, SHIFT(95),
  [193] = {.count = 1, .reusable = true}, SHIFT(99),
  [195] = {.count = 1, .reusable = true}, SHIFT(100),
  [197] = {.count = 1, .reusable = false}, SHIFT(101),
  [199] = {.count = 1, .reusable = true}, SHIFT(102),
  [201] = {.count = 1, .reusable = true}, SHIFT(103),
  [203] = {.count = 1, .reusable = true}, SHIFT(106),
  [205] = {.count = 1, .reusable = true}, SHIFT(107),
  [207] = {.count = 1, .reusable = true}, SHIFT(109),
  [209] = {.count = 1, .reusable = true}, SHIFT(111),
  [211] = {.count = 1, .reusable = true}, SHIFT(112),
  [213] = {.count = 1, .reusable = true}, SHIFT(113),
  [215] = {.count = 1, .reusable = true}, SHIFT(115),
  [217] = {.count = 1, .reusable = true}, SHIFT(116),
  [219] = {.count = 1, .reusable = true}, SHIFT(118),
  [221] = {.count = 1, .reusable = false}, SHIFT(118),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym__execute_command, 2),
  [225] = {.count = 1, .reusable = false}, SHIFT(120),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [262] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__entity_selector, 2),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym__entity_selector, 2),
  [269] = {.count = 1, .reusable = false}, SHIFT(122),
  [271] = {.count = 1, .reusable = true}, SHIFT(123),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_entity_type, 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(124),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 3),
  [279] = {.count = 1, .reusable = false}, SHIFT(125),
  [281] = {.count = 1, .reusable = true}, SHIFT(128),
  [283] = {.count = 1, .reusable = true}, SHIFT(129),
  [285] = {.count = 1, .reusable = true}, SHIFT(130),
  [287] = {.count = 1, .reusable = true}, SHIFT(132),
  [289] = {.count = 1, .reusable = true}, SHIFT(133),
  [291] = {.count = 1, .reusable = true}, SHIFT(134),
  [293] = {.count = 1, .reusable = true}, SHIFT(136),
  [295] = {.count = 1, .reusable = true}, SHIFT(138),
  [297] = {.count = 1, .reusable = true}, SHIFT(139),
  [299] = {.count = 1, .reusable = true}, SHIFT(141),
  [301] = {.count = 1, .reusable = true}, SHIFT(143),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 2),
  [305] = {.count = 1, .reusable = true}, SHIFT(145),
  [307] = {.count = 1, .reusable = false}, SHIFT(145),
  [309] = {.count = 1, .reusable = true}, SHIFT(146),
  [311] = {.count = 1, .reusable = true}, SHIFT(147),
  [313] = {.count = 1, .reusable = true}, SHIFT(152),
  [315] = {.count = 1, .reusable = true}, SHIFT(153),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_team, 1),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 3),
  [321] = {.count = 1, .reusable = true}, SHIFT(155),
  [323] = {.count = 1, .reusable = true}, SHIFT(158),
  [325] = {.count = 1, .reusable = true}, SHIFT(159),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__tag_command, 3),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym__execute_command, 3),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__execute_as_command, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__execute_as_command, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__execute_at_command, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym__execute_at_command, 2),
  [339] = {.count = 1, .reusable = true}, SHIFT(160),
  [341] = {.count = 1, .reusable = true}, SHIFT(161),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__execute_if_command, 2),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym__execute_if_command, 2),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym__execute_unless_command, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym__execute_unless_command, 2),
  [351] = {.count = 1, .reusable = true}, SHIFT(166),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_dimension, 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_dimension, 1),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym__execute_in_command, 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym__execute_in_command, 2),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__execute_positioned_command, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym__execute_positioned_command, 2),
  [365] = {.count = 1, .reusable = true}, SHIFT(168),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym__execute_facing_command, 2),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym__execute_facing_command, 2),
  [371] = {.count = 1, .reusable = true}, SHIFT(170),
  [373] = {.count = 1, .reusable = true}, SHIFT(171),
  [375] = {.count = 1, .reusable = true}, SHIFT(172),
  [377] = {.count = 1, .reusable = true}, SHIFT(173),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_anchor, 1),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_anchor, 1),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym__execute_anchored_command, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym__execute_anchored_command, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_axes_swizzle, 1),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_axes_swizzle, 1),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym__execute_align_command, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym__execute_align_command, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(aux_sym__execute_command_repeat1, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2),
  [399] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(48),
  [402] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(49),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(50),
  [408] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(51),
  [411] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(52),
  [414] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(53),
  [417] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(54),
  [420] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(55),
  [423] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(56),
  [426] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(57),
  [429] = {.count = 2, .reusable = false}, REDUCE(aux_sym__execute_command_repeat1, 2), SHIFT_REPEAT(58),
  [432] = {.count = 1, .reusable = true}, SHIFT(175),
  [434] = {.count = 1, .reusable = true}, SHIFT(178),
  [436] = {.count = 1, .reusable = true}, SHIFT(179),
  [438] = {.count = 1, .reusable = false}, SHIFT(180),
  [440] = {.count = 1, .reusable = true}, SHIFT(183),
  [442] = {.count = 1, .reusable = true}, SHIFT(184),
  [444] = {.count = 1, .reusable = true}, SHIFT(185),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym__summon_command, 4),
  [448] = {.count = 1, .reusable = true}, SHIFT(125),
  [450] = {.count = 1, .reusable = true}, SHIFT(188),
  [452] = {.count = 1, .reusable = true}, SHIFT(189),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym__data_get_command, 3),
  [456] = {.count = 1, .reusable = false}, SHIFT(190),
  [458] = {.count = 1, .reusable = true}, SHIFT(191),
  [460] = {.count = 1, .reusable = true}, SHIFT(192),
  [462] = {.count = 1, .reusable = true}, SHIFT(193),
  [464] = {.count = 1, .reusable = true}, SHIFT(194),
  [466] = {.count = 1, .reusable = true}, SHIFT(195),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym__schedule_command, 4),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_objective, 1),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_objective, 1),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 3),
  [476] = {.count = 1, .reusable = true}, SHIFT(196),
  [478] = {.count = 1, .reusable = true}, SHIFT(197),
  [480] = {.count = 1, .reusable = true}, SHIFT(198),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 3),
  [484] = {.count = 1, .reusable = true}, SHIFT(202),
  [486] = {.count = 1, .reusable = false}, SHIFT(139),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_team_option, 1),
  [490] = {.count = 1, .reusable = true}, SHIFT(203),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 4),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym__tag_command, 4),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 2),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 2),
  [500] = {.count = 1, .reusable = true}, SHIFT(210),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym__execute_positioned_command, 3),
  [504] = {.count = 1, .reusable = false}, REDUCE(sym__execute_positioned_command, 3),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym__execute_rotated_command, 3),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym__execute_rotated_command, 3),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym__execute_facing_command, 3),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym__execute_facing_command, 3),
  [514] = {.count = 1, .reusable = true}, SHIFT(213),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym__execute_command, 4),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_selector_key, 1),
  [520] = {.count = 1, .reusable = true}, SHIFT(215),
  [522] = {.count = 1, .reusable = true}, SHIFT(216),
  [524] = {.count = 1, .reusable = true}, SHIFT(218),
  [526] = {.count = 1, .reusable = true}, SHIFT(220),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 1),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 1),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym__setblock_command, 5),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_block, 1),
  [538] = {.count = 1, .reusable = false}, SHIFT(221),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym__coordinate3, 3),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym__coordinate3, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 2),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_nbt_compound, 2),
  [548] = {.count = 1, .reusable = true}, SHIFT(224),
  [550] = {.count = 1, .reusable = true}, SHIFT(225),
  [552] = {.count = 1, .reusable = true}, SHIFT(226),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym__data_merge_command, 4),
  [556] = {.count = 1, .reusable = true}, SHIFT(228),
  [558] = {.count = 1, .reusable = false}, SHIFT(229),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym__data_get_command, 4),
  [562] = {.count = 1, .reusable = true}, SHIFT(230),
  [564] = {.count = 1, .reusable = false}, SHIFT(231),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym__data_remove_command, 4),
  [568] = {.count = 1, .reusable = true}, SHIFT(232),
  [570] = {.count = 1, .reusable = true}, SHIFT(233),
  [572] = {.count = 1, .reusable = true}, SHIFT(234),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 4),
  [576] = {.count = 1, .reusable = true}, SHIFT(235),
  [578] = {.count = 1, .reusable = true}, SHIFT(236),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 4),
  [582] = {.count = 1, .reusable = true}, SHIFT(237),
  [584] = {.count = 1, .reusable = true}, SHIFT(238),
  [586] = {.count = 1, .reusable = false}, SHIFT(240),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_team_option_value, 1),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym__team_command, 5),
  [592] = {.count = 1, .reusable = true}, SHIFT(241),
  [594] = {.count = 1, .reusable = true}, SHIFT(243),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 3),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 3),
  [600] = {.count = 1, .reusable = true}, SHIFT(244),
  [602] = {.count = 1, .reusable = true}, SHIFT(246),
  [604] = {.count = 1, .reusable = true}, SHIFT(247),
  [606] = {.count = 1, .reusable = false}, SHIFT(247),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_dimension, 3),
  [610] = {.count = 1, .reusable = false}, REDUCE(sym_dimension, 3),
  [612] = {.count = 1, .reusable = true}, SHIFT(249),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_bossbar, 1),
  [616] = {.count = 1, .reusable = true}, SHIFT(250),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym__entity_selector, 5),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym__entity_selector, 5),
  [622] = {.count = 1, .reusable = true}, SHIFT(252),
  [624] = {.count = 1, .reusable = true}, SHIFT(254),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [628] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_block_type, 2),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym_block_type, 2),
  [634] = {.count = 1, .reusable = true}, SHIFT(258),
  [636] = {.count = 1, .reusable = true}, SHIFT(261),
  [638] = {.count = 1, .reusable = true}, SHIFT(262),
  [640] = {.count = 1, .reusable = true}, SHIFT(265),
  [642] = {.count = 1, .reusable = true}, SHIFT(263),
  [644] = {.count = 1, .reusable = true}, SHIFT(264),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 3),
  [648] = {.count = 1, .reusable = false}, REDUCE(sym_nbt_compound, 3),
  [650] = {.count = 1, .reusable = true}, SHIFT(268),
  [652] = {.count = 1, .reusable = true}, SHIFT(272),
  [654] = {.count = 1, .reusable = true}, SHIFT(273),
  [656] = {.count = 1, .reusable = true}, SHIFT(275),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_objectives_command, 5),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 5),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_scoreboard_operator, 1),
  [664] = {.count = 1, .reusable = true}, SHIFT(279),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 4),
  [668] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 4),
  [670] = {.count = 1, .reusable = true}, SHIFT(280),
  [672] = {.count = 1, .reusable = true}, SHIFT(281),
  [674] = {.count = 1, .reusable = true}, SHIFT(282),
  [676] = {.count = 1, .reusable = true}, SHIFT(283),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_scoreboard_comparator, 1),
  [680] = {.count = 1, .reusable = true}, SHIFT(285),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym__execute_store_command, 5),
  [684] = {.count = 1, .reusable = false}, REDUCE(sym__execute_store_command, 5),
  [686] = {.count = 1, .reusable = true}, REDUCE(aux_sym__entity_selector_repeat1, 2),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym__entity_selector, 6),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym__entity_selector, 6),
  [692] = {.count = 2, .reusable = true}, REDUCE(aux_sym__entity_selector_repeat1, 2), SHIFT_REPEAT(215),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_selector_value, 1),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym__selector_argument, 3),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [701] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_block_state_key, 1),
  [705] = {.count = 1, .reusable = true}, SHIFT(288),
  [707] = {.count = 1, .reusable = true}, SHIFT(289),
  [709] = {.count = 1, .reusable = true}, SHIFT(291),
  [711] = {.count = 1, .reusable = true}, SHIFT(292),
  [713] = {.count = 1, .reusable = true}, SHIFT(293),
  [715] = {.count = 1, .reusable = true}, SHIFT(294),
  [717] = {.count = 1, .reusable = false}, SHIFT(296),
  [719] = {.count = 1, .reusable = true}, SHIFT(297),
  [721] = {.count = 1, .reusable = true}, SHIFT(298),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym__nbt_pair, 3),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_string, 1),
  [727] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_compound, 4),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym_nbt_compound, 4),
  [733] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_compound_repeat1, 2), SHIFT_REPEAT(225),
  [736] = {.count = 1, .reusable = true}, SHIFT(299),
  [738] = {.count = 1, .reusable = true}, SHIFT(301),
  [740] = {.count = 1, .reusable = true}, SHIFT(303),
  [742] = {.count = 1, .reusable = true}, SHIFT(306),
  [744] = {.count = 1, .reusable = true}, SHIFT(304),
  [746] = {.count = 1, .reusable = true}, SHIFT(305),
  [748] = {.count = 1, .reusable = true}, SHIFT(308),
  [750] = {.count = 1, .reusable = true}, SHIFT(309),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 6),
  [754] = {.count = 1, .reusable = true}, SHIFT(311),
  [756] = {.count = 1, .reusable = true}, SHIFT(314),
  [758] = {.count = 1, .reusable = true}, SHIFT(316),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 5),
  [762] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 5),
  [764] = {.count = 1, .reusable = true}, SHIFT(317),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym_integer_range, 1),
  [768] = {.count = 1, .reusable = false}, REDUCE(sym_integer_range, 1),
  [770] = {.count = 1, .reusable = false}, SHIFT(318),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_type, 1),
  [774] = {.count = 1, .reusable = true}, SHIFT(320),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [778] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 3),
  [782] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 3),
  [784] = {.count = 1, .reusable = true}, SHIFT(322),
  [786] = {.count = 1, .reusable = true}, SHIFT(324),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 2),
  [790] = {.count = 1, .reusable = true}, SHIFT(325),
  [792] = {.count = 1, .reusable = true}, SHIFT(326),
  [794] = {.count = 1, .reusable = true}, SHIFT(328),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 2),
  [798] = {.count = 1, .reusable = false}, SHIFT(330),
  [800] = {.count = 1, .reusable = true}, SHIFT(331),
  [802] = {.count = 1, .reusable = true}, SHIFT(332),
  [804] = {.count = 1, .reusable = true}, SHIFT(333),
  [806] = {.count = 1, .reusable = true}, SHIFT(334),
  [808] = {.count = 1, .reusable = true}, SHIFT(335),
  [810] = {.count = 1, .reusable = true}, SHIFT(336),
  [812] = {.count = 1, .reusable = false}, SHIFT(337),
  [814] = {.count = 1, .reusable = true}, SHIFT(338),
  [816] = {.count = 1, .reusable = true}, SHIFT(339),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_value_command, 2),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_command, 7),
  [822] = {.count = 1, .reusable = true}, SHIFT(341),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym__scoreboard_players_command, 7),
  [826] = {.count = 1, .reusable = true}, SHIFT(342),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_integer_range, 2),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym_integer_range, 2),
  [832] = {.count = 1, .reusable = false}, SHIFT(343),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym__if_unless_command, 6),
  [836] = {.count = 1, .reusable = false}, REDUCE(sym__if_unless_command, 6),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym__execute_store_command, 7),
  [840] = {.count = 1, .reusable = false}, REDUCE(sym__execute_store_command, 7),
  [842] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym_block_state, 4),
  [846] = {.count = 1, .reusable = false}, REDUCE(sym_block_state, 4),
  [848] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_state_repeat1, 2), SHIFT_REPEAT(288),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym__block_state_argument, 3),
  [853] = {.count = 1, .reusable = true}, SHIFT(344),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 3),
  [857] = {.count = 1, .reusable = true}, SHIFT(345),
  [859] = {.count = 1, .reusable = true}, SHIFT(347),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym__quoted_string, 3),
  [863] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [865] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(331),
  [868] = {.count = 1, .reusable = false}, REDUCE(aux_sym__quoted_string_repeat2, 2),
  [870] = {.count = 2, .reusable = true}, REDUCE(aux_sym__quoted_string_repeat2, 2), SHIFT_REPEAT(332),
  [873] = {.count = 1, .reusable = true}, SHIFT(348),
  [875] = {.count = 1, .reusable = false}, SHIFT(350),
  [877] = {.count = 1, .reusable = true}, SHIFT(351),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym_integer_range, 3),
  [881] = {.count = 1, .reusable = false}, REDUCE(sym_integer_range, 3),
  [883] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_nbt_array, 4),
  [887] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nbt_array_repeat1, 2), SHIFT_REPEAT(325),
  [890] = {.count = 1, .reusable = true}, SHIFT(352),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym__data_modify_from_command, 4),
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
