// Koka generated module: utest, koka version: 3.1.2, platform: 64-bit
#include "utest.h"
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_utest__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_utest__handle_test(kk_utest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test<e,b>, ret : (res : a) -> e b, action : () -> <test|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x247 = kk_std_core_hnd__htag_dup(kk_utest__tag_test, _ctx); /*hnd/htag<utest/test>*/
  return kk_std_core_hnd__hhandle(_x_x247, kk_utest__test_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-case`

kk_std_core_hnd__htag kk_utest__tag_test_case;
 
// handler for the effect `:test-case`

kk_box_t kk_utest__handle_test_case(kk_utest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test-case<e,b>, ret : (res : a) -> e b, action : () -> <test-case|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x254 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_case, _ctx); /*hnd/htag<utest/test-case>*/
  return kk_std_core_hnd__hhandle(_x_x254, kk_utest__test_case_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-suite`

kk_std_core_hnd__htag kk_utest__tag_test_suite;
 
// handler for the effect `:test-suite`

kk_box_t kk_utest__handle_test_suite(kk_utest__test_suite hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test-suite<e,b>, ret : (res : a) -> e b, action : () -> <test-suite|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x261 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_suite, _ctx); /*hnd/htag<utest/test-suite>*/
  return kk_std_core_hnd__hhandle(_x_x261, kk_utest__test_suite_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_std_core_hnd__clause1 kk_utest_test_suite_fail_fun264(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest__test_suite _brw_x233 = kk_utest__test_suite_unbox(_b_x49, KK_OWNED, _ctx); /*utest/test-suite<587,588>*/;
  kk_std_core_hnd__clause1 _brw_x234 = kk_utest__select_test_suite_fail(_brw_x233, _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite,587,588>*/;
  kk_utest__test_suite_drop(_brw_x233, _ctx);
  return _brw_x234;
}


// lift anonymous function
struct kk_utest_assert_eq_fun266__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_assert_eq_fun266(kk_function_t _fself, kk_box_t _b_x59, kk_box_t _b_x60, kk_box_t _b_x61, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun266(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_assert_eq_fun266, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_assert_eq_fun268__t {
  struct kk_function_s _base;
  kk_box_t _b_x61;
};
static bool kk_utest_assert_eq_fun268(kk_function_t _fself, kk_box_t _b_x65, kk_box_t _b_x66, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun268(kk_box_t _b_x61, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun268__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun268__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun268, kk_context());
  _self->_b_x61 = _b_x61;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_utest_assert_eq_fun268(kk_function_t _fself, kk_box_t _b_x65, kk_box_t _b_x66, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun268__t* _self = kk_function_as(struct kk_utest_assert_eq_fun268__t*, _fself, _ctx);
  kk_box_t _b_x61 = _self->_b_x61; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x61, _ctx);}, {}, _ctx)
  kk_box_t _x_x269;
  kk_function_t _x_x270 = kk_function_unbox(_b_x61, _ctx); /*(62, 63) -> 64*/
  _x_x269 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x270, (_x_x270, _b_x65, _b_x66, _ctx), _ctx); /*64*/
  return kk_bool_unbox(_x_x269);
}
static kk_box_t kk_utest_assert_eq_fun266(kk_function_t _fself, kk_box_t _b_x59, kk_box_t _b_x60, kk_box_t _b_x61, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x267;
  kk_box_t x_116 = _b_x59; /*827*/;
  kk_box_t y_117 = _b_x60; /*827*/;
  kk_function_t _implicit_fs__lp__at_x_0_118_eq__eq__rp_ = kk_utest_new_assert_eq_fun268(_b_x61, _ctx); /*(827, 827) -> bool*/;
  bool b_10002 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_0_118_eq__eq__rp_, (_implicit_fs__lp__at_x_0_118_eq__eq__rp_, x_116, y_117, _ctx), _ctx); /*bool*/;
  if (b_10002) {
    _x_x267 = false; /*bool*/
  }
  else {
    _x_x267 = true; /*bool*/
  }
  return kk_bool_box(_x_x267);
}


// lift anonymous function
struct kk_utest_assert_eq_fun273__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_utest_assert_eq_fun273(kk_function_t _fself, kk_box_t _b_x70, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun273(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun273__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun273__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun273, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun273(kk_function_t _fself, kk_box_t _b_x70, kk_box_t _b_x71, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun273__t* _self = kk_function_as(struct kk_utest_assert_eq_fun273__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (827, 827) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x274 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x70, _b_x71, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x274);
}


// lift anonymous function
struct kk_utest_assert_eq_fun277__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun277(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun277(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun277__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun277__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun277, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun277(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun277__t* _self = kk_function_as(struct kk_utest_assert_eq_fun277__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (827) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x278 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x74, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x278);
}


// lift anonymous function
struct kk_utest_assert_eq_fun280__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun280(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun280(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun280__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun280__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun280, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun280(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun280__t* _self = kk_function_as(struct kk_utest_assert_eq_fun280__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (827) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x281 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x79, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x281);
}


// lift anonymous function
struct kk_utest_assert_eq_fun287__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun287(kk_function_t _fself, kk_box_t _b_x94, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun287(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun287__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun287__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun287, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun287(kk_function_t _fself, kk_box_t _b_x94, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun287__t* _self = kk_function_as(struct kk_utest_assert_eq_fun287__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (827) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x288 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x94, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x288);
}


// lift anonymous function
struct kk_utest_assert_eq_fun290__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun290(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun290(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun290__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun290__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun290, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun290(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun290__t* _self = kk_function_as(struct kk_utest_assert_eq_fun290__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (827) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x291 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x99, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x291);
}

kk_unit_t kk_utest_assert_eq(kk_box_t expected, kk_box_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a> (expected : a, actual : a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> test () */ 
  bool _match_x232;
  kk_box_t _x_x265;
  kk_box_t _x_x271 = kk_box_dup(expected, _ctx); /*827*/
  kk_box_t _x_x272 = kk_box_dup(actual, _ctx); /*827*/
  _x_x265 = kk_std_core_hnd__open_none3(kk_utest_new_assert_eq_fun266(_ctx), _x_x271, _x_x272, kk_function_box(kk_utest_new_assert_eq_fun273(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*1003*/
  _match_x232 = kk_bool_unbox(_x_x265); /*bool*/
  if (_match_x232) {
    kk_string_t expected_0_10000;
    kk_box_t _x_x275;
    kk_function_t _x_x276;
    kk_function_dup(_implicit_fs_show, _ctx);
    _x_x276 = kk_utest_new_assert_eq_fun277(_implicit_fs_show, _ctx); /*(1000) -> 1002 1001*/
    _x_x275 = kk_std_core_hnd__open_none1(_x_x276, expected, _ctx); /*1001*/
    expected_0_10000 = kk_string_unbox(_x_x275); /*string*/
    kk_string_t actual_0_10001;
    kk_box_t _x_x279 = kk_std_core_hnd__open_none1(kk_utest_new_assert_eq_fun280(_implicit_fs_show, _ctx), actual, _ctx); /*1001*/
    actual_0_10001 = kk_string_unbox(_x_x279); /*string*/
    kk_std_core_hnd__ev evx_10047 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test>*/;
    kk_box_t _x_x282;
    {
      struct kk_std_core_hnd_Ev* _con_x283 = kk_std_core_hnd__as_Ev(evx_10047, _ctx);
      kk_box_t _box_x82 = _con_x283->hnd;
      int32_t m = _con_x283->marker;
      kk_utest__test h = kk_utest__test_unbox(_box_x82, KK_BORROWED, _ctx);
      kk_utest__test_dup(h, _ctx);
      {
        struct kk_utest__Hnd_test* _con_x284 = kk_utest__as_Hnd_test(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x284->_cfc;
        kk_std_core_hnd__clause2 _fun_test_fail = _con_x284->_fun_test_fail;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x87 = _fun_test_fail.clause;
          _x_x282 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x87, (_fun_unbox_x87, m, evx_10047, kk_string_box(expected_0_10000), kk_string_box(actual_0_10001), _ctx), _ctx); /*1016*/
        }
      }
    }
    kk_unit_unbox(_x_x282); return kk_Unit;
  }
  {
    kk_string_t expected_1_10002;
    kk_box_t _x_x285;
    kk_function_t _x_x286;
    kk_function_dup(_implicit_fs_show, _ctx);
    _x_x286 = kk_utest_new_assert_eq_fun287(_implicit_fs_show, _ctx); /*(1000) -> 1002 1001*/
    _x_x285 = kk_std_core_hnd__open_none1(_x_x286, expected, _ctx); /*1001*/
    expected_1_10002 = kk_string_unbox(_x_x285); /*string*/
    kk_string_t actual_1_10003;
    kk_box_t _x_x289 = kk_std_core_hnd__open_none1(kk_utest_new_assert_eq_fun290(_implicit_fs_show, _ctx), actual, _ctx); /*1001*/
    actual_1_10003 = kk_string_unbox(_x_x289); /*string*/
    kk_std_core_hnd__ev evx_0_10051 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test>*/;
    kk_box_t _x_x292;
    {
      struct kk_std_core_hnd_Ev* _con_x293 = kk_std_core_hnd__as_Ev(evx_0_10051, _ctx);
      kk_box_t _box_x102 = _con_x293->hnd;
      int32_t m_0 = _con_x293->marker;
      kk_utest__test h_0 = kk_utest__test_unbox(_box_x102, KK_BORROWED, _ctx);
      kk_utest__test_dup(h_0, _ctx);
      {
        struct kk_utest__Hnd_test* _con_x294 = kk_utest__as_Hnd_test(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x294->_cfc;
        kk_std_core_hnd__clause2 _fun_test_fail_0 = _con_x294->_fun_test_fail;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause2_dup(_fun_test_fail_0, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x107 = _fun_test_fail_0.clause;
          _x_x292 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x107, (_fun_unbox_x107, m_0, evx_0_10051, kk_string_box(expected_1_10002), kk_string_box(actual_1_10003), _ctx), _ctx); /*1016*/
        }
      }
    }
    kk_unit_unbox(_x_x292); return kk_Unit;
  }
}


// lift anonymous function
struct kk_utest_test_fun296__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_utest_test_fun296(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun296(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun296, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_test_fun298__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun298(kk_function_t _fself, kk_box_t _b_x123, kk_box_t _b_x124, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun298(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun298, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun298(kk_function_t _fself, kk_box_t _b_x123, kk_box_t _b_x124, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x299 = kk_Unit;
  kk_string_t _x_x300 = kk_string_unbox(_b_x123); /*string*/
  kk_string_t _x_x301 = kk_string_unbox(_b_x124); /*string*/
  kk_utest_test_case_fail(_x_x300, _x_x301, _ctx);
  return kk_unit_box(_x_x299);
}
static kk_unit_t kk_utest_test_fun296(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x297 = kk_std_core_hnd_under2(ev, kk_utest_new_test_fun298(_ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*3007*/
  kk_unit_unbox(_x_x297); return kk_Unit;
}


// lift anonymous function
struct kk_utest_test_fun304__t {
  struct kk_function_s _base;
  kk_function_t _b_x125_139;
};
static kk_box_t kk_utest_test_fun304(kk_function_t _fself, int32_t _b_x126, kk_std_core_hnd__ev _b_x127, kk_box_t _b_x128, kk_box_t _b_x129, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun304(kk_function_t _b_x125_139, kk_context_t* _ctx) {
  struct kk_utest_test_fun304__t* _self = kk_function_alloc_as(struct kk_utest_test_fun304__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun304, kk_context());
  _self->_b_x125_139 = _b_x125_139;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun304(kk_function_t _fself, int32_t _b_x126, kk_std_core_hnd__ev _b_x127, kk_box_t _b_x128, kk_box_t _b_x129, kk_context_t* _ctx) {
  struct kk_utest_test_fun304__t* _self = kk_function_as(struct kk_utest_test_fun304__t*, _fself, _ctx);
  kk_function_t _b_x125_139 = _self->_b_x125_139; /* (m : hnd/marker<utest/test-case,()>, ev : hnd/ev<utest/test>, x1 : string, x2 : string) -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(_b_x125_139, _ctx);}, {}, _ctx)
  kk_unit_t _x_x305 = kk_Unit;
  kk_string_t _x_x306 = kk_string_unbox(_b_x128); /*string*/
  kk_string_t _x_x307 = kk_string_unbox(_b_x129); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x125_139, (_b_x125_139, _b_x126, _b_x127, _x_x306, _x_x307, _ctx), _ctx);
  return kk_unit_box(_x_x305);
}


// lift anonymous function
struct kk_utest_test_fun308__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun308(kk_function_t _fself, kk_box_t _b_x135, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun308(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun308, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun308(kk_function_t _fself, kk_box_t _b_x135, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_146 = kk_Unit;
  kk_unit_unbox(_b_x135);
  return kk_unit_box(_x_146);
}


// lift anonymous function
struct kk_utest_test_fun309__t {
  struct kk_function_s _base;
  kk_function_t tests;
};
static kk_box_t kk_utest_test_fun309(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun309(kk_function_t tests, kk_context_t* _ctx) {
  struct kk_utest_test_fun309__t* _self = kk_function_alloc_as(struct kk_utest_test_fun309__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun309, kk_context());
  _self->tests = tests;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun310__t {
  struct kk_function_s _base;
  kk_function_t _b_x131_145;
};
static kk_box_t kk_utest_test_fun310(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun310(kk_function_t _b_x131_145, kk_context_t* _ctx) {
  struct kk_utest_test_fun310__t* _self = kk_function_alloc_as(struct kk_utest_test_fun310__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun310, kk_context());
  _self->_b_x131_145 = _b_x131_145;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun310(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun310__t* _self = kk_function_as(struct kk_utest_test_fun310__t*, _fself, _ctx);
  kk_function_t _b_x131_145 = _self->_b_x131_145; /* () -> utest/test () */
  kk_drop_match(_self, {kk_function_dup(_b_x131_145, _ctx);}, {}, _ctx)
  kk_unit_t _x_x311 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x131_145, (_b_x131_145, _ctx), _ctx);
  return kk_unit_box(_x_x311);
}
static kk_box_t kk_utest_test_fun309(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun309__t* _self = kk_function_as(struct kk_utest_test_fun309__t*, _fself, _ctx);
  kk_function_t tests = _self->tests; /* () -> utest/test () */
  kk_drop_match(_self, {kk_function_dup(tests, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x130_144 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x131_145 = tests; /*() -> utest/test ()*/;
  return kk_std_core_hnd__open_at0(_b_x130_144, kk_utest_new_test_fun310(_b_x131_145, _ctx), _ctx);
}

kk_unit_t kk_utest_test(kk_string_t test_name, kk_function_t tests, kk_context_t* _ctx) { /* (test-name : string, tests : () -> test ()) -> test-case () */ 
  kk_string_drop(test_name, _ctx);
  kk_box_t _x_x295;
  kk_function_t _b_x125_139 = kk_utest_new_test_fun296(_ctx); /*(m : hnd/marker<utest/test-case,()>, ev : hnd/ev<utest/test>, x1 : string, x2 : string) -> utest/test-case ()*/;
  kk_utest__test _x_x302;
  kk_std_core_hnd__clause2 _x_x303 = kk_std_core_hnd__new_Clause2(kk_utest_new_test_fun304(_b_x125_139, _ctx), _ctx); /*hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  _x_x302 = kk_utest__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(1), _x_x303, _ctx); /*utest/test<7,8>*/
  _x_x295 = kk_utest__handle_test(_x_x302, kk_utest_new_test_fun308(_ctx), kk_utest_new_test_fun309(tests, _ctx), _ctx); /*320*/
  kk_unit_unbox(_x_x295); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun313__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_utest_suite_fun313(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun313(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun313, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun315__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_suite_fun315(kk_function_t _fself, kk_box_t _b_x157, kk_box_t _b_x158, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun315(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun315, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun316__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun316(kk_function_t _fself, kk_utest__test_suite hnd, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun316(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun316, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun319__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun319(kk_function_t _fself, kk_utest__test_suite _x1_x318, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun319(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun319, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun319(kk_function_t _fself, kk_utest__test_suite _x1_x318, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_utest__select_test_suite_fail(_x1_x318, _ctx);
}
static kk_std_core_hnd__clause1 kk_utest_suite_fun316(kk_function_t _fself, kk_utest__test_suite hnd, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__clause1 _brw_x231;
  kk_function_t _x_x317 = kk_utest_new_suite_fun319(_ctx); /*(hnd : utest/test-suite<587,588>) -> hnd/clause1<(string, string, string),(),utest/test-suite,587,588>*/
  _brw_x231 = kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_suite, kk_context_t*), _x_x317, (_x_x317, hnd, _ctx), _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite,587,588>*/
  kk_utest__test_suite_drop(hnd, _ctx);
  return _brw_x231;
}


// lift anonymous function
struct kk_utest_suite_fun321__t {
  struct kk_function_s _base;
  kk_function_t _b_x148_179;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun321(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun321(kk_function_t _b_x148_179, kk_context_t* _ctx) {
  struct kk_utest_suite_fun321__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun321__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun321, kk_context());
  _self->_b_x148_179 = _b_x148_179;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun321(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx) {
  struct kk_utest_suite_fun321__t* _self = kk_function_as(struct kk_utest_suite_fun321__t*, _fself, _ctx);
  kk_function_t _b_x148_179 = _self->_b_x148_179; /* (hnd : utest/test-suite<587,588>) -> hnd/clause1<(string, string, string),(),utest/test-suite,587,588> */
  kk_drop_match(_self, {kk_function_dup(_b_x148_179, _ctx);}, {}, _ctx)
  kk_utest__test_suite _x_x322 = kk_utest__test_suite_unbox(_b_x152, KK_OWNED, _ctx); /*utest/test-suite<587,588>*/
  return kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_suite, kk_context_t*), _b_x148_179, (_b_x148_179, _x_x322, _ctx), _ctx);
}
static kk_box_t kk_utest_suite_fun315(kk_function_t _fself, kk_box_t _b_x157, kk_box_t _b_x158, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t expected_185 = kk_string_unbox(_b_x157); /*string*/;
  kk_string_t actual_186 = kk_string_unbox(_b_x158); /*string*/;
  kk_std_core_hnd__ev _b_x147_178 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-suite>*/;
  kk_function_t _b_x148_179 = kk_utest_new_suite_fun316(_ctx); /*(hnd : utest/test-suite<587,588>) -> hnd/clause1<(string, string, string),(),utest/test-suite,587,588>*/;
  kk_string_t _b_x149_180;
  kk_define_string_literal(, _s_x320, 6, "suitef", _ctx)
  _b_x149_180 = kk_string_dup(_s_x320, _ctx); /*string*/
  kk_string_t _b_x150_181 = expected_185; /*string*/;
  kk_string_t _b_x151_182 = actual_186; /*string*/;
  return kk_std_core_hnd__perform3(_b_x147_178, kk_utest_new_suite_fun321(_b_x148_179, _ctx), kk_string_box(_b_x149_180), kk_string_box(_b_x150_181), kk_string_box(_b_x151_182), _ctx);
}
static kk_unit_t kk_utest_suite_fun313(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x314 = kk_std_core_hnd_under2(ev, kk_utest_new_suite_fun315(_ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*3007*/
  kk_unit_unbox(_x_x314); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun325__t {
  struct kk_function_s _base;
  kk_function_t _b_x159_173;
};
static kk_box_t kk_utest_suite_fun325(kk_function_t _fself, int32_t _b_x160, kk_std_core_hnd__ev _b_x161, kk_box_t _b_x162, kk_box_t _b_x163, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun325(kk_function_t _b_x159_173, kk_context_t* _ctx) {
  struct kk_utest_suite_fun325__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun325__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun325, kk_context());
  _self->_b_x159_173 = _b_x159_173;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun325(kk_function_t _fself, int32_t _b_x160, kk_std_core_hnd__ev _b_x161, kk_box_t _b_x162, kk_box_t _b_x163, kk_context_t* _ctx) {
  struct kk_utest_suite_fun325__t* _self = kk_function_as(struct kk_utest_suite_fun325__t*, _fself, _ctx);
  kk_function_t _b_x159_173 = _self->_b_x159_173; /* (m : hnd/marker<utest/test-suite,()>, ev : hnd/ev<utest/test-case>, x1 : string, x2 : string) -> utest/test-suite () */
  kk_drop_match(_self, {kk_function_dup(_b_x159_173, _ctx);}, {}, _ctx)
  kk_unit_t _x_x326 = kk_Unit;
  kk_string_t _x_x327 = kk_string_unbox(_b_x162); /*string*/
  kk_string_t _x_x328 = kk_string_unbox(_b_x163); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x159_173, (_b_x159_173, _b_x160, _b_x161, _x_x327, _x_x328, _ctx), _ctx);
  return kk_unit_box(_x_x326);
}


// lift anonymous function
struct kk_utest_suite_fun329__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_suite_fun329(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun329(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun329, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_suite_fun329(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_187 = kk_Unit;
  kk_unit_unbox(_b_x169);
  return kk_unit_box(_x_187);
}


// lift anonymous function
struct kk_utest_suite_fun330__t {
  struct kk_function_s _base;
  kk_function_t cases;
};
static kk_box_t kk_utest_suite_fun330(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun330(kk_function_t cases, kk_context_t* _ctx) {
  struct kk_utest_suite_fun330__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun330__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun330, kk_context());
  _self->cases = cases;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun331__t {
  struct kk_function_s _base;
  kk_function_t _b_x165_184;
};
static kk_box_t kk_utest_suite_fun331(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun331(kk_function_t _b_x165_184, kk_context_t* _ctx) {
  struct kk_utest_suite_fun331__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun331__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun331, kk_context());
  _self->_b_x165_184 = _b_x165_184;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun331(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun331__t* _self = kk_function_as(struct kk_utest_suite_fun331__t*, _fself, _ctx);
  kk_function_t _b_x165_184 = _self->_b_x165_184; /* () -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(_b_x165_184, _ctx);}, {}, _ctx)
  kk_unit_t _x_x332 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x165_184, (_b_x165_184, _ctx), _ctx);
  return kk_unit_box(_x_x332);
}
static kk_box_t kk_utest_suite_fun330(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun330__t* _self = kk_function_as(struct kk_utest_suite_fun330__t*, _fself, _ctx);
  kk_function_t cases = _self->cases; /* () -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(cases, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x164_183 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x165_184 = cases; /*() -> utest/test-case ()*/;
  return kk_std_core_hnd__open_at0(_b_x164_183, kk_utest_new_suite_fun331(_b_x165_184, _ctx), _ctx);
}

kk_unit_t kk_utest_suite(kk_string_t suite_name, kk_function_t cases, kk_context_t* _ctx) { /* (suite-name : string, cases : () -> test-case ()) -> test-suite () */ 
  kk_string_drop(suite_name, _ctx);
  kk_box_t _x_x312;
  kk_function_t _b_x159_173 = kk_utest_new_suite_fun313(_ctx); /*(m : hnd/marker<utest/test-suite,()>, ev : hnd/ev<utest/test-case>, x1 : string, x2 : string) -> utest/test-suite ()*/;
  kk_utest__test_case _x_x323;
  kk_std_core_hnd__clause2 _x_x324 = kk_std_core_hnd__new_Clause2(kk_utest_new_suite_fun325(_b_x159_173, _ctx), _ctx); /*hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  _x_x323 = kk_utest__new_Hnd_test_case(kk_reuse_null, 0, kk_integer_from_small(1), _x_x324, _ctx); /*utest/test-case<16,17>*/
  _x_x312 = kk_utest__handle_test_case(_x_x323, kk_utest_new_suite_fun329(_ctx), kk_utest_new_suite_fun330(cases, _ctx), _ctx); /*441*/
  kk_unit_unbox(_x_x312); return kk_Unit;
}


// lift anonymous function
struct kk_utest_run_test_fun337__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_utest_run_test_fun337(kk_function_t _fself, int32_t _b_x199, kk_std_core_hnd__ev _b_x200, kk_box_t _b_x201, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_test_fun337(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_utest_run_test_fun337__t* _self = kk_function_alloc_as(struct kk_utest_run_test_fun337__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_test_fun337, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_test_fun337(kk_function_t _fself, int32_t _b_x199, kk_std_core_hnd__ev _b_x200, kk_box_t _b_x201, kk_context_t* _ctx) {
  struct kk_utest_run_test_fun337__t* _self = kk_function_as(struct kk_utest_run_test_fun337__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1357,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t ___wildcard_x633__14_227 = _b_x199; /*hnd/marker<<local<1357>,console/console>,()>*/;
  kk_std_core_hnd__ev ___wildcard_x633__17_228 = _b_x200; /*hnd/ev<utest/test-suite>*/;
  kk_datatype_ptr_dropn(___wildcard_x633__17_228, (KK_I32(3)), _ctx);
  kk_std_core_types__tuple3 x_229 = kk_std_core_types__tuple3_unbox(_b_x201, KK_OWNED, _ctx); /*(string, string, string)*/;
  kk_unit_t _x_x338 = kk_Unit;
  {
    kk_box_t _box_x190 = x_229.fst;
    kk_box_t _box_x191 = x_229.snd;
    kk_box_t _box_x192 = x_229.thd;
    kk_string_t x1 = kk_string_unbox(_box_x190);
    kk_string_dup(x1, _ctx);
    kk_std_core_types__tuple3_drop(x_229, _ctx);
    kk_std_core_types__list _b_x197_211;
    kk_std_core_types__list _x_x339;
    kk_box_t _x_x340;
    kk_ref_t _x_x341 = kk_ref_dup(loc, _ctx); /*local-var<1357,list<string>>*/
    _x_x340 = kk_ref_get(_x_x341,kk_context()); /*1000*/
    _x_x339 = kk_std_core_types__list_unbox(_x_x340, KK_OWNED, _ctx); /*list<string>*/
    kk_std_core_types__list _x_x342 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(x1), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    _b_x197_211 = kk_std_core_list_append(_x_x339, _x_x342, _ctx); /*list<string>*/
    kk_unit_t _brw_x230 = kk_Unit;
    kk_ref_set_borrow(loc,(kk_std_core_types__list_box(_b_x197_211, _ctx)),kk_context());
    kk_ref_drop(loc, _ctx);
    _brw_x230;
  }
  return kk_unit_box(_x_x338);
}


// lift anonymous function
struct kk_utest_run_test_fun343__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_test_fun343(kk_function_t _fself, kk_box_t _b_x205, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_test_fun343(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_test_fun343, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_test_fun343(kk_function_t _fself, kk_box_t _b_x205, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x205;
}


// lift anonymous function
struct kk_utest_run_test_fun344__t {
  struct kk_function_s _base;
  kk_function_t suites;
};
static kk_box_t kk_utest_run_test_fun344(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_test_fun344(kk_function_t suites, kk_context_t* _ctx) {
  struct kk_utest_run_test_fun344__t* _self = kk_function_alloc_as(struct kk_utest_run_test_fun344__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_test_fun344, kk_context());
  _self->suites = suites;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_test_fun344(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_run_test_fun344__t* _self = kk_function_as(struct kk_utest_run_test_fun344__t*, _fself, _ctx);
  kk_function_t suites = _self->suites; /* () -> utest/test-suite () */
  kk_drop_match(_self, {kk_function_dup(suites, _ctx);}, {}, _ctx)
  kk_unit_t _x_x345 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), suites, (suites, _ctx), _ctx);
  return kk_unit_box(_x_x345);
}


// lift anonymous function
struct kk_utest_run_test_fun350__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_test_fun350(kk_function_t _fself, kk_box_t _b_x219, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_test_fun350(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_test_fun350, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_test_fun350(kk_function_t _fself, kk_box_t _b_x219, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x351 = kk_Unit;
  kk_string_t _x_x352 = kk_string_unbox(_b_x219); /*string*/
  kk_std_core_console_string_fs_println(_x_x352, _ctx);
  return kk_unit_box(_x_x351);
}

kk_std_core_types__list kk_utest_run_test(kk_function_t suites, kk_context_t* _ctx) { /* (suites : () -> test-suite ()) -> console/console list<()> */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<1357,list<string>>*/;
  kk_unit_t __ = kk_Unit;
  kk_box_t _x_x333;
  kk_utest__test_suite _x_x334;
  kk_std_core_hnd__clause1 _x_x335;
  kk_function_t _x_x336;
  kk_ref_dup(loc, _ctx);
  _x_x336 = kk_utest_new_run_test_fun337(loc, _ctx); /*(hnd/marker<1018,1019>, hnd/ev<1017>, 1015) -> 1018 1016*/
  _x_x335 = kk_std_core_hnd__new_Clause1(_x_x336, _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x334 = kk_utest__new_Hnd_test_suite(kk_reuse_null, 0, kk_integer_from_small(1), _x_x335, _ctx); /*utest/test-suite<27,28>*/
  _x_x333 = kk_utest__handle_test_suite(_x_x334, kk_utest_new_run_test_fun343(_ctx), kk_utest_new_run_test_fun344(suites, _ctx), _ctx); /*562*/
  kk_unit_unbox(_x_x333);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x346;
  kk_define_string_literal(, _s_x347, 5, "hello", _ctx)
  _x_x346 = kk_string_dup(_s_x347, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x346, _ctx);
  kk_std_core_types__list _b_x217_220;
  kk_box_t _x_x348;
  kk_ref_t _x_x349 = kk_ref_dup(loc, _ctx); /*local-var<1357,list<string>>*/
  _x_x348 = kk_ref_get(_x_x349,kk_context()); /*1000*/
  _b_x217_220 = kk_std_core_types__list_unbox(_x_x348, KK_OWNED, _ctx); /*list<string>*/
  kk_std_core_types__list res = kk_std_core_list_map(_b_x217_220, kk_utest_new_run_test_fun350(_ctx), _ctx); /*list<()>*/;
  kk_box_t _x_x353 = kk_std_core_hnd_prompt_local_var(loc, kk_std_core_types__list_box(res, _ctx), _ctx); /*3358*/
  return kk_std_core_types__list_unbox(_x_x353, KK_OWNED, _ctx);
}

// initialization
void kk_utest__init(kk_context_t* _ctx){
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
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x245;
    kk_define_string_literal(, _s_x246, 10, "test@utest", _ctx)
    _x_x245 = kk_string_dup(_s_x246, _ctx); /*string*/
    kk_utest__tag_test = kk_std_core_hnd__new_Htag(_x_x245, _ctx); /*hnd/htag<utest/test>*/
  }
  {
    kk_string_t _x_x252;
    kk_define_string_literal(, _s_x253, 15, "test-case@utest", _ctx)
    _x_x252 = kk_string_dup(_s_x253, _ctx); /*string*/
    kk_utest__tag_test_case = kk_std_core_hnd__new_Htag(_x_x252, _ctx); /*hnd/htag<utest/test-case>*/
  }
  {
    kk_string_t _x_x259;
    kk_define_string_literal(, _s_x260, 16, "test-suite@utest", _ctx)
    _x_x259 = kk_string_dup(_s_x260, _ctx); /*string*/
    kk_utest__tag_test_suite = kk_std_core_hnd__new_Htag(_x_x259, _ctx); /*hnd/htag<utest/test-suite>*/
  }
}

// termination
void kk_utest__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_utest__tag_test_suite, _ctx);
  kk_std_core_hnd__htag_drop(kk_utest__tag_test_case, _ctx);
  kk_std_core_hnd__htag_drop(kk_utest__tag_test, _ctx);
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
