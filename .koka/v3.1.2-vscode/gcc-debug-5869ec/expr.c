// Koka generated module: expr, koka version: 3.1.2, platform: 64-bit
#include "expr.h"

kk_string_t kk_expr_show(kk_expr__uexpr e, kk_context_t* _ctx) { /* (e : uexpr) -> div string */ 
  if (kk_expr__is_UApp(e, _ctx)) {
    struct kk_expr_UApp* _con_x351 = kk_expr__as_UApp(e, _ctx);
    kk_expr__uexpr e1 = _con_x351->e1;
    kk_expr__uexpr e2 = _con_x351->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_expr__uexpr_dup(e1, _ctx);
      kk_expr__uexpr_dup(e2, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_string_t _x_x352 = kk_expr_show(e1, _ctx); /*string*/
    kk_string_t _x_x353;
    kk_string_t _x_x354;
    kk_define_string_literal(, _s_x355, 3, " @ ", _ctx)
    _x_x354 = kk_string_dup(_s_x355, _ctx); /*string*/
    kk_string_t _x_x356 = kk_expr_show(e2, _ctx); /*string*/
    _x_x353 = kk_std_core_types__lp__plus__plus__rp_(_x_x354, _x_x356, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x352, _x_x353, _ctx);
  }
  if (kk_expr__is_ULet(e, _ctx)) {
    struct kk_expr_ULet* _con_x357 = kk_expr__as_ULet(e, _ctx);
    kk_string_t x = _con_x357->x;
    kk_expr__uexpr e1_0 = _con_x357->e1;
    kk_expr__uexpr e2_0 = _con_x357->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_expr__uexpr_dup(e1_0, _ctx);
      kk_expr__uexpr_dup(e2_0, _ctx);
      kk_string_dup(x, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_string_t _x_x358;
    kk_define_string_literal(, _s_x359, 4, "let ", _ctx)
    _x_x358 = kk_string_dup(_s_x359, _ctx); /*string*/
    kk_string_t _x_x360;
    kk_string_t _x_x361 = kk_std_core_show_string_fs_show(x, _ctx); /*string*/
    kk_string_t _x_x362;
    kk_string_t _x_x363;
    kk_define_string_literal(, _s_x364, 3, " = ", _ctx)
    _x_x363 = kk_string_dup(_s_x364, _ctx); /*string*/
    kk_string_t _x_x365;
    kk_string_t _x_x366 = kk_expr_show(e1_0, _ctx); /*string*/
    kk_string_t _x_x367;
    kk_string_t _x_x368;
    kk_define_string_literal(, _s_x369, 4, " in ", _ctx)
    _x_x368 = kk_string_dup(_s_x369, _ctx); /*string*/
    kk_string_t _x_x370 = kk_expr_show(e2_0, _ctx); /*string*/
    _x_x367 = kk_std_core_types__lp__plus__plus__rp_(_x_x368, _x_x370, _ctx); /*string*/
    _x_x365 = kk_std_core_types__lp__plus__plus__rp_(_x_x366, _x_x367, _ctx); /*string*/
    _x_x362 = kk_std_core_types__lp__plus__plus__rp_(_x_x363, _x_x365, _ctx); /*string*/
    _x_x360 = kk_std_core_types__lp__plus__plus__rp_(_x_x361, _x_x362, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x358, _x_x360, _ctx);
  }
  if (kk_expr__is_UVar(e, _ctx)) {
    struct kk_expr_UVar* _con_x371 = kk_expr__as_UVar(e, _ctx);
    kk_string_t x_0 = _con_x371->x;
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
    struct kk_expr_ULam* _con_x372 = kk_expr__as_ULam(e, _ctx);
    kk_string_t a = _con_x372->a;
    kk_expr__uexpr body = _con_x372->body;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(a, _ctx);
      kk_expr__uexpr_dup(body, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_string_t _x_x373;
    kk_define_string_literal(, _s_x374, 2, "(\\", _ctx)
    _x_x373 = kk_string_dup(_s_x374, _ctx); /*string*/
    kk_string_t _x_x375;
    kk_string_t _x_x376;
    kk_string_t _x_x377;
    kk_define_string_literal(, _s_x378, 4, " -> ", _ctx)
    _x_x377 = kk_string_dup(_s_x378, _ctx); /*string*/
    kk_string_t _x_x379;
    kk_string_t _x_x380 = kk_expr_show(body, _ctx); /*string*/
    kk_string_t _x_x381;
    kk_define_string_literal(, _s_x382, 1, ")", _ctx)
    _x_x381 = kk_string_dup(_s_x382, _ctx); /*string*/
    _x_x379 = kk_std_core_types__lp__plus__plus__rp_(_x_x380, _x_x381, _ctx); /*string*/
    _x_x376 = kk_std_core_types__lp__plus__plus__rp_(_x_x377, _x_x379, _ctx); /*string*/
    _x_x375 = kk_std_core_types__lp__plus__plus__rp_(a, _x_x376, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x373, _x_x375, _ctx);
  }
  {
    struct kk_expr_ULit* _con_x383 = kk_expr__as_ULit(e, _ctx);
    kk_value__value v = _con_x383->v;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_value__value_dup(v, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    if (kk_value__is_Int(v, _ctx)) {
      struct kk_value_Int* _con_x384 = kk_value__as_Int(v, _ctx);
      kk_integer_t x_1 = _con_x384->x;
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
      struct kk_value_String* _con_x385 = kk_value__as_String(v, _ctx);
      kk_string_t x_0_0 = _con_x385->x;
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
  kk_std_core_hnd__htag _x_x388 = kk_std_core_hnd__htag_dup(kk_expr__tag_unique, _ctx); /*hnd/htag<expr/unique>*/
  return kk_std_core_hnd__hhandle(_x_x388, kk_expr__unique_box(hnd, _ctx), ret, action, _ctx);
}
 
// monadic lift

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10045_sq_(kk_std_core_types__cctx _acc, kk_expr__expr e2, kk_std_core_types__list us, kk_expr__uexpr _trmc_x10004, kk_context_t* _ctx) { /* (ctx<uexpr>, e2 : expr, us : usubst, uexpr) -> <exn,unique,div> uexpr */ 
  kk_expr__uexpr _trmc_x10005 = kk_datatype_null(); /*expr/uexpr*/;
  kk_expr__uexpr _trmc_x10006 = kk_expr__new_UApp(kk_reuse_null, kk_field_index_of(struct kk_expr_UApp, e2), _trmc_x10004, _trmc_x10005, _ctx); /*expr/uexpr*/;
  kk_field_addr_t _b_x29_32 = kk_field_addr_create(&kk_expr__as_UApp(_trmc_x10006, _ctx)->e2, _ctx); /*@field-addr<expr/uexpr>*/;
  kk_std_core_types__cctx _x_x395 = kk_cctx_extend(_acc,(kk_expr__uexpr_box(_trmc_x10006, _ctx)),_b_x29_32,kk_context()); /*ctx<0>*/
  return kk_expr__trmc_uniquify_sq_(e2, us, _x_x395, _ctx);
}
 
// monadic lift

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10046_sq_(kk_std_core_types__cctx _acc_0, kk_expr__expr e2_0, kk_std_core_types__list us_sq_, kk_string_t x_sq_, kk_expr__uexpr _trmc_x10007, kk_context_t* _ctx) { /* (ctx<uexpr>, e2@0 : expr, us' : list<(string, uid)>, x' : uid, uexpr) -> <exn,unique,div> uexpr */ 
  kk_expr__uexpr _trmc_x10008 = kk_datatype_null(); /*expr/uexpr*/;
  kk_expr__uexpr _trmc_x10009 = kk_expr__new_ULet(kk_reuse_null, kk_field_index_of(struct kk_expr_ULet, e2), x_sq_, _trmc_x10007, _trmc_x10008, _ctx); /*expr/uexpr*/;
  kk_field_addr_t _b_x41_44 = kk_field_addr_create(&kk_expr__as_ULet(_trmc_x10009, _ctx)->e2, _ctx); /*@field-addr<expr/uexpr>*/;
  kk_std_core_types__cctx _x_x396 = kk_cctx_extend(_acc_0,(kk_expr__uexpr_box(_trmc_x10009, _ctx)),_b_x41_44,kk_context()); /*ctx<0>*/
  return kk_expr__trmc_uniquify_sq_(e2_0, us_sq_, _x_x396, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_expr__mlift_trmc_uniquify_10047_fun404__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_1;
  kk_expr__expr e2_0_0;
  kk_std_core_types__list us_0_sq_;
  kk_string_t x_0_sq_;
};
static kk_box_t kk_expr__mlift_trmc_uniquify_10047_fun404_sq_(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_expr__new_mlift_trmc_uniquify_10047_fun404_sq_(kk_std_core_types__cctx _acc_1, kk_expr__expr e2_0_0, kk_std_core_types__list us_0_sq_, kk_string_t x_0_sq_, kk_context_t* _ctx) {
  struct kk_expr__mlift_trmc_uniquify_10047_fun404__t_sq_* _self = kk_function_alloc_as(struct kk_expr__mlift_trmc_uniquify_10047_fun404__t_sq_, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__mlift_trmc_uniquify_10047_fun404_sq_, kk_context());
  _self->_acc_1 = _acc_1;
  _self->e2_0_0 = e2_0_0;
  _self->us_0_sq_ = us_0_sq_;
  _self->x_0_sq_ = x_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__mlift_trmc_uniquify_10047_fun404_sq_(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_expr__mlift_trmc_uniquify_10047_fun404__t_sq_* _self = kk_function_as(struct kk_expr__mlift_trmc_uniquify_10047_fun404__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_1 = _self->_acc_1; /* ctx<expr/uexpr> */
  kk_expr__expr e2_0_0 = _self->e2_0_0; /* expr/expr */
  kk_std_core_types__list us_0_sq_ = _self->us_0_sq_; /* list<(string, expr/uid)> */
  kk_string_t x_0_sq_ = _self->x_0_sq_; /* expr/uid */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_1, _ctx);kk_expr__expr_dup(e2_0_0, _ctx);kk_std_core_types__list_dup(us_0_sq_, _ctx);kk_string_dup(x_0_sq_, _ctx);}, {}, _ctx)
  kk_expr__uexpr _trmc_x10007_0_59 = kk_expr__uexpr_unbox(_b_x57, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x405 = kk_expr__mlift_trmc_uniquify_10046_sq_(_acc_1, e2_0_0, us_0_sq_, x_0_sq_, _trmc_x10007_0_59, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x405, _ctx);
}

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10047_sq_(kk_std_core_types__cctx _acc_1, kk_expr__expr e1_0, kk_expr__expr e2_0_0, kk_std_core_types__list us_0, kk_string_t x, kk_string_t x_0_sq_, kk_context_t* _ctx) { /* (ctx<uexpr>, e1@0 : expr, e2@0 : expr, us : usubst, x : string, x' : uid) -> <unique,div,exn> uexpr */ 
  kk_std_core_types__list us_0_sq_;
  kk_std_core_types__list _x_x397 = kk_std_core_types__list_dup(us_0, _ctx); /*expr/usubst*/
  kk_std_core_types__list _x_x398;
  kk_box_t _x_x399;
  kk_std_core_types__tuple2 _x_x400;
  kk_box_t _x_x401;
  kk_string_t _x_x402 = kk_string_dup(x_0_sq_, _ctx); /*expr/uid*/
  _x_x401 = kk_string_box(_x_x402); /*1911*/
  _x_x400 = kk_std_core_types__new_Tuple2(kk_string_box(x), _x_x401, _ctx); /*(1910, 1911)*/
  _x_x399 = kk_std_core_types__tuple2_box(_x_x400, _ctx); /*1863*/
  _x_x398 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x399, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1863>*/
  us_0_sq_ = kk_std_core_list_append(_x_x397, _x_x398, _ctx); /*list<(string, expr/uid)>*/
  kk_expr__uexpr x_0_10056 = kk_expr_uniquify_sq_(e1_0, us_0, _ctx); /*expr/uexpr*/;
  if (kk_yielding(kk_context())) {
    kk_expr__uexpr_drop(x_0_10056, _ctx);
    kk_box_t _x_x403 = kk_std_core_hnd_yield_extend(kk_expr__new_mlift_trmc_uniquify_10047_fun404_sq_(_acc_1, e2_0_0, us_0_sq_, x_0_sq_, _ctx), _ctx); /*2978*/
    return kk_expr__uexpr_unbox(_x_x403, KK_OWNED, _ctx);
  }
  {
    return kk_expr__mlift_trmc_uniquify_10046_sq_(_acc_1, e2_0_0, us_0_sq_, x_0_sq_, x_0_10056, _ctx);
  }
}
 
// monadic lift

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10048_sq_(kk_std_core_types__cctx _acc_2, kk_string_t a, kk_expr__expr body, kk_std_core_types__list us_1, kk_string_t a_sq_, kk_context_t* _ctx) { /* (ctx<uexpr>, a : string, body : expr, us : usubst, a' : uid) -> <unique,div,exn> uexpr */ 
  kk_expr__uexpr _trmc_x10010 = kk_datatype_null(); /*expr/uexpr*/;
  kk_expr__uexpr _trmc_x10011;
  kk_string_t _x_x406 = kk_string_dup(a_sq_, _ctx); /*expr/uid*/
  _trmc_x10011 = kk_expr__new_ULam(kk_reuse_null, kk_field_index_of(struct kk_expr_ULam, body), _x_x406, _trmc_x10010, _ctx); /*expr/uexpr*/
  kk_field_addr_t _b_x69_76 = kk_field_addr_create(&kk_expr__as_ULam(_trmc_x10011, _ctx)->body, _ctx); /*@field-addr<expr/uexpr>*/;
  kk_std_core_types__tuple2 _b_x62_70 = kk_std_core_types__new_Tuple2(kk_string_box(a), kk_string_box(a_sq_), _ctx); /*(string, string)*/;
  kk_std_core_types__list _b_x63_71 = kk_std_core_types__new_Nil(_ctx); /*list<(string, string)>*/;
  kk_std_core_types__list _x_x407;
  kk_std_core_types__list _x_x408 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__tuple2_box(_b_x62_70, _ctx), _b_x63_71, _ctx); /*list<1863>*/
  _x_x407 = kk_std_core_list_append(us_1, _x_x408, _ctx); /*list<1016>*/
  kk_std_core_types__cctx _x_x409 = kk_cctx_extend(_acc_2,(kk_expr__uexpr_box(_trmc_x10011, _ctx)),_b_x69_76,kk_context()); /*ctx<0>*/
  return kk_expr__trmc_uniquify_sq_(body, _x_x407, _x_x409, _ctx);
}
 
// monadic lift

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10049_sq_(kk_std_core_types__cctx _acc_3, kk_expr__uexpr _y_x10025, kk_context_t* _ctx) { /* (ctx<uexpr>, uexpr) -> <exn,div,unique> uexpr */ 
  kk_box_t _x_x410 = kk_cctx_apply(_acc_3,(kk_expr__uexpr_box(_y_x10025, _ctx)),kk_context()); /*-1*/
  return kk_expr__uexpr_unbox(_x_x410, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_expr__mlift_trmc_uniquify_10050_fun418__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__mlift_trmc_uniquify_10050_fun418_sq_(kk_function_t _fself, kk_box_t _b_x95, kk_box_t _b_x96, kk_context_t* _ctx);
static kk_function_t kk_expr__new_mlift_trmc_uniquify_10050_fun418_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__mlift_trmc_uniquify_10050_fun418_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__mlift_trmc_uniquify_10050_fun418_sq_(kk_function_t _fself, kk_box_t _b_x95, kk_box_t _b_x96, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x419 = kk_string_unbox(_b_x95); /*string*/
  kk_std_core_types__optional _x_x420 = kk_std_core_types__optional_unbox(_b_x96, KK_OWNED, _ctx); /*? exception-info*/
  return kk_std_core_exn_throw(_x_x419, _x_x420, _ctx);
}


// lift anonymous function
struct kk_expr__mlift_trmc_uniquify_10050_fun422__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_4;
};
static kk_box_t kk_expr__mlift_trmc_uniquify_10050_fun422_sq_(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx);
static kk_function_t kk_expr__new_mlift_trmc_uniquify_10050_fun422_sq_(kk_std_core_types__cctx _acc_4, kk_context_t* _ctx) {
  struct kk_expr__mlift_trmc_uniquify_10050_fun422__t_sq_* _self = kk_function_alloc_as(struct kk_expr__mlift_trmc_uniquify_10050_fun422__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__mlift_trmc_uniquify_10050_fun422_sq_, kk_context());
  _self->_acc_4 = _acc_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__mlift_trmc_uniquify_10050_fun422_sq_(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx) {
  struct kk_expr__mlift_trmc_uniquify_10050_fun422__t_sq_* _self = kk_function_as(struct kk_expr__mlift_trmc_uniquify_10050_fun422__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_4 = _self->_acc_4; /* ctx<expr/uexpr> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_4, _ctx);}, {}, _ctx)
  kk_expr__uexpr _y_x10025_0_108 = kk_expr__uexpr_unbox(_b_x104, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x423 = kk_expr__mlift_trmc_uniquify_10049_sq_(_acc_4, _y_x10025_0_108, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x423, _ctx);
}

kk_expr__uexpr kk_expr__mlift_trmc_uniquify_10050_sq_(kk_std_core_types__cctx _acc_4, kk_string_t x_0_0, kk_std_core_types__list _y_x10024, kk_context_t* _ctx) { /* (ctx<uexpr>, x@0@0 : string, list<(string, uid)>) -> <exn,div,unique> uexpr */ 
  kk_std_core_types__maybe _match_x321 = kk_std_core_list_last(_y_x10024, _ctx); /*maybe<4650>*/;
  if (kk_std_core_types__is_Just(_match_x321, _ctx)) {
    kk_box_t _box_x84 = _match_x321._cons.Just.value;
    kk_std_core_types__tuple2 _pat_7 = kk_std_core_types__tuple2_unbox(_box_x84, KK_BORROWED, _ctx);
    kk_box_t _box_x85 = _pat_7.fst;
    kk_box_t _box_x86 = _pat_7.snd;
    kk_string_t uid_1 = kk_string_unbox(_box_x86);
    kk_string_drop(x_0_0, _ctx);
    kk_string_dup(uid_1, _ctx);
    kk_std_core_types__maybe_drop(_match_x321, _ctx);
    kk_box_t _x_x411;
    kk_box_t _x_x412;
    kk_expr__uexpr _x_x413 = kk_expr__new_UVar(kk_reuse_null, 0, uid_1, _ctx); /*expr/uexpr*/
    _x_x412 = kk_expr__uexpr_box(_x_x413, _ctx); /*-1*/
    _x_x411 = kk_cctx_apply(_acc_4,_x_x412,kk_context()); /*-1*/
    return kk_expr__uexpr_unbox(_x_x411, KK_OWNED, _ctx);
  }
  {
    kk_string_t _x_x1_1_10042;
    kk_string_t _x_x414;
    kk_define_string_literal(, _s_x415, 20, "undefined variable: ", _ctx)
    _x_x414 = kk_string_dup(_s_x415, _ctx); /*string*/
    kk_string_t _x_x416 = kk_std_core_show_string_fs_show(x_0_0, _ctx); /*string*/
    _x_x1_1_10042 = kk_std_core_types__lp__plus__plus__rp_(_x_x414, _x_x416, _ctx); /*string*/
    kk_ssize_t _b_x91_97 = (KK_IZ(0)); /*hnd/ev-index*/;
    kk_expr__uexpr x_1_10058;
    kk_box_t _x_x417 = kk_std_core_hnd__open_at2(_b_x91_97, kk_expr__new_mlift_trmc_uniquify_10050_fun418_sq_(_ctx), kk_string_box(_x_x1_1_10042), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*9234*/
    x_1_10058 = kk_expr__uexpr_unbox(_x_x417, KK_OWNED, _ctx); /*expr/uexpr*/
    if (kk_yielding(kk_context())) {
      kk_expr__uexpr_drop(x_1_10058, _ctx);
      kk_box_t _x_x421 = kk_std_core_hnd_yield_extend(kk_expr__new_mlift_trmc_uniquify_10050_fun422_sq_(_acc_4, _ctx), _ctx); /*2978*/
      return kk_expr__uexpr_unbox(_x_x421, KK_OWNED, _ctx);
    }
    {
      return kk_expr__mlift_trmc_uniquify_10049_sq_(_acc_4, x_1_10058, _ctx);
    }
  }
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun427__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_expr__expr e2_1;
  kk_std_core_types__list us_2;
};
static kk_box_t kk_expr__trmc_uniquify_fun427_sq_(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun427_sq_(kk_std_core_types__cctx _acc_5, kk_expr__expr e2_1, kk_std_core_types__list us_2, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun427__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun427__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun427_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->e2_1 = e2_1;
  _self->us_2 = us_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun427_sq_(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun427__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun427__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_expr__expr e2_1 = _self->e2_1; /* expr/expr */
  kk_std_core_types__list us_2 = _self->us_2; /* expr/usubst */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_expr__expr_dup(e2_1, _ctx);kk_std_core_types__list_dup(us_2, _ctx);}, {}, _ctx)
  kk_expr__uexpr _trmc_x10004_0_248 = kk_expr__uexpr_unbox(_b_x110, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x428 = kk_expr__mlift_trmc_uniquify_10045_sq_(_acc_5, e2_1, us_2, _trmc_x10004_0_248, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x428, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun432__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__trmc_uniquify_fun432_sq_(kk_function_t _fself, kk_box_t _b_x128, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun432_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__trmc_uniquify_fun432_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun432_sq_(kk_function_t _fself, kk_box_t _b_x128, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10066 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<expr/unique>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x433 = kk_std_core_hnd__as_Ev(ev_10066, _ctx);
    kk_box_t _box_x117 = _con_x433->hnd;
    int32_t m = _con_x433->marker;
    kk_expr__unique h = kk_expr__unique_unbox(_box_x117, KK_BORROWED, _ctx);
    kk_expr__unique_dup(h, _ctx);
    {
      struct kk_expr__Hnd_unique* _con_x434 = kk_expr__as_Hnd_unique(h, _ctx);
      kk_integer_t _pat_0_3 = _con_x434->_cfc;
      kk_std_core_hnd__clause1 _fun_gen = _con_x434->_fun_gen;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_3, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_gen, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x121 = _fun_gen.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x121, (_fun_unbox_x121, m, ev_10066, _b_x128, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun438__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_expr__expr e1_0_0;
  kk_expr__expr e2_0_1;
  kk_std_core_types__list us_2;
  kk_string_t x_3;
};
static kk_box_t kk_expr__trmc_uniquify_fun438_sq_(kk_function_t _fself, kk_box_t _b_x134, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun438_sq_(kk_std_core_types__cctx _acc_5, kk_expr__expr e1_0_0, kk_expr__expr e2_0_1, kk_std_core_types__list us_2, kk_string_t x_3, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun438__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun438__t_sq_, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun438_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->e1_0_0 = e1_0_0;
  _self->e2_0_1 = e2_0_1;
  _self->us_2 = us_2;
  _self->x_3 = x_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun438_sq_(kk_function_t _fself, kk_box_t _b_x134, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun438__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun438__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_expr__expr e1_0_0 = _self->e1_0_0; /* expr/expr */
  kk_expr__expr e2_0_1 = _self->e2_0_1; /* expr/expr */
  kk_std_core_types__list us_2 = _self->us_2; /* expr/usubst */
  kk_string_t x_3 = _self->x_3; /* string */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_expr__expr_dup(e1_0_0, _ctx);kk_expr__expr_dup(e2_0_1, _ctx);kk_std_core_types__list_dup(us_2, _ctx);kk_string_dup(x_3, _ctx);}, {}, _ctx)
  kk_string_t x_1_249_sq_ = kk_string_unbox(_b_x134); /*expr/uid*/;
  kk_expr__uexpr _x_x439 = kk_expr__mlift_trmc_uniquify_10047_sq_(_acc_5, e1_0_0, e2_0_1, us_2, x_3, x_1_249_sq_, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x439, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun447__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_expr__expr e2_0_1;
  kk_std_core_types__list us_1_sq_;
  kk_string_t x_4_10063;
};
static kk_box_t kk_expr__trmc_uniquify_fun447_sq_(kk_function_t _fself, kk_box_t _b_x144, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun447_sq_(kk_std_core_types__cctx _acc_5, kk_expr__expr e2_0_1, kk_std_core_types__list us_1_sq_, kk_string_t x_4_10063, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun447__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun447__t_sq_, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun447_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->e2_0_1 = e2_0_1;
  _self->us_1_sq_ = us_1_sq_;
  _self->x_4_10063 = x_4_10063;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun447_sq_(kk_function_t _fself, kk_box_t _b_x144, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun447__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun447__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_expr__expr e2_0_1 = _self->e2_0_1; /* expr/expr */
  kk_std_core_types__list us_1_sq_ = _self->us_1_sq_; /* list<(string, expr/uid)> */
  kk_string_t x_4_10063 = _self->x_4_10063; /* expr/uid */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_expr__expr_dup(e2_0_1, _ctx);kk_std_core_types__list_dup(us_1_sq_, _ctx);kk_string_dup(x_4_10063, _ctx);}, {}, _ctx)
  kk_expr__uexpr _trmc_x10007_1_250 = kk_expr__uexpr_unbox(_b_x144, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x448 = kk_expr__mlift_trmc_uniquify_10046_sq_(_acc_5, e2_0_1, us_1_sq_, x_4_10063, _trmc_x10007_1_250, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x448, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun452__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__trmc_uniquify_fun452_sq_(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun452_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__trmc_uniquify_fun452_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun452_sq_(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_0_10075 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<expr/unique>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x453 = kk_std_core_hnd__as_Ev(ev_0_10075, _ctx);
    kk_box_t _box_x151 = _con_x453->hnd;
    int32_t m_0 = _con_x453->marker;
    kk_expr__unique h_0 = kk_expr__unique_unbox(_box_x151, KK_BORROWED, _ctx);
    kk_expr__unique_dup(h_0, _ctx);
    {
      struct kk_expr__Hnd_unique* _con_x454 = kk_expr__as_Hnd_unique(h_0, _ctx);
      kk_integer_t _pat_0_6 = _con_x454->_cfc;
      kk_std_core_hnd__clause1 _fun_gen_0 = _con_x454->_fun_gen;
      if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
        kk_integer_drop(_pat_0_6, _ctx);
        kk_datatype_ptr_free(h_0, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_gen_0, _ctx);
        kk_datatype_ptr_decref(h_0, _ctx);
      }
      {
        kk_function_t _fun_unbox_x155 = _fun_gen_0.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x155, (_fun_unbox_x155, m_0, ev_0_10075, _b_x162, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun458__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_string_t a_0;
  kk_expr__expr body_0;
  kk_std_core_types__list us_2;
};
static kk_box_t kk_expr__trmc_uniquify_fun458_sq_(kk_function_t _fself, kk_box_t _b_x168, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun458_sq_(kk_std_core_types__cctx _acc_5, kk_string_t a_0, kk_expr__expr body_0, kk_std_core_types__list us_2, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun458__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun458__t_sq_, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun458_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->a_0 = a_0;
  _self->body_0 = body_0;
  _self->us_2 = us_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun458_sq_(kk_function_t _fself, kk_box_t _b_x168, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun458__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun458__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_string_t a_0 = _self->a_0; /* string */
  kk_expr__expr body_0 = _self->body_0; /* expr/expr */
  kk_std_core_types__list us_2 = _self->us_2; /* expr/usubst */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_string_dup(a_0, _ctx);kk_expr__expr_dup(body_0, _ctx);kk_std_core_types__list_dup(us_2, _ctx);}, {}, _ctx)
  kk_string_t a_0_251_sq_ = kk_string_unbox(_b_x168); /*expr/uid*/;
  kk_expr__uexpr _x_x459 = kk_expr__mlift_trmc_uniquify_10048_sq_(_acc_5, a_0, body_0, us_2, a_0_251_sq_, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x459, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun471__t_sq_ {
  struct kk_function_s _base;
  kk_string_t x_0_0_0;
};
static bool kk_expr__trmc_uniquify_fun471_sq_(kk_function_t _fself, kk_box_t _b_x185, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun471_sq_(kk_string_t x_0_0_0, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun471__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun471__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun471_sq_, kk_context());
  _self->x_0_0_0 = x_0_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_expr__trmc_uniquify_fun471_sq_(kk_function_t _fself, kk_box_t _b_x185, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun471__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun471__t_sq_*, _fself, _ctx);
  kk_string_t x_0_0_0 = _self->x_0_0_0; /* string */
  kk_drop_match(_self, {kk_string_dup(x_0_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x316 = kk_std_core_types__tuple2_unbox(_b_x185, KK_OWNED, _ctx); /*(string, expr/uid)*/;
  {
    kk_box_t _box_x181 = _match_x316.fst;
    kk_box_t _box_x182 = _match_x316.snd;
    kk_string_t x_0_0_sq_ = kk_string_unbox(_box_x181);
    kk_string_dup(x_0_0_sq_, _ctx);
    kk_std_core_types__tuple2_drop(_match_x316, _ctx);
    return kk_string_is_eq(x_0_0_0,x_0_0_sq_,kk_context());
  }
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun473__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
  kk_string_t x_0_0_0;
};
static kk_box_t kk_expr__trmc_uniquify_fun473_sq_(kk_function_t _fself, kk_box_t _b_x190, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun473_sq_(kk_std_core_types__cctx _acc_5, kk_string_t x_0_0_0, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun473__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun473__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun473_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  _self->x_0_0_0 = x_0_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun473_sq_(kk_function_t _fself, kk_box_t _b_x190, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun473__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun473__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_string_t x_0_0_0 = _self->x_0_0_0; /* string */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);kk_string_dup(x_0_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10024_0_252 = kk_std_core_types__list_unbox(_b_x190, KK_OWNED, _ctx); /*list<(string, expr/uid)>*/;
  kk_expr__uexpr _x_x474 = kk_expr__mlift_trmc_uniquify_10050_sq_(_acc_5, x_0_0_0, _y_x10024_0_252, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x474, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun482__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__trmc_uniquify_fun482_sq_(kk_function_t _fself, kk_box_t _b_x202, kk_box_t _b_x203, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun482_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__trmc_uniquify_fun482_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun482_sq_(kk_function_t _fself, kk_box_t _b_x202, kk_box_t _b_x203, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x483 = kk_string_unbox(_b_x202); /*string*/
  kk_std_core_types__optional _x_x484 = kk_std_core_types__optional_unbox(_b_x203, KK_OWNED, _ctx); /*? exception-info*/
  return kk_std_core_exn_throw(_x_x483, _x_x484, _ctx);
}


// lift anonymous function
struct kk_expr__trmc_uniquify_fun486__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_5;
};
static kk_box_t kk_expr__trmc_uniquify_fun486_sq_(kk_function_t _fself, kk_box_t _b_x211, kk_context_t* _ctx);
static kk_function_t kk_expr__new_trmc_uniquify_fun486_sq_(kk_std_core_types__cctx _acc_5, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun486__t_sq_* _self = kk_function_alloc_as(struct kk_expr__trmc_uniquify_fun486__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr__trmc_uniquify_fun486_sq_, kk_context());
  _self->_acc_5 = _acc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr__trmc_uniquify_fun486_sq_(kk_function_t _fself, kk_box_t _b_x211, kk_context_t* _ctx) {
  struct kk_expr__trmc_uniquify_fun486__t_sq_* _self = kk_function_as(struct kk_expr__trmc_uniquify_fun486__t_sq_*, _fself, _ctx);
  kk_std_core_types__cctx _acc_5 = _self->_acc_5; /* ctx<expr/uexpr> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_5, _ctx);}, {}, _ctx)
  kk_expr__uexpr _y_x10025_1_253 = kk_expr__uexpr_unbox(_b_x211, KK_OWNED, _ctx); /*expr/uexpr*/;
  kk_expr__uexpr _x_x487 = kk_expr__mlift_trmc_uniquify_10049_sq_(_acc_5, _y_x10025_1_253, _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x487, _ctx);
}

kk_expr__uexpr kk_expr__trmc_uniquify_sq_(kk_expr__expr e, kk_std_core_types__list us_2, kk_std_core_types__cctx _acc_5, kk_context_t* _ctx) { /* (e : expr, us : usubst, ctx<uexpr>) -> <pure,unique> uexpr */ 
  kk__tailcall: ;
  if (kk_expr__is_App(e, _ctx)) {
    struct kk_expr_App* _con_x424 = kk_expr__as_App(e, _ctx);
    kk_expr__expr e1 = _con_x424->e1;
    kk_expr__expr e2_1 = _con_x424->e2;
    kk_reuse_t _ru_x332 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x332 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_expr__expr_dup(e1, _ctx);
      kk_expr__expr_dup(e2_1, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_expr__uexpr x_2_10060;
    kk_std_core_types__list _x_x425 = kk_std_core_types__list_dup(us_2, _ctx); /*expr/usubst*/
    x_2_10060 = kk_expr_uniquify_sq_(e1, _x_x425, _ctx); /*expr/uexpr*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x332,kk_context());
      kk_expr__uexpr_drop(x_2_10060, _ctx);
      kk_box_t _x_x426 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun427_sq_(_acc_5, e2_1, us_2, _ctx), _ctx); /*2978*/
      return kk_expr__uexpr_unbox(_x_x426, KK_OWNED, _ctx);
    }
    {
      kk_expr__uexpr _trmc_x10005_0 = kk_datatype_null(); /*expr/uexpr*/;
      kk_expr__uexpr _trmc_x10006_0 = kk_expr__new_UApp(_ru_x332, kk_field_index_of(struct kk_expr_UApp, e2), x_2_10060, _trmc_x10005_0, _ctx); /*expr/uexpr*/;
      kk_field_addr_t _b_x116_217 = kk_field_addr_create(&kk_expr__as_UApp(_trmc_x10006_0, _ctx)->e2, _ctx); /*@field-addr<expr/uexpr>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x429 = kk_cctx_extend(_acc_5,(kk_expr__uexpr_box(_trmc_x10006_0, _ctx)),_b_x116_217,kk_context()); /*ctx<0>*/
        e = e2_1;
        _acc_5 = _x_x429;
        goto kk__tailcall;
      }
    }
  }
  if (kk_expr__is_Let(e, _ctx)) {
    struct kk_expr_Let* _con_x430 = kk_expr__as_Let(e, _ctx);
    kk_string_t x_3 = _con_x430->x;
    kk_expr__expr e1_0_0 = _con_x430->e1;
    kk_expr__expr e2_0_1 = _con_x430->e2;
    kk_reuse_t _ru_x333 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x333 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_expr__expr_dup(e1_0_0, _ctx);
      kk_expr__expr_dup(e2_0_1, _ctx);
      kk_string_dup(x_3, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_ssize_t _b_x125_129 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_string_t x_4_10063;
    kk_box_t _x_x431;
    kk_box_t _x_x435;
    kk_string_t _x_x436 = kk_string_dup(x_3, _ctx); /*string*/
    _x_x435 = kk_string_box(_x_x436); /*9123*/
    _x_x431 = kk_std_core_hnd__open_at1(_b_x125_129, kk_expr__new_trmc_uniquify_fun432_sq_(_ctx), _x_x435, _ctx); /*9124*/
    x_4_10063 = kk_string_unbox(_x_x431); /*expr/uid*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x333,kk_context());
      kk_string_drop(x_4_10063, _ctx);
      kk_box_t _x_x437 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun438_sq_(_acc_5, e1_0_0, e2_0_1, us_2, x_3, _ctx), _ctx); /*2978*/
      return kk_expr__uexpr_unbox(_x_x437, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list us_1_sq_;
      kk_std_core_types__list _x_x440 = kk_std_core_types__list_dup(us_2, _ctx); /*expr/usubst*/
      kk_std_core_types__list _x_x441;
      kk_box_t _x_x442;
      kk_std_core_types__tuple2 _x_x443;
      kk_box_t _x_x444;
      kk_string_t _x_x445 = kk_string_dup(x_4_10063, _ctx); /*expr/uid*/
      _x_x444 = kk_string_box(_x_x445); /*1911*/
      _x_x443 = kk_std_core_types__new_Tuple2(kk_string_box(x_3), _x_x444, _ctx); /*(1910, 1911)*/
      _x_x442 = kk_std_core_types__tuple2_box(_x_x443, _ctx); /*1863*/
      _x_x441 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x442, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1863>*/
      us_1_sq_ = kk_std_core_list_append(_x_x440, _x_x441, _ctx); /*list<(string, expr/uid)>*/
      kk_expr__uexpr x_6_10069 = kk_expr_uniquify_sq_(e1_0_0, us_2, _ctx); /*expr/uexpr*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x333,kk_context());
        kk_expr__uexpr_drop(x_6_10069, _ctx);
        kk_box_t _x_x446 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun447_sq_(_acc_5, e2_0_1, us_1_sq_, x_4_10063, _ctx), _ctx); /*2978*/
        return kk_expr__uexpr_unbox(_x_x446, KK_OWNED, _ctx);
      }
      {
        kk_expr__uexpr _trmc_x10008_0 = kk_datatype_null(); /*expr/uexpr*/;
        kk_expr__uexpr _trmc_x10009_0 = kk_expr__new_ULet(_ru_x333, kk_field_index_of(struct kk_expr_ULet, e2), x_4_10063, x_6_10069, _trmc_x10008_0, _ctx); /*expr/uexpr*/;
        kk_field_addr_t _b_x150_225 = kk_field_addr_create(&kk_expr__as_ULet(_trmc_x10009_0, _ctx)->e2, _ctx); /*@field-addr<expr/uexpr>*/;
        { // tailcall
          kk_std_core_types__cctx _x_x449 = kk_cctx_extend(_acc_5,(kk_expr__uexpr_box(_trmc_x10009_0, _ctx)),_b_x150_225,kk_context()); /*ctx<0>*/
          e = e2_0_1;
          us_2 = us_1_sq_;
          _acc_5 = _x_x449;
          goto kk__tailcall;
        }
      }
    }
  }
  if (kk_expr__is_Lam(e, _ctx)) {
    struct kk_expr_Lam* _con_x450 = kk_expr__as_Lam(e, _ctx);
    kk_string_t a_0 = _con_x450->a;
    kk_expr__expr body_0 = _con_x450->body;
    kk_reuse_t _ru_x335 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x335 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_string_dup(a_0, _ctx);
      kk_expr__expr_dup(body_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_ssize_t _b_x159_163 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_string_t x_7_10072;
    kk_box_t _x_x451;
    kk_box_t _x_x455;
    kk_string_t _x_x456 = kk_string_dup(a_0, _ctx); /*string*/
    _x_x455 = kk_string_box(_x_x456); /*9123*/
    _x_x451 = kk_std_core_hnd__open_at1(_b_x159_163, kk_expr__new_trmc_uniquify_fun452_sq_(_ctx), _x_x455, _ctx); /*9124*/
    x_7_10072 = kk_string_unbox(_x_x451); /*expr/uid*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x335,kk_context());
      kk_string_drop(x_7_10072, _ctx);
      kk_box_t _x_x457 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun458_sq_(_acc_5, a_0, body_0, us_2, _ctx), _ctx); /*2978*/
      return kk_expr__uexpr_unbox(_x_x457, KK_OWNED, _ctx);
    }
    {
      kk_expr__uexpr _trmc_x10010_0 = kk_datatype_null(); /*expr/uexpr*/;
      kk_expr__uexpr _trmc_x10011_0;
      kk_string_t _x_x460 = kk_string_dup(x_7_10072, _ctx); /*expr/uid*/
      _trmc_x10011_0 = kk_expr__new_ULam(_ru_x335, kk_field_index_of(struct kk_expr_ULam, body), _x_x460, _trmc_x10010_0, _ctx); /*expr/uexpr*/
      kk_field_addr_t _b_x178_236 = kk_field_addr_create(&kk_expr__as_ULam(_trmc_x10011_0, _ctx)->body, _ctx); /*@field-addr<expr/uexpr>*/;
      kk_std_core_types__tuple2 _b_x171_230 = kk_std_core_types__new_Tuple2(kk_string_box(a_0), kk_string_box(x_7_10072), _ctx); /*(string, string)*/;
      kk_std_core_types__list _b_x172_231 = kk_std_core_types__new_Nil(_ctx); /*list<(string, string)>*/;
      { // tailcall
        kk_std_core_types__list _x_x461;
        kk_std_core_types__list _x_x462 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__tuple2_box(_b_x171_230, _ctx), _b_x172_231, _ctx); /*list<1863>*/
        _x_x461 = kk_std_core_list_append(us_2, _x_x462, _ctx); /*list<1016>*/
        kk_std_core_types__cctx _x_x463 = kk_cctx_extend(_acc_5,(kk_expr__uexpr_box(_trmc_x10011_0, _ctx)),_b_x178_236,kk_context()); /*ctx<0>*/
        e = body_0;
        us_2 = _x_x461;
        _acc_5 = _x_x463;
        goto kk__tailcall;
      }
    }
  }
  if (kk_expr__is_Lit(e, _ctx)) {
    struct kk_expr_Lit* _con_x464 = kk_expr__as_Lit(e, _ctx);
    kk_value__value v = _con_x464->v;
    kk_std_core_types__list_drop(us_2, _ctx);
    kk_reuse_t _ru_x337 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x337 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_value__value_dup(v, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_box_t _x_x465;
    kk_box_t _x_x466;
    kk_expr__uexpr _x_x467;
    if kk_likely(_ru_x337!=NULL) {
      struct kk_expr_ULit* _con_x468 = (struct kk_expr_ULit*)_ru_x337;
      _con_x468->_base._block.header.tag = (kk_tag_t)((4));
      _x_x467 = kk_expr__base_ULit(_con_x468, _ctx); /*expr/uexpr*/
    }
    else {
      _x_x467 = kk_expr__new_ULit(kk_reuse_null, 0, v, _ctx); /*expr/uexpr*/
    }
    _x_x466 = kk_expr__uexpr_box(_x_x467, _ctx); /*-1*/
    _x_x465 = kk_cctx_apply(_acc_5,_x_x466,kk_context()); /*-1*/
    return kk_expr__uexpr_unbox(_x_x465, KK_OWNED, _ctx);
  }
  {
    struct kk_expr_Var* _con_x469 = kk_expr__as_Var(e, _ctx);
    kk_string_t x_0_0_0 = _con_x469->x;
    kk_reuse_t _ru_x338 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x338 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_string_dup(x_0_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__list x_9_10078;
    kk_function_t _x_x470;
    kk_string_dup(x_0_0_0, _ctx);
    _x_x470 = kk_expr__new_trmc_uniquify_fun471_sq_(x_0_0_0, _ctx); /*(1325) -> 1326 bool*/
    x_9_10078 = kk_std_core_list_filter(us_2, _x_x470, _ctx); /*list<(string, expr/uid)>*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x338,kk_context());
      kk_std_core_types__list_drop(x_9_10078, _ctx);
      kk_box_t _x_x472 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun473_sq_(_acc_5, x_0_0_0, _ctx), _ctx); /*2978*/
      return kk_expr__uexpr_unbox(_x_x472, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__maybe _match_x314 = kk_std_core_list_last(x_9_10078, _ctx); /*maybe<4650>*/;
      if (kk_std_core_types__is_Just(_match_x314, _ctx)) {
        kk_box_t _box_x191 = _match_x314._cons.Just.value;
        kk_std_core_types__tuple2 _pat_7_0 = kk_std_core_types__tuple2_unbox(_box_x191, KK_BORROWED, _ctx);
        kk_box_t _box_x192 = _pat_7_0.fst;
        kk_box_t _box_x193 = _pat_7_0.snd;
        kk_string_t uid_1_0 = kk_string_unbox(_box_x193);
        kk_string_drop(x_0_0_0, _ctx);
        kk_string_dup(uid_1_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x314, _ctx);
        kk_box_t _x_x475;
        kk_box_t _x_x476;
        kk_expr__uexpr _x_x477 = kk_expr__new_UVar(_ru_x338, 0, uid_1_0, _ctx); /*expr/uexpr*/
        _x_x476 = kk_expr__uexpr_box(_x_x477, _ctx); /*-1*/
        _x_x475 = kk_cctx_apply(_acc_5,_x_x476,kk_context()); /*-1*/
        return kk_expr__uexpr_unbox(_x_x475, KK_OWNED, _ctx);
      }
      {
        kk_reuse_drop(_ru_x338,kk_context());
        kk_string_t _x_x1_1_10042_0;
        kk_string_t _x_x478;
        kk_define_string_literal(, _s_x479, 20, "undefined variable: ", _ctx)
        _x_x478 = kk_string_dup(_s_x479, _ctx); /*string*/
        kk_string_t _x_x480 = kk_std_core_show_string_fs_show(x_0_0_0, _ctx); /*string*/
        _x_x1_1_10042_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x478, _x_x480, _ctx); /*string*/
        kk_ssize_t _b_x198_204 = (KK_IZ(0)); /*hnd/ev-index*/;
        kk_expr__uexpr x_10_10081;
        kk_box_t _x_x481 = kk_std_core_hnd__open_at2(_b_x198_204, kk_expr__new_trmc_uniquify_fun482_sq_(_ctx), kk_string_box(_x_x1_1_10042_0), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*9234*/
        x_10_10081 = kk_expr__uexpr_unbox(_x_x481, KK_OWNED, _ctx); /*expr/uexpr*/
        kk_box_t _x_x485;
        if (kk_yielding(kk_context())) {
          kk_expr__uexpr_drop(x_10_10081, _ctx);
          _x_x485 = kk_std_core_hnd_yield_extend(kk_expr__new_trmc_uniquify_fun486_sq_(_acc_5, _ctx), _ctx); /*2978*/
        }
        else {
          _x_x485 = kk_cctx_apply(_acc_5,(kk_expr__uexpr_box(x_10_10081, _ctx)),kk_context()); /*2978*/
        }
        return kk_expr__uexpr_unbox(_x_x485, KK_OWNED, _ctx);
      }
    }
  }
}

kk_expr__uexpr kk_expr_uniquify_sq_(kk_expr__expr e_0, kk_std_core_types__list us_3, kk_context_t* _ctx) { /* (e : expr, us : usubst) -> <pure,unique> uexpr */ 
  kk_std_core_types__cctx _x_x488 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_expr__trmc_uniquify_sq_(e_0, us_3, _x_x488, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_expr__mlift_uniquify_10051_fun490__t {
  struct kk_function_s _base;
};
static kk_box_t kk_expr__mlift_uniquify_10051_fun490(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx);
static kk_function_t kk_expr__new_mlift_uniquify_10051_fun490(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr__mlift_uniquify_10051_fun490, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr__mlift_uniquify_10051_fun490(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_264 = kk_std_core_exn__error_unbox(_b_x259, KK_OWNED, _ctx); /*error<expr/uexpr>*/;
  kk_std_core_types__either _x_x491;
  if (kk_std_core_exn__is_Error(t_264, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_264._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_264, _ctx);
    _x_x491 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx); /*either<51,52>*/
  }
  else {
    kk_box_t _box_x255 = t_264._cons.Ok.result;
    kk_expr__uexpr x_1 = kk_expr__uexpr_unbox(_box_x255, KK_BORROWED, _ctx);
    kk_expr__uexpr_dup(x_1, _ctx);
    kk_std_core_exn__error_drop(t_264, _ctx);
    _x_x491 = kk_std_core_types__new_Right(kk_expr__uexpr_box(x_1, _ctx), _ctx); /*either<51,52>*/
  }
  return kk_std_core_types__either_box(_x_x491, _ctx);
}

kk_std_core_types__either kk_expr__mlift_uniquify_10051(kk_std_core_exn__error _y_x10030, kk_context_t* _ctx) { /* (error<uexpr>) -> <div,unique> either<exception,uexpr> */ 
  kk_box_t _x_x489 = kk_std_core_hnd__open_none1(kk_expr__new_mlift_uniquify_10051_fun490(_ctx), kk_std_core_exn__error_box(_y_x10030, _ctx), _ctx); /*8580*/
  return kk_std_core_types__either_unbox(_x_x489, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_expr_uniquify_fun496__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_expr_uniquify_fun496(kk_function_t _fself, int32_t _b_x275, kk_std_core_hnd__ev _b_x276, kk_box_t _b_x277, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uniquify_fun496(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun496__t* _self = kk_function_alloc_as(struct kk_expr_uniquify_fun496__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr_uniquify_fun496, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr_uniquify_fun496(kk_function_t _fself, int32_t _b_x275, kk_std_core_hnd__ev _b_x276, kk_box_t _b_x277, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun496__t* _self = kk_function_as(struct kk_expr_uniquify_fun496__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1364,int> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t ___wildcard_x633__14_308 = _b_x275; /*hnd/marker<<local<1364>,div>,either<exception,expr/uexpr>>*/;
  kk_std_core_hnd__ev ___wildcard_x633__17_309 = _b_x276; /*hnd/ev<expr/unique>*/;
  kk_datatype_ptr_dropn(___wildcard_x633__17_309, (KK_I32(3)), _ctx);
  kk_string_t x_310 = kk_string_unbox(_b_x277); /*string*/;
  kk_integer_t x_0_10002;
  kk_box_t _x_x497;
  kk_ref_t _x_x498 = kk_ref_dup(loc, _ctx); /*local-var<1364,int>*/
  _x_x497 = kk_ref_get(_x_x498,kk_context()); /*2611*/
  x_0_10002 = kk_integer_unbox(_x_x497, _ctx); /*int*/
  kk_integer_t _b_x270_272 = kk_integer_add_small_const(x_0_10002, 1, _ctx); /*int*/;
  kk_unit_t __ = kk_Unit;
  kk_ref_set_borrow(loc,(kk_integer_box(_b_x270_272, _ctx)),kk_context());
  kk_string_t _x_x499;
  kk_string_t _x_x500;
  kk_define_string_literal(, _s_x501, 1, "$", _ctx)
  _x_x500 = kk_string_dup(_s_x501, _ctx); /*string*/
  kk_string_t _x_x502;
  kk_string_t _x_x503;
  kk_integer_t _x_x504;
  kk_box_t _x_x505 = kk_ref_get(loc,kk_context()); /*2611*/
  _x_x504 = kk_integer_unbox(_x_x505, _ctx); /*int*/
  _x_x503 = kk_std_core_int_show(_x_x504, _ctx); /*string*/
  _x_x502 = kk_std_core_types__lp__plus__plus__rp_(x_310, _x_x503, _ctx); /*string*/
  _x_x499 = kk_std_core_types__lp__plus__plus__rp_(_x_x500, _x_x502, _ctx); /*string*/
  return kk_string_box(_x_x499);
}


// lift anonymous function
struct kk_expr_uniquify_fun506__t {
  struct kk_function_s _base;
};
static kk_box_t kk_expr_uniquify_fun506(kk_function_t _fself, kk_box_t _b_x291, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uniquify_fun506(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr_uniquify_fun506, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr_uniquify_fun506(kk_function_t _fself, kk_box_t _b_x291, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x291;
}


// lift anonymous function
struct kk_expr_uniquify_fun507__t {
  struct kk_function_s _base;
  kk_expr__expr e;
};
static kk_box_t kk_expr_uniquify_fun507(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uniquify_fun507(kk_expr__expr e, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun507__t* _self = kk_function_alloc_as(struct kk_expr_uniquify_fun507__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr_uniquify_fun507, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_expr_uniquify_fun508__t {
  struct kk_function_s _base;
  kk_expr__expr e;
};
static kk_box_t kk_expr_uniquify_fun508(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uniquify_fun508(kk_expr__expr e, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun508__t* _self = kk_function_alloc_as(struct kk_expr_uniquify_fun508__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_expr_uniquify_fun508, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_expr_uniquify_fun508(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun508__t* _self = kk_function_as(struct kk_expr_uniquify_fun508__t*, _fself, _ctx);
  kk_expr__expr e = _self->e; /* expr/expr */
  kk_drop_match(_self, {kk_expr__expr_dup(e, _ctx);}, {}, _ctx)
  kk_expr__uexpr _x_x509 = kk_expr_uniquify_sq_(e, kk_std_core_types__new_Nil(_ctx), _ctx); /*expr/uexpr*/
  return kk_expr__uexpr_box(_x_x509, _ctx);
}


// lift anonymous function
struct kk_expr_uniquify_fun510__t {
  struct kk_function_s _base;
};
static kk_box_t kk_expr_uniquify_fun510(kk_function_t _fself, kk_box_t _b_x281, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uniquify_fun510(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr_uniquify_fun510, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr_uniquify_fun510(kk_function_t _fself, kk_box_t _b_x281, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x511;
  kk_std_core_exn__error _x_x512 = kk_std_core_exn__error_unbox(_b_x281, KK_OWNED, _ctx); /*error<expr/uexpr>*/
  _x_x511 = kk_expr__mlift_uniquify_10051(_x_x512, _ctx); /*either<exception,expr/uexpr>*/
  return kk_std_core_types__either_box(_x_x511, _ctx);
}


// lift anonymous function
struct kk_expr_uniquify_fun513__t {
  struct kk_function_s _base;
};
static kk_box_t kk_expr_uniquify_fun513(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx);
static kk_function_t kk_expr_new_uniquify_fun513(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_expr_uniquify_fun513, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_expr_uniquify_fun513(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x514;
  kk_std_core_exn__error _match_x312 = kk_std_core_exn__error_unbox(_b_x287, KK_OWNED, _ctx); /*error<expr/uexpr>*/;
  if (kk_std_core_exn__is_Error(_match_x312, _ctx)) {
    kk_std_core_exn__exception exn_0 = _match_x312._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(_match_x312, _ctx);
    _x_x514 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx); /*either<51,52>*/
  }
  else {
    kk_box_t _box_x283 = _match_x312._cons.Ok.result;
    kk_expr__uexpr x_1 = kk_expr__uexpr_unbox(_box_x283, KK_BORROWED, _ctx);
    kk_expr__uexpr_dup(x_1, _ctx);
    kk_std_core_exn__error_drop(_match_x312, _ctx);
    _x_x514 = kk_std_core_types__new_Right(kk_expr__uexpr_box(x_1, _ctx), _ctx); /*either<51,52>*/
  }
  return kk_std_core_types__either_box(_x_x514, _ctx);
}
static kk_box_t kk_expr_uniquify_fun507(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_expr_uniquify_fun507__t* _self = kk_function_as(struct kk_expr_uniquify_fun507__t*, _fself, _ctx);
  kk_expr__expr e = _self->e; /* expr/expr */
  kk_drop_match(_self, {kk_expr__expr_dup(e, _ctx);}, {}, _ctx)
  kk_std_core_exn__error x_1_10088 = kk_std_core_exn_try(kk_expr_new_uniquify_fun508(e, _ctx), _ctx); /*error<expr/uexpr>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_exn__error_drop(x_1_10088, _ctx);
    return kk_std_core_hnd_yield_extend(kk_expr_new_uniquify_fun510(_ctx), _ctx);
  }
  {
    return kk_std_core_hnd__open_none1(kk_expr_new_uniquify_fun513(_ctx), kk_std_core_exn__error_box(x_1_10088, _ctx), _ctx);
  }
}

kk_std_core_types__either kk_expr_uniquify(kk_expr__expr e, kk_context_t* _ctx) { /* (e : expr) -> div either<exception,uexpr> */ 
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(-1), _ctx)),kk_context()); /*local-var<1364,int>*/;
  kk_std_core_types__either res;
  kk_box_t _x_x492;
  kk_expr__unique _x_x493;
  kk_std_core_hnd__clause1 _x_x494;
  kk_function_t _x_x495;
  kk_ref_dup(loc, _ctx);
  _x_x495 = kk_expr_new_uniquify_fun496(loc, _ctx); /*(hnd/marker<48,49>, hnd/ev<47>, 45) -> 48 46*/
  _x_x494 = kk_std_core_hnd__new_Clause1(_x_x495, _ctx); /*hnd/clause1<45,46,47,48,49>*/
  _x_x493 = kk_expr__new_Hnd_unique(kk_reuse_null, 0, kk_integer_from_small(1), _x_x494, _ctx); /*expr/unique<12,13>*/
  _x_x492 = kk_expr__handle_unique(_x_x493, kk_expr_new_uniquify_fun506(_ctx), kk_expr_new_uniquify_fun507(e, _ctx), _ctx); /*684*/
  res = kk_std_core_types__either_unbox(_x_x492, KK_OWNED, _ctx); /*either<exception,expr/uexpr>*/
  kk_box_t _x_x515 = kk_std_core_hnd_prompt_local_var(loc, kk_std_core_types__either_box(res, _ctx), _ctx); /*9564*/
  return kk_std_core_types__either_unbox(_x_x515, KK_OWNED, _ctx);
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
    kk_string_t _x_x386;
    kk_define_string_literal(, _s_x387, 11, "unique@expr", _ctx)
    _x_x386 = kk_string_dup(_s_x387, _ctx); /*string*/
    kk_expr__tag_unique = kk_std_core_hnd__new_Htag(_x_x386, _ctx); /*hnd/htag<expr/unique>*/
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
