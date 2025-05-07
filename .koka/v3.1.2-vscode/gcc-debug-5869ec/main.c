// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_main_10011_fun52__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__mlift_main_10011_fun52(kk_function_t _fself, kk_box_t _b_x10, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10011_fun52(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10011_fun52, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__mlift_main_10011_fun54__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__mlift_main_10011_fun54(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10011_fun54(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10011_fun54, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main__mlift_main_10011_fun54(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x55 = kk_string_unbox(_b_x6); /*string*/
  return kk_std_core_show_string_fs_show(_x_x55, _ctx);
}


// lift anonymous function
struct kk_main__mlift_main_10011_fun56__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__mlift_main_10011_fun56(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10011_fun56(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10011_fun56, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__mlift_main_10011_fun58__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_main_10011_fun58(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10011_fun58(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10011_fun58, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_main_10011_fun58(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x59;
  kk_types__types _x_x60 = kk_types__types_unbox(_b_x2, KK_OWNED, _ctx); /*types/types*/
  _x_x59 = kk_types_show(_x_x60, _ctx); /*string*/
  return kk_string_box(_x_x59);
}
static kk_string_t kk_main__mlift_main_10011_fun56(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x57 = kk_std_core_hnd__open_none1(kk_main__new_mlift_main_10011_fun58(_ctx), _b_x7, _ctx); /*1001*/
  return kk_string_unbox(_x_x57);
}
static kk_string_t kk_main__mlift_main_10011_fun52(kk_function_t _fself, kk_box_t _b_x10, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _x_x53 = kk_std_core_types__tuple2_unbox(_b_x10, KK_OWNED, _ctx); /*(expr/uid, types/types)*/
  return kk_std_core_tuple_tuple2_fs_show(_x_x53, kk_main__new_mlift_main_10011_fun54(_ctx), kk_main__new_mlift_main_10011_fun56(_ctx), _ctx);
}


// lift anonymous function
struct kk_main__mlift_main_10011_fun62__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_main_10011_fun62(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10011_fun62(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10011_fun62, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_main_10011_fun62(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x63 = kk_Unit;
  kk_string_t _x_x64 = kk_string_unbox(_b_x21); /*string*/
  kk_std_core_console_printsln(_x_x64, _ctx);
  return kk_unit_box(_x_x63);
}

kk_unit_t kk_main__mlift_main_10011(kk_std_core_types__list _y_x10000, kk_context_t* _ctx) { /* (infer/tenv) -> <pure,console/console> () */ 
  kk_string_t x_10013 = kk_std_core_list_show(_y_x10000, kk_main__new_mlift_main_10011_fun52(_ctx), _ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10013, _ctx);
    kk_box_t _x_x61 = kk_std_core_hnd_yield_extend(kk_main__new_mlift_main_10011_fun62(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x61); return kk_Unit;
  }
  {
    kk_std_core_console_printsln(x_10013, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_main_main_fun66__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun66(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun66(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun66, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun66(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x67;
  kk_expr__expr _x_x68 = kk_expr__expr_unbox(_b_x25, KK_OWNED, _ctx); /*expr/expr*/
  _x_x67 = kk_expr_uniquify(_x_x68, _ctx); /*either<exception,expr/uexpr>*/
  return kk_std_core_types__either_box(_x_x67, _ctx);
}


// lift anonymous function
struct kk_main_main_fun90__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun90(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun90(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun90, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun90(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x91;
  kk_std_core_exn__exception _match_x50 = kk_std_core_exn__exception_unbox(_b_x29, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x50.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x50, _ctx);
    _x_x91 = _x; /*string*/
  }
  return kk_string_box(_x_x91);
}


// lift anonymous function
struct kk_main_main_fun97__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun97(kk_function_t _fself, kk_box_t _b_x33, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun97(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun97, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun97(kk_function_t _fself, kk_box_t _b_x33, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x98;
  kk_expr__uexpr _x_x99 = kk_expr__uexpr_unbox(_b_x33, KK_OWNED, _ctx); /*expr/uexpr*/
  _x_x98 = kk_expr_show(_x_x99, _ctx); /*string*/
  return kk_string_box(_x_x98);
}


// lift anonymous function
struct kk_main_main_fun103__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun103(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun103(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun103, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun103(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x104 = kk_Unit;
  kk_std_core_types__list _x_x105 = kk_std_core_types__list_unbox(_b_x37, KK_OWNED, _ctx); /*infer/tenv*/
  kk_main__mlift_main_10011(_x_x105, _ctx);
  return kk_unit_box(_x_x104);
}


// lift anonymous function
struct kk_main_main_fun107__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun107(kk_function_t _fself, kk_box_t _b_x44, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun107(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun107, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun107(kk_function_t _fself, kk_box_t _b_x44, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x108 = kk_Unit;
  kk_unit_t _x_x109 = kk_Unit;
  kk_unit_unbox(_b_x44);
  kk_main__mlift_main_10012(_x_x109, _ctx);
  return kk_unit_box(_x_x108);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <pure,console/console> () */ 
  kk_unit_t x_10015 = kk_Unit;
  kk_std_core_types__either _match_x48;
  kk_box_t _x_x65;
  kk_box_t _x_x69;
  kk_expr__expr _x_x70;
  kk_string_t _x_x71;
  kk_define_string_literal(, _s_x72, 1, "x", _ctx)
  _x_x71 = kk_string_dup(_s_x72, _ctx); /*string*/
  kk_expr__expr _x_x73;
  kk_string_t _x_x74;
  kk_define_string_literal(, _s_x75, 1, "a", _ctx)
  _x_x74 = kk_string_dup(_s_x75, _ctx); /*string*/
  kk_expr__expr _x_x76;
  kk_string_t _x_x77;
  kk_define_string_literal(, _s_x78, 1, "a", _ctx)
  _x_x77 = kk_string_dup(_s_x78, _ctx); /*string*/
  _x_x76 = kk_expr__new_Var(kk_reuse_null, 0, _x_x77, _ctx); /*expr/expr*/
  _x_x73 = kk_expr__new_Lam(kk_reuse_null, 0, _x_x74, _x_x76, _ctx); /*expr/expr*/
  kk_expr__expr _x_x79;
  kk_expr__expr _x_x80;
  kk_string_t _x_x81;
  kk_define_string_literal(, _s_x82, 1, "x", _ctx)
  _x_x81 = kk_string_dup(_s_x82, _ctx); /*string*/
  _x_x80 = kk_expr__new_Var(kk_reuse_null, 0, _x_x81, _ctx); /*expr/expr*/
  kk_expr__expr _x_x83;
  kk_value__value _x_x84 = kk_value__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*value/value*/
  _x_x83 = kk_expr__new_Lit(kk_reuse_null, 0, _x_x84, _ctx); /*expr/expr*/
  _x_x79 = kk_expr__new_App(kk_reuse_null, 0, _x_x80, _x_x83, _ctx); /*expr/expr*/
  _x_x70 = kk_expr__new_Let(kk_reuse_null, 0, _x_x71, _x_x73, _x_x79, _ctx); /*expr/expr*/
  _x_x69 = kk_expr__expr_box(_x_x70, _ctx); /*1000*/
  _x_x65 = kk_std_core_hnd__open_none1(kk_main_new_main_fun66(_ctx), _x_x69, _ctx); /*1001*/
  _match_x48 = kk_std_core_types__either_unbox(_x_x65, KK_OWNED, _ctx); /*either<exception,expr/uexpr>*/
  if (kk_std_core_types__is_Left(_match_x48, _ctx)) {
    kk_box_t _box_x26 = _match_x48._cons.Left.left;
    kk_std_core_exn__exception e = kk_std_core_exn__exception_unbox(_box_x26, KK_BORROWED, _ctx);
    kk_std_core_exn__exception_dup(e, _ctx);
    kk_std_core_types__either_drop(_match_x48, _ctx);
    kk_string_t _x_x85;
    kk_string_t _x_x86;
    kk_define_string_literal(, _s_x87, 9, "exception", _ctx)
    _x_x86 = kk_string_dup(_s_x87, _ctx); /*string*/
    kk_string_t _x_x88;
    kk_box_t _x_x89 = kk_std_core_hnd__open_none1(kk_main_new_main_fun90(_ctx), kk_std_core_exn__exception_box(e, _ctx), _ctx); /*1001*/
    _x_x88 = kk_string_unbox(_x_x89); /*string*/
    _x_x85 = kk_std_core_types__lp__plus__plus__rp_(_x_x86, _x_x88, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x85, _ctx);
  }
  else {
    kk_box_t _box_x30 = _match_x48._cons.Right.right;
    kk_expr__uexpr uexpr = kk_expr__uexpr_unbox(_box_x30, KK_BORROWED, _ctx);
    kk_expr__uexpr_dup(uexpr, _ctx);
    kk_std_core_types__either_drop(_match_x48, _ctx);
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x92;
    kk_string_t _x_x93;
    kk_define_string_literal(, _s_x94, 12, "uniquified: ", _ctx)
    _x_x93 = kk_string_dup(_s_x94, _ctx); /*string*/
    kk_string_t _x_x95;
    kk_box_t _x_x96;
    kk_box_t _x_x100;
    kk_expr__uexpr _x_x101 = kk_expr__uexpr_dup(uexpr, _ctx); /*expr/uexpr*/
    _x_x100 = kk_expr__uexpr_box(_x_x101, _ctx); /*1000*/
    _x_x96 = kk_std_core_hnd__open_none1(kk_main_new_main_fun97(_ctx), _x_x100, _ctx); /*1001*/
    _x_x95 = kk_string_unbox(_x_x96); /*string*/
    _x_x92 = kk_std_core_types__lp__plus__plus__rp_(_x_x93, _x_x95, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x92, _ctx);
    kk_std_core_types__list x_0_10018 = kk_infer_infer(uexpr, _ctx); /*infer/tenv*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_0_10018, _ctx);
      kk_box_t _x_x102 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun103(_ctx), _ctx); /*3003*/
      kk_unit_unbox(_x_x102);
    }
    else {
      kk_main__mlift_main_10011(x_0_10018, _ctx);
    }
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x106 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun107(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x106); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
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
  kk_expr__init(_ctx);
  kk_value__init(_ctx);
  kk_types__init(_ctx);
  kk_infer__init(_ctx);
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
  kk_infer__done(_ctx);
  kk_types__done(_ctx);
  kk_value__done(_ctx);
  kk_expr__done(_ctx);
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
