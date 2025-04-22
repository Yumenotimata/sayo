// Koka generated module: interpret, koka version: 3.1.2, platform: 64-bit
#include "interpret.h"

kk_string_t kk_interpret_show(kk_interpret__value v, kk_context_t* _ctx) { /* (v : value) -> string */ 
  if (kk_interpret__is_Int(v, _ctx)) {
    struct kk_interpret_Int* _con_x322 = kk_interpret__as_Int(v, _ctx);
    kk_integer_t x = _con_x322->x;
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
    struct kk_interpret_FnVal* _con_x323 = kk_interpret__as_FnVal(v, _ctx);
    kk_string_t x_0 = _con_x323->x;
    kk_interpret__expr body = _con_x323->body;
    kk_std_core_types__list env = _con_x323->env;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_std_core_types__list_drop(env, _ctx);
      kk_interpret__expr_drop(body, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(x_0, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x324;
    kk_define_string_literal(, _s_x325, 3, "fn ", _ctx)
    _x_x324 = kk_string_dup(_s_x325, _ctx); /*string*/
    kk_string_t _x_x326 = kk_std_core_show_string_fs_show(x_0, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x324, _x_x326, _ctx);
  }
  if (kk_interpret__is_Cont(v, _ctx)) {
    struct kk_interpret_Cont* _con_x327 = kk_interpret__as_Cont(v, _ctx);
    kk_function_t c = _con_x327->c;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_function_drop(c, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_define_string_literal(, _s_x328, 4, "cont", _ctx)
    return kk_string_dup(_s_x328, _ctx);
  }
  {
    kk_define_string_literal(, _s_x329, 15, "show: undefined", _ctx)
    return kk_string_dup(_s_x329, _ctx);
  }
}

bool kk_interpret_eq(kk_interpret__value v1, kk_interpret__value v2, kk_context_t* _ctx) { /* (v1 : value, v2 : value) -> bool */ 
  if (kk_interpret__is_Int(v1, _ctx) && kk_interpret__is_Int(v2, _ctx)) {
    struct kk_interpret_Int* _con_x330 = kk_interpret__as_Int(v1, _ctx);
    struct kk_interpret_Int* _con_x331 = kk_interpret__as_Int(v2, _ctx);
    kk_integer_t i1 = _con_x330->x;
    kk_integer_t i2 = _con_x331->x;
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
    bool _brw_x291 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
    kk_integer_drop(i1, _ctx);
    kk_integer_drop(i2, _ctx);
    return _brw_x291;
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
      struct kk_interpret_Int* _con_x332 = kk_interpret__as_Int(r1, _ctx);
      struct kk_interpret_Int* _con_x333 = kk_interpret__as_Int(r2, _ctx);
      kk_integer_t i1 = _con_x332->x;
      kk_integer_t i2 = _con_x333->x;
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
      bool _brw_x290 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
      kk_integer_drop(i1, _ctx);
      kk_integer_drop(i2, _ctx);
      return _brw_x290;
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

kk_interpret__value kk_interpret__mlift_eval_10061_sq_(kk_function_t c_0, kk_string_t i, kk_std_core_types__maybe _y_x10013, kk_context_t* _ctx) { /* (c@0 : cont<value>, i : string, maybe<(string, value)>) -> <div,exn> value */ 
  if (kk_std_core_types__is_Just(_y_x10013, _ctx)) {
    kk_box_t _box_x8 = _y_x10013._cons.Just.value;
    kk_std_core_types__tuple2 _pat_3 = kk_std_core_types__tuple2_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_box_t _box_x9 = _pat_3.fst;
    kk_box_t _box_x10 = _pat_3.snd;
    kk_interpret__value v = kk_interpret__value_unbox(_box_x10, KK_BORROWED, _ctx);
    kk_string_drop(i, _ctx);
    kk_interpret__value_dup(v, _ctx);
    kk_std_core_types__maybe_drop(_y_x10013, _ctx);
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0, (c_0, v, _ctx), _ctx);
  }
  {
    kk_function_drop(c_0, _ctx);
    kk_string_t _b_x11_13;
    kk_string_t _x_x335;
    kk_define_string_literal(, _s_x336, 19, "undefined variable ", _ctx)
    _x_x335 = kk_string_dup(_s_x336, _ctx); /*string*/
    kk_string_t _x_x337 = kk_std_core_show_string_fs_show(i, _ctx); /*string*/
    _b_x11_13 = kk_std_core_types__lp__plus__plus__rp_(_x_x335, _x_x337, _ctx); /*string*/
    kk_box_t _x_x338 = kk_std_core_exn_throw(_b_x11_13, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x338, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_eval_prim_10062_fun339__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x18;
};
static kk_interpret__value kk_interpret__mlift_eval_prim_10062_fun339(kk_function_t _fself, kk_std_core_types__list _b_x21, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_prim_10062_fun339(kk_box_t _fun_unbox_x18, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10062_fun339__t* _self = kk_function_alloc_as(struct kk_interpret__mlift_eval_prim_10062_fun339__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret__mlift_eval_prim_10062_fun339, kk_context());
  _self->_fun_unbox_x18 = _fun_unbox_x18;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret__mlift_eval_prim_10062_fun339(kk_function_t _fself, kk_std_core_types__list _b_x21, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10062_fun339__t* _self = kk_function_as(struct kk_interpret__mlift_eval_prim_10062_fun339__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x18 = _self->_fun_unbox_x18; /* 1025 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x18, _ctx);}, {}, _ctx)
  kk_box_t _x_x340;
  kk_function_t _x_x341 = kk_function_unbox(_fun_unbox_x18, _ctx); /*(19) -> exn 20*/
  _x_x340 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x341, (_x_x341, kk_std_core_types__list_box(_b_x21, _ctx), _ctx), _ctx); /*20*/
  return kk_interpret__value_unbox(_x_x340, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_eval_prim_10062_fun342__t {
  struct kk_function_s _base;
  kk_function_t c_1;
  kk_std_core_types__list env_1;
  kk_std_core_types__list h_1;
  kk_std_core_types__list prim_env_1;
};
static kk_box_t kk_interpret__mlift_eval_prim_10062_fun342(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_prim_10062_fun342(kk_function_t c_1, kk_std_core_types__list env_1, kk_std_core_types__list h_1, kk_std_core_types__list prim_env_1, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10062_fun342__t* _self = kk_function_alloc_as(struct kk_interpret__mlift_eval_prim_10062_fun342__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret__mlift_eval_prim_10062_fun342, kk_context());
  _self->c_1 = c_1;
  _self->env_1 = env_1;
  _self->h_1 = h_1;
  _self->prim_env_1 = prim_env_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret__mlift_eval_prim_10062_fun342(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10062_fun342__t* _self = kk_function_as(struct kk_interpret__mlift_eval_prim_10062_fun342__t*, _fself, _ctx);
  kk_function_t c_1 = _self->c_1; /* interpret/cont<interpret/value> */
  kk_std_core_types__list env_1 = _self->env_1; /* interpret/env */
  kk_std_core_types__list h_1 = _self->h_1; /* list<(string, interpret/expr)> */
  kk_std_core_types__list prim_env_1 = _self->prim_env_1; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_1, _ctx);kk_std_core_types__list_dup(env_1, _ctx);kk_std_core_types__list_dup(h_1, _ctx);kk_std_core_types__list_dup(prim_env_1, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x343;
  kk_interpret__expr _x_x344 = kk_interpret__expr_unbox(_b_x24, KK_OWNED, _ctx); /*interpret/expr*/
  _x_x343 = kk_interpret_eval_sq_(_x_x344, env_1, prim_env_1, h_1, c_1, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x343, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_eval_prim_10062_fun346__t {
  struct kk_function_s _base;
  kk_function_t op_0;
};
static kk_box_t kk_interpret__mlift_eval_prim_10062_fun346(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_prim_10062_fun346(kk_function_t op_0, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10062_fun346__t* _self = kk_function_alloc_as(struct kk_interpret__mlift_eval_prim_10062_fun346__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret__mlift_eval_prim_10062_fun346, kk_context());
  _self->op_0 = op_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret__mlift_eval_prim_10062_fun346(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10062_fun346__t* _self = kk_function_as(struct kk_interpret__mlift_eval_prim_10062_fun346__t*, _fself, _ctx);
  kk_function_t op_0 = _self->op_0; /* (list<interpret/value>) -> exn interpret/value */
  kk_drop_match(_self, {kk_function_dup(op_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x347;
  kk_std_core_types__list _x_x348 = kk_std_core_types__list_unbox(_b_x29, KK_OWNED, _ctx); /*list<interpret/value>*/
  _x_x347 = kk_function_call(kk_interpret__value, (kk_function_t, kk_std_core_types__list, kk_context_t*), op_0, (op_0, _x_x348, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x347, _ctx);
}

kk_interpret__value kk_interpret__mlift_eval_prim_10062(kk_function_t c_1, kk_std_core_types__list env_1, kk_std_core_types__list exprs_0, kk_std_core_types__list h_1, kk_std_core_types__list prim_env_1, kk_std_core_types__maybe _y_x10027, kk_context_t* _ctx) { /* (c@1 : cont<value>, env@1 : env, exprs@0 : list<expr>, h@1 : list<(string, expr)>, prim-env@1 : prim_env, maybe<(list<value>) -> exn value>) -> <div,exn> value */ 
  if (kk_std_core_types__is_Just(_y_x10027, _ctx)) {
    kk_box_t _fun_unbox_x18 = _y_x10027._cons.Just.value;
    kk_function_t op_0 = kk_interpret__new_mlift_eval_prim_10062_fun339(_fun_unbox_x18, _ctx); /*(list<interpret/value>) -> exn interpret/value*/;
    kk_std_core_types__list x_10065 = kk_std_core_list_map(exprs_0, kk_interpret__new_mlift_eval_prim_10062_fun342(c_1, env_1, h_1, prim_env_1, _ctx), _ctx); /*list<interpret/value>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_10065, _ctx);
      kk_box_t _x_x345 = kk_std_core_hnd_yield_extend(kk_interpret__new_mlift_eval_prim_10062_fun346(op_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x345, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_std_core_types__list, kk_context_t*), op_0, (op_0, x_10065, _ctx), _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(prim_env_1, _ctx);
    kk_std_core_types__list_drop(h_1, _ctx);
    kk_std_core_types__list_drop(exprs_0, _ctx);
    kk_std_core_types__list_drop(env_1, _ctx);
    kk_function_drop(c_1, _ctx);
    kk_box_t _x_x349;
    kk_string_t _x_x350;
    kk_define_string_literal(, _s_x351, 36, "undefined primitive op was evaluted!", _ctx)
    _x_x350 = kk_string_dup(_s_x351, _ctx); /*string*/
    _x_x349 = kk_std_core_exn_throw(_x_x350, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x349, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_apply_fun358__t {
  struct kk_function_s _base;
  kk_function_t c;
};
static kk_box_t kk_interpret_apply_fun358(kk_function_t _fself, kk_box_t _b_x44, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_apply_fun358(kk_function_t c, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun358__t* _self = kk_function_alloc_as(struct kk_interpret_apply_fun358__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_apply_fun358, kk_context());
  _self->c = c;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_apply_fun358(kk_function_t _fself, kk_box_t _b_x44, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun358__t* _self = kk_function_as(struct kk_interpret_apply_fun358__t*, _fself, _ctx);
  kk_function_t c = _self->c; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x359;
  kk_interpret__value _x_x360 = kk_interpret__value_unbox(_b_x44, KK_OWNED, _ctx); /*interpret/value*/
  _x_x359 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, _x_x360, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x359, _ctx);
}

kk_interpret__value kk_interpret_apply(kk_interpret__value f, kk_interpret__value arg, kk_std_core_types__list prim_env, kk_std_core_types__list h, kk_function_t c, kk_context_t* _ctx) { /* (f : value, arg : value, prim-env : prim_env, h : list<(string, expr)>, c : cont<value>) -> pure value */ 
  if (kk_interpret__is_FnVal(f, _ctx)) {
    struct kk_interpret_FnVal* _con_x352 = kk_interpret__as_FnVal(f, _ctx);
    kk_string_t x_0 = _con_x352->x;
    kk_interpret__expr body = _con_x352->body;
    kk_std_core_types__list env = _con_x352->env;
    if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
      kk_datatype_ptr_free(f, _ctx);
    }
    else {
      kk_interpret__expr_dup(body, _ctx);
      kk_std_core_types__list_dup(env, _ctx);
      kk_string_dup(x_0, _ctx);
      kk_datatype_ptr_decref(f, _ctx);
    }
    kk_std_core_types__list env_sq_;
    kk_std_core_types__list _x_x353;
    kk_box_t _x_x354;
    kk_std_core_types__tuple2 _x_x355 = kk_std_core_types__new_Tuple2(kk_string_box(x_0), kk_interpret__value_box(arg, _ctx), _ctx); /*(1038, 1039)*/
    _x_x354 = kk_std_core_types__tuple2_box(_x_x355, _ctx); /*1024*/
    _x_x353 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x354, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    env_sq_ = kk_std_core_list_append(env, _x_x353, _ctx); /*interpret/env*/
    return kk_interpret_eval_sq_(body, env_sq_, prim_env, h, c, _ctx);
  }
  if (kk_interpret__is_Cont(f, _ctx)) {
    struct kk_interpret_Cont* _con_x356 = kk_interpret__as_Cont(f, _ctx);
    kk_function_t c_sq_ = _con_x356->c;
    kk_std_core_types__list_drop(prim_env, _ctx);
    kk_std_core_types__list_drop(h, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
      kk_datatype_ptr_free(f, _ctx);
    }
    else {
      kk_function_dup(c_sq_, _ctx);
      kk_datatype_ptr_decref(f, _ctx);
    }
    kk_interpret__value x_1_10067 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_sq_, (c_sq_, arg, _ctx), _ctx); /*interpret/value*/;
    if (kk_yielding(kk_context())) {
      kk_interpret__value_drop(x_1_10067, _ctx);
      kk_box_t _x_x357 = kk_std_core_hnd_yield_extend(kk_interpret_new_apply_fun358(c, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x357, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, x_1_10067, _ctx), _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(prim_env, _ctx);
    kk_std_core_types__list_drop(h, _ctx);
    kk_interpret__value_drop(f, _ctx);
    kk_function_drop(c, _ctx);
    kk_interpret__value_drop(arg, _ctx);
    kk_box_t _x_x361;
    kk_string_t _x_x362;
    kk_define_string_literal(, _s_x363, 32, "literal was handled as function!", _ctx)
    _x_x362 = kk_string_dup(_s_x363, _ctx); /*string*/
    _x_x361 = kk_std_core_exn_throw(_x_x362, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x361, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_fun370__t_sq_ {
  struct kk_function_s _base;
  kk_std_core_types__list h_0_0_0_0_0_0_0;
};
static kk_interpret__value kk_interpret_eval_fun370_sq_(kk_function_t _fself, kk_interpret__expr e, kk_std_core_types__list env_0, kk_std_core_types__list prim_env_0, kk_std_core_types__list h_0, kk_function_t c_0_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun370_sq_(kk_std_core_types__list h_0_0_0_0_0_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun370__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun370__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun370_sq_, kk_context());
  _self->h_0_0_0_0_0_0_0 = h_0_0_0_0_0_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun373__t_sq_ {
  struct kk_function_s _base;
  kk_string_t i_0;
};
static bool kk_interpret_eval_fun373_sq_(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun373_sq_(kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun373__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun373__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun373_sq_, kk_context());
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret_eval_fun373_sq_(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun373__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun373__t_sq_*, _fself, _ctx);
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x287 = kk_std_core_types__tuple2_unbox(_b_x54, KK_OWNED, _ctx); /*(string, interpret/value)*/;
  {
    kk_box_t _box_x50 = _match_x287.fst;
    kk_box_t _box_x51 = _match_x287.snd;
    kk_string_t i_sq_ = kk_string_unbox(_box_x50);
    kk_string_dup(i_sq_, _ctx);
    kk_std_core_types__tuple2_drop(_match_x287, _ctx);
    return kk_string_is_eq(i_0,i_sq_,kk_context());
  }
}


// lift anonymous function
struct kk_interpret_eval_fun375__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_string_t i_0;
};
static kk_box_t kk_interpret_eval_fun375_sq_(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun375_sq_(kk_function_t c_0_0, kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun375__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun375__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun375_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun375_sq_(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun375__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun375__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10013_0_76 = kk_std_core_types__maybe_unbox(_b_x59, KK_OWNED, _ctx); /*maybe<(string, interpret/value)>*/;
  kk_interpret__value _x_x376 = kk_interpret__mlift_eval_10061_sq_(c_0_0, i_0, _y_x10013_0_76, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x376, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun385__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__expr e2;
  kk_std_core_types__list env_0;
  kk_std_core_types__list h_0;
  kk_string_t name;
  kk_std_core_types__list prim_env_0;
};
static kk_interpret__value kk_interpret_eval_fun385_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun385_sq_(kk_function_t c_0_0, kk_interpret__expr e2, kk_std_core_types__list env_0, kk_std_core_types__list h_0, kk_string_t name, kk_std_core_types__list prim_env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun385__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun385__t_sq_, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun385_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->e2 = e2;
  _self->env_0 = env_0;
  _self->h_0 = h_0;
  _self->name = name;
  _self->prim_env_0 = prim_env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_fun385_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun385__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun385__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__expr e2 = _self->e2; /* interpret/expr */
  kk_std_core_types__list env_0 = _self->env_0; /* interpret/env */
  kk_std_core_types__list h_0 = _self->h_0; /* list<(string, interpret/expr)> */
  kk_string_t name = _self->name; /* string */
  kk_std_core_types__list prim_env_0 = _self->prim_env_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__expr_dup(e2, _ctx);kk_std_core_types__list_dup(env_0, _ctx);kk_std_core_types__list_dup(h_0, _ctx);kk_string_dup(name, _ctx);kk_std_core_types__list_dup(prim_env_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list env_0_sq_;
  kk_std_core_types__list _x_x386;
  kk_box_t _x_x387;
  kk_std_core_types__tuple2 _x_x388 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_interpret__value_box(e1_sq_, _ctx), _ctx); /*(1038, 1039)*/
  _x_x387 = kk_std_core_types__tuple2_box(_x_x388, _ctx); /*1024*/
  _x_x386 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x387, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  env_0_sq_ = kk_std_core_list_append(env_0, _x_x386, _ctx); /*interpret/env*/
  return kk_interpret_eval_sq_(e2, env_0_sq_, prim_env_0, h_0, c_0_0, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun395__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__expr e2_0;
  kk_std_core_types__list env_0;
  kk_std_core_types__list h_0;
  kk_std_core_types__list prim_env_0;
};
static kk_interpret__value kk_interpret_eval_fun395_sq_(kk_function_t _fself, kk_interpret__value f_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun395_sq_(kk_function_t c_0_0, kk_interpret__expr e2_0, kk_std_core_types__list env_0, kk_std_core_types__list h_0, kk_std_core_types__list prim_env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun395__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun395__t_sq_, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun395_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->e2_0 = e2_0;
  _self->env_0 = env_0;
  _self->h_0 = h_0;
  _self->prim_env_0 = prim_env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun398__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__value f_0;
  kk_std_core_types__list h_0;
  kk_std_core_types__list prim_env_0;
};
static kk_interpret__value kk_interpret_eval_fun398_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun398_sq_(kk_function_t c_0_0, kk_interpret__value f_0, kk_std_core_types__list h_0, kk_std_core_types__list prim_env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun398__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun398__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun398_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->f_0 = f_0;
  _self->h_0 = h_0;
  _self->prim_env_0 = prim_env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_fun398_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun398__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun398__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__value f_0 = _self->f_0; /* interpret/value */
  kk_std_core_types__list h_0 = _self->h_0; /* list<(string, interpret/expr)> */
  kk_std_core_types__list prim_env_0 = _self->prim_env_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__value_dup(f_0, _ctx);kk_std_core_types__list_dup(h_0, _ctx);kk_std_core_types__list_dup(prim_env_0, _ctx);}, {}, _ctx)
  return kk_interpret_apply(f_0, arg_0, prim_env_0, h_0, c_0_0, _ctx);
}
static kk_interpret__value kk_interpret_eval_fun395_sq_(kk_function_t _fself, kk_interpret__value f_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun395__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun395__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__expr e2_0 = _self->e2_0; /* interpret/expr */
  kk_std_core_types__list env_0 = _self->env_0; /* interpret/env */
  kk_std_core_types__list h_0 = _self->h_0; /* list<(string, interpret/expr)> */
  kk_std_core_types__list prim_env_0 = _self->prim_env_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__expr_dup(e2_0, _ctx);kk_std_core_types__list_dup(env_0, _ctx);kk_std_core_types__list_dup(h_0, _ctx);kk_std_core_types__list_dup(prim_env_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x396 = kk_std_core_types__list_dup(prim_env_0, _ctx); /*interpret/prim_env*/
  kk_std_core_types__list _x_x397 = kk_std_core_types__list_dup(h_0, _ctx); /*list<(string, interpret/expr)>*/
  return kk_interpret_eval_sq_(e2_0, env_0, _x_x396, _x_x397, kk_interpret_new_eval_fun398_sq_(c_0_0, f_0, h_0, prim_env_0, _ctx), _ctx);
}
static kk_interpret__value kk_interpret_eval_fun370_sq_(kk_function_t _fself, kk_interpret__expr e, kk_std_core_types__list env_0, kk_std_core_types__list prim_env_0, kk_std_core_types__list h_0, kk_function_t c_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun370__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun370__t_sq_*, _fself, _ctx);
  kk_std_core_types__list h_0_0_0_0_0_0_0 = _self->h_0_0_0_0_0_0_0; /* list<(string, interpret/expr)> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(h_0_0_0_0_0_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list_drop(h_0_0_0_0_0_0_0, _ctx);
  if (kk_interpret__is_Var(e, _ctx)) {
    struct kk_interpret_Var* _con_x371 = kk_interpret__as_Var(e, _ctx);
    kk_string_t i_0 = _con_x371->x;
    kk_std_core_types__list_drop(prim_env_0, _ctx);
    kk_std_core_types__list_drop(h_0, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(i_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__maybe x_2_10069;
    kk_function_t _x_x372;
    kk_string_dup(i_0, _ctx);
    _x_x372 = kk_interpret_new_eval_fun373_sq_(i_0, _ctx); /*(1001) -> 1002 bool*/
    x_2_10069 = kk_std_core_list_find(env_0, _x_x372, _ctx); /*maybe<(string, interpret/value)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_2_10069, _ctx);
      kk_box_t _x_x374 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun375_sq_(c_0_0, i_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x374, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Just(x_2_10069, _ctx)) {
      kk_box_t _box_x60 = x_2_10069._cons.Just.value;
      kk_std_core_types__tuple2 _pat_3_0 = kk_std_core_types__tuple2_unbox(_box_x60, KK_BORROWED, _ctx);
      kk_box_t _box_x61 = _pat_3_0.fst;
      kk_box_t _box_x62 = _pat_3_0.snd;
      kk_interpret__value v_0 = kk_interpret__value_unbox(_box_x62, KK_BORROWED, _ctx);
      kk_interpret__value_dup(v_0, _ctx);
      kk_std_core_types__maybe_drop(x_2_10069, _ctx);
      kk_string_drop(i_0, _ctx);
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, v_0, _ctx), _ctx);
    }
    {
      kk_function_drop(c_0_0, _ctx);
      kk_string_t _b_x63_74;
      kk_string_t _x_x377;
      kk_define_string_literal(, _s_x378, 19, "undefined variable ", _ctx)
      _x_x377 = kk_string_dup(_s_x378, _ctx); /*string*/
      kk_string_t _x_x379 = kk_std_core_show_string_fs_show(i_0, _ctx); /*string*/
      _b_x63_74 = kk_std_core_types__lp__plus__plus__rp_(_x_x377, _x_x379, _ctx); /*string*/
      kk_box_t _x_x380 = kk_std_core_exn_throw(_b_x63_74, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
      return kk_interpret__value_unbox(_x_x380, KK_OWNED, _ctx);
    }
  }
  if (kk_interpret__is_Let(e, _ctx)) {
    struct kk_interpret_Let* _con_x381 = kk_interpret__as_Let(e, _ctx);
    kk_string_t name = _con_x381->name;
    kk_interpret__expr e1 = _con_x381->e1;
    kk_interpret__expr e2 = _con_x381->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1, _ctx);
      kk_interpret__expr_dup(e2, _ctx);
      kk_string_dup(name, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__list _x_x382 = kk_std_core_types__list_dup(env_0, _ctx); /*interpret/env*/
    kk_std_core_types__list _x_x383 = kk_std_core_types__list_dup(prim_env_0, _ctx); /*interpret/prim_env*/
    kk_std_core_types__list _x_x384 = kk_std_core_types__list_dup(h_0, _ctx); /*list<(string, interpret/expr)>*/
    return kk_interpret_eval_sq_(e1, _x_x382, _x_x383, _x_x384, kk_interpret_new_eval_fun385_sq_(c_0_0, e2, env_0, h_0, name, prim_env_0, _ctx), _ctx);
  }
  if (kk_interpret__is_Fn(e, _ctx)) {
    struct kk_interpret_Fn* _con_x389 = kk_interpret__as_Fn(e, _ctx);
    kk_string_t x_0_0 = _con_x389->x;
    kk_interpret__expr e1_0 = _con_x389->e1;
    kk_std_core_types__list_drop(prim_env_0, _ctx);
    kk_std_core_types__list_drop(h_0, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_0, _ctx);
      kk_string_dup(x_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__value _x_x390 = kk_interpret__new_FnVal(kk_reuse_null, 0, x_0_0, e1_0, env_0, _ctx); /*interpret/value*/
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, _x_x390, _ctx), _ctx);
  }
  if (kk_interpret__is_App(e, _ctx)) {
    struct kk_interpret_App* _con_x391 = kk_interpret__as_App(e, _ctx);
    kk_interpret__expr e1_1 = _con_x391->e1;
    kk_interpret__expr e2_0 = _con_x391->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_1, _ctx);
      kk_interpret__expr_dup(e2_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__list _x_x392 = kk_std_core_types__list_dup(env_0, _ctx); /*interpret/env*/
    kk_std_core_types__list _x_x393 = kk_std_core_types__list_dup(prim_env_0, _ctx); /*interpret/prim_env*/
    kk_std_core_types__list _x_x394 = kk_std_core_types__list_dup(h_0, _ctx); /*list<(string, interpret/expr)>*/
    return kk_interpret_eval_sq_(e1_1, _x_x392, _x_x393, _x_x394, kk_interpret_new_eval_fun395_sq_(c_0_0, e2_0, env_0, h_0, prim_env_0, _ctx), _ctx);
  }
  if (kk_interpret__is_Lit(e, _ctx)) {
    struct kk_interpret_Lit* _con_x399 = kk_interpret__as_Lit(e, _ctx);
    kk_interpret__value value = _con_x399->value;
    kk_std_core_types__list_drop(prim_env_0, _ctx);
    kk_std_core_types__list_drop(h_0, _ctx);
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
  if (kk_interpret__is_Handle(e, _ctx)) {
    struct kk_interpret_Handle* _con_x400 = kk_interpret__as_Handle(e, _ctx);
    kk_interpret__expr e_0 = _con_x400->e;
    kk_std_core_types__list h_0_0_0_0_0_0_0 = _con_x400->h;
    kk_std_core_types__list_drop(h_0, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e_0, _ctx);
      kk_std_core_types__list_dup(h_0_0_0_0_0_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    return kk_interpret_eval_sq_(e_0, env_0, prim_env_0, h_0_0_0_0_0_0_0, c_0_0, _ctx);
  }
  {
    struct kk_interpret_Prim* _con_x401 = kk_interpret__as_Prim(e, _ctx);
    kk_string_t op = _con_x401->op;
    kk_std_core_types__list exprs = _con_x401->exprs;
    kk_std_core_types__list_drop(h_0, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_std_core_types__list_dup(exprs, _ctx);
      kk_string_dup(op, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    return kk_interpret_eval_prim(op, exprs, env_0, h_0_0_0_0_0_0_0, c_0_0, prim_env_0, _ctx);
  }
}

kk_interpret__value kk_interpret_eval_sq_(kk_interpret__expr _x1_x364, kk_std_core_types__list _x2_x365, kk_std_core_types__list _x3_x366, kk_std_core_types__list _x4_x367, kk_function_t _x5_x368, kk_context_t* _ctx) { /* (e : expr, env : env, prim-env : prim_env, h : list<(string, expr)>, c : cont<value>) -> pure value */ 
  kk_function_t _x_x369;
  kk_std_core_types__list_dup(h_0_0_0_0_0_0_0, _ctx);
  _x_x369 = kk_interpret_new_eval_fun370_sq_(h_0_0_0_0_0_0_0, _ctx); /*(e : interpret/expr, env@0 : interpret/env, prim-env@0 : interpret/prim_env, h@0 : list<(string, interpret/expr)>, c@0@0 : interpret/cont<interpret/value>) -> <div,exn> interpret/value*/
  return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__expr, kk_std_core_types__list, kk_std_core_types__list, kk_std_core_types__list, kk_function_t, kk_context_t*), _x_x369, (_x_x369, _x1_x364, _x2_x365, _x3_x366, _x4_x367, _x5_x368, _ctx), _ctx);
}


// lift anonymous function
struct kk_interpret_eval_prim_fun403__t {
  struct kk_function_s _base;
  kk_string_t id;
};
static bool kk_interpret_eval_prim_fun403(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun403(kk_string_t id, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun403__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun403__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun403, kk_context());
  _self->id = id;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret_eval_prim_fun403(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun403__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun403__t*, _fself, _ctx);
  kk_string_t id = _self->id; /* string */
  kk_drop_match(_self, {kk_string_dup(id, _ctx);}, {}, _ctx)
  kk_string_t _x_x404 = kk_string_unbox(_b_x79); /*string*/
  return kk_string_is_eq(id,_x_x404,kk_context());
}


// lift anonymous function
struct kk_interpret_eval_prim_fun406__t {
  struct kk_function_s _base;
  kk_function_t c_1_0;
  kk_std_core_types__list env_1_0;
  kk_std_core_types__list exprs_0_0;
  kk_std_core_types__list h_1_0;
  kk_std_core_types__list prim_env_1_0;
};
static kk_box_t kk_interpret_eval_prim_fun406(kk_function_t _fself, kk_box_t _b_x84, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun406(kk_function_t c_1_0, kk_std_core_types__list env_1_0, kk_std_core_types__list exprs_0_0, kk_std_core_types__list h_1_0, kk_std_core_types__list prim_env_1_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun406__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun406__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun406, kk_context());
  _self->c_1_0 = c_1_0;
  _self->env_1_0 = env_1_0;
  _self->exprs_0_0 = exprs_0_0;
  _self->h_1_0 = h_1_0;
  _self->prim_env_1_0 = prim_env_1_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_prim_fun406(kk_function_t _fself, kk_box_t _b_x84, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun406__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun406__t*, _fself, _ctx);
  kk_function_t c_1_0 = _self->c_1_0; /* interpret/cont<interpret/value> */
  kk_std_core_types__list env_1_0 = _self->env_1_0; /* interpret/env */
  kk_std_core_types__list exprs_0_0 = _self->exprs_0_0; /* list<interpret/expr> */
  kk_std_core_types__list h_1_0 = _self->h_1_0; /* list<(string, interpret/expr)> */
  kk_std_core_types__list prim_env_1_0 = _self->prim_env_1_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_1_0, _ctx);kk_std_core_types__list_dup(env_1_0, _ctx);kk_std_core_types__list_dup(exprs_0_0, _ctx);kk_std_core_types__list_dup(h_1_0, _ctx);kk_std_core_types__list_dup(prim_env_1_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10027_0_106 = kk_std_core_types__maybe_unbox(_b_x84, KK_OWNED, _ctx); /*maybe<(list<interpret/value>) -> exn interpret/value>*/;
  kk_interpret__value _x_x407 = kk_interpret__mlift_eval_prim_10062(c_1_0, env_1_0, exprs_0_0, h_1_0, prim_env_1_0, _y_x10027_0_106, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x407, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_prim_fun408__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x88;
};
static kk_interpret__value kk_interpret_eval_prim_fun408(kk_function_t _fself, kk_std_core_types__list _b_x91, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun408(kk_box_t _fun_unbox_x88, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun408__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun408__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun408, kk_context());
  _self->_fun_unbox_x88 = _fun_unbox_x88;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_prim_fun408(kk_function_t _fself, kk_std_core_types__list _b_x91, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun408__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun408__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x88 = _self->_fun_unbox_x88; /* 1025 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x88, _ctx);}, {}, _ctx)
  kk_box_t _x_x409;
  kk_function_t _x_x410 = kk_function_unbox(_fun_unbox_x88, _ctx); /*(89) -> exn 90*/
  _x_x409 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x410, (_x_x410, kk_std_core_types__list_box(_b_x91, _ctx), _ctx), _ctx); /*90*/
  return kk_interpret__value_unbox(_x_x409, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_prim_fun411__t {
  struct kk_function_s _base;
  kk_function_t c_1_0;
  kk_std_core_types__list env_1_0;
  kk_std_core_types__list h_1_0;
  kk_std_core_types__list prim_env_1_0;
};
static kk_box_t kk_interpret_eval_prim_fun411(kk_function_t _fself, kk_box_t _b_x94, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun411(kk_function_t c_1_0, kk_std_core_types__list env_1_0, kk_std_core_types__list h_1_0, kk_std_core_types__list prim_env_1_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun411__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun411__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun411, kk_context());
  _self->c_1_0 = c_1_0;
  _self->env_1_0 = env_1_0;
  _self->h_1_0 = h_1_0;
  _self->prim_env_1_0 = prim_env_1_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_prim_fun411(kk_function_t _fself, kk_box_t _b_x94, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun411__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun411__t*, _fself, _ctx);
  kk_function_t c_1_0 = _self->c_1_0; /* interpret/cont<interpret/value> */
  kk_std_core_types__list env_1_0 = _self->env_1_0; /* interpret/env */
  kk_std_core_types__list h_1_0 = _self->h_1_0; /* list<(string, interpret/expr)> */
  kk_std_core_types__list prim_env_1_0 = _self->prim_env_1_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_1_0, _ctx);kk_std_core_types__list_dup(env_1_0, _ctx);kk_std_core_types__list_dup(h_1_0, _ctx);kk_std_core_types__list_dup(prim_env_1_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x412;
  kk_interpret__expr _x_x413 = kk_interpret__expr_unbox(_b_x94, KK_OWNED, _ctx); /*interpret/expr*/
  _x_x412 = kk_interpret_eval_sq_(_x_x413, env_1_0, prim_env_1_0, h_1_0, c_1_0, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x412, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_prim_fun415__t {
  struct kk_function_s _base;
  kk_function_t op_0_0;
};
static kk_box_t kk_interpret_eval_prim_fun415(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun415(kk_function_t op_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun415__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun415__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun415, kk_context());
  _self->op_0_0 = op_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_prim_fun415(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun415__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun415__t*, _fself, _ctx);
  kk_function_t op_0_0 = _self->op_0_0; /* (list<interpret/value>) -> exn interpret/value */
  kk_drop_match(_self, {kk_function_dup(op_0_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x416;
  kk_std_core_types__list _x_x417 = kk_std_core_types__list_unbox(_b_x99, KK_OWNED, _ctx); /*list<interpret/value>*/
  _x_x416 = kk_function_call(kk_interpret__value, (kk_function_t, kk_std_core_types__list, kk_context_t*), op_0_0, (op_0_0, _x_x417, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x416, _ctx);
}

kk_interpret__value kk_interpret_eval_prim(kk_string_t id, kk_std_core_types__list exprs_0_0, kk_std_core_types__list env_1_0, kk_std_core_types__list h_1_0, kk_function_t c_1_0, kk_std_core_types__list prim_env_1_0, kk_context_t* _ctx) { /* (id : string, exprs : list<expr>, env : env, h : list<(string, expr)>, c : cont<value>, prim-env : prim_env) -> pure value */ 
  kk_std_core_types__maybe x_3_10072;
  kk_std_core_types__list _x_x402 = kk_std_core_types__list_dup(prim_env_1_0, _ctx); /*interpret/prim_env*/
  x_3_10072 = kk_std_core_list_lookup(_x_x402, kk_interpret_new_eval_prim_fun403(id, _ctx), _ctx); /*maybe<(list<interpret/value>) -> exn interpret/value>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_3_10072, _ctx);
    kk_box_t _x_x405 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_prim_fun406(c_1_0, env_1_0, exprs_0_0, h_1_0, prim_env_1_0, _ctx), _ctx); /*3003*/
    return kk_interpret__value_unbox(_x_x405, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Just(x_3_10072, _ctx)) {
    kk_box_t _fun_unbox_x88 = x_3_10072._cons.Just.value;
    kk_function_t op_0_0 = kk_interpret_new_eval_prim_fun408(_fun_unbox_x88, _ctx); /*(list<interpret/value>) -> exn interpret/value*/;
    kk_std_core_types__list x_4_10075 = kk_std_core_list_map(exprs_0_0, kk_interpret_new_eval_prim_fun411(c_1_0, env_1_0, h_1_0, prim_env_1_0, _ctx), _ctx); /*list<interpret/value>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_4_10075, _ctx);
      kk_box_t _x_x414 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_prim_fun415(op_0_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x414, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_std_core_types__list, kk_context_t*), op_0_0, (op_0_0, x_4_10075, _ctx), _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(prim_env_1_0, _ctx);
    kk_std_core_types__list_drop(h_1_0, _ctx);
    kk_std_core_types__list_drop(exprs_0_0, _ctx);
    kk_std_core_types__list_drop(env_1_0, _ctx);
    kk_function_drop(c_1_0, _ctx);
    kk_box_t _x_x418;
    kk_string_t _x_x419;
    kk_define_string_literal(, _s_x420, 36, "undefined primitive op was evaluted!", _ctx)
    _x_x419 = kk_string_dup(_s_x420, _ctx); /*string*/
    _x_x418 = kk_std_core_exn_throw(_x_x419, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x418, KK_OWNED, _ctx);
  }
}
extern kk_interpret__value kk_interpret_eval_fun421(kk_function_t _fself, kk_interpret__value x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x;
}

kk_std_core_types__tuple2 kk_interpret_arg2(kk_std_core_types__list args, kk_context_t* _ctx) { /* (args : list<value>) -> exn (value, value) */ 
  if (kk_std_core_types__is_Cons(args, _ctx)) {
    struct kk_std_core_types_Cons* _con_x422 = kk_std_core_types__as_Cons(args, _ctx);
    kk_box_t _box_x107 = _con_x422->head;
    kk_std_core_types__list _pat_0 = _con_x422->tail;
    if (kk_std_core_types__is_Cons(_pat_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x423 = kk_std_core_types__as_Cons(_pat_0, _ctx);
      kk_box_t _box_x108 = _con_x423->head;
      kk_interpret__value a0 = kk_interpret__value_unbox(_box_x107, KK_BORROWED, _ctx);
      kk_std_core_types__list _pat_1 = _con_x423->tail;
      kk_interpret__value a1 = kk_interpret__value_unbox(_box_x108, KK_BORROWED, _ctx);
      if kk_likely(kk_datatype_ptr_is_unique(args, _ctx)) {
        if kk_likely(kk_datatype_ptr_is_unique(_pat_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_1, _ctx);
          kk_datatype_ptr_free(_pat_0, _ctx);
        }
        else {
          kk_interpret__value_dup(a1, _ctx);
          kk_datatype_ptr_decref(_pat_0, _ctx);
        }
        kk_datatype_ptr_free(args, _ctx);
      }
      else {
        kk_interpret__value_dup(a0, _ctx);
        kk_interpret__value_dup(a1, _ctx);
        kk_datatype_ptr_decref(args, _ctx);
      }
      return kk_std_core_types__new_Tuple2(kk_interpret__value_box(a0, _ctx), kk_interpret__value_box(a1, _ctx), _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(args, _ctx);
    kk_box_t _x_x424;
    kk_string_t _x_x425;
    kk_define_string_literal(, _s_x426, 22, "expected two arguments", _ctx)
    _x_x425 = kk_string_dup(_s_x426, _ctx); /*string*/
    _x_x424 = kk_std_core_exn_throw(_x_x425, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_std_core_types__tuple2_unbox(_x_x424, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_primitive_ops_10063_fun432__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_primitive_ops_10063_fun432(kk_function_t _fself, kk_box_t _b_x125, kk_box_t _b_x126, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_primitive_ops_10063_fun432(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_primitive_ops_10063_fun432, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_primitive_ops_10063_fun432(kk_function_t _fself, kk_box_t _b_x125, kk_box_t _b_x126, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _b_x119_131 = kk_string_unbox(_b_x125); /*string*/;
  kk_std_core_types__optional _b_x120_132 = kk_std_core_types__optional_unbox(_b_x126, KK_OWNED, _ctx); /*? exception-info*/;
  return kk_std_core_exn_throw(_b_x119_131, _b_x120_132, _ctx);
}

kk_interpret__value kk_interpret__mlift_primitive_ops_10063(kk_std_core_types__tuple2 _y_x10038, kk_context_t* _ctx) { /* forall<e> ((value, value)) -> <exn|e> value */ 
  {
    kk_box_t _box_x117 = _y_x10038.fst;
    kk_box_t _box_x118 = _y_x10038.snd;
    kk_interpret__value _pat_0_0 = kk_interpret__value_unbox(_box_x117, KK_BORROWED, _ctx);
    kk_interpret__value _pat_1_0 = kk_interpret__value_unbox(_box_x118, KK_BORROWED, _ctx);
    if (kk_interpret__is_Int(_pat_0_0, _ctx) && kk_interpret__is_Int(_pat_1_0, _ctx)) {
      struct kk_interpret_Int* _con_x427 = kk_interpret__as_Int(_pat_0_0, _ctx);
      struct kk_interpret_Int* _con_x428 = kk_interpret__as_Int(_pat_1_0, _ctx);
      kk_integer_t a = _con_x427->x;
      kk_integer_t b = _con_x428->x;
      kk_integer_dup(a, _ctx);
      kk_integer_dup(b, _ctx);
      kk_std_core_types__tuple2_drop(_y_x10038, _ctx);
      kk_integer_t _x_x429 = kk_integer_add(a,b,kk_context()); /*int*/
      return kk_interpret__new_Int(kk_reuse_null, 0, _x_x429, _ctx);
    }
  }
  {
    kk_std_core_types__tuple2_drop(_y_x10038, _ctx);
    kk_ssize_t _b_x121_127;
    kk_std_core_hnd__htag _x_x430 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
    _b_x121_127 = kk_std_core_hnd__evv_index(_x_x430, _ctx); /*hnd/ev-index*/
    kk_box_t _x_x431;
    kk_box_t _x_x433;
    kk_string_t _x_x434;
    kk_define_string_literal(, _s_x435, 26, "add: arguments must be Int", _ctx)
    _x_x434 = kk_string_dup(_s_x435, _ctx); /*string*/
    _x_x433 = kk_string_box(_x_x434); /*1000*/
    _x_x431 = kk_std_core_hnd__open_at2(_b_x121_127, kk_interpret__new_mlift_primitive_ops_10063_fun432(_ctx), _x_x433, kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
    return kk_interpret__value_unbox(_x_x431, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_primitive_ops_fun441__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_primitive_ops_fun441(kk_function_t _fself, kk_box_t _b_x157, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_primitive_ops_fun441(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_primitive_ops_fun441, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_primitive_ops_fun444__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_primitive_ops_fun444(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_primitive_ops_fun444(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_primitive_ops_fun444, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_primitive_ops_fun444(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _x_x445;
  kk_std_core_types__list _match_x283 = kk_std_core_types__list_unbox(_b_x142, KK_OWNED, _ctx); /*list<interpret/value>*/;
  if (kk_std_core_types__is_Cons(_match_x283, _ctx)) {
    struct kk_std_core_types_Cons* _con_x447 = kk_std_core_types__as_Cons(_match_x283, _ctx);
    kk_box_t _box_x133 = _con_x447->head;
    kk_std_core_types__list _pat_0_0 = _con_x447->tail;
    if (kk_std_core_types__is_Cons(_pat_0_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x448 = kk_std_core_types__as_Cons(_pat_0_0, _ctx);
      kk_box_t _box_x134 = _con_x448->head;
      kk_interpret__value a0 = kk_interpret__value_unbox(_box_x133, KK_BORROWED, _ctx);
      kk_std_core_types__list _pat_1_0 = _con_x448->tail;
      kk_interpret__value a1 = kk_interpret__value_unbox(_box_x134, KK_BORROWED, _ctx);
      if kk_likely(kk_datatype_ptr_is_unique(_match_x283, _ctx)) {
        if kk_likely(kk_datatype_ptr_is_unique(_pat_0_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_1_0, _ctx);
          kk_datatype_ptr_free(_pat_0_0, _ctx);
        }
        else {
          kk_interpret__value_dup(a1, _ctx);
          kk_datatype_ptr_decref(_pat_0_0, _ctx);
        }
        kk_datatype_ptr_free(_match_x283, _ctx);
      }
      else {
        kk_interpret__value_dup(a0, _ctx);
        kk_interpret__value_dup(a1, _ctx);
        kk_datatype_ptr_decref(_match_x283, _ctx);
      }
      _x_x445 = kk_std_core_types__new_Tuple2(kk_interpret__value_box(a0, _ctx), kk_interpret__value_box(a1, _ctx), _ctx); /*(1038, 1039)*/
      goto _match_x446;
    }
  }
  {
    kk_std_core_types__list_drop(_match_x283, _ctx);
    kk_box_t _x_x449;
    kk_string_t _x_x450;
    kk_define_string_literal(, _s_x451, 22, "expected two arguments", _ctx)
    _x_x450 = kk_string_dup(_s_x451, _ctx); /*string*/
    _x_x449 = kk_std_core_exn_throw(_x_x450, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    _x_x445 = kk_std_core_types__tuple2_unbox(_x_x449, KK_OWNED, _ctx); /*(1038, 1039)*/
  }
  _match_x446: ;
  return kk_std_core_types__tuple2_box(_x_x445, _ctx);
}


// lift anonymous function
struct kk_interpret_primitive_ops_fun454__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_primitive_ops_fun454(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_primitive_ops_fun454(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_primitive_ops_fun454, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_primitive_ops_fun454(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _y_x10038_166 = kk_std_core_types__tuple2_unbox(_b_x152, KK_OWNED, _ctx); /*(interpret/value, interpret/value)*/;
  kk_interpret__value _x_x455 = kk_interpret__mlift_primitive_ops_10063(_y_x10038_166, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x455, _ctx);
}
static kk_box_t kk_interpret_primitive_ops_fun441(kk_function_t _fself, kk_box_t _b_x157, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list args_165 = kk_std_core_types__list_unbox(_b_x157, KK_OWNED, _ctx); /*list<interpret/value>*/;
  kk_ssize_t _b_x139_143;
  kk_std_core_hnd__htag _x_x442 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
  _b_x139_143 = kk_std_core_hnd__evv_index(_x_x442, _ctx); /*hnd/ev-index*/
  kk_std_core_types__tuple2 x_10077;
  kk_box_t _x_x443 = kk_std_core_hnd__open_at1(_b_x139_143, kk_interpret_new_primitive_ops_fun444(_ctx), kk_std_core_types__list_box(args_165, _ctx), _ctx); /*1001*/
  x_10077 = kk_std_core_types__tuple2_unbox(_x_x443, KK_OWNED, _ctx); /*(interpret/value, interpret/value)*/
  kk_interpret__value _x_x452;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple2_drop(x_10077, _ctx);
    kk_box_t _x_x453 = kk_std_core_hnd_yield_extend(kk_interpret_new_primitive_ops_fun454(_ctx), _ctx); /*3003*/
    _x_x452 = kk_interpret__value_unbox(_x_x453, KK_OWNED, _ctx); /*interpret/value*/
  }
  else {
    _x_x452 = kk_interpret__mlift_primitive_ops_10063(x_10077, _ctx); /*interpret/value*/
  }
  return kk_interpret__value_box(_x_x452, _ctx);
}

kk_std_core_types__list kk_interpret_primitive_ops;


// lift anonymous function
struct kk_interpret_run_fun456__t {
  struct kk_function_s _base;
  kk_interpret__expr e;
};
static kk_box_t kk_interpret_run_fun456(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun456(kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_run_fun456__t* _self = kk_function_alloc_as(struct kk_interpret_run_fun456__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_run_fun456, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_run_fun459__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_run_fun459(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun459(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_run_fun459, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_run_fun459(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_0;
}
static kk_box_t kk_interpret_run_fun456(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_interpret_run_fun456__t* _self = kk_function_as(struct kk_interpret_run_fun456__t*, _fself, _ctx);
  kk_interpret__expr e = _self->e; /* interpret/expr */
  kk_drop_match(_self, {kk_interpret__expr_dup(e, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x457;
  kk_std_core_types__list _x_x458 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x457 = kk_interpret_eval_sq_(e, kk_std_core_types__new_Nil(_ctx), _x_x458, kk_std_core_types__new_Nil(_ctx), kk_interpret_new_run_fun459(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x457, _ctx);
}

kk_std_core_types__either kk_interpret_run(kk_interpret__expr e, kk_context_t* _ctx) { /* (e : expr) -> div either<exception,value> */ 
  kk_std_core_exn__error t_10002 = kk_std_core_exn_try(kk_interpret_new_run_fun456(e, _ctx), _ctx); /*error<interpret/value>*/;
  if (kk_std_core_exn__is_Error(t_10002, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10002._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10002, _ctx);
    return kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx);
  }
  {
    kk_box_t _box_x170 = t_10002._cons.Ok.result;
    kk_interpret__value x = kk_interpret__value_unbox(_box_x170, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x, _ctx);
    kk_std_core_exn__error_drop(t_10002, _ctx);
    return kk_std_core_types__new_Right(kk_interpret__value_box(x, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun462__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret__mlift_interpret_tests_10064_fun462(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun462(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun462, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun465__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret__mlift_interpret_tests_10064_fun465(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun465(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun465, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun466__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10064_fun466(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun466(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun466, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun467__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10064_fun467(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun467(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun467, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun498__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret__mlift_interpret_tests_10064_fun498(kk_function_t _fself, kk_interpret__value x_2, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun498(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun498, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret__mlift_interpret_tests_10064_fun498(kk_function_t _fself, kk_interpret__value x_2, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_2;
}
static kk_box_t kk_interpret__mlift_interpret_tests_10064_fun467(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x468;
  kk_interpret__expr _b_x176_180;
  kk_string_t _x_x469;
  kk_define_string_literal(, _s_x470, 1, "a", _ctx)
  _x_x469 = kk_string_dup(_s_x470, _ctx); /*string*/
  _b_x176_180 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x469, _ctx); /*interpret/expr*/
  kk_std_core_types__list _b_x177_181;
  kk_box_t _x_x471;
  kk_interpret__expr _x_x472;
  kk_string_t _x_x473;
  kk_define_string_literal(, _s_x474, 1, "b", _ctx)
  _x_x473 = kk_string_dup(_s_x474, _ctx); /*string*/
  _x_x472 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x473, _ctx); /*interpret/expr*/
  _x_x471 = kk_interpret__expr_box(_x_x472, _ctx); /*3384*/
  _b_x177_181 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x471, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<interpret/expr>*/
  kk_interpret__expr _x_x475;
  kk_string_t _x_x476;
  kk_define_string_literal(, _s_x477, 4, "plus", _ctx)
  _x_x476 = kk_string_dup(_s_x477, _ctx); /*string*/
  kk_interpret__expr _x_x478;
  kk_string_t _x_x479;
  kk_define_string_literal(, _s_x480, 1, "a", _ctx)
  _x_x479 = kk_string_dup(_s_x480, _ctx); /*string*/
  kk_interpret__expr _x_x481;
  kk_string_t _x_x482;
  kk_define_string_literal(, _s_x483, 1, "b", _ctx)
  _x_x482 = kk_string_dup(_s_x483, _ctx); /*string*/
  kk_interpret__expr _x_x484;
  kk_string_t _x_x485;
  kk_define_string_literal(, _s_x486, 1, "+", _ctx)
  _x_x485 = kk_string_dup(_s_x486, _ctx); /*string*/
  kk_std_core_types__list _x_x487 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_interpret__expr_box(_b_x176_180, _ctx), _b_x177_181, _ctx); /*list<3384>*/
  _x_x484 = kk_interpret__new_Prim(kk_reuse_null, 0, _x_x485, _x_x487, _ctx); /*interpret/expr*/
  _x_x481 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x482, _x_x484, _ctx); /*interpret/expr*/
  _x_x478 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x479, _x_x481, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x488;
  kk_interpret__expr _x_x489;
  kk_interpret__expr _x_x490;
  kk_string_t _x_x491;
  kk_define_string_literal(, _s_x492, 4, "plus", _ctx)
  _x_x491 = kk_string_dup(_s_x492, _ctx); /*string*/
  _x_x490 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x491, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x493;
  kk_interpret__value _x_x494 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*interpret/value*/
  _x_x493 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x494, _ctx); /*interpret/expr*/
  _x_x489 = kk_interpret__new_App(kk_reuse_null, 0, _x_x490, _x_x493, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x495;
  kk_interpret__value _x_x496 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(2), _ctx); /*interpret/value*/
  _x_x495 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x496, _ctx); /*interpret/expr*/
  _x_x488 = kk_interpret__new_App(kk_reuse_null, 0, _x_x489, _x_x495, _ctx); /*interpret/expr*/
  _x_x475 = kk_interpret__new_Let(kk_reuse_null, 0, _x_x476, _x_x478, _x_x488, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x497 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x468 = kk_interpret_eval_sq_(_x_x475, kk_std_core_types__new_Nil(_ctx), _x_x497, kk_std_core_types__new_Nil(_ctx), kk_interpret__new_mlift_interpret_tests_10064_fun498(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x468, _ctx);
}
static kk_box_t kk_interpret__mlift_interpret_tests_10064_fun466(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_0_10006 = kk_std_core_exn_try(kk_interpret__new_mlift_interpret_tests_10064_fun467(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x499;
  if (kk_std_core_exn__is_Error(t_0_10006, _ctx)) {
    kk_std_core_exn__exception exn_0_0 = t_0_10006._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0_0, _ctx);
    kk_std_core_exn__error_drop(t_0_10006, _ctx);
    _x_x499 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x185 = t_0_10006._cons.Ok.result;
    kk_interpret__value x_1 = kk_interpret__value_unbox(_box_x185, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_1, _ctx);
    kk_std_core_exn__error_drop(t_0_10006, _ctx);
    _x_x499 = kk_std_core_types__new_Right(kk_interpret__value_box(x_1, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x499, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun500__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10064_fun500(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun500(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun500, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_interpret_tests_10064_fun500(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _b_x187_206 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(3), _ctx); /*interpret/value*/;
  kk_std_core_types__either _x_x501 = kk_std_core_types__new_Right(kk_interpret__value_box(_b_x187_206, _ctx), _ctx); /*either<3492,3493>*/
  return kk_std_core_types__either_box(_x_x501, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun502__t {
  struct kk_function_s _base;
};
static bool kk_interpret__mlift_interpret_tests_10064_fun502(kk_function_t _fself, kk_box_t _b_x197, kk_box_t _b_x198, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun502(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun502, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret__mlift_interpret_tests_10064_fun502(kk_function_t _fself, kk_box_t _b_x197, kk_box_t _b_x198, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x503 = kk_std_core_types__either_unbox(_b_x197, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x504 = kk_std_core_types__either_unbox(_b_x198, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x503, _x_x504, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun505__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10064_fun505(kk_function_t _fself, kk_box_t _b_x199, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun505(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun505, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun507__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10064_fun507(kk_function_t _fself, kk_box_t _b_x191, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun507(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun507, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret__mlift_interpret_tests_10064_fun507(kk_function_t _fself, kk_box_t _b_x191, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x508 = kk_std_core_exn__exception_unbox(_b_x191, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x508, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10064_fun509__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10064_fun509(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10064_fun509(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10064_fun509, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret__mlift_interpret_tests_10064_fun509(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x510 = kk_interpret__value_unbox(_b_x192, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x510, _ctx);
}
static kk_string_t kk_interpret__mlift_interpret_tests_10064_fun505(kk_function_t _fself, kk_box_t _b_x199, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x506 = kk_std_core_types__either_unbox(_b_x199, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x506, kk_interpret__new_mlift_interpret_tests_10064_fun507(_ctx), kk_interpret__new_mlift_interpret_tests_10064_fun509(_ctx), _ctx);
}
static kk_unit_t kk_interpret__mlift_interpret_tests_10064_fun465(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_interpret__new_mlift_interpret_tests_10064_fun466(_ctx), kk_interpret__new_mlift_interpret_tests_10064_fun500(_ctx), kk_interpret__new_mlift_interpret_tests_10064_fun502(_ctx), kk_interpret__new_mlift_interpret_tests_10064_fun505(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret__mlift_interpret_tests_10064_fun462(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x463 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x463, kk_interpret__new_mlift_interpret_tests_10064_fun465(_ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_interpret__mlift_interpret_tests_10064(kk_unit_t wild__, kk_context_t* _ctx) { /* forall<a> (wild_ : ()) -> <div,utest/test-suite<a>> () */ 
  kk_string_t _x_x460;
  kk_define_string_literal(, _s_x461, 20, "Multiple Application", _ctx)
  _x_x460 = kk_string_dup(_s_x461, _ctx); /*string*/
  kk_utest_suite(_x_x460, kk_interpret__new_mlift_interpret_tests_10064_fun462(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun511__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun511(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun511(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun511, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun514__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun514(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun514(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun514, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun517__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun517(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun517(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun517, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun518__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun518(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun518(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun518, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun519__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun519(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun519(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun519, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun537__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_interpret_tests_fun537(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun537(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun537, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_interpret_tests_fun537(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_0;
}
static kk_box_t kk_interpret_interpret_tests_fun519(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x520;
  kk_interpret__expr _x_x521;
  kk_string_t _x_x522;
  kk_define_string_literal(, _s_x523, 2, "id", _ctx)
  _x_x522 = kk_string_dup(_s_x523, _ctx); /*string*/
  kk_interpret__expr _x_x524;
  kk_string_t _x_x525;
  kk_define_string_literal(, _s_x526, 1, "x", _ctx)
  _x_x525 = kk_string_dup(_s_x526, _ctx); /*string*/
  kk_interpret__expr _x_x527;
  kk_string_t _x_x528;
  kk_define_string_literal(, _s_x529, 1, "x", _ctx)
  _x_x528 = kk_string_dup(_s_x529, _ctx); /*string*/
  _x_x527 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x528, _ctx); /*interpret/expr*/
  _x_x524 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x525, _x_x527, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x530;
  kk_interpret__expr _x_x531;
  kk_string_t _x_x532;
  kk_define_string_literal(, _s_x533, 2, "id", _ctx)
  _x_x532 = kk_string_dup(_s_x533, _ctx); /*string*/
  _x_x531 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x532, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x534;
  kk_interpret__value _x_x535 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1010), _ctx); /*interpret/value*/
  _x_x534 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x535, _ctx); /*interpret/expr*/
  _x_x530 = kk_interpret__new_App(kk_reuse_null, 0, _x_x531, _x_x534, _ctx); /*interpret/expr*/
  _x_x521 = kk_interpret__new_Let(kk_reuse_null, 0, _x_x522, _x_x524, _x_x530, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x536 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x520 = kk_interpret_eval_sq_(_x_x521, kk_std_core_types__new_Nil(_ctx), _x_x536, kk_std_core_types__new_Nil(_ctx), kk_interpret_new_interpret_tests_fun537(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x520, _ctx);
}
static kk_box_t kk_interpret_interpret_tests_fun518(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_10004 = kk_std_core_exn_try(kk_interpret_new_interpret_tests_fun519(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x538;
  if (kk_std_core_exn__is_Error(t_10004, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10004._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10004, _ctx);
    _x_x538 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x214 = t_10004._cons.Ok.result;
    kk_interpret__value x_1 = kk_interpret__value_unbox(_box_x214, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_1, _ctx);
    kk_std_core_exn__error_drop(t_10004, _ctx);
    _x_x538 = kk_std_core_types__new_Right(kk_interpret__value_box(x_1, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x538, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun539__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun539(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun539(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun539, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun539(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x540;
  kk_box_t _x_x541;
  kk_interpret__value _x_x542 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1010), _ctx); /*interpret/value*/
  _x_x541 = kk_interpret__value_box(_x_x542, _ctx); /*3237*/
  _x_x540 = kk_std_core_types__new_Right(_x_x541, _ctx); /*either<3236,3237>*/
  return kk_std_core_types__either_box(_x_x540, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun543__t {
  struct kk_function_s _base;
};
static bool kk_interpret_interpret_tests_fun543(kk_function_t _fself, kk_box_t _b_x226, kk_box_t _b_x227, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun543(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun543, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret_interpret_tests_fun543(kk_function_t _fself, kk_box_t _b_x226, kk_box_t _b_x227, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x544 = kk_std_core_types__either_unbox(_b_x226, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x545 = kk_std_core_types__either_unbox(_b_x227, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x544, _x_x545, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun546__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun546(kk_function_t _fself, kk_box_t _b_x228, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun546(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun546, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun548__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun548(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun548(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun548, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun548(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x549 = kk_std_core_exn__exception_unbox(_b_x220, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x549, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun550__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun550(kk_function_t _fself, kk_box_t _b_x221, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun550(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun550, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun550(kk_function_t _fself, kk_box_t _b_x221, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x551 = kk_interpret__value_unbox(_b_x221, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x551, _ctx);
}
static kk_string_t kk_interpret_interpret_tests_fun546(kk_function_t _fself, kk_box_t _b_x228, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x547 = kk_std_core_types__either_unbox(_b_x228, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x547, kk_interpret_new_interpret_tests_fun548(_ctx), kk_interpret_new_interpret_tests_fun550(_ctx), _ctx);
}
static kk_unit_t kk_interpret_interpret_tests_fun517(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_interpret_new_interpret_tests_fun518(_ctx), kk_interpret_new_interpret_tests_fun539(_ctx), kk_interpret_new_interpret_tests_fun543(_ctx), kk_interpret_new_interpret_tests_fun546(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret_interpret_tests_fun514(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x515 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x515, kk_interpret_new_interpret_tests_fun517(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun553__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun553(kk_function_t _fself, kk_box_t _b_x241, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun553(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun553, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun553(kk_function_t _fself, kk_box_t _b_x241, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___279 = kk_Unit;
  kk_unit_unbox(_b_x241);
  kk_unit_t _x_x554 = kk_Unit;
  kk_interpret__mlift_interpret_tests_10064(wild___279, _ctx);
  return kk_unit_box(_x_x554);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun557__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun557(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun557(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun557, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun560__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun560(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun560(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun560, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun561__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun561(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun561(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun561, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun562__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun562(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun562(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun562, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun593__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_interpret_tests_fun593(kk_function_t _fself, kk_interpret__value x_2, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun593(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun593, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_interpret_tests_fun593(kk_function_t _fself, kk_interpret__value x_2, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_2;
}
static kk_box_t kk_interpret_interpret_tests_fun562(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x563;
  kk_interpret__expr _b_x244_248;
  kk_string_t _x_x564;
  kk_define_string_literal(, _s_x565, 1, "a", _ctx)
  _x_x564 = kk_string_dup(_s_x565, _ctx); /*string*/
  _b_x244_248 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x564, _ctx); /*interpret/expr*/
  kk_std_core_types__list _b_x245_249;
  kk_box_t _x_x566;
  kk_interpret__expr _x_x567;
  kk_string_t _x_x568;
  kk_define_string_literal(, _s_x569, 1, "b", _ctx)
  _x_x568 = kk_string_dup(_s_x569, _ctx); /*string*/
  _x_x567 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x568, _ctx); /*interpret/expr*/
  _x_x566 = kk_interpret__expr_box(_x_x567, _ctx); /*3384*/
  _b_x245_249 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x566, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<interpret/expr>*/
  kk_interpret__expr _x_x570;
  kk_string_t _x_x571;
  kk_define_string_literal(, _s_x572, 4, "plus", _ctx)
  _x_x571 = kk_string_dup(_s_x572, _ctx); /*string*/
  kk_interpret__expr _x_x573;
  kk_string_t _x_x574;
  kk_define_string_literal(, _s_x575, 1, "a", _ctx)
  _x_x574 = kk_string_dup(_s_x575, _ctx); /*string*/
  kk_interpret__expr _x_x576;
  kk_string_t _x_x577;
  kk_define_string_literal(, _s_x578, 1, "b", _ctx)
  _x_x577 = kk_string_dup(_s_x578, _ctx); /*string*/
  kk_interpret__expr _x_x579;
  kk_string_t _x_x580;
  kk_define_string_literal(, _s_x581, 1, "+", _ctx)
  _x_x580 = kk_string_dup(_s_x581, _ctx); /*string*/
  kk_std_core_types__list _x_x582 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_interpret__expr_box(_b_x244_248, _ctx), _b_x245_249, _ctx); /*list<3384>*/
  _x_x579 = kk_interpret__new_Prim(kk_reuse_null, 0, _x_x580, _x_x582, _ctx); /*interpret/expr*/
  _x_x576 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x577, _x_x579, _ctx); /*interpret/expr*/
  _x_x573 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x574, _x_x576, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x583;
  kk_interpret__expr _x_x584;
  kk_interpret__expr _x_x585;
  kk_string_t _x_x586;
  kk_define_string_literal(, _s_x587, 4, "plus", _ctx)
  _x_x586 = kk_string_dup(_s_x587, _ctx); /*string*/
  _x_x585 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x586, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x588;
  kk_interpret__value _x_x589 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*interpret/value*/
  _x_x588 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x589, _ctx); /*interpret/expr*/
  _x_x584 = kk_interpret__new_App(kk_reuse_null, 0, _x_x585, _x_x588, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x590;
  kk_interpret__value _x_x591 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(2), _ctx); /*interpret/value*/
  _x_x590 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x591, _ctx); /*interpret/expr*/
  _x_x583 = kk_interpret__new_App(kk_reuse_null, 0, _x_x584, _x_x590, _ctx); /*interpret/expr*/
  _x_x570 = kk_interpret__new_Let(kk_reuse_null, 0, _x_x571, _x_x573, _x_x583, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x592 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x563 = kk_interpret_eval_sq_(_x_x570, kk_std_core_types__new_Nil(_ctx), _x_x592, kk_std_core_types__new_Nil(_ctx), kk_interpret_new_interpret_tests_fun593(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x563, _ctx);
}
static kk_box_t kk_interpret_interpret_tests_fun561(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_0_10006 = kk_std_core_exn_try(kk_interpret_new_interpret_tests_fun562(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x594;
  if (kk_std_core_exn__is_Error(t_0_10006, _ctx)) {
    kk_std_core_exn__exception exn_0_0 = t_0_10006._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0_0, _ctx);
    kk_std_core_exn__error_drop(t_0_10006, _ctx);
    _x_x594 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x253 = t_0_10006._cons.Ok.result;
    kk_interpret__value x_1_0 = kk_interpret__value_unbox(_box_x253, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_1_0, _ctx);
    kk_std_core_exn__error_drop(t_0_10006, _ctx);
    _x_x594 = kk_std_core_types__new_Right(kk_interpret__value_box(x_1_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x594, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun595__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun595(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun595(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun595, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun595(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _b_x255_275 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(3), _ctx); /*interpret/value*/;
  kk_std_core_types__either _x_x596 = kk_std_core_types__new_Right(kk_interpret__value_box(_b_x255_275, _ctx), _ctx); /*either<3492,3493>*/
  return kk_std_core_types__either_box(_x_x596, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun597__t {
  struct kk_function_s _base;
};
static bool kk_interpret_interpret_tests_fun597(kk_function_t _fself, kk_box_t _b_x265, kk_box_t _b_x266, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun597(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun597, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret_interpret_tests_fun597(kk_function_t _fself, kk_box_t _b_x265, kk_box_t _b_x266, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x598 = kk_std_core_types__either_unbox(_b_x265, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x599 = kk_std_core_types__either_unbox(_b_x266, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x598, _x_x599, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun600__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun600(kk_function_t _fself, kk_box_t _b_x267, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun600(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun600, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun602__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun602(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun602(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun602, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun602(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x603 = kk_std_core_exn__exception_unbox(_b_x259, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x603, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun604__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun604(kk_function_t _fself, kk_box_t _b_x260, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun604(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun604, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun604(kk_function_t _fself, kk_box_t _b_x260, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x605 = kk_interpret__value_unbox(_b_x260, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x605, _ctx);
}
static kk_string_t kk_interpret_interpret_tests_fun600(kk_function_t _fself, kk_box_t _b_x267, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x601 = kk_std_core_types__either_unbox(_b_x267, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x601, kk_interpret_new_interpret_tests_fun602(_ctx), kk_interpret_new_interpret_tests_fun604(_ctx), _ctx);
}
static kk_unit_t kk_interpret_interpret_tests_fun560(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_interpret_new_interpret_tests_fun561(_ctx), kk_interpret_new_interpret_tests_fun595(_ctx), kk_interpret_new_interpret_tests_fun597(_ctx), kk_interpret_new_interpret_tests_fun600(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret_interpret_tests_fun557(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x558 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x558, kk_interpret_new_interpret_tests_fun560(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret_interpret_tests_fun511(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_10079 = kk_Unit;
  kk_string_t _x_x512;
  kk_define_string_literal(, _s_x513, 5, "Apply", _ctx)
  _x_x512 = kk_string_dup(_s_x513, _ctx); /*string*/
  kk_utest_suite(_x_x512, kk_interpret_new_interpret_tests_fun514(_ctx), _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x552 = kk_std_core_hnd_yield_extend(kk_interpret_new_interpret_tests_fun553(_ctx), _ctx); /*3034*/
    kk_unit_unbox(_x_x552); return kk_Unit;
  }
  {
    kk_string_t _x_x555;
    kk_define_string_literal(, _s_x556, 20, "Multiple Application", _ctx)
    _x_x555 = kk_string_dup(_s_x556, _ctx); /*string*/
    kk_utest_suite(_x_x555, kk_interpret_new_interpret_tests_fun557(_ctx), _ctx); return kk_Unit;
  }
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
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_num_random__init(_ctx);
  kk_utest__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_box_t _x_x436;
    kk_std_core_types__tuple2 _x_x437;
    kk_box_t _x_x438;
    kk_string_t _x_x439;
    kk_define_string_literal(, _s_x440, 1, "+", _ctx)
    _x_x439 = kk_string_dup(_s_x440, _ctx); /*string*/
    _x_x438 = kk_string_box(_x_x439); /*1038*/
    _x_x437 = kk_std_core_types__new_Tuple2(_x_x438, kk_function_box(kk_interpret_new_primitive_ops_fun441(_ctx), _ctx), _ctx); /*(1038, 1039)*/
    _x_x436 = kk_std_core_types__tuple2_box(_x_x437, _ctx); /*1024*/
    kk_interpret_primitive_ops = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x436, kk_std_core_types__new_Nil(_ctx), _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  }
  {
    kk_interpret_interpret_tests = kk_interpret_new_interpret_tests_fun511(_ctx); /*forall<a> () -> <div,utest/test-suite<a>> ()*/
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
  kk_std_core_types__list_drop(kk_interpret_primitive_ops, _ctx);
  kk_utest__done(_ctx);
  kk_std_num_random__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
