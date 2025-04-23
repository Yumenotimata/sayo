import utest

import expr
import value

fun main()
  val test = Let("x", Let("x", Lit(Int(1)), App(Lam("x", Var("x")), Lit(Int(0)))), Var("x"))
  match uniquify(test)
    Left(e) -> println(e)
    Right(uexpr) -> println(show(uexpr))
  return ()