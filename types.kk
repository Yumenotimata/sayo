module types

pub rec type types
  TApp(l: types, r: types)
  TCon(id: string)
  TVar(u: string)

pub val t-unit = TCon("Unit")
pub val t-int = TCon("Int")
pub val t-arrow = TCon("->")

pub alias subst = list<(string, types)>

pub fun show(t: types): <div> string
  match t
    TApp(l, r) -> show(t) ++ " " ++ show(r)
    TCon(id) -> id
    TVar(u) -> u

fun (+->)(u: string, t: types)
  [(u, t)]

fun (==)(t: types, t': types): <div> bool
  match (t, t')
    (TApp(l, r), TApp(l', r')) -> l == l' && r == r'
    (TCon(id), TCon(id')) -> id == id'
    (TVar(u), TVar(u')) -> u == u'
    _ -> False

fun apply(t: types, s: subst)
  match t
    TApp(l, r) -> TApp(l.apply(s), r.apply(s))
    TVar(u) -> 
      match s.lookup(fn(u') u == u')
        Just(t') -> t'
        Nothing -> TVar(u)
    t -> t

pub fun unify(a: types, b: types): <div, exn, console> subst
  match (a, b)
    (TApp(l, r), TApp(l', r'))  ->
      val s = unify(l, l')
      val s' = unify(r.apply(s), r'.apply(s))
      s' ++ s.map(fn((u, t)) (u, t.apply(s')))
    (TVar(u), t) -> tvar(u, t)
    (t, TVar(u)) -> tvar(u, t)
    (TCon(id), TCon(id')) -> 
      if id == id' then [] else throw("types can not unify")
    _ -> throw("types can not unify")

// TODO: 出役チェック
pub fun tvar(u: string, t: types)
  if t == TVar(u) then
    []
  else
    u +-> t