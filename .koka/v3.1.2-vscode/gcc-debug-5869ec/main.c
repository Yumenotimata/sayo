// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_main_10005_fun39__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_main_10005_fun39(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10005_fun39(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10005_fun39, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_main_10005_fun39(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x40;
  kk_interpret__value _x_x41 = kk_interpret__value_unbox(_b_x2, KK_OWNED, _ctx); /*interpret/value*/
  _x_x40 = kk_interpret_show(_x_x41, _ctx); /*string*/
  return kk_string_box(_x_x40);
}

kk_unit_t kk_main__mlift_main_10005(kk_interpret__value ret, kk_context_t* _ctx) { /* (ret : interpret/value) -> <pure,console/console> () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x34;
  kk_string_t _x_x35;
  kk_define_string_literal(, _s_x36, 8, "result: ", _ctx)
  _x_x35 = kk_string_dup(_s_x36, _ctx); /*string*/
  kk_string_t _x_x37;
  kk_box_t _x_x38 = kk_std_core_hnd__open_none1(kk_main__new_mlift_main_10005_fun39(_ctx), kk_interpret__value_box(ret, _ctx), _ctx); /*1001*/
  _x_x37 = kk_string_unbox(_x_x38); /*string*/
  _x_x34 = kk_std_core_types__lp__plus__plus__rp_(_x_x35, _x_x37, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x34, _ctx);
  kk_Unit; return kk_Unit;
}


