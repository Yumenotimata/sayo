module infer

import value
import expr
import types

pub alias tenv = list<(uid, types)>

fun (+->)(u: uid, t: types)
  [(u, t)]

pub fun infer(e: uexpr)
  try(fn()
    handle-unique(fn()
      handle-tenv-ref(fn()
        infer'(e)
      )
    )
  ).either()

pub effect tenv-ref
  fun modify(f: tenv -> tenv): ()
  fun tenv(): tenv

fun handle-tenv-ref(f: () -> <tenv-ref | e> a): e (a, tenv)
  var tenv := []
  with handler
    return(t) (t, tenv)
    fun modify(f)
      tenv := f(tenv)
    fun tenv()
      tenv
  f()

pub fun infer'(e: uexpr)
  match e
    UApp(e1, e2) ->
      val t-e1 = infer'(e1)
      val t-e2 = infer'(e2)
      val t-ret = tvar("")
      val subst = unify(t-e1, t-fn(t-e2, t-ret))
      t-ret.apply'(subst)
    ULam(a, body) ->
      val t-a = tvar(a)
      val t-body = infer'(body)
      t-fn(t-a, t-body)
    UVar(x) ->
      match tenv().lookup(fn(x') x == x')
        Just(t) -> t
        Nothing -> throw("variable " ++ x ++ " not found")
    ULit(v) ->
      match v
        Int(i) -> t-int

pub fun tvar(u: uid): <unique, tenv-ref> types
  val v = TVar(show(gen()))
  modify(fn(tv) tv.append(u +-> v))
  v

// なぞにtypes/applyの型が合わないのでRe
fun apply'(t: types, s: subst)
  match t
    TApp(l, r) -> TApp(l.apply'(s), r.apply'(s))
    TVar(u) -> 
      match s.lookup(fn(u') u == u')
        Just(t') -> t'
        Nothing -> TVar(u)
    t -> t