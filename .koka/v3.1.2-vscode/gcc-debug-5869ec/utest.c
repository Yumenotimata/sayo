// Koka generated module: utest, koka version: 3.1.2, platform: 64-bit
#include "utest.h"

kk_utest__test_failure kk_utest_test_failure_fs__copy(kk_utest__test_failure _this, kk_std_core_types__optional expected, kk_std_core_types__optional actual, kk_std_core_types__optional msg, kk_context_t* _ctx) { /* forall<a,b> (test-failure<a,b>, expected : ? a, actual : ? b, msg : ? string) -> test-failure<a,b> */ 
  kk_box_t _x_x253;
  if (kk_std_core_types__is_Optional(expected, _ctx)) {
    kk_box_t _uniq_expected_433 = expected._cons._Optional.value;
    kk_box_dup(_uniq_expected_433, _ctx);
    kk_std_core_types__optional_drop(expected, _ctx);
    _x_x253 = _uniq_expected_433; /*478*/
  }
  else {
    kk_std_core_types__optional_drop(expected, _ctx);
    {
      struct kk_utest_TestFailure* _con_x254 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x = _con_x254->expected;
      kk_box_dup(_x, _ctx);
      _x_x253 = _x; /*478*/
    }
  }
  kk_box_t _x_x255;
  if (kk_std_core_types__is_Optional(actual, _ctx)) {
    kk_box_t _uniq_actual_446 = actual._cons._Optional.value;
    kk_box_dup(_uniq_actual_446, _ctx);
    kk_std_core_types__optional_drop(actual, _ctx);
    _x_x255 = _uniq_actual_446; /*479*/
  }
  else {
    kk_std_core_types__optional_drop(actual, _ctx);
    {
      struct kk_utest_TestFailure* _con_x256 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x_0 = _con_x256->actual;
      kk_box_dup(_x_0, _ctx);
      _x_x255 = _x_0; /*479*/
    }
  }
  kk_string_t _x_x257;
  if (kk_std_core_types__is_Optional(msg, _ctx)) {
    kk_box_t _box_x0 = msg._cons._Optional.value;
    kk_string_t _uniq_msg_459 = kk_string_unbox(_box_x0);
    kk_string_dup(_uniq_msg_459, _ctx);
    kk_std_core_types__optional_drop(msg, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x257 = _uniq_msg_459; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(msg, _ctx);
    {
      struct kk_utest_TestFailure* _con_x258 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _pat_0_2 = _con_x258->expected;
      kk_box_t _pat_1_3 = _con_x258->actual;
      kk_string_t _x_1 = _con_x258->msg;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_box_drop(_pat_1_3, _ctx);
        kk_box_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x257 = _x_1; /*string*/
    }
  }
  return kk_utest__new_TestFailure(kk_reuse_null, 0, _x_x253, _x_x255, _x_x257, _ctx);
}
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_utest__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_utest__handle_test(kk_utest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test<a,e,c>, ret : (res : b) -> e c, action : () -> <test<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x263 = kk_std_core_hnd__htag_dup(kk_utest__tag_test, _ctx); /*forall<a> hnd/htag<utest/test<a>>*/
  return kk_std_core_hnd__hhandle(_x_x263, kk_utest__test_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-case`

kk_std_core_hnd__htag kk_utest__tag_test_case;
 
// handler for the effect `:test-case`

kk_box_t kk_utest__handle_test_case(kk_utest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test-case<a,e,c>, ret : (res : b) -> e c, action : () -> <test-case<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x270 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_case, _ctx); /*forall<a> hnd/htag<utest/test-case<a>>*/
  return kk_std_core_hnd__hhandle(_x_x270, kk_utest__test_case_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-suite`

kk_std_core_hnd__htag kk_utest__tag_test_suite;
 
// handler for the effect `:test-suite`

kk_box_t kk_utest__handle_test_suite(kk_utest__test_suite hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test-suite<a,e,c>, ret : (res : b) -> e c, action : () -> <test-suite<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x277 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_suite, _ctx); /*forall<a> hnd/htag<utest/test-suite<a>>*/
  return kk_std_core_hnd__hhandle(_x_x277, kk_utest__test_suite_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_std_core_hnd__clause1 kk_utest_test_suite_fail_fun280(kk_function_t _fself, kk_box_t _b_x50, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest__test_suite _brw_x239 = kk_utest__test_suite_unbox(_b_x50, KK_OWNED, _ctx); /*utest/test-suite<_1005,1009,1010>*/;
  kk_std_core_hnd__clause1 _brw_x240 = kk_utest__select_test_suite_fail(_brw_x239, _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite<949>,950,951>*/;
  kk_utest__test_suite_drop(_brw_x239, _ctx);
  return _brw_x240;
}


// lift anonymous function
struct kk_utest_assert_eq_fun284__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_assert_eq_fun284(kk_function_t _fself, kk_box_t _b_x60, kk_box_t _b_x61, kk_box_t _b_x62, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun284(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_assert_eq_fun284, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_assert_eq_fun286__t {
  struct kk_function_s _base;
  kk_box_t _b_x62;
};
static bool kk_utest_assert_eq_fun286(kk_function_t _fself, kk_box_t _b_x66, kk_box_t _b_x67, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun286(kk_box_t _b_x62, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun286__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun286__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun286, kk_context());
  _self->_b_x62 = _b_x62;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_utest_assert_eq_fun286(kk_function_t _fself, kk_box_t _b_x66, kk_box_t _b_x67, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun286__t* _self = kk_function_as(struct kk_utest_assert_eq_fun286__t*, _fself, _ctx);
  kk_box_t _b_x62 = _self->_b_x62; /* 8724 */
  kk_drop_match(_self, {kk_box_dup(_b_x62, _ctx);}, {}, _ctx)
  kk_box_t _x_x287;
  kk_function_t _x_x288 = kk_function_unbox(_b_x62, _ctx); /*(63, 64) -> 65*/
  _x_x287 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x288, (_x_x288, _b_x66, _b_x67, _ctx), _ctx); /*65*/
  return kk_bool_unbox(_x_x287);
}
static kk_box_t kk_utest_assert_eq_fun284(kk_function_t _fself, kk_box_t _b_x60, kk_box_t _b_x61, kk_box_t _b_x62, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x285;
  kk_box_t x_97 = _b_x60; /*1149*/;
  kk_box_t y_98 = _b_x61; /*1149*/;
  kk_function_t _implicit_fs__lp__at_x_0_99_eq__eq__rp_ = kk_utest_new_assert_eq_fun286(_b_x62, _ctx); /*(1149, 1149) -> bool*/;
  bool b_10002 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_0_99_eq__eq__rp_, (_implicit_fs__lp__at_x_0_99_eq__eq__rp_, x_97, y_98, _ctx), _ctx); /*bool*/;
  if (b_10002) {
    _x_x285 = false; /*bool*/
  }
  else {
    _x_x285 = true; /*bool*/
  }
  return kk_bool_box(_x_x285);
}


// lift anonymous function
struct kk_utest_assert_eq_fun289__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_utest_assert_eq_fun289(kk_function_t _fself, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun289(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun289__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun289__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun289, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun289(kk_function_t _fself, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun289__t* _self = kk_function_as(struct kk_utest_assert_eq_fun289__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1149, 1149) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x290 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x71, _b_x72, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x290);
}


// lift anonymous function
struct kk_utest_assert_eq_fun293__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun293(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun293(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun293__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun293__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun293, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun293(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun293__t* _self = kk_function_as(struct kk_utest_assert_eq_fun293__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1149) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x294 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x75, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x294);
}


// lift anonymous function
struct kk_utest_assert_eq_fun296__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun296(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun296(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun296__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun296__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun296, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun296(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun296__t* _self = kk_function_as(struct kk_utest_assert_eq_fun296__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1149) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x297 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x80, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x297);
}

kk_unit_t kk_utest_assert_eq(kk_function_t actual, kk_function_t expected, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a,b> (actual : () -> div a, expected : () -> div a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> <div,test<b>> () */ 
  kk_box_t _x_x1_10039;
  kk_function_t _x_x281 = kk_function_dup(expected, _ctx); /*() -> div 1149*/
  _x_x1_10039 = kk_std_core_hnd__open_none0(_x_x281, _ctx); /*1149*/
  kk_box_t _x_x2_10040;
  kk_function_t _x_x282 = kk_function_dup(actual, _ctx); /*() -> div 1149*/
  _x_x2_10040 = kk_std_core_hnd__open_none0(_x_x282, _ctx); /*1149*/
  bool _match_x238;
  kk_box_t _x_x283 = kk_std_core_hnd__open_none3(kk_utest_new_assert_eq_fun284(_ctx), _x_x1_10039, _x_x2_10040, kk_function_box(kk_utest_new_assert_eq_fun289(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*8725*/
  _match_x238 = kk_bool_unbox(_x_x283); /*bool*/
  if (_match_x238) {
    kk_box_t _x_x1_0_10042 = kk_std_core_hnd__open_none0(expected, _ctx); /*1149*/;
    kk_string_t expected_0_10003;
    kk_box_t _x_x291;
    kk_function_t _x_x292;
    kk_function_dup(_implicit_fs_show, _ctx);
    _x_x292 = kk_utest_new_assert_eq_fun293(_implicit_fs_show, _ctx); /*(8579) -> 8581 8580*/
    _x_x291 = kk_std_core_hnd__open_none1(_x_x292, _x_x1_0_10042, _ctx); /*8580*/
    expected_0_10003 = kk_string_unbox(_x_x291); /*string*/
    kk_box_t _x_x1_1_10043 = kk_std_core_hnd__open_none0(actual, _ctx); /*1149*/;
    kk_string_t actual_0_10004;
    kk_box_t _x_x295 = kk_std_core_hnd__open_none1(kk_utest_new_assert_eq_fun296(_implicit_fs_show, _ctx), _x_x1_1_10043, _ctx); /*8580*/
    actual_0_10004 = kk_string_unbox(_x_x295); /*string*/
    kk_std_core_hnd__ev evx_10055 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test<_690>>*/;
    kk_box_t _x_x298;
    {
      struct kk_std_core_hnd_Ev* _con_x299 = kk_std_core_hnd__as_Ev(evx_10055, _ctx);
      kk_box_t _box_x83 = _con_x299->hnd;
      int32_t m = _con_x299->marker;
      kk_utest__test h = kk_utest__test_unbox(_box_x83, KK_BORROWED, _ctx);
      kk_utest__test_dup(h, _ctx);
      {
        struct kk_utest__Hnd_test* _con_x300 = kk_utest__as_Hnd_test(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x300->_cfc;
        kk_std_core_hnd__clause2 _fun_test_fail = _con_x300->_fun_test_fail;
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
          _x_x298 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x88, (_fun_unbox_x88, m, evx_10055, kk_string_box(expected_0_10003), kk_string_box(actual_0_10004), _ctx), _ctx); /*64*/
        }
      }
    }
    kk_unit_unbox(_x_x298); return kk_Unit;
  }
  {
    kk_function_drop(_implicit_fs_show, _ctx);
    kk_function_drop(expected, _ctx);
    kk_function_drop(actual, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_utest_test_fun302__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_utest_test_fun302(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun302(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun302, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_test_fun304__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun304(kk_function_t _fself, kk_box_t _b_x114, kk_box_t _b_x115, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun304(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun304, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun304(kk_function_t _fself, kk_box_t _b_x114, kk_box_t _b_x115, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t expected_137 = kk_string_unbox(_b_x114); /*string*/;
  kk_string_t actual_138 = kk_string_unbox(_b_x115); /*string*/;
  kk_std_core_hnd__ev evx_10060 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-case<_846>>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x305 = kk_std_core_hnd__as_Ev(evx_10060, _ctx);
    kk_box_t _box_x100 = _con_x305->hnd;
    int32_t m_0 = _con_x305->marker;
    kk_utest__test_case h = kk_utest__test_case_unbox(_box_x100, KK_BORROWED, _ctx);
    kk_utest__test_case_dup(h, _ctx);
    {
      struct kk_utest__Hnd_test_case* _con_x306 = kk_utest__as_Hnd_test_case(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x306->_cfc;
      kk_std_core_hnd__clause2 _fun_test_case_fail = _con_x306->_fun_test_case_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_test_case_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x105 = _fun_test_case_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x105, (_fun_unbox_x105, m_0, evx_10060, kk_string_box(expected_137), kk_string_box(actual_138), _ctx), _ctx);
      }
    }
  }
}
static kk_unit_t kk_utest_test_fun302(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x303 = kk_std_core_hnd_under2(ev, kk_utest_new_test_fun304(_ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*6489*/
  kk_unit_unbox(_x_x303); return kk_Unit;
}


// lift anonymous function
struct kk_utest_test_fun309__t {
  struct kk_function_s _base;
  kk_function_t _b_x116_130;
};
static kk_box_t kk_utest_test_fun309(kk_function_t _fself, int32_t _b_x117, kk_std_core_hnd__ev _b_x118, kk_box_t _b_x119, kk_box_t _b_x120, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun309(kk_function_t _b_x116_130, kk_context_t* _ctx) {
  struct kk_utest_test_fun309__t* _self = kk_function_alloc_as(struct kk_utest_test_fun309__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun309, kk_context());
  _self->_b_x116_130 = _b_x116_130;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun309(kk_function_t _fself, int32_t _b_x117, kk_std_core_hnd__ev _b_x118, kk_box_t _b_x119, kk_box_t _b_x120, kk_context_t* _ctx) {
  struct kk_utest_test_fun309__t* _self = kk_function_as(struct kk_utest_test_fun309__t*, _fself, _ctx);
  kk_function_t _b_x116_130 = _self->_b_x116_130; /* (m : hnd/marker<<utest/test-case<1247>,div>,()>, ev : hnd/ev<utest/test<1247>>, x1 : string, x2 : string) -> <utest/test-case<1247>,div> () */
  kk_drop_match(_self, {kk_function_dup(_b_x116_130, _ctx);}, {}, _ctx)
  kk_unit_t _x_x310 = kk_Unit;
  kk_string_t _x_x311 = kk_string_unbox(_b_x119); /*string*/
  kk_string_t _x_x312 = kk_string_unbox(_b_x120); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x116_130, (_b_x116_130, _b_x117, _b_x118, _x_x311, _x_x312, _ctx), _ctx);
  return kk_unit_box(_x_x310);
}


// lift anonymous function
struct kk_utest_test_fun313__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun313(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun313(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun313, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun313(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_139 = kk_Unit;
  kk_unit_unbox(_b_x126);
  return kk_unit_box(_x_139);
}


// lift anonymous function
struct kk_utest_test_fun314__t {
  struct kk_function_s _base;
  kk_function_t tests;
};
static kk_box_t kk_utest_test_fun314(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun314(kk_function_t tests, kk_context_t* _ctx) {
  struct kk_utest_test_fun314__t* _self = kk_function_alloc_as(struct kk_utest_test_fun314__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun314, kk_context());
  _self->tests = tests;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun315__t {
  struct kk_function_s _base;
  kk_function_t _b_x122_136;
};
static kk_box_t kk_utest_test_fun315(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun315(kk_function_t _b_x122_136, kk_context_t* _ctx) {
  struct kk_utest_test_fun315__t* _self = kk_function_alloc_as(struct kk_utest_test_fun315__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun315, kk_context());
  _self->_b_x122_136 = _b_x122_136;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun315(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun315__t* _self = kk_function_as(struct kk_utest_test_fun315__t*, _fself, _ctx);
  kk_function_t _b_x122_136 = _self->_b_x122_136; /* () -> <div,utest/test<1247>> () */
  kk_drop_match(_self, {kk_function_dup(_b_x122_136, _ctx);}, {}, _ctx)
  kk_unit_t _x_x316 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x122_136, (_b_x122_136, _ctx), _ctx);
  return kk_unit_box(_x_x316);
}
static kk_box_t kk_utest_test_fun314(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun314__t* _self = kk_function_as(struct kk_utest_test_fun314__t*, _fself, _ctx);
  kk_function_t tests = _self->tests; /* () -> <div,utest/test<1247>> () */
  kk_drop_match(_self, {kk_function_dup(tests, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x121_135 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x122_136 = tests; /*() -> <div,utest/test<1247>> ()*/;
  return kk_std_core_hnd__open_at0(_b_x121_135, kk_utest_new_test_fun315(_b_x122_136, _ctx), _ctx);
}

kk_unit_t kk_utest_test(kk_string_t test_name, kk_function_t tests, kk_context_t* _ctx) { /* forall<a> (test-name : string, tests : () -> <div,test<a>> ()) -> <div,test-case<a>> () */ 
  kk_string_drop(test_name, _ctx);
  kk_box_t _x_x301;
  kk_function_t _b_x116_130 = kk_utest_new_test_fun302(_ctx); /*(m : hnd/marker<<utest/test-case<1247>,div>,()>, ev : hnd/ev<utest/test<1247>>, x1 : string, x2 : string) -> <utest/test-case<1247>,div> ()*/;
  kk_utest__test _x_x307;
  kk_std_core_hnd__clause2 _x_x308 = kk_std_core_hnd__new_Clause2(kk_utest_new_test_fun309(_b_x116_130, _ctx), _ctx); /*hnd/clause2<62,63,64,65,66,67>*/
  _x_x307 = kk_utest__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(1), _x_x308, _ctx); /*utest/test<10,11,12>*/
  _x_x301 = kk_utest__handle_test(_x_x307, kk_utest_new_test_fun313(_ctx), kk_utest_new_test_fun314(tests, _ctx), _ctx); /*605*/
  kk_unit_unbox(_x_x301); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun318__t {
  struct kk_function_s _base;
  kk_string_t suite_name;
};
static kk_unit_t kk_utest_suite_fun318(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun318(kk_string_t suite_name, kk_context_t* _ctx) {
  struct kk_utest_suite_fun318__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun318__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun318, kk_context());
  _self->suite_name = suite_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun320__t {
  struct kk_function_s _base;
  kk_string_t suite_name;
};
static kk_box_t kk_utest_suite_fun320(kk_function_t _fself, kk_box_t _b_x150, kk_box_t _b_x151, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun320(kk_string_t suite_name, kk_context_t* _ctx) {
  struct kk_utest_suite_fun320__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun320__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun320, kk_context());
  _self->suite_name = suite_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun321__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun321(kk_function_t _fself, kk_utest__test_suite hnd, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun321(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun321, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun324__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun324(kk_function_t _fself, kk_utest__test_suite _x1_x323, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun324(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun324, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun324(kk_function_t _fself, kk_utest__test_suite _x1_x323, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_utest__select_test_suite_fail(_x1_x323, _ctx);
}
static kk_std_core_hnd__clause1 kk_utest_suite_fun321(kk_function_t _fself, kk_utest__test_suite hnd, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__clause1 _brw_x237;
  kk_function_t _x_x322 = kk_utest_new_suite_fun324(_ctx); /*(hnd : utest/test-suite<949,950,951>) -> hnd/clause1<(string, string, string),(),utest/test-suite<949>,950,951>*/
  _brw_x237 = kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_suite, kk_context_t*), _x_x322, (_x_x322, hnd, _ctx), _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite<949>,950,951>*/
  kk_utest__test_suite_drop(hnd, _ctx);
  return _brw_x237;
}


// lift anonymous function
struct kk_utest_suite_fun325__t {
  struct kk_function_s _base;
  kk_function_t _b_x141_172;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun325(kk_function_t _fself, kk_box_t _b_x145, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun325(kk_function_t _b_x141_172, kk_context_t* _ctx) {
  struct kk_utest_suite_fun325__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun325__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun325, kk_context());
  _self->_b_x141_172 = _b_x141_172;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun325(kk_function_t _fself, kk_box_t _b_x145, kk_context_t* _ctx) {
  struct kk_utest_suite_fun325__t* _self = kk_function_as(struct kk_utest_suite_fun325__t*, _fself, _ctx);
  kk_function_t _b_x141_172 = _self->_b_x141_172; /* (hnd : utest/test-suite<_1005,1009,1010>) -> hnd/clause1<(string, string, string),(),utest/test-suite<_1005>,1009,1010> */
  kk_drop_match(_self, {kk_function_dup(_b_x141_172, _ctx);}, {}, _ctx)
  kk_utest__test_suite _x_x326 = kk_utest__test_suite_unbox(_b_x145, KK_OWNED, _ctx); /*utest/test-suite<_1005,1009,1010>*/
  return kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_suite, kk_context_t*), _b_x141_172, (_b_x141_172, _x_x326, _ctx), _ctx);
}
static kk_box_t kk_utest_suite_fun320(kk_function_t _fself, kk_box_t _b_x150, kk_box_t _b_x151, kk_context_t* _ctx) {
  struct kk_utest_suite_fun320__t* _self = kk_function_as(struct kk_utest_suite_fun320__t*, _fself, _ctx);
  kk_string_t suite_name = _self->suite_name; /* string */
  kk_drop_match(_self, {kk_string_dup(suite_name, _ctx);}, {}, _ctx)
  kk_string_t expected_178 = kk_string_unbox(_b_x150); /*string*/;
  kk_string_t actual_179 = kk_string_unbox(_b_x151); /*string*/;
  kk_std_core_hnd__ev _b_x140_171 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-suite<_1005>>*/;
  kk_function_t _b_x141_172 = kk_utest_new_suite_fun321(_ctx); /*(hnd : utest/test-suite<_1005,1009,1010>) -> hnd/clause1<(string, string, string),(),utest/test-suite<_1005>,1009,1010>*/;
  kk_string_t _b_x142_173 = suite_name; /*string*/;
  kk_string_t _b_x143_174 = expected_178; /*string*/;
  kk_string_t _b_x144_175 = actual_179; /*string*/;
  return kk_std_core_hnd__perform3(_b_x140_171, kk_utest_new_suite_fun325(_b_x141_172, _ctx), kk_string_box(_b_x142_173), kk_string_box(_b_x143_174), kk_string_box(_b_x144_175), _ctx);
}
static kk_unit_t kk_utest_suite_fun318(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  struct kk_utest_suite_fun318__t* _self = kk_function_as(struct kk_utest_suite_fun318__t*, _fself, _ctx);
  kk_string_t suite_name = _self->suite_name; /* string */
  kk_drop_match(_self, {kk_string_dup(suite_name, _ctx);}, {}, _ctx)
  kk_box_t _x_x319 = kk_std_core_hnd_under2(ev, kk_utest_new_suite_fun320(suite_name, _ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*6489*/
  kk_unit_unbox(_x_x319); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun329__t {
  struct kk_function_s _base;
  kk_function_t _b_x152_166;
};
static kk_box_t kk_utest_suite_fun329(kk_function_t _fself, int32_t _b_x153, kk_std_core_hnd__ev _b_x154, kk_box_t _b_x155, kk_box_t _b_x156, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun329(kk_function_t _b_x152_166, kk_context_t* _ctx) {
  struct kk_utest_suite_fun329__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun329__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun329, kk_context());
  _self->_b_x152_166 = _b_x152_166;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun329(kk_function_t _fself, int32_t _b_x153, kk_std_core_hnd__ev _b_x154, kk_box_t _b_x155, kk_box_t _b_x156, kk_context_t* _ctx) {
  struct kk_utest_suite_fun329__t* _self = kk_function_as(struct kk_utest_suite_fun329__t*, _fself, _ctx);
  kk_function_t _b_x152_166 = _self->_b_x152_166; /* (m : hnd/marker<<utest/test-suite<1342>,div>,()>, ev : hnd/ev<utest/test-case<1342>>, x1 : string, x2 : string) -> <utest/test-suite<1342>,div> () */
  kk_drop_match(_self, {kk_function_dup(_b_x152_166, _ctx);}, {}, _ctx)
  kk_unit_t _x_x330 = kk_Unit;
  kk_string_t _x_x331 = kk_string_unbox(_b_x155); /*string*/
  kk_string_t _x_x332 = kk_string_unbox(_b_x156); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x152_166, (_b_x152_166, _b_x153, _b_x154, _x_x331, _x_x332, _ctx), _ctx);
  return kk_unit_box(_x_x330);
}


// lift anonymous function
struct kk_utest_suite_fun333__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_suite_fun333(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun333(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun333, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_suite_fun333(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_180 = kk_Unit;
  kk_unit_unbox(_b_x162);
  return kk_unit_box(_x_180);
}


// lift anonymous function
struct kk_utest_suite_fun334__t {
  struct kk_function_s _base;
  kk_function_t test_cases;
};
static kk_box_t kk_utest_suite_fun334(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun334(kk_function_t test_cases, kk_context_t* _ctx) {
  struct kk_utest_suite_fun334__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun334__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun334, kk_context());
  _self->test_cases = test_cases;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun335__t {
  struct kk_function_s _base;
  kk_function_t _b_x158_177;
};
static kk_box_t kk_utest_suite_fun335(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun335(kk_function_t _b_x158_177, kk_context_t* _ctx) {
  struct kk_utest_suite_fun335__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun335__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun335, kk_context());
  _self->_b_x158_177 = _b_x158_177;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun335(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun335__t* _self = kk_function_as(struct kk_utest_suite_fun335__t*, _fself, _ctx);
  kk_function_t _b_x158_177 = _self->_b_x158_177; /* () -> <div,utest/test-case<1342>> () */
  kk_drop_match(_self, {kk_function_dup(_b_x158_177, _ctx);}, {}, _ctx)
  kk_unit_t _x_x336 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x158_177, (_b_x158_177, _ctx), _ctx);
  return kk_unit_box(_x_x336);
}
static kk_box_t kk_utest_suite_fun334(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun334__t* _self = kk_function_as(struct kk_utest_suite_fun334__t*, _fself, _ctx);
  kk_function_t test_cases = _self->test_cases; /* () -> <div,utest/test-case<1342>> () */
  kk_drop_match(_self, {kk_function_dup(test_cases, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x157_176 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x158_177 = test_cases; /*() -> <div,utest/test-case<1342>> ()*/;
  return kk_std_core_hnd__open_at0(_b_x157_176, kk_utest_new_suite_fun335(_b_x158_177, _ctx), _ctx);
}

kk_unit_t kk_utest_suite(kk_string_t suite_name, kk_function_t test_cases, kk_context_t* _ctx) { /* forall<a> (suite-name : string, test-cases : () -> <div,test-case<a>> ()) -> <div,test-suite<a>> () */ 
  kk_box_t _x_x317;
  kk_function_t _b_x152_166 = kk_utest_new_suite_fun318(suite_name, _ctx); /*(m : hnd/marker<<utest/test-suite<1342>,div>,()>, ev : hnd/ev<utest/test-case<1342>>, x1 : string, x2 : string) -> <utest/test-suite<1342>,div> ()*/;
  kk_utest__test_case _x_x327;
  kk_std_core_hnd__clause2 _x_x328 = kk_std_core_hnd__new_Clause2(kk_utest_new_suite_fun329(_b_x152_166, _ctx), _ctx); /*hnd/clause2<62,63,64,65,66,67>*/
  _x_x327 = kk_utest__new_Hnd_test_case(kk_reuse_null, 0, kk_integer_from_small(1), _x_x328, _ctx); /*utest/test-case<23,24,25>*/
  _x_x317 = kk_utest__handle_test_case(_x_x327, kk_utest_new_suite_fun333(_ctx), kk_utest_new_suite_fun334(test_cases, _ctx), _ctx); /*761*/
  kk_unit_unbox(_x_x317); return kk_Unit;
}


// lift anonymous function
struct kk_utest_run_utest_fun341__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_utest_run_utest_fun341(kk_function_t _fself, int32_t _b_x195, kk_std_core_hnd__ev _b_x196, kk_box_t _b_x197, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun341(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun341__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun341__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun341, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun341(kk_function_t _fself, int32_t _b_x195, kk_std_core_hnd__ev _b_x196, kk_box_t _b_x197, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun341__t* _self = kk_function_as(struct kk_utest_run_utest_fun341__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1987,list<(string, string, string)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t ___wildcard_x633__14_232 = _b_x195; /*hnd/marker<<local<1987>,div,console/console>,()>*/;
  kk_std_core_hnd__ev ___wildcard_x633__17_233 = _b_x196; /*hnd/ev<utest/test-suite<1992>>*/;
  kk_datatype_ptr_dropn(___wildcard_x633__17_233, (KK_I32(3)), _ctx);
  kk_std_core_types__tuple3 x_234 = kk_std_core_types__tuple3_unbox(_b_x197, KK_OWNED, _ctx); /*(string, string, string)*/;
  kk_unit_t _x_x342 = kk_Unit;
  {
    kk_box_t _box_x183 = x_234.fst;
    kk_box_t _box_x184 = x_234.snd;
    kk_box_t _box_x185 = x_234.thd;
    kk_string_t x1 = kk_string_unbox(_box_x183);
    kk_string_t x2 = kk_string_unbox(_box_x184);
    kk_string_t x3 = kk_string_unbox(_box_x185);
    kk_string_dup(x1, _ctx);
    kk_string_dup(x2, _ctx);
    kk_string_dup(x3, _ctx);
    kk_std_core_types__tuple3_drop(x_234, _ctx);
    kk_std_core_types__list _b_x193_207;
    kk_std_core_types__list _x_x343;
    kk_box_t _x_x344;
    kk_ref_t _x_x345 = kk_ref_dup(loc, _ctx); /*local-var<1987,list<(string, string, string)>>*/
    _x_x344 = kk_ref_get(_x_x345,kk_context()); /*2901*/
    _x_x343 = kk_std_core_types__list_unbox(_x_x344, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list _x_x346;
    kk_box_t _x_x347;
    kk_std_core_types__tuple3 _x_x348 = kk_std_core_types__new_Tuple3(kk_string_box(x1), kk_string_box(x2), kk_string_box(x3), _ctx); /*(136, 137, 138)*/
    _x_x347 = kk_std_core_types__tuple3_box(_x_x348, _ctx); /*82*/
    _x_x346 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x347, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<82>*/
    _b_x193_207 = kk_std_core_list_append(_x_x343, _x_x346, _ctx); /*list<(string, string, string)>*/
    kk_unit_t _brw_x236 = kk_Unit;
    kk_ref_set_borrow(loc,(kk_std_core_types__list_box(_b_x193_207, _ctx)),kk_context());
    kk_ref_drop(loc, _ctx);
    _brw_x236;
  }
  return kk_unit_box(_x_x342);
}


// lift anonymous function
struct kk_utest_run_utest_fun349__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun349(kk_function_t _fself, kk_box_t _b_x201, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun349(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun349, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun349(kk_function_t _fself, kk_box_t _b_x201, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x201;
}


// lift anonymous function
struct kk_utest_run_utest_fun350__t {
  struct kk_function_s _base;
  kk_function_t test_suites;
};
static kk_box_t kk_utest_run_utest_fun350(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun350(kk_function_t test_suites, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun350__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun350__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun350, kk_context());
  _self->test_suites = test_suites;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun350(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun350__t* _self = kk_function_as(struct kk_utest_run_utest_fun350__t*, _fself, _ctx);
  kk_function_t test_suites = _self->test_suites; /* () -> <div,utest/test-suite<1992>> () */
  kk_drop_match(_self, {kk_function_dup(test_suites, _ctx);}, {}, _ctx)
  kk_unit_t _x_x351 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), test_suites, (test_suites, _ctx), _ctx);
  return kk_unit_box(_x_x351);
}


// lift anonymous function
struct kk_utest_run_utest_fun360__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun360(kk_function_t _fself, kk_box_t _b_x223, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun360(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun360, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun360(kk_function_t _fself, kk_box_t _b_x223, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x361 = kk_Unit;
  kk_std_core_types__tuple3 _match_x235 = kk_std_core_types__tuple3_unbox(_b_x223, KK_OWNED, _ctx); /*(string, string, string)*/;
  {
    kk_box_t _box_x218 = _match_x235.fst;
    kk_box_t _box_x219 = _match_x235.snd;
    kk_box_t _box_x220 = _match_x235.thd;
    kk_string_t suite_name_0 = kk_string_unbox(_box_x218);
    kk_string_t expected_0 = kk_string_unbox(_box_x219);
    kk_string_t actual_0 = kk_string_unbox(_box_x220);
    kk_string_dup(actual_0, _ctx);
    kk_string_dup(expected_0, _ctx);
    kk_string_dup(suite_name_0, _ctx);
    kk_std_core_types__tuple3_drop(_match_x235, _ctx);
    kk_string_t s_0_10014;
    kk_string_t _x_x362;
    kk_define_string_literal(, _s_x363, 10, "failed at ", _ctx)
    _x_x362 = kk_string_dup(_s_x363, _ctx); /*string*/
    kk_string_t _x_x364 = kk_std_core_show_string_fs_show(suite_name_0, _ctx); /*string*/
    s_0_10014 = kk_std_core_types__lp__plus__plus__rp_(_x_x362, _x_x364, _ctx); /*string*/
    kk_unit_t ___1 = kk_Unit;
    kk_std_core_console_printsln(s_0_10014, _ctx);
    kk_string_t s_1_10015;
    kk_string_t _x_x365;
    kk_define_string_literal(, _s_x366, 11, "  expected ", _ctx)
    _x_x365 = kk_string_dup(_s_x366, _ctx); /*string*/
    kk_string_t _x_x367;
    kk_string_t _x_x368;
    kk_string_t _x_x369;
    kk_define_string_literal(, _s_x370, 10, ", but got ", _ctx)
    _x_x369 = kk_string_dup(_s_x370, _ctx); /*string*/
    _x_x368 = kk_std_core_types__lp__plus__plus__rp_(_x_x369, actual_0, _ctx); /*string*/
    _x_x367 = kk_std_core_types__lp__plus__plus__rp_(expected_0, _x_x368, _ctx); /*string*/
    s_1_10015 = kk_std_core_types__lp__plus__plus__rp_(_x_x365, _x_x367, _ctx); /*string*/
    kk_std_core_console_printsln(s_1_10015, _ctx);
  }
  return kk_unit_box(_x_x361);
}

kk_unit_t kk_utest_run_utest(kk_function_t test_suites, kk_context_t* _ctx) { /* forall<a> (test-suites : () -> <div,test-suite<a>> ()) -> <div,console/console> () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<1987,list<(string, string, string)>>*/;
  kk_unit_t __ = kk_Unit;
  kk_box_t _x_x337;
  kk_utest__test_suite _x_x338;
  kk_std_core_hnd__clause1 _x_x339;
  kk_function_t _x_x340;
  kk_ref_dup(loc, _ctx);
  _x_x340 = kk_utest_new_run_utest_fun341(loc, _ctx); /*(hnd/marker<48,49>, hnd/ev<47>, 45) -> 48 46*/
  _x_x339 = kk_std_core_hnd__new_Clause1(_x_x340, _ctx); /*hnd/clause1<45,46,47,48,49>*/
  _x_x338 = kk_utest__new_Hnd_test_suite(kk_reuse_null, 0, kk_integer_from_small(1), _x_x339, _ctx); /*utest/test-suite<44,45,46>*/
  _x_x337 = kk_utest__handle_test_suite(_x_x338, kk_utest_new_run_utest_fun349(_ctx), kk_utest_new_run_utest_fun350(test_suites, _ctx), _ctx); /*917*/
  kk_unit_unbox(_x_x337);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x352;
  kk_define_string_literal(, _s_x353, 16, "Running test...\n", _ctx)
  _x_x352 = kk_string_dup(_s_x353, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x352, _ctx);
  kk_std_core_types__list xs_10013;
  kk_box_t _x_x354;
  kk_ref_t _x_x355 = kk_ref_dup(loc, _ctx); /*local-var<1987,list<(string, string, string)>>*/
  _x_x354 = kk_ref_get(_x_x355,kk_context()); /*3270*/
  xs_10013 = kk_std_core_types__list_unbox(_x_x354, KK_OWNED, _ctx); /*list<(string, string, string)>*/
  kk_unit_t res = kk_Unit;
  if (kk_std_core_types__is_Nil(xs_10013, _ctx)) {
    kk_string_t _x_x356;
    kk_define_string_literal(, _s_x357, 17, "All tests passed!", _ctx)
    _x_x356 = kk_string_dup(_s_x357, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x356, _ctx);
  }
  else {
    kk_std_core_types__list_drop(xs_10013, _ctx);
    kk_std_core_types__list _b_x221_224;
    kk_box_t _x_x358;
    kk_ref_t _x_x359 = kk_ref_dup(loc, _ctx); /*local-var<1987,list<(string, string, string)>>*/
    _x_x358 = kk_ref_get(_x_x359,kk_context()); /*3229*/
    _b_x221_224 = kk_std_core_types__list_unbox(_x_x358, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list ___2 = kk_std_core_list_map(_b_x221_224, kk_utest_new_run_utest_fun360(_ctx), _ctx); /*list<()>*/;
    kk_std_core_types__list_drop(___2, _ctx);
  }
  kk_box_t _x_x371 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*9564*/
  kk_unit_unbox(_x_x371); return kk_Unit;
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
    kk_string_t _x_x261;
    kk_define_string_literal(, _s_x262, 10, "test@utest", _ctx)
    _x_x261 = kk_string_dup(_s_x262, _ctx); /*string*/
    kk_utest__tag_test = kk_std_core_hnd__new_Htag(_x_x261, _ctx); /*forall<a> hnd/htag<utest/test<a>>*/
  }
  {
    kk_string_t _x_x268;
    kk_define_string_literal(, _s_x269, 15, "test-case@utest", _ctx)
    _x_x268 = kk_string_dup(_s_x269, _ctx); /*string*/
    kk_utest__tag_test_case = kk_std_core_hnd__new_Htag(_x_x268, _ctx); /*forall<a> hnd/htag<utest/test-case<a>>*/
  }
  {
    kk_string_t _x_x275;
    kk_define_string_literal(, _s_x276, 16, "test-suite@utest", _ctx)
    _x_x275 = kk_string_dup(_s_x276, _ctx); /*string*/
    kk_utest__tag_test_suite = kk_std_core_hnd__new_Htag(_x_x275, _ctx); /*forall<a> hnd/htag<utest/test-suite<a>>*/
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
