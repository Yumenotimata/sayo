// Koka generated module: infer, koka version: 3.1.2, platform: 64-bit
#include "infer.h"
 
// runtime tag for the effect `:tenv-ref`

kk_std_core_hnd__htag kk_infer__tag_tenv_ref;
 
// handler for the effect `:tenv-ref`

kk_box_t kk_infer__handle_tenv_ref(kk_infer__tenv_ref hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : tenv-ref<e,b>, ret : (res : a) -> e b, action : () -> <tenv-ref|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x489 = kk_std_core_hnd__htag_dup(kk_infer__tag_tenv_ref, _ctx); /*hnd/htag<infer/tenv-ref>*/
  return kk_std_core_hnd__hhandle(_x_x489, kk_infer__tenv_ref_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_box_t kk_infer_modify_fun494(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  struct kk_infer_modify_fun494__t* _self = kk_function_as(struct kk_infer_modify_fun494__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (infer/tenv) -> infer/tenv */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x495;
  kk_std_core_types__list _x_x496 = kk_std_core_types__list_unbox(_b_x29, KK_OWNED, _ctx); /*infer/tenv*/
  _x_x495 = kk_function_call(kk_std_core_types__list, (kk_function_t, kk_std_core_types__list, kk_context_t*), f, (f, _x_x496, _ctx), _ctx); /*infer/tenv*/
  return kk_std_core_types__list_box(_x_x495, _ctx);
}


// lift anonymous function
struct kk_infer_handle_tenv_ref_fun503__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_infer_handle_tenv_ref_fun503(kk_function_t _fself, kk_box_t _b_x55, kk_context_t* _ctx);
static kk_function_t kk_infer_new_handle_tenv_ref_fun503(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun503__t* _self = kk_function_alloc_as(struct kk_infer_handle_tenv_ref_fun503__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_handle_tenv_ref_fun503, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_infer_handle_tenv_ref_fun506__t {
  struct kk_function_s _base;
  kk_box_t _b_x55;
  kk_ref_t loc;
};
static kk_unit_t kk_infer_handle_tenv_ref_fun506(kk_function_t _fself, kk_std_core_types__list _y_x10010, kk_context_t* _ctx);
static kk_function_t kk_infer_new_handle_tenv_ref_fun506(kk_box_t _b_x55, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun506__t* _self = kk_function_alloc_as(struct kk_infer_handle_tenv_ref_fun506__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_handle_tenv_ref_fun506, kk_context());
  _self->_b_x55 = _b_x55;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_infer_handle_tenv_ref_fun506(kk_function_t _fself, kk_std_core_types__list _y_x10010, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun506__t* _self = kk_function_as(struct kk_infer_handle_tenv_ref_fun506__t*, _fself, _ctx);
  kk_box_t _b_x55 = _self->_b_x55; /* 1003 */
  kk_ref_t loc = _self->loc; /* local-var<711,list<(expr/uid, types/types)>> */
  kk_drop_match(_self, {kk_box_dup(_b_x55, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_unit_t _brw_x467 = kk_Unit;
  kk_box_t _x_x507;
  kk_std_core_types__list _b_x58_92 = _y_x10010; /*infer/tenv*/;
  kk_function_t _x_x508 = kk_function_unbox(_b_x55, _ctx); /*(56) -> 57*/
  _x_x507 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x508, (_x_x508, kk_std_core_types__list_box(_b_x58_92, _ctx), _ctx), _ctx); /*57*/
  kk_ref_set_borrow(loc,_x_x507,kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x467; return kk_Unit;
}


// lift anonymous function
struct kk_infer_handle_tenv_ref_fun511__t {
  struct kk_function_s _base;
  kk_function_t next_10088;
};
static kk_box_t kk_infer_handle_tenv_ref_fun511(kk_function_t _fself, kk_box_t _b_x53, kk_context_t* _ctx);
static kk_function_t kk_infer_new_handle_tenv_ref_fun511(kk_function_t next_10088, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun511__t* _self = kk_function_alloc_as(struct kk_infer_handle_tenv_ref_fun511__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_handle_tenv_ref_fun511, kk_context());
  _self->next_10088 = next_10088;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_handle_tenv_ref_fun511(kk_function_t _fself, kk_box_t _b_x53, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun511__t* _self = kk_function_as(struct kk_infer_handle_tenv_ref_fun511__t*, _fself, _ctx);
  kk_function_t next_10088 = _self->next_10088; /* (infer/tenv) -> <local<711>|718> () */
  kk_drop_match(_self, {kk_function_dup(next_10088, _ctx);}, {}, _ctx)
  kk_unit_t _x_x512 = kk_Unit;
  kk_std_core_types__list _x_x513 = kk_std_core_types__list_unbox(_b_x53, KK_OWNED, _ctx); /*infer/tenv*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10088, (next_10088, _x_x513, _ctx), _ctx);
  return kk_unit_box(_x_x512);
}
static kk_box_t kk_infer_handle_tenv_ref_fun503(kk_function_t _fself, kk_box_t _b_x55, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun503__t* _self = kk_function_as(struct kk_infer_handle_tenv_ref_fun503__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<711,list<(expr/uid, types/types)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_core_types__list x_10087;
  kk_box_t _x_x504;
  kk_ref_t _x_x505 = kk_ref_dup(loc, _ctx); /*local-var<711,list<(expr/uid, types/types)>>*/
  _x_x504 = kk_ref_get(_x_x505,kk_context()); /*1000*/
  x_10087 = kk_std_core_types__list_unbox(_x_x504, KK_OWNED, _ctx); /*infer/tenv*/
  kk_function_t next_10088 = kk_infer_new_handle_tenv_ref_fun506(_b_x55, loc, _ctx); /*(infer/tenv) -> <local<711>|718> ()*/;
  kk_unit_t _x_x509 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10087, _ctx);
    kk_box_t _x_x510 = kk_std_core_hnd_yield_extend(kk_infer_new_handle_tenv_ref_fun511(next_10088, _ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x510);
  }
  else {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10088, (next_10088, x_10087, _ctx), _ctx);
  }
  return kk_unit_box(_x_x509);
}


// lift anonymous function
struct kk_infer_handle_tenv_ref_fun516__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_infer_handle_tenv_ref_fun516(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_infer_new_handle_tenv_ref_fun516(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun516__t* _self = kk_function_alloc_as(struct kk_infer_handle_tenv_ref_fun516__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_handle_tenv_ref_fun516, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_handle_tenv_ref_fun516(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun516__t* _self = kk_function_as(struct kk_infer_handle_tenv_ref_fun516__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<711,list<(expr/uid, types/types)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  return kk_ref_get(loc,kk_context());
}


// lift anonymous function
struct kk_infer_handle_tenv_ref_fun519__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_infer_handle_tenv_ref_fun519(kk_function_t _fself, kk_box_t _b_x72, kk_context_t* _ctx);
static kk_function_t kk_infer_new_handle_tenv_ref_fun519(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun519__t* _self = kk_function_alloc_as(struct kk_infer_handle_tenv_ref_fun519__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_handle_tenv_ref_fun519, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_infer_handle_tenv_ref_fun523__t {
  struct kk_function_s _base;
  kk_box_t _b_x72;
};
static kk_box_t kk_infer_handle_tenv_ref_fun523(kk_function_t _fself, kk_box_t _b_x66, kk_context_t* _ctx);
static kk_function_t kk_infer_new_handle_tenv_ref_fun523(kk_box_t _b_x72, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun523__t* _self = kk_function_alloc_as(struct kk_infer_handle_tenv_ref_fun523__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_handle_tenv_ref_fun523, kk_context());
  _self->_b_x72 = _b_x72;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_handle_tenv_ref_fun523(kk_function_t _fself, kk_box_t _b_x66, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun523__t* _self = kk_function_as(struct kk_infer_handle_tenv_ref_fun523__t*, _fself, _ctx);
  kk_box_t _b_x72 = _self->_b_x72; /* 229 */
  kk_drop_match(_self, {kk_box_dup(_b_x72, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x524 = kk_std_core_types__new_Tuple2(_b_x72, _b_x66, _ctx); /*(1038, 1039)*/
  return kk_std_core_types__tuple2_box(_x_x524, _ctx);
}
static kk_box_t kk_infer_handle_tenv_ref_fun519(kk_function_t _fself, kk_box_t _b_x72, kk_context_t* _ctx) {
  struct kk_infer_handle_tenv_ref_fun519__t* _self = kk_function_as(struct kk_infer_handle_tenv_ref_fun519__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<711,list<(expr/uid, types/types)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_core_types__list x_0_10092;
  kk_box_t _x_x520 = kk_ref_get(loc,kk_context()); /*1000*/
  x_0_10092 = kk_std_core_types__list_unbox(_x_x520, KK_OWNED, _ctx); /*list<(expr/uid, types/types)>*/
  kk_std_core_types__tuple2 _x_x521;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_0_10092, _ctx);
    kk_box_t _x_x522 = kk_std_core_hnd_yield_extend(kk_infer_new_handle_tenv_ref_fun523(_b_x72, _ctx), _ctx); /*3003*/
    _x_x521 = kk_std_core_types__tuple2_unbox(_x_x522, KK_OWNED, _ctx); /*(717, list<(expr/uid, types/types)>)*/
  }
  else {
    _x_x521 = kk_std_core_types__new_Tuple2(_b_x72, kk_std_core_types__list_box(x_0_10092, _ctx), _ctx); /*(717, list<(expr/uid, types/types)>)*/
  }
  return kk_std_core_types__tuple2_box(_x_x521, _ctx);
}

kk_std_core_types__tuple2 kk_infer_handle_tenv_ref(kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (f : () -> <tenv-ref|e> a) -> e (a, tenv) */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<711,list<(expr/uid, types/types)>>*/;
  kk_infer__tenv_ref _b_x69_73;
  kk_std_core_hnd__clause1 _x_x501;
  kk_function_t _x_x502;
  kk_ref_dup(loc, _ctx);
  _x_x502 = kk_infer_new_handle_tenv_ref_fun503(loc, _ctx); /*(1003) -> 1000 1004*/
  _x_x501 = kk_std_core_hnd_clause_tail1(_x_x502, _ctx); /*hnd/clause1<1003,1004,1002,1000,1001>*/
  kk_std_core_hnd__clause0 _x_x514;
  kk_function_t _x_x515;
  kk_ref_dup(loc, _ctx);
  _x_x515 = kk_infer_new_handle_tenv_ref_fun516(loc, _ctx); /*() -> 1000 1000*/
  _x_x514 = kk_std_core_hnd_clause_tail0(_x_x515, _ctx); /*hnd/clause0<1003,1002,1000,1001>*/
  _b_x69_73 = kk_infer__new_Hnd_tenv_ref(kk_reuse_null, 0, kk_integer_from_small(1), _x_x501, _x_x514, _ctx); /*infer/tenv-ref<<local<711>|718>,(717, list<(expr/uid, types/types)>)>*/
  kk_std_core_types__tuple2 res;
  kk_box_t _x_x517;
  kk_function_t _x_x518;
  kk_ref_dup(loc, _ctx);
  _x_x518 = kk_infer_new_handle_tenv_ref_fun519(loc, _ctx); /*(229) -> 230 231*/
  _x_x517 = kk_infer__handle_tenv_ref(_b_x69_73, _x_x518, f, _ctx); /*231*/
  res = kk_std_core_types__tuple2_unbox(_x_x517, KK_OWNED, _ctx); /*(717, infer/tenv)*/
  kk_box_t _x_x525 = kk_std_core_hnd_prompt_local_var(loc, kk_std_core_types__tuple2_box(res, _ctx), _ctx); /*3004*/
  return kk_std_core_types__tuple2_unbox(_x_x525, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_tvar_10070_fun528__t {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_tvar_10070_fun528(kk_function_t _fself, kk_box_t _b_x114, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_tvar_10070_fun528(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_tvar_10070_fun528, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_infer__mlift_tvar_10070_fun531__t {
  struct kk_function_s _base;
  kk_box_t _b_x114;
};
static kk_box_t kk_infer__mlift_tvar_10070_fun531(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_tvar_10070_fun531(kk_box_t _b_x114, kk_context_t* _ctx) {
  struct kk_infer__mlift_tvar_10070_fun531__t* _self = kk_function_alloc_as(struct kk_infer__mlift_tvar_10070_fun531__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_tvar_10070_fun531, kk_context());
  _self->_b_x114 = _b_x114;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_tvar_10070_fun531(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx) {
  struct kk_infer__mlift_tvar_10070_fun531__t* _self = kk_function_as(struct kk_infer__mlift_tvar_10070_fun531__t*, _fself, _ctx);
  kk_box_t _b_x114 = _self->_b_x114; /* 1000 */
  kk_drop_match(_self, {kk_box_dup(_b_x114, _ctx);}, {}, _ctx)
  kk_function_t _x_x532 = kk_function_unbox(_b_x114, _ctx); /*(115) -> 116*/
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x532, (_x_x532, _b_x106, _ctx), _ctx);
}
static kk_box_t kk_infer__mlift_tvar_10070_fun528(kk_function_t _fself, kk_box_t _b_x114, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10099 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<infer/tenv-ref>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x529 = kk_std_core_hnd__as_Ev(ev_10099, _ctx);
    kk_box_t _box_x93 = _con_x529->hnd;
    int32_t m = _con_x529->marker;
    kk_infer__tenv_ref h = kk_infer__tenv_ref_unbox(_box_x93, KK_BORROWED, _ctx);
    kk_infer__tenv_ref_dup(h, _ctx);
    {
      struct kk_infer__Hnd_tenv_ref* _con_x530 = kk_infer__as_Hnd_tenv_ref(h, _ctx);
      kk_integer_t _pat_0 = _con_x530->_cfc;
      kk_std_core_hnd__clause1 _fun_modify = _con_x530->_fun_modify;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x530->_fun_tv;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_modify, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x100 = _fun_modify.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x100, (_fun_unbox_x100, m, ev_10099, kk_function_box(kk_infer__new_mlift_tvar_10070_fun531(_b_x114, _ctx), _ctx), _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_infer__mlift_tvar_10070_fun535__t {
  struct kk_function_s _base;
  kk_string_t u;
  kk_types__types v;
};
static kk_box_t kk_infer__mlift_tvar_10070_fun535(kk_function_t _fself, kk_box_t _b_x120, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_tvar_10070_fun535(kk_string_t u, kk_types__types v, kk_context_t* _ctx) {
  struct kk_infer__mlift_tvar_10070_fun535__t* _self = kk_function_alloc_as(struct kk_infer__mlift_tvar_10070_fun535__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_tvar_10070_fun535, kk_context());
  _self->u = u;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_tvar_10070_fun535(kk_function_t _fself, kk_box_t _b_x120, kk_context_t* _ctx) {
  struct kk_infer__mlift_tvar_10070_fun535__t* _self = kk_function_as(struct kk_infer__mlift_tvar_10070_fun535__t*, _fself, _ctx);
  kk_string_t u = _self->u; /* expr/uid */
  kk_types__types v = _self->v; /* types/types */
  kk_drop_match(_self, {kk_string_dup(u, _ctx);kk_types__types_dup(v, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x536;
  kk_std_core_types__list _x_x537 = kk_std_core_types__list_unbox(_b_x120, KK_OWNED, _ctx); /*infer/tenv*/
  kk_std_core_types__list _x_x538;
  kk_box_t _x_x539;
  kk_std_core_types__tuple2 _x_x540 = kk_std_core_types__new_Tuple2(kk_string_box(u), kk_types__types_box(v, _ctx), _ctx); /*(1038, 1039)*/
  _x_x539 = kk_std_core_types__tuple2_box(_x_x540, _ctx); /*1024*/
  _x_x538 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x539, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  _x_x536 = kk_std_core_list_append(_x_x537, _x_x538, _ctx); /*list<1001>*/
  return kk_std_core_types__list_box(_x_x536, _ctx);
}


// lift anonymous function
struct kk_infer__mlift_tvar_10070_fun542__t {
  struct kk_function_s _base;
  kk_types__types v;
};
static kk_box_t kk_infer__mlift_tvar_10070_fun542(kk_function_t _fself, kk_box_t _b_x131, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_tvar_10070_fun542(kk_types__types v, kk_context_t* _ctx) {
  struct kk_infer__mlift_tvar_10070_fun542__t* _self = kk_function_alloc_as(struct kk_infer__mlift_tvar_10070_fun542__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_tvar_10070_fun542, kk_context());
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_tvar_10070_fun542(kk_function_t _fself, kk_box_t _b_x131, kk_context_t* _ctx) {
  struct kk_infer__mlift_tvar_10070_fun542__t* _self = kk_function_as(struct kk_infer__mlift_tvar_10070_fun542__t*, _fself, _ctx);
  kk_types__types v = _self->v; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(v, _ctx);}, {}, _ctx)
  kk_unit_t wild___134 = kk_Unit;
  kk_unit_unbox(_b_x131);
  return kk_types__types_box(v, _ctx);
}

kk_types__types kk_infer__mlift_tvar_10070(kk_string_t u, kk_integer_t _y_x10019, kk_context_t* _ctx) { /* (u : expr/uid, int) -> <expr/unique,tenv-ref> types/types */ 
  kk_types__types v;
  kk_string_t _x_x526 = kk_std_core_int_show(_y_x10019, _ctx); /*string*/
  v = kk_types__new_TVar(kk_reuse_null, 0, _x_x526, _ctx); /*types/types*/
  kk_ssize_t _b_x111_121 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_unit_t x_10097 = kk_Unit;
  kk_box_t _x_x527;
  kk_box_t _x_x533;
  kk_function_t _x_x534;
  kk_types__types_dup(v, _ctx);
  _x_x534 = kk_infer__new_mlift_tvar_10070_fun535(u, v, _ctx); /*(118) -> 119*/
  _x_x533 = kk_function_box(_x_x534, _ctx); /*1000*/
  _x_x527 = kk_std_core_hnd__open_at1(_b_x111_121, kk_infer__new_mlift_tvar_10070_fun528(_ctx), _x_x533, _ctx); /*1001*/
  kk_unit_unbox(_x_x527);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x541 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_tvar_10070_fun542(v, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x541, KK_OWNED, _ctx);
  }
  {
    return v;
  }
}


// lift anonymous function
struct kk_infer_tvar_fun544__t {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_tvar_fun544(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_infer_new_tvar_fun544(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_tvar_fun544, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_tvar_fun544(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10107 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<expr/unique>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x545 = kk_std_core_hnd__as_Ev(ev_10107, _ctx);
    kk_box_t _box_x135 = _con_x545->hnd;
    int32_t m = _con_x545->marker;
    kk_expr__unique h = kk_expr__unique_unbox(_box_x135, KK_BORROWED, _ctx);
    kk_expr__unique_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x462;
    kk_std_core_hnd__clause0 _brw_x463 = kk_expr__select_gen(h, _ctx); /*hnd/clause0<int,expr/unique,1000,1001>*/;
    kk_expr__unique_drop(h, _ctx);
    _match_x462 = _brw_x463; /*hnd/clause0<int,expr/unique,1000,1001>*/
    {
      kk_function_t _fun_unbox_x138 = _match_x462.clause;
      return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x138, (_fun_unbox_x138, m, ev_10107, _ctx), _ctx);
    }
  }
}


// lift anonymous function
struct kk_infer_tvar_fun547__t {
  struct kk_function_s _base;
  kk_string_t u;
};
static kk_box_t kk_infer_tvar_fun547(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx);
static kk_function_t kk_infer_new_tvar_fun547(kk_string_t u, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun547__t* _self = kk_function_alloc_as(struct kk_infer_tvar_fun547__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_tvar_fun547, kk_context());
  _self->u = u;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_tvar_fun547(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun547__t* _self = kk_function_as(struct kk_infer_tvar_fun547__t*, _fself, _ctx);
  kk_string_t u = _self->u; /* expr/uid */
  kk_drop_match(_self, {kk_string_dup(u, _ctx);}, {}, _ctx)
  kk_integer_t _y_x10019_189 = kk_integer_unbox(_b_x146, _ctx); /*int*/;
  kk_types__types _x_x548 = kk_infer__mlift_tvar_10070(u, _y_x10019_189, _ctx); /*types/types*/
  return kk_types__types_box(_x_x548, _ctx);
}


// lift anonymous function
struct kk_infer_tvar_fun551__t {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_tvar_fun551(kk_function_t _fself, kk_box_t _b_x168, kk_context_t* _ctx);
static kk_function_t kk_infer_new_tvar_fun551(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_tvar_fun551, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_infer_tvar_fun554__t {
  struct kk_function_s _base;
  kk_box_t _b_x168;
};
static kk_box_t kk_infer_tvar_fun554(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx);
static kk_function_t kk_infer_new_tvar_fun554(kk_box_t _b_x168, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun554__t* _self = kk_function_alloc_as(struct kk_infer_tvar_fun554__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_tvar_fun554, kk_context());
  _self->_b_x168 = _b_x168;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_tvar_fun554(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun554__t* _self = kk_function_as(struct kk_infer_tvar_fun554__t*, _fself, _ctx);
  kk_box_t _b_x168 = _self->_b_x168; /* 1000 */
  kk_drop_match(_self, {kk_box_dup(_b_x168, _ctx);}, {}, _ctx)
  kk_function_t _x_x555 = kk_function_unbox(_b_x168, _ctx); /*(169) -> 170*/
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x555, (_x_x555, _b_x160, _ctx), _ctx);
}
static kk_box_t kk_infer_tvar_fun551(kk_function_t _fself, kk_box_t _b_x168, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_0_10112 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<infer/tenv-ref>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x552 = kk_std_core_hnd__as_Ev(ev_0_10112, _ctx);
    kk_box_t _box_x147 = _con_x552->hnd;
    int32_t m_0 = _con_x552->marker;
    kk_infer__tenv_ref h_0 = kk_infer__tenv_ref_unbox(_box_x147, KK_BORROWED, _ctx);
    kk_infer__tenv_ref_dup(h_0, _ctx);
    {
      struct kk_infer__Hnd_tenv_ref* _con_x553 = kk_infer__as_Hnd_tenv_ref(h_0, _ctx);
      kk_integer_t _pat_0_1 = _con_x553->_cfc;
      kk_std_core_hnd__clause1 _fun_modify = _con_x553->_fun_modify;
      kk_std_core_hnd__clause0 _pat_1_2 = _con_x553->_fun_tv;
      if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
        kk_integer_drop(_pat_0_1, _ctx);
        kk_datatype_ptr_free(h_0, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_modify, _ctx);
        kk_datatype_ptr_decref(h_0, _ctx);
      }
      {
        kk_function_t _fun_unbox_x154 = _fun_modify.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x154, (_fun_unbox_x154, m_0, ev_0_10112, kk_function_box(kk_infer_new_tvar_fun554(_b_x168, _ctx), _ctx), _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_infer_tvar_fun558__t {
  struct kk_function_s _base;
  kk_string_t u;
  kk_types__types v;
};
static kk_box_t kk_infer_tvar_fun558(kk_function_t _fself, kk_box_t _b_x174, kk_context_t* _ctx);
static kk_function_t kk_infer_new_tvar_fun558(kk_string_t u, kk_types__types v, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun558__t* _self = kk_function_alloc_as(struct kk_infer_tvar_fun558__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_tvar_fun558, kk_context());
  _self->u = u;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_tvar_fun558(kk_function_t _fself, kk_box_t _b_x174, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun558__t* _self = kk_function_as(struct kk_infer_tvar_fun558__t*, _fself, _ctx);
  kk_string_t u = _self->u; /* expr/uid */
  kk_types__types v = _self->v; /* types/types */
  kk_drop_match(_self, {kk_string_dup(u, _ctx);kk_types__types_dup(v, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x559;
  kk_std_core_types__list _x_x560 = kk_std_core_types__list_unbox(_b_x174, KK_OWNED, _ctx); /*infer/tenv*/
  kk_std_core_types__list _x_x561;
  kk_box_t _x_x562;
  kk_std_core_types__tuple2 _x_x563 = kk_std_core_types__new_Tuple2(kk_string_box(u), kk_types__types_box(v, _ctx), _ctx); /*(1038, 1039)*/
  _x_x562 = kk_std_core_types__tuple2_box(_x_x563, _ctx); /*1024*/
  _x_x561 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x562, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  _x_x559 = kk_std_core_list_append(_x_x560, _x_x561, _ctx); /*list<1001>*/
  return kk_std_core_types__list_box(_x_x559, _ctx);
}


// lift anonymous function
struct kk_infer_tvar_fun565__t {
  struct kk_function_s _base;
  kk_types__types v;
};
static kk_box_t kk_infer_tvar_fun565(kk_function_t _fself, kk_box_t _b_x185, kk_context_t* _ctx);
static kk_function_t kk_infer_new_tvar_fun565(kk_types__types v, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun565__t* _self = kk_function_alloc_as(struct kk_infer_tvar_fun565__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_tvar_fun565, kk_context());
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_tvar_fun565(kk_function_t _fself, kk_box_t _b_x185, kk_context_t* _ctx) {
  struct kk_infer_tvar_fun565__t* _self = kk_function_as(struct kk_infer_tvar_fun565__t*, _fself, _ctx);
  kk_types__types v = _self->v; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(v, _ctx);}, {}, _ctx)
  kk_unit_t wild___190 = kk_Unit;
  kk_unit_unbox(_b_x185);
  return kk_types__types_box(v, _ctx);
}

kk_types__types kk_infer_tvar(kk_string_t u, kk_context_t* _ctx) { /* (u : expr/uid) -> <tenv-ref,expr/unique> types/types */ 
  kk_ssize_t _b_x141_143 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_integer_t x_10104;
  kk_box_t _x_x543 = kk_std_core_hnd__open_at0(_b_x141_143, kk_infer_new_tvar_fun544(_ctx), _ctx); /*1000*/
  x_10104 = kk_integer_unbox(_x_x543, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10104, _ctx);
    kk_box_t _x_x546 = kk_std_core_hnd_yield_extend(kk_infer_new_tvar_fun547(u, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x546, KK_OWNED, _ctx);
  }
  {
    kk_types__types v;
    kk_string_t _x_x549 = kk_std_core_int_show(x_10104, _ctx); /*string*/
    v = kk_types__new_TVar(kk_reuse_null, 0, _x_x549, _ctx); /*types/types*/
    kk_ssize_t _b_x165_175 = (KK_IZ(0)); /*hnd/ev-index*/;
    kk_unit_t x_0_10109 = kk_Unit;
    kk_box_t _x_x550;
    kk_box_t _x_x556;
    kk_function_t _x_x557;
    kk_types__types_dup(v, _ctx);
    _x_x557 = kk_infer_new_tvar_fun558(u, v, _ctx); /*(172) -> 173*/
    _x_x556 = kk_function_box(_x_x557, _ctx); /*1000*/
    _x_x550 = kk_std_core_hnd__open_at1(_b_x165_175, kk_infer_new_tvar_fun551(_ctx), _x_x556, _ctx); /*1001*/
    kk_unit_unbox(_x_x550);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x564 = kk_std_core_hnd_yield_extend(kk_infer_new_tvar_fun565(v, _ctx), _ctx); /*3003*/
      return kk_types__types_unbox(_x_x564, KK_OWNED, _ctx);
    }
    {
      return v;
    }
  }
}
 
// なぞにtypes/applyの型が合わないのでRe


// lift anonymous function
struct kk_infer__trmc_apply_fun573__t_sq_ {
  struct kk_function_s _base;
  kk_string_t u;
};
static bool kk_infer__trmc_apply_fun573_sq_(kk_function_t _fself, kk_box_t _b_x199, kk_context_t* _ctx);
static kk_function_t kk_infer__new_trmc_apply_fun573_sq_(kk_string_t u, kk_context_t* _ctx) {
  struct kk_infer__trmc_apply_fun573__t_sq_* _self = kk_function_alloc_as(struct kk_infer__trmc_apply_fun573__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__trmc_apply_fun573_sq_, kk_context());
  _self->u = u;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_infer__trmc_apply_fun573_sq_(kk_function_t _fself, kk_box_t _b_x199, kk_context_t* _ctx) {
  struct kk_infer__trmc_apply_fun573__t_sq_* _self = kk_function_as(struct kk_infer__trmc_apply_fun573__t_sq_*, _fself, _ctx);
  kk_string_t u = _self->u; /* string */
  kk_drop_match(_self, {kk_string_dup(u, _ctx);}, {}, _ctx)
  kk_string_t u_221_sq_ = kk_string_unbox(_b_x199); /*string*/;
  return kk_string_is_eq(u,u_221_sq_,kk_context());
}

kk_types__types kk_infer__trmc_apply_sq_(kk_types__types t, kk_std_core_types__list s, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (t : types/types, s : types/subst, ctx<types/types>) -> div types/types */ 
  kk__tailcall: ;
  if (kk_types__is_TApp(t, _ctx)) {
    struct kk_types_TApp* _con_x566 = kk_types__as_TApp(t, _ctx);
    kk_types__types l = _con_x566->l;
    kk_types__types r = _con_x566->r;
    kk_reuse_t _ru_x473 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      _ru_x473 = (kk_datatype_ptr_reuse(t, _ctx));
    }
    else {
      kk_types__types_dup(l, _ctx);
      kk_types__types_dup(r, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    kk_types__types _trmc_x10004;
    kk_std_core_types__list _x_x567 = kk_std_core_types__list_dup(s, _ctx); /*types/subst*/
    _trmc_x10004 = kk_infer_apply_sq_(l, _x_x567, _ctx); /*types/types*/
    kk_types__types _trmc_x10005 = kk_datatype_null(); /*types/types*/;
    kk_types__types _trmc_x10006;
    if kk_likely(_ru_x473!=NULL) {
      struct kk_types_TApp* _con_x568 = (struct kk_types_TApp*)_ru_x473;
      _con_x568->l = _trmc_x10004;
      _con_x568->r = _trmc_x10005;
      _trmc_x10006 = kk_types__base_TApp(_con_x568, _ctx); /*types/types*/
    }
    else {
      _trmc_x10006 = kk_types__new_TApp(kk_reuse_null, 0, _trmc_x10004, _trmc_x10005, _ctx); /*types/types*/
    }
    kk_field_addr_t _b_x196_209 = kk_field_addr_create(&kk_types__as_TApp(_trmc_x10006, _ctx)->r, _ctx); /*@field-addr<types/types>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x569 = kk_cctx_extend_linear(_acc,(kk_types__types_box(_trmc_x10006, _ctx)),_b_x196_209,kk_context()); /*ctx<0>*/
      t = r;
      _acc = _x_x569;
      goto kk__tailcall;
    }
  }
  if (kk_types__is_TVar(t, _ctx)) {
    struct kk_types_TVar* _con_x570 = kk_types__as_TVar(t, _ctx);
    kk_string_t u = _con_x570->u;
    kk_reuse_t _ru_x474 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(t, _ctx)) {
      _ru_x474 = (kk_datatype_ptr_reuse(t, _ctx));
    }
    else {
      kk_string_dup(u, _ctx);
      kk_datatype_ptr_decref(t, _ctx);
    }
    kk_box_t _x_x571;
    kk_std_core_types__maybe _match_x459;
    kk_function_t _x_x572;
    kk_string_dup(u, _ctx);
    _x_x572 = kk_infer__new_trmc_apply_fun573_sq_(u, _ctx); /*(1001) -> 1003 bool*/
    _match_x459 = kk_std_core_list_lookup(s, _x_x572, _ctx); /*maybe<1002>*/
    if (kk_std_core_types__is_Just(_match_x459, _ctx)) {
      kk_box_t _box_x200 = _match_x459._cons.Just.value;
      kk_types__types t_sq_ = kk_types__types_unbox(_box_x200, KK_BORROWED, _ctx);
      kk_reuse_drop(_ru_x474,kk_context());
      kk_string_drop(u, _ctx);
      kk_types__types_dup(t_sq_, _ctx);
      kk_std_core_types__maybe_drop(_match_x459, _ctx);
      _x_x571 = kk_cctx_apply_linear(_acc,(kk_types__types_box(t_sq_, _ctx)),kk_context()); /*-1*/
    }
    else {
      kk_box_t _x_x574;
      kk_types__types _x_x575;
      if kk_likely(_ru_x474!=NULL) {
        struct kk_types_TVar* _con_x576 = (struct kk_types_TVar*)_ru_x474;
        _x_x575 = kk_types__base_TVar(_con_x576, _ctx); /*types/types*/
      }
      else {
        _x_x575 = kk_types__new_TVar(kk_reuse_null, 0, u, _ctx); /*types/types*/
      }
      _x_x574 = kk_types__types_box(_x_x575, _ctx); /*-1*/
      _x_x571 = kk_cctx_apply_linear(_acc,_x_x574,kk_context()); /*-1*/
    }
    return kk_types__types_unbox(_x_x571, KK_OWNED, _ctx);
  }
  {
    struct kk_types_TCon* _con_x577 = kk_types__as_TCon(t, _ctx);
    kk_std_core_types__list_drop(s, _ctx);
    kk_box_t _x_x578 = kk_cctx_apply_linear(_acc,(kk_types__types_box(t, _ctx)),kk_context()); /*-1*/
    return kk_types__types_unbox(_x_x578, KK_OWNED, _ctx);
  }
}
 
// なぞにtypes/applyの型が合わないのでRe

kk_types__types kk_infer_apply_sq_(kk_types__types t_1, kk_std_core_types__list s_0, kk_context_t* _ctx) { /* (t : types/types, s : types/subst) -> div types/types */ 
  kk_std_core_types__cctx _x_x579 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_infer__trmc_apply_sq_(t_1, s_0, _x_x579, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10071_fun581__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10071_fun581_sq_(kk_function_t _fself, kk_box_t _b_x225, kk_box_t _b_x226, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10071_fun581_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10071_fun581_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10071_fun581_sq_(kk_function_t _fself, kk_box_t _b_x225, kk_box_t _b_x226, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x582;
  kk_types__types _x_x583 = kk_types__types_unbox(_b_x225, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x584 = kk_std_core_types__list_unbox(_b_x226, KK_OWNED, _ctx); /*types/subst*/
  _x_x582 = kk_infer_apply_sq_(_x_x583, _x_x584, _ctx); /*types/types*/
  return kk_types__types_box(_x_x582, _ctx);
}

kk_types__types kk_infer__mlift_infer_10071_sq_(kk_types__types t_ret, kk_std_core_types__list subst, kk_context_t* _ctx) { /* (t-ret : types/types, subst : types/subst) -> <console/console,div,exn,tenv-ref,expr/unique> types/types */ 
  kk_box_t _x_x580 = kk_std_core_hnd__open_none2(kk_infer__new_mlift_infer_10071_fun581_sq_(_ctx), kk_types__types_box(t_ret, _ctx), kk_std_core_types__list_box(subst, _ctx), _ctx); /*1002*/
  return kk_types__types_unbox(_x_x580, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10072_fun586__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10072_fun586_sq_(kk_function_t _fself, kk_box_t _b_x234, kk_box_t _b_x235, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10072_fun586_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10072_fun586_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10072_fun586_sq_(kk_function_t _fself, kk_box_t _b_x234, kk_box_t _b_x235, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x587;
  kk_types__types _x_x588 = kk_types__types_unbox(_b_x234, KK_OWNED, _ctx); /*types/types*/
  kk_types__types _x_x589 = kk_types__types_unbox(_b_x235, KK_OWNED, _ctx); /*types/types*/
  _x_x587 = kk_types_unify(_x_x588, _x_x589, _ctx); /*types/subst*/
  return kk_std_core_types__list_box(_x_x587, _ctx);
}


// lift anonymous function
struct kk_infer__mlift_infer_10072_fun596__t_sq_ {
  struct kk_function_s _base;
  kk_types__types t_ret_0;
};
static kk_box_t kk_infer__mlift_infer_10072_fun596_sq_(kk_function_t _fself, kk_box_t _b_x241, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10072_fun596_sq_(kk_types__types t_ret_0, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10072_fun596__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10072_fun596__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10072_fun596_sq_, kk_context());
  _self->t_ret_0 = t_ret_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10072_fun596_sq_(kk_function_t _fself, kk_box_t _b_x241, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10072_fun596__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10072_fun596__t_sq_*, _fself, _ctx);
  kk_types__types t_ret_0 = _self->t_ret_0; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(t_ret_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list subst_0_243 = kk_std_core_types__list_unbox(_b_x241, KK_OWNED, _ctx); /*types/subst*/;
  kk_types__types _x_x597 = kk_infer__mlift_infer_10071_sq_(t_ret_0, subst_0_243, _ctx); /*types/types*/
  return kk_types__types_box(_x_x597, _ctx);
}

kk_types__types kk_infer__mlift_infer_10072_sq_(kk_types__types t_e1, kk_types__types t_e2, kk_types__types t_ret_0, kk_context_t* _ctx) { /* (t-e1 : types/types, t-e2 : types/types, t-ret : types/types) -> <tenv-ref,expr/unique,console/console,div,exn> types/types */ 
  kk_ssize_t _b_x230_236 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_std_core_types__list x_10117;
  kk_box_t _x_x585;
  kk_box_t _x_x590;
  kk_types__types _x_x591;
  kk_types__types _x_x592;
  kk_types__types _x_x593 = kk_types__types_dup(kk_types_t_arrow, _ctx); /*types/types*/
  _x_x592 = kk_types__new_TApp(kk_reuse_null, 0, _x_x593, t_e2, _ctx); /*types/types*/
  kk_types__types _x_x594 = kk_types__types_dup(t_ret_0, _ctx); /*types/types*/
  _x_x591 = kk_types__new_TApp(kk_reuse_null, 0, _x_x592, _x_x594, _ctx); /*types/types*/
  _x_x590 = kk_types__types_box(_x_x591, _ctx); /*1001*/
  _x_x585 = kk_std_core_hnd__open_at2(_b_x230_236, kk_infer__new_mlift_infer_10072_fun586_sq_(_ctx), kk_types__types_box(t_e1, _ctx), _x_x590, _ctx); /*1002*/
  x_10117 = kk_std_core_types__list_unbox(_x_x585, KK_OWNED, _ctx); /*types/subst*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10117, _ctx);
    kk_box_t _x_x595 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10072_fun596_sq_(t_ret_0, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x595, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10071_sq_(t_ret_0, x_10117, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10073_fun601__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10073_fun601_sq_(kk_function_t _fself, kk_box_t _b_x251, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10073_fun601_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10073_fun601_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10073_fun601_sq_(kk_function_t _fself, kk_box_t _b_x251, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x602;
  kk_string_t _x_x603 = kk_string_unbox(_b_x251); /*expr/uid*/
  _x_x602 = kk_infer_tvar(_x_x603, _ctx); /*types/types*/
  return kk_types__types_box(_x_x602, _ctx);
}


// lift anonymous function
struct kk_infer__mlift_infer_10073_fun608__t_sq_ {
  struct kk_function_s _base;
  kk_types__types t_e1_0;
  kk_types__types t_e2_0;
};
static kk_box_t kk_infer__mlift_infer_10073_fun608_sq_(kk_function_t _fself, kk_box_t _b_x260, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10073_fun608_sq_(kk_types__types t_e1_0, kk_types__types t_e2_0, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10073_fun608__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10073_fun608__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10073_fun608_sq_, kk_context());
  _self->t_e1_0 = t_e1_0;
  _self->t_e2_0 = t_e2_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10073_fun608_sq_(kk_function_t _fself, kk_box_t _b_x260, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10073_fun608__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10073_fun608__t_sq_*, _fself, _ctx);
  kk_types__types t_e1_0 = _self->t_e1_0; /* types/types */
  kk_types__types t_e2_0 = _self->t_e2_0; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(t_e1_0, _ctx);kk_types__types_dup(t_e2_0, _ctx);}, {}, _ctx)
  kk_types__types t_ret_1_262 = kk_types__types_unbox(_b_x260, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x609 = kk_infer__mlift_infer_10072_sq_(t_e1_0, t_e2_0, t_ret_1_262, _ctx); /*types/types*/
  return kk_types__types_box(_x_x609, _ctx);
}

kk_types__types kk_infer__mlift_infer_10073_sq_(kk_types__types t_e1_0, kk_types__types t_e2_0, kk_context_t* _ctx) { /* (t-e1 : types/types, t-e2 : types/types) -> <pure,console/console,tenv-ref,expr/unique> types/types */ 
  kk_ssize_t _b_x246_255 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_ssize_t _b_x244_257 = (KK_IZ(2)); /*hnd/ev-index*/;
  kk_vector_t _b_x248_252;
  kk_std_core_types__list _x_x598;
  kk_std_core_types__list _x_x599 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_ssize_box(_b_x244_257, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<0>*/
  _x_x598 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_ssize_box(_b_x246_255, _ctx), _x_x599, _ctx); /*list<0>*/
  _b_x248_252 = kk_std_core_vector_unvlist(_x_x598, _ctx); /*vector<hnd/ev-index>*/
  kk_types__types x_0_10119;
  kk_box_t _x_x600;
  kk_box_t _x_x604;
  kk_string_t _x_x605 = kk_string_empty(); /*string*/
  _x_x604 = kk_string_box(_x_x605); /*1000*/
  _x_x600 = kk_std_core_hnd__open1(_b_x248_252, kk_infer__new_mlift_infer_10073_fun601_sq_(_ctx), _x_x604, _ctx); /*1001*/
  x_0_10119 = kk_types__types_unbox(_x_x600, KK_OWNED, _ctx); /*types/types*/
  if (kk_yielding(kk_context())) {
    kk_types__types_drop(x_0_10119, _ctx);
    kk_box_t _x_x607 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10073_fun608_sq_(t_e1_0, t_e2_0, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x607, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10072_sq_(t_e1_0, t_e2_0, x_0_10119, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10074_fun611__t_sq_ {
  struct kk_function_s _base;
  kk_types__types t_e1_1;
};
static kk_box_t kk_infer__mlift_infer_10074_fun611_sq_(kk_function_t _fself, kk_box_t _b_x264, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10074_fun611_sq_(kk_types__types t_e1_1, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10074_fun611__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10074_fun611__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10074_fun611_sq_, kk_context());
  _self->t_e1_1 = t_e1_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10074_fun611_sq_(kk_function_t _fself, kk_box_t _b_x264, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10074_fun611__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10074_fun611__t_sq_*, _fself, _ctx);
  kk_types__types t_e1_1 = _self->t_e1_1; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(t_e1_1, _ctx);}, {}, _ctx)
  kk_types__types t_e2_1_266 = kk_types__types_unbox(_b_x264, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x612 = kk_infer__mlift_infer_10073_sq_(t_e1_1, t_e2_1_266, _ctx); /*types/types*/
  return kk_types__types_box(_x_x612, _ctx);
}

kk_types__types kk_infer__mlift_infer_10074_sq_(kk_expr__uexpr e2, kk_types__types t_e1_1, kk_context_t* _ctx) { /* (e2 : expr/uexpr, t-e1 : types/types) -> <pure,console/console,tenv-ref,expr/unique> types/types */ 
  kk_types__types x_1_10121 = kk_infer_infer_sq_(e2, _ctx); /*types/types*/;
  if (kk_yielding(kk_context())) {
    kk_types__types_drop(x_1_10121, _ctx);
    kk_box_t _x_x610 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10074_fun611_sq_(t_e1_1, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x610, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10073_sq_(t_e1_1, x_1_10121, _ctx);
  }
}
 
// monadic lift

kk_types__types kk_infer__mlift_infer_10075_sq_(kk_types__types t_a, kk_types__types t_body, kk_context_t* _ctx) { /* (t-a : types/types, t-body : types/types) -> <pure,console/console,tenv-ref,expr/unique> types/types */ 
  kk_types__types _x_x613;
  kk_types__types _x_x614 = kk_types__types_dup(kk_types_t_arrow, _ctx); /*types/types*/
  _x_x613 = kk_types__new_TApp(kk_reuse_null, 0, _x_x614, t_a, _ctx); /*types/types*/
  return kk_types__new_TApp(kk_reuse_null, 0, _x_x613, t_body, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10076_fun616__t_sq_ {
  struct kk_function_s _base;
  kk_types__types t_a_0;
};
static kk_box_t kk_infer__mlift_infer_10076_fun616_sq_(kk_function_t _fself, kk_box_t _b_x268, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10076_fun616_sq_(kk_types__types t_a_0, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10076_fun616__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10076_fun616__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10076_fun616_sq_, kk_context());
  _self->t_a_0 = t_a_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10076_fun616_sq_(kk_function_t _fself, kk_box_t _b_x268, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10076_fun616__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10076_fun616__t_sq_*, _fself, _ctx);
  kk_types__types t_a_0 = _self->t_a_0; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(t_a_0, _ctx);}, {}, _ctx)
  kk_types__types t_body_0_270 = kk_types__types_unbox(_b_x268, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x617 = kk_infer__mlift_infer_10075_sq_(t_a_0, t_body_0_270, _ctx); /*types/types*/
  return kk_types__types_box(_x_x617, _ctx);
}

kk_types__types kk_infer__mlift_infer_10076_sq_(kk_expr__uexpr body, kk_types__types t_a_0, kk_context_t* _ctx) { /* (body : expr/uexpr, t-a : types/types) -> <tenv-ref,expr/unique,console/console,div,exn> types/types */ 
  kk_types__types x_2_10123 = kk_infer_infer_sq_(body, _ctx); /*types/types*/;
  if (kk_yielding(kk_context())) {
    kk_types__types_drop(x_2_10123, _ctx);
    kk_box_t _x_x615 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10076_fun616_sq_(t_a_0, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x615, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10075_sq_(t_a_0, x_2_10123, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10077_fun624__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer__mlift_infer_10077_fun624_sq_(kk_function_t _fself, kk_box_t _b_x278, kk_box_t _b_x279, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10077_fun624_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer__mlift_infer_10077_fun624_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer__mlift_infer_10077_fun624_sq_(kk_function_t _fself, kk_box_t _b_x278, kk_box_t _b_x279, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _b_x272_284 = kk_string_unbox(_b_x278); /*string*/;
  kk_std_core_types__optional _b_x273_285 = kk_std_core_types__optional_unbox(_b_x279, KK_OWNED, _ctx); /*? exception-info*/;
  return kk_std_core_exn_throw(_b_x272_284, _b_x273_285, _ctx);
}

kk_types__types kk_infer__mlift_infer_10077_sq_(kk_string_t x_3, kk_std_core_types__maybe _y_x10030, kk_context_t* _ctx) { /* (x : expr/uid, maybe<types/types>) -> <tenv-ref,exn,console/console,div,expr/unique> types/types */ 
  if (kk_std_core_types__is_Just(_y_x10030, _ctx)) {
    kk_box_t _box_x271 = _y_x10030._cons.Just.value;
    kk_types__types t = kk_types__types_unbox(_box_x271, KK_BORROWED, _ctx);
    kk_string_drop(x_3, _ctx);
    kk_types__types_dup(t, _ctx);
    kk_std_core_types__maybe_drop(_y_x10030, _ctx);
    return t;
  }
  {
    kk_string_t _x_x1_3_10061;
    kk_string_t _x_x618;
    kk_define_string_literal(, _s_x619, 9, "variable ", _ctx)
    _x_x618 = kk_string_dup(_s_x619, _ctx); /*string*/
    kk_string_t _x_x620;
    kk_string_t _x_x621;
    kk_define_string_literal(, _s_x622, 10, " not found", _ctx)
    _x_x621 = kk_string_dup(_s_x622, _ctx); /*string*/
    _x_x620 = kk_std_core_types__lp__plus__plus__rp_(x_3, _x_x621, _ctx); /*string*/
    _x_x1_3_10061 = kk_std_core_types__lp__plus__plus__rp_(_x_x618, _x_x620, _ctx); /*string*/
    kk_ssize_t _b_x274_280 = (KK_IZ(0)); /*hnd/ev-index*/;
    kk_box_t _x_x623 = kk_std_core_hnd__open_at2(_b_x274_280, kk_infer__new_mlift_infer_10077_fun624_sq_(_ctx), kk_string_box(_x_x1_3_10061), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
    return kk_types__types_unbox(_x_x623, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_infer__mlift_infer_10078_fun626__t_sq_ {
  struct kk_function_s _base;
  kk_string_t x_4;
};
static bool kk_infer__mlift_infer_10078_fun626_sq_(kk_function_t _fself, kk_box_t _b_x288, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10078_fun626_sq_(kk_string_t x_4, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10078_fun626__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10078_fun626__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10078_fun626_sq_, kk_context());
  _self->x_4 = x_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_infer__mlift_infer_10078_fun626_sq_(kk_function_t _fself, kk_box_t _b_x288, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10078_fun626__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10078_fun626__t_sq_*, _fself, _ctx);
  kk_string_t x_4 = _self->x_4; /* expr/uid */
  kk_drop_match(_self, {kk_string_dup(x_4, _ctx);}, {}, _ctx)
  kk_string_t _x_x627 = kk_string_unbox(_b_x288); /*expr/uid*/
  return kk_string_is_eq(x_4,_x_x627,kk_context());
}


// lift anonymous function
struct kk_infer__mlift_infer_10078_fun629__t_sq_ {
  struct kk_function_s _base;
  kk_string_t x_4;
};
static kk_box_t kk_infer__mlift_infer_10078_fun629_sq_(kk_function_t _fself, kk_box_t _b_x293, kk_context_t* _ctx);
static kk_function_t kk_infer__new_mlift_infer_10078_fun629_sq_(kk_string_t x_4, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10078_fun629__t_sq_* _self = kk_function_alloc_as(struct kk_infer__mlift_infer_10078_fun629__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer__mlift_infer_10078_fun629_sq_, kk_context());
  _self->x_4 = x_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer__mlift_infer_10078_fun629_sq_(kk_function_t _fself, kk_box_t _b_x293, kk_context_t* _ctx) {
  struct kk_infer__mlift_infer_10078_fun629__t_sq_* _self = kk_function_as(struct kk_infer__mlift_infer_10078_fun629__t_sq_*, _fself, _ctx);
  kk_string_t x_4 = _self->x_4; /* expr/uid */
  kk_drop_match(_self, {kk_string_dup(x_4, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10030_0_295 = kk_std_core_types__maybe_unbox(_b_x293, KK_OWNED, _ctx); /*maybe<types/types>*/;
  kk_types__types _x_x630 = kk_infer__mlift_infer_10077_sq_(x_4, _y_x10030_0_295, _ctx); /*types/types*/
  return kk_types__types_box(_x_x630, _ctx);
}

kk_types__types kk_infer__mlift_infer_10078_sq_(kk_string_t x_4, kk_std_core_types__list _y_x10029, kk_context_t* _ctx) { /* (x : expr/uid, tenv) -> <tenv-ref,exn,console/console,div,expr/unique> types/types */ 
  kk_std_core_types__maybe x_5_10125;
  kk_function_t _x_x625;
  kk_string_dup(x_4, _ctx);
  _x_x625 = kk_infer__new_mlift_infer_10078_fun626_sq_(x_4, _ctx); /*(3019) -> 3021 bool*/
  x_5_10125 = kk_std_core_list_lookup(_y_x10029, _x_x625, _ctx); /*maybe<types/types>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_5_10125, _ctx);
    kk_box_t _x_x628 = kk_std_core_hnd_yield_extend(kk_infer__new_mlift_infer_10078_fun629_sq_(x_4, _ctx), _ctx); /*3003*/
    return kk_types__types_unbox(_x_x628, KK_OWNED, _ctx);
  }
  {
    return kk_infer__mlift_infer_10077_sq_(x_4, x_5_10125, _ctx);
  }
}


// lift anonymous function
struct kk_infer_infer_fun633__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr e2_0;
};
static kk_box_t kk_infer_infer_fun633_sq_(kk_function_t _fself, kk_box_t _b_x297, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun633_sq_(kk_expr__uexpr e2_0, kk_context_t* _ctx) {
  struct kk_infer_infer_fun633__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun633__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun633_sq_, kk_context());
  _self->e2_0 = e2_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun633_sq_(kk_function_t _fself, kk_box_t _b_x297, kk_context_t* _ctx) {
  struct kk_infer_infer_fun633__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun633__t_sq_*, _fself, _ctx);
  kk_expr__uexpr e2_0 = _self->e2_0; /* expr/uexpr */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e2_0, _ctx);}, {}, _ctx)
  kk_types__types t_e1_2_421 = kk_types__types_unbox(_b_x297, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x634 = kk_infer__mlift_infer_10074_sq_(e2_0, t_e1_2_421, _ctx); /*types/types*/
  return kk_types__types_box(_x_x634, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun636__t_sq_ {
  struct kk_function_s _base;
  kk_types__types x_6_10127;
};
static kk_box_t kk_infer_infer_fun636_sq_(kk_function_t _fself, kk_box_t _b_x299, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun636_sq_(kk_types__types x_6_10127, kk_context_t* _ctx) {
  struct kk_infer_infer_fun636__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun636__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun636_sq_, kk_context());
  _self->x_6_10127 = x_6_10127;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun636_sq_(kk_function_t _fself, kk_box_t _b_x299, kk_context_t* _ctx) {
  struct kk_infer_infer_fun636__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun636__t_sq_*, _fself, _ctx);
  kk_types__types x_6_10127 = _self->x_6_10127; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(x_6_10127, _ctx);}, {}, _ctx)
  kk_types__types t_e2_2_422 = kk_types__types_unbox(_b_x299, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x637 = kk_infer__mlift_infer_10073_sq_(x_6_10127, t_e2_2_422, _ctx); /*types/types*/
  return kk_types__types_box(_x_x637, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun641__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun641_sq_(kk_function_t _fself, kk_box_t _b_x307, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun641_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun641_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun641_sq_(kk_function_t _fself, kk_box_t _b_x307, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x642;
  kk_string_t _x_x643 = kk_string_unbox(_b_x307); /*expr/uid*/
  _x_x642 = kk_infer_tvar(_x_x643, _ctx); /*types/types*/
  return kk_types__types_box(_x_x642, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun648__t_sq_ {
  struct kk_function_s _base;
  kk_types__types x_6_10127;
  kk_types__types x_7_10130;
};
static kk_box_t kk_infer_infer_fun648_sq_(kk_function_t _fself, kk_box_t _b_x316, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun648_sq_(kk_types__types x_6_10127, kk_types__types x_7_10130, kk_context_t* _ctx) {
  struct kk_infer_infer_fun648__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun648__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun648_sq_, kk_context());
  _self->x_6_10127 = x_6_10127;
  _self->x_7_10130 = x_7_10130;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun648_sq_(kk_function_t _fself, kk_box_t _b_x316, kk_context_t* _ctx) {
  struct kk_infer_infer_fun648__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun648__t_sq_*, _fself, _ctx);
  kk_types__types x_6_10127 = _self->x_6_10127; /* types/types */
  kk_types__types x_7_10130 = _self->x_7_10130; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(x_6_10127, _ctx);kk_types__types_dup(x_7_10130, _ctx);}, {}, _ctx)
  kk_types__types t_ret_2_423 = kk_types__types_unbox(_b_x316, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x649 = kk_infer__mlift_infer_10072_sq_(x_6_10127, x_7_10130, t_ret_2_423, _ctx); /*types/types*/
  return kk_types__types_box(_x_x649, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun651__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun651_sq_(kk_function_t _fself, kk_box_t _b_x321, kk_box_t _b_x322, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun651_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun651_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun651_sq_(kk_function_t _fself, kk_box_t _b_x321, kk_box_t _b_x322, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x652;
  kk_types__types _x_x653 = kk_types__types_unbox(_b_x321, KK_OWNED, _ctx); /*types/types*/
  kk_types__types _x_x654 = kk_types__types_unbox(_b_x322, KK_OWNED, _ctx); /*types/types*/
  _x_x652 = kk_types_unify(_x_x653, _x_x654, _ctx); /*types/subst*/
  return kk_std_core_types__list_box(_x_x652, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun661__t_sq_ {
  struct kk_function_s _base;
  kk_types__types x_8_10133;
};
static kk_box_t kk_infer_infer_fun661_sq_(kk_function_t _fself, kk_box_t _b_x328, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun661_sq_(kk_types__types x_8_10133, kk_context_t* _ctx) {
  struct kk_infer_infer_fun661__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun661__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun661_sq_, kk_context());
  _self->x_8_10133 = x_8_10133;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun661_sq_(kk_function_t _fself, kk_box_t _b_x328, kk_context_t* _ctx) {
  struct kk_infer_infer_fun661__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun661__t_sq_*, _fself, _ctx);
  kk_types__types x_8_10133 = _self->x_8_10133; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(x_8_10133, _ctx);}, {}, _ctx)
  kk_std_core_types__list subst_1_424 = kk_std_core_types__list_unbox(_b_x328, KK_OWNED, _ctx); /*types/subst*/;
  kk_types__types _x_x662 = kk_infer__mlift_infer_10071_sq_(x_8_10133, subst_1_424, _ctx); /*types/types*/
  return kk_types__types_box(_x_x662, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun663__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun663_sq_(kk_function_t _fself, kk_box_t _b_x332, kk_box_t _b_x333, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun663_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun663_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun663_sq_(kk_function_t _fself, kk_box_t _b_x332, kk_box_t _b_x333, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x664;
  kk_types__types _x_x665 = kk_types__types_unbox(_b_x332, KK_OWNED, _ctx); /*types/types*/
  kk_std_core_types__list _x_x666 = kk_std_core_types__list_unbox(_b_x333, KK_OWNED, _ctx); /*types/subst*/
  _x_x664 = kk_infer_apply_sq_(_x_x665, _x_x666, _ctx); /*types/types*/
  return kk_types__types_box(_x_x664, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun671__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun671_sq_(kk_function_t _fself, kk_box_t _b_x341, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun671_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun671_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun671_sq_(kk_function_t _fself, kk_box_t _b_x341, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_types__types _x_x672;
  kk_string_t _x_x673 = kk_string_unbox(_b_x341); /*expr/uid*/
  _x_x672 = kk_infer_tvar(_x_x673, _ctx); /*types/types*/
  return kk_types__types_box(_x_x672, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun675__t_sq_ {
  struct kk_function_s _base;
  kk_expr__uexpr body_0;
};
static kk_box_t kk_infer_infer_fun675_sq_(kk_function_t _fself, kk_box_t _b_x350, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun675_sq_(kk_expr__uexpr body_0, kk_context_t* _ctx) {
  struct kk_infer_infer_fun675__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun675__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun675_sq_, kk_context());
  _self->body_0 = body_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun675_sq_(kk_function_t _fself, kk_box_t _b_x350, kk_context_t* _ctx) {
  struct kk_infer_infer_fun675__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun675__t_sq_*, _fself, _ctx);
  kk_expr__uexpr body_0 = _self->body_0; /* expr/uexpr */
  kk_drop_match(_self, {kk_expr__uexpr_dup(body_0, _ctx);}, {}, _ctx)
  kk_types__types t_a_1_425 = kk_types__types_unbox(_b_x350, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x676 = kk_infer__mlift_infer_10076_sq_(body_0, t_a_1_425, _ctx); /*types/types*/
  return kk_types__types_box(_x_x676, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun678__t_sq_ {
  struct kk_function_s _base;
  kk_types__types x_10_10139;
};
static kk_box_t kk_infer_infer_fun678_sq_(kk_function_t _fself, kk_box_t _b_x352, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun678_sq_(kk_types__types x_10_10139, kk_context_t* _ctx) {
  struct kk_infer_infer_fun678__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun678__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun678_sq_, kk_context());
  _self->x_10_10139 = x_10_10139;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun678_sq_(kk_function_t _fself, kk_box_t _b_x352, kk_context_t* _ctx) {
  struct kk_infer_infer_fun678__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun678__t_sq_*, _fself, _ctx);
  kk_types__types x_10_10139 = _self->x_10_10139; /* types/types */
  kk_drop_match(_self, {kk_types__types_dup(x_10_10139, _ctx);}, {}, _ctx)
  kk_types__types t_body_1_426 = kk_types__types_unbox(_b_x352, KK_OWNED, _ctx); /*types/types*/;
  kk_types__types _x_x679 = kk_infer__mlift_infer_10075_sq_(x_10_10139, t_body_1_426, _ctx); /*types/types*/
  return kk_types__types_box(_x_x679, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun684__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun684_sq_(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun684_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun684_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun684_sq_(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10148 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<infer/tenv-ref>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x685 = kk_std_core_hnd__as_Ev(ev_10148, _ctx);
    kk_box_t _box_x353 = _con_x685->hnd;
    int32_t m = _con_x685->marker;
    kk_infer__tenv_ref h = kk_infer__tenv_ref_unbox(_box_x353, KK_BORROWED, _ctx);
    kk_infer__tenv_ref_dup(h, _ctx);
    {
      struct kk_infer__Hnd_tenv_ref* _con_x686 = kk_infer__as_Hnd_tenv_ref(h, _ctx);
      kk_integer_t _pat_0_11 = _con_x686->_cfc;
      kk_std_core_hnd__clause1 _pat_1_2 = _con_x686->_fun_modify;
      kk_std_core_hnd__clause0 _fun_tv = _con_x686->_fun_tv;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_1_2, _ctx);
        kk_integer_drop(_pat_0_11, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_tv, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x356 = _fun_tv.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x356, (_fun_unbox_x356, m, ev_10148, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_infer_infer_fun688__t_sq_ {
  struct kk_function_s _base;
  kk_string_t x_12;
};
static kk_box_t kk_infer_infer_fun688_sq_(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun688_sq_(kk_string_t x_12, kk_context_t* _ctx) {
  struct kk_infer_infer_fun688__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun688__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun688_sq_, kk_context());
  _self->x_12 = x_12;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun688_sq_(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx) {
  struct kk_infer_infer_fun688__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun688__t_sq_*, _fself, _ctx);
  kk_string_t x_12 = _self->x_12; /* expr/uid */
  kk_drop_match(_self, {kk_string_dup(x_12, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10029_0_427 = kk_std_core_types__list_unbox(_b_x364, KK_OWNED, _ctx); /*infer/tenv*/;
  kk_types__types _x_x689 = kk_infer__mlift_infer_10078_sq_(x_12, _y_x10029_0_427, _ctx); /*types/types*/
  return kk_types__types_box(_x_x689, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun691__t_sq_ {
  struct kk_function_s _base;
  kk_string_t x_12;
};
static bool kk_infer_infer_fun691_sq_(kk_function_t _fself, kk_box_t _b_x367, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun691_sq_(kk_string_t x_12, kk_context_t* _ctx) {
  struct kk_infer_infer_fun691__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun691__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun691_sq_, kk_context());
  _self->x_12 = x_12;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_infer_infer_fun691_sq_(kk_function_t _fself, kk_box_t _b_x367, kk_context_t* _ctx) {
  struct kk_infer_infer_fun691__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun691__t_sq_*, _fself, _ctx);
  kk_string_t x_12 = _self->x_12; /* expr/uid */
  kk_drop_match(_self, {kk_string_dup(x_12, _ctx);}, {}, _ctx)
  kk_string_t _x_x692 = kk_string_unbox(_b_x367); /*expr/uid*/
  return kk_string_is_eq(x_12,_x_x692,kk_context());
}


// lift anonymous function
struct kk_infer_infer_fun694__t_sq_ {
  struct kk_function_s _base;
  kk_string_t x_12;
};
static kk_box_t kk_infer_infer_fun694_sq_(kk_function_t _fself, kk_box_t _b_x372, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun694_sq_(kk_string_t x_12, kk_context_t* _ctx) {
  struct kk_infer_infer_fun694__t_sq_* _self = kk_function_alloc_as(struct kk_infer_infer_fun694__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun694_sq_, kk_context());
  _self->x_12 = x_12;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun694_sq_(kk_function_t _fself, kk_box_t _b_x372, kk_context_t* _ctx) {
  struct kk_infer_infer_fun694__t_sq_* _self = kk_function_as(struct kk_infer_infer_fun694__t_sq_*, _fself, _ctx);
  kk_string_t x_12 = _self->x_12; /* expr/uid */
  kk_drop_match(_self, {kk_string_dup(x_12, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10030_1_428 = kk_std_core_types__maybe_unbox(_b_x372, KK_OWNED, _ctx); /*maybe<types/types>*/;
  kk_types__types _x_x695 = kk_infer__mlift_infer_10077_sq_(x_12, _y_x10030_1_428, _ctx); /*types/types*/
  return kk_types__types_box(_x_x695, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun702__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun702_sq_(kk_function_t _fself, kk_box_t _b_x380, kk_box_t _b_x381, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun702_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun702_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun702_sq_(kk_function_t _fself, kk_box_t _b_x380, kk_box_t _b_x381, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _b_x374_429 = kk_string_unbox(_b_x380); /*string*/;
  kk_std_core_types__optional _b_x375_430 = kk_std_core_types__optional_unbox(_b_x381, KK_OWNED, _ctx); /*? exception-info*/;
  return kk_std_core_exn_throw(_b_x374_429, _b_x375_430, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun706__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun706_sq_(kk_function_t _fself, kk_box_t _b_x388, kk_box_t _b_x389, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun706_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun706_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun706_sq_(kk_function_t _fself, kk_box_t _b_x388, kk_box_t _b_x389, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _b_x382_431 = kk_string_unbox(_b_x388); /*string*/;
  kk_string_t _b_x383_432 = kk_string_unbox(_b_x389); /*string*/;
  return kk_std_core_exn_error_pattern(_b_x382_431, _b_x383_432, _ctx);
}


// lift anonymous function
struct kk_infer_infer_fun714__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_infer_infer_fun714_sq_(kk_function_t _fself, kk_box_t _b_x396, kk_box_t _b_x397, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun714_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_infer_infer_fun714_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_infer_infer_fun714_sq_(kk_function_t _fself, kk_box_t _b_x396, kk_box_t _b_x397, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _b_x390_433 = kk_string_unbox(_b_x396); /*string*/;
  kk_string_t _b_x391_434 = kk_string_unbox(_b_x397); /*string*/;
  return kk_std_core_exn_error_pattern(_b_x390_433, _b_x391_434, _ctx);
}

kk_types__types kk_infer_infer_sq_(kk_expr__uexpr e, kk_context_t* _ctx) { /* (e : expr/uexpr) -> <pure,console/console,tenv-ref,expr/unique> types/types */ 
  if (kk_expr__is_UApp(e, _ctx)) {
    struct kk_expr_UApp* _con_x631 = kk_expr__as_UApp(e, _ctx);
    kk_expr__uexpr e1 = _con_x631->e1;
    kk_expr__uexpr e2_0 = _con_x631->e2;
    kk_reuse_t _ru_x475 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x475 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_expr__uexpr_dup(e1, _ctx);
      kk_expr__uexpr_dup(e2_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_types__types x_6_10127 = kk_infer_infer_sq_(e1, _ctx); /*types/types*/;
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x475,kk_context());
      kk_types__types_drop(x_6_10127, _ctx);
      kk_box_t _x_x632 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun633_sq_(e2_0, _ctx), _ctx); /*3003*/
      return kk_types__types_unbox(_x_x632, KK_OWNED, _ctx);
    }
    {
      kk_types__types x_7_10130 = kk_infer_infer_sq_(e2_0, _ctx); /*types/types*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x475,kk_context());
        kk_types__types_drop(x_7_10130, _ctx);
        kk_box_t _x_x635 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun636_sq_(x_6_10127, _ctx), _ctx); /*3003*/
        return kk_types__types_unbox(_x_x635, KK_OWNED, _ctx);
      }
      {
        kk_ssize_t _b_x302_311 = (KK_IZ(1)); /*hnd/ev-index*/;
        kk_ssize_t _b_x300_313 = (KK_IZ(2)); /*hnd/ev-index*/;
        kk_vector_t _b_x304_308;
        kk_std_core_types__list _x_x638;
        kk_std_core_types__list _x_x639 = kk_std_core_types__new_Cons(_ru_x475, 0, kk_ssize_box(_b_x300_313, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<0>*/
        _x_x638 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_ssize_box(_b_x302_311, _ctx), _x_x639, _ctx); /*list<0>*/
        _b_x304_308 = kk_std_core_vector_unvlist(_x_x638, _ctx); /*vector<hnd/ev-index>*/
        kk_types__types x_8_10133;
        kk_box_t _x_x640;
        kk_box_t _x_x644;
        kk_string_t _x_x645 = kk_string_empty(); /*string*/
        _x_x644 = kk_string_box(_x_x645); /*1000*/
        _x_x640 = kk_std_core_hnd__open1(_b_x304_308, kk_infer_new_infer_fun641_sq_(_ctx), _x_x644, _ctx); /*1001*/
        x_8_10133 = kk_types__types_unbox(_x_x640, KK_OWNED, _ctx); /*types/types*/
        if (kk_yielding(kk_context())) {
          kk_types__types_drop(x_8_10133, _ctx);
          kk_box_t _x_x647 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun648_sq_(x_6_10127, x_7_10130, _ctx), _ctx); /*3003*/
          return kk_types__types_unbox(_x_x647, KK_OWNED, _ctx);
        }
        {
          kk_ssize_t _b_x317_323 = (KK_IZ(0)); /*hnd/ev-index*/;
          kk_std_core_types__list x_9_10136;
          kk_box_t _x_x650;
          kk_box_t _x_x655;
          kk_types__types _x_x656;
          kk_types__types _x_x657;
          kk_types__types _x_x658 = kk_types__types_dup(kk_types_t_arrow, _ctx); /*types/types*/
          _x_x657 = kk_types__new_TApp(kk_reuse_null, 0, _x_x658, x_7_10130, _ctx); /*types/types*/
          kk_types__types _x_x659 = kk_types__types_dup(x_8_10133, _ctx); /*types/types*/
          _x_x656 = kk_types__new_TApp(kk_reuse_null, 0, _x_x657, _x_x659, _ctx); /*types/types*/
          _x_x655 = kk_types__types_box(_x_x656, _ctx); /*1001*/
          _x_x650 = kk_std_core_hnd__open_at2(_b_x317_323, kk_infer_new_infer_fun651_sq_(_ctx), kk_types__types_box(x_6_10127, _ctx), _x_x655, _ctx); /*1002*/
          x_9_10136 = kk_std_core_types__list_unbox(_x_x650, KK_OWNED, _ctx); /*types/subst*/
          kk_box_t _x_x660;
          if (kk_yielding(kk_context())) {
            kk_std_core_types__list_drop(x_9_10136, _ctx);
            _x_x660 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun661_sq_(x_8_10133, _ctx), _ctx); /*3003*/
          }
          else {
            _x_x660 = kk_std_core_hnd__open_none2(kk_infer_new_infer_fun663_sq_(_ctx), kk_types__types_box(x_8_10133, _ctx), kk_std_core_types__list_box(x_9_10136, _ctx), _ctx); /*3003*/
          }
          return kk_types__types_unbox(_x_x660, KK_OWNED, _ctx);
        }
      }
    }
  }
  if (kk_expr__is_ULam(e, _ctx)) {
    struct kk_expr_ULam* _con_x667 = kk_expr__as_ULam(e, _ctx);
    kk_string_t a_0 = _con_x667->a;
    kk_expr__uexpr body_0 = _con_x667->body;
    kk_reuse_t _ru_x476 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x476 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_string_dup(a_0, _ctx);
      kk_expr__uexpr_dup(body_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_ssize_t _b_x336_345 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_ssize_t _b_x334_347 = (KK_IZ(2)); /*hnd/ev-index*/;
    kk_vector_t _b_x338_342;
    kk_std_core_types__list _x_x668;
    kk_std_core_types__list _x_x669 = kk_std_core_types__new_Cons(_ru_x476, 0, kk_ssize_box(_b_x334_347, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<0>*/
    _x_x668 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_ssize_box(_b_x336_345, _ctx), _x_x669, _ctx); /*list<0>*/
    _b_x338_342 = kk_std_core_vector_unvlist(_x_x668, _ctx); /*vector<hnd/ev-index>*/
    kk_types__types x_10_10139;
    kk_box_t _x_x670 = kk_std_core_hnd__open1(_b_x338_342, kk_infer_new_infer_fun671_sq_(_ctx), kk_string_box(a_0), _ctx); /*1001*/
    x_10_10139 = kk_types__types_unbox(_x_x670, KK_OWNED, _ctx); /*types/types*/
    if (kk_yielding(kk_context())) {
      kk_types__types_drop(x_10_10139, _ctx);
      kk_box_t _x_x674 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun675_sq_(body_0, _ctx), _ctx); /*3003*/
      return kk_types__types_unbox(_x_x674, KK_OWNED, _ctx);
    }
    {
      kk_types__types x_11_10142 = kk_infer_infer_sq_(body_0, _ctx); /*types/types*/;
      if (kk_yielding(kk_context())) {
        kk_types__types_drop(x_11_10142, _ctx);
        kk_box_t _x_x677 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun678_sq_(x_10_10139, _ctx), _ctx); /*3003*/
        return kk_types__types_unbox(_x_x677, KK_OWNED, _ctx);
      }
      {
        kk_types__types _x_x680;
        kk_types__types _x_x681 = kk_types__types_dup(kk_types_t_arrow, _ctx); /*types/types*/
        _x_x680 = kk_types__new_TApp(kk_reuse_null, 0, _x_x681, x_10_10139, _ctx); /*types/types*/
        return kk_types__new_TApp(kk_reuse_null, 0, _x_x680, x_11_10142, _ctx);
      }
    }
  }
  if (kk_expr__is_UVar(e, _ctx)) {
    struct kk_expr_UVar* _con_x682 = kk_expr__as_UVar(e, _ctx);
    kk_string_t x_12 = _con_x682->x;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(x_12, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_ssize_t _b_x359_361 = (KK_IZ(1)); /*hnd/ev-index*/;
    kk_std_core_types__list x_13_10145;
    kk_box_t _x_x683 = kk_std_core_hnd__open_at0(_b_x359_361, kk_infer_new_infer_fun684_sq_(_ctx), _ctx); /*1000*/
    x_13_10145 = kk_std_core_types__list_unbox(_x_x683, KK_OWNED, _ctx); /*infer/tenv*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_13_10145, _ctx);
      kk_box_t _x_x687 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun688_sq_(x_12, _ctx), _ctx); /*3003*/
      return kk_types__types_unbox(_x_x687, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__maybe x_14_10150;
      kk_function_t _x_x690;
      kk_string_dup(x_12, _ctx);
      _x_x690 = kk_infer_new_infer_fun691_sq_(x_12, _ctx); /*(3019) -> 3021 bool*/
      x_14_10150 = kk_std_core_list_lookup(x_13_10145, _x_x690, _ctx); /*maybe<types/types>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__maybe_drop(x_14_10150, _ctx);
        kk_box_t _x_x693 = kk_std_core_hnd_yield_extend(kk_infer_new_infer_fun694_sq_(x_12, _ctx), _ctx); /*3003*/
        return kk_types__types_unbox(_x_x693, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Just(x_14_10150, _ctx)) {
        kk_box_t _box_x373 = x_14_10150._cons.Just.value;
        kk_types__types t_0 = kk_types__types_unbox(_box_x373, KK_BORROWED, _ctx);
        kk_types__types_dup(t_0, _ctx);
        kk_std_core_types__maybe_drop(x_14_10150, _ctx);
        kk_string_drop(x_12, _ctx);
        return t_0;
      }
      {
        kk_string_t _x_x1_3_10061_0;
        kk_string_t _x_x696;
        kk_define_string_literal(, _s_x697, 9, "variable ", _ctx)
        _x_x696 = kk_string_dup(_s_x697, _ctx); /*string*/
        kk_string_t _x_x698;
        kk_string_t _x_x699;
        kk_define_string_literal(, _s_x700, 10, " not found", _ctx)
        _x_x699 = kk_string_dup(_s_x700, _ctx); /*string*/
        _x_x698 = kk_std_core_types__lp__plus__plus__rp_(x_12, _x_x699, _ctx); /*string*/
        _x_x1_3_10061_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x696, _x_x698, _ctx); /*string*/
        kk_ssize_t _b_x376_409 = (KK_IZ(0)); /*hnd/ev-index*/;
        kk_box_t _x_x701 = kk_std_core_hnd__open_at2(_b_x376_409, kk_infer_new_infer_fun702_sq_(_ctx), kk_string_box(_x_x1_3_10061_0), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
        return kk_types__types_unbox(_x_x701, KK_OWNED, _ctx);
      }
    }
  }
  if (kk_expr__is_ULit(e, _ctx)) {
    struct kk_expr_ULit* _con_x703 = kk_expr__as_ULit(e, _ctx);
    kk_value__value v = _con_x703->v;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_value__value_dup(v, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    if (kk_value__is_Int(v, _ctx)) {
      struct kk_value_Int* _con_x704 = kk_value__as_Int(v, _ctx);
      kk_integer_t i = _con_x704->x;
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
      kk_value__value_drop(v, _ctx);
      kk_ssize_t _b_x384_413 = (KK_IZ(0)); /*hnd/ev-index*/;
      kk_box_t _x_x705;
      kk_box_t _x_x707;
      kk_string_t _x_x708;
      kk_define_string_literal(, _s_x709, 12, "infer(52, 7)", _ctx)
      _x_x708 = kk_string_dup(_s_x709, _ctx); /*string*/
      _x_x707 = kk_string_box(_x_x708); /*1000*/
      kk_box_t _x_x710;
      kk_string_t _x_x711;
      kk_define_string_literal(, _s_x712, 6, "infer\'", _ctx)
      _x_x711 = kk_string_dup(_s_x712, _ctx); /*string*/
      _x_x710 = kk_string_box(_x_x711); /*1001*/
      _x_x705 = kk_std_core_hnd__open_at2(_b_x384_413, kk_infer_new_infer_fun706_sq_(_ctx), _x_x707, _x_x710, _ctx); /*1002*/
      return kk_types__types_unbox(_x_x705, KK_OWNED, _ctx);
    }
  }
  {
    kk_expr__uexpr_drop(e, _ctx);
    kk_ssize_t _b_x392_417 = (KK_IZ(0)); /*hnd/ev-index*/;
    kk_box_t _x_x713;
    kk_box_t _x_x715;
    kk_string_t _x_x716;
    kk_define_string_literal(, _s_x717, 12, "infer(36, 3)", _ctx)
    _x_x716 = kk_string_dup(_s_x717, _ctx); /*string*/
    _x_x715 = kk_string_box(_x_x716); /*1000*/
    kk_box_t _x_x718;
    kk_string_t _x_x719;
    kk_define_string_literal(, _s_x720, 6, "infer\'", _ctx)
    _x_x719 = kk_string_dup(_s_x720, _ctx); /*string*/
    _x_x718 = kk_string_box(_x_x719); /*1001*/
    _x_x713 = kk_std_core_hnd__open_at2(_b_x392_417, kk_infer_new_infer_fun714_sq_(_ctx), _x_x715, _x_x718, _ctx); /*1002*/
    return kk_types__types_unbox(_x_x713, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_infer_infer_fun721__t {
  struct kk_function_s _base;
  kk_expr__uexpr e;
};
static kk_box_t kk_infer_infer_fun721(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun721(kk_expr__uexpr e, kk_context_t* _ctx) {
  struct kk_infer_infer_fun721__t* _self = kk_function_alloc_as(struct kk_infer_infer_fun721__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun721, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_infer_infer_fun722__t {
  struct kk_function_s _base;
  kk_expr__uexpr e;
};
static kk_box_t kk_infer_infer_fun722(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun722(kk_expr__uexpr e, kk_context_t* _ctx) {
  struct kk_infer_infer_fun722__t* _self = kk_function_alloc_as(struct kk_infer_infer_fun722__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun722, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_infer_infer_fun724__t {
  struct kk_function_s _base;
  kk_expr__uexpr e;
};
static kk_box_t kk_infer_infer_fun724(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_infer_new_infer_fun724(kk_expr__uexpr e, kk_context_t* _ctx) {
  struct kk_infer_infer_fun724__t* _self = kk_function_alloc_as(struct kk_infer_infer_fun724__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_infer_fun724, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_infer_infer_fun724(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_infer_infer_fun724__t* _self = kk_function_as(struct kk_infer_infer_fun724__t*, _fself, _ctx);
  kk_expr__uexpr e = _self->e; /* expr/uexpr */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e, _ctx);}, {}, _ctx)
  kk_types__types _x_x725 = kk_infer_infer_sq_(e, _ctx); /*types/types*/
  return kk_types__types_box(_x_x725, _ctx);
}
static kk_box_t kk_infer_infer_fun722(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_infer_infer_fun722__t* _self = kk_function_as(struct kk_infer_infer_fun722__t*, _fself, _ctx);
  kk_expr__uexpr e = _self->e; /* expr/uexpr */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x723 = kk_infer_handle_tenv_ref(kk_infer_new_infer_fun724(e, _ctx), _ctx); /*(717, infer/tenv)*/
  return kk_std_core_types__tuple2_box(_x_x723, _ctx);
}
static kk_box_t kk_infer_infer_fun721(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_infer_infer_fun721__t* _self = kk_function_as(struct kk_infer_infer_fun721__t*, _fself, _ctx);
  kk_expr__uexpr e = _self->e; /* expr/uexpr */
  kk_drop_match(_self, {kk_expr__uexpr_dup(e, _ctx);}, {}, _ctx)
  return kk_expr_handle_unique(kk_infer_new_infer_fun722(e, _ctx), _ctx);
}

kk_std_core_types__either kk_infer_infer(kk_expr__uexpr e, kk_context_t* _ctx) { /* (e : expr/uexpr) -> <console/console,div> either<exception,(types/types, tenv)> */ 
  kk_std_core_exn__error t_10003 = kk_std_core_exn_try(kk_infer_new_infer_fun721(e, _ctx), _ctx); /*error<(types/types, infer/tenv)>*/;
  if (kk_std_core_exn__is_Error(t_10003, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10003._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10003, _ctx);
    return kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx);
  }
  {
    kk_box_t _box_x442 = t_10003._cons.Ok.result;
    kk_std_core_types__tuple2 x = kk_std_core_types__tuple2_unbox(_box_x442, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_dup(x, _ctx);
    kk_std_core_exn__error_drop(t_10003, _ctx);
    return kk_std_core_types__new_Right(kk_std_core_types__tuple2_box(x, _ctx), _ctx);
  }
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
  kk_value__init(_ctx);
  kk_expr__init(_ctx);
  kk_types__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x487;
    kk_define_string_literal(, _s_x488, 14, "tenv-ref@infer", _ctx)
    _x_x487 = kk_string_dup(_s_x488, _ctx); /*string*/
    kk_infer__tag_tenv_ref = kk_std_core_hnd__new_Htag(_x_x487, _ctx); /*hnd/htag<infer/tenv-ref>*/
  }
}

// termination
void kk_infer__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_infer__tag_tenv_ref, _ctx);
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
