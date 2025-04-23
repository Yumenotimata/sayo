#pragma once
#ifndef kk_types_H
#define kk_types_H
// Koka generated module: types, koka version: 3.1.2, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core_exn.h"
#include "std_core_bool.h"
#include "std_core_order.h"
#include "std_core_char.h"
#include "std_core_int.h"
#include "std_core_vector.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_list.h"
#include "std_core_maybe.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"

// type declarations

// type types/types
struct kk_types__types_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_types__types;
struct kk_types_TApp {
  struct kk_types__types_s _base;
  kk_types__types l;
  kk_types__types r;
};
struct kk_types_TCon {
  struct kk_types__types_s _base;
  kk_string_t id;
};
struct kk_types_TVar {
  struct kk_types__types_s _base;
  kk_string_t u;
};
static inline kk_types__types kk_types__base_TCon(struct kk_types_TCon* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_types__types kk_types__new_TCon(kk_reuse_t _at, int32_t _cpath, kk_string_t id, kk_context_t* _ctx) {
  struct kk_types_TCon* _con = kk_block_alloc_at_as(struct kk_types_TCon, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->id = id;
  return kk_types__base_TCon(_con, _ctx);
}
static inline struct kk_types_TCon* kk_types__as_TCon(kk_types__types x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_types_TCon*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_types__types kk_types__base_TVar(struct kk_types_TVar* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_types__types kk_types__new_TVar(kk_reuse_t _at, int32_t _cpath, kk_string_t u, kk_context_t* _ctx) {
  struct kk_types_TVar* _con = kk_block_alloc_at_as(struct kk_types_TVar, _at, 1 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->u = u;
  return kk_types__base_TVar(_con, _ctx);
}
static inline struct kk_types_TVar* kk_types__as_TVar(kk_types__types x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_types_TVar*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_types__types kk_types__base_TApp(struct kk_types_TApp* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_types__types kk_types__new_TApp(kk_reuse_t _at, int32_t _cpath, kk_types__types l, kk_types__types r, kk_context_t* _ctx) {
  struct kk_types_TApp* _con = kk_block_alloc_at_as(struct kk_types_TApp, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->l = l;
  _con->r = r;
  return kk_types__base_TApp(_con, _ctx);
}
static inline struct kk_types_TApp* kk_types__as_TApp(kk_types__types x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_types_TApp*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_types__is_TCon(kk_types__types x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_types__is_TVar(kk_types__types x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_types__is_TApp(kk_types__types x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline kk_types__types kk_types__types_dup(kk_types__types _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_types__types_drop(kk_types__types _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_types__types_box(kk_types__types _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_types__types kk_types__types_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Tests for the `TApp` constructor of the `:types` type.

static inline bool kk_types_is_tapp(kk_types__types types, kk_context_t* _ctx) { /* (types : types) -> bool */ 
  if (kk_types__is_TApp(types, _ctx)) {
    struct kk_types_TApp* _con_x190 = kk_types__as_TApp(types, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `TCon` constructor of the `:types` type.

static inline bool kk_types_is_tcon(kk_types__types types, kk_context_t* _ctx) { /* (types : types) -> bool */ 
  if (kk_types__is_TCon(types, _ctx)) {
    struct kk_types_TCon* _con_x191 = kk_types__as_TCon(types, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `TVar` constructor of the `:types` type.

static inline bool kk_types_is_tvar(kk_types__types types, kk_context_t* _ctx) { /* (types : types) -> bool */ 
  if (kk_types__is_TVar(types, _ctx)) {
    struct kk_types_TVar* _con_x192 = kk_types__as_TVar(types, _ctx);
    return true;
  }
  {
    return false;
  }
}

extern kk_types__types kk_types_t_unit;

extern kk_types__types kk_types_t_int;

extern kk_types__types kk_types_t_arrow;

kk_string_t kk_types_show(kk_types__types t, kk_context_t* _ctx); /* (t : types) -> div string */ 

static inline kk_std_core_types__list kk_types__lp__plus__dash__gt__rp_(kk_string_t u, kk_types__types t, kk_context_t* _ctx) { /* (u : string, t : types) -> list<(string, types)> */ 
  kk_box_t _x_x207;
  kk_std_core_types__tuple2 _x_x208 = kk_std_core_types__new_Tuple2(kk_string_box(u), kk_types__types_box(t, _ctx), _ctx); /*(1038, 1039)*/
  _x_x207 = kk_std_core_types__tuple2_box(_x_x208, _ctx); /*1024*/
  return kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x207, kk_std_core_types__new_Nil(_ctx), _ctx);
}

bool kk_types__lp__eq__eq__rp_(kk_types__types t, kk_types__types t_sq_, kk_context_t* _ctx); /* (t : types, t' : types) -> div bool */ 

kk_std_core_types__list kk_types_tvar(kk_string_t u, kk_types__types t, kk_context_t* _ctx); /* (u : string, t : types) -> div list<(string, types)> */ 

kk_types__types kk_types__trmc_apply(kk_types__types t, kk_std_core_types__list s, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* (t : types, s : subst, ctx<types>) -> div types */ 

kk_types__types kk_types_apply(kk_types__types t_1, kk_std_core_types__list s_0, kk_context_t* _ctx); /* (t : types, s : subst) -> div types */ 

kk_std_core_types__list kk_types__mlift_unify_10030(kk_std_core_types__list s_sq_, kk_std_core_types__list _y_x10008, kk_context_t* _ctx); /* (s' : subst, list<(string, types)>) -> <div,console/console,exn> list<(string, types)> */ 

kk_std_core_types__list kk_types__mlift_unify_10031(kk_std_core_types__list s, kk_std_core_types__list s_0_sq_, kk_context_t* _ctx); /* (s : subst, s' : subst) -> <div,exn,console/console> list<(string, types)> */ 

kk_std_core_types__list kk_types__mlift_unify_10032(kk_types__types r, kk_types__types r_sq_, kk_std_core_types__list s_0, kk_context_t* _ctx); /* (r : types, r' : types, s : subst) -> <div,exn,console/console> list<(string, types)> */ 

kk_std_core_types__list kk_types_unify(kk_types__types a, kk_types__types b, kk_context_t* _ctx); /* (a : types, b : types) -> <pure,console/console> subst */ 

void kk_types__init(kk_context_t* _ctx);


void kk_types__done(kk_context_t* _ctx);

#endif // header
