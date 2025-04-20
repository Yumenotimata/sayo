// Koka generated module: etest, koka version: 3.1.2, platform: 64-bit
#include "etest.h"
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_etest__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_etest__handle_test(kk_etest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<e,a,e1,b> (hnd : test<e,e1,b>, ret : (res : a) -> e1 b, action : () -> <test<e>|e1> a) -> e1 b */ 
  kk_std_core_hnd__htag _x_x114 = kk_std_core_hnd__htag_dup(kk_etest__tag_test, _ctx); /*forall<e> hnd/htag<etest/test<e>>*/
  return kk_std_core_hnd__hhandle(_x_x114, kk_etest__test_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_box_t kk_etest_append_fun119(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_append_fun119__t* _self = kk_function_as(struct kk_etest_append_fun119__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> 413 bool */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  bool _x_x120 = kk_function_call(bool, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x120);
}
 
// runtime tag for the effect `:test-case`

kk_std_core_hnd__htag kk_etest__tag_test_case;
 
// handler for the effect `:test-case`

kk_box_t kk_etest__handle_test_case(kk_etest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<e,a,e1,b> (hnd : test-case<e,e1,b>, ret : (res : a) -> e1 b, action : () -> <test-case<e>|e1> a) -> e1 b */ 
  kk_std_core_hnd__htag _x_x123 = kk_std_core_hnd__htag_dup(kk_etest__tag_test_case, _ctx); /*forall<e> hnd/htag<etest/test-case<e>>*/
  return kk_std_core_hnd__hhandle(_x_x123, kk_etest__test_case_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_box_t kk_etest_test_case_append_fun128(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_test_case_append_fun128__t* _self = kk_function_as(struct kk_etest_test_case_append_fun128__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> 565 bool */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  bool _x_x129 = kk_function_call(bool, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x129);
}
 
// monadic lift


// lift anonymous function
struct kk_etest__mlift_assert_eq_10017_fun131__t {
  struct kk_function_s _base;
  kk_box_t _y_x10006;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_etest__mlift_assert_eq_10017_fun131(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_etest__new_mlift_assert_eq_10017_fun131(kk_box_t _y_x10006, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_etest__mlift_assert_eq_10017_fun131__t* _self = kk_function_alloc_as(struct kk_etest__mlift_assert_eq_10017_fun131__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest__mlift_assert_eq_10017_fun131, kk_context());
  _self->_y_x10006 = _y_x10006;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest__mlift_assert_eq_10017_fun131(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  struct kk_etest__mlift_assert_eq_10017_fun131__t* _self = kk_function_as(struct kk_etest__mlift_assert_eq_10017_fun131__t*, _fself, _ctx);
  kk_box_t _y_x10006 = _self->_y_x10006; /* 617 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (617, 617) -> bool */
  kk_drop_match(_self, {kk_box_dup(_y_x10006, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  kk_box_t _y_x10007_39 = _b_x37; /*617*/;
  bool _x_x132 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _y_x10006, _y_x10007_39, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x132);
}

bool kk_etest__mlift_assert_eq_10017(kk_function_t g, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_box_t _y_x10006, kk_context_t* _ctx) { /* forall<a,e> (g : () -> e a, ?(==) : (a, a) -> bool, a) -> e bool */ 
  kk_box_t x_10027 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), g, (g, _ctx), _ctx); /*617*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10027, _ctx);
    kk_box_t _x_x130 = kk_std_core_hnd_yield_extend(kk_etest__new_mlift_assert_eq_10017_fun131(_y_x10006, _implicit_fs__lp__eq__eq__rp_, _ctx), _ctx); /*2978*/
    return kk_bool_unbox(_x_x130);
  }
  {
    return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _y_x10006, x_10027, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_etest_assert_eq_fun136__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_function_t g;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_etest_assert_eq_fun136(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_assert_eq_fun136(kk_function_t f, kk_function_t g, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_etest_assert_eq_fun136__t* _self = kk_function_alloc_as(struct kk_etest_assert_eq_fun136__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_assert_eq_fun136, kk_context());
  _self->f = f;
  _self->g = g;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_etest_assert_eq_fun139__t {
  struct kk_function_s _base;
  kk_function_t g;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_etest_assert_eq_fun139(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_etest_new_assert_eq_fun139(kk_function_t g, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_etest_assert_eq_fun139__t* _self = kk_function_alloc_as(struct kk_etest_assert_eq_fun139__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_assert_eq_fun139, kk_context());
  _self->g = g;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest_assert_eq_fun139(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  struct kk_etest_assert_eq_fun139__t* _self = kk_function_as(struct kk_etest_assert_eq_fun139__t*, _fself, _ctx);
  kk_function_t g = _self->g; /* () -> 618 617 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (617, 617) -> bool */
  kk_drop_match(_self, {kk_function_dup(g, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  kk_box_t _y_x10006_53 = _b_x51; /*617*/;
  bool _x_x140 = kk_etest__mlift_assert_eq_10017(g, _implicit_fs__lp__eq__eq__rp_, _y_x10006_53, _ctx); /*bool*/
  return kk_bool_box(_x_x140);
}
static kk_box_t kk_etest_assert_eq_fun136(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_assert_eq_fun136__t* _self = kk_function_as(struct kk_etest_assert_eq_fun136__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> 618 617 */
  kk_function_t g = _self->g; /* () -> 618 617 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (617, 617) -> bool */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_function_dup(g, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  kk_box_t x_0_10035 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx); /*617*/;
  bool _x_x137;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_0_10035, _ctx);
    kk_box_t _x_x138 = kk_std_core_hnd_yield_extend(kk_etest_new_assert_eq_fun139(g, _implicit_fs__lp__eq__eq__rp_, _ctx), _ctx); /*2978*/
    _x_x137 = kk_bool_unbox(_x_x138); /*bool*/
  }
  else {
    _x_x137 = kk_etest__mlift_assert_eq_10017(g, _implicit_fs__lp__eq__eq__rp_, x_0_10035, _ctx); /*bool*/
  }
  return kk_bool_box(_x_x137);
}

kk_unit_t kk_etest_assert_eq(kk_function_t f, kk_function_t g, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (f : () -> e a, g : () -> e a, ?(==) : (a, a) -> bool) -> (test<e>) () */ 
  kk_std_core_hnd__ev ev_10032 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<etest/test<618>>*/;
  kk_box_t _x_x133;
  {
    struct kk_std_core_hnd_Ev* _con_x134 = kk_std_core_hnd__as_Ev(ev_10032, _ctx);
    kk_box_t _box_x40 = _con_x134->hnd;
    int32_t m = _con_x134->marker;
    kk_etest__test h = kk_etest__test_unbox(_box_x40, KK_BORROWED, _ctx);
    kk_etest__test_dup(h, _ctx);
    {
      struct kk_etest__Hnd_test* _con_x135 = kk_etest__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x135->_cfc;
      kk_std_core_hnd__clause1 _fun_append = _con_x135->_fun_append;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_append, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x45 = _fun_append.clause;
        _x_x133 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x45, (_fun_unbox_x45, m, ev_10032, kk_function_box(kk_etest_new_assert_eq_fun136(f, g, _implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  kk_unit_unbox(_x_x133); return kk_Unit;
}


// lift anonymous function
struct kk_etest_test_fun142__t {
  struct kk_function_s _base;
};
static kk_box_t kk_etest_test_fun142(kk_function_t _fself, kk_box_t _b_x65, kk_context_t* _ctx);
static kk_function_t kk_etest_new_test_fun142(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_test_fun142, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_etest_test_fun144__t {
  struct kk_function_s _base;
  kk_box_t _b_x65;
};
static bool kk_etest_test_fun144(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_test_fun144(kk_box_t _b_x65, kk_context_t* _ctx) {
  struct kk_etest_test_fun144__t* _self = kk_function_alloc_as(struct kk_etest_test_fun144__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_test_fun144, kk_context());
  _self->_b_x65 = _b_x65;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_etest_test_fun144(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_test_fun144__t* _self = kk_function_as(struct kk_etest_test_fun144__t*, _fself, _ctx);
  kk_box_t _b_x65 = _self->_b_x65; /* 5721 */
  kk_drop_match(_self, {kk_box_dup(_b_x65, _ctx);}, {}, _ctx)
  kk_box_t _x_x145;
  kk_function_t _x_x146 = kk_function_unbox(_b_x65, _ctx); /*() -> 710 66*/
  _x_x145 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x146, (_x_x146, _ctx), _ctx); /*66*/
  return kk_bool_unbox(_x_x145);
}


// lift anonymous function
struct kk_etest_test_fun150__t {
  struct kk_function_s _base;
  kk_function_t f_80;
};
static kk_box_t kk_etest_test_fun150(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_test_fun150(kk_function_t f_80, kk_context_t* _ctx) {
  struct kk_etest_test_fun150__t* _self = kk_function_alloc_as(struct kk_etest_test_fun150__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_test_fun150, kk_context());
  _self->f_80 = f_80;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest_test_fun150(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_test_fun150__t* _self = kk_function_as(struct kk_etest_test_fun150__t*, _fself, _ctx);
  kk_function_t f_80 = _self->f_80; /* () -> 710 bool */
  kk_drop_match(_self, {kk_function_dup(f_80, _ctx);}, {}, _ctx)
  bool _x_x151 = kk_function_call(bool, (kk_function_t, kk_context_t*), f_80, (f_80, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x151);
}
static kk_box_t kk_etest_test_fun142(kk_function_t _fself, kk_box_t _b_x65, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x143 = kk_Unit;
  kk_function_t f_80 = kk_etest_new_test_fun144(_b_x65, _ctx); /*() -> 710 bool*/;
  kk_std_core_hnd__ev ev_10037 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<etest/test-case<710>>*/;
  kk_box_t _x_x147;
  {
    struct kk_std_core_hnd_Ev* _con_x148 = kk_std_core_hnd__as_Ev(ev_10037, _ctx);
    kk_box_t _box_x54 = _con_x148->hnd;
    int32_t m = _con_x148->marker;
    kk_etest__test_case h = kk_etest__test_case_unbox(_box_x54, KK_BORROWED, _ctx);
    kk_etest__test_case_dup(h, _ctx);
    {
      struct kk_etest__Hnd_test_case* _con_x149 = kk_etest__as_Hnd_test_case(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x149->_cfc;
      kk_std_core_hnd__clause1 _fun_test_case_append = _con_x149->_fun_test_case_append;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_test_case_append, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x59 = _fun_test_case_append.clause;
        _x_x147 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x59, (_fun_unbox_x59, m, ev_10037, kk_function_box(kk_etest_new_test_fun150(f_80, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  kk_unit_unbox(_x_x147);
  return kk_unit_box(_x_x143);
}


// lift anonymous function
struct kk_etest_test_fun153__t {
  struct kk_function_s _base;
};
static kk_box_t kk_etest_test_fun153(kk_function_t _fself, kk_box_t _b_x72, kk_context_t* _ctx);
static kk_function_t kk_etest_new_test_fun153(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_test_fun153, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_etest_test_fun153(kk_function_t _fself, kk_box_t _b_x72, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_79 = kk_Unit;
  kk_unit_unbox(_b_x72);
  return kk_unit_box(_x_79);
}


// lift anonymous function
struct kk_etest_test_fun154__t {
  struct kk_function_s _base;
  kk_function_t tests;
};
static kk_box_t kk_etest_test_fun154(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_test_fun154(kk_function_t tests, kk_context_t* _ctx) {
  struct kk_etest_test_fun154__t* _self = kk_function_alloc_as(struct kk_etest_test_fun154__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_test_fun154, kk_context());
  _self->tests = tests;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_etest_test_fun155__t {
  struct kk_function_s _base;
  kk_function_t _b_x68_78;
};
static kk_box_t kk_etest_test_fun155(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_test_fun155(kk_function_t _b_x68_78, kk_context_t* _ctx) {
  struct kk_etest_test_fun155__t* _self = kk_function_alloc_as(struct kk_etest_test_fun155__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_test_fun155, kk_context());
  _self->_b_x68_78 = _b_x68_78;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest_test_fun155(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_test_fun155__t* _self = kk_function_as(struct kk_etest_test_fun155__t*, _fself, _ctx);
  kk_function_t _b_x68_78 = _self->_b_x68_78; /* () -> (etest/test<710>) () */
  kk_drop_match(_self, {kk_function_dup(_b_x68_78, _ctx);}, {}, _ctx)
  kk_unit_t _x_x156 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x68_78, (_b_x68_78, _ctx), _ctx);
  return kk_unit_box(_x_x156);
}
static kk_box_t kk_etest_test_fun154(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_test_fun154__t* _self = kk_function_as(struct kk_etest_test_fun154__t*, _fself, _ctx);
  kk_function_t tests = _self->tests; /* () -> (etest/test<710>) () */
  kk_drop_match(_self, {kk_function_dup(tests, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x67_77 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x68_78 = tests; /*() -> (etest/test<710>) ()*/;
  return kk_std_core_hnd__open_at0(_b_x67_77, kk_etest_new_test_fun155(_b_x68_78, _ctx), _ctx);
}

kk_unit_t kk_etest_test(kk_string_t name, kk_function_t tests, kk_context_t* _ctx) { /* forall<e> (name : string, tests : () -> (test<e>) ()) -> (test-case<e>) () */ 
  kk_string_drop(name, _ctx);
  kk_etest__test _b_x69_73;
  kk_std_core_hnd__clause1 _x_x141 = kk_std_core_hnd_clause_tail1(kk_etest_new_test_fun142(_ctx), _ctx); /*hnd/clause1<5721,5722,5720,5718,5719>*/
  _b_x69_73 = kk_etest__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(1), _x_x141, _ctx); /*etest/test<710,(etest/test-case<710>),()>*/
  kk_box_t _x_x152 = kk_etest__handle_test(_b_x69_73, kk_etest_new_test_fun153(_ctx), kk_etest_new_test_fun154(tests, _ctx), _ctx); /*320*/
  kk_unit_unbox(_x_x152); return kk_Unit;
}


// lift anonymous function
struct kk_etest_run_test_fun160__t {
  struct kk_function_s _base;
};
static kk_box_t kk_etest_run_test_fun160(kk_function_t _fself, kk_box_t _b_x84, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun160(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_run_test_fun160, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_etest_run_test_fun162__t {
  struct kk_function_s _base;
  kk_box_t _b_x84;
};
static bool kk_etest_run_test_fun162(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun162(kk_box_t _b_x84, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun162__t* _self = kk_function_alloc_as(struct kk_etest_run_test_fun162__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_run_test_fun162, kk_context());
  _self->_b_x84 = _b_x84;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_etest_run_test_fun162(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun162__t* _self = kk_function_as(struct kk_etest_run_test_fun162__t*, _fself, _ctx);
  kk_box_t _b_x84 = _self->_b_x84; /* 5721 */
  kk_drop_match(_self, {kk_box_dup(_b_x84, _ctx);}, {}, _ctx)
  kk_box_t _x_x163;
  kk_function_t _x_x164 = kk_function_unbox(_b_x84, _ctx); /*() -> <console/console|811> 85*/
  _x_x163 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x164, (_x_x164, _ctx), _ctx); /*85*/
  return kk_bool_unbox(_x_x163);
}


// lift anonymous function
struct kk_etest_run_test_fun165__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_etest_run_test_fun165(kk_function_t _fself, bool _y_x10011, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun165(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_run_test_fun165, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_unit_t kk_etest_run_test_fun165(kk_function_t _fself, bool _y_x10011, kk_context_t* _ctx) {
  kk_unused(_fself);
  if (_y_x10011) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x166;
    kk_define_string_literal(, _s_x167, 7, "success", _ctx)
    _x_x166 = kk_string_dup(_s_x167, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x166, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_etest_run_test_fun169__t {
  struct kk_function_s _base;
  kk_function_t next_10041;
};
static kk_box_t kk_etest_run_test_fun169(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun169(kk_function_t next_10041, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun169__t* _self = kk_function_alloc_as(struct kk_etest_run_test_fun169__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_run_test_fun169, kk_context());
  _self->next_10041 = next_10041;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest_run_test_fun169(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun169__t* _self = kk_function_as(struct kk_etest_run_test_fun169__t*, _fself, _ctx);
  kk_function_t next_10041 = _self->next_10041; /* (bool) -> <console/console|811> () */
  kk_drop_match(_self, {kk_function_dup(next_10041, _ctx);}, {}, _ctx)
  kk_unit_t _x_x170 = kk_Unit;
  bool _x_x171 = kk_bool_unbox(_b_x82); /*bool*/
  kk_function_call(kk_unit_t, (kk_function_t, bool, kk_context_t*), next_10041, (next_10041, _x_x171, _ctx), _ctx);
  return kk_unit_box(_x_x170);
}
static kk_box_t kk_etest_run_test_fun160(kk_function_t _fself, kk_box_t _b_x84, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x161 = kk_Unit;
  kk_function_t f_100 = kk_etest_new_run_test_fun162(_b_x84, _ctx); /*() -> <console/console|811> bool*/;
  bool x_10040 = kk_function_call(bool, (kk_function_t, kk_context_t*), f_100, (f_100, _ctx), _ctx); /*bool*/;
  kk_function_t next_10041 = kk_etest_new_run_test_fun165(_ctx); /*(bool) -> <console/console|811> ()*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x168 = kk_std_core_hnd_yield_extend(kk_etest_new_run_test_fun169(next_10041, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x168);
  }
  else {
    kk_function_call(kk_unit_t, (kk_function_t, bool, kk_context_t*), next_10041, (next_10041, x_10040, _ctx), _ctx);
  }
  return kk_unit_box(_x_x161);
}


// lift anonymous function
struct kk_etest_run_test_fun173__t {
  struct kk_function_s _base;
};
static kk_box_t kk_etest_run_test_fun173(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun173(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_etest_run_test_fun173, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_etest_run_test_fun173(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_99 = kk_Unit;
  kk_unit_unbox(_b_x91);
  return kk_unit_box(_x_99);
}


// lift anonymous function
struct kk_etest_run_test_fun174__t {
  struct kk_function_s _base;
  kk_function_t cases;
};
static kk_box_t kk_etest_run_test_fun174(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun174(kk_function_t cases, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun174__t* _self = kk_function_alloc_as(struct kk_etest_run_test_fun174__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_run_test_fun174, kk_context());
  _self->cases = cases;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_etest_run_test_fun176__t {
  struct kk_function_s _base;
  kk_function_t _b_x87_98;
};
static kk_box_t kk_etest_run_test_fun176(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_etest_new_run_test_fun176(kk_function_t _b_x87_98, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun176__t* _self = kk_function_alloc_as(struct kk_etest_run_test_fun176__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_etest_run_test_fun176, kk_context());
  _self->_b_x87_98 = _b_x87_98;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_etest_run_test_fun176(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun176__t* _self = kk_function_as(struct kk_etest_run_test_fun176__t*, _fself, _ctx);
  kk_function_t _b_x87_98 = _self->_b_x87_98; /* () -> (etest/test-case<<console/console|811>>) () */
  kk_drop_match(_self, {kk_function_dup(_b_x87_98, _ctx);}, {}, _ctx)
  kk_unit_t _x_x177 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x87_98, (_b_x87_98, _ctx), _ctx);
  return kk_unit_box(_x_x177);
}
static kk_box_t kk_etest_run_test_fun174(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_etest_run_test_fun174__t* _self = kk_function_as(struct kk_etest_run_test_fun174__t*, _fself, _ctx);
  kk_function_t cases = _self->cases; /* () -> (etest/test-case<<console/console|811>>) () */
  kk_drop_match(_self, {kk_function_dup(cases, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x86_97;
  kk_std_core_hnd__htag _x_x175 = kk_std_core_hnd__htag_dup(kk_etest__tag_test_case, _ctx); /*forall<e> hnd/htag<etest/test-case<e>>*/
  _b_x86_97 = kk_std_core_hnd__evv_index(_x_x175, _ctx); /*hnd/ev-index*/
  kk_function_t _b_x87_98 = cases; /*() -> (etest/test-case<<console/console|811>>) ()*/;
  return kk_std_core_hnd__open_at0(_b_x86_97, kk_etest_new_run_test_fun176(_b_x87_98, _ctx), _ctx);
}

kk_unit_t kk_etest_run_test(kk_function_t cases, kk_context_t* _ctx) { /* forall<e> (cases : () -> (test-case<<console/console|e>>) ()) -> <console/console|e> () */ 
  kk_etest__test_case _b_x88_92;
  kk_std_core_hnd__clause1 _x_x159 = kk_std_core_hnd_clause_tail1(kk_etest_new_run_test_fun160(_ctx), _ctx); /*hnd/clause1<5721,5722,5720,5718,5719>*/
  _b_x88_92 = kk_etest__new_Hnd_test_case(kk_reuse_null, 0, kk_integer_from_small(1), _x_x159, _ctx); /*etest/test-case<<console/console|811>,<console/console|811>,()>*/
  kk_box_t _x_x172 = kk_etest__handle_test_case(_b_x88_92, kk_etest_new_run_test_fun173(_ctx), kk_etest_new_run_test_fun174(cases, _ctx), _ctx); /*472*/
  kk_unit_unbox(_x_x172); return kk_Unit;
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
    kk_string_t _x_x112;
    kk_define_string_literal(, _s_x113, 10, "test@etest", _ctx)
    _x_x112 = kk_string_dup(_s_x113, _ctx); /*string*/
    kk_etest__tag_test = kk_std_core_hnd__new_Htag(_x_x112, _ctx); /*forall<e> hnd/htag<etest/test<e>>*/
  }
  {
    kk_string_t _x_x121;
    kk_define_string_literal(, _s_x122, 15, "test-case@etest", _ctx)
    _x_x121 = kk_string_dup(_s_x122, _ctx); /*string*/
    kk_etest__tag_test_case = kk_std_core_hnd__new_Htag(_x_x121, _ctx); /*forall<e> hnd/htag<etest/test-case<e>>*/
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
  kk_std_core_hnd__htag_drop(kk_etest__tag_test_case, _ctx);
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
