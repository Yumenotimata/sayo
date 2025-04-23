// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_unit_t __ = kk_Unit;
  kk_std_core_types__either _match_x2;
  kk_expr__expr _x_x3;
  kk_string_t _x_x4;
  kk_define_string_literal(, _s_x5, 1, "x", _ctx)
  _x_x4 = kk_string_dup(_s_x5, _ctx); /*string*/
  kk_expr__expr _x_x6;
  kk_string_t _x_x7;
  kk_define_string_literal(, _s_x8, 1, "x", _ctx)
  _x_x7 = kk_string_dup(_s_x8, _ctx); /*string*/
  kk_expr__expr _x_x9;
  kk_value__value _x_x10 = kk_value__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*value/value*/
  _x_x9 = kk_expr__new_Lit(kk_reuse_null, 0, _x_x10, _ctx); /*expr/expr*/
  kk_expr__expr _x_x11;
  kk_expr__expr _x_x12;
  kk_string_t _x_x13;
  kk_define_string_literal(, _s_x14, 1, "x", _ctx)
  _x_x13 = kk_string_dup(_s_x14, _ctx); /*string*/
  kk_expr__expr _x_x15;
  kk_string_t _x_x16;
  kk_define_string_literal(, _s_x17, 1, "x", _ctx)
  _x_x16 = kk_string_dup(_s_x17, _ctx); /*string*/
  _x_x15 = kk_expr__new_Var(kk_reuse_null, 0, _x_x16, _ctx); /*expr/expr*/
  _x_x12 = kk_expr__new_Lam(kk_reuse_null, 0, _x_x13, _x_x15, _ctx); /*expr/expr*/
  kk_expr__expr _x_x18;
  kk_value__value _x_x19 = kk_value__new_Int(kk_reuse_null, 0, kk_integer_from_small(0), _ctx); /*value/value*/
  _x_x18 = kk_expr__new_Lit(kk_reuse_null, 0, _x_x19, _ctx); /*expr/expr*/
  _x_x11 = kk_expr__new_App(kk_reuse_null, 0, _x_x12, _x_x18, _ctx); /*expr/expr*/
  _x_x6 = kk_expr__new_Let(kk_reuse_null, 0, _x_x7, _x_x9, _x_x11, _ctx); /*expr/expr*/
  kk_expr__expr _x_x20;
  kk_string_t _x_x21;
  kk_define_string_literal(, _s_x22, 1, "x", _ctx)
  _x_x21 = kk_string_dup(_s_x22, _ctx); /*string*/
  _x_x20 = kk_expr__new_Var(kk_reuse_null, 0, _x_x21, _ctx); /*expr/expr*/
  _x_x3 = kk_expr__new_Let(kk_reuse_null, 0, _x_x4, _x_x6, _x_x20, _ctx); /*expr/expr*/
  _match_x2 = kk_expr_uniquify(_x_x3, _ctx); /*either<exception,expr/uexpr>*/
  if (kk_std_core_types__is_Left(_match_x2, _ctx)) {
    kk_box_t _box_x0 = _match_x2._cons.Left.left;
    kk_std_core_exn__exception e = kk_std_core_exn__exception_unbox(_box_x0, KK_BORROWED, _ctx);
    kk_std_core_exn__exception_dup(e, _ctx);
    kk_std_core_types__either_drop(_match_x2, _ctx);
    kk_string_t _x_x23;
    {
      kk_string_t _x = e.message;
      kk_string_dup(_x, _ctx);
      kk_std_core_exn__exception_drop(e, _ctx);
      _x_x23 = _x; /*string*/
    }
    kk_std_core_console_printsln(_x_x23, _ctx);
  }
  else {
    kk_box_t _box_x1 = _match_x2._cons.Right.right;
    kk_expr__uexpr uexpr = kk_expr__uexpr_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_expr__uexpr_dup(uexpr, _ctx);
    kk_std_core_types__either_drop(_match_x2, _ctx);
    kk_string_t s_10002 = kk_expr_show(uexpr, _ctx); /*string*/;
    kk_std_core_console_printsln(s_10002, _ctx);
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
