module.exports = grammar({
  name: "mcfunction",

  rules: {

    function: $ => repeat(seq(choice(
      $.command,
      $.comment
    ))),

    comment: $ => token(seq('#', /.*/)),

    command: $ => /[a-z ]+/
  }

})
