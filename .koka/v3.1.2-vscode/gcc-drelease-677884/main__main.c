// Koka generated module: main/@main, koka version: 3.1.2, platform: 64-bit
#include "main__main.h"


// lift anonymous function
struct kk_main__main__expr_fun17__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__main__expr_fun17(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun17(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__expr_fun17, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__main__expr_fun19__t {
  struct kk_function_s _base;
  kk_box_t _b_x2;
};
static kk_unit_t kk_main__main__expr_fun19(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_expr_fun19(kk_box_t _b_x2, kk_context_t* _ctx) {
  struct kk_main__main__expr_fun19__t* _self = kk_function_alloc_as(struct kk_main__main__expr_fun19__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__main__expr_fun19, kk_context());
  _self->_b_x2 = _b_x2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main__main__expr_fun19(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main__main__expr_fun19__t* _self = kk_function_as(struct kk_main__main__expr_fun19__t*, _fself, _ctx);
  kk_box_t _b_x2 = _self->_b_x2; /* 1001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2, _ctx);}, {}, _ctx)
  kk_box_t _x_x20;
  kk_function_t _x_x21 = kk_function_unbox(_b_x2, _ctx); /*() -> <div,utest/test-suite<main/_56>> 3*/
  _x_x20 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x21, (_x_x21, _ctx), _ctx); /*3*/
  kk_unit_unbox(_x_x20); return kk_Unit;
}
static kk_box_t kk_main__main__expr_fun17(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x18 = kk_Unit;
  kk_utest_run_utest(kk_main__main__new_expr_fun19(_b_x2, _ctx), _ctx);
  return kk_unit_box(_x_x18);
}

kk_unit_t kk_main__main__expr(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_std_core_types__list _res_x15;
  kk_std_core_types__list _x_x16 = kk_std_core_types__list_dup(kk_main_tests, _ctx); /*forall<a,e> list<() -> <div,utest/test-suite<a>|e> ()>*/
  _res_x15 = kk_std_core_list_map(_x_x16, kk_main__main__new_expr_fun17(_ctx), _ctx); /*list<()>*/
  kk_std_core_types__list_drop(_res_x15, _ctx);
  kk_Unit; return kk_Unit;
}


// lift anonymous function
struct kk_main__main__main_fun23__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__main__main_fun23(kk_function_t _fself, kk_box_t _b_x9, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun23(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun23, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__main__main_fun25__t {
  struct kk_function_s _base;
  kk_box_t _b_x9;
};
static kk_unit_t kk_main__main__main_fun25(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__main__new_main_fun25(kk_box_t _b_x9, kk_context_t* _ctx) {
  struct kk_main__main__main_fun25__t* _self = kk_function_alloc_as(struct kk_main__main__main_fun25__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__main__main_fun25, kk_context());
  _self->_b_x9 = _b_x9;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main__main__main_fun25(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main__main__main_fun25__t* _self = kk_function_as(struct kk_main__main__main_fun25__t*, _fself, _ctx);
  kk_box_t _b_x9 = _self->_b_x9; /* 1001 */
  kk_drop_match(_self, {kk_box_dup(_b_x9, _ctx);}, {}, _ctx)
  kk_box_t _x_x26;
  kk_function_t _x_x27 = kk_function_unbox(_b_x9, _ctx); /*() -> <div,utest/test-suite<main/_56>> 10*/
  _x_x26 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x27, (_x_x27, _ctx), _ctx); /*10*/
  kk_unit_unbox(_x_x26); return kk_Unit;
}
static kk_box_t kk_main__main__main_fun23(kk_function_t _fself, kk_box_t _b_x9, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x24 = kk_Unit;
  kk_utest_run_utest(kk_main__main__new_main_fun25(_b_x9, _ctx), _ctx);
  return kk_unit_box(_x_x24);
}

kk_unit_t kk_main__main__main(kk_context_t* _ctx) { /* () -> <st<global>,console/console,div,fsys,ndet,net,ui> () */ 
  kk_std_core_types__list _res_x14;
  kk_std_core_types__list _x_x22 = kk_std_core_types__list_dup(kk_main_tests, _ctx); /*forall<a,e> list<() -> <div,utest/test-suite<a>|e> ()>*/
  _res_x14 = kk_std_core_list_map(_x_x22, kk_main__main__new_main_fun23(_ctx), _ctx); /*list<()>*/
  kk_std_core_types__list_drop(_res_x14, _ctx);
  kk_Unit; return kk_Unit;
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
  kk_utest__init(_ctx);
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
  kk_utest__done(_ctx);
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
