// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"


// lift anonymous function
struct kk_main_main_fun26__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun26(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun26(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun26, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun26(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x27;
  kk_types__types _x_x28;
  kk_types__types _x_x29;
  kk_string_t _x_x30;
  kk_define_string_literal(, _s_x31, 1, "a", _ctx)
  _x_x30 = kk_string_dup(_s_x31, _ctx); /*string*/
  _x_x29 = kk_types__new_TVar(kk_reuse_null, 0, _x_x30, _ctx); /*types/types*/
  kk_types__types _x_x32;
  kk_string_t _x_x33;
  kk_define_string_literal(, _s_x34, 1, "b", _ctx)
  _x_x33 = kk_string_dup(_s_x34, _ctx); /*string*/
  _x_x32 = kk_types__new_TVar(kk_reuse_null, 0, _x_x33, _ctx); /*types/types*/
  _x_x28 = kk_types__new_TApp(kk_reuse_null, 0, _x_x29, _x_x32, _ctx); /*types/types*/
  kk_types__types _x_x35;
  kk_types__types _x_x36;
  kk_string_t _x_x37;
  kk_define_string_literal(, _s_x38, 1, "b", _ctx)
  _x_x37 = kk_string_dup(_s_x38, _ctx); /*string*/
  _x_x36 = kk_types__new_TVar(kk_reuse_null, 0, _x_x37, _ctx); /*types/types*/
  kk_types__types _x_x39;
  kk_string_t _x_x40;
  kk_define_string_literal(, _s_x41, 3, "Int", _ctx)
  _x_x40 = kk_string_dup(_s_x41, _ctx); /*string*/
  _x_x39 = kk_types__new_TCon(kk_reuse_null, 0, _x_x40, _ctx); /*types/types*/
  _x_x35 = kk_types__new_TApp(kk_reuse_null, 0, _x_x36, _x_x39, _ctx); /*types/types*/
  _x_x27 = kk_types_unify(_x_x28, _x_x35, _ctx); /*types/subst*/
  return kk_std_core_types__list_box(_x_x27, _ctx);
}


// lift anonymous function
struct kk_main_main_fun43__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun43(kk_function_t _fself, kk_box_t _b_x9, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun43(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun43, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun43(kk_function_t _fself, kk_box_t _b_x9, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t s_10003;
  kk_std_core_types__tuple2 _match_x25 = kk_std_core_types__tuple2_unbox(_b_x9, KK_OWNED, _ctx); /*(string, types/types)*/;
  {
    kk_box_t _box_x5 = _match_x25.fst;
    kk_box_t _box_x6 = _match_x25.snd;
    kk_string_t u = kk_string_unbox(_box_x5);
    kk_types__types t_0 = kk_types__types_unbox(_box_x6, KK_BORROWED, _ctx);
    kk_types__types_dup(t_0, _ctx);
    kk_string_dup(u, _ctx);
    kk_std_core_types__tuple2_drop(_match_x25, _ctx);
    kk_string_t _x_x44;
    kk_string_t _x_x45;
    kk_define_string_literal(, _s_x46, 5, " +-> ", _ctx)
    _x_x45 = kk_string_dup(_s_x46, _ctx); /*string*/
    kk_string_t _x_x47 = kk_types_show(t_0, _ctx); /*string*/
    _x_x44 = kk_std_core_types__lp__plus__plus__rp_(_x_x45, _x_x47, _ctx); /*string*/
    s_10003 = kk_std_core_types__lp__plus__plus__rp_(u, _x_x44, _ctx); /*string*/
  }
  kk_unit_t _x_x48 = kk_Unit;
  kk_std_core_console_printsln(s_10003, _ctx);
  return kk_unit_box(_x_x48);
}


// lift anonymous function
struct kk_main_main_fun49__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun49(kk_function_t _fself, kk_box_t _b_x18, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun49(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun49, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun49(kk_function_t _fself, kk_box_t _b_x18, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t s_10003_0;
  kk_std_core_types__tuple2 _match_x23 = kk_std_core_types__tuple2_unbox(_b_x18, KK_OWNED, _ctx); /*(string, types/types)*/;
  {
    kk_box_t _box_x14 = _match_x23.fst;
    kk_box_t _box_x15 = _match_x23.snd;
    kk_string_t u_0 = kk_string_unbox(_box_x14);
    kk_types__types t_0_0 = kk_types__types_unbox(_box_x15, KK_BORROWED, _ctx);
    kk_types__types_dup(t_0_0, _ctx);
    kk_string_dup(u_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x23, _ctx);
    kk_string_t _x_x50;
    kk_string_t _x_x51;
    kk_define_string_literal(, _s_x52, 5, " +-> ", _ctx)
    _x_x51 = kk_string_dup(_s_x52, _ctx); /*string*/
    kk_string_t _x_x53 = kk_types_show(t_0_0, _ctx); /*string*/
    _x_x50 = kk_std_core_types__lp__plus__plus__rp_(_x_x51, _x_x53, _ctx); /*string*/
    s_10003_0 = kk_std_core_types__lp__plus__plus__rp_(u_0, _x_x50, _ctx); /*string*/
  }
  kk_unit_t _x_x54 = kk_Unit;
  kk_std_core_console_printsln(s_10003_0, _ctx);
  return kk_unit_box(_x_x54);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_std_core_exn__error t_10000 = kk_std_core_exn_try(kk_main_new_main_fun26(_ctx), _ctx); /*error<types/subst>*/;
  if (kk_std_core_exn__is_Error(t_10000, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10000._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10000, _ctx);
    kk_std_core_types__either _match_x24 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx); /*either<1017,1018>*/;
    if (kk_std_core_types__is_Left(_match_x24, _ctx)) {
      kk_box_t _box_x3 = _match_x24._cons.Left.left;
      kk_std_core_exn__exception e = kk_std_core_exn__exception_unbox(_box_x3, KK_BORROWED, _ctx);
      kk_std_core_exn__exception_dup(e, _ctx);
      kk_std_core_types__either_drop(_match_x24, _ctx);
      kk_unit_t __ = kk_Unit;
      kk_string_t _x_x42;
      {
        kk_string_t _x = e.message;
        kk_string_dup(_x, _ctx);
        kk_std_core_exn__exception_drop(e, _ctx);
        _x_x42 = _x; /*string*/
      }
      kk_std_core_console_printsln(_x_x42, _ctx);
      kk_Unit; return kk_Unit;
    }
    {
      kk_box_t _box_x4 = _match_x24._cons.Right.right;
      kk_std_core_types__list subst = kk_std_core_types__list_unbox(_box_x4, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(subst, _ctx);
      kk_std_core_types__either_drop(_match_x24, _ctx);
      kk_std_core_types__list ___0 = kk_std_core_list_map(subst, kk_main_new_main_fun43(_ctx), _ctx); /*list<()>*/;
      kk_std_core_types__list_drop(___0, _ctx);
      kk_Unit; return kk_Unit;
    }
  }
  {
    kk_box_t _box_x13 = t_10000._cons.Ok.result;
    kk_std_core_types__list x = kk_std_core_types__list_unbox(_box_x13, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x, _ctx);
    kk_std_core_exn__error_drop(t_10000, _ctx);
    kk_std_core_types__list ___0_0 = kk_std_core_list_map(x, kk_main_new_main_fun49(_ctx), _ctx); /*list<()>*/;
    kk_std_core_types__list_drop(___0_0, _ctx);
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
