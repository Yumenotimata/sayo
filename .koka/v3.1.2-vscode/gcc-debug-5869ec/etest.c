// Koka generated module: etest, koka version: 3.1.2, platform: 64-bit
#include "etest.h"
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_etest__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_etest__handle_test(kk_etest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<e,a,e1,b> (hnd : test<e,e1,b>, ret : (res : a) -> e1 b, action : () -> <test<e>|e1> a) -> e1 b */ 
  kk_std_core_hnd__htag _x_x138 = kk_std_core_hnd__htag_dup(kk_etest__tag_test, _ctx); /*forall<e> hnd/htag<etest/test<e>>*/
  return kk_std_core_hnd__hhandle(_x_x138, kk_etest__test_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_std_core_hnd__clause1 kk_etest_test_append_fun141(kk_function_t _fself, kk_box_t _b_x14, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_etest__test _brw_x131 = kk_etest__test_unbox(_b_x14, KK_OWNED, _ctx); /*etest/test<358,342,343>*/;
  kk_std_core_hnd__clause1 _brw_x132 = kk_etest__select_test_append(_brw_x131, _ctx); /*hnd/clause1<(() -> 272 273, () -> 272 273, (273, 273) -> bool, (273) -> string),(),etest/test<272>,274,275>*/;
  kk_etest__test_drop(_brw_x131, _ctx);
  return _brw_x132;
}
extern kk_box_t kk_etest_test_append_fun142(kk_function_t _fself, kk_box_t _b_x20, kk_box_t _b_x21, kk_context_t* _ctx) {
  struct kk_etest_test_append_fun142__t* _self = kk_function_as(struct kk_etest_test_append_fun142__t*, _fself, _ctx);
  kk_function_t eq = _self->eq; /* (359, 359) -> bool */
  kk_drop_match(_self, {kk_function_dup(eq, _ctx);}, {}, _ctx)
  bool _x_x143 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), eq, (eq, _b_x20, _b_x21, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x143);
}
extern kk_box_t kk_etest_test_append_fun144(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  struct kk_etest_test_append_fun144__t* _self = kk_function_as(struct kk_etest_test_append_fun144__t*, _fself, _ctx);
  kk_function_t show = _self->show; /* (359) -> string */
  kk_drop_match(_self, {kk_function_dup(show, _ctx);}, {}, _ctx)
  kk_string_t _x_x145 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show, (show, _b_x24, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x145);
}


// lift anonymous function
struct kk_etest_assert_eq_fun147__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_etest_assert_eq_fun147(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_etest_new_assert_eq_fun147(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_assert_eq_fun147, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_hnd__clause1 kk_etest_assert_eq_fun147(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_etest__test _brw_x129 = kk_etest__test_unbox(_b_x37, KK_OWNED, _ctx); /*etest/test<437,342,343>*/;
  kk_std_core_hnd__clause1 _brw_x130 = kk_etest__select_test_append(_brw_x129, _ctx); /*hnd/clause1<(() -> 272 273, () -> 272 273, (273, 273) -> bool, (273) -> string),(),etest/test<272>,274,275>*/;
  kk_etest__test_drop(_brw_x129, _ctx);
  return _brw_x130;
}


// lift anonymous function
struct kk_etest_assert_eq_fun148__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_etest_assert_eq_fun148(kk_function_t _fself, kk_box_t _b_x43, kk_box_t _b_x44, kk_context_t* _ctx);
static kk_function_t kk_etest_new_assert_eq_fun148(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_etest_assert_eq_fun148__t* _self = kk_function_alloc_as(struct kk_etest_assert_eq_fun148__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_assert_eq_fun148, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest_assert_eq_fun148(kk_function_t _fself, kk_box_t _b_x43, kk_box_t _b_x44, kk_context_t* _ctx) {
  struct kk_etest_assert_eq_fun148__t* _self = kk_function_as(struct kk_etest_assert_eq_fun148__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (436, 436) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x149 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x43, _b_x44, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x149);
}


// lift anonymous function
struct kk_etest_assert_eq_fun150__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_etest_assert_eq_fun150(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_etest_new_assert_eq_fun150(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_etest_assert_eq_fun150__t* _self = kk_function_alloc_as(struct kk_etest_assert_eq_fun150__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_assert_eq_fun150, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest_assert_eq_fun150(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  struct kk_etest_assert_eq_fun150__t* _self = kk_function_as(struct kk_etest_assert_eq_fun150__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (436) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x151 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x47, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x151);
}

kk_unit_t kk_etest_assert_eq(kk_function_t f, kk_function_t g, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a,e> (f : () -> e a, g : () -> e a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> (test<e>) () */ 
  kk_std_core_hnd__ev _b_x31_48 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<etest/test<437>>*/;
  kk_box_t _x_x146 = kk_std_core_hnd__perform4(_b_x31_48, kk_etest_new_assert_eq_fun147(_ctx), kk_function_box(f, _ctx), kk_function_box(g, _ctx), kk_function_box(kk_etest_new_assert_eq_fun148(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), kk_function_box(kk_etest_new_assert_eq_fun150(_implicit_fs_show, _ctx), _ctx), _ctx); /*1004*/
  kk_unit_unbox(_x_x146); return kk_Unit;
}


// lift anonymous function
struct kk_etest_run_test_fun156__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_etest_run_test_fun156(kk_function_t _fself, int32_t _b_x95, kk_std_core_hnd__ev _b_x96, kk_box_t _b_x97, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun156(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun156__t* _self = kk_function_alloc_as(struct kk_etest_run_test_fun156__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_run_test_fun156, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_etest_run_test_fun159__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x76;
};
static kk_string_t kk_etest_run_test_fun159(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun159(kk_box_t _fun_unbox_x76, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun159__t* _self = kk_function_alloc_as(struct kk_etest_run_test_fun159__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_run_test_fun159, kk_context());
  _self->_fun_unbox_x76 = _fun_unbox_x76;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_etest_run_test_fun159(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun159__t* _self = kk_function_as(struct kk_etest_run_test_fun159__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x76 = _self->_fun_unbox_x76; /* 1042 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x76, _ctx);}, {}, _ctx)
  kk_box_t _x_x160;
  kk_function_t _x_x161 = kk_function_unbox(_fun_unbox_x76, _ctx); /*(77) -> 78*/
  _x_x160 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x161, (_x_x161, _b_x79, _ctx), _ctx); /*78*/
  return kk_string_unbox(_x_x160);
}
static kk_box_t kk_etest_run_test_fun156(kk_function_t _fself, int32_t _b_x95, kk_std_core_hnd__ev _b_x96, kk_box_t _b_x97, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun156__t* _self = kk_function_as(struct kk_etest_run_test_fun156__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<917,list<(string, string)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t ___wildcard_x633__14_123 = _b_x95; /*hnd/marker<<local<917>,console/console>,()>*/;
  kk_std_core_hnd__ev ___wildcard_x633__17_124 = _b_x96; /*hnd/ev<etest/test<<local<917>,console/console>>>*/;
  kk_datatype_ptr_dropn(___wildcard_x633__17_124, (KK_I32(3)), _ctx);
  kk_std_core_types__tuple4 x_125 = kk_std_core_types__tuple4_unbox(_b_x97, KK_OWNED, _ctx); /*(() -> <local<917>,console/console> 760, () -> <local<917>,console/console> 760, (760, 760) -> bool, (760) -> string)*/;
  kk_unit_t _x_x157 = kk_Unit;
  {
    struct kk_std_core_types_Tuple4* _con_x158 = kk_std_core_types__as_Tuple4(x_125, _ctx);
    kk_box_t _fun_unbox_x57 = _con_x158->fst;
    kk_box_t _fun_unbox_x60 = _con_x158->snd;
    kk_box_t _fun_unbox_x67 = _con_x158->thd;
    kk_box_t _fun_unbox_x76 = _con_x158->field4;
    if kk_likely(kk_datatype_ptr_is_unique(x_125, _ctx)) {
      kk_datatype_ptr_free(x_125, _ctx);
    }
    else {
      kk_box_dup(_fun_unbox_x57, _ctx);
      kk_box_dup(_fun_unbox_x60, _ctx);
      kk_box_dup(_fun_unbox_x67, _ctx);
      kk_box_dup(_fun_unbox_x76, _ctx);
      kk_datatype_ptr_decref(x_125, _ctx);
    }
    kk_function_t x4 = kk_etest_new_run_test_fun159(_fun_unbox_x76, _ctx); /*(760) -> string*/;
    kk_box_t _b_x71_106;
    kk_function_t _x_x162;
    kk_box_t _x_x163 = kk_box_dup(_fun_unbox_x57, _ctx); /*1039*/
    _x_x162 = kk_function_unbox(_x_x163, _ctx); /*() -> <local<917>,console/console> 58*/
    _b_x71_106 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x162, (_x_x162, _ctx), _ctx); /*760*/
    kk_box_t _b_x72_107;
    kk_function_t _x_x164;
    kk_box_t _x_x165 = kk_box_dup(_fun_unbox_x60, _ctx); /*1040*/
    _x_x164 = kk_function_unbox(_x_x165, _ctx); /*() -> <local<917>,console/console> 61*/
    _b_x72_107 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x164, (_x_x164, _ctx), _ctx); /*760*/
    bool _match_x127;
    kk_box_t _x_x166;
    kk_function_t _x_x167 = kk_function_unbox(_fun_unbox_x67, _ctx); /*(68, 69) -> 70*/
    _x_x166 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x167, (_x_x167, _b_x71_106, _b_x72_107, _ctx), _ctx); /*70*/
    _match_x127 = kk_bool_unbox(_x_x166); /*bool*/
    if (_match_x127) {
      kk_function_drop(x4, _ctx);
      kk_ref_drop(loc, _ctx);
      kk_box_drop(_fun_unbox_x60, _ctx);
      kk_box_drop(_fun_unbox_x57, _ctx);
    }
    else {
      kk_string_t _b_x81_92;
      kk_function_t _x_x170 = kk_function_dup(x4, _ctx); /*(760) -> string*/
      kk_box_t _x_x168;
      kk_function_t _x_x169 = kk_function_unbox(_fun_unbox_x57, _ctx); /*() -> <local<917>,console/console> 58*/
      _x_x168 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x169, (_x_x169, _ctx), _ctx); /*58*/
      _b_x81_92 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x170, (_x_x170, _x_x168, _ctx), _ctx); /*string*/
      kk_string_t _b_x82_93;
      kk_box_t _x_x171;
      kk_function_t _x_x172 = kk_function_unbox(_fun_unbox_x60, _ctx); /*() -> <local<917>,console/console> 61*/
      _x_x171 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x172, (_x_x172, _ctx), _ctx); /*61*/
      _b_x82_93 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), x4, (x4, _x_x171, _ctx), _ctx); /*string*/
      kk_std_core_types__list _b_x86_88;
      kk_std_core_types__list _x_x173;
      kk_box_t _x_x174;
      kk_ref_t _x_x175 = kk_ref_dup(loc, _ctx); /*local-var<917,list<(string, string)>>*/
      _x_x174 = kk_ref_get(_x_x175,kk_context()); /*1000*/
      _x_x173 = kk_std_core_types__list_unbox(_x_x174, KK_OWNED, _ctx); /*list<(string, string)>*/
      kk_std_core_types__list _x_x176;
      kk_box_t _x_x177;
      kk_std_core_types__tuple2 _x_x178 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x81_92), kk_string_box(_b_x82_93), _ctx); /*(1038, 1039)*/
      _x_x177 = kk_std_core_types__tuple2_box(_x_x178, _ctx); /*1024*/
      _x_x176 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x177, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
      _b_x86_88 = kk_std_core_list_append(_x_x173, _x_x176, _ctx); /*list<(string, string)>*/
      kk_unit_t __ = kk_Unit;
      kk_unit_t _brw_x128 = kk_Unit;
      kk_ref_set_borrow(loc,(kk_std_core_types__list_box(_b_x86_88, _ctx)),kk_context());
      kk_ref_drop(loc, _ctx);
      _brw_x128;
    }
  }
  return kk_unit_box(_x_x157);
}


// lift anonymous function
struct kk_etest_run_test_fun179__t {
  struct kk_function_s _base;
};
static kk_box_t kk_etest_run_test_fun179(kk_function_t _fself, kk_box_t _b_x101, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun179(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_run_test_fun179, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_etest_run_test_fun179(kk_function_t _fself, kk_box_t _b_x101, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x101;
}


// lift anonymous function
struct kk_etest_run_test_fun180__t {
  struct kk_function_s _base;
  kk_function_t tests;
};
static kk_box_t kk_etest_run_test_fun180(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun180(kk_function_t tests, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun180__t* _self = kk_function_alloc_as(struct kk_etest_run_test_fun180__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_run_test_fun180, kk_context());
  _self->tests = tests;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest_run_test_fun180(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun180__t* _self = kk_function_as(struct kk_etest_run_test_fun180__t*, _fself, _ctx);
  kk_function_t tests = _self->tests; /* forall<e> () -> (etest/test<e>) () */
  kk_drop_match(_self, {kk_function_dup(tests, _ctx);}, {}, _ctx)
  kk_unit_t _x_x181 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), tests, (tests, _ctx), _ctx);
  return kk_unit_box(_x_x181);
}


// lift anonymous function
struct kk_etest_run_test_fun184__t {
  struct kk_function_s _base;
};
static kk_box_t kk_etest_run_test_fun184(kk_function_t _fself, kk_box_t _b_x114, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun184(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_run_test_fun184, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_etest_run_test_fun184(kk_function_t _fself, kk_box_t _b_x114, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t s_10005;
  kk_std_core_types__tuple2 _match_x126 = kk_std_core_types__tuple2_unbox(_b_x114, KK_OWNED, _ctx); /*(string, string)*/;
  {
    kk_box_t _box_x110 = _match_x126.fst;
    kk_box_t _box_x111 = _match_x126.snd;
    kk_string_t f_0 = kk_string_unbox(_box_x110);
    kk_string_dup(f_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x126, _ctx);
    kk_string_t _x_x185;
    kk_define_string_literal(, _s_x186, 9, "expected ", _ctx)
    _x_x185 = kk_string_dup(_s_x186, _ctx); /*string*/
    s_10005 = kk_std_core_types__lp__plus__plus__rp_(_x_x185, f_0, _ctx); /*string*/
  }
  kk_unit_t _x_x187 = kk_Unit;
  kk_std_core_console_printsln(s_10005, _ctx);
  return kk_unit_box(_x_x187);
}

kk_unit_t kk_etest_run_test(kk_function_t tests, kk_context_t* _ctx) { /* (tests : forall<e> () -> (test<e>) ()) -> console/console () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<917,list<(string, string)>>*/;
  kk_unit_t ___0 = kk_Unit;
  kk_box_t _x_x152;
  kk_etest__test _x_x153;
  kk_std_core_hnd__clause1 _x_x154;
  kk_function_t _x_x155;
  kk_ref_dup(loc, _ctx);
  _x_x155 = kk_etest_new_run_test_fun156(loc, _ctx); /*(hnd/marker<1018,1019>, hnd/ev<1017>, 1015) -> 1018 1016*/
  _x_x154 = kk_std_core_hnd__new_Clause1(_x_x155, _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x153 = kk_etest__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(1), _x_x154, _ctx); /*etest/test<18,19,20>*/
  _x_x152 = kk_etest__handle_test(_x_x153, kk_etest_new_run_test_fun179(_ctx), kk_etest_new_run_test_fun180(tests, _ctx), _ctx); /*235*/
  kk_unit_unbox(_x_x152);
  kk_std_core_types__list _b_x112_115;
  kk_box_t _x_x182;
  kk_ref_t _x_x183 = kk_ref_dup(loc, _ctx); /*local-var<917,list<(string, string)>>*/
  _x_x182 = kk_ref_get(_x_x183,kk_context()); /*1000*/
  _b_x112_115 = kk_std_core_types__list_unbox(_x_x182, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_std_core_types__list ___1 = kk_std_core_list_map(_b_x112_115, kk_etest_new_run_test_fun184(_ctx), _ctx); /*list<()>*/;
  kk_std_core_types__list_drop(___1, _ctx);
  kk_box_t _x_x188 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(kk_Unit), _ctx); /*3004*/
  kk_unit_unbox(_x_x188); return kk_Unit;
}

// initialization
void kk_etest__init(kk_context_t* _ctx){
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
    kk_string_t _x_x136;
    kk_define_string_literal(, _s_x137, 10, "test@etest", _ctx)
    _x_x136 = kk_string_dup(_s_x137, _ctx); /*string*/
    kk_etest__tag_test = kk_std_core_hnd__new_Htag(_x_x136, _ctx); /*forall<e> hnd/htag<etest/test<e>>*/
  }
}

// termination
void kk_etest__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_etest__tag_test, _ctx);
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
