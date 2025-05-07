module infer

import value
import expr
import types
import std/core/string

pub alias tenv = list<(uid, types)>

fun (+->)(u: uid, t: types)
  [(u, t)]

// とりあえずinferで得たいのは型が不明なuidに対する型代入
// 判明しているものは別で得られるとうれしい
pub fun infer(e: uexpr)
  val tv: ref<h, tenv> = ref([])
  handle-unique fn()
    infer'(e, tv)
  !tv
  // val tv': list<(string, types)> = !tv
  // tv'.filter-map fn((u, t))
  //   if u == "" then
  //     Nothing
  //   else
  //     Just((u, t))

pub fun infer'(e: uexpr, tv: ref<h, tenv>): <console, div, exn, read<h>, unique, write<h>> types
  match e
    UApp(e1, e2) ->
      val t-e1 = infer'(e1, tv)
      val t-e2 = infer'(e2, tv)
      val t-ret = tvar(tv)
      val subst = unify(t-e1, t-fn(t-e2, t-ret))
      // tv := (!tv).map(fn((u, t)) (u, t.apply'(subst)))
      t-ret.apply'(subst)
      // tvar(tv)
    ULam(a, body) ->
      val t-a = tvar'(a, tv)
      val t-body = infer'(body, tv)
      t-fn(t-a, t-body)
    UVar(x) ->
      match (!tv).lookup(fn(x') x == x')
        Just(t) -> t
        Nothing -> tvar'(x, tv)
    ULit(v) ->
      match v
        Int(i) -> t-int
        String(s) -> t-string
    ULet(x, e1, e2) ->
      val t-x = tvar'(x, tv)
      val t-e1 = infer'(e1, tv)
      val subst = unify(t-x, t-e1)
      // tv := (!tv).map(fn((u, t)) (u, t.apply'(subst)))
      tv := (!tv).map(fn((u, t)) (u, t))
      // tv := (!tv).map(fn(x) x)
      println("e2: " ++ show(e2))
      val t-e2 = infer'(e2, tv)
      // t-e2.apply'(subst)
      tvar(tv)

pub fun tvar'(u: uid, tv: ref<h, tenv>): <unique, read<h>, write<h>> types
  val v = TVar(u)
  tv := (!tv).append(u +-> v)
  v

pub fun tvar(tv: ref<h, tenv>): <unique, read<h>, write<h>> types
  val v = TVar(show(gen()))
  tv := (!tv).append("" +-> v)
  v

// pub fun infer(e: uexpr)
//   try(fn()
//     handle-unique(fn()
//       handle-tenv-ref(fn()
//         infer'(e)
//       )
//     )
//   ).either()

// pub effect tenv-ref
//   fun modify(f: tenv -> tenv): ()
//   fun tenv(): tenv

// fun handle-tenv-ref(f: () -> <tenv-ref | e> a): e (a, tenv)
//   var tenv := []
//   with handler
//     return(t) (t, tenv)
//     fun modify(f)
//       tenv := f(tenv)
//     fun tenv()
//       tenv
//   f()

// pub fun infer'(e: uexpr)
//   match e
//     UApp(e1, e2) ->
//       val t-e1 = infer'(e1)
//       val t-e2 = infer'(e2)
//       val t-ret = tvar("")
//       val subst = unify(t-e1, t-fn(t-e2, t-ret))
//       t-ret.apply'(subst)
//     ULam(a, body) ->
//       val t-a = tvar(a)
//       val t-body = infer'(body)
//       t-fn(t-a, t-body)
//     UVar(x) ->
//       match tenv().lookup(fn(x') x == x')
//         Just(t) -> t
//         Nothing -> throw("variable " ++ x ++ " not found")
//     ULit(v) ->
//       match v
//         Int(i) -> t-int

// pub fun tvar(u: uid): <unique, tenv-ref> types
//   val v = TVar(show(gen()))
//   modify(fn(tv) tv.append(u +-> v))
//   v

// なぞにtypes/applyの型が合わないのでRe
fun apply'(t: types, s: subst)
  println("apply: " ++ show(t) ++ " " ++ show(s))
  match t
    TApp(l, r) -> TApp(l.apply'(s), r.apply'(s))
    TVar(u) -> 
      match s.lookup(fn(u') u == u')
        Just(t') -> t'
        Nothing -> TVar(u)
    t -> t