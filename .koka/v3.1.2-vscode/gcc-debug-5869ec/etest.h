#pragma once
#ifndef kk_etest_H
#define kk_etest_H
// Koka generated module: etest, koka version: 3.1.2, platform: 64-bit
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
#include "std_core_maybe.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"
#include "std_core_list.h"

// type declarations

// type etest/test
struct kk_etest__test_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_etest__test;
struct kk_etest__Hnd_test {
  struct kk_etest__test_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause1 _fun_append;
};
static inline kk_etest__test kk_etest__base_Hnd_test(struct kk_etest__Hnd_test* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_etest__test kk_etest__new_Hnd_test(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _fun_append, kk_context_t* _ctx) {
  struct kk_etest__Hnd_test* _con = kk_block_alloc_at_as(struct kk_etest__Hnd_test, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_append = _fun_append;
  return kk_etest__base_Hnd_test(_con, _ctx);
}
static inline struct kk_etest__Hnd_test* kk_etest__as_Hnd_test(kk_etest__test x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_etest__Hnd_test*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_etest__is_Hnd_test(kk_etest__test x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_etest__test kk_etest__test_dup(kk_etest__test _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_etest__test_drop(kk_etest__test _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_etest__test_box(kk_etest__test _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_etest__test kk_etest__test_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type etest/test-case
struct kk_etest__test_case_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_etest__test_case;
struct kk_etest__Hnd_test_case {
  struct kk_etest__test_case_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause1 _fun_test_case_append;
};
static inline kk_etest__test_case kk_etest__base_Hnd_test_case(struct kk_etest__Hnd_test_case* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_etest__test_case kk_etest__new_Hnd_test_case(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _fun_test_case_append, kk_context_t* _ctx) {
  struct kk_etest__Hnd_test_case* _con = kk_block_alloc_at_as(struct kk_etest__Hnd_test_case, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_test_case_append = _fun_test_case_append;
  return kk_etest__base_Hnd_test_case(_con, _ctx);
}
static inline struct kk_etest__Hnd_test_case* kk_etest__as_Hnd_test_case(kk_etest__test_case x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_etest__Hnd_test_case*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_etest__is_Hnd_test_case(kk_etest__test_case x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_etest__test_case kk_etest__test_case_dup(kk_etest__test_case _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_etest__test_case_drop(kk_etest__test_case _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_etest__test_case_box(kk_etest__test_case _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_etest__test_case kk_etest__test_case_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test` type.

static inline kk_integer_t kk_etest_test_fs__cfc(kk_etest__test test_0, kk_context_t* _ctx) { /* forall<e,e1,a> (test : test<e,e1,a>) -> int */ 
  {
    struct kk_etest__Hnd_test* _con_x108 = kk_etest__as_Hnd_test(test_0, _ctx);
    kk_integer_t _x = _con_x108->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-append` constructor field of the `:test` type.

static inline kk_std_core_hnd__clause1 kk_etest_test_fs__fun_append(kk_etest__test test_0, kk_context_t* _ctx) { /* forall<e,e1,a> (test : test<e,e1,a>) -> hnd/clause1<() -> e bool,(),test<e>,e1,a> */ 
  {
    struct kk_etest__Hnd_test* _con_x109 = kk_etest__as_Hnd_test(test_0, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x109->_fun_append;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test-case` type.

static inline kk_integer_t kk_etest_test_case_fs__cfc(kk_etest__test_case _this, kk_context_t* _ctx) { /* forall<e,e1,a> (test-case<e,e1,a>) -> int */ 
  {
    struct kk_etest__Hnd_test_case* _con_x110 = kk_etest__as_Hnd_test_case(_this, _ctx);
    kk_integer_t _x = _con_x110->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-test-case-append` constructor field of the `:test-case` type.

static inline kk_std_core_hnd__clause1 kk_etest_test_case_fs__fun_test_case_append(kk_etest__test_case _this, kk_context_t* _ctx) { /* forall<e,e1,a> (test-case<e,e1,a>) -> hnd/clause1<() -> e bool,(),test-case<e>,e1,a> */ 
  {
    struct kk_etest__Hnd_test_case* _con_x111 = kk_etest__as_Hnd_test_case(_this, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x111->_fun_test_case_append;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}

extern kk_std_core_hnd__htag kk_etest__tag_test;

kk_box_t kk_etest__handle_test(kk_etest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<e,a,e1,b> (hnd : test<e,e1,b>, ret : (res : a) -> e1 b, action : () -> <test<e>|e1> a) -> e1 b */ 
 
// select `append` operation out of effect `:test`

static inline kk_std_core_hnd__clause1 kk_etest__select_append(kk_etest__test hnd, kk_context_t* _ctx) { /* forall<e,e1,a> (hnd : test<e,e1,a>) -> hnd/clause1<() -> e bool,(),test<e>,e1,a> */ 
  {
    struct kk_etest__Hnd_test* _con_x115 = kk_etest__as_Hnd_test(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_append = _con_x115->_fun_append;
    return kk_std_core_hnd__clause1_dup(_fun_append, _ctx);
  }
}
 
// Call the `fun append` operation of the effect `:test`


// lift anonymous function
struct kk_etest_append_fun119__t {
  struct kk_function_s _base;
  kk_function_t f;
};
extern kk_box_t kk_etest_append_fun119(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_etest_new_append_fun119(kk_function_t f, kk_context_t* _ctx) {
  struct kk_etest_append_fun119__t* _self = kk_function_alloc_as(struct kk_etest_append_fun119__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_append_fun119, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_unit_t kk_etest_append(kk_function_t f, kk_context_t* _ctx) { /* forall<e> (f : () -> e bool) -> (test<e>) () */ 
  kk_std_core_hnd__ev ev_10020 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<etest/test<413>>*/;
  kk_box_t _x_x116;
  {
    struct kk_std_core_hnd_Ev* _con_x117 = kk_std_core_hnd__as_Ev(ev_10020, _ctx);
    kk_box_t _box_x8 = _con_x117->hnd;
    int32_t m = _con_x117->marker;
    kk_etest__test h = kk_etest__test_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_etest__test_dup(h, _ctx);
    {
      struct kk_etest__Hnd_test* _con_x118 = kk_etest__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x118->_cfc;
      kk_std_core_hnd__clause1 _fun_append = _con_x118->_fun_append;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_append, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x13 = _fun_append.clause;
        _x_x116 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x13, (_fun_unbox_x13, m, ev_10020, kk_function_box(kk_etest_new_append_fun119(f, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  kk_unit_unbox(_x_x116); return kk_Unit;
}

extern kk_std_core_hnd__htag kk_etest__tag_test_case;

kk_box_t kk_etest__handle_test_case(kk_etest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<e,a,e1,b> (hnd : test-case<e,e1,b>, ret : (res : a) -> e1 b, action : () -> <test-case<e>|e1> a) -> e1 b */ 
 
// select `test-case-append` operation out of effect `:test-case`

static inline kk_std_core_hnd__clause1 kk_etest__select_test_case_append(kk_etest__test_case hnd, kk_context_t* _ctx) { /* forall<e,e1,a> (hnd : test-case<e,e1,a>) -> hnd/clause1<() -> e bool,(),test-case<e>,e1,a> */ 
  {
    struct kk_etest__Hnd_test_case* _con_x124 = kk_etest__as_Hnd_test_case(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_test_case_append = _con_x124->_fun_test_case_append;
    return kk_std_core_hnd__clause1_dup(_fun_test_case_append, _ctx);
  }
}
 
// Call the `fun test-case-append` operation of the effect `:test-case`


// lift anonymous function
struct kk_etest_test_case_append_fun128__t {
  struct kk_function_s _base;
  kk_function_t f;
};
extern kk_box_t kk_etest_test_case_append_fun128(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_etest_new_test_case_append_fun128(kk_function_t f, kk_context_t* _ctx) {
  struct kk_etest_test_case_append_fun128__t* _self = kk_function_alloc_as(struct kk_etest_test_case_append_fun128__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_test_case_append_fun128, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_unit_t kk_etest_test_case_append(kk_function_t f, kk_context_t* _ctx) { /* forall<e> (f : () -> e bool) -> (test-case<e>) () */ 
  kk_std_core_hnd__ev ev_10024 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<etest/test-case<565>>*/;
  kk_box_t _x_x125;
  {
    struct kk_std_core_hnd_Ev* _con_x126 = kk_std_core_hnd__as_Ev(ev_10024, _ctx);
    kk_box_t _box_x26 = _con_x126->hnd;
    int32_t m = _con_x126->marker;
    kk_etest__test_case h = kk_etest__test_case_unbox(_box_x26, KK_BORROWED, _ctx);
    kk_etest__test_case_dup(h, _ctx);
    {
      struct kk_etest__Hnd_test_case* _con_x127 = kk_etest__as_Hnd_test_case(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x127->_cfc;
      kk_std_core_hnd__clause1 _fun_test_case_append = _con_x127->_fun_test_case_append;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_test_case_append, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x31 = _fun_test_case_append.clause;
        _x_x125 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x31, (_fun_unbox_x31, m, ev_10024, kk_function_box(kk_etest_new_test_case_append_fun128(f, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  kk_unit_unbox(_x_x125); return kk_Unit;
}
 
// monadic lift

static inline bool kk_etest__mlift_assert_eq_10016(kk_box_t _y_x10006, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_box_t _y_x10007, kk_context_t* _ctx) { /* forall<a,e> (a, ?(==) : (a, a) -> bool, a) -> e bool */ 
  return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _y_x10006, _y_x10007, _ctx), _ctx);
}

bool kk_etest__mlift_assert_eq_10017(kk_function_t g, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_box_t _y_x10006, kk_context_t* _ctx); /* forall<a,e> (g : () -> e a, ?(==) : (a, a) -> bool, a) -> e bool */ 

kk_unit_t kk_etest_assert_eq(kk_function_t f, kk_function_t g, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,e> (f : () -> e a, g : () -> e a, ?(==) : (a, a) -> bool) -> (test<e>) () */ 

kk_unit_t kk_etest_test(kk_string_t name, kk_function_t tests, kk_context_t* _ctx); /* forall<e> (name : string, tests : () -> (test<e>) ()) -> (test-case<e>) () */ 
 
// monadic lift

static inline kk_unit_t kk_etest__mlift_run_test_10018(bool _y_x10011, kk_context_t* _ctx) { /* forall<e> (bool) -> <console/console|e> () */ 
  if (_y_x10011) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x157;
    kk_define_string_literal(, _s_x158, 7, "success", _ctx)
    _x_x157 = kk_string_dup(_s_x158, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x157, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

kk_unit_t kk_etest_run_test(kk_function_t cases, kk_context_t* _ctx); /* forall<e> (cases : () -> (test-case<<console/console|e>>) ()) -> <console/console|e> () */ 

void kk_etest__init(kk_context_t* _ctx);


void kk_etest__done(kk_context_t* _ctx);

#endif // header
