#pragma once
#ifndef kk_expr_H
#define kk_expr_H
// Koka generated module: expr, koka version: 3.1.2, platform: 64-bit
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
#include "value.h"

// type declarations

// type expr/expr
struct kk_expr__expr_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_expr__expr;
struct kk_expr_App {
  struct kk_expr__expr_s _base;
  kk_expr__expr e1;
  kk_expr__expr e2;
};
struct kk_expr_Let {
  struct kk_expr__expr_s _base;
  kk_string_t x;
  kk_expr__expr e1;
  kk_expr__expr e2;
};
struct kk_expr_Lam {
  struct kk_expr__expr_s _base;
  kk_string_t a;
  kk_expr__expr body;
};
struct kk_expr_Lit {
  struct kk_expr__expr_s _base;
  kk_value__value v;
};
struct kk_expr_Var {
  struct kk_expr__expr_s _base;
  kk_string_t x;
};
static inline kk_expr__expr kk_expr__base_Lit(struct kk_expr_Lit* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__expr kk_expr__new_Lit(kk_reuse_t _at, int32_t _cpath, kk_value__value v, kk_context_t* _ctx) {
  struct kk_expr_Lit* _con = kk_block_alloc_at_as(struct kk_expr_Lit, _at, 1 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->v = v;
  return kk_expr__base_Lit(_con, _ctx);
}
static inline struct kk_expr_Lit* kk_expr__as_Lit(kk_expr__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_Lit*, x, (kk_tag_t)(4), _ctx);
}
static inline kk_expr__expr kk_expr__base_Var(struct kk_expr_Var* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__expr kk_expr__new_Var(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_context_t* _ctx) {
  struct kk_expr_Var* _con = kk_block_alloc_at_as(struct kk_expr_Var, _at, 1 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->x = x;
  return kk_expr__base_Var(_con, _ctx);
}
static inline struct kk_expr_Var* kk_expr__as_Var(kk_expr__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_Var*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_expr__expr kk_expr__base_App(struct kk_expr_App* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__expr kk_expr__new_App(kk_reuse_t _at, int32_t _cpath, kk_expr__expr e1, kk_expr__expr e2, kk_context_t* _ctx) {
  struct kk_expr_App* _con = kk_block_alloc_at_as(struct kk_expr_App, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_expr__base_App(_con, _ctx);
}
static inline struct kk_expr_App* kk_expr__as_App(kk_expr__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_App*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_expr__expr kk_expr__base_Lam(struct kk_expr_Lam* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__expr kk_expr__new_Lam(kk_reuse_t _at, int32_t _cpath, kk_string_t a, kk_expr__expr body, kk_context_t* _ctx) {
  struct kk_expr_Lam* _con = kk_block_alloc_at_as(struct kk_expr_Lam, _at, 2 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->a = a;
  _con->body = body;
  return kk_expr__base_Lam(_con, _ctx);
}
static inline struct kk_expr_Lam* kk_expr__as_Lam(kk_expr__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_Lam*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_expr__expr kk_expr__base_Let(struct kk_expr_Let* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__expr kk_expr__new_Let(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_expr__expr e1, kk_expr__expr e2, kk_context_t* _ctx) {
  struct kk_expr_Let* _con = kk_block_alloc_at_as(struct kk_expr_Let, _at, 3 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->x = x;
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_expr__base_Let(_con, _ctx);
}
static inline struct kk_expr_Let* kk_expr__as_Let(kk_expr__expr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_Let*, x, (kk_tag_t)(2), _ctx);
}
static inline bool kk_expr__is_Lit(kk_expr__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_expr__is_Var(kk_expr__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_expr__is_App(kk_expr__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_expr__is_Lam(kk_expr__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_expr__is_Let(kk_expr__expr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline kk_expr__expr kk_expr__expr_dup(kk_expr__expr _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_expr__expr_drop(kk_expr__expr _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_expr__expr_box(kk_expr__expr _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_expr__expr kk_expr__expr_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type expr/uexpr
struct kk_expr__uexpr_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_expr__uexpr;
struct kk_expr_UApp {
  struct kk_expr__uexpr_s _base;
  kk_expr__uexpr e1;
  kk_expr__uexpr e2;
};
struct kk_expr_ULet {
  struct kk_expr__uexpr_s _base;
  kk_string_t x;
  kk_expr__uexpr e1;
  kk_expr__uexpr e2;
};
struct kk_expr_ULam {
  struct kk_expr__uexpr_s _base;
  kk_string_t a;
  kk_expr__uexpr body;
};
struct kk_expr_ULit {
  struct kk_expr__uexpr_s _base;
  kk_value__value v;
};
struct kk_expr_UVar {
  struct kk_expr__uexpr_s _base;
  kk_string_t x;
};
static inline kk_expr__uexpr kk_expr__base_ULit(struct kk_expr_ULit* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__uexpr kk_expr__new_ULit(kk_reuse_t _at, int32_t _cpath, kk_value__value v, kk_context_t* _ctx) {
  struct kk_expr_ULit* _con = kk_block_alloc_at_as(struct kk_expr_ULit, _at, 1 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->v = v;
  return kk_expr__base_ULit(_con, _ctx);
}
static inline struct kk_expr_ULit* kk_expr__as_ULit(kk_expr__uexpr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_ULit*, x, (kk_tag_t)(4), _ctx);
}
static inline kk_expr__uexpr kk_expr__base_UVar(struct kk_expr_UVar* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__uexpr kk_expr__new_UVar(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_context_t* _ctx) {
  struct kk_expr_UVar* _con = kk_block_alloc_at_as(struct kk_expr_UVar, _at, 1 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->x = x;
  return kk_expr__base_UVar(_con, _ctx);
}
static inline struct kk_expr_UVar* kk_expr__as_UVar(kk_expr__uexpr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_UVar*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_expr__uexpr kk_expr__base_UApp(struct kk_expr_UApp* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__uexpr kk_expr__new_UApp(kk_reuse_t _at, int32_t _cpath, kk_expr__uexpr e1, kk_expr__uexpr e2, kk_context_t* _ctx) {
  struct kk_expr_UApp* _con = kk_block_alloc_at_as(struct kk_expr_UApp, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_expr__base_UApp(_con, _ctx);
}
static inline struct kk_expr_UApp* kk_expr__as_UApp(kk_expr__uexpr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_UApp*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_expr__uexpr kk_expr__base_ULam(struct kk_expr_ULam* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__uexpr kk_expr__new_ULam(kk_reuse_t _at, int32_t _cpath, kk_string_t a, kk_expr__uexpr body, kk_context_t* _ctx) {
  struct kk_expr_ULam* _con = kk_block_alloc_at_as(struct kk_expr_ULam, _at, 2 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->a = a;
  _con->body = body;
  return kk_expr__base_ULam(_con, _ctx);
}
static inline struct kk_expr_ULam* kk_expr__as_ULam(kk_expr__uexpr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_ULam*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_expr__uexpr kk_expr__base_ULet(struct kk_expr_ULet* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__uexpr kk_expr__new_ULet(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_expr__uexpr e1, kk_expr__uexpr e2, kk_context_t* _ctx) {
  struct kk_expr_ULet* _con = kk_block_alloc_at_as(struct kk_expr_ULet, _at, 3 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->x = x;
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_expr__base_ULet(_con, _ctx);
}
static inline struct kk_expr_ULet* kk_expr__as_ULet(kk_expr__uexpr x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr_ULet*, x, (kk_tag_t)(2), _ctx);
}
static inline bool kk_expr__is_ULit(kk_expr__uexpr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_expr__is_UVar(kk_expr__uexpr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_expr__is_UApp(kk_expr__uexpr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_expr__is_ULam(kk_expr__uexpr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_expr__is_ULet(kk_expr__uexpr x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline kk_expr__uexpr kk_expr__uexpr_dup(kk_expr__uexpr _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_expr__uexpr_drop(kk_expr__uexpr _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_expr__uexpr_box(kk_expr__uexpr _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_expr__uexpr kk_expr__uexpr_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type expr/unique
struct kk_expr__unique_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_expr__unique;
struct kk_expr__Hnd_unique {
  struct kk_expr__unique_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause0 _fun_gen;
};
static inline kk_expr__unique kk_expr__base_Hnd_unique(struct kk_expr__Hnd_unique* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_expr__unique kk_expr__new_Hnd_unique(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause0 _fun_gen, kk_context_t* _ctx) {
  struct kk_expr__Hnd_unique* _con = kk_block_alloc_at_as(struct kk_expr__Hnd_unique, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_gen = _fun_gen;
  return kk_expr__base_Hnd_unique(_con, _ctx);
}
static inline struct kk_expr__Hnd_unique* kk_expr__as_Hnd_unique(kk_expr__unique x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_expr__Hnd_unique*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_expr__is_Hnd_unique(kk_expr__unique x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_expr__unique kk_expr__unique_dup(kk_expr__unique _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_expr__unique_drop(kk_expr__unique _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_expr__unique_box(kk_expr__unique _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_expr__unique kk_expr__unique_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Tests for the `App` constructor of the `:expr` type.

static inline bool kk_expr_is_app(kk_expr__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_expr__is_App(expr, _ctx)) {
    struct kk_expr_App* _con_x305 = kk_expr__as_App(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Let` constructor of the `:expr` type.

static inline bool kk_expr_is_let(kk_expr__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_expr__is_Let(expr, _ctx)) {
    struct kk_expr_Let* _con_x306 = kk_expr__as_Let(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Lam` constructor of the `:expr` type.

static inline bool kk_expr_is_lam(kk_expr__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_expr__is_Lam(expr, _ctx)) {
    struct kk_expr_Lam* _con_x307 = kk_expr__as_Lam(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Lit` constructor of the `:expr` type.

static inline bool kk_expr_is_lit(kk_expr__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_expr__is_Lit(expr, _ctx)) {
    struct kk_expr_Lit* _con_x308 = kk_expr__as_Lit(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Var` constructor of the `:expr` type.

static inline bool kk_expr_is_var(kk_expr__expr expr, kk_context_t* _ctx) { /* (expr : expr) -> bool */ 
  if (kk_expr__is_Var(expr, _ctx)) {
    struct kk_expr_Var* _con_x309 = kk_expr__as_Var(expr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `UApp` constructor of the `:uexpr` type.

static inline bool kk_expr_is_uapp(kk_expr__uexpr uexpr, kk_context_t* _ctx) { /* (uexpr : uexpr) -> bool */ 
  if (kk_expr__is_UApp(uexpr, _ctx)) {
    struct kk_expr_UApp* _con_x310 = kk_expr__as_UApp(uexpr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ULet` constructor of the `:uexpr` type.

static inline bool kk_expr_is_ulet(kk_expr__uexpr uexpr, kk_context_t* _ctx) { /* (uexpr : uexpr) -> bool */ 
  if (kk_expr__is_ULet(uexpr, _ctx)) {
    struct kk_expr_ULet* _con_x311 = kk_expr__as_ULet(uexpr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ULam` constructor of the `:uexpr` type.

static inline bool kk_expr_is_ulam(kk_expr__uexpr uexpr, kk_context_t* _ctx) { /* (uexpr : uexpr) -> bool */ 
  if (kk_expr__is_ULam(uexpr, _ctx)) {
    struct kk_expr_ULam* _con_x312 = kk_expr__as_ULam(uexpr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ULit` constructor of the `:uexpr` type.

static inline bool kk_expr_is_ulit(kk_expr__uexpr uexpr, kk_context_t* _ctx) { /* (uexpr : uexpr) -> bool */ 
  if (kk_expr__is_ULit(uexpr, _ctx)) {
    struct kk_expr_ULit* _con_x313 = kk_expr__as_ULit(uexpr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `UVar` constructor of the `:uexpr` type.

static inline bool kk_expr_is_uvar(kk_expr__uexpr uexpr, kk_context_t* _ctx) { /* (uexpr : uexpr) -> bool */ 
  if (kk_expr__is_UVar(uexpr, _ctx)) {
    struct kk_expr_UVar* _con_x314 = kk_expr__as_UVar(uexpr, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:unique` type.

static inline kk_integer_t kk_expr_unique_fs__cfc(kk_expr__unique unique, kk_context_t* _ctx) { /* forall<e,a> (unique : unique<e,a>) -> int */ 
  {
    struct kk_expr__Hnd_unique* _con_x315 = kk_expr__as_Hnd_unique(unique, _ctx);
    kk_integer_t _x = _con_x315->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-gen` constructor field of the `:unique` type.

static inline kk_std_core_hnd__clause0 kk_expr_unique_fs__fun_gen(kk_expr__unique unique, kk_context_t* _ctx) { /* forall<e,a> (unique : unique<e,a>) -> hnd/clause0<int,unique,e,a> */ 
  {
    struct kk_expr__Hnd_unique* _con_x316 = kk_expr__as_Hnd_unique(unique, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x316->_fun_gen;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}

kk_string_t kk_expr_show(kk_expr__uexpr e, kk_context_t* _ctx); /* (e : uexpr) -> div string */ 

extern kk_std_core_hnd__htag kk_expr__tag_unique;

kk_box_t kk_expr__handle_unique(kk_expr__unique hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : unique<e,b>, ret : (res : a) -> e b, action : () -> <unique|e> a) -> e b */ 
 
// select `gen` operation out of effect `:unique`

static inline kk_std_core_hnd__clause0 kk_expr__select_gen(kk_expr__unique hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : unique<e,a>) -> hnd/clause0<int,unique,e,a> */ 
  {
    struct kk_expr__Hnd_unique* _con_x355 = kk_expr__as_Hnd_unique(hnd, _ctx);
    kk_std_core_hnd__clause0 _fun_gen = _con_x355->_fun_gen;
    return kk_std_core_hnd__clause0_dup(_fun_gen, _ctx);
  }
}
 
// Call the `fun gen` operation of the effect `:unique`

static inline kk_integer_t kk_expr_gen(kk_context_t* _ctx) { /* () -> unique int */ 
  kk_std_core_hnd__ev ev_10059 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<expr/unique>*/;
  kk_box_t _x_x356;
  {
    struct kk_std_core_hnd_Ev* _con_x357 = kk_std_core_hnd__as_Ev(ev_10059, _ctx);
    kk_box_t _box_x8 = _con_x357->hnd;
    int32_t m = _con_x357->marker;
    kk_expr__unique h = kk_expr__unique_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_expr__unique_dup(h, _ctx);
    {
      struct kk_expr__Hnd_unique* _con_x358 = kk_expr__as_Hnd_unique(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x358->_cfc;
      kk_std_core_hnd__clause0 _fun_gen = _con_x358->_fun_gen;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_gen, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x11 = _fun_gen.clause;
        _x_x356 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x11, (_fun_unbox_x11, m, ev_10059, _ctx), _ctx); /*1005*/
      }
    }
  }
  return kk_integer_unbox(_x_x356, _ctx);
}
 
// monadic lift

static inline kk_integer_t kk_expr__mlift_handle_unique_10049(kk_ref_t unique_num, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,e> (unique-num : local-var<h,int>, wild_ : ()) -> <local<h>|e> int */ 
  kk_box_t _x_x359 = kk_ref_get(unique_num,kk_context()); /*1000*/
  return kk_integer_unbox(_x_x359, _ctx);
}

kk_integer_t kk_expr__mlift_handle_unique_10050(kk_ref_t unique_num, kk_integer_t _y_x10013, kk_context_t* _ctx); /* forall<h,e> (unique-num : local-var<h,int>, int) -> <local<h>|e> int */ 

kk_box_t kk_expr_handle_unique(kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (f : () -> <unique|e> a) -> e a */ 
 
// monadic lift

static inline kk_string_t kk_expr__mlift_uid_10051(kk_string_t x, kk_integer_t _y_x10020, kk_context_t* _ctx) { /* (x : string, int) -> unique string */ 
  kk_string_t _x_x374;
  kk_define_string_literal(, _s_x375, 1, "$", _ctx)
  _x_x374 = kk_string_dup(_s_x375, _ctx); /*string*/
  kk_string_t _x_x376;
  kk_string_t _x_x377 = kk_std_core_int_show(_y_x10020, _ctx); /*string*/
  _x_x376 = kk_std_core_types__lp__plus__plus__rp_(x, _x_x377, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x374, _x_x376, _ctx);
}

kk_string_t kk_expr_uid(kk_string_t x, kk_context_t* _ctx); /* (x : string) -> unique string */ 

static inline kk_std_core_types__list kk_expr__lp__plus__dash__gt__rp_(kk_string_t id, kk_string_t uid_0, kk_context_t* _ctx) { /* (id : string, uid : string) -> list<(string, string)> */ 
  kk_box_t _x_x392;
  kk_std_core_types__tuple2 _x_x393 = kk_std_core_types__new_Tuple2(kk_string_box(id), kk_string_box(uid_0), _ctx); /*(3119, 3120)*/
  _x_x392 = kk_std_core_types__tuple2_box(_x_x393, _ctx); /*1024*/
  return kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x392, kk_std_core_types__new_Nil(_ctx), _ctx);
}

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10052_sq_(kk_std_core_types__cctx _acc, kk_expr__expr e2, kk_std_core_types__list us, kk_expr__uexpr _trmc_x10003, kk_context_t* _ctx); /* (ctx<uexpr>, e2 : expr, us : usubst, uexpr) -> <exn,unique,div> uexpr */ 

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10053_sq_(kk_std_core_types__cctx _acc_0, kk_expr__expr e2_0, kk_std_core_types__list us_sq_, kk_string_t x_sq_, kk_expr__uexpr _trmc_x10006, kk_context_t* _ctx); /* (ctx<uexpr>, e2@0 : expr, us' : list<(string, uid)>, x' : string, uexpr) -> <exn,unique,div> uexpr */ 

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10054_sq_(kk_std_core_types__cctx _acc_1, kk_expr__expr e1_0, kk_expr__expr e2_0_0, kk_std_core_types__list us_0, kk_string_t x, kk_string_t x_0_sq_, kk_context_t* _ctx); /* (ctx<uexpr>, e1@0 : expr, e2@0 : expr, us : usubst, x : string, x' : string) -> <unique,div,exn> uexpr */ 

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10055_sq_(kk_std_core_types__cctx _acc_2, kk_string_t a, kk_expr__expr body, kk_std_core_types__list us_1, kk_string_t a_sq_, kk_context_t* _ctx); /* (ctx<uexpr>, a : string, body : expr, us : usubst, a' : string) -> <unique,div,exn> uexpr */ 

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10056_sq_(kk_std_core_types__cctx _acc_3, kk_expr__uexpr _y_x10030, kk_context_t* _ctx); /* (ctx<uexpr>, uexpr) -> <exn,div,unique> uexpr */ 

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10057_sq_(kk_std_core_types__cctx _acc_4, kk_string_t x_0_0, kk_std_core_types__list _y_x10029, kk_context_t* _ctx); /* (ctx<uexpr>, x@0 : string, list<(string, uid)>) -> <exn,div,unique> uexpr */ 

kk_expr__uexpr kk_expr__trmc_uniquify_sq_(kk_expr__expr e, kk_std_core_types__list us_2, kk_std_core_types__cctx _acc_5, kk_context_t* _ctx); /* (e : expr, us : usubst, ctx<uexpr>) -> <pure,unique> uexpr */ 

kk_expr__uexpr kk_expr_uniquify_sq_(kk_expr__expr e_0, kk_std_core_types__list us_3, kk_context_t* _ctx); /* (e : expr, us : usubst) -> <pure,unique> uexpr */ 

kk_std_core_types__either kk_expr_uniquify(kk_expr__expr e, kk_context_t* _ctx); /* (e : expr) -> div either<exception,uexpr> */ 

void kk_expr__init(kk_context_t* _ctx);


void kk_expr__done(kk_context_t* _ctx);

#endif // header
