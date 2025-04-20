// Koka generated module: interpret, koka version: 3.1.2, platform: 64-bit
#include "interpret.h"

kk_string_t kk_interpret_show(kk_interpret__value v, kk_context_t* _ctx) { /* (v : value) -> string */ 
  if (kk_interpret__is_Int(v, _ctx)) {
    struct kk_interpret_Int* _con_x196 = kk_interpret__as_Int(v, _ctx);
    kk_integer_t x = _con_x196->x;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_integer_dup(x, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_int_show(x, _ctx);
  }
  if (kk_interpret__is_FnVal(v, _ctx)) {
    struct kk_interpret_FnVal* _con_x197 = kk_interpret__as_FnVal(v, _ctx);
    kk_string_t x_0 = _con_x197->x;
    kk_interpret__expr body = _con_x197->body;
    kk_std_core_types__list env = _con_x197->env;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_std_core_types__list_drop(env, _ctx);
      kk_interpret__expr_drop(body, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(x_0, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x198;
    kk_define_string_literal(, _s_x199, 3, "fn ", _ctx)
    _x_x198 = kk_string_dup(_s_x199, _ctx); /*string*/
    kk_string_t _x_x200 = kk_std_core_show_string_fs_show(x_0, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x198, _x_x200, _ctx);
  }
  {
    struct kk_interpret_Cont* _con_x201 = kk_interpret__as_Cont(v, _ctx);
    kk_function_t c = _con_x201->c;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_function_drop(c, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_define_string_literal(, _s_x202, 4, "cont", _ctx)
    return kk_string_dup(_s_x202, _ctx);
  }
  {
    kk_interpret__value_drop(v, _ctx);
    kk_define_string_literal(, _s_x203, 15, "show: undefined", _ctx)
    return kk_string_dup(_s_x203, _ctx);
  }
}

bool kk_interpret_eq(kk_interpret__value v1, kk_interpret__value v2, kk_context_t* _ctx) { /* (v1 : value, v2 : value) -> bool */ 
  if (kk_interpret__is_Int(v1, _ctx) && kk_interpret__is_Int(v2, _ctx)) {
    struct kk_interpret_Int* _con_x204 = kk_interpret__as_Int(v1, _ctx);
    struct kk_interpret_Int* _con_x205 = kk_interpret__as_Int(v2, _ctx);
    kk_integer_t i1 = _con_x204->x;
    kk_integer_t i2 = _con_x205->x;
    if kk_likely(kk_datatype_ptr_is_unique(v2, _ctx)) {
      kk_datatype_ptr_free(v2, _ctx);
    }
    else {
      kk_integer_dup(i2, _ctx);
      kk_datatype_ptr_decref(v2, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(v1, _ctx)) {
      kk_datatype_ptr_free(v1, _ctx);
    }
    else {
      kk_integer_dup(i1, _ctx);
      kk_datatype_ptr_decref(v1, _ctx);
    }
    bool _brw_x167 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
    kk_integer_drop(i1, _ctx);
    kk_integer_drop(i2, _ctx);
    return _brw_x167;
  }
  {
    kk_interpret__value_drop(v2, _ctx);
    kk_interpret__value_drop(v1, _ctx);
    return false;
  }
}

bool kk_interpret__lp__eq__eq__rp_(kk_std_core_types__either e1, kk_std_core_types__either e2, kk_context_t* _ctx) { /* (e1 : either<exception,value>, e2 : either<exception,value>) -> bool */ 
  if (kk_std_core_types__is_Right(e1, _ctx) && kk_std_core_types__is_Right(e2, _ctx)) {
    kk_box_t _box_x0 = e1._cons.Right.right;
    kk_box_t _box_x1 = e2._cons.Right.right;
    kk_interpret__value r1 = kk_interpret__value_unbox(_box_x0, KK_BORROWED, _ctx);
    kk_interpret__value r2 = kk_interpret__value_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_interpret__value_dup(r2, _ctx);
    kk_std_core_types__either_drop(e2, _ctx);
    kk_interpret__value_dup(r1, _ctx);
    kk_std_core_types__either_drop(e1, _ctx);
    if (kk_interpret__is_Int(r1, _ctx) && kk_interpret__is_Int(r2, _ctx)) {
      struct kk_interpret_Int* _con_x206 = kk_interpret__as_Int(r1, _ctx);
      struct kk_interpret_Int* _con_x207 = kk_interpret__as_Int(r2, _ctx);
      kk_integer_t i1 = _con_x206->x;
      kk_integer_t i2 = _con_x207->x;
      if kk_likely(kk_datatype_ptr_is_unique(r2, _ctx)) {
        kk_datatype_ptr_free(r2, _ctx);
      }
      else {
        kk_integer_dup(i2, _ctx);
        kk_datatype_ptr_decref(r2, _ctx);
      }
      if kk_likely(kk_datatype_ptr_is_unique(r1, _ctx)) {
        kk_datatype_ptr_free(r1, _ctx);
      }
      else {
        kk_integer_dup(i1, _ctx);
        kk_datatype_ptr_decref(r1, _ctx);
      }
      bool _brw_x166 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
      kk_integer_drop(i1, _ctx);
      kk_integer_drop(i2, _ctx);
      return _brw_x166;
    }
    {
      kk_interpret__value_drop(r2, _ctx);
      kk_interpret__value_drop(r1, _ctx);
      return false;
    }
  }
  if (kk_std_core_types__is_Left(e1, _ctx) && kk_std_core_types__is_Left(e2, _ctx)) {
    kk_box_t _box_x2 = e1._cons.Left.left;
    kk_box_t _box_x3 = e2._cons.Left.left;
    kk_std_core_exn__exception e1_0 = kk_std_core_exn__exception_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_std_core_exn__exception e2_0 = kk_std_core_exn__exception_unbox(_box_x3, KK_BORROWED, _ctx);
    kk_std_core_types__either_drop(e2, _ctx);
    kk_std_core_types__either_drop(e1, _ctx);
    return true;
  }
  {
    kk_std_core_types__either_drop(e2, _ctx);
    kk_std_core_types__either_drop(e1, _ctx);
    return false;
  }
}
 
// monadic lift

kk_interpret__value kk_interpret__mlift_eval_10056_sq_(kk_function_t c_0, kk_string_t i, kk_std_core_types__maybe _y_x10024, kk_context_t* _ctx) { /* (c@0 : cont<value>, i : string, maybe<(string, value)>) -> <div,exn> value */ 
  if (kk_std_core_types__is_Just(_y_x10024, _ctx)) {
    kk_box_t _box_x8 = _y_x10024._cons.Just.value;
    kk_std_core_types__tuple2 _pat_3_0_0 = kk_std_core_types__tuple2_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_box_t _box_x9 = _pat_3_0_0.fst;
    kk_box_t _box_x10 = _pat_3_0_0.snd;
    kk_interpret__value v = kk_interpret__value_unbox(_box_x10, KK_BORROWED, _ctx);
    kk_string_drop(i, _ctx);
    kk_interpret__value_dup(v, _ctx);
    kk_std_core_types__maybe_drop(_y_x10024, _ctx);
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0, (c_0, v, _ctx), _ctx);
  }
  {
    kk_function_drop(c_0, _ctx);
    kk_string_t message_0_10008;
    kk_string_t _x_x208;
    kk_define_string_literal(, _s_x209, 19, "undefined variable ", _ctx)
    _x_x208 = kk_string_dup(_s_x209, _ctx); /*string*/
    kk_string_t _x_x210 = kk_std_core_show_string_fs_show(i, _ctx); /*string*/
    message_0_10008 = kk_std_core_types__lp__plus__plus__rp_(_x_x208, _x_x210, _ctx); /*string*/
    kk_std_core_hnd__ev ev_10058 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x211;
    {
      struct kk_std_core_hnd_Ev* _con_x212 = kk_std_core_hnd__as_Ev(ev_10058, _ctx);
      kk_box_t _box_x11 = _con_x212->hnd;
      int32_t m = _con_x212->marker;
      kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x11, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x163;
      kk_std_core_hnd__clause1 _brw_x165 = kk_std_core_exn__select_throw_exn(h, _ctx); /*hnd/clause1<exception,3002,exn,3003,3004>*/;
      kk_std_core_exn__exn_drop(h, _ctx);
      _match_x163 = _brw_x165; /*hnd/clause1<exception,3002,exn,3003,3004>*/
      {
        kk_function_t _fun_unbox_x15 = _match_x163.clause;
        kk_box_t _x_x213;
        kk_std_core_exn__exception _x_x214;
        kk_std_core_exn__exception_info _x_x215;
        kk_std_core_types__optional _match_x164 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x164, _ctx)) {
          kk_box_t _box_x19 = _match_x164._cons._Optional.value;
          kk_std_core_exn__exception_info _uniq_info_473_0 = kk_std_core_exn__exception_info_unbox(_box_x19, KK_BORROWED, _ctx);
          kk_std_core_exn__exception_info_dup(_uniq_info_473_0, _ctx);
          kk_std_core_types__optional_drop(_match_x164, _ctx);
          _x_x215 = _uniq_info_473_0; /*exception-info*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x164, _ctx);
          _x_x215 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
        }
        _x_x214 = kk_std_core_exn__new_Exception(message_0_10008, _x_x215, _ctx); /*exception*/
        _x_x213 = kk_std_core_exn__exception_box(_x_x214, _ctx); /*1009*/
        _x_x211 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x15, (_fun_unbox_x15, m, ev_10058, _x_x213, _ctx), _ctx); /*1010*/
      }
    }
    return kk_interpret__value_unbox(_x_x211, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_apply_fun221__t {
  struct kk_function_s _base;
  kk_function_t c;
};
static kk_box_t kk_interpret_apply_fun221(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_apply_fun221(kk_function_t c, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun221__t* _self = kk_function_alloc_as(struct kk_interpret_apply_fun221__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_apply_fun221, kk_context());
  _self->c = c;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_apply_fun221(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun221__t* _self = kk_function_as(struct kk_interpret_apply_fun221__t*, _fself, _ctx);
  kk_function_t c = _self->c; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x222;
  kk_interpret__value _x_x223 = kk_interpret__value_unbox(_b_x29, KK_OWNED, _ctx); /*interpret/value*/
  _x_x222 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, _x_x223, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x222, _ctx);
}

kk_interpret__value kk_interpret_apply(kk_interpret__value f_0, kk_interpret__value arg, kk_function_t c, kk_context_t* _ctx) { /* (f : value, arg : value, c : cont<value>) -> pure value */ 
  if (kk_interpret__is_FnVal(f_0, _ctx)) {
    struct kk_interpret_FnVal* _con_x216 = kk_interpret__as_FnVal(f_0, _ctx);
    kk_string_t x_0 = _con_x216->x;
    kk_interpret__expr body = _con_x216->body;
    kk_std_core_types__list env = _con_x216->env;
    if kk_likely(kk_datatype_ptr_is_unique(f_0, _ctx)) {
      kk_datatype_ptr_free(f_0, _ctx);
    }
    else {
      kk_interpret__expr_dup(body, _ctx);
      kk_std_core_types__list_dup(env, _ctx);
      kk_string_dup(x_0, _ctx);
      kk_datatype_ptr_decref(f_0, _ctx);
    }
    kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<<div,exn>>*/;
    kk_std_core_types__list ys_10005;
    kk_box_t _x_x217;
    kk_std_core_types__tuple2 _x_x218 = kk_std_core_types__new_Tuple2(kk_string_box(x_0), kk_interpret__value_box(arg, _ctx), _ctx); /*(1038, 1039)*/
    _x_x217 = kk_std_core_types__tuple2_box(_x_x218, _ctx); /*1024*/
    ys_10005 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x217, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<(string, interpret/value)>*/
    kk_std_core_types__list x_1;
    if (kk_std_core_types__is_Nil(env, _ctx)) {
      x_1 = ys_10005; /*interpret/env*/
    }
    else {
      x_1 = kk_std_core_list__unroll_append_10004(env, ys_10005, _ctx); /*interpret/env*/
    }
    kk_unit_t keep = kk_Unit;
    kk_evv_set(w,kk_context());
    return kk_interpret_eval_sq_(body, x_1, c, _ctx);
  }
  if (kk_interpret__is_Cont(f_0, _ctx)) {
    struct kk_interpret_Cont* _con_x219 = kk_interpret__as_Cont(f_0, _ctx);
    kk_function_t c_sq_ = _con_x219->c;
    if kk_likely(kk_datatype_ptr_is_unique(f_0, _ctx)) {
      kk_datatype_ptr_free(f_0, _ctx);
    }
    else {
      kk_function_dup(c_sq_, _ctx);
      kk_datatype_ptr_decref(f_0, _ctx);
    }
    kk_interpret__value x_2_10064 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_sq_, (c_sq_, arg, _ctx), _ctx); /*interpret/value*/;
    if (kk_yielding(kk_context())) {
      kk_interpret__value_drop(x_2_10064, _ctx);
      kk_box_t _x_x220 = kk_std_core_hnd_yield_extend(kk_interpret_new_apply_fun221(c, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x220, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, x_2_10064, _ctx), _ctx);
    }
  }
  {
    struct kk_interpret_Int* _con_x224 = kk_interpret__as_Int(f_0, _ctx);
    kk_integer_t _pat_2_1 = _con_x224->x;
    if kk_likely(kk_datatype_ptr_is_unique(f_0, _ctx)) {
      kk_integer_drop(_pat_2_1, _ctx);
      kk_datatype_ptr_free(f_0, _ctx);
    }
    else {
      kk_datatype_ptr_decref(f_0, _ctx);
    }
    kk_function_drop(c, _ctx);
    kk_interpret__value_drop(arg, _ctx);
    kk_std_core_hnd__ev ev_0_10066 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x225;
    {
      struct kk_std_core_hnd_Ev* _con_x226 = kk_std_core_hnd__as_Ev(ev_0_10066, _ctx);
      kk_box_t _box_x30 = _con_x226->hnd;
      int32_t m_0 = _con_x226->marker;
      kk_std_core_exn__exn h_0 = kk_std_core_exn__exn_unbox(_box_x30, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h_0, _ctx);
      kk_std_core_hnd__clause1 _match_x159;
      kk_std_core_hnd__clause1 _brw_x161 = kk_std_core_exn__select_throw_exn(h_0, _ctx); /*hnd/clause1<exception,3002,exn,3003,3004>*/;
      kk_std_core_exn__exn_drop(h_0, _ctx);
      _match_x159 = _brw_x161; /*hnd/clause1<exception,3002,exn,3003,3004>*/
      {
        kk_function_t _fun_unbox_x34 = _match_x159.clause;
        kk_box_t _x_x227;
        kk_std_core_exn__exception _x_x228;
        kk_string_t _x_x229;
        kk_define_string_literal(, _s_x230, 32, "literal was handled as function!", _ctx)
        _x_x229 = kk_string_dup(_s_x230, _ctx); /*string*/
        kk_std_core_exn__exception_info _x_x231;
        kk_std_core_types__optional _match_x160 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x160, _ctx)) {
          kk_box_t _box_x38 = _match_x160._cons._Optional.value;
          kk_std_core_exn__exception_info _uniq_info_473 = kk_std_core_exn__exception_info_unbox(_box_x38, KK_BORROWED, _ctx);
          kk_std_core_exn__exception_info_dup(_uniq_info_473, _ctx);
          kk_std_core_types__optional_drop(_match_x160, _ctx);
          _x_x231 = _uniq_info_473; /*exception-info*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x160, _ctx);
          _x_x231 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
        }
        _x_x228 = kk_std_core_exn__new_Exception(_x_x229, _x_x231, _ctx); /*exception*/
        _x_x227 = kk_std_core_exn__exception_box(_x_x228, _ctx); /*1009*/
        _x_x225 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x34, (_fun_unbox_x34, m_0, ev_0_10066, _x_x227, _ctx), _ctx); /*1010*/
      }
    }
    return kk_interpret__value_unbox(_x_x225, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_fun234__t_sq_ {
  struct kk_function_s _base;
  kk_string_t i_0;
};
static bool kk_interpret_eval_fun234_sq_(kk_function_t _fself, kk_box_t _b_x44, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun234_sq_(kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun234__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun234__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun234_sq_, kk_context());
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret_eval_fun234_sq_(kk_function_t _fself, kk_box_t _b_x44, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun234__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun234__t_sq_*, _fself, _ctx);
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x158 = kk_std_core_types__tuple2_unbox(_b_x44, KK_OWNED, _ctx); /*(string, interpret/value)*/;
  {
    kk_box_t _box_x40 = _match_x158.fst;
    kk_box_t _box_x41 = _match_x158.snd;
    kk_string_t i_sq_ = kk_string_unbox(_box_x40);
    kk_string_dup(i_sq_, _ctx);
    kk_std_core_types__tuple2_drop(_match_x158, _ctx);
    return kk_string_is_eq(i_0,i_sq_,kk_context());
  }
}


// lift anonymous function
struct kk_interpret_eval_fun236__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_string_t i_0;
};
static kk_box_t kk_interpret_eval_fun236_sq_(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun236_sq_(kk_function_t c_0_0, kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun236__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun236__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun236_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun236_sq_(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun236__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun236__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10024_0_91 = kk_std_core_types__maybe_unbox(_b_x49, KK_OWNED, _ctx); /*maybe<(string, interpret/value)>*/;
  kk_interpret__value _x_x237 = kk_interpret__mlift_eval_10056_sq_(c_0_0, i_0, _y_x10024_0_91, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x237, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun249__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__expr e2;
  kk_std_core_types__list env_0;
  kk_string_t name;
};
static kk_interpret__value kk_interpret_eval_fun249_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun249_sq_(kk_function_t c_0_0, kk_interpret__expr e2, kk_std_core_types__list env_0, kk_string_t name, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun249__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun249__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun249_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->e2 = e2;
  _self->env_0 = env_0;
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_fun249_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun249__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun249__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__expr e2 = _self->e2; /* interpret/expr */
  kk_std_core_types__list env_0 = _self->env_0; /* interpret/env */
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__expr_dup(e2, _ctx);kk_std_core_types__list_dup(env_0, _ctx);kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<<div,exn>>*/;
  kk_std_core_types__list ys_0_10011;
  kk_box_t _x_x250;
  kk_std_core_types__tuple2 _x_x251 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_interpret__value_box(e1_sq_, _ctx), _ctx); /*(1038, 1039)*/
  _x_x250 = kk_std_core_types__tuple2_box(_x_x251, _ctx); /*1024*/
  ys_0_10011 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x250, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<(string, interpret/value)>*/
  kk_std_core_types__list x_6;
  if (kk_std_core_types__is_Nil(env_0, _ctx)) {
    x_6 = ys_0_10011; /*interpret/env*/
  }
  else {
    x_6 = kk_std_core_list__unroll_append_10004(env_0, ys_0_10011, _ctx); /*interpret/env*/
  }
  kk_unit_t keep_0 = kk_Unit;
  kk_evv_set(w_0,kk_context());
  return kk_interpret_eval_sq_(e2, x_6, c_0_0, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun257__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__expr e2_0;
  kk_std_core_types__list env_0;
};
static kk_interpret__value kk_interpret_eval_fun257_sq_(kk_function_t _fself, kk_interpret__value f_0_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun257_sq_(kk_function_t c_0_0, kk_interpret__expr e2_0, kk_std_core_types__list env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun257__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun257__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun257_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->e2_0 = e2_0;
  _self->env_0 = env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun258__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__value f_0_0;
};
static kk_interpret__value kk_interpret_eval_fun258_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun258_sq_(kk_function_t c_0_0, kk_interpret__value f_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun258__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun258__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun258_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->f_0_0 = f_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_fun258_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun258__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun258__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__value f_0_0 = _self->f_0_0; /* interpret/value */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__value_dup(f_0_0, _ctx);}, {}, _ctx)
  return kk_interpret_apply(f_0_0, arg_0, c_0_0, _ctx);
}
static kk_interpret__value kk_interpret_eval_fun257_sq_(kk_function_t _fself, kk_interpret__value f_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun257__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun257__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__expr e2_0 = _self->e2_0; /* interpret/expr */
  kk_std_core_types__list env_0 = _self->env_0; /* interpret/env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__expr_dup(e2_0, _ctx);kk_std_core_types__list_dup(env_0, _ctx);}, {}, _ctx)
  return kk_interpret_eval_sq_(e2_0, env_0, kk_interpret_new_eval_fun258_sq_(c_0_0, f_0_0, _ctx), _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun262__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
};
static kk_interpret__value kk_interpret_eval_fun262_sq_(kk_function_t _fself, kk_interpret__value e_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun262_sq_(kk_function_t c_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun262__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun262__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun262_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun268__t_sq_ {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_eval_fun268_sq_(kk_function_t _fself, kk_interpret__value x_1_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun268_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun268_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_eval_fun268_sq_(kk_function_t _fself, kk_interpret__value x_1_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_1_0;
}
static kk_interpret__value kk_interpret_eval_fun262_sq_(kk_function_t _fself, kk_interpret__value e_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun262__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun262__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);}, {}, _ctx)
  if (kk_interpret__is_FnVal(e_sq_, _ctx)) {
    struct kk_interpret_FnVal* _con_x263 = kk_interpret__as_FnVal(e_sq_, _ctx);
    kk_string_t x_sq_ = _con_x263->x;
    kk_interpret__expr body_0 = _con_x263->body;
    kk_std_core_types__list env_0_0_sq_ = _con_x263->env;
    if kk_likely(kk_datatype_ptr_is_unique(e_sq_, _ctx)) {
      kk_datatype_ptr_free(e_sq_, _ctx);
    }
    else {
      kk_interpret__expr_dup(body_0, _ctx);
      kk_std_core_types__list_dup(env_0_0_sq_, _ctx);
      kk_string_dup(x_sq_, _ctx);
      kk_datatype_ptr_decref(e_sq_, _ctx);
    }
    kk_evv_t w_1 = kk_evv_swap_create0(kk_context()); /*hnd/evv<<div,exn>>*/;
    kk_std_core_types__list ys_1_10013;
    kk_box_t _x_x264;
    kk_std_core_types__tuple2 _x_x265;
    kk_box_t _x_x266;
    kk_interpret__value _x_x267 = kk_interpret__new_Cont(kk_reuse_null, 0, c_0_0, _ctx); /*interpret/value*/
    _x_x266 = kk_interpret__value_box(_x_x267, _ctx); /*1039*/
    _x_x265 = kk_std_core_types__new_Tuple2(kk_string_box(x_sq_), _x_x266, _ctx); /*(1038, 1039)*/
    _x_x264 = kk_std_core_types__tuple2_box(_x_x265, _ctx); /*1024*/
    ys_1_10013 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x264, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<(string, interpret/value)>*/
    kk_std_core_types__list x_7;
    if (kk_std_core_types__is_Nil(env_0_0_sq_, _ctx)) {
      x_7 = ys_1_10013; /*interpret/env*/
    }
    else {
      x_7 = kk_std_core_list__unroll_append_10004(env_0_0_sq_, ys_1_10013, _ctx); /*interpret/env*/
    }
    kk_unit_t keep_1 = kk_Unit;
    kk_evv_set(w_1,kk_context());
    return kk_interpret_eval_sq_(body_0, x_7, kk_interpret_new_eval_fun268_sq_(_ctx), _ctx);
  }
  {
    kk_interpret__value_drop(e_sq_, _ctx);
    kk_function_drop(c_0_0, _ctx);
    kk_std_core_hnd__ev ev_2_10081 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x269;
    {
      struct kk_std_core_hnd_Ev* _con_x270 = kk_std_core_hnd__as_Ev(ev_2_10081, _ctx);
      kk_box_t _box_x78 = _con_x270->hnd;
      int32_t m_2 = _con_x270->marker;
      kk_std_core_exn__exn h_2 = kk_std_core_exn__exn_unbox(_box_x78, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h_2, _ctx);
      kk_std_core_hnd__clause1 _match_x151;
      kk_std_core_hnd__clause1 _brw_x153 = kk_std_core_exn__select_throw_exn(h_2, _ctx); /*hnd/clause1<exception,3002,exn,3003,3004>*/;
      kk_std_core_exn__exn_drop(h_2, _ctx);
      _match_x151 = _brw_x153; /*hnd/clause1<exception,3002,exn,3003,3004>*/
      {
        kk_function_t _fun_unbox_x82 = _match_x151.clause;
        kk_box_t _x_x271;
        kk_std_core_exn__exception _x_x272;
        kk_string_t _x_x273;
        kk_define_string_literal(, _s_x274, 16, "unexpected shift", _ctx)
        _x_x273 = kk_string_dup(_s_x274, _ctx); /*string*/
        kk_std_core_exn__exception_info _x_x275;
        kk_std_core_types__optional _match_x152 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x152, _ctx)) {
          kk_box_t _box_x86 = _match_x152._cons._Optional.value;
          kk_std_core_exn__exception_info _uniq_info_473_1 = kk_std_core_exn__exception_info_unbox(_box_x86, KK_BORROWED, _ctx);
          kk_std_core_exn__exception_info_dup(_uniq_info_473_1, _ctx);
          kk_std_core_types__optional_drop(_match_x152, _ctx);
          _x_x275 = _uniq_info_473_1; /*exception-info*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x152, _ctx);
          _x_x275 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
        }
        _x_x272 = kk_std_core_exn__new_Exception(_x_x273, _x_x275, _ctx); /*exception*/
        _x_x271 = kk_std_core_exn__exception_box(_x_x272, _ctx); /*1009*/
        _x_x269 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x82, (_fun_unbox_x82, m_2, ev_2_10081, _x_x271, _ctx), _ctx); /*1010*/
      }
    }
    return kk_interpret__value_unbox(_x_x269, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_fun277__t_sq_ {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_eval_fun277_sq_(kk_function_t _fself, kk_interpret__value x_2_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun277_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun277_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_eval_fun277_sq_(kk_function_t _fself, kk_interpret__value x_2_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_2_0;
}


// lift anonymous function
struct kk_interpret_eval_fun279__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
};
static kk_box_t kk_interpret_eval_fun279_sq_(kk_function_t _fself, kk_box_t _b_x88, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun279_sq_(kk_function_t c_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun279__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun279__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun279_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun279_sq_(kk_function_t _fself, kk_box_t _b_x88, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun279__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun279__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x280;
  kk_interpret__value _x_x281 = kk_interpret__value_unbox(_b_x88, KK_OWNED, _ctx); /*interpret/value*/
  _x_x280 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, _x_x281, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x280, _ctx);
}

kk_interpret__value kk_interpret_eval_sq_(kk_interpret__expr e, kk_std_core_types__list env_0, kk_function_t c_0_0, kk_context_t* _ctx) { /* (e : expr, env : env, c : cont<value>) -> pure value */ 
  kk__tailcall: ;
  if (kk_interpret__is_Var(e, _ctx)) {
    struct kk_interpret_Var* _con_x232 = kk_interpret__as_Var(e, _ctx);
    kk_string_t i_0 = _con_x232->x;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(i_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__maybe x_4_10069;
    kk_function_t _x_x233;
    kk_string_dup(i_0, _ctx);
    _x_x233 = kk_interpret_new_eval_fun234_sq_(i_0, _ctx); /*(1001) -> 1002 bool*/
    x_4_10069 = kk_std_core_list_find(env_0, _x_x233, _ctx); /*maybe<(string, interpret/value)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_4_10069, _ctx);
      kk_box_t _x_x235 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun236_sq_(c_0_0, i_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x235, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Just(x_4_10069, _ctx)) {
      kk_box_t _box_x50 = x_4_10069._cons.Just.value;
      kk_std_core_types__tuple2 _pat_3_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x50, KK_BORROWED, _ctx);
      kk_box_t _box_x51 = _pat_3_0_0_0.fst;
      kk_box_t _box_x52 = _pat_3_0_0_0.snd;
      kk_interpret__value v_0 = kk_interpret__value_unbox(_box_x52, KK_BORROWED, _ctx);
      kk_interpret__value_dup(v_0, _ctx);
      kk_std_core_types__maybe_drop(x_4_10069, _ctx);
      kk_string_drop(i_0, _ctx);
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, v_0, _ctx), _ctx);
    }
    {
      kk_function_drop(c_0_0, _ctx);
      kk_string_t message_0_10008_0;
      kk_string_t _x_x238;
      kk_define_string_literal(, _s_x239, 19, "undefined variable ", _ctx)
      _x_x238 = kk_string_dup(_s_x239, _ctx); /*string*/
      kk_string_t _x_x240 = kk_std_core_show_string_fs_show(i_0, _ctx); /*string*/
      message_0_10008_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x238, _x_x240, _ctx); /*string*/
      kk_std_core_hnd__ev ev_1_10072 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
      kk_box_t _x_x241;
      {
        struct kk_std_core_hnd_Ev* _con_x242 = kk_std_core_hnd__as_Ev(ev_1_10072, _ctx);
        kk_box_t _box_x53 = _con_x242->hnd;
        int32_t m_1 = _con_x242->marker;
        kk_std_core_exn__exn h_1 = kk_std_core_exn__exn_unbox(_box_x53, KK_BORROWED, _ctx);
        kk_std_core_exn__exn_dup(h_1, _ctx);
        kk_std_core_hnd__clause1 _match_x155;
        kk_std_core_hnd__clause1 _brw_x157 = kk_std_core_exn__select_throw_exn(h_1, _ctx); /*hnd/clause1<exception,3002,exn,3003,3004>*/;
        kk_std_core_exn__exn_drop(h_1, _ctx);
        _match_x155 = _brw_x157; /*hnd/clause1<exception,3002,exn,3003,3004>*/
        {
          kk_function_t _fun_unbox_x57 = _match_x155.clause;
          kk_box_t _x_x243;
          kk_std_core_exn__exception _x_x244;
          kk_std_core_exn__exception_info _x_x245;
          kk_std_core_types__optional _match_x156 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x156, _ctx)) {
            kk_box_t _box_x61 = _match_x156._cons._Optional.value;
            kk_std_core_exn__exception_info _uniq_info_473_0_0 = kk_std_core_exn__exception_info_unbox(_box_x61, KK_BORROWED, _ctx);
            kk_std_core_exn__exception_info_dup(_uniq_info_473_0_0, _ctx);
            kk_std_core_types__optional_drop(_match_x156, _ctx);
            _x_x245 = _uniq_info_473_0_0; /*exception-info*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x156, _ctx);
            _x_x245 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
          }
          _x_x244 = kk_std_core_exn__new_Exception(message_0_10008_0, _x_x245, _ctx); /*exception*/
          _x_x243 = kk_std_core_exn__exception_box(_x_x244, _ctx); /*1009*/
          _x_x241 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x57, (_fun_unbox_x57, m_1, ev_1_10072, _x_x243, _ctx), _ctx); /*1010*/
        }
      }
      return kk_interpret__value_unbox(_x_x241, KK_OWNED, _ctx);
    }
  }
  if (kk_interpret__is_Let(e, _ctx)) {
    struct kk_interpret_Let* _con_x246 = kk_interpret__as_Let(e, _ctx);
    kk_string_t name = _con_x246->name;
    kk_interpret__expr e1 = _con_x246->e1;
    kk_interpret__expr e2 = _con_x246->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1, _ctx);
      kk_interpret__expr_dup(e2, _ctx);
      kk_string_dup(name, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x247 = kk_std_core_types__list_dup(env_0, _ctx); /*interpret/env*/
      kk_function_t _x_x248 = kk_interpret_new_eval_fun249_sq_(c_0_0, e2, env_0, name, _ctx); /*(e1' : interpret/value) -> <div,exn> interpret/value*/
      e = e1;
      env_0 = _x_x247;
      c_0_0 = _x_x248;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Fn(e, _ctx)) {
    struct kk_interpret_Fn* _con_x252 = kk_interpret__as_Fn(e, _ctx);
    kk_string_t x_0_0 = _con_x252->x;
    kk_interpret__expr e1_0 = _con_x252->e1;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_0, _ctx);
      kk_string_dup(x_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__value _x_x253 = kk_interpret__new_FnVal(kk_reuse_null, 0, x_0_0, e1_0, env_0, _ctx); /*interpret/value*/
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, _x_x253, _ctx), _ctx);
  }
  if (kk_interpret__is_App(e, _ctx)) {
    struct kk_interpret_App* _con_x254 = kk_interpret__as_App(e, _ctx);
    kk_interpret__expr e1_1 = _con_x254->e1;
    kk_interpret__expr e2_0 = _con_x254->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_1, _ctx);
      kk_interpret__expr_dup(e2_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x255 = kk_std_core_types__list_dup(env_0, _ctx); /*interpret/env*/
      kk_function_t _x_x256 = kk_interpret_new_eval_fun257_sq_(c_0_0, e2_0, env_0, _ctx); /*(f@0@0 : interpret/value) -> <div,exn> interpret/value*/
      e = e1_1;
      env_0 = _x_x255;
      c_0_0 = _x_x256;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Lit(e, _ctx)) {
    struct kk_interpret_Lit* _con_x259 = kk_interpret__as_Lit(e, _ctx);
    kk_interpret__value value = _con_x259->value;
    kk_std_core_types__list_drop(env_0, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__value_dup(value, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, value, _ctx), _ctx);
  }
  if (kk_interpret__is_Shift(e, _ctx)) {
    struct kk_interpret_Shift* _con_x260 = kk_interpret__as_Shift(e, _ctx);
    kk_interpret__expr x_0_0_0 = _con_x260->e;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(x_0_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_function_t _x_x261 = kk_interpret_new_eval_fun262_sq_(c_0_0, _ctx); /*(e' : interpret/value) -> <div,exn> interpret/value*/
      e = x_0_0_0;
      c_0_0 = _x_x261;
      goto kk__tailcall;
    }
  }
  {
    struct kk_interpret_Reset* _con_x276 = kk_interpret__as_Reset(e, _ctx);
    kk_interpret__expr e_0 = _con_x276->e;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__value x_9_10084 = kk_interpret_eval_sq_(e_0, env_0, kk_interpret_new_eval_fun277_sq_(_ctx), _ctx); /*interpret/value*/;
    if (kk_yielding(kk_context())) {
      kk_interpret__value_drop(x_9_10084, _ctx);
      kk_box_t _x_x278 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun279_sq_(c_0_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x278, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, x_9_10084, _ctx), _ctx);
    }
  }
}
extern kk_interpret__value kk_interpret_eval_fun282(kk_function_t _fself, kk_interpret__value x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x;
}


// lift anonymous function
struct kk_interpret_run_fun286__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_run_fun286(kk_function_t _fself, int32_t _b_x99, kk_std_core_hnd__ev _b_x100, kk_box_t _b_x101, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun286(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_run_fun286, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_run_fun287__t {
  struct kk_function_s _base;
  kk_box_t _b_x101;
};
static kk_box_t kk_interpret_run_fun287(kk_function_t _fself, kk_function_t _b_x96, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun287(kk_box_t _b_x101, kk_context_t* _ctx) {
  struct kk_interpret_run_fun287__t* _self = kk_function_alloc_as(struct kk_interpret_run_fun287__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_run_fun287, kk_context());
  _self->_b_x101 = _b_x101;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_run_fun287(kk_function_t _fself, kk_function_t _b_x96, kk_context_t* _ctx) {
  struct kk_interpret_run_fun287__t* _self = kk_function_as(struct kk_interpret_run_fun287__t*, _fself, _ctx);
  kk_box_t _b_x101 = _self->_b_x101; /* 1015 */
  kk_drop_match(_self, {kk_box_dup(_b_x101, _ctx);}, {}, _ctx)
  kk_function_drop(_b_x96, _ctx);
  kk_std_core_exn__error _x_x288;
  kk_std_core_exn__exception _x_x289 = kk_std_core_exn__exception_unbox(_b_x101, KK_OWNED, _ctx); /*exception*/
  _x_x288 = kk_std_core_exn__new_Error(_x_x289, _ctx); /*error<1002>*/
  return kk_std_core_exn__error_box(_x_x288, _ctx);
}
static kk_box_t kk_interpret_run_fun286(kk_function_t _fself, int32_t _b_x99, kk_std_core_hnd__ev _b_x100, kk_box_t _b_x101, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_datatype_ptr_dropn(_b_x100, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(_b_x99, kk_interpret_new_run_fun287(_b_x101, _ctx), _ctx);
}


// lift anonymous function
struct kk_interpret_run_fun290__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_run_fun290(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun290(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_run_fun290, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_run_fun290(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x108;
}


// lift anonymous function
struct kk_interpret_run_fun291__t {
  struct kk_function_s _base;
  kk_interpret__expr e;
};
static kk_box_t kk_interpret_run_fun291(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun291(kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_run_fun291__t* _self = kk_function_alloc_as(struct kk_interpret_run_fun291__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_run_fun291, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_run_fun292__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_run_fun292(kk_function_t _fself, kk_interpret__value x_0_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun292(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_run_fun292, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_run_fun292(kk_function_t _fself, kk_interpret__value x_0_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_0_0;
}


// lift anonymous function
struct kk_interpret_run_fun295__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_run_fun295(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun295(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_run_fun295, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_run_fun295(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error _x_x296;
  kk_interpret__value _x_x297 = kk_interpret__value_unbox(_b_x103, KK_OWNED, _ctx); /*interpret/value*/
  _x_x296 = kk_interpret__mlift_run_10057(_x_x297, _ctx); /*error<interpret/value>*/
  return kk_std_core_exn__error_box(_x_x296, _ctx);
}
static kk_box_t kk_interpret_run_fun291(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_interpret_run_fun291__t* _self = kk_function_as(struct kk_interpret_run_fun291__t*, _fself, _ctx);
  kk_interpret__expr e = _self->e; /* interpret/expr */
  kk_drop_match(_self, {kk_interpret__expr_dup(e, _ctx);}, {}, _ctx)
  kk_interpret__value x_0_10087 = kk_interpret_eval_sq_(e, kk_std_core_types__new_Nil(_ctx), kk_interpret_new_run_fun292(_ctx), _ctx); /*interpret/value*/;
  kk_std_core_exn__error _x_x293;
  if (kk_yielding(kk_context())) {
    kk_interpret__value_drop(x_0_10087, _ctx);
    kk_box_t _x_x294 = kk_std_core_hnd_yield_extend(kk_interpret_new_run_fun295(_ctx), _ctx); /*3003*/
    _x_x293 = kk_std_core_exn__error_unbox(_x_x294, KK_OWNED, _ctx); /*error<interpret/value>*/
  }
  else {
    _x_x293 = kk_std_core_exn__new_Ok(kk_interpret__value_box(x_0_10087, _ctx), _ctx); /*error<interpret/value>*/
  }
  return kk_std_core_exn__error_box(_x_x293, _ctx);
}

kk_std_core_types__either kk_interpret_run(kk_interpret__expr e, kk_context_t* _ctx) { /* (e : expr) -> div either<exception,value> */ 
  kk_std_core_exn__error t_10016;
  kk_box_t _x_x283;
  kk_std_core_exn__exn _x_x284;
  kk_std_core_hnd__clause1 _x_x285 = kk_std_core_hnd__new_Clause1(kk_interpret_new_run_fun286(_ctx), _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x284 = kk_std_core_exn__new_Hnd_exn(kk_reuse_null, 0, kk_integer_from_small(0), _x_x285, _ctx); /*exn<1005,1006>*/
  _x_x283 = kk_std_core_exn__handle_exn(_x_x284, kk_interpret_new_run_fun290(_ctx), kk_interpret_new_run_fun291(e, _ctx), _ctx); /*3004*/
  t_10016 = kk_std_core_exn__error_unbox(_x_x283, KK_OWNED, _ctx); /*error<interpret/value>*/
  if (kk_std_core_exn__is_Error(t_10016, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10016._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10016, _ctx);
    return kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx);
  }
  {
    kk_box_t _box_x120 = t_10016._cons.Ok.result;
    kk_interpret__value x_1 = kk_interpret__value_unbox(_box_x120, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_1, _ctx);
    kk_std_core_exn__error_drop(t_10016, _ctx);
    return kk_std_core_types__new_Right(kk_interpret__value_box(x_1, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun298__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun298(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun298(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun298, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun301__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun301(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun301(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun301, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun304__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun304(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun304(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun304, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun305__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun305(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun305(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun305, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun305(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x306;
  kk_interpret__expr _x_x307;
  kk_string_t _x_x308;
  kk_define_string_literal(, _s_x309, 2, "id", _ctx)
  _x_x308 = kk_string_dup(_s_x309, _ctx); /*string*/
  kk_interpret__expr _x_x310;
  kk_string_t _x_x311;
  kk_define_string_literal(, _s_x312, 1, "x", _ctx)
  _x_x311 = kk_string_dup(_s_x312, _ctx); /*string*/
  kk_interpret__expr _x_x313;
  kk_string_t _x_x314;
  kk_define_string_literal(, _s_x315, 1, "x", _ctx)
  _x_x314 = kk_string_dup(_s_x315, _ctx); /*string*/
  _x_x313 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x314, _ctx); /*interpret/expr*/
  _x_x310 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x311, _x_x313, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x316;
  kk_interpret__expr _x_x317;
  kk_string_t _x_x318;
  kk_define_string_literal(, _s_x319, 2, "id", _ctx)
  _x_x318 = kk_string_dup(_s_x319, _ctx); /*string*/
  _x_x317 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x318, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x320;
  kk_interpret__value _x_x321 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1010), _ctx); /*interpret/value*/
  _x_x320 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x321, _ctx); /*interpret/expr*/
  _x_x316 = kk_interpret__new_App(kk_reuse_null, 0, _x_x317, _x_x320, _ctx); /*interpret/expr*/
  _x_x307 = kk_interpret__new_Let(kk_reuse_null, 0, _x_x308, _x_x310, _x_x316, _ctx); /*interpret/expr*/
  _x_x306 = kk_interpret_run(_x_x307, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_types__either_box(_x_x306, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun322__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun322(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun322(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun322, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun322(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _b_x127_144 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(100), _ctx); /*interpret/value*/;
  kk_std_core_types__either _x_x323 = kk_std_core_types__new_Right(kk_interpret__value_box(_b_x127_144, _ctx), _ctx); /*either<3035,3036>*/
  return kk_std_core_types__either_box(_x_x323, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun324__t {
  struct kk_function_s _base;
};
static bool kk_interpret_interpret_tests_fun324(kk_function_t _fself, kk_box_t _b_x137, kk_box_t _b_x138, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun324(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun324, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret_interpret_tests_fun324(kk_function_t _fself, kk_box_t _b_x137, kk_box_t _b_x138, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x325 = kk_std_core_types__either_unbox(_b_x137, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x326 = kk_std_core_types__either_unbox(_b_x138, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x325, _x_x326, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun327__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun327(kk_function_t _fself, kk_box_t _b_x139, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun327(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun327, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun329__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun329(kk_function_t _fself, kk_box_t _b_x131, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun329(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun329, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun329(kk_function_t _fself, kk_box_t _b_x131, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x330 = kk_std_core_exn__exception_unbox(_b_x131, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x330, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun331__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun331(kk_function_t _fself, kk_box_t _b_x132, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun331(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun331, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun331(kk_function_t _fself, kk_box_t _b_x132, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x332 = kk_interpret__value_unbox(_b_x132, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x332, _ctx);
}
static kk_string_t kk_interpret_interpret_tests_fun327(kk_function_t _fself, kk_box_t _b_x139, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x328 = kk_std_core_types__either_unbox(_b_x139, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x328, kk_interpret_new_interpret_tests_fun329(_ctx), kk_interpret_new_interpret_tests_fun331(_ctx), _ctx);
}
static kk_unit_t kk_interpret_interpret_tests_fun304(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_interpret_new_interpret_tests_fun305(_ctx), kk_interpret_new_interpret_tests_fun322(_ctx), kk_interpret_new_interpret_tests_fun324(_ctx), kk_interpret_new_interpret_tests_fun327(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret_interpret_tests_fun301(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x302 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x302, kk_interpret_new_interpret_tests_fun304(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret_interpret_tests_fun298(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x299;
  kk_define_string_literal(, _s_x300, 6, "Formal", _ctx)
  _x_x299 = kk_string_dup(_s_x300, _ctx); /*string*/
  kk_utest_suite(_x_x299, kk_interpret_new_interpret_tests_fun301(_ctx), _ctx); return kk_Unit;
}

kk_function_t kk_interpret_interpret_tests;

// initialization
void kk_interpret__init(kk_context_t* _ctx){
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
  kk_std_num_random__init(_ctx);
  kk_utest__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_interpret_interpret_tests = kk_interpret_new_interpret_tests_fun298(_ctx); /*forall<a> () -> <div,utest/test-suite<a>> ()*/
  }
}

// termination
void kk_interpret__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_function_drop(kk_interpret_interpret_tests, _ctx);
  kk_utest__done(_ctx);
  kk_std_num_random__done(_ctx);
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
