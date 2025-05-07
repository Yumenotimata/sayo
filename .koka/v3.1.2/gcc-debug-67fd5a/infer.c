// Koka generated module: infer, koka version: 3.1.2, platform: 64-bit
#include "infer.h"
 
// monadic lift

kk_types__types kk_infer__mlift_tvar_10055(kk_ref_t tv, kk_integer_t _y_x10004, kk_context_t* _ctx) { /* forall<h> (tv : ref<h,tenv>, int) -> expr/unique types/types */ 
  kk_types__types v;
  kk_string_t _x_x420 = kk_std_core_int_show(_y_x10004, _ctx); /*string*/
  v = kk_types__new_TVar(kk_reuse_null, 0, _x_x420, _ctx); /*types/types*/
  kk_std_core_types__list _b_x14_16;
  kk_std_core_types__list _x_x421;
  kk_box_t _x_x422;
  kk_ref_t _x_x423 = kk_ref_dup(tv, _ctx); /*ref<175,infer/tenv>*/
  _x_x422 = kk_ref_get(_x_x423,kk_context()); /*1001*/
  _x_x421 = kk_std_core_types__list_unbox(_x_x422, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/
  kk_std_core_types__list _x_x424;
  kk_box_t _x_x425;
  kk_std_core_types__tuple2 _x_x426;
  kk_box_t _x_x427;
  kk_string_t _x_x428 = kk_string_empty(); /*string*/
  _x_x427 = kk_string_box(_x_x428); /*1038*/
  kk_box_t _x_x430;
  kk_types__types _x_x431 = kk_types__types_dup(v, _ctx); /*types/types*/
  _x_x430 = kk_types__types_box(_x_x431, _ctx); /*1039*/
  _x_x426 = kk_std_core_types__new_Tuple2(_x_x427, _x_x430, _ctx); /*(1038, 1039)*/
  _x_x425 = kk_std_core_types__tuple2_box(_x_x426, _ctx); /*1024*/
  _x_x424 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x425, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  _b_x14_16 = kk_std_core_list_append(_x_x421, _x_x424, _ctx); /*list<(expr/uid, types/types)>*/
  kk_unit_t __ = kk_Unit;
  kk_unit_t _brw_x408 = kk_Unit;
  kk_ref_set_borrow(tv,(kk_std_core_types__list_box(_b_x14_16, _ctx)),kk_context());
  kk_ref_drop(tv, _ctx);
  _brw_x408;
  return v;
}


// lift anonymous function
struct kk_infer_tvar_fun435__t {
  struct kk_function_s _base;
  kk_ref_t tv;
};
static kk_box_t kk_infer_tvar_fun435(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_infer_new_tvar_fun435(kk_ref_t tv, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun435__t* _self = kk_function_alloc_as(struct kk_infer_tvar_fun435__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_tvar_fun435, kk_context());
  _self->tv = tv;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_tvar_fun435(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun435__t* _self = kk_function_as(struct kk_infer_tvar_fun435__t*, _fself, _ctx);
  kk_ref_t tv = _self->tv; /* ref<175,infer/tenv> */
  kk_drop_match(_self, {kk_ref_dup(tv, _ctx);}, {}, _ctx)
  kk_integer_t _y_x10004_45 = kk_integer_unbox(_b_x29, _ctx); /*int*/;
  kk_types__types _x_x436 = kk_infer__mlift_tvar_10055(tv, _y_x10004_45, _ctx); /*types/types*/
  return kk_types__types_box(_x_x436, _ctx);
}

kk_types__types kk_infer_tvar(kk_ref_t tv, kk_context_t* _ctx) { /* forall<h> (tv : ref<h,tenv>) -> <expr/unique,read<h>,write<h>> types/types */ 
  kk_std_core_hnd__ev ev_10072 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<expr/unique>*/;
  kk_integer_t x_10069;
  kk_box_t _x_x432;
  {
    struct kk_std_core_hnd_Ev* _con_x433 = kk_std_core_hnd__as_Ev(ev_10072, _ctx);
    kk_box_t _box_x22 = _con_x433->hnd;
    int32_t m = _con_x433->marker;
    kk_expr__unique h = kk_expr__unique_unbox(_box_x22, KK_BORROWED, _ctx);
    kk_expr__unique_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x406;
    kk_std_core_hnd__clause0 _brw_x407 = kk_expr__select_gen(h, _ctx); /*hnd/clause0<int,expr/unique,1000,1001>*/;
    kk_expr__unique_drop(h, _ctx);
    _match_x406 = _brw_x407; /*hnd/clause0<int,expr/unique,1000,1001>*/
    {
      kk_function_t _fun_unbox_x25 = _match_x406.clause;
      _x_x432 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x25, (_fun_unbox_x25, m, ev_10072, _ctx), _ctx); /*1005*/
    }
  }
  x_10069 = kk_integer_unbox(_x_x432, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10069, _ctx);
    kk_box_t _x_x434 = kk_std_core_hnd_yield_extend(kk_infer_new_tvar_fun435(tv, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x434, KK_OWNED, _ctx);
  }
  {
    kk_types__types v;
    kk_string_t _x_x437 = kk_std_core_int_show(x_10069, _ctx); /*string*/
    v = kk_types__new_TVar(kk_reuse_null, 0, _x_x437, _ctx); /*types/types*/
    kk_std_core_types__list _b_x36_38;
    kk_std_core_types__list _x_x438;
    kk_box_t _x_x439;
    kk_ref_t _x_x440 = kk_ref_dup(tv, _ctx); /*ref<175,infer/tenv>*/
    _x_x439 = kk_ref_get(_x_x440,kk_context()); /*1001*/
    _x_x438 = kk_std_core_types__list_unbox(_x_x439, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/
    kk_std_core_types__list _x_x441;
    kk_box_t _x_x442;
    kk_std_core_types__tuple2 _x_x443;
    kk_box_t _x_x444;
    kk_string_t _x_x445 = kk_string_empty(); /*string*/
    _x_x444 = kk_string_box(_x_x445); /*1038*/
    kk_box_t _x_x447;
    kk_types__types _x_x448 = kk_types__types_dup(v, _ctx); /*types/types*/
    _x_x447 = kk_types__types_box(_x_x448, _ctx); /*1039*/
    _x_x443 = kk_std_core_types__new_Tuple2(_x_x444, _x_x447, _ctx); /*(1038, 1039)*/
    _x_x442 = kk_std_core_types__tuple2_box(_x_x443, _ctx); /*1024*/
    _x_x441 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x442, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    _b_x36_38 = kk_std_core_list_append(_x_x438, _x_x441, _ctx); /*list<(expr/uid, types/types)>*/
    kk_unit_t __ = kk_Unit;
    kk_unit_t _brw_x405 = kk_Unit;
    kk_ref_set_borrow(tv,(kk_std_core_types__list_box(_b_x36_38, _ctx)),kk_context());
    kk_ref_drop(tv, _ctx);
    _brw_x405;
    return v;
  }
}

kk_types__types kk_infer_tvar_sq_(kk_string_t u, kk_ref_t tv, kk_context_t* _ctx) { /* forall<h> (u : expr/uid, tv : ref<h,tenv>) -> <expr/unique,read<h>,write<h>> types/types */ 
  kk_types__types v;
  kk_string_t _x_x449 = kk_string_dup(u, _ctx); /*expr/uid*/
  v = kk_types__new_TVar(kk_reuse_null, 0, _x_x449, _ctx); /*types/types*/
  kk_std_core_types__list _b_x52_54;
  kk_std_core_types__list _x_x450;
  kk_box_t _x_x451;
  kk_ref_t _x_x452 = kk_ref_dup(tv, _ctx); /*ref<232,infer/tenv>*/
  _x_x451 = kk_ref_get(_x_x452,kk_context()); /*1001*/
  _x_x450 = kk_std_core_types__list_unbox(_x_x451, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/
  kk_std_core_types__list _x_x453;
  kk_box_t _x_x454;
  kk_std_core_types__tuple2 _x_x455;
  kk_box_t _x_x456;
  kk_types__types _x_x457 = kk_types__types_dup(v, _ctx); /*types/types*/
  _x_x456 = kk_types__types_box(_x_x457, _ctx); /*1039*/
  _x_x455 = kk_std_core_types__new_Tuple2(kk_string_box(u), _x_x456, _ctx); /*(1038, 1039)*/
  _x_x454 = kk_std_core_types__tuple2_box(_x_x455, _ctx); /*1024*/
  _x_x453 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x454, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  _b_x52_54 = kk_std_core_list_append(_x_x450, _x_x453, _ctx); /*list<(expr/uid, types/types)>*/
  kk_unit_t __ = kk_Unit;
  kk_unit_t _brw_x403 = kk_Unit;
  kk_ref_set_borrow(tv,(kk_std_core_types__list_box(_b_x52_54, _ctx)),kk_context());
  kk_ref_drop(tv, _ctx);
  _brw_x403;
  return v;
}
 
// なぞにtypes/applyの型が合わないのでRe


// lift anonymous function
struct kk_infer__trmc_apply_fun468__t_sq_ {
  struct kk_function_s _base;
};
static kk_string_t kk_infer__trmc_apply_fun468_sq_(kk_function_t _fself, kk_box_t _b_x67, kk_context_t* _ctx);
static kk_function_t kk_infer__new_trmc_apply_fun468_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__trmc_apply_fun468_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_infer__trmc_apply_fun470__t_sq_ {
  struct kk_function_s _base;
};
static kk_string_t kk_infer__trmc_apply_fun470_sq_(kk_function_t _fself, kk_box_t _b_x63, kk_context_t* _ctx);
static kk_function_t kk_infer__new_trmc_apply_fun470_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__trmc_apply_fun470_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_infer__trmc_apply_fun470_sq_(kk_function_t _fself, kk_box_t _b_x63, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x471 = kk_string_unbox(_b_x63); /*string*/
  return kk_std_core_show_string_fs_show(_x_x471, _ctx);
}


// lift anonymous function
struct kk_infer__trmc_apply_fun472__t_sq_ {
  struct kk_function_s _base;
};
static kk_string_t kk_infer__trmc_apply_fun472_sq_(kk_function_t _fself, kk_box_t _b_x64, kk_context_t* _ctx);
static kk_function_t kk_infer__new_trmc_apply_fun472_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__trmc_apply_fun472_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_infer__trmc_apply_fun472_sq_(kk_function_t _fself, kk_box_t _b_x64, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x473 = kk_types__types_unbox(_b_x64, KK_OWNED, _ctx); /*types/types*/
  return kk_types_show(_x_x473, _ctx);
}
static kk_string_t kk_infer__trmc_apply_fun468_sq_(kk_function_t _fself, kk_box_t _b_x67, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _x_x469 = kk_std_core_types__tuple2_unbox(_b_x67, KK_OWNED, _ctx); /*(string, types/types)*/
  return kk_std_core_tuple_tuple2_fs_show(_x_x469, kk_infer__new_trmc_apply_fun470_sq_(_ctx), kk_infer__new_trmc_apply_fun472_sq_(_ctx), _ctx);
}


// lift anonymous function
struct kk_infer__trmc_apply_fun481__t_sq_ {
  struct kk_function_s _base;
  kk_string_t u;
};
static bool kk_infer__trmc_apply_fun481_sq_(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_infer__new_trmc_apply_fun481_sq_(kk_string_t u, kk_context_t* _ctx) {
  struct kk_infer__trmc_apply_fun481__t_sq_* _self = kk_function_alloc_as(struct kk_infer__trmc_apply_fun481__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__trmc_apply_fun481_sq_, kk_context());
  _self->u = u;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_infer__trmc_apply_fun481_sq_(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  struct kk_infer__trmc_apply_fun481__t_sq_* _self = kk_function_as(struct kk_infer__trmc_apply_fun481__t_sq_*, _fself, _ctx);
  kk_string_t u = _self->u; /* string */
  kk_drop_match(_self, {kk_string_dup(u, _ctx);}, {}, _ctx)
  kk_string_t u_104_sq_ = kk_string_unbox(_b_x81); /*string*/;
  return kk_string_is_eq(u,u_104_sq_,kk_context());
}

kk_types__types kk_infer__trmc_apply_sq_(kk_types__types t, kk_std_core_types__list s, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (t : types/types, s : types/subst, ctx<types/types>) -> <console/console,div> types/types */ 
  kk__tailcall: ;
  kk_string_t s_0_10000;
  kk_string_t _x_x458;
  kk_define_string_literal(, _s_x459, 7, "apply: ", _ctx)
  _x_x458 = kk_string_dup(_s_x459, _ctx); /*string*/
  kk_string_t _x_x460;
  kk_string_t _x_x461;
  kk_types__types _x_x462 = kk_types__types_dup(t, _ctx); /*types/types*/
  _x_x461 = kk_types_show(_x_x462, _ctx); /*string*/
  kk_string_t _x_x463;
  kk_string_t _x_x464;
  kk_define_string_literal(, _s_x465, 1, " ", _ctx)
  _x_x464 = kk_string_dup(_s_x465, _ctx); /*string*/
  kk_string_t _x_x466;
  kk_std_core_types__list _x_x467 = kk_std_core_types__list_dup(s, _ctx); /*types/subst*/
  _x_x466 = kk_std_core_list_show(_x_x467, kk_infer__new_trmc_apply_fun468_sq_(_ctx), _ctx); /*string*/
  _x_x463 = kk_std_core_types__lp__plus__plus__rp_(_x_x464, _x_x466, _ctx); /*string*/
  _x_x460 = kk_std_core_types__lp__plus__plus__rp_(_x_x461, _x_x463, _ctx); /*string*/
  s_0_10000 = kk_std_core_types__lp__plus__plus__rp_(_x_x458, _x_x460, _ctx); /*string*/
  kk_unit_t __ = kk_Unit;
  kk_std_core_console_printsln(s_0_10000, _ctx);
  if (kk_types__is_TApp(t, _ctx)) {
    struct kk_types_TApp* _con_x474 = kk_types__as_TApp(t, _ctx);
    kk_types__types l = _con_x474->l;
    kk_types__types r = _con_x474->r;
    kk_reuse_t _ru_x409 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      _ru_x409 = (kk_datatype_ptr_reuse(t, _ctx));
    }
    else {
      kk_types__types_dup(l, _ctx);
      kk_types__types_dup(r, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    kk_types__types _trmc_x10001;
    kk_std_core_types__list _x_x475 = kk_std_core_types__list_dup(s, _ctx); /*types/subst*/
    _trmc_x10001 = kk_infer_apply_sq_(l, _x_x475, _ctx); /*types/types*/
    kk_types__types _trmc_x10002 = kk_datatype_null(); /*types/types*/;
    kk_types__types _trmc_x10003;
    if kk_likely(_ru_x409!=NULL) {
      struct kk_types_TApp* _con_x476 = (struct kk_types_TApp*)_ru_x409;
      _con_x476->l = _trmc_x10001;
      _con_x476->r = _trmc_x10002;
      _trmc_x10003 = kk_types__base_TApp(_con_x476, _ctx); /*types/types*/
    }
    else {
      _trmc_x10003 = kk_types__new_TApp(kk_reuse_null, 0, _trmc_x10001, _trmc_x10002, _ctx); /*types/types*/
    }
    kk_field_addr_t _b_x78_91 = kk_field_addr_create(&kk_types__as_TApp(_trmc_x10003, _ctx)->r, _ctx); /*@field-addr<types/types>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x477 = kk_cctx_extend_linear(_acc,(kk_types__types_box(_trmc_x10003, _ctx)),_b_x78_91,kk_context()); /*ctx<0>*/
      t = r;
      _acc = _x_x477;
      goto kk__tailcall;
    }
  }
  if (kk_types__is_TVar(t, _ctx)) {
    struct kk_types_TVar* _con_x478 = kk_types__as_TVar(t, _ctx);
    kk_string_t u = _con_x478->u;
    kk_reuse_t _ru_x410 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      _ru_x410 = (kk_datatype_ptr_reuse(t, _ctx));
    }
    else {
      kk_string_dup(u, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    kk_box_t _x_x479;
    kk_std_core_types__maybe _match_x402;
    kk_function_t _x_x480;
    kk_string_dup(u, _ctx);
    _x_x480 = kk_infer__new_trmc_apply_fun481_sq_(u, _ctx); /*(1001) -> 1003 bool*/
    _match_x402 = kk_std_core_list_lookup(s, _x_x480, _ctx); /*maybe<1002>*/
    if (kk_std_core_types__is_Just(_match_x402, _ctx)) {
      kk_box_t _box_x82 = _match_x402._cons.Just.value;
      kk_types__types t_sq_ = kk_types__types_unbox(_box_x82, KK_BORROWED, _ctx);
      kk_reuse_drop(_ru_x410,kk_context());
      kk_string_drop(u, _ctx);
      kk_types__types_dup(t_sq_, _ctx);
      kk_std_core_types__maybe_drop(_match_x402, _ctx);
      _x_x479 = kk_cctx_apply_linear(_acc,(kk_types__types_box(t_sq_, _ctx)),kk_context()); /*-1*/
    }
    else {
      kk_box_t _x_x482;
      kk_types__types _x_x483;
      if kk_likely(_ru_x410!=NULL) {
        struct kk_types_TVar* _con_x484 = (struct kk_types_TVar*)_ru_x410;
        _x_x483 = kk_types__base_TVar(_con_x484, _ctx); /*types/types*/
      }
      else {
        _x_x483 = kk_types__new_TVar(kk_reuse_null, 0, u, _ctx); /*types/types*/
      }
      _x_x482 = kk_types__types_box(_x_x483, _ctx); /*-1*/
      _x_x479 = kk_cctx_apply_linear(_acc,_x_x482,kk_context()); /*-1*/
    }
    return kk_types__types_unbox(_x_x479, KK_OWNED, _ctx);
  }
  {
    struct kk_types_TCon* _con_x485 = kk_types__as_TCon(t, _ctx);
    kk_std_core_types__list_drop(s, _ctx);
    kk_box_t _x_x486 = kk_cctx_apply_linear(_acc,(kk_types__types_box(t, _ctx)),kk_context()); /*-1*/
    return kk_types__types_unbox(_x_x486, KK_OWNED, _ctx);
  }
}
 
// なぞにtypes/applyの型が合わないのでRe

kk_types__types kk_infer_apply_sq_(kk_types__types t_1, kk_std_core_types__list s_0, kk_context_t* _ctx) { /* (t : types/types, s : types/subst) -> <console/console,div> types/types */ 
  kk_std_core_types__cctx _x_x487 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_infer__trmc_apply_sq_(t_1, s_0, _x_x487, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10056_fun489__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10056_fun489_sq_(kk_function_t _fself, kk_box_t _b_x108, kk_box_t _b_x109, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10056_fun489_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10056_fun489_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10056_fun489_sq_(kk_function_t _fself, kk_box_t _b_x108, kk_box_t _b_x109, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x490;
  kk_types__types _x_x491 = kk_types__types_unbox(_b_x108, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x492 = kk_std_core_types__list_unbox(_b_x109, KK_OWNED, _ctx); /*types/subst*/
  _x_x490 = kk_infer_apply_sq_(_x_x491, _x_x492, _ctx); /*types/types*/
  return kk_types__types_box(_x_x490, _ctx);
}

kk_types__types kk_infer__mlift_infer_10056_sq_(kk_types__types t_ret, kk_std_core_types__list subst, kk_context_t* _ctx) { /* forall<h> (t-ret : types/types, subst : types/subst) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 
  kk_box_t _x_x488 = kk_std_core_hnd__open_none2(kk_infer__new_mlift_infer_10056_fun489_sq_(_ctx), kk_types__types_box(t_ret, _ctx), kk_std_core_types__list_box(subst, _ctx), _ctx); /*1002*/
  return kk_types__types_unbox(_x_x488, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10057_fun494__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10057_fun494_sq_(kk_function_t _fself, kk_box_t _b_x117, kk_box_t _b_x118, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10057_fun494_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10057_fun494_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10057_fun494_sq_(kk_function_t _fself, kk_box_t _b_x117, kk_box_t _b_x118, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x495;
  kk_types__types _x_x496 = kk_types__types_unbox(_b_x117, KK_OWNED, _ctx); /*types/types*/
  kk_types__types _x_x497 = kk_types__types_unbox(_b_x118, KK_OWNED, _ctx); /*types/types*/
  _x_x495 = kk_types_unify(_x_x496, _x_x497, _ctx); /*types/subst*/
  return kk_std_core_types__list_box(_x_x495, _ctx);
}


// lift anonymous function
struct kk_infer__mlift_infer_10057_fun504__t_sq_ {
  struct kk_function_s _base;
  kk_types__types t_ret_0;
};
static kk_box_t kk_infer__mlift_infer_10057_fun504_sq_(kk_function_t _fself, kk_box_t _b_x124, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10057_fun504_sq_(kk_types__types t_ret_0, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10057_fun504__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10057_fun504__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10057_fun504_sq_, kk_context());
  _self->t_ret_0 = t_ret_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10057_fun504_sq_(kk_function_t _fself, kk_box_t _b_x124, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10057_fun504__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10057_fun504__t_sq_*, _fself, _ctx);
  kk_types__types t_ret_0 = _self->t_ret_0; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(t_ret_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list subst_0_126 = kk_std_core_types__list_unbox(_b_x124, KK_OWNED, _ctx); /*types/subst*/;
  kk_types__types _x_x505 = kk_infer__mlift_infer_10056_sq_(t_ret_0, subst_0_126, _ctx); /*types/types*/
  return kk_types__types_box(_x_x505, _ctx);
}

kk_types__types kk_infer__mlift_infer_10057_sq_(kk_types__types t_e1, kk_types__types t_e2, kk_types__types t_ret_0, kk_context_t* _ctx) { /* forall<h> (t-e1 : types/types, t-e2 : types/types, t-ret : types/types) -> <read<h>,expr/unique,write<h>,console/console,div,exn> types/types */ 
  kk_ssize_t _b_x113_119 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_std_core_types__list x_10074;
  kk_box_t _x_x493;
  kk_box_t _x_x498;
  kk_types__types _x_x499;
  kk_types__types _x_x500;
  kk_types__types _x_x501 = kk_types__types_dup(kk_types_t_arrow, _ctx); /*types/types*/
  _x_x500 = kk_types__new_TApp(kk_reuse_null, 0, _x_x501, t_e2, _ctx); /*types/types*/
  kk_types__types _x_x502 = kk_types__types_dup(t_ret_0, _ctx); /*types/types*/
  _x_x499 = kk_types__new_TApp(kk_reuse_null, 0, _x_x500, _x_x502, _ctx); /*types/types*/
  _x_x498 = kk_types__types_box(_x_x499, _ctx); /*1001*/
  _x_x493 = kk_std_core_hnd__open_at2(_b_x113_119, kk_infer__new_mlift_infer_10057_fun494_sq_(_ctx), kk_types__types_box(t_e1, _ctx), _x_x498, _ctx); /*1002*/
  x_10074 = kk_std_core_types__list_unbox(_x_x493, KK_OWNED, _ctx); /*types/subst*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10074, _ctx);
    kk_box_t _x_x503 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10057_fun504_sq_(t_ret_0, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x503, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10056_sq_(t_ret_0, x_10074, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10058_fun507__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10058_fun507_sq_(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10058_fun507_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10058_fun507_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10058_fun507_sq_(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x508;
  kk_ref_t _x_x509 = kk_ref_unbox(_b_x130, _ctx); /*ref<894,infer/tenv>*/
  _x_x508 = kk_infer_tvar(_x_x509, _ctx); /*types/types*/
  return kk_types__types_box(_x_x508, _ctx);
}


// lift anonymous function
struct kk_infer__mlift_infer_10058_fun511__t_sq_ {
  struct kk_function_s _base;
  kk_types__types t_e1_0;
  kk_types__types t_e2_0;
};
static kk_box_t kk_infer__mlift_infer_10058_fun511_sq_(kk_function_t _fself, kk_box_t _b_x135, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10058_fun511_sq_(kk_types__types t_e1_0, kk_types__types t_e2_0, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10058_fun511__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10058_fun511__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10058_fun511_sq_, kk_context());
  _self->t_e1_0 = t_e1_0;
  _self->t_e2_0 = t_e2_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10058_fun511_sq_(kk_function_t _fself, kk_box_t _b_x135, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10058_fun511__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10058_fun511__t_sq_*, _fself, _ctx);
  kk_types__types t_e1_0 = _self->t_e1_0; /* types/types */
  kk_types__types t_e2_0 = _self->t_e2_0; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(t_e1_0, _ctx);kk_types__types_dup(t_e2_0, _ctx);}, {}, _ctx)
  kk_types__types t_ret_1_137 = kk_types__types_unbox(_b_x135, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x512 = kk_infer__mlift_infer_10057_sq_(t_e1_0, t_e2_0, t_ret_1_137, _ctx); /*types/types*/
  return kk_types__types_box(_x_x512, _ctx);
}

kk_types__types kk_infer__mlift_infer_10058_sq_(kk_types__types t_e1_0, kk_ref_t tv, kk_types__types t_e2_0, kk_context_t* _ctx) { /* forall<h> (t-e1 : types/types, tv : ref<h,tenv>, t-e2 : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 
  kk_ssize_t _b_x127_131 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_types__types x_0_10076;
  kk_box_t _x_x506 = kk_std_core_hnd__open_at1(_b_x127_131, kk_infer__new_mlift_infer_10058_fun507_sq_(_ctx), kk_ref_box(tv, _ctx), _ctx); /*1001*/
  x_0_10076 = kk_types__types_unbox(_x_x506, KK_OWNED, _ctx); /*types/types*/
  if (kk_yielding(kk_context())) {
    kk_types__types_drop(x_0_10076, _ctx);
    kk_box_t _x_x510 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10058_fun511_sq_(t_e1_0, t_e2_0, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x510, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10057_sq_(t_e1_0, t_e2_0, x_0_10076, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10059_fun515__t_sq_ {
  struct kk_function_s _base;
  kk_types__types t_e1_1;
  kk_ref_t tv_0;
};
static kk_box_t kk_infer__mlift_infer_10059_fun515_sq_(kk_function_t _fself, kk_box_t _b_x139, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10059_fun515_sq_(kk_types__types t_e1_1, kk_ref_t tv_0, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10059_fun515__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10059_fun515__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10059_fun515_sq_, kk_context());
  _self->t_e1_1 = t_e1_1;
  _self->tv_0 = tv_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10059_fun515_sq_(kk_function_t _fself, kk_box_t _b_x139, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10059_fun515__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10059_fun515__t_sq_*, _fself, _ctx);
  kk_types__types t_e1_1 = _self->t_e1_1; /* types/types */
  kk_ref_t tv_0 = _self->tv_0; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_types__types_dup(t_e1_1, _ctx);kk_ref_dup(tv_0, _ctx);}, {}, _ctx)
  kk_types__types t_e2_1_141 = kk_types__types_unbox(_b_x139, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x516 = kk_infer__mlift_infer_10058_sq_(t_e1_1, tv_0, t_e2_1_141, _ctx); /*types/types*/
  return kk_types__types_box(_x_x516, _ctx);
}

kk_types__types kk_infer__mlift_infer_10059_sq_(kk_expr__uexpr e2, kk_ref_t tv_0, kk_types__types t_e1_1, kk_context_t* _ctx) { /* forall<h> (e2 : expr/uexpr, tv : ref<h,tenv>, t-e1 : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 
  kk_types__types x_1_10078;
  kk_ref_t _x_x513 = kk_ref_dup(tv_0, _ctx); /*ref<894,infer/tenv>*/
  x_1_10078 = kk_infer_infer_sq_(e2, _x_x513, _ctx); /*types/types*/
  if (kk_yielding(kk_context())) {
    kk_types__types_drop(x_1_10078, _ctx);
    kk_box_t _x_x514 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10059_fun515_sq_(t_e1_1, tv_0, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x514, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10058_sq_(t_e1_1, tv_0, x_1_10078, _ctx);
  }
}
 
// monadic lift

kk_types__types kk_infer__mlift_infer_10060_sq_(kk_types__types t_a, kk_types__types t_body, kk_context_t* _ctx) { /* forall<h> (t-a : types/types, t-body : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 
  kk_types__types _x_x517;
  kk_types__types _x_x518 = kk_types__types_dup(kk_types_t_arrow, _ctx); /*types/types*/
  _x_x517 = kk_types__new_TApp(kk_reuse_null, 0, _x_x518, t_a, _ctx); /*types/types*/
  return kk_types__new_TApp(kk_reuse_null, 0, _x_x517, t_body, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10061_fun520__t_sq_ {
  struct kk_function_s _base;
  kk_types__types t_a_0;
};
static kk_box_t kk_infer__mlift_infer_10061_fun520_sq_(kk_function_t _fself, kk_box_t _b_x143, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10061_fun520_sq_(kk_types__types t_a_0, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10061_fun520__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10061_fun520__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10061_fun520_sq_, kk_context());
  _self->t_a_0 = t_a_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10061_fun520_sq_(kk_function_t _fself, kk_box_t _b_x143, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10061_fun520__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10061_fun520__t_sq_*, _fself, _ctx);
  kk_types__types t_a_0 = _self->t_a_0; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(t_a_0, _ctx);}, {}, _ctx)
  kk_types__types t_body_0_145 = kk_types__types_unbox(_b_x143, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x521 = kk_infer__mlift_infer_10060_sq_(t_a_0, t_body_0_145, _ctx); /*types/types*/
  return kk_types__types_box(_x_x521, _ctx);
}

kk_types__types kk_infer__mlift_infer_10061_sq_(kk_expr__uexpr body, kk_ref_t tv_1, kk_types__types t_a_0, kk_context_t* _ctx) { /* forall<h> (body : expr/uexpr, tv : ref<h,tenv>, t-a : types/types) -> <read<h>,expr/unique,write<h>,console/console,div,exn> types/types */ 
  kk_types__types x_2_10080 = kk_infer_infer_sq_(body, tv_1, _ctx); /*types/types*/;
  if (kk_yielding(kk_context())) {
    kk_types__types_drop(x_2_10080, _ctx);
    kk_box_t _x_x519 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10061_fun520_sq_(t_a_0, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x519, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10060_sq_(t_a_0, x_2_10080, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10062_fun523__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10062_fun523_sq_(kk_function_t _fself, kk_box_t _b_x151, kk_box_t _b_x152, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10062_fun523_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10062_fun523_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10062_fun523_sq_(kk_function_t _fself, kk_box_t _b_x151, kk_box_t _b_x152, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x524;
  kk_string_t _x_x525 = kk_string_unbox(_b_x151); /*expr/uid*/
  kk_ref_t _x_x526 = kk_ref_unbox(_b_x152, _ctx); /*ref<894,infer/tenv>*/
  _x_x524 = kk_infer_tvar_sq_(_x_x525, _x_x526, _ctx); /*types/types*/
  return kk_types__types_box(_x_x524, _ctx);
}

kk_types__types kk_infer__mlift_infer_10062_sq_(kk_ref_t tv_2, kk_string_t x_3, kk_std_core_types__maybe _y_x10011, kk_context_t* _ctx) { /* forall<h> (tv : ref<h,tenv>, x : expr/uid, maybe<types/types>) -> <read<h>,expr/unique,write<h>,console/console,div,exn> types/types */ 
  if (kk_std_core_types__is_Just(_y_x10011, _ctx)) {
    kk_box_t _box_x146 = _y_x10011._cons.Just.value;
    kk_types__types t = kk_types__types_unbox(_box_x146, KK_BORROWED, _ctx);
    kk_string_drop(x_3, _ctx);
    kk_ref_drop(tv_2, _ctx);
    kk_types__types_dup(t, _ctx);
    kk_std_core_types__maybe_drop(_y_x10011, _ctx);
    return t;
  }
  {
    kk_ssize_t _b_x147_153 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_box_t _x_x522 = kk_std_core_hnd__open_at2(_b_x147_153, kk_infer__new_mlift_infer_10062_fun523_sq_(_ctx), kk_string_box(x_3), kk_ref_box(tv_2, _ctx), _ctx); /*1002*/
    return kk_types__types_unbox(_x_x522, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10063_fun528__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10063_fun528_sq_(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10063_fun528_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10063_fun528_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10063_fun528_sq_(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x529;
  kk_ref_t _x_x530 = kk_ref_unbox(_b_x160, _ctx); /*ref<894,infer/tenv>*/
  _x_x529 = kk_infer_tvar(_x_x530, _ctx); /*types/types*/
  return kk_types__types_box(_x_x529, _ctx);
}

kk_types__types kk_infer__mlift_infer_10063_sq_(kk_ref_t tv_3, kk_types__types t_e2_0_0, kk_context_t* _ctx) { /* forall<h> (tv : ref<h,tenv>, t-e2@0 : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 
  kk_types__types_drop(t_e2_0_0, _ctx);
  kk_ssize_t _b_x157_161 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x527 = kk_std_core_hnd__open_at1(_b_x157_161, kk_infer__new_mlift_infer_10063_fun528_sq_(_ctx), kk_ref_box(tv_3, _ctx), _ctx); /*1001*/
  return kk_types__types_unbox(_x_x527, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10064_fun536__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10064_fun536_sq_(kk_function_t _fself, kk_box_t _b_x170, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10064_fun536_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10064_fun536_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10064_fun536_sq_(kk_function_t _fself, kk_box_t _b_x170, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x537;
  kk_expr__uexpr _x_x538 = kk_expr__uexpr_unbox(_b_x170, KK_OWNED, _ctx); /*expr/uexpr*/
  _x_x537 = kk_expr_show(_x_x538, _ctx); /*string*/
  return kk_string_box(_x_x537);
}


// lift anonymous function
struct kk_infer__mlift_infer_10064_fun543__t_sq_ {
  struct kk_function_s _base;
  kk_ref_t tv_4;
};
static kk_box_t kk_infer__mlift_infer_10064_fun543_sq_(kk_function_t _fself, kk_box_t _b_x174, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10064_fun543_sq_(kk_ref_t tv_4, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10064_fun543__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10064_fun543__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10064_fun543_sq_, kk_context());
  _self->tv_4 = tv_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10064_fun543_sq_(kk_function_t _fself, kk_box_t _b_x174, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10064_fun543__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10064_fun543__t_sq_*, _fself, _ctx);
  kk_ref_t tv_4 = _self->tv_4; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_ref_dup(tv_4, _ctx);}, {}, _ctx)
  kk_types__types t_e2_0_1_176 = kk_types__types_unbox(_b_x174, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x544 = kk_infer__mlift_infer_10063_sq_(tv_4, t_e2_0_1_176, _ctx); /*types/types*/
  return kk_types__types_box(_x_x544, _ctx);
}

kk_types__types kk_infer__mlift_infer_10064_sq_(kk_expr__uexpr e2_0, kk_ref_t tv_4, kk_std_core_types__list _y_x10017, kk_context_t* _ctx) { /* forall<h> (e2@0 : expr/uexpr, tv : ref<h,tenv>, list<(expr/uid, types/types)>) -> <read<h>,write<h>,console/console,div,exn,expr/unique> types/types */ 
  kk_unit_t __ = kk_Unit;
  kk_ref_set_borrow(tv_4,(kk_std_core_types__list_box(_y_x10017, _ctx)),kk_context());
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x531;
  kk_string_t _x_x532;
  kk_define_string_literal(, _s_x533, 4, "e2: ", _ctx)
  _x_x532 = kk_string_dup(_s_x533, _ctx); /*string*/
  kk_string_t _x_x534;
  kk_box_t _x_x535;
  kk_box_t _x_x539;
  kk_expr__uexpr _x_x540 = kk_expr__uexpr_dup(e2_0, _ctx); /*expr/uexpr*/
  _x_x539 = kk_expr__uexpr_box(_x_x540, _ctx); /*1000*/
  _x_x535 = kk_std_core_hnd__open_none1(kk_infer__new_mlift_infer_10064_fun536_sq_(_ctx), _x_x539, _ctx); /*1001*/
  _x_x534 = kk_string_unbox(_x_x535); /*string*/
  _x_x531 = kk_std_core_types__lp__plus__plus__rp_(_x_x532, _x_x534, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x531, _ctx);
  kk_types__types x_4_10082;
  kk_ref_t _x_x541 = kk_ref_dup(tv_4, _ctx); /*ref<894,infer/tenv>*/
  x_4_10082 = kk_infer_infer_sq_(e2_0, _x_x541, _ctx); /*types/types*/
  if (kk_yielding(kk_context())) {
    kk_types__types_drop(x_4_10082, _ctx);
    kk_box_t _x_x542 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10064_fun543_sq_(tv_4, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x542, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10063_sq_(tv_4, x_4_10082, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10065_fun547__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10065_fun547_sq_(kk_function_t _fself, kk_box_t _b_x184, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10065_fun547_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10065_fun547_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10065_fun547_sq_(kk_function_t _fself, kk_box_t _b_x184, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _x_x548;
  kk_std_core_types__tuple2 _match_x396 = kk_std_core_types__tuple2_unbox(_b_x184, KK_OWNED, _ctx); /*(expr/uid, types/types)*/;
  {
    kk_box_t _box_x178 = _match_x396.fst;
    kk_box_t _box_x179 = _match_x396.snd;
    kk_string_t u = kk_string_unbox(_box_x178);
    kk_types__types t_0 = kk_types__types_unbox(_box_x179, KK_BORROWED, _ctx);
    kk_types__types_dup(t_0, _ctx);
    kk_string_dup(u, _ctx);
    kk_std_core_types__tuple2_drop(_match_x396, _ctx);
    _x_x548 = kk_std_core_types__new_Tuple2(kk_string_box(u), kk_types__types_box(t_0, _ctx), _ctx); /*(1038, 1039)*/
  }
  return kk_std_core_types__tuple2_box(_x_x548, _ctx);
}


// lift anonymous function
struct kk_infer__mlift_infer_10065_fun550__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e2_0_0;
  kk_ref_t tv_5;
};
static kk_box_t kk_infer__mlift_infer_10065_fun550_sq_(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10065_fun550_sq_(kk_expr__uexpr e2_0_0, kk_ref_t tv_5, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10065_fun550__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10065_fun550__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10065_fun550_sq_, kk_context());
  _self->e2_0_0 = e2_0_0;
  _self->tv_5 = tv_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10065_fun550_sq_(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10065_fun550__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10065_fun550__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e2_0_0 = _self->e2_0_0; /* expr/uexpr */
  kk_ref_t tv_5 = _self->tv_5; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e2_0_0, _ctx);kk_ref_dup(tv_5, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10017_0_194 = kk_std_core_types__list_unbox(_b_x192, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/;
  kk_types__types _x_x551 = kk_infer__mlift_infer_10064_sq_(e2_0_0, tv_5, _y_x10017_0_194, _ctx); /*types/types*/
  return kk_types__types_box(_x_x551, _ctx);
}

kk_types__types kk_infer__mlift_infer_10065_sq_(kk_expr__uexpr e2_0_0, kk_ref_t tv_5, kk_std_core_types__list subst_0_0, kk_context_t* _ctx) { /* forall<h> (e2@0 : expr/uexpr, tv : ref<h,tenv>, subst@0 : types/subst) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 
  kk_std_core_types__list_drop(subst_0_0, _ctx);
  kk_std_core_types__list _b_x182_185;
  kk_box_t _x_x545;
  kk_ref_t _x_x546 = kk_ref_dup(tv_5, _ctx); /*ref<894,infer/tenv>*/
  _x_x545 = kk_ref_get(_x_x546,kk_context()); /*1001*/
  _b_x182_185 = kk_std_core_types__list_unbox(_x_x545, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/
  kk_std_core_types__list x_5_10084 = kk_std_core_list_map(_b_x182_185, kk_infer__new_mlift_infer_10065_fun547_sq_(_ctx), _ctx); /*list<(expr/uid, types/types)>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_5_10084, _ctx);
    kk_box_t _x_x549 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10065_fun550_sq_(e2_0_0, tv_5, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x549, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10064_sq_(e2_0_0, tv_5, x_5_10084, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10066_fun553__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10066_fun553_sq_(kk_function_t _fself, kk_box_t _b_x199, kk_box_t _b_x200, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10066_fun553_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10066_fun553_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10066_fun553_sq_(kk_function_t _fself, kk_box_t _b_x199, kk_box_t _b_x200, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x554;
  kk_types__types _x_x555 = kk_types__types_unbox(_b_x199, KK_OWNED, _ctx); /*types/types*/
  kk_types__types _x_x556 = kk_types__types_unbox(_b_x200, KK_OWNED, _ctx); /*types/types*/
  _x_x554 = kk_types_unify(_x_x555, _x_x556, _ctx); /*types/subst*/
  return kk_std_core_types__list_box(_x_x554, _ctx);
}


// lift anonymous function
struct kk_infer__mlift_infer_10066_fun558__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e2_0_1;
  kk_ref_t tv_6;
};
static kk_box_t kk_infer__mlift_infer_10066_fun558_sq_(kk_function_t _fself, kk_box_t _b_x206, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10066_fun558_sq_(kk_expr__uexpr e2_0_1, kk_ref_t tv_6, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10066_fun558__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10066_fun558__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10066_fun558_sq_, kk_context());
  _self->e2_0_1 = e2_0_1;
  _self->tv_6 = tv_6;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10066_fun558_sq_(kk_function_t _fself, kk_box_t _b_x206, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10066_fun558__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10066_fun558__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e2_0_1 = _self->e2_0_1; /* expr/uexpr */
  kk_ref_t tv_6 = _self->tv_6; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e2_0_1, _ctx);kk_ref_dup(tv_6, _ctx);}, {}, _ctx)
  kk_std_core_types__list subst_0_1_208 = kk_std_core_types__list_unbox(_b_x206, KK_OWNED, _ctx); /*types/subst*/;
  kk_types__types _x_x559 = kk_infer__mlift_infer_10065_sq_(e2_0_1, tv_6, subst_0_1_208, _ctx); /*types/types*/
  return kk_types__types_box(_x_x559, _ctx);
}

kk_types__types kk_infer__mlift_infer_10066_sq_(kk_expr__uexpr e2_0_1, kk_types__types t_x, kk_ref_t tv_6, kk_types__types t_e1_0_0, kk_context_t* _ctx) { /* forall<h> (e2@0 : expr/uexpr, t-x : types/types, tv : ref<h,tenv>, t-e1@0 : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 
  kk_ssize_t _b_x195_201 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_std_core_types__list x_6_10086;
  kk_box_t _x_x552 = kk_std_core_hnd__open_at2(_b_x195_201, kk_infer__new_mlift_infer_10066_fun553_sq_(_ctx), kk_types__types_box(t_x, _ctx), kk_types__types_box(t_e1_0_0, _ctx), _ctx); /*1002*/
  x_6_10086 = kk_std_core_types__list_unbox(_x_x552, KK_OWNED, _ctx); /*types/subst*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_6_10086, _ctx);
    kk_box_t _x_x557 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10066_fun558_sq_(e2_0_1, tv_6, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x557, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10065_sq_(e2_0_1, tv_6, x_6_10086, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10067_fun562__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e2_0_2;
  kk_types__types t_x_0;
  kk_ref_t tv_7;
};
static kk_box_t kk_infer__mlift_infer_10067_fun562_sq_(kk_function_t _fself, kk_box_t _b_x210, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10067_fun562_sq_(kk_expr__uexpr e2_0_2, kk_types__types t_x_0, kk_ref_t tv_7, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10067_fun562__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10067_fun562__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10067_fun562_sq_, kk_context());
  _self->e2_0_2 = e2_0_2;
  _self->t_x_0 = t_x_0;
  _self->tv_7 = tv_7;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10067_fun562_sq_(kk_function_t _fself, kk_box_t _b_x210, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10067_fun562__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10067_fun562__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e2_0_2 = _self->e2_0_2; /* expr/uexpr */
  kk_types__types t_x_0 = _self->t_x_0; /* types/types */
  kk_ref_t tv_7 = _self->tv_7; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e2_0_2, _ctx);kk_types__types_dup(t_x_0, _ctx);kk_ref_dup(tv_7, _ctx);}, {}, _ctx)
  kk_types__types t_e1_0_1_212 = kk_types__types_unbox(_b_x210, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x563 = kk_infer__mlift_infer_10066_sq_(e2_0_2, t_x_0, tv_7, t_e1_0_1_212, _ctx); /*types/types*/
  return kk_types__types_box(_x_x563, _ctx);
}

kk_types__types kk_infer__mlift_infer_10067_sq_(kk_expr__uexpr e1_0, kk_expr__uexpr e2_0_2, kk_ref_t tv_7, kk_types__types t_x_0, kk_context_t* _ctx) { /* forall<h> (e1@0 : expr/uexpr, e2@0 : expr/uexpr, tv : ref<h,tenv>, t-x : types/types) -> <read<h>,expr/unique,write<h>,console/console,div,exn> types/types */ 
  kk_types__types x_7_10088;
  kk_ref_t _x_x560 = kk_ref_dup(tv_7, _ctx); /*ref<894,infer/tenv>*/
  x_7_10088 = kk_infer_infer_sq_(e1_0, _x_x560, _ctx); /*types/types*/
  if (kk_yielding(kk_context())) {
    kk_types__types_drop(x_7_10088, _ctx);
    kk_box_t _x_x561 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10067_fun562_sq_(e2_0_2, t_x_0, tv_7, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x561, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10066_sq_(e2_0_2, t_x_0, tv_7, x_7_10088, _ctx);
  }
}


// lift anonymous function
struct kk_infer_infer_fun567__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e2_1;
  kk_ref_t tv_8;
};
static kk_box_t kk_infer_infer_fun567_sq_(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun567_sq_(kk_expr__uexpr e2_1, kk_ref_t tv_8, kk_context_t* _ctx) {
  struct kk_infer_infer_fun567__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun567__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun567_sq_, kk_context());
  _self->e2_1 = e2_1;
  _self->tv_8 = tv_8;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun567_sq_(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx) {
  struct kk_infer_infer_fun567__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun567__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e2_1 = _self->e2_1; /* expr/uexpr */
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e2_1, _ctx);kk_ref_dup(tv_8, _ctx);}, {}, _ctx)
  kk_types__types t_e1_2_353 = kk_types__types_unbox(_b_x214, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x568 = kk_infer__mlift_infer_10059_sq_(e2_1, tv_8, t_e1_2_353, _ctx); /*types/types*/
  return kk_types__types_box(_x_x568, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun571__t_sq_ {
  struct kk_function_s _base;
  kk_ref_t tv_8;
  kk_types__types x_8_10090;
};
static kk_box_t kk_infer_infer_fun571_sq_(kk_function_t _fself, kk_box_t _b_x216, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun571_sq_(kk_ref_t tv_8, kk_types__types x_8_10090, kk_context_t* _ctx) {
  struct kk_infer_infer_fun571__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun571__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun571_sq_, kk_context());
  _self->tv_8 = tv_8;
  _self->x_8_10090 = x_8_10090;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun571_sq_(kk_function_t _fself, kk_box_t _b_x216, kk_context_t* _ctx) {
  struct kk_infer_infer_fun571__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun571__t_sq_*, _fself, _ctx);
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_types__types x_8_10090 = _self->x_8_10090; /* types/types */
  kk_drop_match(_self, {kk_ref_dup(tv_8, _ctx);kk_types__types_dup(x_8_10090, _ctx);}, {}, _ctx)
  kk_types__types t_e2_2_354 = kk_types__types_unbox(_b_x216, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x572 = kk_infer__mlift_infer_10058_sq_(x_8_10090, tv_8, t_e2_2_354, _ctx); /*types/types*/
  return kk_types__types_box(_x_x572, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun574__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun574_sq_(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun574_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun574_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun574_sq_(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x575;
  kk_ref_t _x_x576 = kk_ref_unbox(_b_x220, _ctx); /*ref<894,infer/tenv>*/
  _x_x575 = kk_infer_tvar(_x_x576, _ctx); /*types/types*/
  return kk_types__types_box(_x_x575, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun578__t_sq_ {
  struct kk_function_s _base;
  kk_types__types x_8_10090;
  kk_types__types x_9_10093;
};
static kk_box_t kk_infer_infer_fun578_sq_(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun578_sq_(kk_types__types x_8_10090, kk_types__types x_9_10093, kk_context_t* _ctx) {
  struct kk_infer_infer_fun578__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun578__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun578_sq_, kk_context());
  _self->x_8_10090 = x_8_10090;
  _self->x_9_10093 = x_9_10093;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun578_sq_(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx) {
  struct kk_infer_infer_fun578__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun578__t_sq_*, _fself, _ctx);
  kk_types__types x_8_10090 = _self->x_8_10090; /* types/types */
  kk_types__types x_9_10093 = _self->x_9_10093; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(x_8_10090, _ctx);kk_types__types_dup(x_9_10093, _ctx);}, {}, _ctx)
  kk_types__types t_ret_2_355 = kk_types__types_unbox(_b_x225, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x579 = kk_infer__mlift_infer_10057_sq_(x_8_10090, x_9_10093, t_ret_2_355, _ctx); /*types/types*/
  return kk_types__types_box(_x_x579, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun581__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun581_sq_(kk_function_t _fself, kk_box_t _b_x230, kk_box_t _b_x231, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun581_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun581_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun581_sq_(kk_function_t _fself, kk_box_t _b_x230, kk_box_t _b_x231, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x582;
  kk_types__types _x_x583 = kk_types__types_unbox(_b_x230, KK_OWNED, _ctx); /*types/types*/
  kk_types__types _x_x584 = kk_types__types_unbox(_b_x231, KK_OWNED, _ctx); /*types/types*/
  _x_x582 = kk_types_unify(_x_x583, _x_x584, _ctx); /*types/subst*/
  return kk_std_core_types__list_box(_x_x582, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun591__t_sq_ {
  struct kk_function_s _base;
  kk_types__types x_10_10096;
};
static kk_box_t kk_infer_infer_fun591_sq_(kk_function_t _fself, kk_box_t _b_x237, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun591_sq_(kk_types__types x_10_10096, kk_context_t* _ctx) {
  struct kk_infer_infer_fun591__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun591__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun591_sq_, kk_context());
  _self->x_10_10096 = x_10_10096;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun591_sq_(kk_function_t _fself, kk_box_t _b_x237, kk_context_t* _ctx) {
  struct kk_infer_infer_fun591__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun591__t_sq_*, _fself, _ctx);
  kk_types__types x_10_10096 = _self->x_10_10096; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(x_10_10096, _ctx);}, {}, _ctx)
  kk_std_core_types__list subst_1_356 = kk_std_core_types__list_unbox(_b_x237, KK_OWNED, _ctx); /*types/subst*/;
  kk_types__types _x_x592 = kk_infer__mlift_infer_10056_sq_(x_10_10096, subst_1_356, _ctx); /*types/types*/
  return kk_types__types_box(_x_x592, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun593__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun593_sq_(kk_function_t _fself, kk_box_t _b_x241, kk_box_t _b_x242, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun593_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun593_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun593_sq_(kk_function_t _fself, kk_box_t _b_x241, kk_box_t _b_x242, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x594;
  kk_types__types _x_x595 = kk_types__types_unbox(_b_x241, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x596 = kk_std_core_types__list_unbox(_b_x242, KK_OWNED, _ctx); /*types/subst*/
  _x_x594 = kk_infer_apply_sq_(_x_x595, _x_x596, _ctx); /*types/types*/
  return kk_types__types_box(_x_x594, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun599__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun599_sq_(kk_function_t _fself, kk_box_t _b_x247, kk_box_t _b_x248, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun599_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun599_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun599_sq_(kk_function_t _fself, kk_box_t _b_x247, kk_box_t _b_x248, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x600;
  kk_string_t _x_x601 = kk_string_unbox(_b_x247); /*expr/uid*/
  kk_ref_t _x_x602 = kk_ref_unbox(_b_x248, _ctx); /*ref<894,infer/tenv>*/
  _x_x600 = kk_infer_tvar_sq_(_x_x601, _x_x602, _ctx); /*types/types*/
  return kk_types__types_box(_x_x600, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun606__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr body_0;
  kk_ref_t tv_8;
};
static kk_box_t kk_infer_infer_fun606_sq_(kk_function_t _fself, kk_box_t _b_x254, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun606_sq_(kk_expr__uexpr body_0, kk_ref_t tv_8, kk_context_t* _ctx) {
  struct kk_infer_infer_fun606__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun606__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun606_sq_, kk_context());
  _self->body_0 = body_0;
  _self->tv_8 = tv_8;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun606_sq_(kk_function_t _fself, kk_box_t _b_x254, kk_context_t* _ctx) {
  struct kk_infer_infer_fun606__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun606__t_sq_*, _fself, _ctx);
  kk_expr__uexpr body_0 = _self->body_0; /* expr/uexpr */
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(body_0, _ctx);kk_ref_dup(tv_8, _ctx);}, {}, _ctx)
  kk_types__types t_a_1_357 = kk_types__types_unbox(_b_x254, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x607 = kk_infer__mlift_infer_10061_sq_(body_0, tv_8, t_a_1_357, _ctx); /*types/types*/
  return kk_types__types_box(_x_x607, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun609__t_sq_ {
  struct kk_function_s _base;
  kk_types__types x_12_10102;
};
static kk_box_t kk_infer_infer_fun609_sq_(kk_function_t _fself, kk_box_t _b_x256, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun609_sq_(kk_types__types x_12_10102, kk_context_t* _ctx) {
  struct kk_infer_infer_fun609__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun609__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun609_sq_, kk_context());
  _self->x_12_10102 = x_12_10102;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun609_sq_(kk_function_t _fself, kk_box_t _b_x256, kk_context_t* _ctx) {
  struct kk_infer_infer_fun609__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun609__t_sq_*, _fself, _ctx);
  kk_types__types x_12_10102 = _self->x_12_10102; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(x_12_10102, _ctx);}, {}, _ctx)
  kk_types__types t_body_1_358 = kk_types__types_unbox(_b_x256, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x610 = kk_infer__mlift_infer_10060_sq_(x_12_10102, t_body_1_358, _ctx); /*types/types*/
  return kk_types__types_box(_x_x610, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun617__t_sq_ {
  struct kk_function_s _base;
  kk_string_t x_14;
};
static bool kk_infer_infer_fun617_sq_(kk_function_t _fself, kk_box_t _b_x260, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun617_sq_(kk_string_t x_14, kk_context_t* _ctx) {
  struct kk_infer_infer_fun617__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun617__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun617_sq_, kk_context());
  _self->x_14 = x_14;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_infer_infer_fun617_sq_(kk_function_t _fself, kk_box_t _b_x260, kk_context_t* _ctx) {
  struct kk_infer_infer_fun617__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun617__t_sq_*, _fself, _ctx);
  kk_string_t x_14 = _self->x_14; /* expr/uid */
  kk_drop_match(_self, {kk_string_dup(x_14, _ctx);}, {}, _ctx)
  kk_string_t _x_x618 = kk_string_unbox(_b_x260); /*expr/uid*/
  return kk_string_is_eq(x_14,_x_x618,kk_context());
}


// lift anonymous function
struct kk_infer_infer_fun620__t_sq_ {
  struct kk_function_s _base;
  kk_ref_t tv_8;
  kk_string_t x_14;
};
static kk_box_t kk_infer_infer_fun620_sq_(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun620_sq_(kk_ref_t tv_8, kk_string_t x_14, kk_context_t* _ctx) {
  struct kk_infer_infer_fun620__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun620__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun620_sq_, kk_context());
  _self->tv_8 = tv_8;
  _self->x_14 = x_14;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun620_sq_(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx) {
  struct kk_infer_infer_fun620__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun620__t_sq_*, _fself, _ctx);
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_string_t x_14 = _self->x_14; /* expr/uid */
  kk_drop_match(_self, {kk_ref_dup(tv_8, _ctx);kk_string_dup(x_14, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10011_0_359 = kk_std_core_types__maybe_unbox(_b_x266, KK_OWNED, _ctx); /*maybe<types/types>*/;
  kk_types__types _x_x621 = kk_infer__mlift_infer_10062_sq_(tv_8, x_14, _y_x10011_0_359, _ctx); /*types/types*/
  return kk_types__types_box(_x_x621, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun623__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun623_sq_(kk_function_t _fself, kk_box_t _b_x272, kk_box_t _b_x273, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun623_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun623_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun623_sq_(kk_function_t _fself, kk_box_t _b_x272, kk_box_t _b_x273, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x624;
  kk_string_t _x_x625 = kk_string_unbox(_b_x272); /*expr/uid*/
  kk_ref_t _x_x626 = kk_ref_unbox(_b_x273, _ctx); /*ref<894,infer/tenv>*/
  _x_x624 = kk_infer_tvar_sq_(_x_x625, _x_x626, _ctx); /*types/types*/
  return kk_types__types_box(_x_x624, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun632__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun632_sq_(kk_function_t _fself, kk_box_t _b_x278, kk_box_t _b_x279, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun632_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun632_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun632_sq_(kk_function_t _fself, kk_box_t _b_x278, kk_box_t _b_x279, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x633;
  kk_string_t _x_x634 = kk_string_unbox(_b_x278); /*expr/uid*/
  kk_ref_t _x_x635 = kk_ref_unbox(_b_x279, _ctx); /*ref<894,infer/tenv>*/
  _x_x633 = kk_infer_tvar_sq_(_x_x634, _x_x635, _ctx); /*types/types*/
  return kk_types__types_box(_x_x633, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun639__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e1_0_0;
  kk_expr__uexpr e2_0_3;
  kk_ref_t tv_8;
};
static kk_box_t kk_infer_infer_fun639_sq_(kk_function_t _fself, kk_box_t _b_x285, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun639_sq_(kk_expr__uexpr e1_0_0, kk_expr__uexpr e2_0_3, kk_ref_t tv_8, kk_context_t* _ctx) {
  struct kk_infer_infer_fun639__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun639__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun639_sq_, kk_context());
  _self->e1_0_0 = e1_0_0;
  _self->e2_0_3 = e2_0_3;
  _self->tv_8 = tv_8;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun639_sq_(kk_function_t _fself, kk_box_t _b_x285, kk_context_t* _ctx) {
  struct kk_infer_infer_fun639__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun639__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e1_0_0 = _self->e1_0_0; /* expr/uexpr */
  kk_expr__uexpr e2_0_3 = _self->e2_0_3; /* expr/uexpr */
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e1_0_0, _ctx);kk_expr__uexpr_dup(e2_0_3, _ctx);kk_ref_dup(tv_8, _ctx);}, {}, _ctx)
  kk_types__types t_x_1_360 = kk_types__types_unbox(_b_x285, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x640 = kk_infer__mlift_infer_10067_sq_(e1_0_0, e2_0_3, tv_8, t_x_1_360, _ctx); /*types/types*/
  return kk_types__types_box(_x_x640, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun643__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e2_0_3;
  kk_ref_t tv_8;
  kk_types__types x_16_10111;
};
static kk_box_t kk_infer_infer_fun643_sq_(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun643_sq_(kk_expr__uexpr e2_0_3, kk_ref_t tv_8, kk_types__types x_16_10111, kk_context_t* _ctx) {
  struct kk_infer_infer_fun643__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun643__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun643_sq_, kk_context());
  _self->e2_0_3 = e2_0_3;
  _self->tv_8 = tv_8;
  _self->x_16_10111 = x_16_10111;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun643_sq_(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx) {
  struct kk_infer_infer_fun643__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun643__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e2_0_3 = _self->e2_0_3; /* expr/uexpr */
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_types__types x_16_10111 = _self->x_16_10111; /* types/types */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e2_0_3, _ctx);kk_ref_dup(tv_8, _ctx);kk_types__types_dup(x_16_10111, _ctx);}, {}, _ctx)
  kk_types__types t_e1_0_2_361 = kk_types__types_unbox(_b_x287, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x644 = kk_infer__mlift_infer_10066_sq_(e2_0_3, x_16_10111, tv_8, t_e1_0_2_361, _ctx); /*types/types*/
  return kk_types__types_box(_x_x644, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun646__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun646_sq_(kk_function_t _fself, kk_box_t _b_x292, kk_box_t _b_x293, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun646_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun646_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun646_sq_(kk_function_t _fself, kk_box_t _b_x292, kk_box_t _b_x293, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x647;
  kk_types__types _x_x648 = kk_types__types_unbox(_b_x292, KK_OWNED, _ctx); /*types/types*/
  kk_types__types _x_x649 = kk_types__types_unbox(_b_x293, KK_OWNED, _ctx); /*types/types*/
  _x_x647 = kk_types_unify(_x_x648, _x_x649, _ctx); /*types/subst*/
  return kk_std_core_types__list_box(_x_x647, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun651__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e2_0_3;
  kk_ref_t tv_8;
};
static kk_box_t kk_infer_infer_fun651_sq_(kk_function_t _fself, kk_box_t _b_x299, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun651_sq_(kk_expr__uexpr e2_0_3, kk_ref_t tv_8, kk_context_t* _ctx) {
  struct kk_infer_infer_fun651__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun651__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun651_sq_, kk_context());
  _self->e2_0_3 = e2_0_3;
  _self->tv_8 = tv_8;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun651_sq_(kk_function_t _fself, kk_box_t _b_x299, kk_context_t* _ctx) {
  struct kk_infer_infer_fun651__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun651__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e2_0_3 = _self->e2_0_3; /* expr/uexpr */
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e2_0_3, _ctx);kk_ref_dup(tv_8, _ctx);}, {}, _ctx)
  kk_std_core_types__list subst_0_2_362 = kk_std_core_types__list_unbox(_b_x299, KK_OWNED, _ctx); /*types/subst*/;
  kk_types__types _x_x652 = kk_infer__mlift_infer_10065_sq_(e2_0_3, tv_8, subst_0_2_362, _ctx); /*types/types*/
  return kk_types__types_box(_x_x652, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun655__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun655_sq_(kk_function_t _fself, kk_box_t _b_x307, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun655_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun655_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun655_sq_(kk_function_t _fself, kk_box_t _b_x307, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _x_x656;
  kk_std_core_types__tuple2 _match_x385 = kk_std_core_types__tuple2_unbox(_b_x307, KK_OWNED, _ctx); /*(expr/uid, types/types)*/;
  {
    kk_box_t _box_x301 = _match_x385.fst;
    kk_box_t _box_x302 = _match_x385.snd;
    kk_string_t u_0 = kk_string_unbox(_box_x301);
    kk_types__types t_0_0 = kk_types__types_unbox(_box_x302, KK_BORROWED, _ctx);
    kk_types__types_dup(t_0_0, _ctx);
    kk_string_dup(u_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x385, _ctx);
    _x_x656 = kk_std_core_types__new_Tuple2(kk_string_box(u_0), kk_types__types_box(t_0_0, _ctx), _ctx); /*(1038, 1039)*/
  }
  return kk_std_core_types__tuple2_box(_x_x656, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun658__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e2_0_3;
  kk_ref_t tv_8;
};
static kk_box_t kk_infer_infer_fun658_sq_(kk_function_t _fself, kk_box_t _b_x315, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun658_sq_(kk_expr__uexpr e2_0_3, kk_ref_t tv_8, kk_context_t* _ctx) {
  struct kk_infer_infer_fun658__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun658__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun658_sq_, kk_context());
  _self->e2_0_3 = e2_0_3;
  _self->tv_8 = tv_8;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun658_sq_(kk_function_t _fself, kk_box_t _b_x315, kk_context_t* _ctx) {
  struct kk_infer_infer_fun658__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun658__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e2_0_3 = _self->e2_0_3; /* expr/uexpr */
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e2_0_3, _ctx);kk_ref_dup(tv_8, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10017_1_363 = kk_std_core_types__list_unbox(_b_x315, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/;
  kk_types__types _x_x659 = kk_infer__mlift_infer_10064_sq_(e2_0_3, tv_8, _y_x10017_1_363, _ctx); /*types/types*/
  return kk_types__types_box(_x_x659, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun665__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun665_sq_(kk_function_t _fself, kk_box_t _b_x322, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun665_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun665_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun665_sq_(kk_function_t _fself, kk_box_t _b_x322, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x666;
  kk_expr__uexpr _x_x667 = kk_expr__uexpr_unbox(_b_x322, KK_OWNED, _ctx); /*expr/uexpr*/
  _x_x666 = kk_expr_show(_x_x667, _ctx); /*string*/
  return kk_string_box(_x_x666);
}


// lift anonymous function
struct kk_infer_infer_fun672__t_sq_ {
  struct kk_function_s _base;
  kk_ref_t tv_8;
};
static kk_box_t kk_infer_infer_fun672_sq_(kk_function_t _fself, kk_box_t _b_x326, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun672_sq_(kk_ref_t tv_8, kk_context_t* _ctx) {
  struct kk_infer_infer_fun672__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun672__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun672_sq_, kk_context());
  _self->tv_8 = tv_8;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun672_sq_(kk_function_t _fself, kk_box_t _b_x326, kk_context_t* _ctx) {
  struct kk_infer_infer_fun672__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun672__t_sq_*, _fself, _ctx);
  kk_ref_t tv_8 = _self->tv_8; /* ref<894,infer/tenv> */
  kk_drop_match(_self, {kk_ref_dup(tv_8, _ctx);}, {}, _ctx)
  kk_types__types t_e2_0_2_364 = kk_types__types_unbox(_b_x326, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x673 = kk_infer__mlift_infer_10063_sq_(tv_8, t_e2_0_2_364, _ctx); /*types/types*/
  return kk_types__types_box(_x_x673, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun675__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun675_sq_(kk_function_t _fself, kk_box_t _b_x330, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun675_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun675_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun675_sq_(kk_function_t _fself, kk_box_t _b_x330, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x676;
  kk_ref_t _x_x677 = kk_ref_unbox(_b_x330, _ctx); /*ref<894,infer/tenv>*/
  _x_x676 = kk_infer_tvar(_x_x677, _ctx); /*types/types*/
  return kk_types__types_box(_x_x676, _ctx);
}

kk_types__types kk_infer_infer_sq_(kk_expr__uexpr e, kk_ref_t tv_8, kk_context_t* _ctx) { /* forall<h> (e : expr/uexpr, tv : ref<h,tenv>) -> <pure,console/console,read<h>,expr/unique,write<h>> types/types */ 
  if (kk_expr__is_UApp(e, _ctx)) {
    struct kk_expr_UApp* _con_x564 = kk_expr__as_UApp(e, _ctx);
    kk_expr__uexpr e1 = _con_x564->e1;
    kk_expr__uexpr e2_1 = _con_x564->e2;
    kk_reuse_t _ru_x411 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x411 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_expr__uexpr_dup(e1, _ctx);
      kk_expr__uexpr_dup(e2_1, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_types__types x_8_10090;
    kk_ref_t _x_x565 = kk_ref_dup(tv_8, _ctx); /*ref<894,infer/tenv>*/
    x_8_10090 = kk_infer_infer_sq_(e1, _x_x565, _ctx); /*types/types*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x411,kk_context());
      kk_types__types_drop(x_8_10090, _ctx);
      kk_box_t _x_x566 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun567_sq_(e2_1, tv_8, _ctx), _ctx); /*3003*/
      return kk_types__types_unbox(_x_x566, KK_OWNED, _ctx);
    }
    {
      kk_types__types x_9_10093;
      kk_ref_t _x_x569 = kk_ref_dup(tv_8, _ctx); /*ref<894,infer/tenv>*/
      x_9_10093 = kk_infer_infer_sq_(e2_1, _x_x569, _ctx); /*types/types*/
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x411,kk_context());
        kk_types__types_drop(x_9_10093, _ctx);
        kk_box_t _x_x570 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun571_sq_(tv_8, x_8_10090, _ctx), _ctx); /*3003*/
        return kk_types__types_unbox(_x_x570, KK_OWNED, _ctx);
      }
      {
        kk_ssize_t _b_x217_221 = (KK_IZ(1)); /*hnd/ev-index*/;
        kk_types__types x_10_10096;
        kk_box_t _x_x573 = kk_std_core_hnd__open_at1(_b_x217_221, kk_infer_new_infer_fun574_sq_(_ctx), kk_ref_box(tv_8, _ctx), _ctx); /*1001*/
        x_10_10096 = kk_types__types_unbox(_x_x573, KK_OWNED, _ctx); /*types/types*/
        if (kk_yielding(kk_context())) {
          kk_reuse_drop(_ru_x411,kk_context());
          kk_types__types_drop(x_10_10096, _ctx);
          kk_box_t _x_x577 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun578_sq_(x_8_10090, x_9_10093, _ctx), _ctx); /*3003*/
          return kk_types__types_unbox(_x_x577, KK_OWNED, _ctx);
        }
        {
          kk_ssize_t _b_x226_232 = (KK_IZ(0)); /*hnd/ev-index*/;
          kk_std_core_types__list x_11_10099;
          kk_box_t _x_x580;
          kk_box_t _x_x585;
          kk_types__types _x_x586;
          kk_types__types _x_x587;
          kk_types__types _x_x588 = kk_types__types_dup(kk_types_t_arrow, _ctx); /*types/types*/
          _x_x587 = kk_types__new_TApp(_ru_x411, 0, _x_x588, x_9_10093, _ctx); /*types/types*/
          kk_types__types _x_x589 = kk_types__types_dup(x_10_10096, _ctx); /*types/types*/
          _x_x586 = kk_types__new_TApp(kk_reuse_null, 0, _x_x587, _x_x589, _ctx); /*types/types*/
          _x_x585 = kk_types__types_box(_x_x586, _ctx); /*1001*/
          _x_x580 = kk_std_core_hnd__open_at2(_b_x226_232, kk_infer_new_infer_fun581_sq_(_ctx), kk_types__types_box(x_8_10090, _ctx), _x_x585, _ctx); /*1002*/
          x_11_10099 = kk_std_core_types__list_unbox(_x_x580, KK_OWNED, _ctx); /*types/subst*/
          kk_box_t _x_x590;
          if (kk_yielding(kk_context())) {
            kk_std_core_types__list_drop(x_11_10099, _ctx);
            _x_x590 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun591_sq_(x_10_10096, _ctx), _ctx); /*3003*/
          }
          else {
            _x_x590 = kk_std_core_hnd__open_none2(kk_infer_new_infer_fun593_sq_(_ctx), kk_types__types_box(x_10_10096, _ctx), kk_std_core_types__list_box(x_11_10099, _ctx), _ctx); /*3003*/
          }
          return kk_types__types_unbox(_x_x590, KK_OWNED, _ctx);
        }
      }
    }
  }
  if (kk_expr__is_ULam(e, _ctx)) {
    struct kk_expr_ULam* _con_x597 = kk_expr__as_ULam(e, _ctx);
    kk_string_t a_0 = _con_x597->a;
    kk_expr__uexpr body_0 = _con_x597->body;
    kk_reuse_t _ru_x412 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x412 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_string_dup(a_0, _ctx);
      kk_expr__uexpr_dup(body_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_ssize_t _b_x243_249 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_types__types x_12_10102;
    kk_box_t _x_x598;
    kk_box_t _x_x603;
    kk_ref_t _x_x604 = kk_ref_dup(tv_8, _ctx); /*ref<894,infer/tenv>*/
    _x_x603 = kk_ref_box(_x_x604, _ctx); /*1001*/
    _x_x598 = kk_std_core_hnd__open_at2(_b_x243_249, kk_infer_new_infer_fun599_sq_(_ctx), kk_string_box(a_0), _x_x603, _ctx); /*1002*/
    x_12_10102 = kk_types__types_unbox(_x_x598, KK_OWNED, _ctx); /*types/types*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x412,kk_context());
      kk_types__types_drop(x_12_10102, _ctx);
      kk_box_t _x_x605 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun606_sq_(body_0, tv_8, _ctx), _ctx); /*3003*/
      return kk_types__types_unbox(_x_x605, KK_OWNED, _ctx);
    }
    {
      kk_types__types x_13_10105 = kk_infer_infer_sq_(body_0, tv_8, _ctx); /*types/types*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x412,kk_context());
        kk_types__types_drop(x_13_10105, _ctx);
        kk_box_t _x_x608 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun609_sq_(x_12_10102, _ctx), _ctx); /*3003*/
        return kk_types__types_unbox(_x_x608, KK_OWNED, _ctx);
      }
      {
        kk_types__types _x_x611;
        kk_types__types _x_x612 = kk_types__types_dup(kk_types_t_arrow, _ctx); /*types/types*/
        _x_x611 = kk_types__new_TApp(_ru_x412, 0, _x_x612, x_12_10102, _ctx); /*types/types*/
        return kk_types__new_TApp(kk_reuse_null, 0, _x_x611, x_13_10105, _ctx);
      }
    }
  }
  if (kk_expr__is_UVar(e, _ctx)) {
    struct kk_expr_UVar* _con_x613 = kk_expr__as_UVar(e, _ctx);
    kk_string_t x_14 = _con_x613->x;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(x_14, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__list _b_x258_261;
    kk_box_t _x_x614;
    kk_ref_t _x_x615 = kk_ref_dup(tv_8, _ctx); /*ref<894,infer/tenv>*/
    _x_x614 = kk_ref_get(_x_x615,kk_context()); /*1001*/
    _b_x258_261 = kk_std_core_types__list_unbox(_x_x614, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/
    kk_std_core_types__maybe x_15_10108;
    kk_function_t _x_x616;
    kk_string_dup(x_14, _ctx);
    _x_x616 = kk_infer_new_infer_fun617_sq_(x_14, _ctx); /*(1001) -> 1003 bool*/
    x_15_10108 = kk_std_core_list_lookup(_b_x258_261, _x_x616, _ctx); /*maybe<types/types>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_15_10108, _ctx);
      kk_box_t _x_x619 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun620_sq_(tv_8, x_14, _ctx), _ctx); /*3003*/
      return kk_types__types_unbox(_x_x619, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Just(x_15_10108, _ctx)) {
      kk_box_t _box_x267 = x_15_10108._cons.Just.value;
      kk_types__types t_1 = kk_types__types_unbox(_box_x267, KK_BORROWED, _ctx);
      kk_types__types_dup(t_1, _ctx);
      kk_std_core_types__maybe_drop(x_15_10108, _ctx);
      kk_string_drop(x_14, _ctx);
      kk_ref_drop(tv_8, _ctx);
      return t_1;
    }
    {
      kk_ssize_t _b_x268_341 = (KK_IZ(1)); /*hnd/ev-index*/;
      kk_box_t _x_x622 = kk_std_core_hnd__open_at2(_b_x268_341, kk_infer_new_infer_fun623_sq_(_ctx), kk_string_box(x_14), kk_ref_box(tv_8, _ctx), _ctx); /*1002*/
      return kk_types__types_unbox(_x_x622, KK_OWNED, _ctx);
    }
  }
  if (kk_expr__is_ULit(e, _ctx)) {
    struct kk_expr_ULit* _con_x627 = kk_expr__as_ULit(e, _ctx);
    kk_value__value v = _con_x627->v;
    kk_ref_drop(tv_8, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_value__value_dup(v, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    if (kk_value__is_Int(v, _ctx)) {
      struct kk_value_Int* _con_x628 = kk_value__as_Int(v, _ctx);
      kk_integer_t i = _con_x628->x;
      if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
        kk_integer_drop(i, _ctx);
        kk_datatype_ptr_free(v, _ctx);
      }
      else {
        kk_datatype_ptr_decref(v, _ctx);
      }
      return kk_types__types_dup(kk_types_t_int, _ctx);
    }
    {
      struct kk_value_String* _con_x629 = kk_value__as_String(v, _ctx);
      kk_string_t s = _con_x629->x;
      if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
        kk_string_drop(s, _ctx);
        kk_datatype_ptr_free(v, _ctx);
      }
      else {
        kk_datatype_ptr_decref(v, _ctx);
      }
      return kk_types__types_dup(kk_types_t_string, _ctx);
    }
  }
  {
    struct kk_expr_ULet* _con_x630 = kk_expr__as_ULet(e, _ctx);
    kk_string_t x_0_0 = _con_x630->x;
    kk_expr__uexpr e1_0_0 = _con_x630->e1;
    kk_expr__uexpr e2_0_3 = _con_x630->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_expr__uexpr_dup(e1_0_0, _ctx);
      kk_expr__uexpr_dup(e2_0_3, _ctx);
      kk_string_dup(x_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_ssize_t _b_x274_280 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_types__types x_16_10111;
    kk_box_t _x_x631;
    kk_box_t _x_x636;
    kk_ref_t _x_x637 = kk_ref_dup(tv_8, _ctx); /*ref<894,infer/tenv>*/
    _x_x636 = kk_ref_box(_x_x637, _ctx); /*1001*/
    _x_x631 = kk_std_core_hnd__open_at2(_b_x274_280, kk_infer_new_infer_fun632_sq_(_ctx), kk_string_box(x_0_0), _x_x636, _ctx); /*1002*/
    x_16_10111 = kk_types__types_unbox(_x_x631, KK_OWNED, _ctx); /*types/types*/
    if (kk_yielding(kk_context())) {
      kk_types__types_drop(x_16_10111, _ctx);
      kk_box_t _x_x638 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun639_sq_(e1_0_0, e2_0_3, tv_8, _ctx), _ctx); /*3003*/
      return kk_types__types_unbox(_x_x638, KK_OWNED, _ctx);
    }
    {
      kk_types__types x_17_10114;
      kk_ref_t _x_x641 = kk_ref_dup(tv_8, _ctx); /*ref<894,infer/tenv>*/
      x_17_10114 = kk_infer_infer_sq_(e1_0_0, _x_x641, _ctx); /*types/types*/
      if (kk_yielding(kk_context())) {
        kk_types__types_drop(x_17_10114, _ctx);
        kk_box_t _x_x642 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun643_sq_(e2_0_3, tv_8, x_16_10111, _ctx), _ctx); /*3003*/
        return kk_types__types_unbox(_x_x642, KK_OWNED, _ctx);
      }
      {
        kk_ssize_t _b_x288_294 = (KK_IZ(0)); /*hnd/ev-index*/;
        kk_std_core_types__list x_18_10117;
        kk_box_t _x_x645 = kk_std_core_hnd__open_at2(_b_x288_294, kk_infer_new_infer_fun646_sq_(_ctx), kk_types__types_box(x_16_10111, _ctx), kk_types__types_box(x_17_10114, _ctx), _ctx); /*1002*/
        x_18_10117 = kk_std_core_types__list_unbox(_x_x645, KK_OWNED, _ctx); /*types/subst*/
        kk_std_core_types__list_drop(x_18_10117, _ctx);
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x650 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun651_sq_(e2_0_3, tv_8, _ctx), _ctx); /*3003*/
          return kk_types__types_unbox(_x_x650, KK_OWNED, _ctx);
        }
        {
          kk_std_core_types__list _b_x305_308;
          kk_box_t _x_x653;
          kk_ref_t _x_x654 = kk_ref_dup(tv_8, _ctx); /*ref<894,infer/tenv>*/
          _x_x653 = kk_ref_get(_x_x654,kk_context()); /*1001*/
          _b_x305_308 = kk_std_core_types__list_unbox(_x_x653, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/
          kk_std_core_types__list x_19_10120 = kk_std_core_list_map(_b_x305_308, kk_infer_new_infer_fun655_sq_(_ctx), _ctx); /*list<(expr/uid, types/types)>*/;
          if (kk_yielding(kk_context())) {
            kk_std_core_types__list_drop(x_19_10120, _ctx);
            kk_box_t _x_x657 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun658_sq_(e2_0_3, tv_8, _ctx), _ctx); /*3003*/
            return kk_types__types_unbox(_x_x657, KK_OWNED, _ctx);
          }
          {
            kk_unit_t ___1 = kk_Unit;
            kk_ref_set_borrow(tv_8,(kk_std_core_types__list_box(x_19_10120, _ctx)),kk_context());
            kk_unit_t ___0_0 = kk_Unit;
            kk_string_t _x_x660;
            kk_string_t _x_x661;
            kk_define_string_literal(, _s_x662, 4, "e2: ", _ctx)
            _x_x661 = kk_string_dup(_s_x662, _ctx); /*string*/
            kk_string_t _x_x663;
            kk_box_t _x_x664;
            kk_box_t _x_x668;
            kk_expr__uexpr _x_x669 = kk_expr__uexpr_dup(e2_0_3, _ctx); /*expr/uexpr*/
            _x_x668 = kk_expr__uexpr_box(_x_x669, _ctx); /*1000*/
            _x_x664 = kk_std_core_hnd__open_none1(kk_infer_new_infer_fun665_sq_(_ctx), _x_x668, _ctx); /*1001*/
            _x_x663 = kk_string_unbox(_x_x664); /*string*/
            _x_x660 = kk_std_core_types__lp__plus__plus__rp_(_x_x661, _x_x663, _ctx); /*string*/
            kk_std_core_console_printsln(_x_x660, _ctx);
            kk_types__types x_20_10123;
            kk_ref_t _x_x670 = kk_ref_dup(tv_8, _ctx); /*ref<894,infer/tenv>*/
            x_20_10123 = kk_infer_infer_sq_(e2_0_3, _x_x670, _ctx); /*types/types*/
            kk_types__types_drop(x_20_10123, _ctx);
            if (kk_yielding(kk_context())) {
              kk_box_t _x_x671 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun672_sq_(tv_8, _ctx), _ctx); /*3003*/
              return kk_types__types_unbox(_x_x671, KK_OWNED, _ctx);
            }
            {
              kk_ssize_t _b_x327_350 = (KK_IZ(1)); /*hnd/ev-index*/;
              kk_box_t _x_x674 = kk_std_core_hnd__open_at1(_b_x327_350, kk_infer_new_infer_fun675_sq_(_ctx), kk_ref_box(tv_8, _ctx), _ctx); /*1001*/
              return kk_types__types_unbox(_x_x674, KK_OWNED, _ctx);
            }
          }
        }
      }
    }
  }
}
 
// とりあえずinferで得たいのは型が不明なuidに対する型代入
// 判明しているものは別で得られるとうれしい


// lift anonymous function
struct kk_infer_infer_fun681__t {
  struct kk_function_s _base;
  kk_expr__uexpr e;
  kk_ref_t tv;
};
static kk_box_t kk_infer_infer_fun681(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun681(kk_expr__uexpr e, kk_ref_t tv, kk_context_t* _ctx) {
  struct kk_infer_infer_fun681__t* _self = kk_function_alloc_as(struct kk_infer_infer_fun681__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun681, kk_context());
  _self->e = e;
  _self->tv = tv;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun681(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_infer_infer_fun681__t* _self = kk_function_as(struct kk_infer_infer_fun681__t*, _fself, _ctx);
  kk_expr__uexpr e = _self->e; /* expr/uexpr */
  kk_ref_t tv = _self->tv; /* forall<h> ref<h,infer/tenv> */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e, _ctx);kk_ref_dup(tv, _ctx);}, {}, _ctx)
  kk_types__types _x_x682 = kk_infer_infer_sq_(e, tv, _ctx); /*types/types*/
  return kk_types__types_box(_x_x682, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun684__t {
  struct kk_function_s _base;
  kk_ref_t tv;
};
static kk_box_t kk_infer_infer_fun684(kk_function_t _fself, kk_box_t _b_x373, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun684(kk_ref_t tv, kk_context_t* _ctx) {
  struct kk_infer_infer_fun684__t* _self = kk_function_alloc_as(struct kk_infer_infer_fun684__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun684, kk_context());
  _self->tv = tv;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun684(kk_function_t _fself, kk_box_t _b_x373, kk_context_t* _ctx) {
  struct kk_infer_infer_fun684__t* _self = kk_function_as(struct kk_infer_infer_fun684__t*, _fself, _ctx);
  kk_ref_t tv = _self->tv; /* forall<h> ref<h,infer/tenv> */
  kk_drop_match(_self, {kk_ref_dup(tv, _ctx);}, {}, _ctx)
  kk_types__types wild___378 = kk_types__types_unbox(_b_x373, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types_drop(wild___378, _ctx);
  kk_ref_t _b_x371_376 = tv; /*ref<$916,infer/tenv>*/;
  return kk_ref_get(_b_x371_376,kk_context());
}

kk_std_core_types__list kk_infer_infer(kk_expr__uexpr e, kk_context_t* _ctx) { /* (e : expr/uexpr) -> <pure,console/console> tenv */ 
  kk_ref_t tv = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*forall<h> ref<h,infer/tenv>*/;
  kk_types__types x_10126;
  kk_box_t _x_x679;
  kk_function_t _x_x680;
  kk_ref_dup(tv, _ctx);
  _x_x680 = kk_infer_new_infer_fun681(e, tv, _ctx); /*() -> <expr/unique|1001> 1000*/
  _x_x679 = kk_expr_handle_unique(_x_x680, _ctx); /*1000*/
  x_10126 = kk_types__types_unbox(_x_x679, KK_OWNED, _ctx); /*types/types*/
  kk_types__types_drop(x_10126, _ctx);
  kk_box_t _x_x683;
  if (kk_yielding(kk_context())) {
    _x_x683 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun684(tv, _ctx), _ctx); /*3003*/
  }
  else {
    _x_x683 = kk_ref_get(tv,kk_context()); /*3003*/
  }
  return kk_std_core_types__list_unbox(_x_x683, KK_OWNED, _ctx);
}

// initialization
void kk_infer__init(kk_context_t* _ctx){
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
  kk_value__init(_ctx);
  kk_expr__init(_ctx);
  kk_types__init(_ctx);
  kk_std_core_string__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_infer__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_string__done(_ctx);
  kk_types__done(_ctx);
  kk_expr__done(_ctx);
  kk_value__done(_ctx);
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
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
