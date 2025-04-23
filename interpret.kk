module interpret

import std/core/either
import std/core/exn
import std/num/random

import etest

pub type expr
  Lit(value: value)
  Var(x: string)
  Let(name: string, e1: expr, e2: expr)
  Fn(x: string, e1: expr)
  App(e1: expr, e2: expr)
  Op(op: string, k: string, e: expr)
  Handle(hs: list<(string, hanop)>, e: expr)

pub rec type value
  Int(x: int)
  FnVal(x: string, body: expr, env: list<(string, value)>)
  Cont(cont: value -> <div, exn, console> computation)
  Unit

pub rec type computation
  Return(v: value)
  OpCall(op: string, k: string, v: value, c: value -> <div, exn, console> computation)

pub fun show(v: value): string
  match v
    Int(x) -> x.show()
    FnVal(x, body, env) -> "fn " ++ x.show()
    // Cont(c) -> "cont"
    _ -> "show: undefined"

pub fun eq(v1: value, v2: value): bool
  match (v1, v2)
    (Int(i1), Int(i2)) -> i1 == i2
    _ -> False

pub alias env = list<(string, value)>

pub alias cont = value -> <div, exn, console> computation

pub alias han = list<(string, hanop)>

pub struct hanop
  hk: string
  he: string
  hf: expr

pub fun extend(prev: env, new: (string, value)): env
  prev.append([new])

pub fun eval(e: expr)
  eval'(e, [], fn(x) Return(x))

pub fun eval'(e: expr, env: env, c: cont): <div, exn, console> computation
  match e
    Var(i) -> 
      match env.find(fn((i', _)) i == i')
        Just((_, v)) -> c(v)
        Nothing -> throw("undefined variable " ++ i.show())
    Let(name, e1, e2) ->
      eval'(e1, env, fn(e1')
        val env' = env.extend((name, e1'))
        eval'(e2, env', c)
      )
    Fn(x, e1) -> 
      c(FnVal(x, e1, env))
    App(e1, e2) -> 
      eval'(e1, env, fn(f)
        eval'(e2, env, fn(arg)
          apply(f, arg, c)
        )
      )
    Lit(value) -> c(value)
    Op(op, k, e) ->
      eval'(e, env, fn(e')
        OpCall(op, k, e', fn(e'') c(e''))
      )
    Handle(hs, e) -> 
      val e' = eval'(e, env, fn(x) Return(x))
      match e'
        Return(e) -> 
          // 本来はここでハンドラのreturnを適用
          Return(e)
        OpCall(op, k, e, k') ->
          match hs.lookup(fn(op') op == op')
            Just(hanop) ->
              val env' = env.extend((hanop.he, e))
              val env'' = env'.extend((hanop.hk, Cont(k')))
              eval'(hanop.hf, env'', c)
            Nothing -> throw("undefined handler was applied")


pub fun apply(f: value, arg: value, c: cont)
  match f
    FnVal(x, body, env) ->
      val env' = env.extend((x, arg))
      eval'(body, env', c)
    Cont(c') ->
      match c'(arg)
        Return(c') -> c(c')
        _ -> throw("not yet")
    _ -> throw("literal was handled as function!")

pub fun run(e: expr): <console, div> either<exception, computation>
  try(fn() eval'(e, [], fn(x) Return(x))).either()

fun (==)(e1: either<exception, value>, e2: either<exception, value>): bool
  match (e1, e2)
    (Right(r1), Right(r2)) -> r1.eq(r2)
    (Left(e1), Left(e2)) -> True
    _ -> False

// pub val interpret-tests = fn()
//   test("") fn()
//     assert-eq(
//       fn() run(
//         Let("id", Fn("x", Var("x")), App(Lit(Int(1010)), Lit(Int(1010))))
//       )
//       , fn() Right(Int(1010))
//     )