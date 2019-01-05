module.exports = grammar({
  name: "mcfunction",

  rules: {

    function: $ => repeat(seq(choice(
      $.command,
      $.comment
    ))),

    comment: $ => token(seq('#', /.*/)),

    command: $ => choice(
      $._tp_command,
      $._say_command
      // TODO: other commands
    ),

    _say_command: $ => seq('say', /.*/),

    _tp_command: $ => seq('tp', $.selector),

    selector: $ => seq(
      /@[aeprs]/,
      optional(seq(
        '[',
        $.selector_argument,
        optional(repeat1(seq(
          ',',
          $.selector_argument
        ))),
        ']'
      ))
    ),

    selector_argument: $ => choice(
      seq('name=', /[A-Za-z_]+/),
      seq('tag=', /[A-Za-z_]+/),
      seq('type=', $.entity_type)
      // TODO: more selector arguments
    ),

    entity_type: $ => seq(
      optional('minecraft:'),
      /[a-z]+/
    )

  }

})
