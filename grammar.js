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
      $._data_command
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

    selector: $ => seq(
      '@',
      choice('p', 'a', 'r', 's', 'e'),
      optional(seq(
        '[',
        $._selector_argument,
        repeat(seq(",",$._selector_argument)),
        ']'
      ))
    ),

    _selector_argument: $ => seq(
      $.selector_key,
      '=',
      $.selector_value
    ),

    selector_key: $ => /[A-Za-z0-9_.-]+/,

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

    nbt_number: $ => prec(2,
      /-?[0-9]+(\.[0-9]+)?[bsfdl]?/,
    ),

    nbt_string: $ => choice(
      $._quoted_string,
      $._unquoted_string
    ),

    _quoted_string: $ => seq(
      '"',
      /[^\u000A\u000D ]*/,
      '"'
    ),

    _unquoted_string: $ => /[A-Za-z0-9_]/,

    // TODO: improve nbt path expression
    nbt_path: $ => /[^\u000A\u000D ]+/

  }

})
