import utest

import interpret
import etest

// val tests = interpret-tests

fun main()
  with 
    final ctl throw-exn(e)
      println("exception: " ++ e.show())

  val program = Reset(Shift(Fn("k", App(Var("k"), Lit(Int(10))))))
  val ret = eval'(program, [], fn(id) id)
  println("result: " ++ ret.show())

  // run-test(interpret-tests)

  run-test fn()
    // test("ok test") fn()
    assert-eq(fn() 0, fn() 1)

  return ()
