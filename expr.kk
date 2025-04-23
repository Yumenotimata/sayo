module expr

import std/core/either
import std/core/exn

import value

pub rec type expr
  App(e1: expr, e2: expr)
  Let(x: string, e1: expr, e2: expr)
  Lam(a: string, body: expr)
  Lit(v: value)
  Var(x: string)

pub alias uid = string

pub rec type uexpr
  UApp(e1: uexpr, e2: uexpr)
  ULet(x: uid, e1: uexpr, e2: uexpr)
  ULam(a: uid, body: uexpr)
  ULit(v: value)
  UVar(x: uid)

pub fun show(e: uexpr): <div> string
  match e
    UApp(e1, e2) -> show(e1) ++ " @ " ++ show(e2)
    ULet(x, e1, e2) -> "let " ++ show(x) ++ " = " ++ show(e1) ++ " in " ++ show(e2)
    UVar(x) -> x
    ULam(a, body) -> "(\\" ++ a ++ " -> " ++ show(body) ++ ")"
    ULit(v) -> show(v)

pub alias usubst = list<(string, uid)>

pub effect unique
  fun gen(): int

pub fun handle-unique(f: () -> <unique | e> a): e a
  var unique-num := -1
  with fun gen()
    unique-num := unique-num + 1
    return unique-num
  f()

fun uid(x: string): <unique> string
  "$" ++ x ++ show(gen())

pub fun uniquify(e: expr): <div> either<exception, uexpr>
  try(fn() 
    handle-unique(fn() 
      uniquify'(e, [])
    )
  ).either()

pub fun uniquify'(e: expr, us: usubst): <exn, unique, div> uexpr
  match e
    App(e1, e2) -> UApp(uniquify'(e1, us), uniquify'(e2, us))
    Let(x, e1, e2) -> 
      val x' = uid(x)
      val us' = us.append(x +-> x')
      ULet(x', uniquify'(e1, us), uniquify'(e2, us'))
    Lam(a, body) -> 
      val a' = uid(a)
      ULam(a', uniquify'(body, us.append(a +-> a')))
    Lit(v) -> ULit(v)
    Var(x) -> match us.filter(fn((x', _)) x == x').last()
      Just((_, uid)) -> UVar(uid)
      Nothing -> throw("undefined variable: " ++ show(x))

fun (+->)(id: string, uid: string)
  [(id, uid)]