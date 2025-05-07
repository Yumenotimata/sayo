// Koka generated module: expr, koka version: 3.1.2, platform: 64-bit
#include "expr.h"

kk_string_t kk_expr_show(kk_expr__uexpr e, kk_context_t* _ctx) { /* (e : uexpr) -> div string */ 
  if (kk_expr__is_UApp(e, _ctx)) {
    struct kk_expr_UApp* _con_x317 = kk_expr__as_UApp(e, _ctx);
    kk_expr__uexpr e1 = _con_x317->e1;
    kk_expr__uexpr e2 = _con_x317->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_expr__uexpr_dup(e1, _ctx);
      kk_expr__uexpr_dup(e2, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_string_t _x_x318 = kk_expr_show(e1, _ctx); /*string*/
    kk_string_t _x_x319;
    kk_string_t _x_x320;
    kk_define_string_literal(, _s_x321, 3, " @ ", _ctx)
    _x_x320 = kk_string_dup(_s_x321, _ctx); /*string*/
    kk_string_t _x_x322 = kk_expr_show(e2, _ctx); /*string*/
    _x_x319 = kk_std_core_types__lp__plus__plus__rp_(_x_x320, _x_x322, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x318, _x_x319, _ctx);
  }
  if (kk_expr__is_ULet(e, _ctx)) {
    struct kk_expr_ULet* _con_x323 = kk_expr__as_ULet(e, _ctx);
    kk_string_t x = _con_x323->x;
    kk_expr__uexpr e1_0 = _con_x323->e1;
    kk_expr__uexpr e2_0 = _con_x323->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_expr__uexpr_dup(e1_0, _ctx);
      kk_expr__uexpr_dup(e2_0, _ctx);
      kk_string_dup(x, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_string_t _x_x324;
    kk_define_string_literal(, _s_x325, 4, "let ", _ctx)
    _x_x324 = kk_string_dup(_s_x325, _ctx); /*string*/
    kk_string_t _x_x326;
    kk_string_t _x_x327 = kk_std_core_show_string_fs_show(x, _ctx); /*string*/
    kk_string_t _x_x328;
    kk_string_t _x_x329;
    kk_define_string_literal(, _s_x330, 3, " = ", _ctx)
    _x_x329 = kk_string_dup(_s_x330, _ctx); /*string*/
    kk_string_t _x_x331;
    kk_string_t _x_x332 = kk_expr_show(e1_0, _ctx); /*string*/
    kk_string_t _x_x333;
    kk_string_t _x_x334;
    kk_define_string_literal(, _s_x335, 4, " in ", _ctx)
    _x_x334 = kk_string_dup(_s_x335, _ctx); /*string*/
    kk_string_t _x_x336 = kk_expr_show(e2_0, _ctx); /*string*/
    _x_x333 = kk_std_core_types__lp__plus__plus__rp_(_x_x334, _x_x336, _ctx); /*string*/
    _x_x331 = kk_std_core_types__lp__plus__plus__rp_(_x_x332, _x_x333, _ctx); /*string*/
    _x_x328 = kk_std_core_types__lp__plus__plus__rp_(_x_x329, _x_x331, _ctx); /*string*/
    _x_x326 = kk_std_core_types__lp__plus__plus__rp_(_x_x327, _x_x328, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x324, _x_x326, _ctx);
  }
  if (kk_expr__is_UVar(e, _ctx)) {
    struct kk_expr_UVar* _con_x337 = kk_expr__as_UVar(e, _ctx);
    kk_string_t x_0 = _con_x337->x;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(x_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    return x_0;
  }
  if (kk_expr__is_ULam(e, _ctx)) {
    struct kk_expr_ULam* _con_x338 = kk_expr__as_ULam(e, _ctx);
    kk_string_t a = _con_x338->a;
    kk_expr__uexpr body = _con_x338->body;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(a, _ctx);
      kk_expr__uexpr_dup(body, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_string_t _x_x339;
    kk_define_string_literal(, _s_x340, 2, "(\\", _ctx)
    _x_x339 = kk_string_dup(_s_x340, _ctx); /*string*/
    kk_string_t _x_x341;
    kk_string_t _x_x342;
    kk_string_t _x_x343;
    kk_define_string_literal(, _s_x344, 4, " -> ", _ctx)
    _x_x343 = kk_string_dup(_s_x344, _ctx); /*string*/
    kk_string_t _x_x345;
    kk_string_t _x_x346 = kk_expr_show(body, _ctx); /*string*/
    kk_string_t _x_x347;
    kk_define_string_literal(, _s_x348, 1, ")", _ctx)
    _x_x347 = kk_string_dup(_s_x348, _ctx); /*string*/
    _x_x345 = kk_std_core_types__lp__plus__plus__rp_(_x_x346, _x_x347, _ctx); /*string*/
    _x_x342 = kk_std_core_types__lp__plus__plus__rp_(_x_x343, _x_x345, _ctx); /*string*/
    _x_x341 = kk_std_core_types__lp__plus__plus__rp_(a, _x_x342, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x339, _x_x341, _ctx);
  }
  {
    struct kk_expr_ULit* _con_x349 = kk_expr__as_ULit(e, _ctx);
    kk_value__value v = _con_x349->v;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_value__value_dup(v, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    if (kk_value__is_Int(v, _ctx)) {
      struct kk_value_Int* _con_x350 = kk_value__as_Int(v, _ctx);
      kk_integer_t x_1 = _con_x350->x;
      if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
        kk_datatype_ptr_free(v, _ctx);
      }
      else {
        kk_integer_dup(x_1, _ctx);
        kk_datatype_ptr_decref(v, _ctx);
      }
      return kk_std_core_int_show(x_1, _ctx);
    }
    {
      struct kk_value_String* _con_x351 = kk_value__as_String(v, _ctx);
      kk_string_t x_0_0 = _con_x351->x;
      if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
        kk_datatype_ptr_free(v, _ctx);
      }
      else {
        kk_string_dup(x_0_0, _ctx);
        kk_datatype_ptr_decref(v, _ctx);
      }
      return x_0_0;
    }
  }
}
 
// runtime tag for the effect `:unique`

kk_std_core_hnd__htag kk_expr__tag_unique;
 
// handler for the effect `:unique`

kk_box_t kk_expr__handle_unique(kk_expr__unique hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : unique<e,b>, ret : (res : a) -> e b, action : () -> <unique|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x354 = kk_std_core_hnd__htag_dup(kk_expr__tag_unique, _ctx); /*hnd/htag<expr/unique>*/
  return kk_std_core_hnd__hhandle(_x_x354, kk_expr__unique_box(hnd, _ctx), ret, action, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_expr__mlift_handle_unique_10050_fun361__t {
  struct kk_function_s _base;
  kk_ref_t unique_num;
};
static kk_box_t kk_expr__mlift_handle_unique_10050_fun361(kk_function_t _fself, kk_box_t _b_x22, kk_context_t* _ctx);
static kk_function_t kk_expr__new_mlift_handle_unique_10050_fun361(kk_ref_t unique_num, kk_context_t* _ctx) {
  struct kk_expr__mlift_handle_unique_10050_fun361__t* _self = kk_function_alloc_as(struct kk_expr__mlift_handle_unique_10050_fun361__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__mlift_handle_unique_10050_fun361, kk_context());
  _self->unique_num = unique_num;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__mlift_handle_unique_10050_fun361(kk_function_t _fself, kk_box_t _b_x22, kk_context_t* _ctx) {
  struct kk_expr__mlift_handle_unique_10050_fun361__t* _self = kk_function_as(struct kk_expr__mlift_handle_unique_10050_fun361__t*, _fself, _ctx);
  kk_ref_t unique_num = _self->unique_num; /* local-var<985,int> */
  kk_drop_match(_self, {kk_ref_dup(unique_num, _ctx);}, {}, _ctx)
  kk_unit_t wild___27 = kk_Unit;
  kk_unit_unbox(_b_x22);
  kk_ref_t _b_x20_25 = unique_num; /*local-var<985,int>*/;
  return kk_ref_get(_b_x20_25,kk_context());
}

kk_integer_t kk_expr__mlift_handle_unique_10050(kk_ref_t unique_num, kk_integer_t _y_x10013, kk_context_t* _ctx) { /* forall<h,e> (unique-num : local-var<h,int>, int) -> <local<h>|e> int */ 
  kk_integer_t _b_x17_19 = kk_integer_add_small_const(_y_x10013, 1, _ctx); /*int*/;
  kk_unit_t x_10061 = kk_Unit;
  kk_ref_set_borrow(unique_num,(kk_integer_box(_b_x17_19, _ctx)),kk_context());
  kk_box_t _x_x360;
  if (kk_yielding(kk_context())) {
    _x_x360 = kk_std_core_hnd_yield_extend(kk_expr__new_mlift_handle_unique_10050_fun361(unique_num, _ctx), _ctx); /*3003*/
  }
  else {
    _x_x360 = kk_ref_get(unique_num,kk_context()); /*3003*/
  }
  return kk_integer_unbox(_x_x360, _ctx);
}


// lift anonymous function
struct kk_expr_handle_unique_fun365__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_expr_handle_unique_fun365(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_expr_new_handle_unique_fun365(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_expr_handle_unique_fun365__t* _self = kk_function_alloc_as(struct kk_expr_handle_unique_fun365__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr_handle_unique_fun365, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_expr_handle_unique_fun370__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_expr_handle_unique_fun370(kk_function_t _fself, kk_box_t _b_x33, kk_context_t* _ctx);
static kk_function_t kk_expr_new_handle_unique_fun370(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_expr_handle_unique_fun370__t* _self = kk_function_alloc_as(struct kk_expr_handle_unique_fun370__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr_handle_unique_fun370, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr_handle_unique_fun370(kk_function_t _fself, kk_box_t _b_x33, kk_context_t* _ctx) {
  struct kk_expr_handle_unique_fun370__t* _self = kk_function_as(struct kk_expr_handle_unique_fun370__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<985,int> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_integer_t _x_x371;
  kk_integer_t _x_x372 = kk_integer_unbox(_b_x33, _ctx); /*int*/
  _x_x371 = kk_expr__mlift_handle_unique_10050(loc, _x_x372, _ctx); /*int*/
  return kk_integer_box(_x_x371, _ctx);
}
static kk_box_t kk_expr_handle_unique_fun365(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_expr_handle_unique_fun365__t* _self = kk_function_as(struct kk_expr_handle_unique_fun365__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<985,int> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_integer_t x_10067;
  kk_box_t _x_x366;
  kk_ref_t _x_x367 = kk_ref_dup(loc, _ctx); /*local-var<985,int>*/
  _x_x366 = kk_ref_get(_x_x367,kk_context()); /*1000*/
  x_10067 = kk_integer_unbox(_x_x366, _ctx); /*int*/
  kk_integer_t _x_x368;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10067, _ctx);
    kk_box_t _x_x369 = kk_std_core_hnd_yield_extend(kk_expr_new_handle_unique_fun370(loc, _ctx), _ctx); /*3003*/
    _x_x368 = kk_integer_unbox(_x_x369, _ctx); /*int*/
  }
  else {
    _x_x368 = kk_expr__mlift_handle_unique_10050(loc, x_10067, _ctx); /*int*/
  }
  return kk_integer_box(_x_x368, _ctx);
}


// lift anonymous function
struct kk_expr_handle_unique_fun373__t {
  struct kk_function_s _base;
};
static kk_box_t kk_expr_handle_unique_fun373(kk_function_t _fself, kk_box_t _x, kk_context_t* _ctx);
static kk_function_t kk_expr_new_handle_unique_fun373(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr_handle_unique_fun373, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr_handle_unique_fun373(kk_function_t _fself, kk_box_t _x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x;
}

kk_box_t kk_expr_handle_unique(kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (f : () -> <unique|e> a) -> e a */ 
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(-1), _ctx)),kk_context()); /*local-var<985,int>*/;
  kk_box_t res;
  kk_expr__unique _x_x362;
  kk_std_core_hnd__clause0 _x_x363;
  kk_function_t _x_x364;
  kk_ref_dup(loc, _ctx);
  _x_x364 = kk_expr_new_handle_unique_fun365(loc, _ctx); /*() -> 1000 1003*/
  _x_x363 = kk_std_core_hnd_clause_tail0(_x_x364, _ctx); /*hnd/clause0<1003,1002,1000,1001>*/
  _x_x362 = kk_expr__new_Hnd_unique(kk_reuse_null, 0, kk_integer_from_small(1), _x_x363, _ctx); /*expr/unique<11,12>*/
  res = kk_expr__handle_unique(_x_x362, kk_expr_new_handle_unique_fun373(_ctx), f, _ctx); /*991*/
  return kk_std_core_hnd_prompt_local_var(loc, res, _ctx);
}


// lift anonymous function
struct kk_expr_uid_fun382__t {
  struct kk_function_s _base;
  kk_string_t x;
};
static kk_box_t kk_expr_uid_fun382(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uid_fun382(kk_string_t x, kk_context_t* _ctx) {
  struct kk_expr_uid_fun382__t* _self = kk_function_alloc_as(struct kk_expr_uid_fun382__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr_uid_fun382, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr_uid_fun382(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx) {
  struct kk_expr_uid_fun382__t* _self = kk_function_as(struct kk_expr_uid_fun382__t*, _fself, _ctx);
  kk_string_t x = _self->x; /* string */
  kk_drop_match(_self, {kk_string_dup(x, _ctx);}, {}, _ctx)
  kk_integer_t _y_x10020_47 = kk_integer_unbox(_b_x45, _ctx); /*int*/;
  kk_string_t _x_x383;
  kk_string_t _x_x384;
  kk_define_string_literal(, _s_x385, 1, "$", _ctx)
  _x_x384 = kk_string_dup(_s_x385, _ctx); /*string*/
  kk_string_t _x_x386;
  kk_string_t _x_x387 = kk_std_core_int_show(_y_x10020_47, _ctx); /*string*/
  _x_x386 = kk_std_core_types__lp__plus__plus__rp_(x, _x_x387, _ctx); /*string*/
  _x_x383 = kk_std_core_types__lp__plus__plus__rp_(_x_x384, _x_x386, _ctx); /*string*/
  return kk_string_box(_x_x383);
}

kk_string_t kk_expr_uid(kk_string_t x, kk_context_t* _ctx) { /* (x : string) -> unique string */ 
  kk_std_core_hnd__ev ev_10073 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<expr/unique>*/;
  kk_integer_t x_0_10070;
  kk_box_t _x_x378;
  {
    struct kk_std_core_hnd_Ev* _con_x379 = kk_std_core_hnd__as_Ev(ev_10073, _ctx);
    kk_box_t _box_x38 = _con_x379->hnd;
    int32_t m = _con_x379->marker;
    kk_expr__unique h = kk_expr__unique_unbox(_box_x38, KK_BORROWED, _ctx);
    kk_expr__unique_dup(h, _ctx);
    {
      struct kk_expr__Hnd_unique* _con_x380 = kk_expr__as_Hnd_unique(h, _ctx);
      kk_integer_t _pat_0 = _con_x380->_cfc;
      kk_std_core_hnd__clause0 _fun_gen = _con_x380->_fun_gen;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_gen, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x41 = _fun_gen.clause;
        _x_x378 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x41, (_fun_unbox_x41, m, ev_10073, _ctx), _ctx); /*1005*/
      }
    }
  }
  x_0_10070 = kk_integer_unbox(_x_x378, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_0_10070, _ctx);
    kk_box_t _x_x381 = kk_std_core_hnd_yield_extend(kk_expr_new_uid_fun382(x, _ctx), _ctx); /*3003*/
    return kk_string_unbox(_x_x381);
  }
  {
    kk_string_t _x_x388;
    kk_define_string_literal(, _s_x389, 1, "$", _ctx)
    _x_x388 = kk_string_dup(_s_x389, _ctx); /*string*/
    kk_string_t _x_x390;
    kk_string_t _x_x391 = kk_std_core_int_show(x_0_10070, _ctx); /*string*/
    _x_x390 = kk_std_core_types__lp__plus__plus__rp_(x, _x_x391, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x388, _x_x390, _ctx);
  }
}
 
// monadic lift

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10052_sq_(kk_std_core_types__cctx _acc, kk_expr__expr e2, kk_std_core_types__list us, kk_expr__uexpr _trmc_x10003, kk_context_t* _ctx) { /* (ctx<uexpr>, e2 : expr, us : usubst, uexpr) -> <exn,unique,div> uexpr */ 
  kk_expr__uexpr _trmc_x10004 = kk_datatype_null(); /*expr/uexpr*/;
  kk_expr__uexpr _trmc_x10005 = kk_expr__new_UApp(kk_reuse_null, kk_field_index_of(struct kk_expr_UApp, e2), _trmc_x10003, _trmc_x10004, _ctx); /*expr/uexpr*/;
  kk_field_addr_t _b_x61_64 = kk_field_addr_create(&kk_expr__as_UApp(_trmc_x10005, _ctx)->e2, _ctx); /*@field-addr<expr/uexpr>*/;
  kk_std_core_types__cctx _x_x394 = kk_cctx_extend(_acc,(kk_expr__uexpr_box(_trmc_x10005, _ctx)),_b_x61_64,kk_context()); /*ctx<0>*/
  return kk_expr__trmc_uniquify_sq_(e2, us, _x_x394, _ctx);
}
 
// monadic lift

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10053_sq_(kk_std_core_types__cctx _acc_0, kk_expr__expr e2_0, kk_std_core_types__list us_sq_, kk_string_t x_sq_, kk_expr__uexpr _trmc_x10006, kk_context_t* _ctx) { /* (ctx<uexpr>, e2@0 : expr, us' : list<(string, uid)>, x' : string, uexpr) -> <exn,unique,div> uexpr */ 
  kk_expr__uexpr _trmc_x10007 = kk_datatype_null(); /*expr/uexpr*/;
  kk_expr__uexpr _trmc_x10008 = kk_expr__new_ULet(kk_reuse_null, kk_field_index_of(struct kk_expr_ULet, e2), x_sq_, _trmc_x10006, _trmc_x10007, _ctx); /*expr/uexpr*/;
  kk_field_addr_t _b_x73_76 = kk_field_addr_create(&kk_expr__as_ULet(_trmc_x10008, _ctx)->e2, _ctx); /*@field-addr<expr/uexpr>*/;
  kk_std_core_types__cctx _x_x395 = kk_cctx_extend(_acc_0,(kk_expr__uexpr_box(_trmc_x10008, _ctx)),_b_x73_76,kk_context()); /*ctx<0>*/
  return kk_expr__trmc_uniquify_sq_(e2_0, us_sq_, _x_x395, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_expr__mlift_trmc_uniquify_10054_fun403__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_1;
  kk_expr__expr e2_0_0;
  kk_std_core_types__list us_0_sq_;
  kk_string_t x_0_sq_;
};
static kk_box_t kk_expr__mlift_trmc_uniquify_10054_fun403_sq_(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx);
static kk_function_t kk_expr__new_mlift_trmc_uniquify_10054_fun403_sq_(kk_std_core_types__cctx _acc_1, kk_expr__expr e2_0_0, kk_std_core_types__list us_0_sq_, kk_string_t x_0_sq_, kk_context_t* _ctx) {
  struct kk_expr__mlift_trmc_uniquify_10054_fun403__t_sq_* _self = kk_function_alloc_as(struct kk_expr__mlift_trmc_uniquify_10054_fun403__t_sq_, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__mlift_trmc_uniquify_10054_fun403_sq_, kk_context());
  _self->_acc_1 = _acc_1;
  _self->e2_0_0 = e2_0_0;
  _self->us_0_sq_ = us_0_sq_;
  _self->x_0_sq_ = x_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__mlift_trmc_uniquify_10054_fun403_sq_(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx) {
  struct kk_expr__mlift_trmc_uniquify_10054_fun403__t_sq_* _self = kk_function_as(struct kk_expr__mlift_trmc_uniquify_10054_fun403__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_1 = _self->_acc_1; /* ctx<expr/uexpr> */
  kk_expr__expr e2_0_0 = _self->e2_0_0; /* expr/expr */
  kk_std_core_types__list us_0_sq_ = _self->us_0_sq_; /* list<(string, expr/uid)> */
  kk_string_t x_0_sq_ = _self->x_0_sq_; /* string */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_1, _ctx);kk_expr__expr_dup(e2_0_0, _ctx);kk_std_core_types__list_dup(us_0_sq_, _ctx);kk_string_dup(x_0_sq_, _ctx);}, {}, _ctx)
  kk_expr__uexpr _trmc_x10006_0_91 = kk_expr__uexpr_unbox(_b_x89, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x404 = kk_expr__mlift_trmc_uniquify_10053_sq_(_acc_1, e2_0_0, us_0_sq_, x_0_sq_, _trmc_x10006_0_91, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x404, _ctx);
}

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10054_sq_(kk_std_core_types__cctx _acc_1, kk_expr__expr e1_0, kk_expr__expr e2_0_0, kk_std_core_types__list us_0, kk_string_t x, kk_string_t x_0_sq_, kk_context_t* _ctx) { /* (ctx<uexpr>, e1@0 : expr, e2@0 : expr, us : usubst, x : string, x' : string) -> <unique,div,exn> uexpr */ 
  kk_std_core_types__list us_0_sq_;
  kk_std_core_types__list _x_x396 = kk_std_core_types__list_dup(us_0, _ctx); /*expr/usubst*/
  kk_std_core_types__list _x_x397;
  kk_box_t _x_x398;
  kk_std_core_types__tuple2 _x_x399;
  kk_box_t _x_x400;
  kk_string_t _x_x401 = kk_string_dup(x_0_sq_, _ctx); /*string*/
  _x_x400 = kk_string_box(_x_x401); /*3120*/
  _x_x399 = kk_std_core_types__new_Tuple2(kk_string_box(x), _x_x400, _ctx); /*(3119, 3120)*/
  _x_x398 = kk_std_core_types__tuple2_box(_x_x399, _ctx); /*1024*/
  _x_x397 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x398, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  us_0_sq_ = kk_std_core_list_append(_x_x396, _x_x397, _ctx); /*list<(string, expr/uid)>*/
  kk_expr__uexpr x_0_10077 = kk_expr_uniquify_sq_(e1_0, us_0, _ctx); /*expr/uexpr*/;
  if (kk_yielding(kk_context())) {
    kk_expr__uexpr_drop(x_0_10077, _ctx);
    kk_box_t _x_x402 = kk_std_core_hnd_yield_extend(kk_expr__new_mlift_trmc_uniquify_10054_fun403_sq_(_acc_1, e2_0_0, us_0_sq_, x_0_sq_, _ctx), _ctx); /*3003*/
    return kk_expr__uexpr_unbox(_x_x402, KK_OWNED, _ctx);
  }
  {
    return kk_expr__mlift_trmc_uniquify_10053_sq_(_acc_1, e2_0_0, us_0_sq_, x_0_sq_, x_0_10077, _ctx);
  }
}
 
// monadic lift

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10055_sq_(kk_std_core_types__cctx _acc_2, kk_string_t a, kk_expr__expr body, kk_std_core_types__list us_1, kk_string_t a_sq_, kk_context_t* _ctx) { /* (ctx<uexpr>, a : string, body : expr, us : usubst, a' : string) -> <unique,div,exn> uexpr */ 
  kk_expr__uexpr _trmc_x10009 = kk_datatype_null(); /*expr/uexpr*/;
  kk_expr__uexpr _trmc_x10010;
  kk_string_t _x_x405 = kk_string_dup(a_sq_, _ctx); /*string*/
  _trmc_x10010 = kk_expr__new_ULam(kk_reuse_null, kk_field_index_of(struct kk_expr_ULam, body), _x_x405, _trmc_x10009, _ctx); /*expr/uexpr*/
  kk_field_addr_t _b_x101_108 = kk_field_addr_create(&kk_expr__as_ULam(_trmc_x10010, _ctx)->body, _ctx); /*@field-addr<expr/uexpr>*/;
  kk_std_core_types__tuple2 _b_x94_102 = kk_std_core_types__new_Tuple2(kk_string_box(a), kk_string_box(a_sq_), _ctx); /*(string, string)*/;
  kk_std_core_types__list _b_x95_103 = kk_std_core_types__new_Nil(_ctx); /*list<(string, string)>*/;
  kk_std_core_types__list _x_x406;
  kk_std_core_types__list _x_x407 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__tuple2_box(_b_x94_102, _ctx), _b_x95_103, _ctx); /*list<1024>*/
  _x_x406 = kk_std_core_list_append(us_1, _x_x407, _ctx); /*list<1001>*/
  kk_std_core_types__cctx _x_x408 = kk_cctx_extend(_acc_2,(kk_expr__uexpr_box(_trmc_x10010, _ctx)),_b_x101_108,kk_context()); /*ctx<0>*/
  return kk_expr__trmc_uniquify_sq_(body, _x_x406, _x_x408, _ctx);
}
 
// monadic lift

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10056_sq_(kk_std_core_types__cctx _acc_3, kk_expr__uexpr _y_x10030, kk_context_t* _ctx) { /* (ctx<uexpr>, uexpr) -> <exn,div,unique> uexpr */ 
  kk_box_t _x_x409 = kk_cctx_apply(_acc_3,(kk_expr__uexpr_box(_y_x10030, _ctx)),kk_context()); /*-1*/
  return kk_expr__uexpr_unbox(_x_x409, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_expr__mlift_trmc_uniquify_10057_fun417__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__mlift_trmc_uniquify_10057_fun417_sq_(kk_function_t _fself, kk_box_t _b_x127, kk_box_t _b_x128, kk_context_t* _ctx);
static kk_function_t kk_expr__new_mlift_trmc_uniquify_10057_fun417_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__mlift_trmc_uniquify_10057_fun417_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__mlift_trmc_uniquify_10057_fun417_sq_(kk_function_t _fself, kk_box_t _b_x127, kk_box_t _b_x128, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x418 = kk_string_unbox(_b_x127); /*string*/
  kk_std_core_types__optional _x_x419 = kk_std_core_types__optional_unbox(_b_x128, KK_OWNED, _ctx); /*? exception-info*/
  return kk_std_core_exn_throw(_x_x418, _x_x419, _ctx);
}


// lift anonymous function
struct kk_expr__mlift_trmc_uniquify_10057_fun421__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_4;
};
static kk_box_t kk_expr__mlift_trmc_uniquify_10057_fun421_sq_(kk_function_t _fself, kk_box_t _b_x136, kk_context_t* _ctx);
static kk_function_t kk_expr__new_mlift_trmc_uniquify_10057_fun421_sq_(kk_std_core_types__cctx _acc_4, kk_context_t* _ctx) {
  struct kk_expr__mlift_trmc_uniquify_10057_fun421__t_sq_* _self = kk_function_alloc_as(struct kk_expr__mlift_trmc_uniquify_10057_fun421__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__mlift_trmc_uniquify_10057_fun421_sq_, kk_context());
  _self->_acc_4 = _acc_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__mlift_trmc_uniquify_10057_fun421_sq_(kk_function_t _fself, kk_box_t _b_x136, kk_context_t* _ctx) {
  struct kk_expr__mlift_trmc_uniquify_10057_fun421__t_sq_* _self = kk_function_as(struct kk_expr__mlift_trmc_uniquify_10057_fun421__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_4 = _self->_acc_4; /* ctx<expr/uexpr> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_4, _ctx);}, {}, _ctx)
  kk_expr__uexpr _y_x10030_0_140 = kk_expr__uexpr_unbox(_b_x136, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x422 = kk_expr__mlift_trmc_uniquify_10056_sq_(_acc_4, _y_x10030_0_140, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x422, _ctx);
}

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10057_sq_(kk_std_core_types__cctx _acc_4, kk_string_t x_0_0, kk_std_core_types__list _y_x10029, kk_context_t* _ctx) { /* (ctx<uexpr>, x@0 : string, list<(string, uid)>) -> <exn,div,unique> uexpr */ 
  kk_std_core_types__maybe _match_x285 = kk_std_core_list_last(_y_x10029, _ctx); /*maybe<1001>*/;
  if (kk_std_core_types__is_Just(_match_x285, _ctx)) {
    kk_box_t _box_x116 = _match_x285._cons.Just.value;
    kk_std_core_types__tuple2 _pat_7 = kk_std_core_types__tuple2_unbox(_box_x116, KK_BORROWED, _ctx);
    kk_box_t _box_x117 = _pat_7.fst;
    kk_box_t _box_x118 = _pat_7.snd;
    kk_string_t uid_0_1 = kk_string_unbox(_box_x118);
    kk_string_drop(x_0_0, _ctx);
    kk_string_dup(uid_0_1, _ctx);
    kk_std_core_types__maybe_drop(_match_x285, _ctx);
    kk_box_t _x_x410;
    kk_box_t _x_x411;
    kk_expr__uexpr _x_x412 = kk_expr__new_UVar(kk_reuse_null, 0, uid_0_1, _ctx); /*expr/uexpr*/
    _x_x411 = kk_expr__uexpr_box(_x_x412, _ctx); /*-1*/
    _x_x410 = kk_cctx_apply(_acc_4,_x_x411,kk_context()); /*-1*/
    return kk_expr__uexpr_unbox(_x_x410, KK_OWNED, _ctx);
  }
  {
    kk_string_t _x_x1_1_10047;
    kk_string_t _x_x413;
    kk_define_string_literal(, _s_x414, 20, "undefined variable: ", _ctx)
    _x_x413 = kk_string_dup(_s_x414, _ctx); /*string*/
    kk_string_t _x_x415 = kk_std_core_show_string_fs_show(x_0_0, _ctx); /*string*/
    _x_x1_1_10047 = kk_std_core_types__lp__plus__plus__rp_(_x_x413, _x_x415, _ctx); /*string*/
    kk_ssize_t _b_x123_129 = (KK_IZ(0)); /*hnd/ev-index*/;
    kk_expr__uexpr x_1_10079;
    kk_box_t _x_x416 = kk_std_core_hnd__open_at2(_b_x123_129, kk_expr__new_mlift_trmc_uniquify_10057_fun417_sq_(_ctx), kk_string_box(_x_x1_1_10047), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
    x_1_10079 = kk_expr__uexpr_unbox(_x_x416, KK_OWNED, _ctx); /*expr/uexpr*/
    if (kk_yielding(kk_context())) {
      kk_expr__uexpr_drop(x_1_10079, _ctx);
      kk_box_t _x_x420 = kk_std_core_hnd_yield_extend(kk_expr__new_mlift_trmc_uniquify_10057_fun421_sq_(_acc_4, _ctx), _ctx); /*3003*/
      return kk_expr__uexpr_unbox(_x_x420, KK_OWNED, _ctx);
    }
    {
      return kk_expr__mlift_trmc_uniquify_10056_sq_(_acc_4, x_1_10079, _ctx);
    }
  }
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun426__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_expr__expr e2_1;
  kk_std_core_types__list us_2;
};
static kk_box_t kk_expr__trmc_uniquify_fun426_sq_(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun426_sq_(kk_std_core_types__cctx _acc_5, kk_expr__expr e2_1, kk_std_core_types__list us_2, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun426__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun426__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun426_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->e2_1 = e2_1;
  _self->us_2 = us_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun426_sq_(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun426__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun426__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_expr__expr e2_1 = _self->e2_1; /* expr/expr */
  kk_std_core_types__list us_2 = _self->us_2; /* expr/usubst */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_expr__expr_dup(e2_1, _ctx);kk_std_core_types__list_dup(us_2, _ctx);}, {}, _ctx)
  kk_expr__uexpr _trmc_x10003_0_262 = kk_expr__uexpr_unbox(_b_x142, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x427 = kk_expr__mlift_trmc_uniquify_10052_sq_(_acc_5, e2_1, us_2, _trmc_x10003_0_262, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x427, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun431__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__trmc_uniquify_fun431_sq_(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun431_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__trmc_uniquify_fun431_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun431_sq_(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x432;
  kk_string_t _x_x433 = kk_string_unbox(_b_x152); /*string*/
  _x_x432 = kk_expr_uid(_x_x433, _ctx); /*string*/
  return kk_string_box(_x_x432);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun437__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_expr__expr e1_0_0;
  kk_expr__expr e2_0_1;
  kk_std_core_types__list us_2;
  kk_string_t x_3;
};
static kk_box_t kk_expr__trmc_uniquify_fun437_sq_(kk_function_t _fself, kk_box_t _b_x157, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun437_sq_(kk_std_core_types__cctx _acc_5, kk_expr__expr e1_0_0, kk_expr__expr e2_0_1, kk_std_core_types__list us_2, kk_string_t x_3, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun437__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun437__t_sq_, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun437_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->e1_0_0 = e1_0_0;
  _self->e2_0_1 = e2_0_1;
  _self->us_2 = us_2;
  _self->x_3 = x_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun437_sq_(kk_function_t _fself, kk_box_t _b_x157, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun437__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun437__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_expr__expr e1_0_0 = _self->e1_0_0; /* expr/expr */
  kk_expr__expr e2_0_1 = _self->e2_0_1; /* expr/expr */
  kk_std_core_types__list us_2 = _self->us_2; /* expr/usubst */
  kk_string_t x_3 = _self->x_3; /* string */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_expr__expr_dup(e1_0_0, _ctx);kk_expr__expr_dup(e2_0_1, _ctx);kk_std_core_types__list_dup(us_2, _ctx);kk_string_dup(x_3, _ctx);}, {}, _ctx)
  kk_string_t x_1_263_sq_ = kk_string_unbox(_b_x157); /*string*/;
  kk_expr__uexpr _x_x438 = kk_expr__mlift_trmc_uniquify_10054_sq_(_acc_5, e1_0_0, e2_0_1, us_2, x_3, x_1_263_sq_, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x438, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun446__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_expr__expr e2_0_1;
  kk_std_core_types__list us_1_sq_;
  kk_string_t x_4_10084;
};
static kk_box_t kk_expr__trmc_uniquify_fun446_sq_(kk_function_t _fself, kk_box_t _b_x167, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun446_sq_(kk_std_core_types__cctx _acc_5, kk_expr__expr e2_0_1, kk_std_core_types__list us_1_sq_, kk_string_t x_4_10084, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun446__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun446__t_sq_, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun446_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->e2_0_1 = e2_0_1;
  _self->us_1_sq_ = us_1_sq_;
  _self->x_4_10084 = x_4_10084;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun446_sq_(kk_function_t _fself, kk_box_t _b_x167, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun446__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun446__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_expr__expr e2_0_1 = _self->e2_0_1; /* expr/expr */
  kk_std_core_types__list us_1_sq_ = _self->us_1_sq_; /* list<(string, expr/uid)> */
  kk_string_t x_4_10084 = _self->x_4_10084; /* string */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_expr__expr_dup(e2_0_1, _ctx);kk_std_core_types__list_dup(us_1_sq_, _ctx);kk_string_dup(x_4_10084, _ctx);}, {}, _ctx)
  kk_expr__uexpr _trmc_x10006_1_264 = kk_expr__uexpr_unbox(_b_x167, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x447 = kk_expr__mlift_trmc_uniquify_10053_sq_(_acc_5, e2_0_1, us_1_sq_, x_4_10084, _trmc_x10006_1_264, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x447, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun451__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__trmc_uniquify_fun451_sq_(kk_function_t _fself, kk_box_t _b_x177, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun451_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__trmc_uniquify_fun451_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun451_sq_(kk_function_t _fself, kk_box_t _b_x177, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x452;
  kk_string_t _x_x453 = kk_string_unbox(_b_x177); /*string*/
  _x_x452 = kk_expr_uid(_x_x453, _ctx); /*string*/
  return kk_string_box(_x_x452);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun457__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_string_t a_0;
  kk_expr__expr body_0;
  kk_std_core_types__list us_2;
};
static kk_box_t kk_expr__trmc_uniquify_fun457_sq_(kk_function_t _fself, kk_box_t _b_x182, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun457_sq_(kk_std_core_types__cctx _acc_5, kk_string_t a_0, kk_expr__expr body_0, kk_std_core_types__list us_2, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun457__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun457__t_sq_, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun457_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->a_0 = a_0;
  _self->body_0 = body_0;
  _self->us_2 = us_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun457_sq_(kk_function_t _fself, kk_box_t _b_x182, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun457__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun457__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_string_t a_0 = _self->a_0; /* string */
  kk_expr__expr body_0 = _self->body_0; /* expr/expr */
  kk_std_core_types__list us_2 = _self->us_2; /* expr/usubst */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_string_dup(a_0, _ctx);kk_expr__expr_dup(body_0, _ctx);kk_std_core_types__list_dup(us_2, _ctx);}, {}, _ctx)
  kk_string_t a_0_265_sq_ = kk_string_unbox(_b_x182); /*string*/;
  kk_expr__uexpr _x_x458 = kk_expr__mlift_trmc_uniquify_10055_sq_(_acc_5, a_0, body_0, us_2, a_0_265_sq_, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x458, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun470__t_sq_ {
  struct kk_function_s _base;
  kk_string_t x_0_1;
};
static bool kk_expr__trmc_uniquify_fun470_sq_(kk_function_t _fself, kk_box_t _b_x199, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun470_sq_(kk_string_t x_0_1, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun470__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun470__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun470_sq_, kk_context());
  _self->x_0_1 = x_0_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_expr__trmc_uniquify_fun470_sq_(kk_function_t _fself, kk_box_t _b_x199, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun470__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun470__t_sq_*, _fself, _ctx);
  kk_string_t x_0_1 = _self->x_0_1; /* string */
  kk_drop_match(_self, {kk_string_dup(x_0_1, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x280 = kk_std_core_types__tuple2_unbox(_b_x199, KK_OWNED, _ctx); /*(string, expr/uid)*/;
  {
    kk_box_t _box_x195 = _match_x280.fst;
    kk_box_t _box_x196 = _match_x280.snd;
    kk_string_t x_0_0_sq_ = kk_string_unbox(_box_x195);
    kk_string_dup(x_0_0_sq_, _ctx);
    kk_std_core_types__tuple2_drop(_match_x280, _ctx);
    return kk_string_is_eq(x_0_1,x_0_0_sq_,kk_context());
  }
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun472__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_string_t x_0_1;
};
static kk_box_t kk_expr__trmc_uniquify_fun472_sq_(kk_function_t _fself, kk_box_t _b_x204, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun472_sq_(kk_std_core_types__cctx _acc_5, kk_string_t x_0_1, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun472__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun472__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun472_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->x_0_1 = x_0_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun472_sq_(kk_function_t _fself, kk_box_t _b_x204, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun472__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun472__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_string_t x_0_1 = _self->x_0_1; /* string */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_string_dup(x_0_1, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10029_0_266 = kk_std_core_types__list_unbox(_b_x204, KK_OWNED, _ctx); /*list<(string, expr/uid)>*/;
  kk_expr__uexpr _x_x473 = kk_expr__mlift_trmc_uniquify_10057_sq_(_acc_5, x_0_1, _y_x10029_0_266, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x473, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun481__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__trmc_uniquify_fun481_sq_(kk_function_t _fself, kk_box_t _b_x216, kk_box_t _b_x217, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun481_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__trmc_uniquify_fun481_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun481_sq_(kk_function_t _fself, kk_box_t _b_x216, kk_box_t _b_x217, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x482 = kk_string_unbox(_b_x216); /*string*/
  kk_std_core_types__optional _x_x483 = kk_std_core_types__optional_unbox(_b_x217, KK_OWNED, _ctx); /*? exception-info*/
  return kk_std_core_exn_throw(_x_x482, _x_x483, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun485__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
};
static kk_box_t kk_expr__trmc_uniquify_fun485_sq_(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun485_sq_(kk_std_core_types__cctx _acc_5, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun485__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun485__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun485_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun485_sq_(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun485__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun485__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);}, {}, _ctx)
  kk_expr__uexpr _y_x10030_1_267 = kk_expr__uexpr_unbox(_b_x225, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x486 = kk_expr__mlift_trmc_uniquify_10056_sq_(_acc_5, _y_x10030_1_267, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x486, _ctx);
}

kk_expr__uexpr kk_expr__trmc_uniquify_sq_(kk_expr__expr e, kk_std_core_types__list us_2, kk_std_core_types__cctx _acc_5, kk_context_t* _ctx) { /* (e : expr, us : usubst, ctx<uexpr>) -> <pure,unique> uexpr */ 
  kk__tailcall: ;
  if (kk_expr__is_App(e, _ctx)) {
    struct kk_expr_App* _con_x423 = kk_expr__as_App(e, _ctx);
    kk_expr__expr e1 = _con_x423->e1;
    kk_expr__expr e2_1 = _con_x423->e2;
    kk_reuse_t _ru_x300 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x300 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_expr__expr_dup(e1, _ctx);
      kk_expr__expr_dup(e2_1, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_expr__uexpr x_2_10081;
    kk_std_core_types__list _x_x424 = kk_std_core_types__list_dup(us_2, _ctx); /*expr/usubst*/
    x_2_10081 = kk_expr_uniquify_sq_(e1, _x_x424, _ctx); /*expr/uexpr*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x300,kk_context());
      kk_expr__uexpr_drop(x_2_10081, _ctx);
      kk_box_t _x_x425 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun426_sq_(_acc_5, e2_1, us_2, _ctx), _ctx); /*3003*/
      return kk_expr__uexpr_unbox(_x_x425, KK_OWNED, _ctx);
    }
    {
      kk_expr__uexpr _trmc_x10004_0 = kk_datatype_null(); /*expr/uexpr*/;
      kk_expr__uexpr _trmc_x10005_0 = kk_expr__new_UApp(_ru_x300, kk_field_index_of(struct kk_expr_UApp, e2), x_2_10081, _trmc_x10004_0, _ctx); /*expr/uexpr*/;
      kk_field_addr_t _b_x148_231 = kk_field_addr_create(&kk_expr__as_UApp(_trmc_x10005_0, _ctx)->e2, _ctx); /*@field-addr<expr/uexpr>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x428 = kk_cctx_extend(_acc_5,(kk_expr__uexpr_box(_trmc_x10005_0, _ctx)),_b_x148_231,kk_context()); /*ctx<0>*/
        e = e2_1;
        _acc_5 = _x_x428;
        goto kk__tailcall;
      }
    }
  }
  if (kk_expr__is_Let(e, _ctx)) {
    struct kk_expr_Let* _con_x429 = kk_expr__as_Let(e, _ctx);
    kk_string_t x_3 = _con_x429->x;
    kk_expr__expr e1_0_0 = _con_x429->e1;
    kk_expr__expr e2_0_1 = _con_x429->e2;
    kk_reuse_t _ru_x301 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x301 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_expr__expr_dup(e1_0_0, _ctx);
      kk_expr__expr_dup(e2_0_1, _ctx);
      kk_string_dup(x_3, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_ssize_t _b_x149_153 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_string_t x_4_10084;
    kk_box_t _x_x430;
    kk_box_t _x_x434;
    kk_string_t _x_x435 = kk_string_dup(x_3, _ctx); /*string*/
    _x_x434 = kk_string_box(_x_x435); /*1000*/
    _x_x430 = kk_std_core_hnd__open_at1(_b_x149_153, kk_expr__new_trmc_uniquify_fun431_sq_(_ctx), _x_x434, _ctx); /*1001*/
    x_4_10084 = kk_string_unbox(_x_x430); /*string*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x301,kk_context());
      kk_string_drop(x_4_10084, _ctx);
      kk_box_t _x_x436 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun437_sq_(_acc_5, e1_0_0, e2_0_1, us_2, x_3, _ctx), _ctx); /*3003*/
      return kk_expr__uexpr_unbox(_x_x436, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list us_1_sq_;
      kk_std_core_types__list _x_x439 = kk_std_core_types__list_dup(us_2, _ctx); /*expr/usubst*/
      kk_std_core_types__list _x_x440;
      kk_box_t _x_x441;
      kk_std_core_types__tuple2 _x_x442;
      kk_box_t _x_x443;
      kk_string_t _x_x444 = kk_string_dup(x_4_10084, _ctx); /*string*/
      _x_x443 = kk_string_box(_x_x444); /*3120*/
      _x_x442 = kk_std_core_types__new_Tuple2(kk_string_box(x_3), _x_x443, _ctx); /*(3119, 3120)*/
      _x_x441 = kk_std_core_types__tuple2_box(_x_x442, _ctx); /*1024*/
      _x_x440 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x441, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
      us_1_sq_ = kk_std_core_list_append(_x_x439, _x_x440, _ctx); /*list<(string, expr/uid)>*/
      kk_expr__uexpr x_5_10087 = kk_expr_uniquify_sq_(e1_0_0, us_2, _ctx); /*expr/uexpr*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x301,kk_context());
        kk_expr__uexpr_drop(x_5_10087, _ctx);
        kk_box_t _x_x445 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun446_sq_(_acc_5, e2_0_1, us_1_sq_, x_4_10084, _ctx), _ctx); /*3003*/
        return kk_expr__uexpr_unbox(_x_x445, KK_OWNED, _ctx);
      }
      {
        kk_expr__uexpr _trmc_x10007_0 = kk_datatype_null(); /*expr/uexpr*/;
        kk_expr__uexpr _trmc_x10008_0 = kk_expr__new_ULet(_ru_x301, kk_field_index_of(struct kk_expr_ULet, e2), x_4_10084, x_5_10087, _trmc_x10007_0, _ctx); /*expr/uexpr*/;
        kk_field_addr_t _b_x173_239 = kk_field_addr_create(&kk_expr__as_ULet(_trmc_x10008_0, _ctx)->e2, _ctx); /*@field-addr<expr/uexpr>*/;
        { // tailcall
          kk_std_core_types__cctx _x_x448 = kk_cctx_extend(_acc_5,(kk_expr__uexpr_box(_trmc_x10008_0, _ctx)),_b_x173_239,kk_context()); /*ctx<0>*/
          e = e2_0_1;
          us_2 = us_1_sq_;
          _acc_5 = _x_x448;
          goto kk__tailcall;
        }
      }
    }
  }
  if (kk_expr__is_Lam(e, _ctx)) {
    struct kk_expr_Lam* _con_x449 = kk_expr__as_Lam(e, _ctx);
    kk_string_t a_0 = _con_x449->a;
    kk_expr__expr body_0 = _con_x449->body;
    kk_reuse_t _ru_x302 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x302 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_string_dup(a_0, _ctx);
      kk_expr__expr_dup(body_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_ssize_t _b_x174_178 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_string_t x_6_10090;
    kk_box_t _x_x450;
    kk_box_t _x_x454;
    kk_string_t _x_x455 = kk_string_dup(a_0, _ctx); /*string*/
    _x_x454 = kk_string_box(_x_x455); /*1000*/
    _x_x450 = kk_std_core_hnd__open_at1(_b_x174_178, kk_expr__new_trmc_uniquify_fun451_sq_(_ctx), _x_x454, _ctx); /*1001*/
    x_6_10090 = kk_string_unbox(_x_x450); /*string*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x302,kk_context());
      kk_string_drop(x_6_10090, _ctx);
      kk_box_t _x_x456 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun457_sq_(_acc_5, a_0, body_0, us_2, _ctx), _ctx); /*3003*/
      return kk_expr__uexpr_unbox(_x_x456, KK_OWNED, _ctx);
    }
    {
      kk_expr__uexpr _trmc_x10009_0 = kk_datatype_null(); /*expr/uexpr*/;
      kk_expr__uexpr _trmc_x10010_0;
      kk_string_t _x_x459 = kk_string_dup(x_6_10090, _ctx); /*string*/
      _trmc_x10010_0 = kk_expr__new_ULam(_ru_x302, kk_field_index_of(struct kk_expr_ULam, body), _x_x459, _trmc_x10009_0, _ctx); /*expr/uexpr*/
      kk_field_addr_t _b_x192_250 = kk_field_addr_create(&kk_expr__as_ULam(_trmc_x10010_0, _ctx)->body, _ctx); /*@field-addr<expr/uexpr>*/;
      kk_std_core_types__tuple2 _b_x185_244 = kk_std_core_types__new_Tuple2(kk_string_box(a_0), kk_string_box(x_6_10090), _ctx); /*(string, string)*/;
      kk_std_core_types__list _b_x186_245 = kk_std_core_types__new_Nil(_ctx); /*list<(string, string)>*/;
      { // tailcall
        kk_std_core_types__list _x_x460;
        kk_std_core_types__list _x_x461 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__tuple2_box(_b_x185_244, _ctx), _b_x186_245, _ctx); /*list<1024>*/
        _x_x460 = kk_std_core_list_append(us_2, _x_x461, _ctx); /*list<1001>*/
        kk_std_core_types__cctx _x_x462 = kk_cctx_extend(_acc_5,(kk_expr__uexpr_box(_trmc_x10010_0, _ctx)),_b_x192_250,kk_context()); /*ctx<0>*/
        e = body_0;
        us_2 = _x_x460;
        _acc_5 = _x_x462;
        goto kk__tailcall;
      }
    }
  }
  if (kk_expr__is_Lit(e, _ctx)) {
    struct kk_expr_Lit* _con_x463 = kk_expr__as_Lit(e, _ctx);
    kk_value__value v = _con_x463->v;
    kk_std_core_types__list_drop(us_2, _ctx);
    kk_reuse_t _ru_x303 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x303 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_value__value_dup(v, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_box_t _x_x464;
    kk_box_t _x_x465;
    kk_expr__uexpr _x_x466;
    if kk_likely(_ru_x303!=NULL) {
      struct kk_expr_ULit* _con_x467 = (struct kk_expr_ULit*)_ru_x303;
      _con_x467->_base._block.header.tag = (kk_tag_t)((4));
      _x_x466 = kk_expr__base_ULit(_con_x467, _ctx); /*expr/uexpr*/
    }
    else {
      _x_x466 = kk_expr__new_ULit(kk_reuse_null, 0, v, _ctx); /*expr/uexpr*/
    }
    _x_x465 = kk_expr__uexpr_box(_x_x466, _ctx); /*-1*/
    _x_x464 = kk_cctx_apply(_acc_5,_x_x465,kk_context()); /*-1*/
    return kk_expr__uexpr_unbox(_x_x464, KK_OWNED, _ctx);
  }
  {
    struct kk_expr_Var* _con_x468 = kk_expr__as_Var(e, _ctx);
    kk_string_t x_0_1 = _con_x468->x;
    kk_reuse_t _ru_x304 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x304 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_string_dup(x_0_1, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__list x_7_10093;
    kk_function_t _x_x469;
    kk_string_dup(x_0_1, _ctx);
    _x_x469 = kk_expr__new_trmc_uniquify_fun470_sq_(x_0_1, _ctx); /*(1001) -> 1002 bool*/
    x_7_10093 = kk_std_core_list_filter(us_2, _x_x469, _ctx); /*list<(string, expr/uid)>*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x304,kk_context());
      kk_std_core_types__list_drop(x_7_10093, _ctx);
      kk_box_t _x_x471 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun472_sq_(_acc_5, x_0_1, _ctx), _ctx); /*3003*/
      return kk_expr__uexpr_unbox(_x_x471, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__maybe _match_x278 = kk_std_core_list_last(x_7_10093, _ctx); /*maybe<1001>*/;
      if (kk_std_core_types__is_Just(_match_x278, _ctx)) {
        kk_box_t _box_x205 = _match_x278._cons.Just.value;
        kk_std_core_types__tuple2 _pat_7_0 = kk_std_core_types__tuple2_unbox(_box_x205, KK_BORROWED, _ctx);
        kk_box_t _box_x206 = _pat_7_0.fst;
        kk_box_t _box_x207 = _pat_7_0.snd;
        kk_string_t uid_0_1_0 = kk_string_unbox(_box_x207);
        kk_string_drop(x_0_1, _ctx);
        kk_string_dup(uid_0_1_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x278, _ctx);
        kk_box_t _x_x474;
        kk_box_t _x_x475;
        kk_expr__uexpr _x_x476 = kk_expr__new_UVar(_ru_x304, 0, uid_0_1_0, _ctx); /*expr/uexpr*/
        _x_x475 = kk_expr__uexpr_box(_x_x476, _ctx); /*-1*/
        _x_x474 = kk_cctx_apply(_acc_5,_x_x475,kk_context()); /*-1*/
        return kk_expr__uexpr_unbox(_x_x474, KK_OWNED, _ctx);
      }
      {
        kk_reuse_drop(_ru_x304,kk_context());
        kk_string_t _x_x1_1_10047_0;
        kk_string_t _x_x477;
        kk_define_string_literal(, _s_x478, 20, "undefined variable: ", _ctx)
        _x_x477 = kk_string_dup(_s_x478, _ctx); /*string*/
        kk_string_t _x_x479 = kk_std_core_show_string_fs_show(x_0_1, _ctx); /*string*/
        _x_x1_1_10047_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x477, _x_x479, _ctx); /*string*/
        kk_ssize_t _b_x212_218 = (KK_IZ(0)); /*hnd/ev-index*/;
        kk_expr__uexpr x_8_10096;
        kk_box_t _x_x480 = kk_std_core_hnd__open_at2(_b_x212_218, kk_expr__new_trmc_uniquify_fun481_sq_(_ctx), kk_string_box(_x_x1_1_10047_0), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
        x_8_10096 = kk_expr__uexpr_unbox(_x_x480, KK_OWNED, _ctx); /*expr/uexpr*/
        kk_box_t _x_x484;
        if (kk_yielding(kk_context())) {
          kk_expr__uexpr_drop(x_8_10096, _ctx);
          _x_x484 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun485_sq_(_acc_5, _ctx), _ctx); /*3003*/
        }
        else {
          _x_x484 = kk_cctx_apply(_acc_5,(kk_expr__uexpr_box(x_8_10096, _ctx)),kk_context()); /*3003*/
        }
        return kk_expr__uexpr_unbox(_x_x484, KK_OWNED, _ctx);
      }
    }
  }
}

kk_expr__uexpr kk_expr_uniquify_sq_(kk_expr__expr e_0, kk_std_core_types__list us_3, kk_context_t* _ctx) { /* (e : expr, us : usubst) -> <pure,unique> uexpr */ 
  kk_std_core_types__cctx _x_x487 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_expr__trmc_uniquify_sq_(e_0, us_3, _x_x487, _ctx);
}


// lift anonymous function
struct kk_expr_uniquify_fun488__t {
  struct kk_function_s _base;
  kk_expr__expr e;
};
static kk_box_t kk_expr_uniquify_fun488(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uniquify_fun488(kk_expr__expr e, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun488__t* _self = kk_function_alloc_as(struct kk_expr_uniquify_fun488__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr_uniquify_fun488, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_expr_uniquify_fun489__t {
  struct kk_function_s _base;
  kk_expr__expr e;
};
static kk_box_t kk_expr_uniquify_fun489(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uniquify_fun489(kk_expr__expr e, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun489__t* _self = kk_function_alloc_as(struct kk_expr_uniquify_fun489__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr_uniquify_fun489, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr_uniquify_fun489(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun489__t* _self = kk_function_as(struct kk_expr_uniquify_fun489__t*, _fself, _ctx);
  kk_expr__expr e = _self->e; /* expr/expr */
  kk_drop_match(_self, {kk_expr__expr_dup(e, _ctx);}, {}, _ctx)
  kk_expr__uexpr _x_x490 = kk_expr_uniquify_sq_(e, kk_std_core_types__new_Nil(_ctx), _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x490, _ctx);
}
static kk_box_t kk_expr_uniquify_fun488(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun488__t* _self = kk_function_as(struct kk_expr_uniquify_fun488__t*, _fself, _ctx);
  kk_expr__expr e = _self->e; /* expr/expr */
  kk_drop_match(_self, {kk_expr__expr_dup(e, _ctx);}, {}, _ctx)
  return kk_expr_handle_unique(kk_expr_new_uniquify_fun489(e, _ctx), _ctx);
}

kk_std_core_types__either kk_expr_uniquify(kk_expr__expr e, kk_context_t* _ctx) { /* (e : expr) -> div either<exception,uexpr> */ 
  kk_std_core_exn__error t_10002 = kk_std_core_exn_try(kk_expr_new_uniquify_fun488(e, _ctx), _ctx); /*error<expr/uexpr>*/;
  if (kk_std_core_exn__is_Error(t_10002, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10002._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10002, _ctx);
    return kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx);
  }
  {
    kk_box_t _box_x273 = t_10002._cons.Ok.result;
    kk_expr__uexpr x = kk_expr__uexpr_unbox(_box_x273, KK_BORROWED, _ctx);
    kk_expr__uexpr_dup(x, _ctx);
    kk_std_core_exn__error_drop(t_10002, _ctx);
    return kk_std_core_types__new_Right(kk_expr__uexpr_box(x, _ctx), _ctx);
  }
}

// initialization
void kk_expr__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_value__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x352;
    kk_define_string_literal(, _s_x353, 11, "unique@expr", _ctx)
    _x_x352 = kk_string_dup(_s_x353, _ctx); /*string*/
    kk_expr__tag_unique = kk_std_core_hnd__new_Htag(_x_x352, _ctx); /*hnd/htag<expr/unique>*/
  }
}

// termination
void kk_expr__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_expr__tag_unique, _ctx);
  kk_value__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
