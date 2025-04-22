module interpret

import std/core/either
import std/core/exn
import std/core/list
import std/core/vector
import std/num/random

import utest

pub rec type expr
  Lit(value: value)
  Var(x: string)
  Let(name: string, e1: expr, e2: expr)
  Fn(x: string, e1: expr)
  App(e1: expr, e2: expr)
  // Op(id: string, e: expr)
  Handle(e: expr, h: list<(string, expr)>)
  Prim(op: string, exprs: list<expr>)

pub rec type value
  Int(x: int)
  Unit
  FnVal(x: string, body: expr, env: list<(string, value)>)
  Cont(c: cont<value>)

pub fun show(v: value): string
  match v
    Int(x) -> x.show()
    FnVal(x, body, env) -> "fn " ++ x.show()
    Cont(c) -> "cont"
    _ -> "show: undefined"

pub fun eq(v1: value, v2: value): bool
  match (v1, v2)
    (Int(i1), Int(i2)) -> i1 == i2
    _ -> False

pub alias env = list<(string, value)>

pub alias prim_env = list<(string, list<value> -> <exn> value)>

pub alias cont<a> = value -> <div, exn> a

pub fun extend(prev: env, new: (string, value)): env
  prev.append([new])

pub fun eval(e: expr)
  eval'(e, [], [], [], fn(x) x)

pub fun eval'(e: expr, env: env, prim-env: prim_env, h: list<(string, expr)>, c: cont<value>): <div, exn> value
  match e
    Var(i) -> 
      match env.find(fn((i', _)) i == i')
        Just((_, v)) -> c(v)
        Nothing -> throw("undefined variable " ++ i.show())
    Let(name, e1, e2) ->
      eval'(e1, env, prim-env, h, fn(e1')
        val env' = env.extend((name, e1'))
        eval'(e2, env', prim-env, h, c)
      )
    Fn(x, e1) -> 
      c(FnVal(x, e1, env))
    App(e1, e2) -> 
      eval'(e1, env, prim-env, h, fn(f)
        eval'(e2, env, prim-env, h, fn(arg)
          apply(f, arg, prim-env, h, c)
        )
      )
    Lit(value) -> c(value)
    Handle(e, h) -> eval'(e, env, prim-env, h, c)
    // Op(id, e) -> 
    //   match h.lookup(fn(id') id == id')
    //     Just(op) -> eval'(op, env, prim-env, h, fn(op')
    //       match op'
    //         FnVal(x, body, env') ->
    //           val env'' = env'.extend((x, eval'(e, env, prim-env, h, c)))
    //           eval'(body, env'', prim-env, h, fn(x) x)
    //         _ -> throw("not a function was treated as handler")
    //     )
    //     Nothing -> throw("undefined handler")
    Prim(op, exprs) -> eval-prim(op, exprs, env, h, c, prim-env)

pub fun eval-prim(id: string, exprs: list<expr>, env: env, h: list<(string, expr)>, c: cont<value>, prim-env: prim_env): <div, exn> value
  match prim-env.lookup(fn(id') id == id')
    Just(op) -> op(exprs.map(fn(expr) eval'(expr, env, prim-env, h, c)))
    Nothing -> throw("undefined primitive op was evaluted!")

pub fun apply(f: value, arg: value, prim-env: prim_env, h: list<(string, expr)>, c: cont<value>)
  match f
    FnVal(x, body, env) ->
      val env' = env.extend((x, arg))
      eval'(body, env', prim-env, h, c)
    Cont(c') ->
      c (c'(arg))
    _ -> throw("literal was handled as function!")

pub fun arg2(args: list<value>): <exn> (value, value)
  match args
    Cons(a0, Cons(a1, _)) -> (a0, a1)
    _                     -> throw("expected two arguments")

pub val primitive-ops = [
  ("+", fn(args)
    match arg2(args)
      (Int(a), Int(b)) -> Int(a + b)
      _ -> throw("add: arguments must be Int")
  )
]

pub fun run(e: expr): <div> either<exception, value>
  try(fn() eval'(e, [], primitive-ops, [], fn(x) x)).either()

fun (==)(e1: either<exception, value>, e2: either<exception, value>): bool
  match (e1, e2)
    (Right(r1), Right(r2)) -> r1.eq(r2)
    (Left(e1), Left(e2)) -> True
    _ -> False

pub val interpret-tests = fn()
  suite("Apply") fn()
    test("") fn()
      assert-eq(
        fn() run(
          Let("id", Fn("x", Var("x")), App(Var("id"), Lit(Int(1010))))
        )
        , fn() Right(Int(1010))
      )
  suite("Multiple Application") fn()
    test("") fn()
      assert-eq(
        fn() run(
          Let("plus", Fn("a", Fn("b", Prim("+", [Var("a"), Var("b")]))), App(App(Var("plus"), Lit(Int(1))), Lit(Int(2))))
        )
        , fn() Right(Int(3))
      )
  // suite("Shift/Reset") fn()
  //   test("") fn()
  //     assert-eq(
  //       fn() run(
  //         Reset(Prim("+", [Lit(Int(1)), Shift(Fn("k", App(Var("k"), Lit(Int(2)))))]))
  //       )
  //       , fn() Right(Int(3))
  //     )
  //     assert-eq(
  //       fn() run(
  //         Let("plus", Fn("a", Fn("b", Prim("+", [Var("a"), Var("b")]))), Reset(App(App(Var("plus"), Lit(Int(1))), Shift(Fn("_", Lit(Int(2)))))))
  //       )
  //       , fn() Right(Int(2))
  //     )
      