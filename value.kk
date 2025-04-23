module value

pub rec type value
  Int(x: int)
  String(x: string)

pub fun show(v: value): <div> string
  match v
    Int(x) -> show(x)
    String(x) -> x