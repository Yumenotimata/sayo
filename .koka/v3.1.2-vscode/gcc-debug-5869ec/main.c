// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"


// lift anonymous function
struct kk_main_main_fun43__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_main_fun43(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun43(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun43, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main_main_fun43(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x44 = kk_types__types_unbox(_b_x15, KK_OWNED, _ctx); /*types/types*/
  return kk_types_show(_x_x44, _ctx);
}


// lift anonymous function
struct kk_main_main_fun45__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_main_fun45(kk_function_t _fself, kk_box_t _b_x16, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun45(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun45, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun47__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_main_fun47(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun47(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun47, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun49__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_main_fun49(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun49(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun49, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main_main_fun49(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x50 = kk_string_unbox(_b_x7); /*string*/
  return kk_std_core_show_string_fs_show(_x_x50, _ctx);
}


// lift anonymous function
struct kk_main_main_fun51__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_main_fun51(kk_function_t _fself, kk_box_t _b_x8, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun51(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun51, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main_main_fun51(kk_function_t _fself, kk_box_t _b_x8, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x52 = kk_types__types_unbox(_b_x8, KK_OWNED, _ctx); /*types/types*/
  return kk_types_show(_x_x52, _ctx);
}
static kk_string_t kk_main_main_fun47(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _x_x48 = kk_std_core_types__tuple2_unbox(_b_x11, KK_OWNED, _ctx); /*(expr/uid, types/types)*/
  return kk_std_core_tuple_tuple2_fs_show(_x_x48, kk_main_new_main_fun49(_ctx), kk_main_new_main_fun51(_ctx), _ctx);
}
static kk_string_t kk_main_main_fun45(kk_function_t _fself, kk_box_t _b_x16, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x46 = kk_std_core_types__list_unbox(_b_x16, KK_OWNED, _ctx); /*infer/tenv*/
  return kk_std_core_list_show(_x_x46, kk_main_new_main_fun47(_ctx), _ctx);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_unit_t __ = kk_Unit;
  kk_std_core_types__either _match_x27;
  kk_expr__expr _x_x29;
  kk_expr__expr _x_x30;
  kk_string_t _x_x31;
  kk_define_string_literal(, _s_x32, 1, "x", _ctx)
  _x_x31 = kk_string_dup(_s_x32, _ctx); /*string*/
  kk_expr__expr _x_x33;
  kk_string_t _x_x34;
  kk_define_string_literal(, _s_x35, 1, "x", _ctx)
  _x_x34 = kk_string_dup(_s_x35, _ctx); /*string*/
  _x_x33 = kk_expr__new_Var(kk_reuse_null, 0, _x_x34, _ctx); /*expr/expr*/
  _x_x30 = kk_expr__new_Lam(kk_reuse_null, 0, _x_x31, _x_x33, _ctx); /*expr/expr*/
  kk_expr__expr _x_x36;
  kk_value__value _x_x37 = kk_value__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*value/value*/
  _x_x36 = kk_expr__new_Lit(kk_reuse_null, 0, _x_x37, _ctx); /*expr/expr*/
  _x_x29 = kk_expr__new_App(kk_reuse_null, 0, _x_x30, _x_x36, _ctx); /*expr/expr*/
  _match_x27 = kk_expr_uniquify(_x_x29, _ctx); /*either<exception,expr/uexpr>*/
  if (kk_std_core_types__is_Left(_match_x27, _ctx)) {
    kk_box_t _box_x0 = _match_x27._cons.Left.left;
    kk_std_core_exn__exception e = kk_std_core_exn__exception_unbox(_box_x0, KK_BORROWED, _ctx);
    kk_std_core_exn__exception_dup(e, _ctx);
    kk_std_core_types__either_drop(_match_x27, _ctx);
    kk_string_t _x_x38;
    {
      kk_string_t _x = e.message;
      kk_string_dup(_x, _ctx);
      kk_std_core_exn__exception_drop(e, _ctx);
      _x_x38 = _x; /*string*/
    }
    kk_std_core_console_printsln(_x_x38, _ctx);
  }
  else {
    kk_box_t _box_x1 = _match_x27._cons.Right.right;
    kk_expr__uexpr uexpr = kk_expr__uexpr_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_expr__uexpr_dup(uexpr, _ctx);
    kk_std_core_types__either_drop(_match_x27, _ctx);
    kk_std_core_types__either _match_x28 = kk_infer_infer(uexpr, _ctx); /*either<exception,(types/types, infer/tenv)>*/;
    if (kk_std_core_types__is_Left(_match_x28, _ctx)) {
      kk_box_t _box_x2 = _match_x28._cons.Left.left;
      kk_std_core_exn__exception e_0 = kk_std_core_exn__exception_unbox(_box_x2, KK_BORROWED, _ctx);
      kk_std_core_exn__exception_dup(e_0, _ctx);
      kk_std_core_types__either_drop(_match_x28, _ctx);
      kk_string_t _x_x39;
      {
        kk_string_t _x_0 = e_0.message;
        kk_string_dup(_x_0, _ctx);
        kk_std_core_exn__exception_drop(e_0, _ctx);
        _x_x39 = _x_0; /*string*/
      }
      kk_std_core_console_printsln(_x_x39, _ctx);
    }
    else {
      kk_box_t _box_x3 = _match_x28._cons.Right.right;
      kk_std_core_types__tuple2 t = kk_std_core_types__tuple2_unbox(_box_x3, KK_BORROWED, _ctx);
      kk_std_core_types__tuple2_dup(t, _ctx);
      kk_std_core_types__either_drop(_match_x28, _ctx);
      kk_string_t s_10004;
      kk_string_t _x_x40;
      kk_define_string_literal(, _s_x41, 6, "type: ", _ctx)
      _x_x40 = kk_string_dup(_s_x41, _ctx); /*string*/
      kk_string_t _x_x42 = kk_std_core_tuple_tuple2_fs_show(t, kk_main_new_main_fun43(_ctx), kk_main_new_main_fun45(_ctx), _ctx); /*string*/
      s_10004 = kk_std_core_types__lp__plus__plus__rp_(_x_x40, _x_x42, _ctx); /*string*/
      kk_std_core_console_printsln(s_10004, _ctx);
    }
  }
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
