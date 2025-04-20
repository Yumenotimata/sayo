// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"


// lift anonymous function
struct kk_main_tests_fun27__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_tests_fun27(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_tests_fun27(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_tests_fun27, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_tests_fun32__t {
  struct kk_function_s _base;
  kk_ssize_t i_10001;
};
static kk_box_t kk_main_tests_fun32(kk_function_t _fself, kk_function_t _b_x5, kk_box_t _b_x6, kk_context_t* _ctx);
static kk_function_t kk_main_new_tests_fun32(kk_ssize_t i_10001, kk_context_t* _ctx) {
  struct kk_main_tests_fun32__t* _self = kk_function_alloc_as(struct kk_main_tests_fun32__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_tests_fun32, kk_context());
  _self->i_10001 = i_10001;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_main_tests_fun33__t {
  struct kk_function_s _base;
  kk_function_t _b_x5;
};
static kk_unit_t kk_main_tests_fun33(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_main_new_tests_fun33(kk_function_t _b_x5, kk_context_t* _ctx) {
  struct kk_main_tests_fun33__t* _self = kk_function_alloc_as(struct kk_main_tests_fun33__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_tests_fun33, kk_context());
  _self->_b_x5 = _b_x5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main_tests_fun33(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  struct kk_main_tests_fun33__t* _self = kk_function_as(struct kk_main_tests_fun33__t*, _fself, _ctx);
  kk_function_t _b_x5 = _self->_b_x5; /* (1003) -> 3003 3002 */
  kk_drop_match(_self, {kk_function_dup(_b_x5, _ctx);}, {}, _ctx)
  kk_box_t _x_x34 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x5, (_b_x5, _b_x7, _ctx), _ctx); /*3002*/
  kk_unit_unbox(_x_x34); return kk_Unit;
}


// lift anonymous function
struct kk_main_tests_fun35__t {
  struct kk_function_s _base;
  kk_function_t _b_x1_15;
};
static kk_box_t kk_main_tests_fun35(kk_function_t _fself, kk_box_t _b_x3, kk_context_t* _ctx);
static kk_function_t kk_main_new_tests_fun35(kk_function_t _b_x1_15, kk_context_t* _ctx) {
  struct kk_main_tests_fun35__t* _self = kk_function_alloc_as(struct kk_main_tests_fun35__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_tests_fun35, kk_context());
  _self->_b_x1_15 = _b_x1_15;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_tests_fun35(kk_function_t _fself, kk_box_t _b_x3, kk_context_t* _ctx) {
  struct kk_main_tests_fun35__t* _self = kk_function_as(struct kk_main_tests_fun35__t*, _fself, _ctx);
  kk_function_t _b_x1_15 = _self->_b_x1_15; /* (1009) -> <div,utest/test-suite<19>|20> () */
  kk_drop_match(_self, {kk_function_dup(_b_x1_15, _ctx);}, {}, _ctx)
  kk_unit_t _x_x36 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x1_15, (_b_x1_15, _b_x3, _ctx), _ctx);
  return kk_unit_box(_x_x36);
}
static kk_box_t kk_main_tests_fun32(kk_function_t _fself, kk_function_t _b_x5, kk_box_t _b_x6, kk_context_t* _ctx) {
  struct kk_main_tests_fun32__t* _self = kk_function_as(struct kk_main_tests_fun32__t*, _fself, _ctx);
  kk_ssize_t i_10001 = _self->i_10001; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10001, _ctx);}, {}, _ctx)
  kk_function_t cont_17 = kk_main_new_tests_fun33(_b_x5, _ctx); /*(1009) -> <div,utest/test-suite<19>|20> ()*/;
  kk_box_t res_18 = _b_x6; /*1009*/;
  kk_ssize_t _b_x0_14 = i_10001; /*hnd/ev-index*/;
  kk_function_t _b_x1_15 = cont_17; /*(1009) -> <div,utest/test-suite<19>|20> ()*/;
  kk_box_t _b_x2_16 = res_18; /*1009*/;
  return kk_std_core_hnd_open_at1(_b_x0_14, kk_main_new_tests_fun35(_b_x1_15, _ctx), _b_x2_16, _ctx);
}
static kk_box_t kk_main_tests_fun27(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t i_10001;
  kk_std_core_hnd__htag _x_x28 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_suite, _ctx); /*forall<a> hnd/htag<utest/test-suite<a>>*/
  i_10001 = kk_std_core_hnd__evv_index(_x_x28, _ctx); /*hnd/ev-index*/
  kk_evv_t w = kk_evv_swap_create1(i_10001,kk_context()); /*hnd/evv<<div,utest/test-suite<19>|20>>*/;
  kk_unit_t y = kk_Unit;
  kk_function_t _x_x29 = kk_function_dup(kk_interpret_interpret_tests, _ctx); /*forall<a> () -> <div,utest/test-suite<a>> ()*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _x_x29, (_x_x29, _ctx), _ctx);
  kk_evv_set(w,kk_context());
  kk_unit_t _x_x30 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x31 = kk_std_core_hnd_yield_cont(kk_main_new_tests_fun32(i_10001, _ctx), _ctx); /*3004*/
    kk_unit_unbox(_x_x31);
  }
  else {
    y;
  }
  return kk_unit_box(_x_x30);
}

kk_std_core_types__list kk_main_tests;


// lift anonymous function
struct kk_main_main_fun38__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun38(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun38(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun38, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun40__t {
  struct kk_function_s _base;
  kk_box_t _b_x21;
};
static kk_unit_t kk_main_main_fun40(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun40(kk_box_t _b_x21, kk_context_t* _ctx) {
  struct kk_main_main_fun40__t* _self = kk_function_alloc_as(struct kk_main_main_fun40__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun40, kk_context());
  _self->_b_x21 = _b_x21;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main_main_fun40(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_main_fun40__t* _self = kk_function_as(struct kk_main_main_fun40__t*, _fself, _ctx);
  kk_box_t _b_x21 = _self->_b_x21; /* 1001 */
  kk_drop_match(_self, {kk_box_dup(_b_x21, _ctx);}, {}, _ctx)
  kk_box_t _x_x41;
  kk_function_t _x_x42 = kk_function_unbox(_b_x21, _ctx); /*() -> <div,utest/test-suite<_56>> 22*/
  _x_x41 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x42, (_x_x42, _ctx), _ctx); /*22*/
  kk_unit_unbox(_x_x41); return kk_Unit;
}
static kk_box_t kk_main_main_fun38(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x39 = kk_Unit;
  kk_utest_run_utest(kk_main_new_main_fun40(_b_x21, _ctx), _ctx);
  return kk_unit_box(_x_x39);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_std_core_types__list __;
  kk_std_core_types__list _x_x37 = kk_std_core_types__list_dup(kk_main_tests, _ctx); /*forall<a,e> list<() -> <div,utest/test-suite<a>|e> ()>*/
  __ = kk_std_core_list_map(_x_x37, kk_main_new_main_fun38(_ctx), _ctx); /*list<()>*/
  kk_std_core_types__list_drop(__, _ctx);
  kk_Unit; return kk_Unit;
}

// initialization
void kk_main__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  kk_utest__init(_ctx);
  kk_interpret__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_main_tests = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_main_new_tests_fun27(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*forall<a,e> list<() -> <div,utest/test-suite<a>|e> ()>*/
  }
}

// termination
void kk_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_types__list_drop(kk_main_tests, _ctx);
  kk_interpret__done(_ctx);
  kk_utest__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
