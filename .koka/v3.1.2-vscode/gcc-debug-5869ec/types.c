// Koka generated module: types, koka version: 3.1.2, platform: 64-bit
#include "types.h"

kk_types__types kk_types_t_unit;

kk_types__types kk_types_t_int;

kk_types__types kk_types_t_arrow;

kk_string_t kk_types_show(kk_types__types t, kk_context_t* _ctx) { /* (t : types) -> div string */ 
  if (kk_types__is_TApp(t, _ctx)) {
    struct kk_types_TApp* _con_x201 = kk_types__as_TApp(t, _ctx);
    kk_types__types r = _con_x201->r;
    kk_types__types_dup(r, _ctx);
    kk_string_t _x_x202 = kk_types_show(t, _ctx); /*string*/
    kk_string_t _x_x203;
    kk_string_t _x_x204;
    kk_define_string_literal(, _s_x205, 1, " ", _ctx)
    _x_x204 = kk_string_dup(_s_x205, _ctx); /*string*/
    kk_string_t _x_x206 = kk_types_show(r, _ctx); /*string*/
    _x_x203 = kk_std_core_types__lp__plus__plus__rp_(_x_x204, _x_x206, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x202, _x_x203, _ctx);
  }
  if (kk_types__is_TCon(t, _ctx)) {
    struct kk_types_TCon* _con_x207 = kk_types__as_TCon(t, _ctx);
    kk_string_t id = _con_x207->id;
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      kk_datatype_ptr_free(t, _ctx);
    }
    else {
      kk_string_dup(id, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    return id;
  }
  {
    struct kk_types_TVar* _con_x208 = kk_types__as_TVar(t, _ctx);
    kk_string_t u = _con_x208->u;
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      kk_datatype_ptr_free(t, _ctx);
    }
    else {
      kk_string_dup(u, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    kk_string_t _x_x209;
    kk_define_string_literal(, _s_x210, 1, "\'", _ctx)
    _x_x209 = kk_string_dup(_s_x210, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x209, u, _ctx);
  }
}

bool kk_types__lp__eq__eq__rp_(kk_types__types t, kk_types__types t_sq_, kk_context_t* _ctx) { /* (t : types, t' : types) -> div bool */ 
  kk__tailcall: ;
  if (kk_types__is_TApp(t, _ctx) && kk_types__is_TApp(t_sq_, _ctx)) {
    struct kk_types_TApp* _con_x213 = kk_types__as_TApp(t, _ctx);
    struct kk_types_TApp* _con_x214 = kk_types__as_TApp(t_sq_, _ctx);
    kk_types__types l = _con_x213->l;
    kk_types__types r = _con_x213->r;
    kk_types__types l_sq_ = _con_x214->l;
    kk_types__types r_sq_ = _con_x214->r;
    if kk_likely(kk_datatype_ptr_is_unique(t_sq_, _ctx)) {
      kk_datatype_ptr_free(t_sq_, _ctx);
    }
    else {
      kk_types__types_dup(l_sq_, _ctx);
      kk_types__types_dup(r_sq_, _ctx);
      kk_datatype_ptr_decref(t_sq_, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      kk_datatype_ptr_free(t, _ctx);
    }
    else {
      kk_types__types_dup(l, _ctx);
      kk_types__types_dup(r, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    bool _match_x173 = kk_types__lp__eq__eq__rp_(l, l_sq_, _ctx); /*bool*/;
    if (_match_x173) { // tailcall
                       t = r;
                       t_sq_ = r_sq_;
                       goto kk__tailcall;
    }
    {
      kk_types__types_drop(r_sq_, _ctx);
      kk_types__types_drop(r, _ctx);
      return false;
    }
  }
  if (kk_types__is_TCon(t, _ctx) && kk_types__is_TCon(t_sq_, _ctx)) {
    struct kk_types_TCon* _con_x215 = kk_types__as_TCon(t, _ctx);
    struct kk_types_TCon* _con_x216 = kk_types__as_TCon(t_sq_, _ctx);
    kk_string_t id = _con_x215->id;
    kk_string_t id_sq_ = _con_x216->id;
    if kk_likely(kk_datatype_ptr_is_unique(t_sq_, _ctx)) {
      kk_datatype_ptr_free(t_sq_, _ctx);
    }
    else {
      kk_string_dup(id_sq_, _ctx);
      kk_datatype_ptr_decref(t_sq_, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      kk_datatype_ptr_free(t, _ctx);
    }
    else {
      kk_string_dup(id, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    return kk_string_is_eq(id,id_sq_,kk_context());
  }
  if (kk_types__is_TVar(t, _ctx) && kk_types__is_TVar(t_sq_, _ctx)) {
    struct kk_types_TVar* _con_x217 = kk_types__as_TVar(t, _ctx);
    struct kk_types_TVar* _con_x218 = kk_types__as_TVar(t_sq_, _ctx);
    kk_string_t u = _con_x217->u;
    kk_string_t u_sq_ = _con_x218->u;
    if kk_likely(kk_datatype_ptr_is_unique(t_sq_, _ctx)) {
      kk_datatype_ptr_free(t_sq_, _ctx);
    }
    else {
      kk_string_dup(u_sq_, _ctx);
      kk_datatype_ptr_decref(t_sq_, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      kk_datatype_ptr_free(t, _ctx);
    }
    else {
      kk_string_dup(u, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    return kk_string_is_eq(u,u_sq_,kk_context());
  }
  {
    kk_types__types_drop(t_sq_, _ctx);
    kk_types__types_drop(t, _ctx);
    return false;
  }
}
 
// TODO: 出役チェック

kk_std_core_types__list kk_types_tvar(kk_string_t u, kk_types__types t, kk_context_t* _ctx) { /* (u : string, t : types) -> div list<(string, types)> */ 
  bool _match_x172;
  kk_types__types _x_x219 = kk_types__types_dup(t, _ctx); /*types/types*/
  kk_types__types _x_x220;
  kk_string_t _x_x221 = kk_string_dup(u, _ctx); /*string*/
  _x_x220 = kk_types__new_TVar(kk_reuse_null, 0, _x_x221, _ctx); /*types/types*/
  _match_x172 = kk_types__lp__eq__eq__rp_(_x_x219, _x_x220, _ctx); /*bool*/
  if (_match_x172) {
    kk_string_drop(u, _ctx);
    kk_types__types_drop(t, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_box_t _x_x222;
    kk_std_core_types__tuple2 _x_x223 = kk_std_core_types__new_Tuple2(kk_string_box(u), kk_types__types_box(t, _ctx), _ctx); /*(1038, 1039)*/
    _x_x222 = kk_std_core_types__tuple2_box(_x_x223, _ctx); /*1024*/
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x222, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_types__trmc_apply_fun231__t {
  struct kk_function_s _base;
  kk_string_t u;
};
static bool kk_types__trmc_apply_fun231(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static kk_function_t kk_types__new_trmc_apply_fun231(kk_string_t u, kk_context_t* _ctx) {
  struct kk_types__trmc_apply_fun231__t* _self = kk_function_alloc_as(struct kk_types__trmc_apply_fun231__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_types__trmc_apply_fun231, kk_context());
  _self->u = u;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_types__trmc_apply_fun231(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  struct kk_types__trmc_apply_fun231__t* _self = kk_function_as(struct kk_types__trmc_apply_fun231__t*, _fself, _ctx);
  kk_string_t u = _self->u; /* string */
  kk_drop_match(_self, {kk_string_dup(u, _ctx);}, {}, _ctx)
  kk_string_t u_46_sq_ = kk_string_unbox(_b_x24); /*string*/;
  return kk_string_is_eq(u,u_46_sq_,kk_context());
}

kk_types__types kk_types__trmc_apply(kk_types__types t, kk_std_core_types__list s, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (t : types, s : subst, ctx<types>) -> div types */ 
  kk__tailcall: ;
  if (kk_types__is_TApp(t, _ctx)) {
    struct kk_types_TApp* _con_x224 = kk_types__as_TApp(t, _ctx);
    kk_types__types l = _con_x224->l;
    kk_types__types r = _con_x224->r;
    kk_reuse_t _ru_x182 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      _ru_x182 = (kk_datatype_ptr_reuse(t, _ctx));
    }
    else {
      kk_types__types_dup(l, _ctx);
      kk_types__types_dup(r, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    kk_types__types _trmc_x10002;
    kk_std_core_types__list _x_x225 = kk_std_core_types__list_dup(s, _ctx); /*types/subst*/
    _trmc_x10002 = kk_types_apply(l, _x_x225, _ctx); /*types/types*/
    kk_types__types _trmc_x10003 = kk_datatype_null(); /*types/types*/;
    kk_types__types _trmc_x10004;
    if kk_likely(_ru_x182!=NULL) {
      struct kk_types_TApp* _con_x226 = (struct kk_types_TApp*)_ru_x182;
      _con_x226->l = _trmc_x10002;
      _con_x226->r = _trmc_x10003;
      _trmc_x10004 = kk_types__base_TApp(_con_x226, _ctx); /*types/types*/
    }
    else {
      _trmc_x10004 = kk_types__new_TApp(kk_reuse_null, 0, _trmc_x10002, _trmc_x10003, _ctx); /*types/types*/
    }
    kk_field_addr_t _b_x21_34 = kk_field_addr_create(&kk_types__as_TApp(_trmc_x10004, _ctx)->r, _ctx); /*@field-addr<types/types>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x227 = kk_cctx_extend_linear(_acc,(kk_types__types_box(_trmc_x10004, _ctx)),_b_x21_34,kk_context()); /*ctx<0>*/
      t = r;
      _acc = _x_x227;
      goto kk__tailcall;
    }
  }
  if (kk_types__is_TVar(t, _ctx)) {
    struct kk_types_TVar* _con_x228 = kk_types__as_TVar(t, _ctx);
    kk_string_t u = _con_x228->u;
    kk_reuse_t _ru_x183 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      _ru_x183 = (kk_datatype_ptr_reuse(t, _ctx));
    }
    else {
      kk_string_dup(u, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    kk_box_t _x_x229;
    kk_std_core_types__maybe _match_x171;
    kk_function_t _x_x230;
    kk_string_dup(u, _ctx);
    _x_x230 = kk_types__new_trmc_apply_fun231(u, _ctx); /*(1001) -> 1003 bool*/
    _match_x171 = kk_std_core_list_lookup(s, _x_x230, _ctx); /*maybe<1002>*/
    if (kk_std_core_types__is_Just(_match_x171, _ctx)) {
      kk_box_t _box_x25 = _match_x171._cons.Just.value;
      kk_types__types t_sq_ = kk_types__types_unbox(_box_x25, KK_BORROWED, _ctx);
      kk_reuse_drop(_ru_x183,kk_context());
      kk_string_drop(u, _ctx);
      kk_types__types_dup(t_sq_, _ctx);
      kk_std_core_types__maybe_drop(_match_x171, _ctx);
      _x_x229 = kk_cctx_apply_linear(_acc,(kk_types__types_box(t_sq_, _ctx)),kk_context()); /*-1*/
    }
    else {
      kk_box_t _x_x232;
      kk_types__types _x_x233;
      if kk_likely(_ru_x183!=NULL) {
        struct kk_types_TVar* _con_x234 = (struct kk_types_TVar*)_ru_x183;
        _x_x233 = kk_types__base_TVar(_con_x234, _ctx); /*types/types*/
      }
      else {
        _x_x233 = kk_types__new_TVar(kk_reuse_null, 0, u, _ctx); /*types/types*/
      }
      _x_x232 = kk_types__types_box(_x_x233, _ctx); /*-1*/
      _x_x229 = kk_cctx_apply_linear(_acc,_x_x232,kk_context()); /*-1*/
    }
    return kk_types__types_unbox(_x_x229, KK_OWNED, _ctx);
  }
  {
    struct kk_types_TCon* _con_x235 = kk_types__as_TCon(t, _ctx);
    kk_std_core_types__list_drop(s, _ctx);
    kk_box_t _x_x236 = kk_cctx_apply_linear(_acc,(kk_types__types_box(t, _ctx)),kk_context()); /*-1*/
    return kk_types__types_unbox(_x_x236, KK_OWNED, _ctx);
  }
}

kk_types__types kk_types_apply(kk_types__types t_1, kk_std_core_types__list s_0, kk_context_t* _ctx) { /* (t : types, s : subst) -> div types */ 
  kk_std_core_types__cctx _x_x237 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_types__trmc_apply(t_1, s_0, _x_x237, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_types__mlift_unify_10030(kk_std_core_types__list s_sq_, kk_std_core_types__list _y_x10008, kk_context_t* _ctx) { /* (s' : subst, list<(string, types)>) -> <div,console/console,exn> list<(string, types)> */ 
  return kk_std_core_list_append(s_sq_, _y_x10008, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_types__mlift_unify_10031_fun239__t {
  struct kk_function_s _base;
  kk_std_core_types__list s_0_sq_;
};
static kk_box_t kk_types__mlift_unify_10031_fun239(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx);
static kk_function_t kk_types__new_mlift_unify_10031_fun239(kk_std_core_types__list s_0_sq_, kk_context_t* _ctx) {
  struct kk_types__mlift_unify_10031_fun239__t* _self = kk_function_alloc_as(struct kk_types__mlift_unify_10031_fun239__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_types__mlift_unify_10031_fun239, kk_context());
  _self->s_0_sq_ = s_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_types__mlift_unify_10031_fun242__t {
  struct kk_function_s _base;
};
static kk_box_t kk_types__mlift_unify_10031_fun242(kk_function_t _fself, kk_box_t _b_x52, kk_box_t _b_x53, kk_context_t* _ctx);
static kk_function_t kk_types__new_mlift_unify_10031_fun242(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_types__mlift_unify_10031_fun242, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_types__mlift_unify_10031_fun242(kk_function_t _fself, kk_box_t _b_x52, kk_box_t _b_x53, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x243;
  kk_types__types _x_x244 = kk_types__types_unbox(_b_x52, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x245 = kk_std_core_types__list_unbox(_b_x53, KK_OWNED, _ctx); /*types/subst*/
  _x_x243 = kk_types_apply(_x_x244, _x_x245, _ctx); /*types/types*/
  return kk_types__types_box(_x_x243, _ctx);
}
static kk_box_t kk_types__mlift_unify_10031_fun239(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx) {
  struct kk_types__mlift_unify_10031_fun239__t* _self = kk_function_as(struct kk_types__mlift_unify_10031_fun239__t*, _fself, _ctx);
  kk_std_core_types__list s_0_sq_ = _self->s_0_sq_; /* types/subst */
  kk_drop_match(_self, {kk_std_core_types__list_dup(s_0_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x240;
  kk_std_core_types__tuple2 _match_x170 = kk_std_core_types__tuple2_unbox(_b_x58, KK_OWNED, _ctx); /*(string, types/types)*/;
  {
    kk_box_t _box_x47 = _match_x170.fst;
    kk_box_t _box_x48 = _match_x170.snd;
    kk_string_t u = kk_string_unbox(_box_x47);
    kk_types__types t = kk_types__types_unbox(_box_x48, KK_BORROWED, _ctx);
    kk_types__types_dup(t, _ctx);
    kk_string_dup(u, _ctx);
    kk_std_core_types__tuple2_drop(_match_x170, _ctx);
    kk_types__types _b_x55_62;
    kk_box_t _x_x241 = kk_std_core_hnd__open_none2(kk_types__new_mlift_unify_10031_fun242(_ctx), kk_types__types_box(t, _ctx), kk_std_core_types__list_box(s_0_sq_, _ctx), _ctx); /*1002*/
    _b_x55_62 = kk_types__types_unbox(_x_x241, KK_OWNED, _ctx); /*types/types*/
    _x_x240 = kk_std_core_types__new_Tuple2(kk_string_box(u), kk_types__types_box(_b_x55_62, _ctx), _ctx); /*(1038, 1039)*/
  }
  return kk_std_core_types__tuple2_box(_x_x240, _ctx);
}


// lift anonymous function
struct kk_types__mlift_unify_10031_fun247__t {
  struct kk_function_s _base;
  kk_std_core_types__list s_0_sq_;
};
static kk_box_t kk_types__mlift_unify_10031_fun247(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx);
static kk_function_t kk_types__new_mlift_unify_10031_fun247(kk_std_core_types__list s_0_sq_, kk_context_t* _ctx) {
  struct kk_types__mlift_unify_10031_fun247__t* _self = kk_function_alloc_as(struct kk_types__mlift_unify_10031_fun247__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_types__mlift_unify_10031_fun247, kk_context());
  _self->s_0_sq_ = s_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_types__mlift_unify_10031_fun247(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx) {
  struct kk_types__mlift_unify_10031_fun247__t* _self = kk_function_as(struct kk_types__mlift_unify_10031_fun247__t*, _fself, _ctx);
  kk_std_core_types__list s_0_sq_ = _self->s_0_sq_; /* types/subst */
  kk_drop_match(_self, {kk_std_core_types__list_dup(s_0_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10008_0_70 = kk_std_core_types__list_unbox(_b_x68, KK_OWNED, _ctx); /*list<(string, types/types)>*/;
  kk_std_core_types__list _x_x248 = kk_types__mlift_unify_10030(s_0_sq_, _y_x10008_0_70, _ctx); /*list<(string, types/types)>*/
  return kk_std_core_types__list_box(_x_x248, _ctx);
}

kk_std_core_types__list kk_types__mlift_unify_10031(kk_std_core_types__list s, kk_std_core_types__list s_0_sq_, kk_context_t* _ctx) { /* (s : subst, s' : subst) -> <div,exn,console/console> list<(string, types)> */ 
  kk_std_core_types__list x_10033;
  kk_function_t _x_x238;
  kk_std_core_types__list_dup(s_0_sq_, _ctx);
  _x_x238 = kk_types__new_mlift_unify_10031_fun239(s_0_sq_, _ctx); /*(1001) -> 1003 1002*/
  x_10033 = kk_std_core_list_map(s, _x_x238, _ctx); /*list<(string, types/types)>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10033, _ctx);
    kk_box_t _x_x246 = kk_std_core_hnd_yield_extend(kk_types__new_mlift_unify_10031_fun247(s_0_sq_, _ctx), _ctx); /*3003*/
    return kk_std_core_types__list_unbox(_x_x246, KK_OWNED, _ctx);
  }
  {
    return kk_types__mlift_unify_10030(s_0_sq_, x_10033, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_types__mlift_unify_10032_fun251__t {
  struct kk_function_s _base;
};
static kk_box_t kk_types__mlift_unify_10032_fun251(kk_function_t _fself, kk_box_t _b_x74, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_types__new_mlift_unify_10032_fun251(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_types__mlift_unify_10032_fun251, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_types__mlift_unify_10032_fun251(kk_function_t _fself, kk_box_t _b_x74, kk_box_t _b_x75, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x252;
  kk_types__types _x_x253 = kk_types__types_unbox(_b_x74, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x254 = kk_std_core_types__list_unbox(_b_x75, KK_OWNED, _ctx); /*types/subst*/
  _x_x252 = kk_types_apply(_x_x253, _x_x254, _ctx); /*types/types*/
  return kk_types__types_box(_x_x252, _ctx);
}


// lift anonymous function
struct kk_types__mlift_unify_10032_fun259__t {
  struct kk_function_s _base;
};
static kk_box_t kk_types__mlift_unify_10032_fun259(kk_function_t _fself, kk_box_t _b_x79, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_types__new_mlift_unify_10032_fun259(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_types__mlift_unify_10032_fun259, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_types__mlift_unify_10032_fun259(kk_function_t _fself, kk_box_t _b_x79, kk_box_t _b_x80, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x260;
  kk_types__types _x_x261 = kk_types__types_unbox(_b_x79, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x262 = kk_std_core_types__list_unbox(_b_x80, KK_OWNED, _ctx); /*types/subst*/
  _x_x260 = kk_types_apply(_x_x261, _x_x262, _ctx); /*types/types*/
  return kk_types__types_box(_x_x260, _ctx);
}


// lift anonymous function
struct kk_types__mlift_unify_10032_fun266__t {
  struct kk_function_s _base;
  kk_std_core_types__list s_0;
};
static kk_box_t kk_types__mlift_unify_10032_fun266(kk_function_t _fself, kk_box_t _b_x88, kk_context_t* _ctx);
static kk_function_t kk_types__new_mlift_unify_10032_fun266(kk_std_core_types__list s_0, kk_context_t* _ctx) {
  struct kk_types__mlift_unify_10032_fun266__t* _self = kk_function_alloc_as(struct kk_types__mlift_unify_10032_fun266__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_types__mlift_unify_10032_fun266, kk_context());
  _self->s_0 = s_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_types__mlift_unify_10032_fun266(kk_function_t _fself, kk_box_t _b_x88, kk_context_t* _ctx) {
  struct kk_types__mlift_unify_10032_fun266__t* _self = kk_function_as(struct kk_types__mlift_unify_10032_fun266__t*, _fself, _ctx);
  kk_std_core_types__list s_0 = _self->s_0; /* types/subst */
  kk_drop_match(_self, {kk_std_core_types__list_dup(s_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list s_1_90_sq_ = kk_std_core_types__list_unbox(_b_x88, KK_OWNED, _ctx); /*types/subst*/;
  kk_std_core_types__list _x_x267 = kk_types__mlift_unify_10031(s_0, s_1_90_sq_, _ctx); /*list<(string, types/types)>*/
  return kk_std_core_types__list_box(_x_x267, _ctx);
}

kk_std_core_types__list kk_types__mlift_unify_10032(kk_types__types r, kk_types__types r_sq_, kk_std_core_types__list s_0, kk_context_t* _ctx) { /* (r : types, r' : types, s : subst) -> <div,exn,console/console> list<(string, types)> */ 
  kk_std_core_types__list x_0_10035;
  kk_types__types _x_x249;
  kk_box_t _x_x250;
  kk_box_t _x_x255;
  kk_std_core_types__list _x_x256 = kk_std_core_types__list_dup(s_0, _ctx); /*types/subst*/
  _x_x255 = kk_std_core_types__list_box(_x_x256, _ctx); /*1001*/
  _x_x250 = kk_std_core_hnd__open_none2(kk_types__new_mlift_unify_10032_fun251(_ctx), kk_types__types_box(r, _ctx), _x_x255, _ctx); /*1002*/
  _x_x249 = kk_types__types_unbox(_x_x250, KK_OWNED, _ctx); /*types/types*/
  kk_types__types _x_x257;
  kk_box_t _x_x258;
  kk_box_t _x_x263;
  kk_std_core_types__list _x_x264 = kk_std_core_types__list_dup(s_0, _ctx); /*types/subst*/
  _x_x263 = kk_std_core_types__list_box(_x_x264, _ctx); /*1001*/
  _x_x258 = kk_std_core_hnd__open_none2(kk_types__new_mlift_unify_10032_fun259(_ctx), kk_types__types_box(r_sq_, _ctx), _x_x263, _ctx); /*1002*/
  _x_x257 = kk_types__types_unbox(_x_x258, KK_OWNED, _ctx); /*types/types*/
  x_0_10035 = kk_types_unify(_x_x249, _x_x257, _ctx); /*types/subst*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_0_10035, _ctx);
    kk_box_t _x_x265 = kk_std_core_hnd_yield_extend(kk_types__new_mlift_unify_10032_fun266(s_0, _ctx), _ctx); /*3003*/
    return kk_std_core_types__list_unbox(_x_x265, KK_OWNED, _ctx);
  }
  {
    return kk_types__mlift_unify_10031(s_0, x_0_10035, _ctx);
  }
}


// lift anonymous function
struct kk_types_unify_fun271__t {
  struct kk_function_s _base;
  kk_types__types r_0;
  kk_types__types r_0_sq_;
};
static kk_box_t kk_types_unify_fun271(kk_function_t _fself, kk_box_t _b_x92, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun271(kk_types__types r_0, kk_types__types r_0_sq_, kk_context_t* _ctx) {
  struct kk_types_unify_fun271__t* _self = kk_function_alloc_as(struct kk_types_unify_fun271__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_types_unify_fun271, kk_context());
  _self->r_0 = r_0;
  _self->r_0_sq_ = r_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_types_unify_fun271(kk_function_t _fself, kk_box_t _b_x92, kk_context_t* _ctx) {
  struct kk_types_unify_fun271__t* _self = kk_function_as(struct kk_types_unify_fun271__t*, _fself, _ctx);
  kk_types__types r_0 = _self->r_0; /* types/types */
  kk_types__types r_0_sq_ = _self->r_0_sq_; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(r_0, _ctx);kk_types__types_dup(r_0_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__list s_1_160 = kk_std_core_types__list_unbox(_b_x92, KK_OWNED, _ctx); /*types/subst*/;
  kk_std_core_types__list _x_x272 = kk_types__mlift_unify_10032(r_0, r_0_sq_, s_1_160, _ctx); /*list<(string, types/types)>*/
  return kk_std_core_types__list_box(_x_x272, _ctx);
}


// lift anonymous function
struct kk_types_unify_fun275__t {
  struct kk_function_s _base;
};
static kk_box_t kk_types_unify_fun275(kk_function_t _fself, kk_box_t _b_x96, kk_box_t _b_x97, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun275(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_types_unify_fun275, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_types_unify_fun275(kk_function_t _fself, kk_box_t _b_x96, kk_box_t _b_x97, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x276;
  kk_types__types _x_x277 = kk_types__types_unbox(_b_x96, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x278 = kk_std_core_types__list_unbox(_b_x97, KK_OWNED, _ctx); /*types/subst*/
  _x_x276 = kk_types_apply(_x_x277, _x_x278, _ctx); /*types/types*/
  return kk_types__types_box(_x_x276, _ctx);
}


// lift anonymous function
struct kk_types_unify_fun283__t {
  struct kk_function_s _base;
};
static kk_box_t kk_types_unify_fun283(kk_function_t _fself, kk_box_t _b_x101, kk_box_t _b_x102, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun283(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_types_unify_fun283, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_types_unify_fun283(kk_function_t _fself, kk_box_t _b_x101, kk_box_t _b_x102, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x284;
  kk_types__types _x_x285 = kk_types__types_unbox(_b_x101, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x286 = kk_std_core_types__list_unbox(_b_x102, KK_OWNED, _ctx); /*types/subst*/
  _x_x284 = kk_types_apply(_x_x285, _x_x286, _ctx); /*types/types*/
  return kk_types__types_box(_x_x284, _ctx);
}


// lift anonymous function
struct kk_types_unify_fun290__t {
  struct kk_function_s _base;
  kk_std_core_types__list x_1_10037;
};
static kk_box_t kk_types_unify_fun290(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun290(kk_std_core_types__list x_1_10037, kk_context_t* _ctx) {
  struct kk_types_unify_fun290__t* _self = kk_function_alloc_as(struct kk_types_unify_fun290__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_types_unify_fun290, kk_context());
  _self->x_1_10037 = x_1_10037;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_types_unify_fun290(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_types_unify_fun290__t* _self = kk_function_as(struct kk_types_unify_fun290__t*, _fself, _ctx);
  kk_std_core_types__list x_1_10037 = _self->x_1_10037; /* types/subst */
  kk_drop_match(_self, {kk_std_core_types__list_dup(x_1_10037, _ctx);}, {}, _ctx)
  kk_std_core_types__list s_2_161_sq_ = kk_std_core_types__list_unbox(_b_x110, KK_OWNED, _ctx); /*types/subst*/;
  kk_std_core_types__list _x_x291 = kk_types__mlift_unify_10031(x_1_10037, s_2_161_sq_, _ctx); /*list<(string, types/types)>*/
  return kk_std_core_types__list_box(_x_x291, _ctx);
}


// lift anonymous function
struct kk_types_unify_fun293__t {
  struct kk_function_s _base;
  kk_std_core_types__list x_2_10040;
};
static kk_box_t kk_types_unify_fun293(kk_function_t _fself, kk_box_t _b_x122, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun293(kk_std_core_types__list x_2_10040, kk_context_t* _ctx) {
  struct kk_types_unify_fun293__t* _self = kk_function_alloc_as(struct kk_types_unify_fun293__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_types_unify_fun293, kk_context());
  _self->x_2_10040 = x_2_10040;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_types_unify_fun296__t {
  struct kk_function_s _base;
};
static kk_box_t kk_types_unify_fun296(kk_function_t _fself, kk_box_t _b_x116, kk_box_t _b_x117, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun296(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_types_unify_fun296, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_types_unify_fun296(kk_function_t _fself, kk_box_t _b_x116, kk_box_t _b_x117, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x297;
  kk_types__types _x_x298 = kk_types__types_unbox(_b_x116, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x299 = kk_std_core_types__list_unbox(_b_x117, KK_OWNED, _ctx); /*types/subst*/
  _x_x297 = kk_types_apply(_x_x298, _x_x299, _ctx); /*types/types*/
  return kk_types__types_box(_x_x297, _ctx);
}
static kk_box_t kk_types_unify_fun293(kk_function_t _fself, kk_box_t _b_x122, kk_context_t* _ctx) {
  struct kk_types_unify_fun293__t* _self = kk_function_as(struct kk_types_unify_fun293__t*, _fself, _ctx);
  kk_std_core_types__list x_2_10040 = _self->x_2_10040; /* types/subst */
  kk_drop_match(_self, {kk_std_core_types__list_dup(x_2_10040, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x294;
  kk_std_core_types__tuple2 _match_x167 = kk_std_core_types__tuple2_unbox(_b_x122, KK_OWNED, _ctx); /*(string, types/types)*/;
  {
    kk_box_t _box_x111 = _match_x167.fst;
    kk_box_t _box_x112 = _match_x167.snd;
    kk_string_t u_0 = kk_string_unbox(_box_x111);
    kk_types__types t_0 = kk_types__types_unbox(_box_x112, KK_BORROWED, _ctx);
    kk_types__types_dup(t_0, _ctx);
    kk_string_dup(u_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x167, _ctx);
    kk_types__types _b_x119_126;
    kk_box_t _x_x295 = kk_std_core_hnd__open_none2(kk_types_new_unify_fun296(_ctx), kk_types__types_box(t_0, _ctx), kk_std_core_types__list_box(x_2_10040, _ctx), _ctx); /*1002*/
    _b_x119_126 = kk_types__types_unbox(_x_x295, KK_OWNED, _ctx); /*types/types*/
    _x_x294 = kk_std_core_types__new_Tuple2(kk_string_box(u_0), kk_types__types_box(_b_x119_126, _ctx), _ctx); /*(1038, 1039)*/
  }
  return kk_std_core_types__tuple2_box(_x_x294, _ctx);
}


// lift anonymous function
struct kk_types_unify_fun301__t {
  struct kk_function_s _base;
  kk_std_core_types__list x_2_10040;
};
static kk_box_t kk_types_unify_fun301(kk_function_t _fself, kk_box_t _b_x132, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun301(kk_std_core_types__list x_2_10040, kk_context_t* _ctx) {
  struct kk_types_unify_fun301__t* _self = kk_function_alloc_as(struct kk_types_unify_fun301__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_types_unify_fun301, kk_context());
  _self->x_2_10040 = x_2_10040;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_types_unify_fun301(kk_function_t _fself, kk_box_t _b_x132, kk_context_t* _ctx) {
  struct kk_types_unify_fun301__t* _self = kk_function_as(struct kk_types_unify_fun301__t*, _fself, _ctx);
  kk_std_core_types__list x_2_10040 = _self->x_2_10040; /* types/subst */
  kk_drop_match(_self, {kk_std_core_types__list_dup(x_2_10040, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10008_1_162 = kk_std_core_types__list_unbox(_b_x132, KK_OWNED, _ctx); /*list<(string, types/types)>*/;
  kk_std_core_types__list _x_x302 = kk_types__mlift_unify_10030(x_2_10040, _y_x10008_1_162, _ctx); /*list<(string, types/types)>*/
  return kk_std_core_types__list_box(_x_x302, _ctx);
}


// lift anonymous function
struct kk_types_unify_fun305__t {
  struct kk_function_s _base;
};
static kk_box_t kk_types_unify_fun305(kk_function_t _fself, kk_box_t _b_x136, kk_box_t _b_x137, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun305(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_types_unify_fun305, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_types_unify_fun305(kk_function_t _fself, kk_box_t _b_x136, kk_box_t _b_x137, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x306;
  kk_string_t _x_x307 = kk_string_unbox(_b_x136); /*string*/
  kk_types__types _x_x308 = kk_types__types_unbox(_b_x137, KK_OWNED, _ctx); /*types/types*/
  _x_x306 = kk_types_tvar(_x_x307, _x_x308, _ctx); /*list<(string, types/types)>*/
  return kk_std_core_types__list_box(_x_x306, _ctx);
}


// lift anonymous function
struct kk_types_unify_fun311__t {
  struct kk_function_s _base;
};
static kk_box_t kk_types_unify_fun311(kk_function_t _fself, kk_box_t _b_x141, kk_box_t _b_x142, kk_context_t* _ctx);
static kk_function_t kk_types_new_unify_fun311(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_types_unify_fun311, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_types_unify_fun311(kk_function_t _fself, kk_box_t _b_x141, kk_box_t _b_x142, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x312;
  kk_string_t _x_x313 = kk_string_unbox(_b_x141); /*string*/
  kk_types__types _x_x314 = kk_types__types_unbox(_b_x142, KK_OWNED, _ctx); /*types/types*/
  _x_x312 = kk_types_tvar(_x_x313, _x_x314, _ctx); /*list<(string, types/types)>*/
  return kk_std_core_types__list_box(_x_x312, _ctx);
}

kk_std_core_types__list kk_types_unify(kk_types__types a, kk_types__types b, kk_context_t* _ctx) { /* (a : types, b : types) -> <pure,console/console> subst */ 
  if (kk_types__is_TApp(a, _ctx) && kk_types__is_TApp(b, _ctx)) {
    struct kk_types_TApp* _con_x268 = kk_types__as_TApp(a, _ctx);
    struct kk_types_TApp* _con_x269 = kk_types__as_TApp(b, _ctx);
    kk_types__types l = _con_x268->l;
    kk_types__types r_0 = _con_x268->r;
    kk_types__types l_sq_ = _con_x269->l;
    kk_types__types r_0_sq_ = _con_x269->r;
    if kk_likely(kk_datatype_ptr_is_unique(b, _ctx)) {
      kk_datatype_ptr_free(b, _ctx);
    }
    else {
      kk_types__types_dup(l_sq_, _ctx);
      kk_types__types_dup(r_0_sq_, _ctx);
      kk_datatype_ptr_decref(b, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_types__types_dup(l, _ctx);
      kk_types__types_dup(r_0, _ctx);
      kk_datatype_ptr_decref(a, _ctx);
    }
    kk_std_core_types__list x_1_10037 = kk_types_unify(l, l_sq_, _ctx); /*types/subst*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_1_10037, _ctx);
      kk_box_t _x_x270 = kk_std_core_hnd_yield_extend(kk_types_new_unify_fun271(r_0, r_0_sq_, _ctx), _ctx); /*3003*/
      return kk_std_core_types__list_unbox(_x_x270, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list x_2_10040;
      kk_types__types _x_x273;
      kk_box_t _x_x274;
      kk_box_t _x_x279;
      kk_std_core_types__list _x_x280 = kk_std_core_types__list_dup(x_1_10037, _ctx); /*types/subst*/
      _x_x279 = kk_std_core_types__list_box(_x_x280, _ctx); /*1001*/
      _x_x274 = kk_std_core_hnd__open_none2(kk_types_new_unify_fun275(_ctx), kk_types__types_box(r_0, _ctx), _x_x279, _ctx); /*1002*/
      _x_x273 = kk_types__types_unbox(_x_x274, KK_OWNED, _ctx); /*types/types*/
      kk_types__types _x_x281;
      kk_box_t _x_x282;
      kk_box_t _x_x287;
      kk_std_core_types__list _x_x288 = kk_std_core_types__list_dup(x_1_10037, _ctx); /*types/subst*/
      _x_x287 = kk_std_core_types__list_box(_x_x288, _ctx); /*1001*/
      _x_x282 = kk_std_core_hnd__open_none2(kk_types_new_unify_fun283(_ctx), kk_types__types_box(r_0_sq_, _ctx), _x_x287, _ctx); /*1002*/
      _x_x281 = kk_types__types_unbox(_x_x282, KK_OWNED, _ctx); /*types/types*/
      x_2_10040 = kk_types_unify(_x_x273, _x_x281, _ctx); /*types/subst*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__list_drop(x_2_10040, _ctx);
        kk_box_t _x_x289 = kk_std_core_hnd_yield_extend(kk_types_new_unify_fun290(x_1_10037, _ctx), _ctx); /*3003*/
        return kk_std_core_types__list_unbox(_x_x289, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list x_3_10043;
        kk_function_t _x_x292;
        kk_std_core_types__list_dup(x_2_10040, _ctx);
        _x_x292 = kk_types_new_unify_fun293(x_2_10040, _ctx); /*(1001) -> 1003 1002*/
        x_3_10043 = kk_std_core_list_map(x_1_10037, _x_x292, _ctx); /*list<(string, types/types)>*/
        if (kk_yielding(kk_context())) {
          kk_std_core_types__list_drop(x_3_10043, _ctx);
          kk_box_t _x_x300 = kk_std_core_hnd_yield_extend(kk_types_new_unify_fun301(x_2_10040, _ctx), _ctx); /*3003*/
          return kk_std_core_types__list_unbox(_x_x300, KK_OWNED, _ctx);
        }
        {
          return kk_std_core_list_append(x_2_10040, x_3_10043, _ctx);
        }
      }
    }
  }
  if (kk_types__is_TVar(a, _ctx)) {
    struct kk_types_TVar* _con_x303 = kk_types__as_TVar(a, _ctx);
    kk_string_t u_0_0 = _con_x303->u;
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_string_dup(u_0_0, _ctx);
      kk_datatype_ptr_decref(a, _ctx);
    }
    kk_box_t _x_x304 = kk_std_core_hnd__open_none2(kk_types_new_unify_fun305(_ctx), kk_string_box(u_0_0), kk_types__types_box(b, _ctx), _ctx); /*1002*/
    return kk_std_core_types__list_unbox(_x_x304, KK_OWNED, _ctx);
  }
  if (kk_types__is_TVar(b, _ctx)) {
    struct kk_types_TVar* _con_x309 = kk_types__as_TVar(b, _ctx);
    kk_string_t u_1 = _con_x309->u;
    if kk_likely(kk_datatype_ptr_is_unique(b, _ctx)) {
      kk_datatype_ptr_free(b, _ctx);
    }
    else {
      kk_string_dup(u_1, _ctx);
      kk_datatype_ptr_decref(b, _ctx);
    }
    kk_box_t _x_x310 = kk_std_core_hnd__open_none2(kk_types_new_unify_fun311(_ctx), kk_string_box(u_1), kk_types__types_box(a, _ctx), _ctx); /*1002*/
    return kk_std_core_types__list_unbox(_x_x310, KK_OWNED, _ctx);
  }
  if (kk_types__is_TCon(a, _ctx) && kk_types__is_TCon(b, _ctx)) {
    struct kk_types_TCon* _con_x315 = kk_types__as_TCon(a, _ctx);
    struct kk_types_TCon* _con_x316 = kk_types__as_TCon(b, _ctx);
    kk_string_t id = _con_x315->id;
    kk_string_t id_sq_ = _con_x316->id;
    if kk_likely(kk_datatype_ptr_is_unique(b, _ctx)) {
      kk_datatype_ptr_free(b, _ctx);
    }
    else {
      kk_string_dup(id_sq_, _ctx);
      kk_datatype_ptr_decref(b, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_string_dup(id, _ctx);
      kk_datatype_ptr_decref(a, _ctx);
    }
    bool _match_x163 = kk_string_is_eq(id,id_sq_,kk_context()); /*bool*/;
    if (_match_x163) {
      return kk_std_core_types__new_Nil(_ctx);
    }
    {
      kk_box_t _x_x317;
      kk_string_t _x_x318;
      kk_define_string_literal(, _s_x319, 19, "types can not unify", _ctx)
      _x_x318 = kk_string_dup(_s_x319, _ctx); /*string*/
      _x_x317 = kk_std_core_exn_throw(_x_x318, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
      return kk_std_core_types__list_unbox(_x_x317, KK_OWNED, _ctx);
    }
  }
  {
    kk_types__types_drop(b, _ctx);
    kk_types__types_drop(a, _ctx);
    kk_box_t _x_x320;
    kk_string_t _x_x321;
    kk_define_string_literal(, _s_x322, 19, "types can not unify", _ctx)
    _x_x321 = kk_string_dup(_s_x322, _ctx); /*string*/
    _x_x320 = kk_std_core_exn_throw(_x_x321, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_std_core_types__list_unbox(_x_x320, KK_OWNED, _ctx);
  }
}

// initialization
void kk_types__init(kk_context_t* _ctx){
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
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x193;
    kk_define_string_literal(, _s_x194, 4, "Unit", _ctx)
    _x_x193 = kk_string_dup(_s_x194, _ctx); /*string*/
    kk_types_t_unit = kk_types__new_TCon(kk_reuse_null, 0, _x_x193, _ctx); /*types/types*/
  }
  {
    kk_string_t _x_x195;
    kk_define_string_literal(, _s_x196, 3, "Int", _ctx)
    _x_x195 = kk_string_dup(_s_x196, _ctx); /*string*/
    kk_types_t_int = kk_types__new_TCon(kk_reuse_null, 0, _x_x195, _ctx); /*types/types*/
  }
  {
    kk_string_t _x_x197;
    kk_define_string_literal(, _s_x198, 2, "->", _ctx)
    _x_x197 = kk_string_dup(_s_x198, _ctx); /*string*/
    kk_types_t_arrow = kk_types__new_TCon(kk_reuse_null, 0, _x_x197, _ctx); /*types/types*/
  }
}

// termination
void kk_types__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_types__types_drop(kk_types_t_arrow, _ctx);
  kk_types__types_drop(kk_types_t_int, _ctx);
  kk_types__types_drop(kk_types_t_unit, _ctx);
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
