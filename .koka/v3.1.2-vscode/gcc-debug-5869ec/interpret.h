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
#include "std_core_vector.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_list.h"
#include "std_core_maybe.h"
#include "std_core_tuple.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"
#include "std_core_either.h"
#include "std_core_exn.h"
#include "std_num_random.h"
#include "etest.h"

// type declarations

// type interpret/computation
struct kk_interpret__computation_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_interpret__computation;

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

// type interpret/hanop
struct kk_interpret__hanop_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_interpret__hanop;
struct kk_interpret_Return {
  struct kk_interpret__computation_s _base;
  kk_interpret__value v;
};
struct kk_interpret_OpCall {
  struct kk_interpret__computation_s _base;
  kk_string_t op;
  kk_string_t k;
  kk_interpret__value v;
  kk_function_t c;
};
static inline kk_interpret__computation kk_interpret__base_Return(struct kk_interpret_Return* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__computation kk_interpret__new_Return(kk_reuse_t _at, int32_t _cpath, kk_interpret__value v, kk_context_t* _ctx) {
  struct kk_interpret_Return* _con = kk_block_alloc_at_as(struct kk_interpret_Return, _at, 1 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->v = v;
  return kk_interpret__base_Return(_con, _ctx);
}
static inline struct kk_interpret_Return* kk_interpret__as_Return(kk_interpret__computation x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Return*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_interpret__computation kk_interpret__base_OpCall(struct kk_interpret_OpCall* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__computation kk_interpret__new_OpCall(kk_reuse_t _at, int32_t _cpath, kk_string_t op, kk_string_t k, kk_interpret__value v, kk_function_t c, kk_context_t* _ctx) {
  struct kk_interpret_OpCall* _con = kk_block_alloc_at_as(struct kk_interpret_OpCall, _at, 4 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->op = op;
  _con->k = k;
  _con->v = v;
  _con->c = c;
  return kk_interpret__base_OpCall(_con, _ctx);
}
static inline struct kk_interpret_OpCall* kk_interpret__as_OpCall(kk_interpret__computation x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_OpCall*, x, (kk_tag_t)(2), _ctx);
}
static inline bool kk_interpret__is_Return(kk_interpret__computation x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_interpret__is_OpCall(kk_interpret__computation x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline kk_interpret__computation kk_interpret__computation_dup(kk_interpret__computation _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_interpret__computation_drop(kk_interpret__computation _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_interpret__computation_box(kk_interpret__computation _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_interpret__computation kk_interpret__computation_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}
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
  kk_function_t cont;
};
static inline kk_interpret__value kk_interpret__new_Unit(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(4));
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
static inline kk_interpret__value kk_interpret__new_Cont(kk_reuse_t _at, int32_t _cpath, kk_function_t cont, kk_context_t* _ctx) {
  struct kk_interpret_Cont* _con = kk_block_alloc_at_as(struct kk_interpret_Cont, _at, 1 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->cont = cont;
  return kk_interpret__base_Cont(_con, _ctx);
}
static inline struct kk_interpret_Cont* kk_interpret__as_Cont(kk_interpret__value x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Cont*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_interpret__value kk_interpret__base_FnVal(struct kk_interpret_FnVal* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__value kk_interpret__new_FnVal(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_interpret__expr body, kk_std_core_types__list env, kk_context_t* _ctx) {
  struct kk_interpret_FnVal* _con = kk_block_alloc_at_as(struct kk_interpret_FnVal, _at, 3 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->x = x;
  _con->body = body;
  _con->env = env;
  return kk_interpret__base_FnVal(_con, _ctx);
}
static inline struct kk_interpret_FnVal* kk_interpret__as_FnVal(kk_interpret__value x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_FnVal*, x, (kk_tag_t)(2), _ctx);
}
static inline bool kk_interpret__is_Unit(kk_interpret__value x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(4)));
}
static inline bool kk_interpret__is_Int(kk_interpret__value x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_interpret__is_Cont(kk_interpret__value x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_interpret__is_FnVal(kk_interpret__value x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(2), _ctx));
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
struct kk_interpret_Op {
  struct kk_interpret__expr_s _base;
  kk_string_t op;
  kk_string_t k;
  kk_interpret__expr e;
};
struct kk_interpret_Handle {
  struct kk_interpret__expr_s _base;
  kk_std_core_types__list hs;
  kk_interpret__expr e;
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
static inline kk_interpret__expr kk_interpret__base_Handle(struct kk_interpret_Handle* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Handle(kk_reuse_t _at, int32_t _cpath, kk_std_core_types__list hs, kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_Handle* _con = kk_block_alloc_at_as(struct kk_interpret_Handle, _at, 2 /* scan count */, _cpath, (kk_tag_t)(7), _ctx);
  _con->hs = hs;
  _con->e = e;
  return kk_interpret__base_Handle(_con, _ctx);
}
static inline struct kk_interpret_Handle* kk_interpret__as_Handle(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Handle*, x, (kk_tag_t)(7), _ctx);
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
static inline kk_interpret__expr kk_interpret__base_Op(struct kk_interpret_Op* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__expr kk_interpret__new_Op(kk_reuse_t _at, int32_t _cpath, kk_string_t op, kk_string_t k, kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_Op* _con = kk_block_alloc_at_as(struct kk_interpret_Op, _at, 3 /* scan count */, _cpath, (kk_tag_t)(6), _ctx);
  _con->op = op;
  _con->k = k;
  _con->e = e;
  return kk_interpret__base_Op(_con, _ctx);
}
static inline struct kk_interpret_Op* kk_interpret__as_Op(kk_interpret__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Op*, x, (kk_tag_t)(6), _ctx);
}
static inline bool kk_interpret__is_Lit(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_interpret__is_Var(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_interpret__is_Fn(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_interpret__is_App(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_interpret__is_Handle(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(7), _ctx));
}
static inline bool kk_interpret__is_Let(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_interpret__is_Op(kk_interpret__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(6), _ctx));
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
struct kk_interpret_Hanop {
  struct kk_interpret__hanop_s _base;
  kk_string_t hk;
  kk_string_t he;
  kk_interpret__expr hf;
};
static inline kk_interpret__hanop kk_interpret__base_Hanop(struct kk_interpret_Hanop* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_interpret__hanop kk_interpret__new_Hanop(kk_reuse_t _at, int32_t _cpath, kk_string_t hk, kk_string_t he, kk_interpret__expr hf, kk_context_t* _ctx) {
  struct kk_interpret_Hanop* _con = kk_block_alloc_at_as(struct kk_interpret_Hanop, _at, 3 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->hk = hk;
  _con->he = he;
  _con->hf = hf;
  return kk_interpret__base_Hanop(_con, _ctx);
}
static inline struct kk_interpret_Hanop* kk_interpret__as_Hanop(kk_interpret__hanop x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_interpret_Hanop*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_interpret__is_Hanop(kk_interpret__hanop x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_interpret__hanop kk_interpret__hanop_dup(kk_interpret__hanop _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_interpret__hanop_drop(kk_interpret__hanop _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_interpret__hanop_box(kk_interpret__hanop _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_interpret__hanop kk_interpret__hanop_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `v` constructor field of the `:computation` type.

static inline kk_interpret__value kk_interpret_computation_fs_v(kk_interpret__computation computation, kk_context_t* _ctx) { /* (computation : computation) -> value */ 
  if (kk_interpret__is_Return(computation, _ctx)) {
    struct kk_interpret_Return* _con_x221 = kk_interpret__as_Return(computation, _ctx);
    kk_interpret__value _x = _con_x221->v;
    return kk_interpret__value_dup(_x, _ctx);
  }
  {
    struct kk_interpret_OpCall* _con_x222 = kk_interpret__as_OpCall(computation, _ctx);
    kk_interpret__value _x_0 = _con_x222->v;
    return kk_interpret__value_dup(_x_0, _ctx);
  }
}
 
// Automatically generated. Tests for the `Return` constructor of the `:computation` type.

static inline bool kk_interpret_is_return(kk_interpret__computation computation, kk_context_t* _ctx) { /* (computation : computation) -> bool */ 
  if (kk_interpret__is_Return(computation, _ctx)) {
    struct kk_interpret_Return* _con_x223 = kk_interpret__as_Return(computation, _ctx);
    return true;
  }
  {
    struct kk_interpret_OpCall* _con_x224 = kk_interpret__as_OpCall(computation, _ctx);
    return false;
  }
}
 
// Automatically generated. Tests for the `OpCall` constructor of the `:computation` type.

static inline bool kk_interpret_is_opCall(kk_interpret__computation computation, kk_context_t* _ctx) { /* (computation : computation) -> bool */ 
  if (kk_interpret__is_OpCall(computation, _ctx)) {
    struct kk_interpret_OpCall* _con_x225 = kk_interpret__as_OpCall(computation, _ctx);
    return true;
  }
  {
    struct kk_interpret_Return* _con_x226 = kk_interpret__as_Return(computation, _ctx);
    return false;
  }
}
 
// Automatically generated. Tests for the `Int` constructor of the `:value` type.

static inline bool kk_interpret_is_int(kk_interpret__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_interpret__is_Int(value, _ctx)) {
    struct kk_interpret_Int* _con_x227 = kk_interpret__as_Int(value, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `FnVal` constructor of the `:value` type.

static inline bool kk_interpret_is_fnVal(kk_interpret__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_interpret__is_FnVal(value, _ctx)) {
    struct kk_interpret_FnVal* _con_x228 = kk_interpret__as_FnVal(value, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Cont` constructor of the `:value` type.

static inline bool kk_interpret_is_cont(kk_interpret__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_interpret__is_Cont(value, _ctx)) {
    struct kk_interpret_Cont* _con_x229 = kk_interpret__as_Cont(value, _ctx);
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
 
// Automatically generated. Tests for the `Lit` constructor of the `:expr` type.

static inline bool kk_interpret_is_lit(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Lit(expr, _ctx)) {
    struct kk_interpret_Lit* _con_x230 = kk_interpret__as_Lit(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Var` constructor of the `:expr` type.

static inline bool kk_interpret_is_var(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Var(expr, _ctx)) {
    struct kk_interpret_Var* _con_x231 = kk_interpret__as_Var(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Let` constructor of the `:expr` type.

static inline bool kk_interpret_is_let(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Let(expr, _ctx)) {
    struct kk_interpret_Let* _con_x232 = kk_interpret__as_Let(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Fn` constructor of the `:expr` type.

static inline bool kk_interpret_is_fn(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Fn(expr, _ctx)) {
    struct kk_interpret_Fn* _con_x233 = kk_interpret__as_Fn(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `App` constructor of the `:expr` type.

static inline bool kk_interpret_is_app(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_App(expr, _ctx)) {
    struct kk_interpret_App* _con_x234 = kk_interpret__as_App(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Op` constructor of the `:expr` type.

static inline bool kk_interpret_is_op(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Op(expr, _ctx)) {
    struct kk_interpret_Op* _con_x235 = kk_interpret__as_Op(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Handle` constructor of the `:expr` type.

static inline bool kk_interpret_is_handle(kk_interpret__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_interpret__is_Handle(expr, _ctx)) {
    struct kk_interpret_Handle* _con_x236 = kk_interpret__as_Handle(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `hk` constructor field of the `:hanop` type.

static inline kk_string_t kk_interpret_hanop_fs_hk(kk_interpret__hanop hanop, kk_context_t* _ctx) { /* (hanop : hanop) -> string */ 
  {
    struct kk_interpret_Hanop* _con_x237 = kk_interpret__as_Hanop(hanop, _ctx);
    kk_string_t _x = _con_x237->hk;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `he` constructor field of the `:hanop` type.

static inline kk_string_t kk_interpret_hanop_fs_he(kk_interpret__hanop hanop, kk_context_t* _ctx) { /* (hanop : hanop) -> string */ 
  {
    struct kk_interpret_Hanop* _con_x238 = kk_interpret__as_Hanop(hanop, _ctx);
    kk_string_t _x = _con_x238->he;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `hf` constructor field of the `:hanop` type.

static inline kk_interpret__expr kk_interpret_hanop_fs_hf(kk_interpret__hanop hanop, kk_context_t* _ctx) { /* (hanop : hanop) -> expr */ 
  {
    struct kk_interpret_Hanop* _con_x239 = kk_interpret__as_Hanop(hanop, _ctx);
    kk_interpret__expr _x = _con_x239->hf;
    return kk_interpret__expr_dup(_x, _ctx);
  }
}

kk_interpret__hanop kk_interpret_hanop_fs__copy(kk_interpret__hanop _this, kk_std_core_types__optional hk, kk_std_core_types__optional he, kk_std_core_types__optional hf, kk_context_t* _ctx); /* (hanop, hk : ? string, he : ? string, hf : ? expr) -> hanop */ 

kk_string_t kk_interpret_show(kk_interpret__value v, kk_context_t* _ctx); /* (v : value) -> string */ 

bool kk_interpret_eq(kk_interpret__value v1, kk_interpret__value v2, kk_context_t* _ctx); /* (v1 : value, v2 : value) -> bool */ 

bool kk_interpret__lp__eq__eq__rp_(kk_std_core_types__either e1, kk_std_core_types__either e2, kk_context_t* _ctx); /* (e1 : either<exception,value>, e2 : either<exception,value>) -> bool */ 

static inline kk_std_core_types__list kk_interpret_extend(kk_std_core_types__list prev, kk_std_core_types__tuple2 kkloc_new, kk_context_t* _ctx) { /* (prev : env, new : (string, value)) -> env */ 
  kk_std_core_types__list _x_x256 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__tuple2_box(kkloc_new, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  return kk_std_core_list_append(prev, _x_x256, _ctx);
}

kk_interpret__computation kk_interpret__mlift_apply_10049(kk_function_t c, kk_interpret__computation _y_x10007, kk_context_t* _ctx); /* (c : cont, computation) -> <div,exn,console/console> computation */ 

kk_interpret__computation kk_interpret__mlift_eval_10050_sq_(kk_function_t c_0, kk_string_t i, kk_std_core_types__maybe _y_x10014, kk_context_t* _ctx); /* (c@0 : cont, i : string, maybe<(string, value)>) -> <console/console,div,exn> computation */ 

kk_interpret__computation kk_interpret__mlift_eval_10051_sq_(kk_function_t c_0_0, kk_interpret__value e_3, kk_std_core_types__list env_0, kk_function_t k_sq_, kk_std_core_types__maybe _y_x10027, kk_context_t* _ctx); /* (c@0 : cont, e@3 : value, env@0 : env, k' : (value) -> <div,exn,console/console> computation, maybe<hanop>) -> <console/console,div,exn> computation */ 

kk_interpret__computation kk_interpret__mlift_eval_10052_sq_(kk_function_t c_0_1, kk_std_core_types__list env_0_0, kk_std_core_types__list hs, kk_interpret__computation e_0_sq_, kk_context_t* _ctx); /* (c@0 : cont, env@0 : env, hs : list<(string, hanop)>, e@0' : computation) -> <div,exn,console/console> computation */ 

kk_interpret__computation kk_interpret_apply(kk_interpret__value f, kk_interpret__value arg, kk_function_t c_1, kk_context_t* _ctx); /* (f : value, arg : value, c : cont) -> <pure,console/console> computation */ 

kk_interpret__computation kk_interpret_eval_sq_(kk_interpret__expr e, kk_std_core_types__list env_0_1, kk_function_t c_0_2, kk_context_t* _ctx); /* (e : expr, env : env, c : cont) -> <pure,console/console> computation */ 


// lift anonymous function
struct kk_interpret_eval_fun390__t {
  struct kk_function_s _base;
};
extern kk_interpret__computation kk_interpret_eval_fun390(kk_function_t _fself, kk_interpret__value x, kk_context_t* _ctx);
static inline kk_function_t kk_interpret_new_eval_fun390(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun390, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_interpret__computation kk_interpret_eval(kk_interpret__expr e, kk_context_t* _ctx) { /* (e : expr) -> <pure,console/console> computation */ 
  return kk_interpret_eval_sq_(e, kk_std_core_types__new_Nil(_ctx), kk_interpret_new_eval_fun390(_ctx), _ctx);
}

kk_std_core_types__either kk_interpret_run(kk_interpret__expr e, kk_context_t* _ctx); /* (e : expr) -> <console/console,div> either<exception,computation> */ 

void kk_interpret__init(kk_context_t* _ctx);


void kk_interpret__done(kk_context_t* _ctx);

#endif // header
