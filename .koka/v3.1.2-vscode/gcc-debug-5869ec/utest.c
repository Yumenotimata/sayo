// Koka generated module: utest, koka version: 3.1.2, platform: 64-bit
#include "utest.h"

kk_utest__test_failure kk_utest_test_failure_fs__copy(kk_utest__test_failure _this, kk_std_core_types__optional expected, kk_std_core_types__optional actual, kk_std_core_types__optional msg, kk_context_t* _ctx) { /* forall<a,b> (test-failure<a,b>, expected : ? a, actual : ? b, msg : ? string) -> test-failure<a,b> */ 
  kk_box_t _x_x360;
  if (kk_std_core_types__is_Optional(expected, _ctx)) {
    kk_box_t _uniq_expected_440 = expected._cons._Optional.value;
    kk_box_dup(_uniq_expected_440, _ctx);
    kk_std_core_types__optional_drop(expected, _ctx);
    _x_x360 = _uniq_expected_440; /*485*/
  }
  else {
    kk_std_core_types__optional_drop(expected, _ctx);
    {
      struct kk_utest_TestFailure* _con_x361 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x = _con_x361->expected;
      kk_box_dup(_x, _ctx);
      _x_x360 = _x; /*485*/
    }
  }
  kk_box_t _x_x362;
  if (kk_std_core_types__is_Optional(actual, _ctx)) {
    kk_box_t _uniq_actual_453 = actual._cons._Optional.value;
    kk_box_dup(_uniq_actual_453, _ctx);
    kk_std_core_types__optional_drop(actual, _ctx);
    _x_x362 = _uniq_actual_453; /*486*/
  }
  else {
    kk_std_core_types__optional_drop(actual, _ctx);
    {
      struct kk_utest_TestFailure* _con_x363 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x_0 = _con_x363->actual;
      kk_box_dup(_x_0, _ctx);
      _x_x362 = _x_0; /*486*/
    }
  }
  kk_string_t _x_x364;
  if (kk_std_core_types__is_Optional(msg, _ctx)) {
    kk_box_t _box_x0 = msg._cons._Optional.value;
    kk_string_t _uniq_msg_466 = kk_string_unbox(_box_x0);
    kk_string_dup(_uniq_msg_466, _ctx);
    kk_std_core_types__optional_drop(msg, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x364 = _uniq_msg_466; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(msg, _ctx);
    {
      struct kk_utest_TestFailure* _con_x365 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _pat_0_2 = _con_x365->expected;
      kk_box_t _pat_1_3 = _con_x365->actual;
      kk_string_t _x_1 = _con_x365->msg;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_box_drop(_pat_1_3, _ctx);
        kk_box_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x364 = _x_1; /*string*/
    }
  }
  return kk_utest__new_TestFailure(kk_reuse_null, 0, _x_x360, _x_x362, _x_x364, _ctx);
}
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_utest__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_utest__handle_test(kk_utest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test<a,e,c>, ret : (res : b) -> e c, action : () -> <test<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x370 = kk_std_core_hnd__htag_dup(kk_utest__tag_test, _ctx); /*forall<a> hnd/htag<utest/test<a>>*/
  return kk_std_core_hnd__hhandle(_x_x370, kk_utest__test_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-case`

kk_std_core_hnd__htag kk_utest__tag_test_case;
 
// handler for the effect `:test-case`

kk_box_t kk_utest__handle_test_case(kk_utest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test-case<a,e,c>, ret : (res : b) -> e c, action : () -> <test-case<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x377 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_case, _ctx); /*forall<a> hnd/htag<utest/test-case<a>>*/
  return kk_std_core_hnd__hhandle(_x_x377, kk_utest__test_case_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-suite`

kk_std_core_hnd__htag kk_utest__tag_test_suite;
 
// handler for the effect `:test-suite`

kk_box_t kk_utest__handle_test_suite(kk_utest__test_suite hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test-suite<a,e,c>, ret : (res : b) -> e c, action : () -> <test-suite<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x384 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_suite, _ctx); /*forall<a> hnd/htag<utest/test-suite<a>>*/
  return kk_std_core_hnd__hhandle(_x_x384, kk_utest__test_suite_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_std_core_hnd__clause1 kk_utest_test_suite_fail_fun387(kk_function_t _fself, kk_box_t _b_x50, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest__test_suite _brw_x344 = kk_utest__test_suite_unbox(_b_x50, KK_OWNED, _ctx); /*utest/test-suite<_1012,1016,1017>*/;
  kk_std_core_hnd__clause1 _brw_x345 = kk_utest__select_test_suite_fail(_brw_x344, _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite<956>,957,958>*/;
  kk_utest__test_suite_drop(_brw_x344, _ctx);
  return _brw_x345;
}


// lift anonymous function
struct kk_utest_assert_eq_fun389__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_assert_eq_fun389(kk_function_t _fself, kk_box_t _b_x60, kk_box_t _b_x61, kk_box_t _b_x62, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun389(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_assert_eq_fun389, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_assert_eq_fun391__t {
  struct kk_function_s _base;
  kk_box_t _b_x62;
};
static bool kk_utest_assert_eq_fun391(kk_function_t _fself, kk_box_t _b_x66, kk_box_t _b_x67, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun391(kk_box_t _b_x62, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun391__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun391__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun391, kk_context());
  _self->_b_x62 = _b_x62;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_utest_assert_eq_fun391(kk_function_t _fself, kk_box_t _b_x66, kk_box_t _b_x67, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun391__t* _self = kk_function_as(struct kk_utest_assert_eq_fun391__t*, _fself, _ctx);
  kk_box_t _b_x62 = _self->_b_x62; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x62, _ctx);}, {}, _ctx)
  kk_box_t _x_x392;
  kk_function_t _x_x393 = kk_function_unbox(_b_x62, _ctx); /*(63, 64) -> 65*/
  _x_x392 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x393, (_x_x393, _b_x66, _b_x67, _ctx), _ctx); /*65*/
  return kk_bool_unbox(_x_x392);
}
static kk_box_t kk_utest_assert_eq_fun389(kk_function_t _fself, kk_box_t _b_x60, kk_box_t _b_x61, kk_box_t _b_x62, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x390;
  kk_box_t x_97 = _b_x60; /*1145*/;
  kk_box_t y_98 = _b_x61; /*1145*/;
  kk_function_t _implicit_fs__lp__at_x_0_99_eq__eq__rp_ = kk_utest_new_assert_eq_fun391(_b_x62, _ctx); /*(1145, 1145) -> bool*/;
  bool b_10002 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_0_99_eq__eq__rp_, (_implicit_fs__lp__at_x_0_99_eq__eq__rp_, x_97, y_98, _ctx), _ctx); /*bool*/;
  if (b_10002) {
    _x_x390 = false; /*bool*/
  }
  else {
    _x_x390 = true; /*bool*/
  }
  return kk_bool_box(_x_x390);
}


// lift anonymous function
struct kk_utest_assert_eq_fun396__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_utest_assert_eq_fun396(kk_function_t _fself, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun396(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun396__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun396__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun396, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun396(kk_function_t _fself, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun396__t* _self = kk_function_as(struct kk_utest_assert_eq_fun396__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1145, 1145) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x397 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x71, _b_x72, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x397);
}


// lift anonymous function
struct kk_utest_assert_eq_fun400__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun400(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun400(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun400__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun400__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun400, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun400(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun400__t* _self = kk_function_as(struct kk_utest_assert_eq_fun400__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1145) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x401 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x75, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x401);
}


// lift anonymous function
struct kk_utest_assert_eq_fun403__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun403(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun403(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun403__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun403__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun403, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun403(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun403__t* _self = kk_function_as(struct kk_utest_assert_eq_fun403__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1145) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x404 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x80, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x404);
}

kk_unit_t kk_utest_assert_eq(kk_box_t expected, kk_box_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a,b> (expected : a, actual : a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> (test<b>) () */ 
  bool _match_x343;
  kk_box_t _x_x388;
  kk_box_t _x_x394 = kk_box_dup(expected, _ctx); /*1145*/
  kk_box_t _x_x395 = kk_box_dup(actual, _ctx); /*1145*/
  _x_x388 = kk_std_core_hnd__open_none3(kk_utest_new_assert_eq_fun389(_ctx), _x_x394, _x_x395, kk_function_box(kk_utest_new_assert_eq_fun396(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*1003*/
  _match_x343 = kk_bool_unbox(_x_x388); /*bool*/
  if (_match_x343) {
    kk_string_t expected_0_10003;
    kk_box_t _x_x398;
    kk_function_t _x_x399;
    kk_function_dup(_implicit_fs_show, _ctx);
    _x_x399 = kk_utest_new_assert_eq_fun400(_implicit_fs_show, _ctx); /*(1000) -> 1002 1001*/
    _x_x398 = kk_std_core_hnd__open_none1(_x_x399, expected, _ctx); /*1001*/
    expected_0_10003 = kk_string_unbox(_x_x398); /*string*/
    kk_string_t actual_0_10004;
    kk_box_t _x_x402 = kk_std_core_hnd__open_none1(kk_utest_new_assert_eq_fun403(_implicit_fs_show, _ctx), actual, _ctx); /*1001*/
    actual_0_10004 = kk_string_unbox(_x_x402); /*string*/
    kk_std_core_hnd__ev evx_10067 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test<_697>>*/;
    kk_box_t _x_x405;
    {
      struct kk_std_core_hnd_Ev* _con_x406 = kk_std_core_hnd__as_Ev(evx_10067, _ctx);
      kk_box_t _box_x83 = _con_x406->hnd;
      int32_t m = _con_x406->marker;
      kk_utest__test h = kk_utest__test_unbox(_box_x83, KK_BORROWED, _ctx);
      kk_utest__test_dup(h, _ctx);
      {
        struct kk_utest__Hnd_test* _con_x407 = kk_utest__as_Hnd_test(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x407->_cfc;
        kk_std_core_hnd__clause2 _fun_test_fail = _con_x407->_fun_test_fail;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x88 = _fun_test_fail.clause;
          _x_x405 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x88, (_fun_unbox_x88, m, evx_10067, kk_string_box(expected_0_10003), kk_string_box(actual_0_10004), _ctx), _ctx); /*1016*/
        }
      }
    }
    kk_unit_unbox(_x_x405); return kk_Unit;
  }
  {
    kk_function_drop(_implicit_fs_show, _ctx);
    kk_box_drop(expected, _ctx);
    kk_box_drop(actual, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_utest__mlift_assert_eq_eff_10054_fun409__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest__mlift_assert_eq_eff_10054_fun409(kk_function_t _fself, kk_box_t _b_x104, kk_box_t _b_x105, kk_box_t _b_x106, kk_context_t* _ctx);
static kk_function_t kk_utest__new_mlift_assert_eq_eff_10054_fun409(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest__mlift_assert_eq_eff_10054_fun409, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest__mlift_assert_eq_eff_10054_fun411__t {
  struct kk_function_s _base;
  kk_box_t _b_x106;
};
static bool kk_utest__mlift_assert_eq_eff_10054_fun411(kk_function_t _fself, kk_box_t _b_x110, kk_box_t _b_x111, kk_context_t* _ctx);
static kk_function_t kk_utest__new_mlift_assert_eq_eff_10054_fun411(kk_box_t _b_x106, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10054_fun411__t* _self = kk_function_alloc_as(struct kk_utest__mlift_assert_eq_eff_10054_fun411__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest__mlift_assert_eq_eff_10054_fun411, kk_context());
  _self->_b_x106 = _b_x106;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_utest__mlift_assert_eq_eff_10054_fun411(kk_function_t _fself, kk_box_t _b_x110, kk_box_t _b_x111, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10054_fun411__t* _self = kk_function_as(struct kk_utest__mlift_assert_eq_eff_10054_fun411__t*, _fself, _ctx);
  kk_box_t _b_x106 = _self->_b_x106; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x106, _ctx);}, {}, _ctx)
  kk_box_t _x_x412;
  kk_function_t _x_x413 = kk_function_unbox(_b_x106, _ctx); /*(107, 108) -> 109*/
  _x_x412 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x413, (_x_x413, _b_x110, _b_x111, _ctx), _ctx); /*109*/
  return kk_bool_unbox(_x_x412);
}
static kk_box_t kk_utest__mlift_assert_eq_eff_10054_fun409(kk_function_t _fself, kk_box_t _b_x104, kk_box_t _b_x105, kk_box_t _b_x106, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x410;
  kk_box_t x_141 = _b_x104; /*1276*/;
  kk_box_t y_142 = _b_x105; /*1276*/;
  kk_function_t _implicit_fs__lp__at_x_0_143_eq__eq__rp_ = kk_utest__new_mlift_assert_eq_eff_10054_fun411(_b_x106, _ctx); /*(1276, 1276) -> bool*/;
  bool b_10002 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_0_143_eq__eq__rp_, (_implicit_fs__lp__at_x_0_143_eq__eq__rp_, x_141, y_142, _ctx), _ctx); /*bool*/;
  if (b_10002) {
    _x_x410 = false; /*bool*/
  }
  else {
    _x_x410 = true; /*bool*/
  }
  return kk_bool_box(_x_x410);
}


// lift anonymous function
struct kk_utest__mlift_assert_eq_eff_10054_fun416__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_utest__mlift_assert_eq_eff_10054_fun416(kk_function_t _fself, kk_box_t _b_x115, kk_box_t _b_x116, kk_context_t* _ctx);
static kk_function_t kk_utest__new_mlift_assert_eq_eff_10054_fun416(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10054_fun416__t* _self = kk_function_alloc_as(struct kk_utest__mlift_assert_eq_eff_10054_fun416__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest__mlift_assert_eq_eff_10054_fun416, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest__mlift_assert_eq_eff_10054_fun416(kk_function_t _fself, kk_box_t _b_x115, kk_box_t _b_x116, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10054_fun416__t* _self = kk_function_as(struct kk_utest__mlift_assert_eq_eff_10054_fun416__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1276, 1276) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x417 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x115, _b_x116, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x417);
}


// lift anonymous function
struct kk_utest__mlift_assert_eq_eff_10054_fun420__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest__mlift_assert_eq_eff_10054_fun420(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx);
static kk_function_t kk_utest__new_mlift_assert_eq_eff_10054_fun420(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10054_fun420__t* _self = kk_function_alloc_as(struct kk_utest__mlift_assert_eq_eff_10054_fun420__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest__mlift_assert_eq_eff_10054_fun420, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest__mlift_assert_eq_eff_10054_fun420(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10054_fun420__t* _self = kk_function_as(struct kk_utest__mlift_assert_eq_eff_10054_fun420__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1276) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x421 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x119, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x421);
}


// lift anonymous function
struct kk_utest__mlift_assert_eq_eff_10054_fun423__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest__mlift_assert_eq_eff_10054_fun423(kk_function_t _fself, kk_box_t _b_x124, kk_context_t* _ctx);
static kk_function_t kk_utest__new_mlift_assert_eq_eff_10054_fun423(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10054_fun423__t* _self = kk_function_alloc_as(struct kk_utest__mlift_assert_eq_eff_10054_fun423__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest__mlift_assert_eq_eff_10054_fun423, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest__mlift_assert_eq_eff_10054_fun423(kk_function_t _fself, kk_box_t _b_x124, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10054_fun423__t* _self = kk_function_as(struct kk_utest__mlift_assert_eq_eff_10054_fun423__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1276) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x424 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x124, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x424);
}

kk_unit_t kk_utest__mlift_assert_eq_eff_10054(kk_box_t expected_sq_, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_box_t actual_sq_, kk_context_t* _ctx) { /* forall<_a,b,c> (expected' : b, ?(==) : (b, b) -> bool, ?show : (b) -> string, actual' : b) -> (test<c>) () */ 
  bool _match_x342;
  kk_box_t _x_x408;
  kk_box_t _x_x414 = kk_box_dup(expected_sq_, _ctx); /*1276*/
  kk_box_t _x_x415 = kk_box_dup(actual_sq_, _ctx); /*1276*/
  _x_x408 = kk_std_core_hnd__open_none3(kk_utest__new_mlift_assert_eq_eff_10054_fun409(_ctx), _x_x414, _x_x415, kk_function_box(kk_utest__new_mlift_assert_eq_eff_10054_fun416(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*1003*/
  _match_x342 = kk_bool_unbox(_x_x408); /*bool*/
  if (_match_x342) {
    kk_string_t expected_0_10005;
    kk_box_t _x_x418;
    kk_function_t _x_x419;
    kk_function_dup(_implicit_fs_show, _ctx);
    _x_x419 = kk_utest__new_mlift_assert_eq_eff_10054_fun420(_implicit_fs_show, _ctx); /*(1000) -> 1002 1001*/
    _x_x418 = kk_std_core_hnd__open_none1(_x_x419, expected_sq_, _ctx); /*1001*/
    expected_0_10005 = kk_string_unbox(_x_x418); /*string*/
    kk_string_t actual_0_10006;
    kk_box_t _x_x422 = kk_std_core_hnd__open_none1(kk_utest__new_mlift_assert_eq_eff_10054_fun423(_implicit_fs_show, _ctx), actual_sq_, _ctx); /*1001*/
    actual_0_10006 = kk_string_unbox(_x_x422); /*string*/
    kk_std_core_hnd__ev evx_10071 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test<_697>>*/;
    kk_box_t _x_x425;
    {
      struct kk_std_core_hnd_Ev* _con_x426 = kk_std_core_hnd__as_Ev(evx_10071, _ctx);
      kk_box_t _box_x127 = _con_x426->hnd;
      int32_t m = _con_x426->marker;
      kk_utest__test h = kk_utest__test_unbox(_box_x127, KK_BORROWED, _ctx);
      kk_utest__test_dup(h, _ctx);
      {
        struct kk_utest__Hnd_test* _con_x427 = kk_utest__as_Hnd_test(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x427->_cfc;
        kk_std_core_hnd__clause2 _fun_test_fail = _con_x427->_fun_test_fail;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x132 = _fun_test_fail.clause;
          _x_x425 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x132, (_fun_unbox_x132, m, evx_10071, kk_string_box(expected_0_10005), kk_string_box(actual_0_10006), _ctx), _ctx); /*1016*/
        }
      }
    }
    kk_unit_unbox(_x_x425); return kk_Unit;
  }
  {
    kk_function_drop(_implicit_fs_show, _ctx);
    kk_box_drop(expected_sq_, _ctx);
    kk_box_drop(actual_sq_, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_utest__mlift_assert_eq_eff_10055_fun429__t {
  struct kk_function_s _base;
  kk_box_t expected_sq_;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest__mlift_assert_eq_eff_10055_fun429(kk_function_t _fself, kk_box_t _b_x145, kk_context_t* _ctx);
static kk_function_t kk_utest__new_mlift_assert_eq_eff_10055_fun429(kk_box_t expected_sq_, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10055_fun429__t* _self = kk_function_alloc_as(struct kk_utest__mlift_assert_eq_eff_10055_fun429__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest__mlift_assert_eq_eff_10055_fun429, kk_context());
  _self->expected_sq_ = expected_sq_;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest__mlift_assert_eq_eff_10055_fun429(kk_function_t _fself, kk_box_t _b_x145, kk_context_t* _ctx) {
  struct kk_utest__mlift_assert_eq_eff_10055_fun429__t* _self = kk_function_as(struct kk_utest__mlift_assert_eq_eff_10055_fun429__t*, _fself, _ctx);
  kk_box_t expected_sq_ = _self->expected_sq_; /* 1276 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1276, 1276) -> bool */
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1276) -> string */
  kk_drop_match(_self, {kk_box_dup(expected_sq_, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_box_t actual_147_sq_ = _b_x145; /*1276*/;
  kk_unit_t _x_x430 = kk_Unit;
  kk_utest__mlift_assert_eq_eff_10054(expected_sq_, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, actual_147_sq_, _ctx);
  return kk_unit_box(_x_x430);
}

kk_unit_t kk_utest__mlift_assert_eq_eff_10055(kk_function_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_box_t expected_sq_, kk_context_t* _ctx) { /* forall<_a,b,c> (actual : () -> (test<c>) b, ?(==) : (b, b) -> bool, ?show : (b) -> string, expected' : b) -> (test<c>) () */ 
  kk_box_t x_10075 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), actual, (actual, _ctx), _ctx); /*1276*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10075, _ctx);
    kk_box_t _x_x428 = kk_std_core_hnd_yield_extend(kk_utest__new_mlift_assert_eq_eff_10055_fun429(expected_sq_, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx), _ctx); /*3278*/
    kk_unit_unbox(_x_x428); return kk_Unit;
  }
  {
    kk_utest__mlift_assert_eq_eff_10054(expected_sq_, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, x_10075, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_utest_assert_eq_eff_fun432__t {
  struct kk_function_s _base;
  kk_function_t actual;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_eff_fun432(kk_function_t _fself, kk_box_t _b_x149, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_eff_fun432(kk_function_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun432__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_eff_fun432__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_eff_fun432, kk_context());
  _self->actual = actual;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_eff_fun432(kk_function_t _fself, kk_box_t _b_x149, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun432__t* _self = kk_function_as(struct kk_utest_assert_eq_eff_fun432__t*, _fself, _ctx);
  kk_function_t actual = _self->actual; /* () -> (utest/test<1277>) 1276 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1276, 1276) -> bool */
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1276) -> string */
  kk_drop_match(_self, {kk_function_dup(actual, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_box_t expected_195_sq_ = _b_x149; /*1276*/;
  kk_unit_t _x_x433 = kk_Unit;
  kk_utest__mlift_assert_eq_eff_10055(actual, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, expected_195_sq_, _ctx);
  return kk_unit_box(_x_x433);
}


// lift anonymous function
struct kk_utest_assert_eq_eff_fun435__t {
  struct kk_function_s _base;
  kk_box_t x_10077;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_eff_fun435(kk_function_t _fself, kk_box_t _b_x151, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_eff_fun435(kk_box_t x_10077, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun435__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_eff_fun435__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_eff_fun435, kk_context());
  _self->x_10077 = x_10077;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_eff_fun435(kk_function_t _fself, kk_box_t _b_x151, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun435__t* _self = kk_function_as(struct kk_utest_assert_eq_eff_fun435__t*, _fself, _ctx);
  kk_box_t x_10077 = _self->x_10077; /* 1276 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1276, 1276) -> bool */
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1276) -> string */
  kk_drop_match(_self, {kk_box_dup(x_10077, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_box_t actual_196_sq_ = _b_x151; /*1276*/;
  kk_unit_t _x_x436 = kk_Unit;
  kk_utest__mlift_assert_eq_eff_10054(x_10077, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, actual_196_sq_, _ctx);
  return kk_unit_box(_x_x436);
}


// lift anonymous function
struct kk_utest_assert_eq_eff_fun438__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_assert_eq_eff_fun438(kk_function_t _fself, kk_box_t _b_x156, kk_box_t _b_x157, kk_box_t _b_x158, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_eff_fun438(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_assert_eq_eff_fun438, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_assert_eq_eff_fun440__t {
  struct kk_function_s _base;
  kk_box_t _b_x158;
};
static bool kk_utest_assert_eq_eff_fun440(kk_function_t _fself, kk_box_t _b_x162, kk_box_t _b_x163, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_eff_fun440(kk_box_t _b_x158, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun440__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_eff_fun440__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_eff_fun440, kk_context());
  _self->_b_x158 = _b_x158;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_utest_assert_eq_eff_fun440(kk_function_t _fself, kk_box_t _b_x162, kk_box_t _b_x163, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun440__t* _self = kk_function_as(struct kk_utest_assert_eq_eff_fun440__t*, _fself, _ctx);
  kk_box_t _b_x158 = _self->_b_x158; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x158, _ctx);}, {}, _ctx)
  kk_box_t _x_x441;
  kk_function_t _x_x442 = kk_function_unbox(_b_x158, _ctx); /*(159, 160) -> 161*/
  _x_x441 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x442, (_x_x442, _b_x162, _b_x163, _ctx), _ctx); /*161*/
  return kk_bool_unbox(_x_x441);
}
static kk_box_t kk_utest_assert_eq_eff_fun438(kk_function_t _fself, kk_box_t _b_x156, kk_box_t _b_x157, kk_box_t _b_x158, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x439;
  kk_box_t x_1_197 = _b_x156; /*1276*/;
  kk_box_t y_198 = _b_x157; /*1276*/;
  kk_function_t _implicit_fs__lp__at_x_0_199_eq__eq__rp_ = kk_utest_new_assert_eq_eff_fun440(_b_x158, _ctx); /*(1276, 1276) -> bool*/;
  bool b_10002 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_0_199_eq__eq__rp_, (_implicit_fs__lp__at_x_0_199_eq__eq__rp_, x_1_197, y_198, _ctx), _ctx); /*bool*/;
  if (b_10002) {
    _x_x439 = false; /*bool*/
  }
  else {
    _x_x439 = true; /*bool*/
  }
  return kk_bool_box(_x_x439);
}


// lift anonymous function
struct kk_utest_assert_eq_eff_fun445__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_utest_assert_eq_eff_fun445(kk_function_t _fself, kk_box_t _b_x167, kk_box_t _b_x168, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_eff_fun445(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun445__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_eff_fun445__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_eff_fun445, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_eff_fun445(kk_function_t _fself, kk_box_t _b_x167, kk_box_t _b_x168, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun445__t* _self = kk_function_as(struct kk_utest_assert_eq_eff_fun445__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1276, 1276) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x446 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x167, _b_x168, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x446);
}


// lift anonymous function
struct kk_utest_assert_eq_eff_fun449__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_eff_fun449(kk_function_t _fself, kk_box_t _b_x171, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_eff_fun449(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun449__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_eff_fun449__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_eff_fun449, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_eff_fun449(kk_function_t _fself, kk_box_t _b_x171, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun449__t* _self = kk_function_as(struct kk_utest_assert_eq_eff_fun449__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1276) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x450 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x171, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x450);
}


// lift anonymous function
struct kk_utest_assert_eq_eff_fun452__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_eff_fun452(kk_function_t _fself, kk_box_t _b_x176, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_eff_fun452(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun452__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_eff_fun452__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_eff_fun452, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_eff_fun452(kk_function_t _fself, kk_box_t _b_x176, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_eff_fun452__t* _self = kk_function_as(struct kk_utest_assert_eq_eff_fun452__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1276) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x453 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x176, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x453);
}

kk_unit_t kk_utest_assert_eq_eff(kk_function_t expected, kk_function_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a,b> (expected : () -> (test<b>) a, actual : () -> (test<b>) a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> (test<b>) () */ 
  kk_box_t x_10077 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), expected, (expected, _ctx), _ctx); /*1276*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10077, _ctx);
    kk_box_t _x_x431 = kk_std_core_hnd_yield_extend(kk_utest_new_assert_eq_eff_fun432(actual, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx), _ctx); /*3278*/
    kk_unit_unbox(_x_x431); return kk_Unit;
  }
  {
    kk_box_t x_0_10080 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), actual, (actual, _ctx), _ctx); /*1276*/;
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10080, _ctx);
      kk_box_t _x_x434 = kk_std_core_hnd_yield_extend(kk_utest_new_assert_eq_eff_fun435(x_10077, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx), _ctx); /*3278*/
      kk_unit_unbox(_x_x434); return kk_Unit;
    }
    {
      bool _match_x340;
      kk_box_t _x_x437;
      kk_box_t _x_x443 = kk_box_dup(x_10077, _ctx); /*1276*/
      kk_box_t _x_x444 = kk_box_dup(x_0_10080, _ctx); /*1276*/
      _x_x437 = kk_std_core_hnd__open_none3(kk_utest_new_assert_eq_eff_fun438(_ctx), _x_x443, _x_x444, kk_function_box(kk_utest_new_assert_eq_eff_fun445(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*1003*/
      _match_x340 = kk_bool_unbox(_x_x437); /*bool*/
      if (_match_x340) {
        kk_string_t expected_0_10005;
        kk_box_t _x_x447;
        kk_function_t _x_x448;
        kk_function_dup(_implicit_fs_show, _ctx);
        _x_x448 = kk_utest_new_assert_eq_eff_fun449(_implicit_fs_show, _ctx); /*(1000) -> 1002 1001*/
        _x_x447 = kk_std_core_hnd__open_none1(_x_x448, x_10077, _ctx); /*1001*/
        expected_0_10005 = kk_string_unbox(_x_x447); /*string*/
        kk_string_t actual_0_10006;
        kk_box_t _x_x451 = kk_std_core_hnd__open_none1(kk_utest_new_assert_eq_eff_fun452(_implicit_fs_show, _ctx), x_0_10080, _ctx); /*1001*/
        actual_0_10006 = kk_string_unbox(_x_x451); /*string*/
        kk_std_core_hnd__ev evx_10083 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test<_697>>*/;
        kk_box_t _x_x454;
        {
          struct kk_std_core_hnd_Ev* _con_x455 = kk_std_core_hnd__as_Ev(evx_10083, _ctx);
          kk_box_t _box_x179 = _con_x455->hnd;
          int32_t m = _con_x455->marker;
          kk_utest__test h = kk_utest__test_unbox(_box_x179, KK_BORROWED, _ctx);
          kk_utest__test_dup(h, _ctx);
          {
            struct kk_utest__Hnd_test* _con_x456 = kk_utest__as_Hnd_test(h, _ctx);
            kk_integer_t _pat_0_3 = _con_x456->_cfc;
            kk_std_core_hnd__clause2 _fun_test_fail = _con_x456->_fun_test_fail;
            if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
              kk_integer_drop(_pat_0_3, _ctx);
              kk_datatype_ptr_free(h, _ctx);
            }
            else {
              kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
              kk_datatype_ptr_decref(h, _ctx);
            }
            {
              kk_function_t _fun_unbox_x184 = _fun_test_fail.clause;
              _x_x454 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x184, (_fun_unbox_x184, m, evx_10083, kk_string_box(expected_0_10005), kk_string_box(actual_0_10006), _ctx), _ctx); /*1016*/
            }
          }
        }
        kk_unit_unbox(_x_x454); return kk_Unit;
      }
      {
        kk_function_drop(_implicit_fs_show, _ctx);
        kk_box_drop(x_10077, _ctx);
        kk_box_drop(x_0_10080, _ctx);
        kk_Unit; return kk_Unit;
      }
    }
  }
}


// lift anonymous function
struct kk_utest_test_fun458__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_utest_test_fun458(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun458(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun458, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_test_fun460__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun460(kk_function_t _fself, kk_box_t _b_x214, kk_box_t _b_x215, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun460(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun460, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun460(kk_function_t _fself, kk_box_t _b_x214, kk_box_t _b_x215, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t expected_237 = kk_string_unbox(_b_x214); /*string*/;
  kk_string_t actual_238 = kk_string_unbox(_b_x215); /*string*/;
  kk_std_core_hnd__ev evx_10088 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-case<_853>>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x461 = kk_std_core_hnd__as_Ev(evx_10088, _ctx);
    kk_box_t _box_x200 = _con_x461->hnd;
    int32_t m_0 = _con_x461->marker;
    kk_utest__test_case h = kk_utest__test_case_unbox(_box_x200, KK_BORROWED, _ctx);
    kk_utest__test_case_dup(h, _ctx);
    {
      struct kk_utest__Hnd_test_case* _con_x462 = kk_utest__as_Hnd_test_case(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x462->_cfc;
      kk_std_core_hnd__clause2 _fun_test_case_fail = _con_x462->_fun_test_case_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_test_case_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x205 = _fun_test_case_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x205, (_fun_unbox_x205, m_0, evx_10088, kk_string_box(expected_237), kk_string_box(actual_238), _ctx), _ctx);
      }
    }
  }
}
static kk_unit_t kk_utest_test_fun458(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x459 = kk_std_core_hnd_under2(ev, kk_utest_new_test_fun460(_ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*3374*/
  kk_unit_unbox(_x_x459); return kk_Unit;
}


// lift anonymous function
struct kk_utest_test_fun465__t {
  struct kk_function_s _base;
  kk_function_t _b_x216_230;
};
static kk_box_t kk_utest_test_fun465(kk_function_t _fself, int32_t _b_x217, kk_std_core_hnd__ev _b_x218, kk_box_t _b_x219, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun465(kk_function_t _b_x216_230, kk_context_t* _ctx) {
  struct kk_utest_test_fun465__t* _self = kk_function_alloc_as(struct kk_utest_test_fun465__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun465, kk_context());
  _self->_b_x216_230 = _b_x216_230;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun465(kk_function_t _fself, int32_t _b_x217, kk_std_core_hnd__ev _b_x218, kk_box_t _b_x219, kk_box_t _b_x220, kk_context_t* _ctx) {
  struct kk_utest_test_fun465__t* _self = kk_function_as(struct kk_utest_test_fun465__t*, _fself, _ctx);
  kk_function_t _b_x216_230 = _self->_b_x216_230; /* (m : hnd/marker<(utest/test-case<1372>),()>, ev : hnd/ev<utest/test<1372>>, x1 : string, x2 : string) -> (utest/test-case<1372>) () */
  kk_drop_match(_self, {kk_function_dup(_b_x216_230, _ctx);}, {}, _ctx)
  kk_unit_t _x_x466 = kk_Unit;
  kk_string_t _x_x467 = kk_string_unbox(_b_x219); /*string*/
  kk_string_t _x_x468 = kk_string_unbox(_b_x220); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x216_230, (_b_x216_230, _b_x217, _b_x218, _x_x467, _x_x468, _ctx), _ctx);
  return kk_unit_box(_x_x466);
}


// lift anonymous function
struct kk_utest_test_fun469__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun469(kk_function_t _fself, kk_box_t _b_x226, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun469(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun469, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun469(kk_function_t _fself, kk_box_t _b_x226, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_239 = kk_Unit;
  kk_unit_unbox(_b_x226);
  return kk_unit_box(_x_239);
}


// lift anonymous function
struct kk_utest_test_fun470__t {
  struct kk_function_s _base;
  kk_function_t tests;
};
static kk_box_t kk_utest_test_fun470(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun470(kk_function_t tests, kk_context_t* _ctx) {
  struct kk_utest_test_fun470__t* _self = kk_function_alloc_as(struct kk_utest_test_fun470__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun470, kk_context());
  _self->tests = tests;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun471__t {
  struct kk_function_s _base;
  kk_function_t _b_x222_236;
};
static kk_box_t kk_utest_test_fun471(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun471(kk_function_t _b_x222_236, kk_context_t* _ctx) {
  struct kk_utest_test_fun471__t* _self = kk_function_alloc_as(struct kk_utest_test_fun471__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun471, kk_context());
  _self->_b_x222_236 = _b_x222_236;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun471(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun471__t* _self = kk_function_as(struct kk_utest_test_fun471__t*, _fself, _ctx);
  kk_function_t _b_x222_236 = _self->_b_x222_236; /* () -> (utest/test<1372>) () */
  kk_drop_match(_self, {kk_function_dup(_b_x222_236, _ctx);}, {}, _ctx)
  kk_unit_t _x_x472 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x222_236, (_b_x222_236, _ctx), _ctx);
  return kk_unit_box(_x_x472);
}
static kk_box_t kk_utest_test_fun470(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun470__t* _self = kk_function_as(struct kk_utest_test_fun470__t*, _fself, _ctx);
  kk_function_t tests = _self->tests; /* () -> (utest/test<1372>) () */
  kk_drop_match(_self, {kk_function_dup(tests, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x221_235 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x222_236 = tests; /*() -> (utest/test<1372>) ()*/;
  return kk_std_core_hnd__open_at0(_b_x221_235, kk_utest_new_test_fun471(_b_x222_236, _ctx), _ctx);
}

kk_unit_t kk_utest_test(kk_string_t test_name, kk_function_t tests, kk_context_t* _ctx) { /* forall<a> (test-name : string, tests : () -> (test<a>) ()) -> (test-case<a>) () */ 
  kk_string_drop(test_name, _ctx);
  kk_box_t _x_x457;
  kk_function_t _b_x216_230 = kk_utest_new_test_fun458(_ctx); /*(m : hnd/marker<(utest/test-case<1372>),()>, ev : hnd/ev<utest/test<1372>>, x1 : string, x2 : string) -> (utest/test-case<1372>) ()*/;
  kk_utest__test _x_x463;
  kk_std_core_hnd__clause2 _x_x464 = kk_std_core_hnd__new_Clause2(kk_utest_new_test_fun465(_b_x216_230, _ctx), _ctx); /*hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  _x_x463 = kk_utest__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(1), _x_x464, _ctx); /*utest/test<10,11,12>*/
  _x_x457 = kk_utest__handle_test(_x_x463, kk_utest_new_test_fun469(_ctx), kk_utest_new_test_fun470(tests, _ctx), _ctx); /*612*/
  kk_unit_unbox(_x_x457); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun474__t {
  struct kk_function_s _base;
  kk_string_t suite_name;
};
static kk_unit_t kk_utest_suite_fun474(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun474(kk_string_t suite_name, kk_context_t* _ctx) {
  struct kk_utest_suite_fun474__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun474__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun474, kk_context());
  _self->suite_name = suite_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun476__t {
  struct kk_function_s _base;
  kk_string_t suite_name;
};
static kk_box_t kk_utest_suite_fun476(kk_function_t _fself, kk_box_t _b_x250, kk_box_t _b_x251, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun476(kk_string_t suite_name, kk_context_t* _ctx) {
  struct kk_utest_suite_fun476__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun476__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun476, kk_context());
  _self->suite_name = suite_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun477__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun477(kk_function_t _fself, kk_utest__test_suite hnd, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun477(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun477, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun480__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun480(kk_function_t _fself, kk_utest__test_suite _x1_x479, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun480(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun480, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun480(kk_function_t _fself, kk_utest__test_suite _x1_x479, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_utest__select_test_suite_fail(_x1_x479, _ctx);
}
static kk_std_core_hnd__clause1 kk_utest_suite_fun477(kk_function_t _fself, kk_utest__test_suite hnd, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__clause1 _brw_x337;
  kk_function_t _x_x478 = kk_utest_new_suite_fun480(_ctx); /*(hnd : utest/test-suite<956,957,958>) -> hnd/clause1<(string, string, string),(),utest/test-suite<956>,957,958>*/
  _brw_x337 = kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_suite, kk_context_t*), _x_x478, (_x_x478, hnd, _ctx), _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite<956>,957,958>*/
  kk_utest__test_suite_drop(hnd, _ctx);
  return _brw_x337;
}


// lift anonymous function
struct kk_utest_suite_fun481__t {
  struct kk_function_s _base;
  kk_function_t _b_x241_272;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun481(kk_function_t _fself, kk_box_t _b_x245, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun481(kk_function_t _b_x241_272, kk_context_t* _ctx) {
  struct kk_utest_suite_fun481__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun481__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun481, kk_context());
  _self->_b_x241_272 = _b_x241_272;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun481(kk_function_t _fself, kk_box_t _b_x245, kk_context_t* _ctx) {
  struct kk_utest_suite_fun481__t* _self = kk_function_as(struct kk_utest_suite_fun481__t*, _fself, _ctx);
  kk_function_t _b_x241_272 = _self->_b_x241_272; /* (hnd : utest/test-suite<_1012,1016,1017>) -> hnd/clause1<(string, string, string),(),utest/test-suite<_1012>,1016,1017> */
  kk_drop_match(_self, {kk_function_dup(_b_x241_272, _ctx);}, {}, _ctx)
  kk_utest__test_suite _x_x482 = kk_utest__test_suite_unbox(_b_x245, KK_OWNED, _ctx); /*utest/test-suite<_1012,1016,1017>*/
  return kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_suite, kk_context_t*), _b_x241_272, (_b_x241_272, _x_x482, _ctx), _ctx);
}
static kk_box_t kk_utest_suite_fun476(kk_function_t _fself, kk_box_t _b_x250, kk_box_t _b_x251, kk_context_t* _ctx) {
  struct kk_utest_suite_fun476__t* _self = kk_function_as(struct kk_utest_suite_fun476__t*, _fself, _ctx);
  kk_string_t suite_name = _self->suite_name; /* string */
  kk_drop_match(_self, {kk_string_dup(suite_name, _ctx);}, {}, _ctx)
  kk_string_t expected_278 = kk_string_unbox(_b_x250); /*string*/;
  kk_string_t actual_279 = kk_string_unbox(_b_x251); /*string*/;
  kk_std_core_hnd__ev _b_x240_271 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-suite<_1012>>*/;
  kk_function_t _b_x241_272 = kk_utest_new_suite_fun477(_ctx); /*(hnd : utest/test-suite<_1012,1016,1017>) -> hnd/clause1<(string, string, string),(),utest/test-suite<_1012>,1016,1017>*/;
  kk_string_t _b_x242_273 = suite_name; /*string*/;
  kk_string_t _b_x243_274 = expected_278; /*string*/;
  kk_string_t _b_x244_275 = actual_279; /*string*/;
  return kk_std_core_hnd__perform3(_b_x240_271, kk_utest_new_suite_fun481(_b_x241_272, _ctx), kk_string_box(_b_x242_273), kk_string_box(_b_x243_274), kk_string_box(_b_x244_275), _ctx);
}
static kk_unit_t kk_utest_suite_fun474(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  struct kk_utest_suite_fun474__t* _self = kk_function_as(struct kk_utest_suite_fun474__t*, _fself, _ctx);
  kk_string_t suite_name = _self->suite_name; /* string */
  kk_drop_match(_self, {kk_string_dup(suite_name, _ctx);}, {}, _ctx)
  kk_box_t _x_x475 = kk_std_core_hnd_under2(ev, kk_utest_new_suite_fun476(suite_name, _ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*3467*/
  kk_unit_unbox(_x_x475); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun485__t {
  struct kk_function_s _base;
  kk_function_t _b_x252_266;
};
static kk_box_t kk_utest_suite_fun485(kk_function_t _fself, int32_t _b_x253, kk_std_core_hnd__ev _b_x254, kk_box_t _b_x255, kk_box_t _b_x256, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun485(kk_function_t _b_x252_266, kk_context_t* _ctx) {
  struct kk_utest_suite_fun485__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun485__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun485, kk_context());
  _self->_b_x252_266 = _b_x252_266;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun485(kk_function_t _fself, int32_t _b_x253, kk_std_core_hnd__ev _b_x254, kk_box_t _b_x255, kk_box_t _b_x256, kk_context_t* _ctx) {
  struct kk_utest_suite_fun485__t* _self = kk_function_as(struct kk_utest_suite_fun485__t*, _fself, _ctx);
  kk_function_t _b_x252_266 = _self->_b_x252_266; /* (m : hnd/marker<(utest/test-suite<1465>),()>, ev : hnd/ev<utest/test-case<1465>>, x1 : string, x2 : string) -> (utest/test-suite<1465>) () */
  kk_drop_match(_self, {kk_function_dup(_b_x252_266, _ctx);}, {}, _ctx)
  kk_unit_t _x_x486 = kk_Unit;
  kk_string_t _x_x487 = kk_string_unbox(_b_x255); /*string*/
  kk_string_t _x_x488 = kk_string_unbox(_b_x256); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x252_266, (_b_x252_266, _b_x253, _b_x254, _x_x487, _x_x488, _ctx), _ctx);
  return kk_unit_box(_x_x486);
}


// lift anonymous function
struct kk_utest_suite_fun489__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_suite_fun489(kk_function_t _fself, kk_box_t _b_x262, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun489(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun489, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_suite_fun489(kk_function_t _fself, kk_box_t _b_x262, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_280 = kk_Unit;
  kk_unit_unbox(_b_x262);
  return kk_unit_box(_x_280);
}


// lift anonymous function
struct kk_utest_suite_fun490__t {
  struct kk_function_s _base;
  kk_function_t test_cases;
};
static kk_box_t kk_utest_suite_fun490(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun490(kk_function_t test_cases, kk_context_t* _ctx) {
  struct kk_utest_suite_fun490__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun490__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun490, kk_context());
  _self->test_cases = test_cases;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun491__t {
  struct kk_function_s _base;
  kk_function_t _b_x258_277;
};
static kk_box_t kk_utest_suite_fun491(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun491(kk_function_t _b_x258_277, kk_context_t* _ctx) {
  struct kk_utest_suite_fun491__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun491__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun491, kk_context());
  _self->_b_x258_277 = _b_x258_277;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun491(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun491__t* _self = kk_function_as(struct kk_utest_suite_fun491__t*, _fself, _ctx);
  kk_function_t _b_x258_277 = _self->_b_x258_277; /* () -> (utest/test-case<1465>) () */
  kk_drop_match(_self, {kk_function_dup(_b_x258_277, _ctx);}, {}, _ctx)
  kk_unit_t _x_x492 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x258_277, (_b_x258_277, _ctx), _ctx);
  return kk_unit_box(_x_x492);
}
static kk_box_t kk_utest_suite_fun490(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun490__t* _self = kk_function_as(struct kk_utest_suite_fun490__t*, _fself, _ctx);
  kk_function_t test_cases = _self->test_cases; /* () -> (utest/test-case<1465>) () */
  kk_drop_match(_self, {kk_function_dup(test_cases, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x257_276 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x258_277 = test_cases; /*() -> (utest/test-case<1465>) ()*/;
  return kk_std_core_hnd__open_at0(_b_x257_276, kk_utest_new_suite_fun491(_b_x258_277, _ctx), _ctx);
}

kk_unit_t kk_utest_suite(kk_string_t suite_name, kk_function_t test_cases, kk_context_t* _ctx) { /* forall<a> (suite-name : string, test-cases : () -> (test-case<a>) ()) -> (test-suite<a>) () */ 
  kk_box_t _x_x473;
  kk_function_t _b_x252_266 = kk_utest_new_suite_fun474(suite_name, _ctx); /*(m : hnd/marker<(utest/test-suite<1465>),()>, ev : hnd/ev<utest/test-case<1465>>, x1 : string, x2 : string) -> (utest/test-suite<1465>) ()*/;
  kk_utest__test_case _x_x483;
  kk_std_core_hnd__clause2 _x_x484 = kk_std_core_hnd__new_Clause2(kk_utest_new_suite_fun485(_b_x252_266, _ctx), _ctx); /*hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  _x_x483 = kk_utest__new_Hnd_test_case(kk_reuse_null, 0, kk_integer_from_small(1), _x_x484, _ctx); /*utest/test-case<23,24,25>*/
  _x_x473 = kk_utest__handle_test_case(_x_x483, kk_utest_new_suite_fun489(_ctx), kk_utest_new_suite_fun490(test_cases, _ctx), _ctx); /*768*/
  kk_unit_unbox(_x_x473); return kk_Unit;
}


// lift anonymous function
struct kk_utest_run_utest_fun497__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_utest_run_utest_fun497(kk_function_t _fself, int32_t _b_x295, kk_std_core_hnd__ev _b_x296, kk_box_t _b_x297, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun497(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun497__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun497__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun497, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun497(kk_function_t _fself, int32_t _b_x295, kk_std_core_hnd__ev _b_x296, kk_box_t _b_x297, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun497__t* _self = kk_function_as(struct kk_utest_run_utest_fun497__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<2107,list<(string, string, string)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t ___wildcard_x633__14_332 = _b_x295; /*hnd/marker<<local<2107>,console/console>,()>*/;
  kk_std_core_hnd__ev ___wildcard_x633__17_333 = _b_x296; /*hnd/ev<utest/test-suite<2113>>*/;
  kk_datatype_ptr_dropn(___wildcard_x633__17_333, (KK_I32(3)), _ctx);
  kk_std_core_types__tuple3 x_334 = kk_std_core_types__tuple3_unbox(_b_x297, KK_OWNED, _ctx); /*(string, string, string)*/;
  kk_unit_t _x_x498 = kk_Unit;
  {
    kk_box_t _box_x283 = x_334.fst;
    kk_box_t _box_x284 = x_334.snd;
    kk_box_t _box_x285 = x_334.thd;
    kk_string_t x1 = kk_string_unbox(_box_x283);
    kk_string_t x2 = kk_string_unbox(_box_x284);
    kk_string_t x3 = kk_string_unbox(_box_x285);
    kk_string_dup(x1, _ctx);
    kk_string_dup(x2, _ctx);
    kk_string_dup(x3, _ctx);
    kk_std_core_types__tuple3_drop(x_334, _ctx);
    kk_std_core_types__list _b_x293_307;
    kk_std_core_types__list _x_x499;
    kk_box_t _x_x500;
    kk_ref_t _x_x501 = kk_ref_dup(loc, _ctx); /*local-var<2107,list<(string, string, string)>>*/
    _x_x500 = kk_ref_get(_x_x501,kk_context()); /*3730*/
    _x_x499 = kk_std_core_types__list_unbox(_x_x500, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list _x_x502;
    kk_box_t _x_x503;
    kk_std_core_types__tuple3 _x_x504 = kk_std_core_types__new_Tuple3(kk_string_box(x1), kk_string_box(x2), kk_string_box(x3), _ctx); /*(1042, 1043, 1044)*/
    _x_x503 = kk_std_core_types__tuple3_box(_x_x504, _ctx); /*3754*/
    _x_x502 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x503, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<3754>*/
    _b_x293_307 = kk_std_core_list_append(_x_x499, _x_x502, _ctx); /*list<(string, string, string)>*/
    kk_unit_t _brw_x336 = kk_Unit;
    kk_ref_set_borrow(loc,(kk_std_core_types__list_box(_b_x293_307, _ctx)),kk_context());
    kk_ref_drop(loc, _ctx);
    _brw_x336;
  }
  return kk_unit_box(_x_x498);
}


// lift anonymous function
struct kk_utest_run_utest_fun505__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun505(kk_function_t _fself, kk_box_t _b_x301, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun505(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun505, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun505(kk_function_t _fself, kk_box_t _b_x301, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x301;
}


// lift anonymous function
struct kk_utest_run_utest_fun506__t {
  struct kk_function_s _base;
  kk_function_t test_suites;
};
static kk_box_t kk_utest_run_utest_fun506(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun506(kk_function_t test_suites, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun506__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun506__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun506, kk_context());
  _self->test_suites = test_suites;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun506(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun506__t* _self = kk_function_as(struct kk_utest_run_utest_fun506__t*, _fself, _ctx);
  kk_function_t test_suites = _self->test_suites; /* () -> (utest/test-suite<2113>) () */
  kk_drop_match(_self, {kk_function_dup(test_suites, _ctx);}, {}, _ctx)
  kk_unit_t _x_x507 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), test_suites, (test_suites, _ctx), _ctx);
  return kk_unit_box(_x_x507);
}


// lift anonymous function
struct kk_utest_run_utest_fun516__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun516(kk_function_t _fself, kk_box_t _b_x323, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun516(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun516, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun516(kk_function_t _fself, kk_box_t _b_x323, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x517 = kk_Unit;
  kk_std_core_types__tuple3 _match_x335 = kk_std_core_types__tuple3_unbox(_b_x323, KK_OWNED, _ctx); /*(string, string, string)*/;
  {
    kk_box_t _box_x318 = _match_x335.fst;
    kk_box_t _box_x319 = _match_x335.snd;
    kk_box_t _box_x320 = _match_x335.thd;
    kk_string_t suite_name_0 = kk_string_unbox(_box_x318);
    kk_string_t expected_0 = kk_string_unbox(_box_x319);
    kk_string_t actual_0 = kk_string_unbox(_box_x320);
    kk_string_dup(actual_0, _ctx);
    kk_string_dup(expected_0, _ctx);
    kk_string_dup(suite_name_0, _ctx);
    kk_std_core_types__tuple3_drop(_match_x335, _ctx);
    kk_string_t s_0_10016;
    kk_string_t _x_x518;
    kk_define_string_literal(, _s_x519, 10, "failed at ", _ctx)
    _x_x518 = kk_string_dup(_s_x519, _ctx); /*string*/
    kk_string_t _x_x520 = kk_std_core_show_string_fs_show(suite_name_0, _ctx); /*string*/
    s_0_10016 = kk_std_core_types__lp__plus__plus__rp_(_x_x518, _x_x520, _ctx); /*string*/
    kk_unit_t ___1 = kk_Unit;
    kk_std_core_console_printsln(s_0_10016, _ctx);
    kk_string_t s_1_10017;
    kk_string_t _x_x521;
    kk_define_string_literal(, _s_x522, 9, "expected ", _ctx)
    _x_x521 = kk_string_dup(_s_x522, _ctx); /*string*/
    kk_string_t _x_x523;
    kk_string_t _x_x524;
    kk_string_t _x_x525;
    kk_define_string_literal(, _s_x526, 10, ", but got ", _ctx)
    _x_x525 = kk_string_dup(_s_x526, _ctx); /*string*/
    _x_x524 = kk_std_core_types__lp__plus__plus__rp_(_x_x525, actual_0, _ctx); /*string*/
    _x_x523 = kk_std_core_types__lp__plus__plus__rp_(expected_0, _x_x524, _ctx); /*string*/
    s_1_10017 = kk_std_core_types__lp__plus__plus__rp_(_x_x521, _x_x523, _ctx); /*string*/
    kk_std_core_console_printsln(s_1_10017, _ctx);
  }
  return kk_unit_box(_x_x517);
}

kk_unit_t kk_utest_run_utest(kk_function_t test_suites, kk_context_t* _ctx) { /* forall<a> (test-suites : () -> (test-suite<a>) ()) -> console/console () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<2107,list<(string, string, string)>>*/;
  kk_unit_t __ = kk_Unit;
  kk_box_t _x_x493;
  kk_utest__test_suite _x_x494;
  kk_std_core_hnd__clause1 _x_x495;
  kk_function_t _x_x496;
  kk_ref_dup(loc, _ctx);
  _x_x496 = kk_utest_new_run_utest_fun497(loc, _ctx); /*(hnd/marker<1018,1019>, hnd/ev<1017>, 1015) -> 1018 1016*/
  _x_x495 = kk_std_core_hnd__new_Clause1(_x_x496, _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x494 = kk_utest__new_Hnd_test_suite(kk_reuse_null, 0, kk_integer_from_small(1), _x_x495, _ctx); /*utest/test-suite<44,45,46>*/
  _x_x493 = kk_utest__handle_test_suite(_x_x494, kk_utest_new_run_utest_fun505(_ctx), kk_utest_new_run_utest_fun506(test_suites, _ctx), _ctx); /*924*/
  kk_unit_unbox(_x_x493);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x508;
  kk_define_string_literal(, _s_x509, 16, "Running test...\n", _ctx)
  _x_x508 = kk_string_dup(_s_x509, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x508, _ctx);
  kk_std_core_types__list xs_10015;
  kk_box_t _x_x510;
  kk_ref_t _x_x511 = kk_ref_dup(loc, _ctx); /*local-var<2107,list<(string, string, string)>>*/
  _x_x510 = kk_ref_get(_x_x511,kk_context()); /*4097*/
  xs_10015 = kk_std_core_types__list_unbox(_x_x510, KK_OWNED, _ctx); /*list<(string, string, string)>*/
  kk_unit_t res = kk_Unit;
  if (kk_std_core_types__is_Nil(xs_10015, _ctx)) {
    kk_string_t _x_x512;
    kk_define_string_literal(, _s_x513, 20, "All Test Has Passed!", _ctx)
    _x_x512 = kk_string_dup(_s_x513, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x512, _ctx);
  }
  else {
    kk_std_core_types__list_drop(xs_10015, _ctx);
    kk_std_core_types__list _b_x321_324;
    kk_box_t _x_x514;
    kk_ref_t _x_x515 = kk_ref_dup(loc, _ctx); /*local-var<2107,list<(string, string, string)>>*/
    _x_x514 = kk_ref_get(_x_x515,kk_context()); /*4056*/
    _b_x321_324 = kk_std_core_types__list_unbox(_x_x514, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list ___2 = kk_std_core_list_map(_b_x321_324, kk_utest_new_run_utest_fun516(_ctx), _ctx); /*list<()>*/;
    kk_std_core_types__list_drop(___2, _ctx);
  }
  kk_box_t _x_x527 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*4108*/
  kk_unit_unbox(_x_x527); return kk_Unit;
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
  kk_std_core_maybe__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_core_list__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x368;
    kk_define_string_literal(, _s_x369, 10, "test@utest", _ctx)
    _x_x368 = kk_string_dup(_s_x369, _ctx); /*string*/
    kk_utest__tag_test = kk_std_core_hnd__new_Htag(_x_x368, _ctx); /*forall<a> hnd/htag<utest/test<a>>*/
  }
  {
    kk_string_t _x_x375;
    kk_define_string_literal(, _s_x376, 15, "test-case@utest", _ctx)
    _x_x375 = kk_string_dup(_s_x376, _ctx); /*string*/
    kk_utest__tag_test_case = kk_std_core_hnd__new_Htag(_x_x375, _ctx); /*forall<a> hnd/htag<utest/test-case<a>>*/
  }
  {
    kk_string_t _x_x382;
    kk_define_string_literal(, _s_x383, 16, "test-suite@utest", _ctx)
    _x_x382 = kk_string_dup(_s_x383, _ctx); /*string*/
    kk_utest__tag_test_suite = kk_std_core_hnd__new_Htag(_x_x382, _ctx); /*forall<a> hnd/htag<utest/test-suite<a>>*/
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
  kk_std_core_list__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe__done(_ctx);
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
