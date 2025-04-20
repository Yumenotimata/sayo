// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_main_10008_fun55__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_main_10008_fun55(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10008_fun55(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10008_fun55, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_main_10008_fun55(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x56;
  kk_interpret__value _x_x57 = kk_interpret__value_unbox(_b_x2, KK_OWNED, _ctx); /*interpret/value*/
  _x_x56 = kk_interpret_show(_x_x57, _ctx); /*string*/
  return kk_string_box(_x_x56);
}


// lift anonymous function
struct kk_main__mlift_main_10008_fun59__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_main_10008_fun59(kk_function_t _fself, kk_box_t _b_x14, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10008_fun59(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10008_fun59, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__mlift_main_10008_fun61__t {
  struct kk_function_s _base;
  kk_box_t _b_x14;
};
static kk_unit_t kk_main__mlift_main_10008_fun61(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10008_fun61(kk_box_t _b_x14, kk_context_t* _ctx) {
  struct kk_main__mlift_main_10008_fun61__t* _self = kk_function_alloc_as(struct kk_main__mlift_main_10008_fun61__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_main_10008_fun61, kk_context());
  _self->_b_x14 = _b_x14;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main__mlift_main_10008_fun61(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main__mlift_main_10008_fun61__t* _self = kk_function_as(struct kk_main__mlift_main_10008_fun61__t*, _fself, _ctx);
  kk_box_t _b_x14 = _self->_b_x14; /* 1000 */
  kk_drop_match(_self, {kk_box_dup(_b_x14, _ctx);}, {}, _ctx)
  kk_box_t _x_x62;
  kk_function_t _x_x63 = kk_function_unbox(_b_x14, _ctx); /*() -> (etest/test<97>) 15*/
  _x_x62 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x63, (_x_x63, _ctx), _ctx); /*15*/
  kk_unit_unbox(_x_x62); return kk_Unit;
}
static kk_box_t kk_main__mlift_main_10008_fun59(kk_function_t _fself, kk_box_t _b_x14, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x60 = kk_Unit;
  kk_etest_run_test(kk_main__new_mlift_main_10008_fun61(_b_x14, _ctx), _ctx);
  return kk_unit_box(_x_x60);
}


// lift anonymous function
struct kk_main__mlift_main_10008_fun64__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_main_10008_fun64(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10008_fun64(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10008_fun64, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__mlift_main_10008_fun66__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_main_10008_fun66(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10008_fun66(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10008_fun66, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_main_10008_fun66(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(0), _ctx);
}


// lift anonymous function
struct kk_main__mlift_main_10008_fun67__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_main_10008_fun67(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10008_fun67(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10008_fun67, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_main_10008_fun67(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(1), _ctx);
}


// lift anonymous function
struct kk_main__mlift_main_10008_fun68__t {
  struct kk_function_s _base;
};
static bool kk_main__mlift_main_10008_fun68(kk_function_t _fself, kk_box_t _b_x9, kk_box_t _b_x10, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10008_fun68(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10008_fun68, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_main__mlift_main_10008_fun68(kk_function_t _fself, kk_box_t _b_x9, kk_box_t _b_x10, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x48 = kk_integer_unbox(_b_x9, _ctx); /*int*/;
  kk_integer_t _brw_x47 = kk_integer_unbox(_b_x10, _ctx); /*int*/;
  bool _brw_x49 = kk_integer_eq_borrow(_brw_x48,_brw_x47,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x48, _ctx);
  kk_integer_drop(_brw_x47, _ctx);
  return _brw_x49;
}


// lift anonymous function
struct kk_main__mlift_main_10008_fun69__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__mlift_main_10008_fun69(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10008_fun69(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10008_fun69, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main__mlift_main_10008_fun69(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x70 = kk_integer_unbox(_b_x11, _ctx); /*int*/
  return kk_std_core_int_show(_x_x70, _ctx);
}
static kk_box_t kk_main__mlift_main_10008_fun64(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x65 = kk_Unit;
  kk_etest_assert_eq(kk_main__new_mlift_main_10008_fun66(_ctx), kk_main__new_mlift_main_10008_fun67(_ctx), kk_main__new_mlift_main_10008_fun68(_ctx), kk_main__new_mlift_main_10008_fun69(_ctx), _ctx);
  return kk_unit_box(_x_x65);
}

kk_unit_t kk_main__mlift_main_10008(kk_interpret__value ret, kk_context_t* _ctx) { /* (ret : interpret/value) -> pure () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x50;
  kk_string_t _x_x51;
  kk_define_string_literal(, _s_x52, 8, "result: ", _ctx)
  _x_x51 = kk_string_dup(_s_x52, _ctx); /*string*/
  kk_string_t _x_x53;
  kk_box_t _x_x54 = kk_std_core_hnd__open_none1(kk_main__new_mlift_main_10008_fun55(_ctx), kk_interpret__value_box(ret, _ctx), _ctx); /*1001*/
  _x_x53 = kk_string_unbox(_x_x54); /*string*/
  _x_x50 = kk_std_core_types__lp__plus__plus__rp_(_x_x51, _x_x53, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x50, _ctx);
  kk_unit_t ___0 = kk_Unit;
  kk_box_t _x_x58 = kk_std_core_hnd__open_none1(kk_main__new_mlift_main_10008_fun59(_ctx), kk_function_box(kk_main__new_mlift_main_10008_fun64(_ctx), _ctx), _ctx); /*1001*/
  kk_unit_unbox(_x_x58);
  kk_Unit; return kk_Unit;
}


// lift anonymous function
struct kk_main_main_fun72__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun72(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x638__16, kk_std_core_exn__exception x, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun72(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun72, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun73__t {
  struct kk_function_s _base;
  kk_std_core_exn__exception x;
};
static kk_box_t kk_main_main_fun73(kk_function_t _fself, kk_function_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun73(kk_std_core_exn__exception x, kk_context_t* _ctx) {
  struct kk_main_main_fun73__t* _self = kk_function_alloc_as(struct kk_main_main_fun73__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun73, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_main_main_fun74__t {
  struct kk_function_s _base;
  kk_function_t _b_x25;
};
static kk_unit_t kk_main_main_fun74(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x26, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun74(kk_function_t _b_x25, kk_context_t* _ctx) {
  struct kk_main_main_fun74__t* _self = kk_function_alloc_as(struct kk_main_main_fun74__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun74, kk_context());
  _self->_b_x25 = _b_x25;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main_main_fun74(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x26, kk_context_t* _ctx) {
  struct kk_main_main_fun74__t* _self = kk_function_as(struct kk_main_main_fun74__t*, _fself, _ctx);
  kk_function_t _b_x25 = _self->_b_x25; /* (hnd/resume-result<3004,3007>) -> 3006 3007 */
  kk_drop_match(_self, {kk_function_dup(_b_x25, _ctx);}, {}, _ctx)
  kk_box_t _x_x75 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_x25, (_b_x25, _b_x26, _ctx), _ctx); /*3007*/
  kk_unit_unbox(_x_x75); return kk_Unit;
}
static kk_box_t kk_main_main_fun73(kk_function_t _fself, kk_function_t _b_x25, kk_context_t* _ctx) {
  struct kk_main_main_fun73__t* _self = kk_function_as(struct kk_main_main_fun73__t*, _fself, _ctx);
  kk_std_core_exn__exception x = _self->x; /* exception */
  kk_drop_match(_self, {kk_std_core_exn__exception_dup(x, _ctx);}, {}, _ctx)
  kk_function_t ___wildcard_x638__45_44 = kk_main_new_main_fun74(_b_x25, _ctx); /*(hnd/resume-result<158,()>) -> <console/console,div> ()*/;
  kk_function_drop(___wildcard_x638__45_44, _ctx);
  kk_string_t s_10000;
  kk_string_t _x_x76;
  kk_define_string_literal(, _s_x77, 11, "exception: ", _ctx)
  _x_x76 = kk_string_dup(_s_x77, _ctx); /*string*/
  kk_string_t _x_x78;
  {
    kk_string_t _x = x.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(x, _ctx);
    _x_x78 = _x; /*string*/
  }
  s_10000 = kk_std_core_types__lp__plus__plus__rp_(_x_x76, _x_x78, _ctx); /*string*/
  kk_unit_t _x_x79 = kk_Unit;
  kk_std_core_console_printsln(s_10000, _ctx);
  return kk_unit_box(_x_x79);
}
static kk_box_t kk_main_main_fun72(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x638__16, kk_std_core_exn__exception x, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_datatype_ptr_dropn(___wildcard_x638__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(m, kk_main_new_main_fun73(x, _ctx), _ctx);
}


// lift anonymous function
struct kk_main_main_fun82__t {
  struct kk_function_s _base;
  kk_function_t _b_x27_40;
};
static kk_box_t kk_main_main_fun82(kk_function_t _fself, int32_t _b_x28, kk_std_core_hnd__ev _b_x29, kk_box_t _b_x30, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun82(kk_function_t _b_x27_40, kk_context_t* _ctx) {
  struct kk_main_main_fun82__t* _self = kk_function_alloc_as(struct kk_main_main_fun82__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun82, kk_context());
  _self->_b_x27_40 = _b_x27_40;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_main_fun82(kk_function_t _fself, int32_t _b_x28, kk_std_core_hnd__ev _b_x29, kk_box_t _b_x30, kk_context_t* _ctx) {
  struct kk_main_main_fun82__t* _self = kk_function_as(struct kk_main_main_fun82__t*, _fself, _ctx);
  kk_function_t _b_x27_40 = _self->_b_x27_40; /* (m : hnd/marker<<console/console,div>,()>, hnd/ev<exn>, x : exception) -> <console/console,div> 158 */
  kk_drop_match(_self, {kk_function_dup(_b_x27_40, _ctx);}, {}, _ctx)
  kk_std_core_exn__exception _x_x83 = kk_std_core_exn__exception_unbox(_b_x30, KK_OWNED, _ctx); /*exception*/
  return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_std_core_exn__exception, kk_context_t*), _b_x27_40, (_b_x27_40, _b_x28, _b_x29, _x_x83, _ctx), _ctx);
}


// lift anonymous function
struct kk_main_main_fun84__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun84(kk_function_t _fself, kk_box_t _b_x36, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun84(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun84, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun84(kk_function_t _fself, kk_box_t _b_x36, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_0_45 = kk_Unit;
  kk_unit_unbox(_b_x36);
  return kk_unit_box(_x_0_45);
}


// lift anonymous function
struct kk_main_main_fun85__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun85(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun85(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun85, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun97__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_main_main_fun97(kk_function_t _fself, kk_interpret__value id, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun97(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun97, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_main_main_fun97(kk_function_t _fself, kk_interpret__value id, kk_context_t* _ctx) {
  kk_unused(_fself);
  return id;
}


// lift anonymous function
struct kk_main_main_fun100__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun100(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun100(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun100, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun100(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x101 = kk_Unit;
  kk_interpret__value _x_x102 = kk_interpret__value_unbox(_b_x32, KK_OWNED, _ctx); /*interpret/value*/
  kk_main__mlift_main_10008(_x_x102, _ctx);
  return kk_unit_box(_x_x101);
}
static kk_box_t kk_main_main_fun85(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value x_0_10010;
  kk_interpret__expr _x_x86;
  kk_interpret__expr _x_x87;
  kk_interpret__expr _x_x88;
  kk_string_t _x_x89;
  kk_define_string_literal(, _s_x90, 1, "k", _ctx)
  _x_x89 = kk_string_dup(_s_x90, _ctx); /*string*/
  kk_interpret__expr _x_x91;
  kk_interpret__expr _x_x92;
  kk_string_t _x_x93;
  kk_define_string_literal(, _s_x94, 1, "k", _ctx)
  _x_x93 = kk_string_dup(_s_x94, _ctx); /*string*/
  _x_x92 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x93, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x95;
  kk_interpret__value _x_x96 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(10), _ctx); /*interpret/value*/
  _x_x95 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x96, _ctx); /*interpret/expr*/
  _x_x91 = kk_interpret__new_App(kk_reuse_null, 0, _x_x92, _x_x95, _ctx); /*interpret/expr*/
  _x_x88 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x89, _x_x91, _ctx); /*interpret/expr*/
  _x_x87 = kk_interpret__new_Shift(kk_reuse_null, 0, _x_x88, _ctx); /*interpret/expr*/
  _x_x86 = kk_interpret__new_Reset(kk_reuse_null, 0, _x_x87, _ctx); /*interpret/expr*/
  x_0_10010 = kk_interpret_eval_sq_(_x_x86, kk_std_core_types__new_Nil(_ctx), kk_main_new_main_fun97(_ctx), _ctx); /*interpret/value*/
  kk_unit_t _x_x98 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_interpret__value_drop(x_0_10010, _ctx);
    kk_box_t _x_x99 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun100(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x99);
  }
  else {
    kk_main__mlift_main_10008(x_0_10010, _ctx);
  }
  return kk_unit_box(_x_x98);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_box_t _x_x71;
  kk_function_t _b_x27_40 = kk_main_new_main_fun72(_ctx); /*(m : hnd/marker<<console/console,div>,()>, hnd/ev<exn>, x : exception) -> <console/console,div> 158*/;
  kk_std_core_exn__exn _x_x80;
  kk_std_core_hnd__clause1 _x_x81 = kk_std_core_hnd__new_Clause1(kk_main_new_main_fun82(_b_x27_40, _ctx), _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x80 = kk_std_core_exn__new_Hnd_exn(kk_reuse_null, 0, kk_integer_from_small(0), _x_x81, _ctx); /*exn<1005,1006>*/
  _x_x71 = kk_std_core_exn__handle_exn(_x_x80, kk_main_new_main_fun84(_ctx), kk_main_new_main_fun85(_ctx), _ctx); /*1002*/
  kk_unit_unbox(_x_x71); return kk_Unit;
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
  kk_etest__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_etest__done(_ctx);
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
