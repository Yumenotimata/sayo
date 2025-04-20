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
  kk_std_core_hnd__clause1 _fun_test_append;
};
static inline kk_etest__test kk_etest__base_Hnd_test(struct kk_etest__Hnd_test* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_etest__test kk_etest__new_Hnd_test(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _fun_test_append, kk_context_t* _ctx) {
  struct kk_etest__Hnd_test* _con = kk_block_alloc_at_as(struct kk_etest__Hnd_test, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_test_append = _fun_test_append;
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

// value declarations
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test` type.

static inline kk_integer_t kk_etest_test_fs__cfc(kk_etest__test test, kk_context_t* _ctx) { /* forall<e,e1,a> (test : test<e,e1,a>) -> int */ 
  {
    struct kk_etest__Hnd_test* _con_x134 = kk_etest__as_Hnd_test(test, _ctx);
    kk_integer_t _x = _con_x134->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-test-append` constructor field of the `:test` type.

static inline kk_std_core_hnd__clause1 kk_etest_test_fs__fun_test_append(kk_etest__test test, kk_context_t* _ctx) { /* forall<e,e1,a,b> (test : test<e,e1,a>) -> hnd/clause1<(() -> e b, () -> e b, (b, b) -> bool, (b) -> string),(),test<e>,e1,a> */ 
  {
    struct kk_etest__Hnd_test* _con_x135 = kk_etest__as_Hnd_test(test, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x135->_fun_test_append;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}

extern kk_std_core_hnd__htag kk_etest__tag_test;

kk_box_t kk_etest__handle_test(kk_etest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<e,a,e1,b> (hnd : test<e,e1,b>, ret : (res : a) -> e1 b, action : () -> <test<e>|e1> a) -> e1 b */ 
 
// select `test-append` operation out of effect `:test`

static inline kk_std_core_hnd__clause1 kk_etest__select_test_append(kk_etest__test hnd, kk_context_t* _ctx) { /* forall<e,a,e1,b> (hnd : test<e,e1,b>) -> hnd/clause1<(() -> e a, () -> e a, (a, a) -> bool, (a) -> string),(),test<e>,e1,b> */ 
  {
    struct kk_etest__Hnd_test* _con_x139 = kk_etest__as_Hnd_test(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_test_append = _con_x139->_fun_test_append;
    return kk_std_core_hnd__clause1_dup(_fun_test_append, _ctx);
  }
}
 
// Call the `fun test-append` operation of the effect `:test`


// lift anonymous function
struct kk_etest_test_append_fun141__t {
  struct kk_function_s _base;
};
extern kk_std_core_hnd__clause1 kk_etest_test_append_fun141(kk_function_t _fself, kk_box_t _b_x14, kk_context_t* _ctx);
static inline kk_function_t kk_etest_new_test_append_fun141(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_test_append_fun141, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_etest_test_append_fun142__t {
  struct kk_function_s _base;
  kk_function_t eq;
};
extern kk_box_t kk_etest_test_append_fun142(kk_function_t _fself, kk_box_t _b_x20, kk_box_t _b_x21, kk_context_t* _ctx);
static inline kk_function_t kk_etest_new_test_append_fun142(kk_function_t eq, kk_context_t* _ctx) {
  struct kk_etest_test_append_fun142__t* _self = kk_function_alloc_as(struct kk_etest_test_append_fun142__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_test_append_fun142, kk_context());
  _self->eq = eq;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_etest_test_append_fun144__t {
  struct kk_function_s _base;
  kk_function_t show;
};
extern kk_box_t kk_etest_test_append_fun144(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static inline kk_function_t kk_etest_new_test_append_fun144(kk_function_t show, kk_context_t* _ctx) {
  struct kk_etest_test_append_fun144__t* _self = kk_function_alloc_as(struct kk_etest_test_append_fun144__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_test_append_fun144, kk_context());
  _self->show = show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_unit_t kk_etest_test_append(kk_function_t f, kk_function_t g, kk_function_t eq, kk_function_t show, kk_context_t* _ctx) { /* forall<e,a> (f : () -> e a, g : () -> e a, eq : (a, a) -> bool, show : (a) -> string) -> (test<e>) () */ 
  kk_std_core_hnd__ev _b_x8_25 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<etest/test<358>>*/;
  kk_box_t _x_x140 = kk_std_core_hnd__perform4(_b_x8_25, kk_etest_new_test_append_fun141(_ctx), kk_function_box(f, _ctx), kk_function_box(g, _ctx), kk_function_box(kk_etest_new_test_append_fun142(eq, _ctx), _ctx), kk_function_box(kk_etest_new_test_append_fun144(show, _ctx), _ctx), _ctx); /*1004*/
  kk_unit_unbox(_x_x140); return kk_Unit;
}

kk_unit_t kk_etest_assert_eq(kk_function_t f, kk_function_t g, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a,e> (f : () -> e a, g : () -> e a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> (test<e>) () */ 

kk_unit_t kk_etest_run_test(kk_function_t tests, kk_context_t* _ctx); /* (tests : forall<e> () -> (test<e>) ()) -> console/console () */ 

void kk_etest__init(kk_context_t* _ctx);


void kk_etest__done(kk_context_t* _ctx);

#endif // header
