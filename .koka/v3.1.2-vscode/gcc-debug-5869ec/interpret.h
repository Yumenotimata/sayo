#pragma once
#ifndef kk_interpret_H
#define kk_interpret_H
// Koka generated module: interpret, koka version: 3.1.2, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core_bool.h"
#include "std_core_order.h"
#include "std_core_char.h"
#include "std_core_int.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_maybe.h"
#include "std_core_tuple.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"
#include "std_core_either.h"
#include "std_core_exn.h"
#include "std_core_list.h"
#include "std_core_vector.h"
#include "std_num_random.h"
#include "utest.h"

// type declarations

// type interpret/value
struct kk_interpret__value_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_interpret__value;

// type interpret/expr
struct kk_interpret__expr_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_interpret__expr;
struct kk_interpret_Int {
  struct kk_interpret__value_s _base;
  kk_integer_t x;
};
struct kk_interpret_FnVal {
  struct kk_interpret__value_s _base;
  kk_string_t x;
  kk_interpret__expr body;
  kk_std_core_types__list env;
};
struct kk_interpret_Cont {
  struct kk_interpret__value_s _base;
  kk_function_t c;
};
static inline kk_interpret__value kk_interpret__new_Unit(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(2));
}
static inline kk_interpret__value kk_interpret__base_Int(struct kk_interpret_Int* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__value kk_interpret__new_Int(kk_reuse_t _at, int32_t _cpath, kk_integer_t x, kk_context_t* _ctx) {
  struct kk_interpret_Int* _con = kk_block_alloc_at_as(struct kk_interpret_Int, _at, 1 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->x = x;
  return kk_interpret__base_Int(_con, _ctx);
}
static inline struct kk_interpret_Int* kk_interpret__as_Int(kk_interpret__value x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Int*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_interpret__value kk_interpret__base_Cont(struct kk_interpret_Cont* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__value kk_interpret__new_Cont(kk_reuse_t _at, int32_t _cpath, kk_function_t c, kk_context_t* _ctx) {
  struct kk_interpret_Cont* _con = kk_block_alloc_at_as(struct kk_interpret_Cont, _at, 1 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->c = c;
  return kk_interpret__base_Cont(_con, _ctx);
}
static inline struct kk_interpret_Cont* kk_interpret__as_Cont(kk_interpret__value x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Cont*, x, (kk_tag_t)(4), _ctx);
}
static inline kk_interpret__value kk_interpret__base_FnVal(struct kk_interpret_FnVal* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__value kk_interpret__new_FnVal(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_interpret__expr body, kk_std_core_types__list env, kk_context_t* _ctx) {
  struct kk_interpret_FnVal* _con = kk_block_alloc_at_as(struct kk_interpret_FnVal, _at, 3 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->x = x;
  _con->body = body;
  _con->env = env;
  return kk_interpret__base_FnVal(_con, _ctx);
}
static inline struct kk_interpret_FnVal* kk_interpret__as_FnVal(kk_interpret__value x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_FnVal*, x, (kk_tag_t)(3), _ctx);
}
static inline bool kk_interpret__is_Unit(kk_interpret__value x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(2)));
}
static inline bool kk_interpret__is_Int(kk_interpret__value x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_interpret__is_Cont(kk_interpret__value x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_interpret__is_FnVal(kk_interpret__value x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3), _ctx));
}
static inline kk_interpret__value kk_interpret__value_dup(kk_interpret__value _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_interpret__value_drop(kk_interpret__value _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_interpret__value_box(kk_interpret__value _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_interpret__value kk_interpret__value_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}
struct kk_interpret_Lit {
  struct kk_interpret__expr_s _base;
  kk_interpret__value value;
};
struct kk_interpret_Var {
  struct kk_interpret__expr_s _base;
  kk_string_t x;
};
struct kk_interpret_Let {
  struct kk_interpret__expr_s _base;
  kk_string_t name;
  kk_interpret__expr e1;
  kk_interpret__expr e2;
};
struct kk_interpret_Fn {
  struct kk_interpret__expr_s _base;
  kk_string_t x;
  kk_interpret__expr e1;
};
struct kk_interpret_App {
  struct kk_interpret__expr_s _base;
  kk_interpret__expr e1;
  kk_interpret__expr e2;
};
struct kk_interpret_Reset {
  struct kk_interpret__expr_s _base;
  kk_interpret__expr e;
};
struct kk_interpret_Shift {
  struct kk_interpret__expr_s _base;
  kk_interpret__expr e;
};
struct kk_interpret_Prim {
  struct kk_interpret__expr_s _base;
  kk_string_t op;
  kk_std_core_types__list exprs;
};
static inline kk_interpret__expr kk_interpret__base_Lit(struct kk_interpret_Lit* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Lit(kk_reuse_t _at, int32_t _cpath, kk_interpret__value value, kk_context_t* _ctx) {
  struct kk_interpret_Lit* _con = kk_block_alloc_at_as(struct kk_interpret_Lit, _at, 1 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->value = value;
  return kk_interpret__base_Lit(_con, _ctx);
}
static inline struct kk_interpret_Lit* kk_interpret__as_Lit(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Lit*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_interpret__expr kk_interpret__base_Var(struct kk_interpret_Var* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Var(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_context_t* _ctx) {
  struct kk_interpret_Var* _con = kk_block_alloc_at_as(struct kk_interpret_Var, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->x = x;
  return kk_interpret__base_Var(_con, _ctx);
}
static inline struct kk_interpret_Var* kk_interpret__as_Var(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Var*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_interpret__expr kk_interpret__base_Reset(struct kk_interpret_Reset* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Reset(kk_reuse_t _at, int32_t _cpath, kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_Reset* _con = kk_block_alloc_at_as(struct kk_interpret_Reset, _at, 1 /* scan count */, _cpath, (kk_tag_t)(6), _ctx);
  _con->e = e;
  return kk_interpret__base_Reset(_con, _ctx);
}
static inline struct kk_interpret_Reset* kk_interpret__as_Reset(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Reset*, x, (kk_tag_t)(6), _ctx);
}
static inline kk_interpret__expr kk_interpret__base_Shift(struct kk_interpret_Shift* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Shift(kk_reuse_t _at, int32_t _cpath, kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_Shift* _con = kk_block_alloc_at_as(struct kk_interpret_Shift, _at, 1 /* scan count */, _cpath, (kk_tag_t)(7), _ctx);
  _con->e = e;
  return kk_interpret__base_Shift(_con, _ctx);
}
static inline struct kk_interpret_Shift* kk_interpret__as_Shift(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Shift*, x, (kk_tag_t)(7), _ctx);
}
static inline kk_interpret__expr kk_interpret__base_Fn(struct kk_interpret_Fn* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Fn(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_interpret__expr e1, kk_context_t* _ctx) {
  struct kk_interpret_Fn* _con = kk_block_alloc_at_as(struct kk_interpret_Fn, _at, 2 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->x = x;
  _con->e1 = e1;
  return kk_interpret__base_Fn(_con, _ctx);
}
static inline struct kk_interpret_Fn* kk_interpret__as_Fn(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Fn*, x, (kk_tag_t)(4), _ctx);
}
static inline kk_interpret__expr kk_interpret__base_App(struct kk_interpret_App* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_App(kk_reuse_t _at, int32_t _cpath, kk_interpret__expr e1, kk_interpret__expr e2, kk_context_t* _ctx) {
  struct kk_interpret_App* _con = kk_block_alloc_at_as(struct kk_interpret_App, _at, 2 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_interpret__base_App(_con, _ctx);
}
static inline struct kk_interpret_App* kk_interpret__as_App(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_App*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_interpret__expr kk_interpret__base_Prim(struct kk_interpret_Prim* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Prim(kk_reuse_t _at, int32_t _cpath, kk_string_t op, kk_std_core_types__list exprs, kk_context_t* _ctx) {
  struct kk_interpret_Prim* _con = kk_block_alloc_at_as(struct kk_interpret_Prim, _at, 2 /* scan count */, _cpath, (kk_tag_t)(8), _ctx);
  _con->op = op;
  _con->exprs = exprs;
  return kk_interpret__base_Prim(_con, _ctx);
}
static inline struct kk_interpret_Prim* kk_interpret__as_Prim(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Prim*, x, (kk_tag_t)(8), _ctx);
}
static inline kk_interpret__expr kk_interpret__base_Let(struct kk_interpret_Let* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Let(kk_reuse_t _at, int32_t _cpath, kk_string_t name, kk_interpret__expr e1, kk_interpret__expr e2, kk_context_t* _ctx) {
  struct kk_interpret_Let* _con = kk_block_alloc_at_as(struct kk_interpret_Let, _at, 3 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->name = name;
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_interpret__base_Let(_con, _ctx);
}
static inline struct kk_interpret_Let* kk_interpret__as_Let(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Let*, x, (kk_tag_t)(3), _ctx);
}
static inline bool kk_interpret__is_Lit(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_interpret__is_Var(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_interpret__is_Reset(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(6), _ctx));
}
static inline bool kk_interpret__is_Shift(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(7), _ctx));
}
static inline bool kk_interpret__is_Fn(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_interpret__is_App(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_interpret__is_Prim(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(8), _ctx));
}
static inline bool kk_interpret__is_Let(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(3), _ctx));
}
static inline kk_interpret__expr kk_interpret__expr_dup(kk_interpret__expr _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_interpret__expr_drop(kk_interpret__expr _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_interpret__expr_box(kk_interpret__expr _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_interpret__expr kk_interpret__expr_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Tests for the `Int` constructor of the `:value` type.

static inline bool kk_interpret_is_int(kk_interpret__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_interpret__is_Int(value, _ctx)) {
    struct kk_interpret_Int* _con_x461 = kk_interpret__as_Int(value, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Unit` constructor of the `:value` type.

static inline bool kk_interpret_is_unit(kk_interpret__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_interpret__is_Unit(value, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `FnVal` constructor of the `:value` type.

static inline bool kk_interpret_is_fnVal(kk_interpret__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_interpret__is_FnVal(value, _ctx)) {
    struct kk_interpret_FnVal* _con_x462 = kk_interpret__as_FnVal(value, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Cont` constructor of the `:value` type.

static inline bool kk_interpret_is_cont(kk_interpret__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_interpret__is_Cont(value, _ctx)) {
    struct kk_interpret_Cont* _con_x463 = kk_interpret__as_Cont(value, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Lit` constructor of the `:expr` type.

static inline bool kk_interpret_is_lit(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Lit(expr, _ctx)) {
    struct kk_interpret_Lit* _con_x464 = kk_interpret__as_Lit(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Var` constructor of the `:expr` type.

static inline bool kk_interpret_is_var(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Var(expr, _ctx)) {
    struct kk_interpret_Var* _con_x465 = kk_interpret__as_Var(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Let` constructor of the `:expr` type.

static inline bool kk_interpret_is_let(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Let(expr, _ctx)) {
    struct kk_interpret_Let* _con_x466 = kk_interpret__as_Let(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Fn` constructor of the `:expr` type.

static inline bool kk_interpret_is_fn(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Fn(expr, _ctx)) {
    struct kk_interpret_Fn* _con_x467 = kk_interpret__as_Fn(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `App` constructor of the `:expr` type.

static inline bool kk_interpret_is_app(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_App(expr, _ctx)) {
    struct kk_interpret_App* _con_x468 = kk_interpret__as_App(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Reset` constructor of the `:expr` type.

static inline bool kk_interpret_is_reset(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Reset(expr, _ctx)) {
    struct kk_interpret_Reset* _con_x469 = kk_interpret__as_Reset(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Shift` constructor of the `:expr` type.

static inline bool kk_interpret_is_shift(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Shift(expr, _ctx)) {
    struct kk_interpret_Shift* _con_x470 = kk_interpret__as_Shift(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Prim` constructor of the `:expr` type.

static inline bool kk_interpret_is_prim(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Prim(expr, _ctx)) {
    struct kk_interpret_Prim* _con_x471 = kk_interpret__as_Prim(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}

kk_string_t kk_interpret_show(kk_interpret__value v, kk_context_t* _ctx); /* (v : value) -> string */ 

bool kk_interpret_eq(kk_interpret__value v1, kk_interpret__value v2, kk_context_t* _ctx); /* (v1 : value, v2 : value) -> bool */ 

bool kk_interpret__lp__eq__eq__rp_(kk_std_core_types__either e1, kk_std_core_types__either e2, kk_context_t* _ctx); /* (e1 : either<exception,value>, e2 : either<exception,value>) -> bool */ 

static inline kk_std_core_types__list kk_interpret_extend(kk_std_core_types__list prev, kk_std_core_types__tuple2 kkloc_new, kk_context_t* _ctx) { /* (prev : env, new : (string, value)) -> env */ 
  kk_std_core_types__list _x_x484 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__tuple2_box(kkloc_new, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  return kk_std_core_list_append(prev, _x_x484, _ctx);
}

kk_interpret__value kk_interpret__mlift_eval_10078_sq_(kk_function_t c_0, kk_string_t i, kk_std_core_types__maybe _y_x10017, kk_context_t* _ctx); /* (c@0 : cont<value>, i : string, maybe<(string, value)>) -> <div,exn> value */ 

kk_interpret__value kk_interpret__mlift_eval_prim_10079(kk_function_t c_1, kk_std_core_types__list env_1, kk_std_core_types__list exprs_0, kk_std_core_types__list prim_env_1, kk_std_core_types__maybe _y_x10036, kk_context_t* _ctx); /* (c@1 : cont<value>, env@1 : env, exprs@0 : list<expr>, prim-env@1 : prim_env, maybe<(list<value>) -> exn value>) -> <div,exn> value */ 

kk_interpret__value kk_interpret_apply(kk_interpret__value f, kk_interpret__value arg, kk_std_core_types__list prim_env, kk_function_t c, kk_context_t* _ctx); /* (f : value, arg : value, prim-env : prim_env, c : cont<value>) -> pure value */ 

kk_interpret__value kk_interpret_eval_sq_(kk_interpret__expr e, kk_std_core_types__list env_0, kk_std_core_types__list prim_env_0, kk_function_t c_0_0, kk_context_t* _ctx); /* (e : expr, env : env, prim-env : prim_env, c : cont<value>) -> pure value */ 

kk_interpret__value kk_interpret_eval_prim(kk_string_t id, kk_std_core_types__list exprs_0_0, kk_std_core_types__list env_1_0, kk_function_t c_1_0, kk_std_core_types__list prim_env_1_0, kk_context_t* _ctx); /* (id : string, exprs : list<expr>, env : env, c : cont<value>, prim-env : prim_env) -> pure value */ 


// lift anonymous function
struct kk_interpret_eval_fun581__t {
  struct kk_function_s _base;
};
extern kk_interpret__value kk_interpret_eval_fun581(kk_function_t _fself, kk_interpret__value x, kk_context_t* _ctx);
static inline kk_function_t kk_interpret_new_eval_fun581(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun581, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_interpret__value kk_interpret_eval(kk_interpret__expr e, kk_context_t* _ctx) { /* (e : expr) -> pure value */ 
  return kk_interpret_eval_sq_(e, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_interpret_new_eval_fun581(_ctx), _ctx);
}

kk_std_core_types__tuple2 kk_interpret_arg2(kk_std_core_types__list args, kk_context_t* _ctx); /* (args : list<value>) -> exn (value, value) */ 

kk_interpret__value kk_interpret__mlift_primitive_ops_10080(kk_std_core_types__tuple2 _y_x10047, kk_context_t* _ctx); /* forall<e> ((value, value)) -> <exn|e> value */ 

extern kk_std_core_types__list kk_interpret_primitive_ops;

kk_std_core_types__either kk_interpret_run(kk_interpret__expr e, kk_context_t* _ctx); /* (e : expr) -> div either<exception,value> */ 

kk_unit_t kk_interpret__mlift_interpret_tests_10081(kk_unit_t wild___1, kk_context_t* _ctx); /* forall<a> (wild_@1 : ()) -> <div,utest/test<a>> () */ 

kk_unit_t kk_interpret__mlift_interpret_tests_10082(kk_unit_t wild___0, kk_context_t* _ctx); /* forall<a> (wild_@0 : ()) -> <div,utest/test-suite<a>> () */ 

kk_unit_t kk_interpret__mlift_interpret_tests_10083(kk_unit_t wild__, kk_context_t* _ctx); /* forall<a> (wild_ : ()) -> <div,utest/test-suite<a>> () */ 

extern kk_function_t kk_interpret_interpret_tests;

void kk_interpret__init(kk_context_t* _ctx);


void kk_interpret__done(kk_context_t* _ctx);

#endif // header
