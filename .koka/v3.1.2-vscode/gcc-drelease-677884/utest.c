// Koka generated module: utest, koka version: 3.1.2, platform: 64-bit
#include "utest.h"

kk_utest__test_case_t kk_utest_test_case_t_fs__copy(kk_utest__test_case_t _this, kk_std_core_types__optional name, kk_std_core_types__optional expected, kk_std_core_types__optional actual, kk_context_t* _ctx) { /* (test-case-t, name : ? string, expected : ? string, actual : ? string) -> test-case-t */ 
  kk_string_t _x_x240;
  if (kk_std_core_types__is_Optional(name, _ctx)) {
    kk_box_t _box_x0 = name._cons._Optional.value;
    kk_string_t _uniq_name_313 = kk_string_unbox(_box_x0);
    kk_string_dup(_uniq_name_313, _ctx);
    kk_std_core_types__optional_drop(name, _ctx);
    _x_x240 = _uniq_name_313; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(name, _ctx);
    {
      struct kk_utest_Test_case_t* _con_x241 = kk_utest__as_Test_case_t(_this, _ctx);
      kk_string_t _x = _con_x241->name;
      kk_string_dup(_x, _ctx);
      _x_x240 = _x; /*string*/
    }
  }
  kk_string_t _x_x242;
  if (kk_std_core_types__is_Optional(expected, _ctx)) {
    kk_box_t _box_x1 = expected._cons._Optional.value;
    kk_string_t _uniq_expected_320 = kk_string_unbox(_box_x1);
    kk_string_dup(_uniq_expected_320, _ctx);
    kk_std_core_types__optional_drop(expected, _ctx);
    _x_x242 = _uniq_expected_320; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(expected, _ctx);
    {
      struct kk_utest_Test_case_t* _con_x243 = kk_utest__as_Test_case_t(_this, _ctx);
      kk_string_t _x_0 = _con_x243->expected;
      kk_string_dup(_x_0, _ctx);
      _x_x242 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x244;
  if (kk_std_core_types__is_Optional(actual, _ctx)) {
    kk_box_t _box_x2 = actual._cons._Optional.value;
    kk_string_t _uniq_actual_327 = kk_string_unbox(_box_x2);
    kk_string_dup(_uniq_actual_327, _ctx);
    kk_std_core_types__optional_drop(actual, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x244 = _uniq_actual_327; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(actual, _ctx);
    {
      struct kk_utest_Test_case_t* _con_x245 = kk_utest__as_Test_case_t(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x245->name;
      kk_string_t _pat_1_3 = _con_x245->expected;
      kk_string_t _x_1 = _con_x245->actual;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x244 = _x_1; /*string*/
    }
  }
  return kk_utest__new_Test_case_t(kk_reuse_null, 0, _x_x240, _x_x242, _x_x244, _ctx);
}

kk_utest__test_failure kk_utest_test_failure_fs__copy(kk_utest__test_failure _this, kk_std_core_types__optional expected, kk_std_core_types__optional actual, kk_std_core_types__optional msg, kk_context_t* _ctx) { /* forall<a,b> (test-failure<a,b>, expected : ? a, actual : ? b, msg : ? string) -> test-failure<a,b> */ 
  kk_box_t _x_x251;
  if (kk_std_core_types__is_Optional(expected, _ctx)) {
    kk_box_t _uniq_expected_487 = expected._cons._Optional.value;
    kk_box_dup(_uniq_expected_487, _ctx);
    kk_std_core_types__optional_drop(expected, _ctx);
    _x_x251 = _uniq_expected_487; /*532*/
  }
  else {
    kk_std_core_types__optional_drop(expected, _ctx);
    {
      struct kk_utest_TestFailure* _con_x252 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x = _con_x252->expected;
      kk_box_dup(_x, _ctx);
      _x_x251 = _x; /*532*/
    }
  }
  kk_box_t _x_x253;
  if (kk_std_core_types__is_Optional(actual, _ctx)) {
    kk_box_t _uniq_actual_500 = actual._cons._Optional.value;
    kk_box_dup(_uniq_actual_500, _ctx);
    kk_std_core_types__optional_drop(actual, _ctx);
    _x_x253 = _uniq_actual_500; /*533*/
  }
  else {
    kk_std_core_types__optional_drop(actual, _ctx);
    {
      struct kk_utest_TestFailure* _con_x254 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x_0 = _con_x254->actual;
      kk_box_dup(_x_0, _ctx);
      _x_x253 = _x_0; /*533*/
    }
  }
  kk_string_t _x_x255;
  if (kk_std_core_types__is_Optional(msg, _ctx)) {
    kk_box_t _box_x3 = msg._cons._Optional.value;
    kk_string_t _uniq_msg_513 = kk_string_unbox(_box_x3);
    kk_string_dup(_uniq_msg_513, _ctx);
    kk_std_core_types__optional_drop(msg, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x255 = _uniq_msg_513; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(msg, _ctx);
    {
      struct kk_utest_TestFailure* _con_x256 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _pat_0_2 = _con_x256->expected;
      kk_box_t _pat_1_3 = _con_x256->actual;
      kk_string_t _x_1 = _con_x256->msg;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_box_drop(_pat_1_3, _ctx);
        kk_box_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x255 = _x_1; /*string*/
    }
  }
  return kk_utest__new_TestFailure(kk_reuse_null, 0, _x_x251, _x_x253, _x_x255, _ctx);
}
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_utest__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_utest__handle_test(kk_utest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test<a,e,c>, ret : (res : b) -> e c, action : () -> <test<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x261 = kk_std_core_hnd__htag_dup(kk_utest__tag_test, _ctx); /*forall<a> hnd/htag<utest/test<a>>*/
  return kk_std_core_hnd__hhandle(_x_x261, kk_utest__test_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-case`

kk_std_core_hnd__htag kk_utest__tag_test_case;
 
// handler for the effect `:test-case`

kk_box_t kk_utest__handle_test_case(kk_utest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test-case<a,e,c>, ret : (res : b) -> e c, action : () -> <test-case<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x268 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_case, _ctx); /*forall<a> hnd/htag<utest/test-case<a>>*/
  return kk_std_core_hnd__hhandle(_x_x268, kk_utest__test_case_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-suite`

kk_std_core_hnd__htag kk_utest__tag_test_suite;
 
// handler for the effect `:test-suite`

kk_box_t kk_utest__handle_test_suite(kk_utest__test_suite hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : test-suite<a,e,c>, ret : (res : b) -> e c, action : () -> <test-suite<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x275 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_suite, _ctx); /*forall<a> hnd/htag<utest/test-suite<a>>*/
  return kk_std_core_hnd__hhandle(_x_x275, kk_utest__test_suite_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_utest_assert_eq_fun286__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun286(kk_function_t _fself, kk_box_t _b_x62, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun286(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun286__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun286__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun286, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun286(kk_function_t _fself, kk_box_t _b_x62, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun286__t* _self = kk_function_as(struct kk_utest_assert_eq_fun286__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1199) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x287 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x62, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x287);
}


// lift anonymous function
struct kk_utest_assert_eq_fun289__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun289(kk_function_t _fself, kk_box_t _b_x67, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun289(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun289__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun289__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun289, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun289(kk_function_t _fself, kk_box_t _b_x67, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun289__t* _self = kk_function_as(struct kk_utest_assert_eq_fun289__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1199) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x290 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x67, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x290);
}

kk_unit_t kk_utest_assert_eq(kk_function_t expected, kk_function_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a,b> (expected : () -> div a, actual : () -> div a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> <div,test<b>> () */ 
  kk_box_t _x_x1_10043;
  kk_function_t _x_x282 = kk_function_dup(expected, _ctx); /*() -> div 1199*/
  _x_x1_10043 = kk_std_core_hnd__open_none0(_x_x282, _ctx); /*1199*/
  kk_box_t _x_x2_10044;
  kk_function_t _x_x283 = kk_function_dup(actual, _ctx); /*() -> div 1199*/
  _x_x2_10044 = kk_std_core_hnd__open_none0(_x_x283, _ctx); /*1199*/
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<<div,utest/test<1200>>>*/;
  bool b_10002 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _x_x1_10043, _x_x2_10044, _ctx), _ctx); /*bool*/;
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  if (b_10002) {
    kk_function_drop(_implicit_fs_show, _ctx);
    kk_function_drop(expected, _ctx);
    kk_function_drop(actual, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    kk_box_t _x_x1_0_10046 = kk_std_core_hnd__open_none0(expected, _ctx); /*1199*/;
    kk_string_t expected_0_10006;
    kk_box_t _x_x284;
    kk_function_t _x_x285;
    kk_function_dup(_implicit_fs_show, _ctx);
    _x_x285 = kk_utest_new_assert_eq_fun286(_implicit_fs_show, _ctx); /*(1000) -> 1002 1001*/
    _x_x284 = kk_std_core_hnd__open_none1(_x_x285, _x_x1_0_10046, _ctx); /*1001*/
    expected_0_10006 = kk_string_unbox(_x_x284); /*string*/
    kk_box_t _x_x1_1_10047 = kk_std_core_hnd__open_none0(actual, _ctx); /*1199*/;
    kk_string_t actual_0_10007;
    kk_box_t _x_x288 = kk_std_core_hnd__open_none1(kk_utest_new_assert_eq_fun289(_implicit_fs_show, _ctx), _x_x1_1_10047, _ctx); /*1001*/
    actual_0_10007 = kk_string_unbox(_x_x288); /*string*/
    kk_std_core_hnd__ev evx_10067 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test<_744>>*/;
    kk_box_t _x_x291;
    {
      struct kk_std_core_hnd_Ev* _con_x292 = kk_std_core_hnd__as_Ev(evx_10067, _ctx);
      kk_box_t _box_x70 = _con_x292->hnd;
      int32_t m = _con_x292->marker;
      kk_utest__test h = kk_utest__test_unbox(_box_x70, KK_BORROWED, _ctx);
      kk_utest__test_dup(h, _ctx);
      {
        struct kk_utest__Hnd_test* _con_x293 = kk_utest__as_Hnd_test(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x293->_cfc;
        kk_std_core_hnd__clause2 _fun_test_fail = _con_x293->_fun_test_fail;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x75 = _fun_test_fail.clause;
          _x_x291 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x75, (_fun_unbox_x75, m, evx_10067, kk_string_box(expected_0_10006), kk_string_box(actual_0_10007), _ctx), _ctx); /*1016*/
        }
      }
    }
    kk_unit_unbox(_x_x291); return kk_Unit;
  }
}


// lift anonymous function
struct kk_utest_test_fun295__t {
  struct kk_function_s _base;
  kk_string_t test_name;
};
static kk_unit_t kk_utest_test_fun295(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun295(kk_string_t test_name, kk_context_t* _ctx) {
  struct kk_utest_test_fun295__t* _self = kk_function_alloc_as(struct kk_utest_test_fun295__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun295, kk_context());
  _self->test_name = test_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun297__t {
  struct kk_function_s _base;
  kk_string_t test_name;
};
static kk_box_t kk_utest_test_fun297(kk_function_t _fself, kk_box_t _b_x92, kk_box_t _b_x93, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun297(kk_string_t test_name, kk_context_t* _ctx) {
  struct kk_utest_test_fun297__t* _self = kk_function_alloc_as(struct kk_utest_test_fun297__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun297, kk_context());
  _self->test_name = test_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun297(kk_function_t _fself, kk_box_t _b_x92, kk_box_t _b_x93, kk_context_t* _ctx) {
  struct kk_utest_test_fun297__t* _self = kk_function_as(struct kk_utest_test_fun297__t*, _fself, _ctx);
  kk_string_t test_name = _self->test_name; /* string */
  kk_drop_match(_self, {kk_string_dup(test_name, _ctx);}, {}, _ctx)
  kk_string_t expected_123 = kk_string_unbox(_b_x92); /*string*/;
  kk_string_t actual_124 = kk_string_unbox(_b_x93); /*string*/;
  kk_std_core_hnd__ev ev_0_10072 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-case<_897>>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x298 = kk_std_core_hnd__as_Ev(ev_0_10072, _ctx);
    kk_box_t _box_x80 = _con_x298->hnd;
    int32_t m_0 = _con_x298->marker;
    kk_utest__test_case h = kk_utest__test_case_unbox(_box_x80, KK_BORROWED, _ctx);
    kk_utest__test_case_dup(h, _ctx);
    {
      struct kk_utest__Hnd_test_case* _con_x299 = kk_utest__as_Hnd_test_case(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x299->_cfc;
      kk_std_core_hnd__clause1 _fun_test_case_fail = _con_x299->_fun_test_case_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_test_case_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x84 = _fun_test_case_fail.clause;
        kk_box_t _x_x300;
        kk_utest__test_case_t _x_x301 = kk_utest__new_Test_case_t(kk_reuse_null, 0, test_name, expected_123, actual_124, _ctx); /*utest/test-case-t*/
        _x_x300 = kk_utest__test_case_t_box(_x_x301, _ctx); /*1009*/
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x84, (_fun_unbox_x84, m_0, ev_0_10072, _x_x300, _ctx), _ctx);
      }
    }
  }
}
static kk_unit_t kk_utest_test_fun295(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  struct kk_utest_test_fun295__t* _self = kk_function_as(struct kk_utest_test_fun295__t*, _fself, _ctx);
  kk_string_t test_name = _self->test_name; /* string */
  kk_drop_match(_self, {kk_string_dup(test_name, _ctx);}, {}, _ctx)
  kk_box_t _x_x296 = kk_std_core_hnd_under2(ev, kk_utest_new_test_fun297(test_name, _ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*3303*/
  kk_unit_unbox(_x_x296); return kk_Unit;
}


// lift anonymous function
struct kk_utest_test_fun304__t {
  struct kk_function_s _base;
  kk_function_t _b_x94_114;
};
static kk_box_t kk_utest_test_fun304(kk_function_t _fself, int32_t _b_x95, kk_std_core_hnd__ev _b_x96, kk_box_t _b_x97, kk_box_t _b_x98, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun304(kk_function_t _b_x94_114, kk_context_t* _ctx) {
  struct kk_utest_test_fun304__t* _self = kk_function_alloc_as(struct kk_utest_test_fun304__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun304, kk_context());
  _self->_b_x94_114 = _b_x94_114;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun304(kk_function_t _fself, int32_t _b_x95, kk_std_core_hnd__ev _b_x96, kk_box_t _b_x97, kk_box_t _b_x98, kk_context_t* _ctx) {
  struct kk_utest_test_fun304__t* _self = kk_function_as(struct kk_utest_test_fun304__t*, _fself, _ctx);
  kk_function_t _b_x94_114 = _self->_b_x94_114; /* (m : hnd/marker<<utest/test-case<1301>,div>,()>, ev : hnd/ev<utest/test<1301>>, x1 : string, x2 : string) -> <utest/test-case<1301>,div> () */
  kk_drop_match(_self, {kk_function_dup(_b_x94_114, _ctx);}, {}, _ctx)
  kk_unit_t _x_x305 = kk_Unit;
  kk_string_t _x_x306 = kk_string_unbox(_b_x97); /*string*/
  kk_string_t _x_x307 = kk_string_unbox(_b_x98); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x94_114, (_b_x94_114, _b_x95, _b_x96, _x_x306, _x_x307, _ctx), _ctx);
  return kk_unit_box(_x_x305);
}


// lift anonymous function
struct kk_utest_test_fun308__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun308(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun308(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun308, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun308(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_125 = kk_Unit;
  kk_unit_unbox(_b_x110);
  return kk_unit_box(_x_125);
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
struct kk_utest_test_fun312__t {
  struct kk_function_s _base;
  kk_ssize_t i_10075;
};
static kk_box_t kk_utest_test_fun312(kk_function_t _fself, kk_function_t _b_x104, kk_box_t _b_x105, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun312(kk_ssize_t i_10075, kk_context_t* _ctx) {
  struct kk_utest_test_fun312__t* _self = kk_function_alloc_as(struct kk_utest_test_fun312__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun312, kk_context());
  _self->i_10075 = i_10075;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun313__t {
  struct kk_function_s _base;
  kk_function_t _b_x104;
};
static kk_unit_t kk_utest_test_fun313(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun313(kk_function_t _b_x104, kk_context_t* _ctx) {
  struct kk_utest_test_fun313__t* _self = kk_function_alloc_as(struct kk_utest_test_fun313__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun313, kk_context());
  _self->_b_x104 = _b_x104;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_utest_test_fun313(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx) {
  struct kk_utest_test_fun313__t* _self = kk_function_as(struct kk_utest_test_fun313__t*, _fself, _ctx);
  kk_function_t _b_x104 = _self->_b_x104; /* (1003) -> 3302 3301 */
  kk_drop_match(_self, {kk_function_dup(_b_x104, _ctx);}, {}, _ctx)
  kk_box_t _x_x314 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x104, (_b_x104, _b_x106, _ctx), _ctx); /*3301*/
  kk_unit_unbox(_x_x314); return kk_Unit;
}


// lift anonymous function
struct kk_utest_test_fun315__t {
  struct kk_function_s _base;
  kk_function_t _b_x100_121;
};
static kk_box_t kk_utest_test_fun315(kk_function_t _fself, kk_box_t _b_x102, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun315(kk_function_t _b_x100_121, kk_context_t* _ctx) {
  struct kk_utest_test_fun315__t* _self = kk_function_alloc_as(struct kk_utest_test_fun315__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun315, kk_context());
  _self->_b_x100_121 = _b_x100_121;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun315(kk_function_t _fself, kk_box_t _b_x102, kk_context_t* _ctx) {
  struct kk_utest_test_fun315__t* _self = kk_function_as(struct kk_utest_test_fun315__t*, _fself, _ctx);
  kk_function_t _b_x100_121 = _self->_b_x100_121; /* (1009) -> <div,utest/test<1301>,utest/test-case<1301>> () */
  kk_drop_match(_self, {kk_function_dup(_b_x100_121, _ctx);}, {}, _ctx)
  kk_unit_t _x_x316 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x100_121, (_b_x100_121, _b_x102, _ctx), _ctx);
  return kk_unit_box(_x_x316);
}
static kk_box_t kk_utest_test_fun312(kk_function_t _fself, kk_function_t _b_x104, kk_box_t _b_x105, kk_context_t* _ctx) {
  struct kk_utest_test_fun312__t* _self = kk_function_as(struct kk_utest_test_fun312__t*, _fself, _ctx);
  kk_ssize_t i_10075 = _self->i_10075; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10075, _ctx);}, {}, _ctx)
  kk_function_t cont_126 = kk_utest_new_test_fun313(_b_x104, _ctx); /*(1009) -> <div,utest/test<1301>,utest/test-case<1301>> ()*/;
  kk_box_t res_127 = _b_x105; /*1009*/;
  kk_ssize_t _b_x99_120 = i_10075; /*hnd/ev-index*/;
  kk_function_t _b_x100_121 = cont_126; /*(1009) -> <div,utest/test<1301>,utest/test-case<1301>> ()*/;
  kk_box_t _b_x101_122 = res_127; /*1009*/;
  return kk_std_core_hnd_open_at1(_b_x99_120, kk_utest_new_test_fun315(_b_x100_121, _ctx), _b_x101_122, _ctx);
}
static kk_box_t kk_utest_test_fun309(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun309__t* _self = kk_function_as(struct kk_utest_test_fun309__t*, _fself, _ctx);
  kk_function_t tests = _self->tests; /* () -> <div,utest/test<1301>> () */
  kk_drop_match(_self, {kk_function_dup(tests, _ctx);}, {}, _ctx)
  kk_ssize_t i_10075 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_evv_t w = kk_evv_swap_create1(i_10075,kk_context()); /*hnd/evv<<div,utest/test<1301>,utest/test-case<1301>>>*/;
  kk_unit_t y = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), tests, (tests, _ctx), _ctx);
  kk_evv_set(w,kk_context());
  kk_unit_t _x_x310 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x311 = kk_std_core_hnd_yield_cont(kk_utest_new_test_fun312(i_10075, _ctx), _ctx); /*3303*/
    kk_unit_unbox(_x_x311);
  }
  else {
    y;
  }
  return kk_unit_box(_x_x310);
}

kk_unit_t kk_utest_test(kk_string_t test_name, kk_function_t tests, kk_context_t* _ctx) { /* forall<a> (test-name : string, tests : () -> <div,test<a>> ()) -> <div,test-case<a>> () */ 
  kk_box_t _x_x294;
  kk_function_t _b_x94_114 = kk_utest_new_test_fun295(test_name, _ctx); /*(m : hnd/marker<<utest/test-case<1301>,div>,()>, ev : hnd/ev<utest/test<1301>>, x1 : string, x2 : string) -> <utest/test-case<1301>,div> ()*/;
  kk_utest__test _x_x302;
  kk_std_core_hnd__clause2 _x_x303 = kk_std_core_hnd__new_Clause2(kk_utest_new_test_fun304(_b_x94_114, _ctx), _ctx); /*hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  _x_x302 = kk_utest__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(1), _x_x303, _ctx); /*utest/test<10,11,12>*/
  _x_x294 = kk_utest__handle_test(_x_x302, kk_utest_new_test_fun308(_ctx), kk_utest_new_test_fun309(tests, _ctx), _ctx); /*659*/
  kk_unit_unbox(_x_x294); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun318__t {
  struct kk_function_s _base;
  kk_string_t suite_name;
};
static kk_box_t kk_utest_suite_fun318(kk_function_t _fself, kk_box_t _b_x140, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun318(kk_string_t suite_name, kk_context_t* _ctx) {
  struct kk_utest_suite_fun318__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun318__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun318, kk_context());
  _self->suite_name = suite_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun318(kk_function_t _fself, kk_box_t _b_x140, kk_context_t* _ctx) {
  struct kk_utest_suite_fun318__t* _self = kk_function_as(struct kk_utest_suite_fun318__t*, _fself, _ctx);
  kk_string_t suite_name = _self->suite_name; /* string */
  kk_drop_match(_self, {kk_string_dup(suite_name, _ctx);}, {}, _ctx)
  kk_unit_t _x_x319 = kk_Unit;
  kk_utest__test_case_t test_case_167 = kk_utest__test_case_t_unbox(_b_x140, KK_OWNED, _ctx); /*utest/test-case-t*/;
  kk_datatype_ptr_dropn(test_case_167, (KK_I32(3)), _ctx);
  kk_std_core_hnd__ev ev_10077 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-suite<_1055>>*/;
  kk_box_t _x_x320;
  {
    struct kk_std_core_hnd_Ev* _con_x321 = kk_std_core_hnd__as_Ev(ev_10077, _ctx);
    kk_box_t _box_x128 = _con_x321->hnd;
    int32_t m = _con_x321->marker;
    kk_utest__test_suite h = kk_utest__test_suite_unbox(_box_x128, KK_BORROWED, _ctx);
    kk_utest__test_suite_dup(h, _ctx);
    {
      struct kk_utest__Hnd_test_suite* _con_x322 = kk_utest__as_Hnd_test_suite(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x322->_cfc;
      kk_std_core_hnd__clause1 _fun_test_suite_fail = _con_x322->_fun_test_suite_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_test_suite_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x132 = _fun_test_suite_fail.clause;
        kk_box_t _x_x323;
        kk_std_core_types__tuple3 _x_x324;
        kk_box_t _x_x325;
        kk_string_t _x_x326 = kk_string_empty(); /*string*/
        _x_x325 = kk_string_box(_x_x326); /*1043*/
        kk_box_t _x_x328;
        kk_string_t _x_x329 = kk_string_empty(); /*string*/
        _x_x328 = kk_string_box(_x_x329); /*1044*/
        _x_x324 = kk_std_core_types__new_Tuple3(kk_string_box(suite_name), _x_x325, _x_x328, _ctx); /*(1042, 1043, 1044)*/
        _x_x323 = kk_std_core_types__tuple3_box(_x_x324, _ctx); /*1009*/
        _x_x320 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x132, (_fun_unbox_x132, m, ev_10077, _x_x323, _ctx), _ctx); /*1010*/
      }
    }
  }
  kk_unit_unbox(_x_x320);
  return kk_unit_box(_x_x319);
}


// lift anonymous function
struct kk_utest_suite_fun332__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_suite_fun332(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun332(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun332, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_suite_fun332(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_164 = kk_Unit;
  kk_unit_unbox(_b_x152);
  return kk_unit_box(_x_164);
}


// lift anonymous function
struct kk_utest_suite_fun333__t {
  struct kk_function_s _base;
  kk_function_t test_cases;
};
static kk_box_t kk_utest_suite_fun333(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun333(kk_function_t test_cases, kk_context_t* _ctx) {
  struct kk_utest_suite_fun333__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun333__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun333, kk_context());
  _self->test_cases = test_cases;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun336__t {
  struct kk_function_s _base;
  kk_ssize_t i_10082;
};
static kk_box_t kk_utest_suite_fun336(kk_function_t _fself, kk_function_t _b_x146, kk_box_t _b_x147, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun336(kk_ssize_t i_10082, kk_context_t* _ctx) {
  struct kk_utest_suite_fun336__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun336__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun336, kk_context());
  _self->i_10082 = i_10082;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun337__t {
  struct kk_function_s _base;
  kk_function_t _b_x146;
};
static kk_unit_t kk_utest_suite_fun337(kk_function_t _fself, kk_box_t _b_x148, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun337(kk_function_t _b_x146, kk_context_t* _ctx) {
  struct kk_utest_suite_fun337__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun337__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun337, kk_context());
  _self->_b_x146 = _b_x146;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_utest_suite_fun337(kk_function_t _fself, kk_box_t _b_x148, kk_context_t* _ctx) {
  struct kk_utest_suite_fun337__t* _self = kk_function_as(struct kk_utest_suite_fun337__t*, _fself, _ctx);
  kk_function_t _b_x146 = _self->_b_x146; /* (1003) -> 3394 3393 */
  kk_drop_match(_self, {kk_function_dup(_b_x146, _ctx);}, {}, _ctx)
  kk_box_t _x_x338 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x146, (_b_x146, _b_x148, _ctx), _ctx); /*3393*/
  kk_unit_unbox(_x_x338); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun339__t {
  struct kk_function_s _base;
  kk_function_t _b_x142_162;
};
static kk_box_t kk_utest_suite_fun339(kk_function_t _fself, kk_box_t _b_x144, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun339(kk_function_t _b_x142_162, kk_context_t* _ctx) {
  struct kk_utest_suite_fun339__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun339__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun339, kk_context());
  _self->_b_x142_162 = _b_x142_162;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun339(kk_function_t _fself, kk_box_t _b_x144, kk_context_t* _ctx) {
  struct kk_utest_suite_fun339__t* _self = kk_function_as(struct kk_utest_suite_fun339__t*, _fself, _ctx);
  kk_function_t _b_x142_162 = _self->_b_x142_162; /* (1009) -> <div,utest/test-case<1393>,utest/test-suite<1393>> () */
  kk_drop_match(_self, {kk_function_dup(_b_x142_162, _ctx);}, {}, _ctx)
  kk_unit_t _x_x340 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x142_162, (_b_x142_162, _b_x144, _ctx), _ctx);
  return kk_unit_box(_x_x340);
}
static kk_box_t kk_utest_suite_fun336(kk_function_t _fself, kk_function_t _b_x146, kk_box_t _b_x147, kk_context_t* _ctx) {
  struct kk_utest_suite_fun336__t* _self = kk_function_as(struct kk_utest_suite_fun336__t*, _fself, _ctx);
  kk_ssize_t i_10082 = _self->i_10082; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10082, _ctx);}, {}, _ctx)
  kk_function_t cont_165 = kk_utest_new_suite_fun337(_b_x146, _ctx); /*(1009) -> <div,utest/test-case<1393>,utest/test-suite<1393>> ()*/;
  kk_box_t res_166 = _b_x147; /*1009*/;
  kk_ssize_t _b_x141_161 = i_10082; /*hnd/ev-index*/;
  kk_function_t _b_x142_162 = cont_165; /*(1009) -> <div,utest/test-case<1393>,utest/test-suite<1393>> ()*/;
  kk_box_t _b_x143_163 = res_166; /*1009*/;
  return kk_std_core_hnd_open_at1(_b_x141_161, kk_utest_new_suite_fun339(_b_x142_162, _ctx), _b_x143_163, _ctx);
}
static kk_box_t kk_utest_suite_fun333(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun333__t* _self = kk_function_as(struct kk_utest_suite_fun333__t*, _fself, _ctx);
  kk_function_t test_cases = _self->test_cases; /* () -> <div,utest/test-case<1393>> () */
  kk_drop_match(_self, {kk_function_dup(test_cases, _ctx);}, {}, _ctx)
  kk_ssize_t i_10082 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_evv_t w = kk_evv_swap_create1(i_10082,kk_context()); /*hnd/evv<<div,utest/test-case<1393>,utest/test-suite<1393>>>*/;
  kk_unit_t y = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), test_cases, (test_cases, _ctx), _ctx);
  kk_evv_set(w,kk_context());
  kk_unit_t _x_x334 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x335 = kk_std_core_hnd_yield_cont(kk_utest_new_suite_fun336(i_10082, _ctx), _ctx); /*3395*/
    kk_unit_unbox(_x_x335);
  }
  else {
    y;
  }
  return kk_unit_box(_x_x334);
}

kk_unit_t kk_utest_suite(kk_string_t suite_name, kk_function_t test_cases, kk_context_t* _ctx) { /* forall<a> (suite-name : string, test-cases : () -> <div,test-case<a>> ()) -> <div,test-suite<a>> () */ 
  kk_utest__test_case _b_x149_153;
  kk_std_core_hnd__clause1 _x_x317 = kk_std_core_hnd_clause_tail1(kk_utest_new_suite_fun318(suite_name, _ctx), _ctx); /*hnd/clause1<1003,1004,1002,1000,1001>*/
  _b_x149_153 = kk_utest__new_Hnd_test_case(kk_reuse_null, 0, kk_integer_from_small(1), _x_x317, _ctx); /*utest/test-case<1393,<utest/test-suite<1393>,div>,()>*/
  kk_box_t _x_x331 = kk_utest__handle_test_case(_b_x149_153, kk_utest_new_suite_fun332(_ctx), kk_utest_new_suite_fun333(test_cases, _ctx), _ctx); /*815*/
  kk_unit_unbox(_x_x331); return kk_Unit;
}


// lift anonymous function
struct kk_utest_run_utest_fun345__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_utest_run_utest_fun345(kk_function_t _fself, int32_t _b_x188, kk_std_core_hnd__ev _b_x189, kk_box_t _b_x190, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun345(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun345__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun345__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun345, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun345(kk_function_t _fself, int32_t _b_x188, kk_std_core_hnd__ev _b_x189, kk_box_t _b_x190, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun345__t* _self = kk_function_as(struct kk_utest_run_utest_fun345__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<2038,list<(string, string, string)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t ___wildcard_x633__14_219 = _b_x188; /*hnd/marker<<local<2038>,div,console/console>,()>*/;
  kk_std_core_hnd__ev ___wildcard_x633__17_220 = _b_x189; /*hnd/ev<utest/test-suite<2043>>*/;
  kk_datatype_ptr_dropn(___wildcard_x633__17_220, (KK_I32(3)), _ctx);
  kk_std_core_types__tuple3 x_221 = kk_std_core_types__tuple3_unbox(_b_x190, KK_OWNED, _ctx); /*(string, string, string)*/;
  kk_unit_t _x_x346 = kk_Unit;
  {
    kk_box_t _box_x170 = x_221.fst;
    kk_box_t _box_x171 = x_221.snd;
    kk_box_t _box_x172 = x_221.thd;
    kk_string_t x1 = kk_string_unbox(_box_x170);
    kk_string_t x2 = kk_string_unbox(_box_x171);
    kk_string_t x3 = kk_string_unbox(_box_x172);
    kk_string_dup(x1, _ctx);
    kk_string_dup(x2, _ctx);
    kk_string_dup(x3, _ctx);
    kk_std_core_types__tuple3_drop(x_221, _ctx);
    kk_std_core_types__list xs_10013;
    kk_box_t _x_x347;
    kk_ref_t _x_x348 = kk_ref_dup(loc, _ctx); /*local-var<2038,list<(string, string, string)>>*/
    _x_x347 = kk_ref_get(_x_x348,kk_context()); /*1000*/
    xs_10013 = kk_std_core_types__list_unbox(_x_x347, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list ys_10014;
    kk_box_t _x_x349;
    kk_std_core_types__tuple3 _x_x350 = kk_std_core_types__new_Tuple3(kk_string_box(x1), kk_string_box(x2), kk_string_box(x3), _ctx); /*(3700, 3701, 3702)*/
    _x_x349 = kk_std_core_types__tuple3_box(_x_x350, _ctx); /*1024*/
    ys_10014 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x349, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list _b_x186_200;
    if (kk_std_core_types__is_Nil(xs_10013, _ctx)) {
      _b_x186_200 = ys_10014; /*list<(string, string, string)>*/
    }
    else {
      _b_x186_200 = kk_std_core_list__unroll_append_10004(xs_10013, ys_10014, _ctx); /*list<(string, string, string)>*/
    }
    kk_unit_t _brw_x223 = kk_Unit;
    kk_ref_set_borrow(loc,(kk_std_core_types__list_box(_b_x186_200, _ctx)),kk_context());
    kk_ref_drop(loc, _ctx);
    _brw_x223;
  }
  return kk_unit_box(_x_x346);
}


// lift anonymous function
struct kk_utest_run_utest_fun351__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun351(kk_function_t _fself, kk_box_t _b_x194, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun351(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun351, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun351(kk_function_t _fself, kk_box_t _b_x194, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x194;
}


// lift anonymous function
struct kk_utest_run_utest_fun352__t {
  struct kk_function_s _base;
  kk_function_t test_suites;
};
static kk_box_t kk_utest_run_utest_fun352(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun352(kk_function_t test_suites, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun352__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun352__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun352, kk_context());
  _self->test_suites = test_suites;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun352(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun352__t* _self = kk_function_as(struct kk_utest_run_utest_fun352__t*, _fself, _ctx);
  kk_function_t test_suites = _self->test_suites; /* () -> <div,utest/test-suite<2043>> () */
  kk_drop_match(_self, {kk_function_dup(test_suites, _ctx);}, {}, _ctx)
  kk_unit_t _x_x353 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), test_suites, (test_suites, _ctx), _ctx);
  return kk_unit_box(_x_x353);
}


// lift anonymous function
struct kk_utest_run_utest_fun362__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun362(kk_function_t _fself, kk_box_t _b_x210, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun362(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun362, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun362(kk_function_t _fself, kk_box_t _b_x210, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x363 = kk_Unit;
  kk_std_core_types__tuple3 _match_x222 = kk_std_core_types__tuple3_unbox(_b_x210, KK_OWNED, _ctx); /*(string, string, string)*/;
  {
    kk_box_t _box_x205 = _match_x222.fst;
    kk_box_t _box_x206 = _match_x222.snd;
    kk_box_t _box_x207 = _match_x222.thd;
    kk_string_t suite_name_0 = kk_string_unbox(_box_x205);
    kk_string_t expected_0 = kk_string_unbox(_box_x206);
    kk_string_t actual_0 = kk_string_unbox(_box_x207);
    kk_string_dup(actual_0, _ctx);
    kk_string_dup(expected_0, _ctx);
    kk_string_dup(suite_name_0, _ctx);
    kk_std_core_types__tuple3_drop(_match_x222, _ctx);
    kk_string_t s_0_10018;
    kk_string_t _x_x364;
    kk_define_string_literal(, _s_x365, 10, "failed at ", _ctx)
    _x_x364 = kk_string_dup(_s_x365, _ctx); /*string*/
    kk_string_t _x_x366 = kk_std_core_show_string_fs_show(suite_name_0, _ctx); /*string*/
    s_0_10018 = kk_std_core_types__lp__plus__plus__rp_(_x_x364, _x_x366, _ctx); /*string*/
    kk_unit_t ___1 = kk_Unit;
    kk_std_core_console_printsln(s_0_10018, _ctx);
    kk_string_t s_1_10019;
    kk_string_t _x_x367;
    kk_define_string_literal(, _s_x368, 10, "\texpected ", _ctx)
    _x_x367 = kk_string_dup(_s_x368, _ctx); /*string*/
    kk_string_t _x_x369;
    kk_string_t _x_x370;
    kk_string_t _x_x371;
    kk_define_string_literal(, _s_x372, 10, ", but got ", _ctx)
    _x_x371 = kk_string_dup(_s_x372, _ctx); /*string*/
    _x_x370 = kk_std_core_types__lp__plus__plus__rp_(_x_x371, actual_0, _ctx); /*string*/
    _x_x369 = kk_std_core_types__lp__plus__plus__rp_(expected_0, _x_x370, _ctx); /*string*/
    s_1_10019 = kk_std_core_types__lp__plus__plus__rp_(_x_x367, _x_x369, _ctx); /*string*/
    kk_std_core_console_printsln(s_1_10019, _ctx);
  }
  return kk_unit_box(_x_x363);
}

kk_unit_t kk_utest_run_utest(kk_function_t test_suites, kk_context_t* _ctx) { /* forall<a> (test-suites : () -> <div,test-suite<a>> ()) -> <div,console/console> () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<2038,list<(string, string, string)>>*/;
  kk_unit_t __ = kk_Unit;
  kk_box_t _x_x341;
  kk_utest__test_suite _x_x342;
  kk_std_core_hnd__clause1 _x_x343;
  kk_function_t _x_x344;
  kk_ref_dup(loc, _ctx);
  _x_x344 = kk_utest_new_run_utest_fun345(loc, _ctx); /*(hnd/marker<1018,1019>, hnd/ev<1017>, 1015) -> 1018 1016*/
  _x_x343 = kk_std_core_hnd__new_Clause1(_x_x344, _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x342 = kk_utest__new_Hnd_test_suite(kk_reuse_null, 0, kk_integer_from_small(1), _x_x343, _ctx); /*utest/test-suite<45,46,47>*/
  _x_x341 = kk_utest__handle_test_suite(_x_x342, kk_utest_new_run_utest_fun351(_ctx), kk_utest_new_run_utest_fun352(test_suites, _ctx), _ctx); /*967*/
  kk_unit_unbox(_x_x341);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x354;
  kk_define_string_literal(, _s_x355, 16, "Running test...\n", _ctx)
  _x_x354 = kk_string_dup(_s_x355, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x354, _ctx);
  kk_std_core_types__list xs_0_10017;
  kk_box_t _x_x356;
  kk_ref_t _x_x357 = kk_ref_dup(loc, _ctx); /*local-var<2038,list<(string, string, string)>>*/
  _x_x356 = kk_ref_get(_x_x357,kk_context()); /*1000*/
  xs_0_10017 = kk_std_core_types__list_unbox(_x_x356, KK_OWNED, _ctx); /*list<(string, string, string)>*/
  kk_unit_t res = kk_Unit;
  if (kk_std_core_types__is_Nil(xs_0_10017, _ctx)) {
    kk_string_t _x_x358;
    kk_define_string_literal(, _s_x359, 20, "All Test Has Passed!", _ctx)
    _x_x358 = kk_string_dup(_s_x359, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x358, _ctx);
  }
  else {
    kk_std_core_types__list_drop(xs_0_10017, _ctx);
    kk_std_core_types__list _b_x208_211;
    kk_box_t _x_x360;
    kk_ref_t _x_x361 = kk_ref_dup(loc, _ctx); /*local-var<2038,list<(string, string, string)>>*/
    _x_x360 = kk_ref_get(_x_x361,kk_context()); /*1000*/
    _b_x208_211 = kk_std_core_types__list_unbox(_x_x360, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list ___2 = kk_std_core_list_map(_b_x208_211, kk_utest_new_run_utest_fun362(_ctx), _ctx); /*list<()>*/;
    kk_std_core_types__list_drop(___2, _ctx);
  }
  kk_box_t _x_x373 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*4039*/
  kk_unit_unbox(_x_x373); return kk_Unit;
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
    kk_string_t _x_x259;
    kk_define_string_literal(, _s_x260, 10, "test@utest", _ctx)
    _x_x259 = kk_string_dup(_s_x260, _ctx); /*string*/
    kk_utest__tag_test = kk_std_core_hnd__new_Htag(_x_x259, _ctx); /*forall<a> hnd/htag<utest/test<a>>*/
  }
  {
    kk_string_t _x_x266;
    kk_define_string_literal(, _s_x267, 15, "test-case@utest", _ctx)
    _x_x266 = kk_string_dup(_s_x267, _ctx); /*string*/
    kk_utest__tag_test_case = kk_std_core_hnd__new_Htag(_x_x266, _ctx); /*forall<a> hnd/htag<utest/test-case<a>>*/
  }
  {
    kk_string_t _x_x273;
    kk_define_string_literal(, _s_x274, 16, "test-suite@utest", _ctx)
    _x_x273 = kk_string_dup(_s_x274, _ctx); /*string*/
    kk_utest__tag_test_suite = kk_std_core_hnd__new_Htag(_x_x273, _ctx); /*forall<a> hnd/htag<utest/test-suite<a>>*/
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
