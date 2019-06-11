module.exports = grammar({
  name: "mcfunction",

  rules: {

    function: $ => repeat(seq(
      choice(
        seq($.comment),
        seq($.command)
      ),
      $._line_break
    )),

    _line_break: $ => /[\u000A\u000D]+/,

    comment: $ => seq('#', /[^\u000A\u000D]+/),

    command: $ => choice(
      $._teleport_command,
      $._setblock_command,
      $._summon_command,
      $._say_command,
      $._data_command,
      $._function_command,
      $._schedule_command,
      $._scoreboard_command,
      $._team_command,
      $._tag_command
    ),

    _teleport_command: $ => seq(
      choice('teleport', 'tp'),
      $.selector
    ),

    _setblock_command: $ => seq(
      'setblock',
      $.coordinate,
      $.coordinate,
      $.coordinate,
      $.block
    ),

    _summon_command: $ => seq(
      'summon',
      $.entity_type,
      $._coordinate3,
      optional($.nbt_compound)
    ),

    _say_command: $ => seq(
      'say',
      $.message
    ),

    _data_command: $ => seq(
      'data',
      choice(
        $._data_merge_command,
        $._data_remove_command,
        $._data_modify_command,
        $._data_get_command
      )
    ),

    _data_merge_command: $ => seq(
      'merge',
      choice(
        seq('entity', $.selector),
        seq('block', $._coordinate3)
      ),
      $.nbt_compound
    ),

    _data_get_command: $ => seq(
      'get',
      choice(
        seq('entity', $.selector),
        seq('block', $._coordinate3)
      ),
      optional($.nbt_path)
    ),

    _data_remove_command: $ => seq(
      'remove',
      choice(
        seq('entity', $.selector),
        seq('block', $._coordinate3)
      ),
      $.nbt_path
    ),

    _data_modify_command: $ => seq(
      'modify',
      choice(
        seq('entity', $.selector),
        seq('block', $._coordinate3)
      ),
      $.nbt_path,
      choice(
        'set',
        'append',
        'prepend',
        'merge',
        seq('insert', $.integer)
      ),
      choice(
        $._data_modify_value_command,
        $._data_modify_from_command
      )
    ),

    _data_modify_value_command: $ => seq(
      'value',
      $._nbt_value
    ),

    _data_modify_from_command: $ => seq(
      'from',
      choice(
        seq('entity', $.selector),
        seq('block', $._coordinate3)
      ),
      $.nbt_path
    ),

    _function_command: $ => seq(
      'function',
      $.function_name
    ),

    _schedule_command: $ => seq(
      'schedule',
      'function',
      $.function_name,
      $.time
    ),

    _scoreboard_command: $ => seq(
      'scoreboard',
      choice(
        $._scoreboard_objectives_command,
        $._scoreboard_players_command
      )
    ),

    _scoreboard_objectives_command: $ => seq(
      'objectives',
      choice(
        // TODO: add optional display name
        seq('add', $.objective, $.scoreboard_criteria),
        'list',
        seq('modify', $.objective, choice(
          // TODO: add required display name parameter
          seq('displayname'),
          seq('rendertype', choice('hearts', 'integer'))
        )),
        seq('remove', $.objective),
        seq('setdisplay', choice(
          'belowName',
          'sidebar',
          'list',
          'sidebar.team.aqua',
          'sidebar.team.black',
          'sidebar.team.blue',
          'sidebar.team.dark_aqua',
          'sidebar.team.dark_blue',
          'sidebar.team.dark_gray',
          'sidebar.team.dark_green',
          'sidebar.team.dark_purple',
          'sidebar.team.dark_red',
          'sidebar.team.gold',
          'sidebar.team.gray',
          'sidebar.team.green',
          'sidebar.team.light_purple',
          'sidebar.team.red',
          'sidebar.team.white',
          'sidebar.team.yellow'
        ), $.objective)
      )
    ),

    _scoreboard_players_command: $ => seq(
      'players',
      choice(
        seq('add', $.selector, $.objective, $.integer),
        seq('enable', $.selector, $.objective),
        seq('get', $.selector, $.objective),
        seq('list', $.selector),
        seq('operation', $.selector, $.objective, $.scoreboard_operation, $.selector, $.objective),
        seq('remove', $.selector, $.objective, $.integer),
        seq('reset', $.selector, optional($.objective)),
        seq('set', $.selector, $.objective, $.integer)
      )
    ),

    _team_command: $ => seq(
      'team',
      choice(
        // TODO: add optional display name
        seq('add', $.team),
        seq('empty', $.team),
        seq('join', $.team, $.selector),
        seq('leave', $.selector),
        seq('list', optional($.team)),
        seq('modify', $.team, $.team_option, $.team_option_value),
        seq('remove', $.team)
      )
    ),

    _tag_command: $ => seq(
      'tag',
      $.selector,
      choice(
        seq('add', $.tag),
        seq('remove', $.tag),
        'list'
      )
    ),

    selector: $ => choice(
      seq(
        '@',
        choice('p', 'a', 'r', 's', 'e'),
        optional(seq(
          '[',
          $._selector_argument,
          repeat(seq(",",$._selector_argument)),
          ']'
        ))
      )
      // TODO: support fakeplayers
    ),

    _selector_argument: $ => seq(
      $.selector_key,
      '=',
      $.selector_value
    ),

    selector_key: $ => /[A-Za-z0-9_.-]+/,

    // TODO: improve selector value expression
    selector_value: $ => /[A-Za-z0-9_.-]+/,

    _coordinate3: $ => seq(
      $.coordinate,
      $.coordinate,
      $.coordinate
    ),

    coordinate: $ => '~',

    integer: $ => /-?[0-9]+/,

    block: $ => seq(
      optional("#"),
      $.block_type,
      optional($.block_state),
      optional($.nbt_compound)
    ),

    block_type: $ => seq(
      optional("minecraft:"),
      /[a-z_]+/
    ),

    block_state: $ => seq(
      '[',
      $._block_state_argument,
      repeat(seq(",",$._block_state_argument)),
      ']'
    ),

    _block_state_argument: $ =>seq(
      $.block_state_key,
      '=',
      $.block_state_value
    ),

    block_state_key: $ => /[a-z_]+/,

    block_state_value: $ => /[a-z0-9_]+/,

    entity_type: $ => seq(
      optional("minecraft:"),
      /[a-z_]+/
    ),

    message: $ => /[^\u000A\u000D]+/,

    nbt_compound: $ => seq(
      '{',
      optional(seq(
        $._nbt_pair,
        repeat(seq(',', $._nbt_pair))
      )),
      '}'
    ),

    _nbt_pair: $ => seq(
      $.nbt_key,
      ':',
      $._nbt_value
    ),

    nbt_array: $ => seq(
      '[',
      optional(seq(
        $._nbt_value,
        repeat(seq(',', $._nbt_value)),
      )),
      ']'
    ),

    nbt_key: $ => /[A-Za-z0-9_]+/,

    _nbt_value: $ => choice(
      $.nbt_number,
      $.nbt_string,
      $.nbt_compound,
      $.nbt_array
    ),

    nbt_number: $ => /-?[0-9]+(\.[0-9]+)?[bsfdl]?/,

    nbt_string: $ => choice(
      $._quoted_string
    ),

    _quoted_string: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(/[^"\\\n]+/),
          $.escape_sequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          token.immediate(/[^'\\\n]+/),
          $.escape_sequence
        )),
        "'"
      )
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    )),

    // TODO: support unquoted strings
    //_unquoted_string: $ => /[A-Za-z0-9_]+/,

    // TODO: improve nbt path expression
    nbt_path: $ => /[^\u000A\u000D ]+/,

    function_name: $ => /([\.a-z0-9_-]+:)?[\/\.a-z0-9_-]+/,

    time: $ => /[0-9]+(\.[0-9]+)?[std]/,

    objective: $ => /[\.A-Za-z0-9_-]{1,16}/,

    scoreboard_criteria: $ => /[\.A-Za-z0-9:_-]+/,

    scoreboard_operation: $ => choice('%=', '*=', '+=', '-=', '/=', '<=', '=', '>=', '><'),

    team: $ => /[\.A-Za-z0-9_-]{1,16}/,

    team_option: $ => /[A-Za-z]+/,

    // TODO: allow text component alternative
    team_option_value: $ => /[A-Za-z]+/,

    tag: $ => /[\.A-Za-z0-9_-]+/

  }

})
