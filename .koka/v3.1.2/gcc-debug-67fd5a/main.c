// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"


// lift anonymous function
struct kk_main_tests_fun16__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_tests_fun16(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_tests_fun16(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_tests_fun16, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_tests_fun18__t {
  struct kk_function_s _base;
  kk_function_t _b_x1_8;
};
static kk_box_t kk_main_tests_fun18(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_tests_fun18(kk_function_t _b_x1_8, kk_context_t* _ctx) {
  struct kk_main_tests_fun18__t* _self = kk_function_alloc_as(struct kk_main_tests_fun18__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_tests_fun18, kk_context());
  _self->_b_x1_8 = _b_x1_8;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_tests_fun18(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_tests_fun18__t* _self = kk_function_as(struct kk_main_tests_fun18__t*, _fself, _ctx);
  kk_function_t _b_x1_8 = _self->_b_x1_8; /* () -> <div,utest/test-suite<19>> () */
  kk_drop_match(_self, {kk_function_dup(_b_x1_8, _ctx);}, {}, _ctx)
  kk_unit_t _x_x19 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x1_8, (_b_x1_8, _ctx), _ctx);
  return kk_unit_box(_x_x19);
}
static kk_box_t kk_main_tests_fun16(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t _b_x0_7;
  kk_std_core_hnd__htag _x_x17 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_suite, _ctx); /*forall<a> hnd/htag<utest/test-suite<a>>*/
  _b_x0_7 = kk_std_core_hnd__evv_index(_x_x17, _ctx); /*hnd/ev-index*/
  kk_function_t _b_x1_8 = kk_function_dup(kk_interpret_interpret_tests, _ctx); /*() -> <div,utest/test-suite<19>> ()*/;
  return kk_std_core_hnd__open_at0(_b_x0_7, kk_main_new_tests_fun18(_b_x1_8, _ctx), _ctx);
}

kk_std_core_types__list kk_main_tests;


// lift anonymous function
struct kk_main_main_fun21__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun21(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun21(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun21, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun23__t {
  struct kk_function_s _base;
  kk_box_t _b_x11;
};
static kk_unit_t kk_main_main_fun23(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun23(kk_box_t _b_x11, kk_context_t* _ctx) {
  struct kk_main_main_fun23__t* _self = kk_function_alloc_as(struct kk_main_main_fun23__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun23, kk_context());
  _self->_b_x11 = _b_x11;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main_main_fun23(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_main_fun23__t* _self = kk_function_as(struct kk_main_main_fun23__t*, _fself, _ctx);
  kk_box_t _b_x11 = _self->_b_x11; /* 1001 */
  kk_drop_match(_self, {kk_box_dup(_b_x11, _ctx);}, {}, _ctx)
  kk_box_t _x_x24;
  kk_function_t _x_x25 = kk_function_unbox(_b_x11, _ctx); /*() -> <div,utest/test-suite<_56>> 12*/
  _x_x24 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x25, (_x_x25, _ctx), _ctx); /*12*/
  kk_unit_unbox(_x_x24); return kk_Unit;
}
static kk_box_t kk_main_main_fun21(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x22 = kk_Unit;
  kk_utest_run_utest(kk_main_new_main_fun23(_b_x11, _ctx), _ctx);
  return kk_unit_box(_x_x22);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_std_core_types__list __;
  kk_std_core_types__list _x_x20 = kk_std_core_types__list_dup(kk_main_tests, _ctx); /*forall<a,e> list<() -> <div,utest/test-suite<a>|e> ()>*/
  __ = kk_std_core_list_map(_x_x20, kk_main_new_main_fun21(_ctx), _ctx); /*list<()>*/
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
    kk_main_tests = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_main_new_tests_fun16(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*forall<a,e> list<() -> <div,utest/test-suite<a>|e> ()>*/
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
