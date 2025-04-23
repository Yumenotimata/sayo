import utest

import expr
import value
import types

fun main()
  // val test = Let("x", Let("x", Lit(Int(1)), App(Lam("x", Var("x")), Lit(Int(0)))), Var("x"))
  // match uniquify(test)
  //   Left(e) -> println(e)
  //   Right(uexpr) -> println(show(uexpr))

  // val t = TApp(TApp(t-arrow, TVar("a")), TVar("b"))
  // val t' = TApp(TApp(t-arrow, TCon("Int")), TVar("a"))
  val t = TApp(TVar("a"), TVar("b"))
  val t' = TApp(TVar("b"), TCon("Int"))

  match try(fn() unify(t, t')).either()
    Left(e) ->
      println(e)
      return ()
    Right(subst) -> 
      subst.map(fn((u, t)) println(u ++ " +-> " ++ show(t)))
      return ()

  return ()