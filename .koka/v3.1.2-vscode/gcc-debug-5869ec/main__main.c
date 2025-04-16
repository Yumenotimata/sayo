// Koka generated module: main/@main, koka version: 3.1.2, platform: 64-bit
#include "main__main.h"


// lift anonymous function
struct kk_main__main__expr_fun32__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__main__expr_fun32(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun32(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun32, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__main__expr_fun35__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__main__expr_fun35(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun35(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun35, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__main__expr_fun38__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__main__expr_fun38(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun38(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun38, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__main__expr_fun45__t {
  struct kk_function_s _base;
};
static bool kk_main__main__expr_fun45(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun45(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun45, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_main__main__expr_fun45(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x46 = kk_string_unbox(_b_x4); /*string*/
  kk_string_t _x_x47 = kk_string_unbox(_b_x5); /*string*/
  return kk_string_is_eq(_x_x46,_x_x47,kk_context());
}


// lift anonymous function
struct kk_main__main__expr_fun48__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__main__expr_fun48(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun48(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun48, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main__main__expr_fun48(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x49 = kk_string_unbox(_b_x6); /*string*/
  return kk_std_core_show_string_fs_show(_x_x49, _ctx);
}
static kk_unit_t kk_main__main__expr_fun38(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x39;
  kk_string_t _x_x40;
  kk_define_string_literal(, _s_x41, 2, "ab", _ctx)
  _x_x40 = kk_string_dup(_s_x41, _ctx); /*string*/
  _x_x39 = kk_string_box(_x_x40); /*827*/
  kk_box_t _x_x42;
  kk_string_t _x_x43;
  kk_define_string_literal(, _s_x44, 1, "b", _ctx)
  _x_x43 = kk_string_dup(_s_x44, _ctx); /*string*/
  _x_x42 = kk_string_box(_x_x43); /*827*/
  kk_utest_assert_eq(_x_x39, _x_x42, kk_main__main__new_expr_fun45(_ctx), kk_main__main__new_expr_fun48(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_main__main__expr_fun35(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x36 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x36, kk_main__main__new_expr_fun38(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_main__main__expr_fun32(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x33 = kk_string_empty(); /*string*/
  kk_utest_suite(_x_x33, kk_main__main__new_expr_fun35(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main__main__expr_fun51__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__main__expr_fun51(kk_function_t _fself, kk_box_t _b_x13, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun51(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun51, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main__main__expr_fun51(kk_function_t _fself, kk_box_t _b_x13, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x52 = kk_Unit;
  kk_unit_unbox(_b_x13);
  return kk_std_core_tuple_unit_fs_show(_x_x52, _ctx);
}

kk_unit_t kk_main__main__expr(kk_context_t* _ctx) { /* () -> console/console () */ 
  kk_std_core_types__list x_10000 = kk_utest_run_test(kk_main__main__new_expr_fun32(_ctx), _ctx); /*list<()>*/;
  kk_string_t _x_x50 = kk_std_core_list_show(x_10000, kk_main__main__new_expr_fun51(_ctx), _ctx); /*string*/
  kk_std_core_console_printsln(_x_x50, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main__main__main_fun53__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__main__main_fun53(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun53(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun53, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__main__main_fun56__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__main__main_fun56(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun56(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun56, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__main__main_fun59__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__main__main_fun59(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun59(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun59, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__main__main_fun66__t {
  struct kk_function_s _base;
};
static bool kk_main__main__main_fun66(kk_function_t _fself, kk_box_t _b_x20, kk_box_t _b_x21, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun66(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun66, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_main__main__main_fun66(kk_function_t _fself, kk_box_t _b_x20, kk_box_t _b_x21, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x67 = kk_string_unbox(_b_x20); /*string*/
  kk_string_t _x_x68 = kk_string_unbox(_b_x21); /*string*/
  return kk_string_is_eq(_x_x67,_x_x68,kk_context());
}


// lift anonymous function
struct kk_main__main__main_fun69__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__main__main_fun69(kk_function_t _fself, kk_box_t _b_x22, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun69(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun69, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main__main__main_fun69(kk_function_t _fself, kk_box_t _b_x22, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x70 = kk_string_unbox(_b_x22); /*string*/
  return kk_std_core_show_string_fs_show(_x_x70, _ctx);
}
static kk_unit_t kk_main__main__main_fun59(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x60;
  kk_string_t _x_x61;
  kk_define_string_literal(, _s_x62, 2, "ab", _ctx)
  _x_x61 = kk_string_dup(_s_x62, _ctx); /*string*/
  _x_x60 = kk_string_box(_x_x61); /*827*/
  kk_box_t _x_x63;
  kk_string_t _x_x64;
  kk_define_string_literal(, _s_x65, 1, "b", _ctx)
  _x_x64 = kk_string_dup(_s_x65, _ctx); /*string*/
  _x_x63 = kk_string_box(_x_x64); /*827*/
  kk_utest_assert_eq(_x_x60, _x_x63, kk_main__main__new_main_fun66(_ctx), kk_main__main__new_main_fun69(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_main__main__main_fun56(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x57 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x57, kk_main__main__new_main_fun59(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_main__main__main_fun53(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x54 = kk_string_empty(); /*string*/
  kk_utest_suite(_x_x54, kk_main__main__new_main_fun56(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main__main__main_fun72__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__main__main_fun72(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun72(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun72, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main__main__main_fun72(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x73 = kk_Unit;
  kk_unit_unbox(_b_x29);
  return kk_std_core_tuple_unit_fs_show(_x_x73, _ctx);
}

kk_unit_t kk_main__main__main(kk_context_t* _ctx) { /* () -> <st<global>,console/console,div,fsys,ndet,net,ui> () */ 
  kk_std_core_types__list x_10000 = kk_utest_run_test(kk_main__main__new_main_fun53(_ctx), _ctx); /*list<()>*/;
  kk_string_t _x_x71 = kk_std_core_list_show(x_10000, kk_main__main__new_main_fun72(_ctx), _ctx); /*string*/
  kk_std_core_console_printsln(_x_x71, _ctx); return kk_Unit;
}

// initialization
void kk_main__main__init(kk_context_t* _ctx){
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
  kk_main__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_main__main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_main__done(_ctx);
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

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_main__main__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_main__main__init(_ctx);
  atexit(&_kk_main_exit);
  kk_main__main__main(_ctx);
  kk_main__main__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}