// lift anonymous function
struct kk_main_main_fun43__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun43(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x638__16, kk_std_core_exn__exception x, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun43(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun43, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun44__t {
  struct kk_function_s _base;
  kk_std_core_exn__exception x;
};
static kk_box_t kk_main_main_fun44(kk_function_t _fself, kk_function_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun44(kk_std_core_exn__exception x, kk_context_t* _ctx) {
  struct kk_main_main_fun44__t* _self = kk_function_alloc_as(struct kk_main_main_fun44__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun44, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_main_main_fun45__t {
  struct kk_function_s _base;
  kk_function_t _b_x7;
};
static kk_unit_t kk_main_main_fun45(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x8, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun45(kk_function_t _b_x7, kk_context_t* _ctx) {
  struct kk_main_main_fun45__t* _self = kk_function_alloc_as(struct kk_main_main_fun45__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun45, kk_context());
  _self->_b_x7 = _b_x7;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main_main_fun45(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x8, kk_context_t* _ctx) {
  struct kk_main_main_fun45__t* _self = kk_function_as(struct kk_main_main_fun45__t*, _fself, _ctx);
  kk_function_t _b_x7 = _self->_b_x7; /* (hnd/resume-result<3004,3007>) -> 3006 3007 */
  kk_drop_match(_self, {kk_function_dup(_b_x7, _ctx);}, {}, _ctx)
  kk_box_t _x_x46 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_x7, (_b_x7, _b_x8, _ctx), _ctx); /*3007*/
  kk_unit_unbox(_x_x46); return kk_Unit;
}
static kk_box_t kk_main_main_fun44(kk_function_t _fself, kk_function_t _b_x7, kk_context_t* _ctx) {
  struct kk_main_main_fun44__t* _self = kk_function_as(struct kk_main_main_fun44__t*, _fself, _ctx);
  kk_std_core_exn__exception x = _self->x; /* exception */
  kk_drop_match(_self, {kk_std_core_exn__exception_dup(x, _ctx);}, {}, _ctx)
  kk_function_t ___wildcard_x638__45_31 = kk_main_new_main_fun45(_b_x7, _ctx); /*(hnd/resume-result<158,()>) -> <console/console,div> ()*/;
  kk_function_drop(___wildcard_x638__45_31, _ctx);
  kk_string_t s_10000;
  kk_string_t _x_x47;
  kk_define_string_literal(, _s_x48, 11, "exception: ", _ctx)
  _x_x47 = kk_string_dup(_s_x48, _ctx); /*string*/
  kk_string_t _x_x49;
  {
    kk_string_t _x = x.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(x, _ctx);
    _x_x49 = _x; /*string*/
  }
  s_10000 = kk_std_core_types__lp__plus__plus__rp_(_x_x47, _x_x49, _ctx); /*string*/
  kk_unit_t _x_x50 = kk_Unit;
  kk_std_core_console_printsln(s_10000, _ctx);
  return kk_unit_box(_x_x50);
}
static kk_box_t kk_main_main_fun43(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x638__16, kk_std_core_exn__exception x, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_datatype_ptr_dropn(___wildcard_x638__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(m, kk_main_new_main_fun44(x, _ctx), _ctx);
}


// lift anonymous function
struct kk_main_main_fun53__t {
  struct kk_function_s _base;
  kk_function_t _b_x9_27;
};
static kk_box_t kk_main_main_fun53(kk_function_t _fself, int32_t _b_x10, kk_std_core_hnd__ev _b_x11, kk_box_t _b_x12, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun53(kk_function_t _b_x9_27, kk_context_t* _ctx) {
  struct kk_main_main_fun53__t* _self = kk_function_alloc_as(struct kk_main_main_fun53__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun53, kk_context());
  _self->_b_x9_27 = _b_x9_27;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_main_fun53(kk_function_t _fself, int32_t _b_x10, kk_std_core_hnd__ev _b_x11, kk_box_t _b_x12, kk_context_t* _ctx) {
  struct kk_main_main_fun53__t* _self = kk_function_as(struct kk_main_main_fun53__t*, _fself, _ctx);
  kk_function_t _b_x9_27 = _self->_b_x9_27; /* (m : hnd/marker<<console/console,div>,()>, hnd/ev<exn>, x : exception) -> <console/console,div> 158 */
  kk_drop_match(_self, {kk_function_dup(_b_x9_27, _ctx);}, {}, _ctx)
  kk_std_core_exn__exception _x_x54 = kk_std_core_exn__exception_unbox(_b_x12, KK_OWNED, _ctx); /*exception*/
  return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_std_core_exn__exception, kk_context_t*), _b_x9_27, (_b_x9_27, _b_x10, _b_x11, _x_x54, _ctx), _ctx);
}


// lift anonymous function
struct kk_main_main_fun55__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun55(kk_function_t _fself, kk_box_t _b_x23, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun55(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun55, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun55(kk_function_t _fself, kk_box_t _b_x23, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_0_32 = kk_Unit;
  kk_unit_unbox(_b_x23);
  return kk_unit_box(_x_0_32);
}


// lift anonymous function
struct kk_main_main_fun56__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun56(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun56(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun56, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun68__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_main_main_fun68(kk_function_t _fself, kk_interpret__value id, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun68(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun68, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_main_main_fun68(kk_function_t _fself, kk_interpret__value id, kk_context_t* _ctx) {
  kk_unused(_fself);
  return id;
}


// lift anonymous function
struct kk_main_main_fun71__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun71(kk_function_t _fself, kk_box_t _b_x14, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun71(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun71, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun71(kk_function_t _fself, kk_box_t _b_x14, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x72 = kk_Unit;
  kk_interpret__value _x_x73 = kk_interpret__value_unbox(_b_x14, KK_OWNED, _ctx); /*interpret/value*/
  kk_main__mlift_main_10005(_x_x73, _ctx);
  return kk_unit_box(_x_x72);
}


// lift anonymous function
struct kk_main_main_fun79__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun79(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun79(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun79, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun79(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x80;
  kk_interpret__value _x_x81 = kk_interpret__value_unbox(_b_x17, KK_OWNED, _ctx); /*interpret/value*/
  _x_x80 = kk_interpret_show(_x_x81, _ctx); /*string*/
  return kk_string_box(_x_x80);
}
static kk_box_t kk_main_main_fun56(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value x_0_10007;
  kk_interpret__expr _x_x57;
  kk_interpret__expr _x_x58;
  kk_interpret__expr _x_x59;
  kk_string_t _x_x60;
  kk_define_string_literal(, _s_x61, 1, "k", _ctx)
  _x_x60 = kk_string_dup(_s_x61, _ctx); /*string*/
  kk_interpret__expr _x_x62;
  kk_interpret__expr _x_x63;
  kk_string_t _x_x64;
  kk_define_string_literal(, _s_x65, 1, "k", _ctx)
  _x_x64 = kk_string_dup(_s_x65, _ctx); /*string*/
  _x_x63 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x64, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x66;
  kk_interpret__value _x_x67 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(10), _ctx); /*interpret/value*/
  _x_x66 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x67, _ctx); /*interpret/expr*/
  _x_x62 = kk_interpret__new_App(kk_reuse_null, 0, _x_x63, _x_x66, _ctx); /*interpret/expr*/
  _x_x59 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x60, _x_x62, _ctx); /*interpret/expr*/
  _x_x58 = kk_interpret__new_Shift(kk_reuse_null, 0, _x_x59, _ctx); /*interpret/expr*/
  _x_x57 = kk_interpret__new_Reset(kk_reuse_null, 0, _x_x58, _ctx); /*interpret/expr*/
  x_0_10007 = kk_interpret_eval_sq_(_x_x57, kk_std_core_types__new_Nil(_ctx), kk_main_new_main_fun68(_ctx), _ctx); /*interpret/value*/
  kk_unit_t _x_x69 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_interpret__value_drop(x_0_10007, _ctx);
    kk_box_t _x_x70 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun71(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x70);
  }
  else {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x74;
    kk_string_t _x_x75;
    kk_define_string_literal(, _s_x76, 8, "result: ", _ctx)
    _x_x75 = kk_string_dup(_s_x76, _ctx); /*string*/
    kk_string_t _x_x77;
    kk_box_t _x_x78 = kk_std_core_hnd__open_none1(kk_main_new_main_fun79(_ctx), kk_interpret__value_box(x_0_10007, _ctx), _ctx); /*1001*/
    _x_x77 = kk_string_unbox(_x_x78); /*string*/
    _x_x74 = kk_std_core_types__lp__plus__plus__rp_(_x_x75, _x_x77, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x74, _ctx);
  }
  return kk_unit_box(_x_x69);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_box_t _x_x42;
  kk_function_t _b_x9_27 = kk_main_new_main_fun43(_ctx); /*(m : hnd/marker<<console/console,div>,()>, hnd/ev<exn>, x : exception) -> <console/console,div> 158*/;
  kk_std_core_exn__exn _x_x51;
  kk_std_core_hnd__clause1 _x_x52 = kk_std_core_hnd__new_Clause1(kk_main_new_main_fun53(_b_x9_27, _ctx), _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x51 = kk_std_core_exn__new_Hnd_exn(kk_reuse_null, 0, kk_integer_from_small(0), _x_x52, _ctx); /*exn<1005,1006>*/
  _x_x42 = kk_std_core_exn__handle_exn(_x_x51, kk_main_new_main_fun55(_ctx), kk_main_new_main_fun56(_ctx), _ctx); /*1002*/
  kk_unit_unbox(_x_x42); return kk_Unit;
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
