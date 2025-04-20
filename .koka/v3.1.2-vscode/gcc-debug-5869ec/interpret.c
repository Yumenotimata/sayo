// Koka generated module: interpret, koka version: 3.1.2, platform: 64-bit
#include "interpret.h"

kk_string_t kk_interpret_show(kk_interpret__value v, kk_context_t* _ctx) { /* (v : value) -> string */ 
  if (kk_interpret__is_Int(v, _ctx)) {
    struct kk_interpret_Int* _con_x472 = kk_interpret__as_Int(v, _ctx);
    kk_integer_t x = _con_x472->x;
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
    struct kk_interpret_FnVal* _con_x473 = kk_interpret__as_FnVal(v, _ctx);
    kk_string_t x_0 = _con_x473->x;
    kk_interpret__expr body = _con_x473->body;
    kk_std_core_types__list env = _con_x473->env;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_std_core_types__list_drop(env, _ctx);
      kk_interpret__expr_drop(body, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(x_0, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x474;
    kk_define_string_literal(, _s_x475, 3, "fn ", _ctx)
    _x_x474 = kk_string_dup(_s_x475, _ctx); /*string*/
    kk_string_t _x_x476 = kk_std_core_show_string_fs_show(x_0, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x474, _x_x476, _ctx);
  }
  if (kk_interpret__is_Cont(v, _ctx)) {
    struct kk_interpret_Cont* _con_x477 = kk_interpret__as_Cont(v, _ctx);
    kk_function_t c = _con_x477->c;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_function_drop(c, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_define_string_literal(, _s_x478, 4, "cont", _ctx)
    return kk_string_dup(_s_x478, _ctx);
  }
  {
    kk_define_string_literal(, _s_x479, 15, "show: undefined", _ctx)
    return kk_string_dup(_s_x479, _ctx);
  }
}

bool kk_interpret_eq(kk_interpret__value v1, kk_interpret__value v2, kk_context_t* _ctx) { /* (v1 : value, v2 : value) -> bool */ 
  if (kk_interpret__is_Int(v1, _ctx) && kk_interpret__is_Int(v2, _ctx)) {
    struct kk_interpret_Int* _con_x480 = kk_interpret__as_Int(v1, _ctx);
    struct kk_interpret_Int* _con_x481 = kk_interpret__as_Int(v2, _ctx);
    kk_integer_t i1 = _con_x480->x;
    kk_integer_t i2 = _con_x481->x;
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
    bool _brw_x438 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
    kk_integer_drop(i1, _ctx);
    kk_integer_drop(i2, _ctx);
    return _brw_x438;
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
      struct kk_interpret_Int* _con_x482 = kk_interpret__as_Int(r1, _ctx);
      struct kk_interpret_Int* _con_x483 = kk_interpret__as_Int(r2, _ctx);
      kk_integer_t i1 = _con_x482->x;
      kk_integer_t i2 = _con_x483->x;
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
      bool _brw_x437 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
      kk_integer_drop(i1, _ctx);
      kk_integer_drop(i2, _ctx);
      return _brw_x437;
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

kk_interpret__value kk_interpret__mlift_eval_10078_sq_(kk_function_t c_0, kk_string_t i, kk_std_core_types__maybe _y_x10017, kk_context_t* _ctx) { /* (c@0 : cont<value>, i : string, maybe<(string, value)>) -> <div,exn> value */ 
  if (kk_std_core_types__is_Just(_y_x10017, _ctx)) {
    kk_box_t _box_x8 = _y_x10017._cons.Just.value;
    kk_std_core_types__tuple2 _pat_3 = kk_std_core_types__tuple2_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_box_t _box_x9 = _pat_3.fst;
    kk_box_t _box_x10 = _pat_3.snd;
    kk_interpret__value v = kk_interpret__value_unbox(_box_x10, KK_BORROWED, _ctx);
    kk_string_drop(i, _ctx);
    kk_interpret__value_dup(v, _ctx);
    kk_std_core_types__maybe_drop(_y_x10017, _ctx);
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0, (c_0, v, _ctx), _ctx);
  }
  {
    kk_function_drop(c_0, _ctx);
    kk_string_t _b_x11_13;
    kk_string_t _x_x485;
    kk_define_string_literal(, _s_x486, 19, "undefined variable ", _ctx)
    _x_x485 = kk_string_dup(_s_x486, _ctx); /*string*/
    kk_string_t _x_x487 = kk_std_core_show_string_fs_show(i, _ctx); /*string*/
    _b_x11_13 = kk_std_core_types__lp__plus__plus__rp_(_x_x485, _x_x487, _ctx); /*string*/
    kk_box_t _x_x488 = kk_std_core_exn_throw(_b_x11_13, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x488, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_eval_prim_10079_fun489__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x18;
};
static kk_interpret__value kk_interpret__mlift_eval_prim_10079_fun489(kk_function_t _fself, kk_std_core_types__list _b_x21, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_prim_10079_fun489(kk_box_t _fun_unbox_x18, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10079_fun489__t* _self = kk_function_alloc_as(struct kk_interpret__mlift_eval_prim_10079_fun489__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret__mlift_eval_prim_10079_fun489, kk_context());
  _self->_fun_unbox_x18 = _fun_unbox_x18;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret__mlift_eval_prim_10079_fun489(kk_function_t _fself, kk_std_core_types__list _b_x21, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10079_fun489__t* _self = kk_function_as(struct kk_interpret__mlift_eval_prim_10079_fun489__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x18 = _self->_fun_unbox_x18; /* 1025 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x18, _ctx);}, {}, _ctx)
  kk_box_t _x_x490;
  kk_function_t _x_x491 = kk_function_unbox(_fun_unbox_x18, _ctx); /*(19) -> exn 20*/
  _x_x490 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x491, (_x_x491, kk_std_core_types__list_box(_b_x21, _ctx), _ctx), _ctx); /*20*/
  return kk_interpret__value_unbox(_x_x490, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_eval_prim_10079_fun492__t {
  struct kk_function_s _base;
  kk_function_t c_1;
  kk_std_core_types__list env_1;
  kk_std_core_types__list prim_env_1;
};
static kk_box_t kk_interpret__mlift_eval_prim_10079_fun492(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_prim_10079_fun492(kk_function_t c_1, kk_std_core_types__list env_1, kk_std_core_types__list prim_env_1, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10079_fun492__t* _self = kk_function_alloc_as(struct kk_interpret__mlift_eval_prim_10079_fun492__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret__mlift_eval_prim_10079_fun492, kk_context());
  _self->c_1 = c_1;
  _self->env_1 = env_1;
  _self->prim_env_1 = prim_env_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret__mlift_eval_prim_10079_fun492(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10079_fun492__t* _self = kk_function_as(struct kk_interpret__mlift_eval_prim_10079_fun492__t*, _fself, _ctx);
  kk_function_t c_1 = _self->c_1; /* interpret/cont<interpret/value> */
  kk_std_core_types__list env_1 = _self->env_1; /* interpret/env */
  kk_std_core_types__list prim_env_1 = _self->prim_env_1; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_1, _ctx);kk_std_core_types__list_dup(env_1, _ctx);kk_std_core_types__list_dup(prim_env_1, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x493;
  kk_interpret__expr _x_x494 = kk_interpret__expr_unbox(_b_x24, KK_OWNED, _ctx); /*interpret/expr*/
  _x_x493 = kk_interpret_eval_sq_(_x_x494, env_1, prim_env_1, c_1, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x493, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_eval_prim_10079_fun496__t {
  struct kk_function_s _base;
  kk_function_t op_0;
};
static kk_box_t kk_interpret__mlift_eval_prim_10079_fun496(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_prim_10079_fun496(kk_function_t op_0, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10079_fun496__t* _self = kk_function_alloc_as(struct kk_interpret__mlift_eval_prim_10079_fun496__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret__mlift_eval_prim_10079_fun496, kk_context());
  _self->op_0 = op_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret__mlift_eval_prim_10079_fun496(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_prim_10079_fun496__t* _self = kk_function_as(struct kk_interpret__mlift_eval_prim_10079_fun496__t*, _fself, _ctx);
  kk_function_t op_0 = _self->op_0; /* (list<interpret/value>) -> exn interpret/value */
  kk_drop_match(_self, {kk_function_dup(op_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x497;
  kk_std_core_types__list _x_x498 = kk_std_core_types__list_unbox(_b_x29, KK_OWNED, _ctx); /*list<interpret/value>*/
  _x_x497 = kk_function_call(kk_interpret__value, (kk_function_t, kk_std_core_types__list, kk_context_t*), op_0, (op_0, _x_x498, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x497, _ctx);
}

kk_interpret__value kk_interpret__mlift_eval_prim_10079(kk_function_t c_1, kk_std_core_types__list env_1, kk_std_core_types__list exprs_0, kk_std_core_types__list prim_env_1, kk_std_core_types__maybe _y_x10036, kk_context_t* _ctx) { /* (c@1 : cont<value>, env@1 : env, exprs@0 : list<expr>, prim-env@1 : prim_env, maybe<(list<value>) -> exn value>) -> <div,exn> value */ 
  if (kk_std_core_types__is_Just(_y_x10036, _ctx)) {
    kk_box_t _fun_unbox_x18 = _y_x10036._cons.Just.value;
    kk_function_t op_0 = kk_interpret__new_mlift_eval_prim_10079_fun489(_fun_unbox_x18, _ctx); /*(list<interpret/value>) -> exn interpret/value*/;
    kk_std_core_types__list x_10084 = kk_std_core_list_map(exprs_0, kk_interpret__new_mlift_eval_prim_10079_fun492(c_1, env_1, prim_env_1, _ctx), _ctx); /*list<interpret/value>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_10084, _ctx);
      kk_box_t _x_x495 = kk_std_core_hnd_yield_extend(kk_interpret__new_mlift_eval_prim_10079_fun496(op_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x495, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_std_core_types__list, kk_context_t*), op_0, (op_0, x_10084, _ctx), _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(prim_env_1, _ctx);
    kk_std_core_types__list_drop(exprs_0, _ctx);
    kk_std_core_types__list_drop(env_1, _ctx);
    kk_function_drop(c_1, _ctx);
    kk_box_t _x_x499;
    kk_string_t _x_x500;
    kk_define_string_literal(, _s_x501, 36, "undefined primitive op was evaluted!", _ctx)
    _x_x500 = kk_string_dup(_s_x501, _ctx); /*string*/
    _x_x499 = kk_std_core_exn_throw(_x_x500, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x499, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_apply_fun508__t {
  struct kk_function_s _base;
  kk_function_t c;
};
static kk_box_t kk_interpret_apply_fun508(kk_function_t _fself, kk_box_t _b_x44, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_apply_fun508(kk_function_t c, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun508__t* _self = kk_function_alloc_as(struct kk_interpret_apply_fun508__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_apply_fun508, kk_context());
  _self->c = c;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_apply_fun508(kk_function_t _fself, kk_box_t _b_x44, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun508__t* _self = kk_function_as(struct kk_interpret_apply_fun508__t*, _fself, _ctx);
  kk_function_t c = _self->c; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x509;
  kk_interpret__value _x_x510 = kk_interpret__value_unbox(_b_x44, KK_OWNED, _ctx); /*interpret/value*/
  _x_x509 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, _x_x510, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x509, _ctx);
}

kk_interpret__value kk_interpret_apply(kk_interpret__value f, kk_interpret__value arg, kk_std_core_types__list prim_env, kk_function_t c, kk_context_t* _ctx) { /* (f : value, arg : value, prim-env : prim_env, c : cont<value>) -> pure value */ 
  if (kk_interpret__is_FnVal(f, _ctx)) {
    struct kk_interpret_FnVal* _con_x502 = kk_interpret__as_FnVal(f, _ctx);
    kk_string_t x_0 = _con_x502->x;
    kk_interpret__expr body = _con_x502->body;
    kk_std_core_types__list env = _con_x502->env;
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
    kk_std_core_types__list _x_x503;
    kk_box_t _x_x504;
    kk_std_core_types__tuple2 _x_x505 = kk_std_core_types__new_Tuple2(kk_string_box(x_0), kk_interpret__value_box(arg, _ctx), _ctx); /*(1038, 1039)*/
    _x_x504 = kk_std_core_types__tuple2_box(_x_x505, _ctx); /*1024*/
    _x_x503 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x504, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    env_sq_ = kk_std_core_list_append(env, _x_x503, _ctx); /*interpret/env*/
    return kk_interpret_eval_sq_(body, env_sq_, prim_env, c, _ctx);
  }
  if (kk_interpret__is_Cont(f, _ctx)) {
    struct kk_interpret_Cont* _con_x506 = kk_interpret__as_Cont(f, _ctx);
    kk_function_t c_sq_ = _con_x506->c;
    kk_std_core_types__list_drop(prim_env, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
      kk_datatype_ptr_free(f, _ctx);
    }
    else {
      kk_function_dup(c_sq_, _ctx);
      kk_datatype_ptr_decref(f, _ctx);
    }
    kk_interpret__value x_1_10086 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_sq_, (c_sq_, arg, _ctx), _ctx); /*interpret/value*/;
    if (kk_yielding(kk_context())) {
      kk_interpret__value_drop(x_1_10086, _ctx);
      kk_box_t _x_x507 = kk_std_core_hnd_yield_extend(kk_interpret_new_apply_fun508(c, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x507, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, x_1_10086, _ctx), _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(prim_env, _ctx);
    kk_interpret__value_drop(f, _ctx);
    kk_function_drop(c, _ctx);
    kk_interpret__value_drop(arg, _ctx);
    kk_box_t _x_x511;
    kk_string_t _x_x512;
    kk_define_string_literal(, _s_x513, 32, "literal was handled as function!", _ctx)
    _x_x512 = kk_string_dup(_s_x513, _ctx); /*string*/
    _x_x511 = kk_std_core_exn_throw(_x_x512, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x511, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_fun516__t_sq_ {
  struct kk_function_s _base;
  kk_string_t i_0;
};
static bool kk_interpret_eval_fun516_sq_(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun516_sq_(kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun516__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun516__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun516_sq_, kk_context());
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret_eval_fun516_sq_(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun516__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun516__t_sq_*, _fself, _ctx);
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x434 = kk_std_core_types__tuple2_unbox(_b_x54, KK_OWNED, _ctx); /*(string, interpret/value)*/;
  {
    kk_box_t _box_x50 = _match_x434.fst;
    kk_box_t _box_x51 = _match_x434.snd;
    kk_string_t i_sq_ = kk_string_unbox(_box_x50);
    kk_string_dup(i_sq_, _ctx);
    kk_std_core_types__tuple2_drop(_match_x434, _ctx);
    return kk_string_is_eq(i_0,i_sq_,kk_context());
  }
}


// lift anonymous function
struct kk_interpret_eval_fun518__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_string_t i_0;
};
static kk_box_t kk_interpret_eval_fun518_sq_(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun518_sq_(kk_function_t c_0_0, kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun518__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun518__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun518_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun518_sq_(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun518__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun518__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10017_0_91 = kk_std_core_types__maybe_unbox(_b_x59, KK_OWNED, _ctx); /*maybe<(string, interpret/value)>*/;
  kk_interpret__value _x_x519 = kk_interpret__mlift_eval_10078_sq_(c_0_0, i_0, _y_x10017_0_91, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x519, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun528__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__expr e2;
  kk_std_core_types__list env_0;
  kk_string_t name;
  kk_std_core_types__list prim_env_0;
};
static kk_interpret__value kk_interpret_eval_fun528_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun528_sq_(kk_function_t c_0_0, kk_interpret__expr e2, kk_std_core_types__list env_0, kk_string_t name, kk_std_core_types__list prim_env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun528__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun528__t_sq_, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun528_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->e2 = e2;
  _self->env_0 = env_0;
  _self->name = name;
  _self->prim_env_0 = prim_env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_fun528_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun528__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun528__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__expr e2 = _self->e2; /* interpret/expr */
  kk_std_core_types__list env_0 = _self->env_0; /* interpret/env */
  kk_string_t name = _self->name; /* string */
  kk_std_core_types__list prim_env_0 = _self->prim_env_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__expr_dup(e2, _ctx);kk_std_core_types__list_dup(env_0, _ctx);kk_string_dup(name, _ctx);kk_std_core_types__list_dup(prim_env_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list env_0_sq_;
  kk_std_core_types__list _x_x529;
  kk_box_t _x_x530;
  kk_std_core_types__tuple2 _x_x531 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_interpret__value_box(e1_sq_, _ctx), _ctx); /*(1038, 1039)*/
  _x_x530 = kk_std_core_types__tuple2_box(_x_x531, _ctx); /*1024*/
  _x_x529 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x530, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  env_0_sq_ = kk_std_core_list_append(env_0, _x_x529, _ctx); /*interpret/env*/
  return kk_interpret_eval_sq_(e2, env_0_sq_, prim_env_0, c_0_0, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun538__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__expr e2_0;
  kk_std_core_types__list env_0;
  kk_std_core_types__list prim_env_0;
};
static kk_interpret__value kk_interpret_eval_fun538_sq_(kk_function_t _fself, kk_interpret__value f_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun538_sq_(kk_function_t c_0_0, kk_interpret__expr e2_0, kk_std_core_types__list env_0, kk_std_core_types__list prim_env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun538__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun538__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun538_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->e2_0 = e2_0;
  _self->env_0 = env_0;
  _self->prim_env_0 = prim_env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun540__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__value f_0;
  kk_std_core_types__list prim_env_0;
};
static kk_interpret__value kk_interpret_eval_fun540_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun540_sq_(kk_function_t c_0_0, kk_interpret__value f_0, kk_std_core_types__list prim_env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun540__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun540__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun540_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->f_0 = f_0;
  _self->prim_env_0 = prim_env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_fun540_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun540__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun540__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__value f_0 = _self->f_0; /* interpret/value */
  kk_std_core_types__list prim_env_0 = _self->prim_env_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__value_dup(f_0, _ctx);kk_std_core_types__list_dup(prim_env_0, _ctx);}, {}, _ctx)
  return kk_interpret_apply(f_0, arg_0, prim_env_0, c_0_0, _ctx);
}
static kk_interpret__value kk_interpret_eval_fun538_sq_(kk_function_t _fself, kk_interpret__value f_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun538__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun538__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__expr e2_0 = _self->e2_0; /* interpret/expr */
  kk_std_core_types__list env_0 = _self->env_0; /* interpret/env */
  kk_std_core_types__list prim_env_0 = _self->prim_env_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__expr_dup(e2_0, _ctx);kk_std_core_types__list_dup(env_0, _ctx);kk_std_core_types__list_dup(prim_env_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x539 = kk_std_core_types__list_dup(prim_env_0, _ctx); /*interpret/prim_env*/
  return kk_interpret_eval_sq_(e2_0, env_0, _x_x539, kk_interpret_new_eval_fun540_sq_(c_0_0, f_0, prim_env_0, _ctx), _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun545__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_std_core_types__list prim_env_0;
};
static kk_interpret__value kk_interpret_eval_fun545_sq_(kk_function_t _fself, kk_interpret__value e_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun545_sq_(kk_function_t c_0_0, kk_std_core_types__list prim_env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun545__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun545__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun545_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->prim_env_0 = prim_env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun551__t_sq_ {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_eval_fun551_sq_(kk_function_t _fself, kk_interpret__value x_1_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun551_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun551_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_eval_fun551_sq_(kk_function_t _fself, kk_interpret__value x_1_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_1_0;
}
static kk_interpret__value kk_interpret_eval_fun545_sq_(kk_function_t _fself, kk_interpret__value e_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun545__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun545__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_std_core_types__list prim_env_0 = _self->prim_env_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_std_core_types__list_dup(prim_env_0, _ctx);}, {}, _ctx)
  if (kk_interpret__is_FnVal(e_sq_, _ctx)) {
    struct kk_interpret_FnVal* _con_x546 = kk_interpret__as_FnVal(e_sq_, _ctx);
    kk_string_t x_sq_ = _con_x546->x;
    kk_interpret__expr body_0 = _con_x546->body;
    kk_std_core_types__list env_0_0_sq_ = _con_x546->env;
    if kk_likely(kk_datatype_ptr_is_unique(e_sq_, _ctx)) {
      kk_datatype_ptr_free(e_sq_, _ctx);
    }
    else {
      kk_interpret__expr_dup(body_0, _ctx);
      kk_std_core_types__list_dup(env_0_0_sq_, _ctx);
      kk_string_dup(x_sq_, _ctx);
      kk_datatype_ptr_decref(e_sq_, _ctx);
    }
    kk_std_core_types__tuple2 _b_x75_84;
    kk_box_t _x_x547;
    kk_interpret__value _x_x548 = kk_interpret__new_Cont(kk_reuse_null, 0, c_0_0, _ctx); /*interpret/value*/
    _x_x547 = kk_interpret__value_box(_x_x548, _ctx); /*1039*/
    _b_x75_84 = kk_std_core_types__new_Tuple2(kk_string_box(x_sq_), _x_x547, _ctx); /*(string, interpret/value)*/
    kk_std_core_types__list _b_x76_85 = kk_std_core_types__new_Nil(_ctx); /*list<(string, interpret/value)>*/;
    kk_std_core_types__list _x_x549;
    kk_std_core_types__list _x_x550 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__tuple2_box(_b_x75_84, _ctx), _b_x76_85, _ctx); /*list<1024>*/
    _x_x549 = kk_std_core_list_append(env_0_0_sq_, _x_x550, _ctx); /*list<1001>*/
    return kk_interpret_eval_sq_(body_0, _x_x549, prim_env_0, kk_interpret_new_eval_fun551_sq_(_ctx), _ctx);
  }
  {
    kk_std_core_types__list_drop(prim_env_0, _ctx);
    kk_interpret__value_drop(e_sq_, _ctx);
    kk_function_drop(c_0_0, _ctx);
    kk_box_t _x_x552;
    kk_string_t _x_x553;
    kk_define_string_literal(, _s_x554, 16, "unexpected shift", _ctx)
    _x_x553 = kk_string_dup(_s_x554, _ctx); /*string*/
    _x_x552 = kk_std_core_exn_throw(_x_x553, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x552, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_fun556__t_sq_ {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_eval_fun556_sq_(kk_function_t _fself, kk_interpret__value x_2_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun556_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun556_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_eval_fun556_sq_(kk_function_t _fself, kk_interpret__value x_2_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_2_0;
}


// lift anonymous function
struct kk_interpret_eval_fun558__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
};
static kk_box_t kk_interpret_eval_fun558_sq_(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun558_sq_(kk_function_t c_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun558__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun558__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun558_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun558_sq_(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun558__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun558__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x559;
  kk_interpret__value _x_x560 = kk_interpret__value_unbox(_b_x80, KK_OWNED, _ctx); /*interpret/value*/
  _x_x559 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, _x_x560, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x559, _ctx);
}

kk_interpret__value kk_interpret_eval_sq_(kk_interpret__expr e, kk_std_core_types__list env_0, kk_std_core_types__list prim_env_0, kk_function_t c_0_0, kk_context_t* _ctx) { /* (e : expr, env : env, prim-env : prim_env, c : cont<value>) -> pure value */ 
  kk__tailcall: ;
  if (kk_interpret__is_Var(e, _ctx)) {
    struct kk_interpret_Var* _con_x514 = kk_interpret__as_Var(e, _ctx);
    kk_string_t i_0 = _con_x514->x;
    kk_std_core_types__list_drop(prim_env_0, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(i_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__maybe x_2_10088;
    kk_function_t _x_x515;
    kk_string_dup(i_0, _ctx);
    _x_x515 = kk_interpret_new_eval_fun516_sq_(i_0, _ctx); /*(1001) -> 1002 bool*/
    x_2_10088 = kk_std_core_list_find(env_0, _x_x515, _ctx); /*maybe<(string, interpret/value)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_2_10088, _ctx);
      kk_box_t _x_x517 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun518_sq_(c_0_0, i_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x517, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Just(x_2_10088, _ctx)) {
      kk_box_t _box_x60 = x_2_10088._cons.Just.value;
      kk_std_core_types__tuple2 _pat_3_0 = kk_std_core_types__tuple2_unbox(_box_x60, KK_BORROWED, _ctx);
      kk_box_t _box_x61 = _pat_3_0.fst;
      kk_box_t _box_x62 = _pat_3_0.snd;
      kk_interpret__value v_0 = kk_interpret__value_unbox(_box_x62, KK_BORROWED, _ctx);
      kk_interpret__value_dup(v_0, _ctx);
      kk_std_core_types__maybe_drop(x_2_10088, _ctx);
      kk_string_drop(i_0, _ctx);
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, v_0, _ctx), _ctx);
    }
    {
      kk_function_drop(c_0_0, _ctx);
      kk_string_t _b_x63_82;
      kk_string_t _x_x520;
      kk_define_string_literal(, _s_x521, 19, "undefined variable ", _ctx)
      _x_x520 = kk_string_dup(_s_x521, _ctx); /*string*/
      kk_string_t _x_x522 = kk_std_core_show_string_fs_show(i_0, _ctx); /*string*/
      _b_x63_82 = kk_std_core_types__lp__plus__plus__rp_(_x_x520, _x_x522, _ctx); /*string*/
      kk_box_t _x_x523 = kk_std_core_exn_throw(_b_x63_82, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
      return kk_interpret__value_unbox(_x_x523, KK_OWNED, _ctx);
    }
  }
  if (kk_interpret__is_Let(e, _ctx)) {
    struct kk_interpret_Let* _con_x524 = kk_interpret__as_Let(e, _ctx);
    kk_string_t name = _con_x524->name;
    kk_interpret__expr e1 = _con_x524->e1;
    kk_interpret__expr e2 = _con_x524->e2;
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
      kk_std_core_types__list _x_x525 = kk_std_core_types__list_dup(env_0, _ctx); /*interpret/env*/
      kk_std_core_types__list _x_x526 = kk_std_core_types__list_dup(prim_env_0, _ctx); /*interpret/prim_env*/
      kk_function_t _x_x527 = kk_interpret_new_eval_fun528_sq_(c_0_0, e2, env_0, name, prim_env_0, _ctx); /*(e1' : interpret/value) -> <div,exn> interpret/value*/
      e = e1;
      env_0 = _x_x525;
      prim_env_0 = _x_x526;
      c_0_0 = _x_x527;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Fn(e, _ctx)) {
    struct kk_interpret_Fn* _con_x532 = kk_interpret__as_Fn(e, _ctx);
    kk_string_t x_0_0 = _con_x532->x;
    kk_interpret__expr e1_0 = _con_x532->e1;
    kk_std_core_types__list_drop(prim_env_0, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_0, _ctx);
      kk_string_dup(x_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__value _x_x533 = kk_interpret__new_FnVal(kk_reuse_null, 0, x_0_0, e1_0, env_0, _ctx); /*interpret/value*/
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, _x_x533, _ctx), _ctx);
  }
  if (kk_interpret__is_App(e, _ctx)) {
    struct kk_interpret_App* _con_x534 = kk_interpret__as_App(e, _ctx);
    kk_interpret__expr e1_1 = _con_x534->e1;
    kk_interpret__expr e2_0 = _con_x534->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_1, _ctx);
      kk_interpret__expr_dup(e2_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x535 = kk_std_core_types__list_dup(env_0, _ctx); /*interpret/env*/
      kk_std_core_types__list _x_x536 = kk_std_core_types__list_dup(prim_env_0, _ctx); /*interpret/prim_env*/
      kk_function_t _x_x537 = kk_interpret_new_eval_fun538_sq_(c_0_0, e2_0, env_0, prim_env_0, _ctx); /*(f@0 : interpret/value) -> <div,exn> interpret/value*/
      e = e1_1;
      env_0 = _x_x535;
      prim_env_0 = _x_x536;
      c_0_0 = _x_x537;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Lit(e, _ctx)) {
    struct kk_interpret_Lit* _con_x541 = kk_interpret__as_Lit(e, _ctx);
    kk_interpret__value value = _con_x541->value;
    kk_std_core_types__list_drop(prim_env_0, _ctx);
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
    struct kk_interpret_Shift* _con_x542 = kk_interpret__as_Shift(e, _ctx);
    kk_interpret__expr x_0_0_0 = _con_x542->e;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(x_0_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x543 = kk_std_core_types__list_dup(prim_env_0, _ctx); /*interpret/prim_env*/
      kk_function_t _x_x544 = kk_interpret_new_eval_fun545_sq_(c_0_0, prim_env_0, _ctx); /*(e' : interpret/value) -> <div,exn> interpret/value*/
      e = x_0_0_0;
      prim_env_0 = _x_x543;
      c_0_0 = _x_x544;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Reset(e, _ctx)) {
    struct kk_interpret_Reset* _con_x555 = kk_interpret__as_Reset(e, _ctx);
    kk_interpret__expr e_0 = _con_x555->e;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__value x_3_10091 = kk_interpret_eval_sq_(e_0, env_0, prim_env_0, kk_interpret_new_eval_fun556_sq_(_ctx), _ctx); /*interpret/value*/;
    if (kk_yielding(kk_context())) {
      kk_interpret__value_drop(x_3_10091, _ctx);
      kk_box_t _x_x557 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun558_sq_(c_0_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x557, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, x_3_10091, _ctx), _ctx);
    }
  }
  {
    struct kk_interpret_Prim* _con_x561 = kk_interpret__as_Prim(e, _ctx);
    kk_string_t op = _con_x561->op;
    kk_std_core_types__list exprs = _con_x561->exprs;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_std_core_types__list_dup(exprs, _ctx);
      kk_string_dup(op, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    return kk_interpret_eval_prim(op, exprs, env_0, c_0_0, prim_env_0, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_prim_fun563__t {
  struct kk_function_s _base;
  kk_string_t id;
};
static bool kk_interpret_eval_prim_fun563(kk_function_t _fself, kk_box_t _b_x94, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun563(kk_string_t id, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun563__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun563__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun563, kk_context());
  _self->id = id;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret_eval_prim_fun563(kk_function_t _fself, kk_box_t _b_x94, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun563__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun563__t*, _fself, _ctx);
  kk_string_t id = _self->id; /* string */
  kk_drop_match(_self, {kk_string_dup(id, _ctx);}, {}, _ctx)
  kk_string_t _x_x564 = kk_string_unbox(_b_x94); /*string*/
  return kk_string_is_eq(id,_x_x564,kk_context());
}


// lift anonymous function
struct kk_interpret_eval_prim_fun566__t {
  struct kk_function_s _base;
  kk_function_t c_1_0;
  kk_std_core_types__list env_1_0;
  kk_std_core_types__list exprs_0_0;
  kk_std_core_types__list prim_env_1_0;
};
static kk_box_t kk_interpret_eval_prim_fun566(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun566(kk_function_t c_1_0, kk_std_core_types__list env_1_0, kk_std_core_types__list exprs_0_0, kk_std_core_types__list prim_env_1_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun566__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun566__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun566, kk_context());
  _self->c_1_0 = c_1_0;
  _self->env_1_0 = env_1_0;
  _self->exprs_0_0 = exprs_0_0;
  _self->prim_env_1_0 = prim_env_1_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_prim_fun566(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun566__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun566__t*, _fself, _ctx);
  kk_function_t c_1_0 = _self->c_1_0; /* interpret/cont<interpret/value> */
  kk_std_core_types__list env_1_0 = _self->env_1_0; /* interpret/env */
  kk_std_core_types__list exprs_0_0 = _self->exprs_0_0; /* list<interpret/expr> */
  kk_std_core_types__list prim_env_1_0 = _self->prim_env_1_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_1_0, _ctx);kk_std_core_types__list_dup(env_1_0, _ctx);kk_std_core_types__list_dup(exprs_0_0, _ctx);kk_std_core_types__list_dup(prim_env_1_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10036_0_121 = kk_std_core_types__maybe_unbox(_b_x99, KK_OWNED, _ctx); /*maybe<(list<interpret/value>) -> exn interpret/value>*/;
  kk_interpret__value _x_x567 = kk_interpret__mlift_eval_prim_10079(c_1_0, env_1_0, exprs_0_0, prim_env_1_0, _y_x10036_0_121, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x567, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_prim_fun568__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x103;
};
static kk_interpret__value kk_interpret_eval_prim_fun568(kk_function_t _fself, kk_std_core_types__list _b_x106, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun568(kk_box_t _fun_unbox_x103, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun568__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun568__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun568, kk_context());
  _self->_fun_unbox_x103 = _fun_unbox_x103;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_prim_fun568(kk_function_t _fself, kk_std_core_types__list _b_x106, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun568__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun568__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x103 = _self->_fun_unbox_x103; /* 1025 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x103, _ctx);}, {}, _ctx)
  kk_box_t _x_x569;
  kk_function_t _x_x570 = kk_function_unbox(_fun_unbox_x103, _ctx); /*(104) -> exn 105*/
  _x_x569 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x570, (_x_x570, kk_std_core_types__list_box(_b_x106, _ctx), _ctx), _ctx); /*105*/
  return kk_interpret__value_unbox(_x_x569, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_prim_fun571__t {
  struct kk_function_s _base;
  kk_function_t c_1_0;
  kk_std_core_types__list env_1_0;
  kk_std_core_types__list prim_env_1_0;
};
static kk_box_t kk_interpret_eval_prim_fun571(kk_function_t _fself, kk_box_t _b_x109, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun571(kk_function_t c_1_0, kk_std_core_types__list env_1_0, kk_std_core_types__list prim_env_1_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun571__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun571__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun571, kk_context());
  _self->c_1_0 = c_1_0;
  _self->env_1_0 = env_1_0;
  _self->prim_env_1_0 = prim_env_1_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_prim_fun571(kk_function_t _fself, kk_box_t _b_x109, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun571__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun571__t*, _fself, _ctx);
  kk_function_t c_1_0 = _self->c_1_0; /* interpret/cont<interpret/value> */
  kk_std_core_types__list env_1_0 = _self->env_1_0; /* interpret/env */
  kk_std_core_types__list prim_env_1_0 = _self->prim_env_1_0; /* interpret/prim_env */
  kk_drop_match(_self, {kk_function_dup(c_1_0, _ctx);kk_std_core_types__list_dup(env_1_0, _ctx);kk_std_core_types__list_dup(prim_env_1_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x572;
  kk_interpret__expr _x_x573 = kk_interpret__expr_unbox(_b_x109, KK_OWNED, _ctx); /*interpret/expr*/
  _x_x572 = kk_interpret_eval_sq_(_x_x573, env_1_0, prim_env_1_0, c_1_0, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x572, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_prim_fun575__t {
  struct kk_function_s _base;
  kk_function_t op_0_0;
};
static kk_box_t kk_interpret_eval_prim_fun575(kk_function_t _fself, kk_box_t _b_x114, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_prim_fun575(kk_function_t op_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun575__t* _self = kk_function_alloc_as(struct kk_interpret_eval_prim_fun575__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_prim_fun575, kk_context());
  _self->op_0_0 = op_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_prim_fun575(kk_function_t _fself, kk_box_t _b_x114, kk_context_t* _ctx) {
  struct kk_interpret_eval_prim_fun575__t* _self = kk_function_as(struct kk_interpret_eval_prim_fun575__t*, _fself, _ctx);
  kk_function_t op_0_0 = _self->op_0_0; /* (list<interpret/value>) -> exn interpret/value */
  kk_drop_match(_self, {kk_function_dup(op_0_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x576;
  kk_std_core_types__list _x_x577 = kk_std_core_types__list_unbox(_b_x114, KK_OWNED, _ctx); /*list<interpret/value>*/
  _x_x576 = kk_function_call(kk_interpret__value, (kk_function_t, kk_std_core_types__list, kk_context_t*), op_0_0, (op_0_0, _x_x577, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x576, _ctx);
}

kk_interpret__value kk_interpret_eval_prim(kk_string_t id, kk_std_core_types__list exprs_0_0, kk_std_core_types__list env_1_0, kk_function_t c_1_0, kk_std_core_types__list prim_env_1_0, kk_context_t* _ctx) { /* (id : string, exprs : list<expr>, env : env, c : cont<value>, prim-env : prim_env) -> pure value */ 
  kk_std_core_types__maybe x_4_10093;
  kk_std_core_types__list _x_x562 = kk_std_core_types__list_dup(prim_env_1_0, _ctx); /*interpret/prim_env*/
  x_4_10093 = kk_std_core_list_lookup(_x_x562, kk_interpret_new_eval_prim_fun563(id, _ctx), _ctx); /*maybe<(list<interpret/value>) -> exn interpret/value>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_4_10093, _ctx);
    kk_box_t _x_x565 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_prim_fun566(c_1_0, env_1_0, exprs_0_0, prim_env_1_0, _ctx), _ctx); /*3003*/
    return kk_interpret__value_unbox(_x_x565, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Just(x_4_10093, _ctx)) {
    kk_box_t _fun_unbox_x103 = x_4_10093._cons.Just.value;
    kk_function_t op_0_0 = kk_interpret_new_eval_prim_fun568(_fun_unbox_x103, _ctx); /*(list<interpret/value>) -> exn interpret/value*/;
    kk_std_core_types__list x_5_10096 = kk_std_core_list_map(exprs_0_0, kk_interpret_new_eval_prim_fun571(c_1_0, env_1_0, prim_env_1_0, _ctx), _ctx); /*list<interpret/value>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_5_10096, _ctx);
      kk_box_t _x_x574 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_prim_fun575(op_0_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x574, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_std_core_types__list, kk_context_t*), op_0_0, (op_0_0, x_5_10096, _ctx), _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(prim_env_1_0, _ctx);
    kk_std_core_types__list_drop(exprs_0_0, _ctx);
    kk_std_core_types__list_drop(env_1_0, _ctx);
    kk_function_drop(c_1_0, _ctx);
    kk_box_t _x_x578;
    kk_string_t _x_x579;
    kk_define_string_literal(, _s_x580, 36, "undefined primitive op was evaluted!", _ctx)
    _x_x579 = kk_string_dup(_s_x580, _ctx); /*string*/
    _x_x578 = kk_std_core_exn_throw(_x_x579, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x578, KK_OWNED, _ctx);
  }
}
extern kk_interpret__value kk_interpret_eval_fun581(kk_function_t _fself, kk_interpret__value x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x;
}

kk_std_core_types__tuple2 kk_interpret_arg2(kk_std_core_types__list args, kk_context_t* _ctx) { /* (args : list<value>) -> exn (value, value) */ 
  if (kk_std_core_types__is_Cons(args, _ctx)) {
    struct kk_std_core_types_Cons* _con_x582 = kk_std_core_types__as_Cons(args, _ctx);
    kk_box_t _box_x122 = _con_x582->head;
    kk_std_core_types__list _pat_0 = _con_x582->tail;
    if (kk_std_core_types__is_Cons(_pat_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x583 = kk_std_core_types__as_Cons(_pat_0, _ctx);
      kk_box_t _box_x123 = _con_x583->head;
      kk_interpret__value a0 = kk_interpret__value_unbox(_box_x122, KK_BORROWED, _ctx);
      kk_std_core_types__list _pat_1 = _con_x583->tail;
      kk_interpret__value a1 = kk_interpret__value_unbox(_box_x123, KK_BORROWED, _ctx);
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
    kk_box_t _x_x584;
    kk_string_t _x_x585;
    kk_define_string_literal(, _s_x586, 22, "expected two arguments", _ctx)
    _x_x585 = kk_string_dup(_s_x586, _ctx); /*string*/
    _x_x584 = kk_std_core_exn_throw(_x_x585, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_std_core_types__tuple2_unbox(_x_x584, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_primitive_ops_10080_fun592__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_primitive_ops_10080_fun592(kk_function_t _fself, kk_box_t _b_x140, kk_box_t _b_x141, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_primitive_ops_10080_fun592(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_primitive_ops_10080_fun592, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_primitive_ops_10080_fun592(kk_function_t _fself, kk_box_t _b_x140, kk_box_t _b_x141, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _b_x134_146 = kk_string_unbox(_b_x140); /*string*/;
  kk_std_core_types__optional _b_x135_147 = kk_std_core_types__optional_unbox(_b_x141, KK_OWNED, _ctx); /*? exception-info*/;
  return kk_std_core_exn_throw(_b_x134_146, _b_x135_147, _ctx);
}

kk_interpret__value kk_interpret__mlift_primitive_ops_10080(kk_std_core_types__tuple2 _y_x10047, kk_context_t* _ctx) { /* forall<e> ((value, value)) -> <exn|e> value */ 
  {
    kk_box_t _box_x132 = _y_x10047.fst;
    kk_box_t _box_x133 = _y_x10047.snd;
    kk_interpret__value _pat_0_0 = kk_interpret__value_unbox(_box_x132, KK_BORROWED, _ctx);
    kk_interpret__value _pat_1_0 = kk_interpret__value_unbox(_box_x133, KK_BORROWED, _ctx);
    if (kk_interpret__is_Int(_pat_0_0, _ctx) && kk_interpret__is_Int(_pat_1_0, _ctx)) {
      struct kk_interpret_Int* _con_x587 = kk_interpret__as_Int(_pat_0_0, _ctx);
      struct kk_interpret_Int* _con_x588 = kk_interpret__as_Int(_pat_1_0, _ctx);
      kk_integer_t a = _con_x587->x;
      kk_integer_t b = _con_x588->x;
      kk_integer_dup(a, _ctx);
      kk_integer_dup(b, _ctx);
      kk_std_core_types__tuple2_drop(_y_x10047, _ctx);
      kk_integer_t _x_x589 = kk_integer_add(a,b,kk_context()); /*int*/
      return kk_interpret__new_Int(kk_reuse_null, 0, _x_x589, _ctx);
    }
  }
  {
    kk_std_core_types__tuple2_drop(_y_x10047, _ctx);
    kk_ssize_t _b_x136_142;
    kk_std_core_hnd__htag _x_x590 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
    _b_x136_142 = kk_std_core_hnd__evv_index(_x_x590, _ctx); /*hnd/ev-index*/
    kk_box_t _x_x591;
    kk_box_t _x_x593;
    kk_string_t _x_x594;
    kk_define_string_literal(, _s_x595, 26, "add: arguments must be Int", _ctx)
    _x_x594 = kk_string_dup(_s_x595, _ctx); /*string*/
    _x_x593 = kk_string_box(_x_x594); /*1000*/
    _x_x591 = kk_std_core_hnd__open_at2(_b_x136_142, kk_interpret__new_mlift_primitive_ops_10080_fun592(_ctx), _x_x593, kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
    return kk_interpret__value_unbox(_x_x591, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_primitive_ops_fun601__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_primitive_ops_fun601(kk_function_t _fself, kk_box_t _b_x172, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_primitive_ops_fun601(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_primitive_ops_fun601, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_primitive_ops_fun604__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_primitive_ops_fun604(kk_function_t _fself, kk_box_t _b_x157, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_primitive_ops_fun604(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_primitive_ops_fun604, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_primitive_ops_fun604(kk_function_t _fself, kk_box_t _b_x157, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _x_x605;
  kk_std_core_types__list _match_x429 = kk_std_core_types__list_unbox(_b_x157, KK_OWNED, _ctx); /*list<interpret/value>*/;
  if (kk_std_core_types__is_Cons(_match_x429, _ctx)) {
    struct kk_std_core_types_Cons* _con_x607 = kk_std_core_types__as_Cons(_match_x429, _ctx);
    kk_box_t _box_x148 = _con_x607->head;
    kk_std_core_types__list _pat_0_0 = _con_x607->tail;
    if (kk_std_core_types__is_Cons(_pat_0_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x608 = kk_std_core_types__as_Cons(_pat_0_0, _ctx);
      kk_box_t _box_x149 = _con_x608->head;
      kk_interpret__value a0 = kk_interpret__value_unbox(_box_x148, KK_BORROWED, _ctx);
      kk_std_core_types__list _pat_1_0 = _con_x608->tail;
      kk_interpret__value a1 = kk_interpret__value_unbox(_box_x149, KK_BORROWED, _ctx);
      if kk_likely(kk_datatype_ptr_is_unique(_match_x429, _ctx)) {
        if kk_likely(kk_datatype_ptr_is_unique(_pat_0_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_1_0, _ctx);
          kk_datatype_ptr_free(_pat_0_0, _ctx);
        }
        else {
          kk_interpret__value_dup(a1, _ctx);
          kk_datatype_ptr_decref(_pat_0_0, _ctx);
        }
        kk_datatype_ptr_free(_match_x429, _ctx);
      }
      else {
        kk_interpret__value_dup(a0, _ctx);
        kk_interpret__value_dup(a1, _ctx);
        kk_datatype_ptr_decref(_match_x429, _ctx);
      }
      _x_x605 = kk_std_core_types__new_Tuple2(kk_interpret__value_box(a0, _ctx), kk_interpret__value_box(a1, _ctx), _ctx); /*(1038, 1039)*/
      goto _match_x606;
    }
  }
  {
    kk_std_core_types__list_drop(_match_x429, _ctx);
    kk_box_t _x_x609;
    kk_string_t _x_x610;
    kk_define_string_literal(, _s_x611, 22, "expected two arguments", _ctx)
    _x_x610 = kk_string_dup(_s_x611, _ctx); /*string*/
    _x_x609 = kk_std_core_exn_throw(_x_x610, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    _x_x605 = kk_std_core_types__tuple2_unbox(_x_x609, KK_OWNED, _ctx); /*(1038, 1039)*/
  }
  _match_x606: ;
  return kk_std_core_types__tuple2_box(_x_x605, _ctx);
}


// lift anonymous function
struct kk_interpret_primitive_ops_fun614__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_primitive_ops_fun614(kk_function_t _fself, kk_box_t _b_x167, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_primitive_ops_fun614(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_primitive_ops_fun614, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_primitive_ops_fun614(kk_function_t _fself, kk_box_t _b_x167, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _y_x10047_181 = kk_std_core_types__tuple2_unbox(_b_x167, KK_OWNED, _ctx); /*(interpret/value, interpret/value)*/;
  kk_interpret__value _x_x615 = kk_interpret__mlift_primitive_ops_10080(_y_x10047_181, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x615, _ctx);
}
static kk_box_t kk_interpret_primitive_ops_fun601(kk_function_t _fself, kk_box_t _b_x172, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list args_180 = kk_std_core_types__list_unbox(_b_x172, KK_OWNED, _ctx); /*list<interpret/value>*/;
  kk_ssize_t _b_x154_158;
  kk_std_core_hnd__htag _x_x602 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
  _b_x154_158 = kk_std_core_hnd__evv_index(_x_x602, _ctx); /*hnd/ev-index*/
  kk_std_core_types__tuple2 x_10098;
  kk_box_t _x_x603 = kk_std_core_hnd__open_at1(_b_x154_158, kk_interpret_new_primitive_ops_fun604(_ctx), kk_std_core_types__list_box(args_180, _ctx), _ctx); /*1001*/
  x_10098 = kk_std_core_types__tuple2_unbox(_x_x603, KK_OWNED, _ctx); /*(interpret/value, interpret/value)*/
  kk_interpret__value _x_x612;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple2_drop(x_10098, _ctx);
    kk_box_t _x_x613 = kk_std_core_hnd_yield_extend(kk_interpret_new_primitive_ops_fun614(_ctx), _ctx); /*3003*/
    _x_x612 = kk_interpret__value_unbox(_x_x613, KK_OWNED, _ctx); /*interpret/value*/
  }
  else {
    _x_x612 = kk_interpret__mlift_primitive_ops_10080(x_10098, _ctx); /*interpret/value*/
  }
  return kk_interpret__value_box(_x_x612, _ctx);
}

kk_std_core_types__list kk_interpret_primitive_ops;


// lift anonymous function
struct kk_interpret_run_fun616__t {
  struct kk_function_s _base;
  kk_interpret__expr e;
};
static kk_box_t kk_interpret_run_fun616(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun616(kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_run_fun616__t* _self = kk_function_alloc_as(struct kk_interpret_run_fun616__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_run_fun616, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_run_fun619__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_run_fun619(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun619(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_run_fun619, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_run_fun619(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_0;
}
static kk_box_t kk_interpret_run_fun616(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_interpret_run_fun616__t* _self = kk_function_as(struct kk_interpret_run_fun616__t*, _fself, _ctx);
  kk_interpret__expr e = _self->e; /* interpret/expr */
  kk_drop_match(_self, {kk_interpret__expr_dup(e, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x617;
  kk_std_core_types__list _x_x618 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x617 = kk_interpret_eval_sq_(e, kk_std_core_types__new_Nil(_ctx), _x_x618, kk_interpret_new_run_fun619(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x617, _ctx);
}

kk_std_core_types__either kk_interpret_run(kk_interpret__expr e, kk_context_t* _ctx) { /* (e : expr) -> div either<exception,value> */ 
  kk_std_core_exn__error t_10002 = kk_std_core_exn_try(kk_interpret_new_run_fun616(e, _ctx), _ctx); /*error<interpret/value>*/;
  if (kk_std_core_exn__is_Error(t_10002, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10002._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10002, _ctx);
    return kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx);
  }
  {
    kk_box_t _box_x185 = t_10002._cons.Ok.result;
    kk_interpret__value x = kk_interpret__value_unbox(_box_x185, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x, _ctx);
    kk_std_core_exn__error_drop(t_10002, _ctx);
    return kk_std_core_types__new_Right(kk_interpret__value_box(x, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10081_fun620__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10081_fun620(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10081_fun620(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10081_fun620, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10081_fun621__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10081_fun621(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10081_fun621(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10081_fun621, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10081_fun657__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret__mlift_interpret_tests_10081_fun657(kk_function_t _fself, kk_interpret__value x_6, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10081_fun657(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10081_fun657, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret__mlift_interpret_tests_10081_fun657(kk_function_t _fself, kk_interpret__value x_6, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_6;
}
static kk_box_t kk_interpret__mlift_interpret_tests_10081_fun621(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x622;
  kk_interpret__expr _b_x191_195;
  kk_string_t _x_x623;
  kk_define_string_literal(, _s_x624, 1, "a", _ctx)
  _x_x623 = kk_string_dup(_s_x624, _ctx); /*string*/
  _b_x191_195 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x623, _ctx); /*interpret/expr*/
  kk_std_core_types__list _b_x192_196;
  kk_box_t _x_x625;
  kk_interpret__expr _x_x626;
  kk_string_t _x_x627;
  kk_define_string_literal(, _s_x628, 1, "b", _ctx)
  _x_x627 = kk_string_dup(_s_x628, _ctx); /*string*/
  _x_x626 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x627, _ctx); /*interpret/expr*/
  _x_x625 = kk_interpret__expr_box(_x_x626, _ctx); /*3917*/
  _b_x192_196 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x625, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<interpret/expr>*/
  kk_interpret__expr _x_x629;
  kk_string_t _x_x630;
  kk_define_string_literal(, _s_x631, 4, "plus", _ctx)
  _x_x630 = kk_string_dup(_s_x631, _ctx); /*string*/
  kk_interpret__expr _x_x632;
  kk_string_t _x_x633;
  kk_define_string_literal(, _s_x634, 1, "a", _ctx)
  _x_x633 = kk_string_dup(_s_x634, _ctx); /*string*/
  kk_interpret__expr _x_x635;
  kk_string_t _x_x636;
  kk_define_string_literal(, _s_x637, 1, "b", _ctx)
  _x_x636 = kk_string_dup(_s_x637, _ctx); /*string*/
  kk_interpret__expr _x_x638;
  kk_string_t _x_x639;
  kk_define_string_literal(, _s_x640, 1, "+", _ctx)
  _x_x639 = kk_string_dup(_s_x640, _ctx); /*string*/
  kk_std_core_types__list _x_x641 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_interpret__expr_box(_b_x191_195, _ctx), _b_x192_196, _ctx); /*list<3917>*/
  _x_x638 = kk_interpret__new_Prim(kk_reuse_null, 0, _x_x639, _x_x641, _ctx); /*interpret/expr*/
  _x_x635 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x636, _x_x638, _ctx); /*interpret/expr*/
  _x_x632 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x633, _x_x635, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x642;
  kk_interpret__expr _x_x643;
  kk_interpret__expr _x_x644;
  kk_interpret__expr _x_x645;
  kk_string_t _x_x646;
  kk_define_string_literal(, _s_x647, 4, "plus", _ctx)
  _x_x646 = kk_string_dup(_s_x647, _ctx); /*string*/
  _x_x645 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x646, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x648;
  kk_interpret__value _x_x649 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*interpret/value*/
  _x_x648 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x649, _ctx); /*interpret/expr*/
  _x_x644 = kk_interpret__new_App(kk_reuse_null, 0, _x_x645, _x_x648, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x650;
  kk_interpret__expr _x_x651;
  kk_string_t _x_x652;
  kk_define_string_literal(, _s_x653, 1, "_", _ctx)
  _x_x652 = kk_string_dup(_s_x653, _ctx); /*string*/
  kk_interpret__expr _x_x654;
  kk_interpret__value _x_x655 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(2), _ctx); /*interpret/value*/
  _x_x654 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x655, _ctx); /*interpret/expr*/
  _x_x651 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x652, _x_x654, _ctx); /*interpret/expr*/
  _x_x650 = kk_interpret__new_Shift(kk_reuse_null, 0, _x_x651, _ctx); /*interpret/expr*/
  _x_x643 = kk_interpret__new_App(kk_reuse_null, 0, _x_x644, _x_x650, _ctx); /*interpret/expr*/
  _x_x642 = kk_interpret__new_Reset(kk_reuse_null, 0, _x_x643, _ctx); /*interpret/expr*/
  _x_x629 = kk_interpret__new_Let(kk_reuse_null, 0, _x_x630, _x_x632, _x_x642, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x656 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x622 = kk_interpret_eval_sq_(_x_x629, kk_std_core_types__new_Nil(_ctx), _x_x656, kk_interpret__new_mlift_interpret_tests_10081_fun657(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x622, _ctx);
}
static kk_box_t kk_interpret__mlift_interpret_tests_10081_fun620(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_2_10010 = kk_std_core_exn_try(kk_interpret__new_mlift_interpret_tests_10081_fun621(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x658;
  if (kk_std_core_exn__is_Error(t_2_10010, _ctx)) {
    kk_std_core_exn__exception exn_0_2 = t_2_10010._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0_2, _ctx);
    kk_std_core_exn__error_drop(t_2_10010, _ctx);
    _x_x658 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0_2, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x200 = t_2_10010._cons.Ok.result;
    kk_interpret__value x_5 = kk_interpret__value_unbox(_box_x200, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_5, _ctx);
    kk_std_core_exn__error_drop(t_2_10010, _ctx);
    _x_x658 = kk_std_core_types__new_Right(kk_interpret__value_box(x_5, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x658, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10081_fun659__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10081_fun659(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10081_fun659(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10081_fun659, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_interpret_tests_10081_fun659(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _b_x202_221 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(2), _ctx); /*interpret/value*/;
  kk_std_core_types__either _x_x660 = kk_std_core_types__new_Right(kk_interpret__value_box(_b_x202_221, _ctx), _ctx); /*either<1017,1018>*/
  return kk_std_core_types__either_box(_x_x660, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10081_fun661__t {
  struct kk_function_s _base;
};
static bool kk_interpret__mlift_interpret_tests_10081_fun661(kk_function_t _fself, kk_box_t _b_x212, kk_box_t _b_x213, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10081_fun661(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10081_fun661, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret__mlift_interpret_tests_10081_fun661(kk_function_t _fself, kk_box_t _b_x212, kk_box_t _b_x213, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x662 = kk_std_core_types__either_unbox(_b_x212, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x663 = kk_std_core_types__either_unbox(_b_x213, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x662, _x_x663, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10081_fun664__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10081_fun664(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10081_fun664(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10081_fun664, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10081_fun666__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10081_fun666(kk_function_t _fself, kk_box_t _b_x206, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10081_fun666(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10081_fun666, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret__mlift_interpret_tests_10081_fun666(kk_function_t _fself, kk_box_t _b_x206, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x667 = kk_std_core_exn__exception_unbox(_b_x206, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x667, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10081_fun668__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10081_fun668(kk_function_t _fself, kk_box_t _b_x207, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10081_fun668(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10081_fun668, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret__mlift_interpret_tests_10081_fun668(kk_function_t _fself, kk_box_t _b_x207, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x669 = kk_interpret__value_unbox(_b_x207, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x669, _ctx);
}
static kk_string_t kk_interpret__mlift_interpret_tests_10081_fun664(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x665 = kk_std_core_types__either_unbox(_b_x214, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x665, kk_interpret__new_mlift_interpret_tests_10081_fun666(_ctx), kk_interpret__new_mlift_interpret_tests_10081_fun668(_ctx), _ctx);
}

kk_unit_t kk_interpret__mlift_interpret_tests_10081(kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<a> (wild_@1 : ()) -> <div,utest/test<a>> () */ 
  kk_utest_assert_eq(kk_interpret__new_mlift_interpret_tests_10081_fun620(_ctx), kk_interpret__new_mlift_interpret_tests_10081_fun659(_ctx), kk_interpret__new_mlift_interpret_tests_10081_fun661(_ctx), kk_interpret__new_mlift_interpret_tests_10081_fun664(_ctx), _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun672__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret__mlift_interpret_tests_10082_fun672(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun672(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun672, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun675__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret__mlift_interpret_tests_10082_fun675(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun675(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun675, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun676__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10082_fun676(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun676(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun676, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun677__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10082_fun677(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun677(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun677, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun700__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret__mlift_interpret_tests_10082_fun700(kk_function_t _fself, kk_interpret__value x_4, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun700(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun700, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret__mlift_interpret_tests_10082_fun700(kk_function_t _fself, kk_interpret__value x_4, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_4;
}
static kk_box_t kk_interpret__mlift_interpret_tests_10082_fun677(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x678;
  kk_interpret__expr _x_x679;
  kk_interpret__expr _x_x680;
  kk_string_t _x_x681;
  kk_define_string_literal(, _s_x682, 1, "+", _ctx)
  _x_x681 = kk_string_dup(_s_x682, _ctx); /*string*/
  kk_std_core_types__list _x_x683;
  kk_box_t _x_x684;
  kk_interpret__expr _x_x685;
  kk_interpret__value _x_x686 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*interpret/value*/
  _x_x685 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x686, _ctx); /*interpret/expr*/
  _x_x684 = kk_interpret__expr_box(_x_x685, _ctx); /*3669*/
  kk_std_core_types__list _x_x687;
  kk_box_t _x_x688;
  kk_interpret__expr _x_x689;
  kk_interpret__expr _x_x690;
  kk_string_t _x_x691;
  kk_define_string_literal(, _s_x692, 1, "k", _ctx)
  _x_x691 = kk_string_dup(_s_x692, _ctx); /*string*/
  kk_interpret__expr _x_x693;
  kk_interpret__expr _x_x694;
  kk_string_t _x_x695;
  kk_define_string_literal(, _s_x696, 1, "k", _ctx)
  _x_x695 = kk_string_dup(_s_x696, _ctx); /*string*/
  _x_x694 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x695, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x697;
  kk_interpret__value _x_x698 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(2), _ctx); /*interpret/value*/
  _x_x697 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x698, _ctx); /*interpret/expr*/
  _x_x693 = kk_interpret__new_App(kk_reuse_null, 0, _x_x694, _x_x697, _ctx); /*interpret/expr*/
  _x_x690 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x691, _x_x693, _ctx); /*interpret/expr*/
  _x_x689 = kk_interpret__new_Shift(kk_reuse_null, 0, _x_x690, _ctx); /*interpret/expr*/
  _x_x688 = kk_interpret__expr_box(_x_x689, _ctx); /*3669*/
  _x_x687 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x688, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<3669>*/
  _x_x683 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x684, _x_x687, _ctx); /*list<3669>*/
  _x_x680 = kk_interpret__new_Prim(kk_reuse_null, 0, _x_x681, _x_x683, _ctx); /*interpret/expr*/
  _x_x679 = kk_interpret__new_Reset(kk_reuse_null, 0, _x_x680, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x699 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x678 = kk_interpret_eval_sq_(_x_x679, kk_std_core_types__new_Nil(_ctx), _x_x699, kk_interpret__new_mlift_interpret_tests_10082_fun700(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x678, _ctx);
}
static kk_box_t kk_interpret__mlift_interpret_tests_10082_fun676(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_1_10008 = kk_std_core_exn_try(kk_interpret__new_mlift_interpret_tests_10082_fun677(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x701;
  if (kk_std_core_exn__is_Error(t_1_10008, _ctx)) {
    kk_std_core_exn__exception exn_0_1 = t_1_10008._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0_1, _ctx);
    kk_std_core_exn__error_drop(t_1_10008, _ctx);
    _x_x701 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0_1, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x237 = t_1_10008._cons.Ok.result;
    kk_interpret__value x_3 = kk_interpret__value_unbox(_box_x237, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_3, _ctx);
    kk_std_core_exn__error_drop(t_1_10008, _ctx);
    _x_x701 = kk_std_core_types__new_Right(kk_interpret__value_box(x_3, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x701, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun702__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10082_fun702(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun702(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun702, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_interpret_tests_10082_fun702(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x703;
  kk_box_t _x_x704;
  kk_interpret__value _x_x705 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(3), _ctx); /*interpret/value*/
  _x_x704 = kk_interpret__value_box(_x_x705, _ctx); /*1018*/
  _x_x703 = kk_std_core_types__new_Right(_x_x704, _ctx); /*either<1017,1018>*/
  return kk_std_core_types__either_box(_x_x703, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun706__t {
  struct kk_function_s _base;
};
static bool kk_interpret__mlift_interpret_tests_10082_fun706(kk_function_t _fself, kk_box_t _b_x249, kk_box_t _b_x250, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun706(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun706, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret__mlift_interpret_tests_10082_fun706(kk_function_t _fself, kk_box_t _b_x249, kk_box_t _b_x250, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x707 = kk_std_core_types__either_unbox(_b_x249, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x708 = kk_std_core_types__either_unbox(_b_x250, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x707, _x_x708, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun709__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10082_fun709(kk_function_t _fself, kk_box_t _b_x251, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun709(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun709, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun711__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10082_fun711(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun711(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun711, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret__mlift_interpret_tests_10082_fun711(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x712 = kk_std_core_exn__exception_unbox(_b_x243, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x712, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun713__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10082_fun713(kk_function_t _fself, kk_box_t _b_x244, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun713(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun713, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret__mlift_interpret_tests_10082_fun713(kk_function_t _fself, kk_box_t _b_x244, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x714 = kk_interpret__value_unbox(_b_x244, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x714, _ctx);
}
static kk_string_t kk_interpret__mlift_interpret_tests_10082_fun709(kk_function_t _fself, kk_box_t _b_x251, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x710 = kk_std_core_types__either_unbox(_b_x251, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x710, kk_interpret__new_mlift_interpret_tests_10082_fun711(_ctx), kk_interpret__new_mlift_interpret_tests_10082_fun713(_ctx), _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10082_fun716__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10082_fun716(kk_function_t _fself, kk_box_t _b_x264, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10082_fun716(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10082_fun716, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_interpret_tests_10082_fun716(kk_function_t _fself, kk_box_t _b_x264, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___1_266 = kk_Unit;
  kk_unit_unbox(_b_x264);
  kk_unit_t _x_x717 = kk_Unit;
  kk_interpret__mlift_interpret_tests_10081(wild___1_266, _ctx);
  return kk_unit_box(_x_x717);
}
static kk_unit_t kk_interpret__mlift_interpret_tests_10082_fun675(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_10100 = kk_Unit;
  kk_utest_assert_eq(kk_interpret__new_mlift_interpret_tests_10082_fun676(_ctx), kk_interpret__new_mlift_interpret_tests_10082_fun702(_ctx), kk_interpret__new_mlift_interpret_tests_10082_fun706(_ctx), kk_interpret__new_mlift_interpret_tests_10082_fun709(_ctx), _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x715 = kk_std_core_hnd_yield_extend(kk_interpret__new_mlift_interpret_tests_10082_fun716(_ctx), _ctx); /*3076*/
    kk_unit_unbox(_x_x715); return kk_Unit;
  }
  {
    kk_interpret__mlift_interpret_tests_10081(x_10100, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_interpret__mlift_interpret_tests_10082_fun672(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x673 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x673, kk_interpret__new_mlift_interpret_tests_10082_fun675(_ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_interpret__mlift_interpret_tests_10082(kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<a> (wild_@0 : ()) -> <div,utest/test-suite<a>> () */ 
  kk_string_t _x_x670;
  kk_define_string_literal(, _s_x671, 11, "Shift/Reset", _ctx)
  _x_x670 = kk_string_dup(_s_x671, _ctx); /*string*/
  kk_utest_suite(_x_x670, kk_interpret__new_mlift_interpret_tests_10082_fun672(_ctx), _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun720__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret__mlift_interpret_tests_10083_fun720(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun720(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun720, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun723__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret__mlift_interpret_tests_10083_fun723(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun723(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun723, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun724__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10083_fun724(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun724(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun724, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun725__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10083_fun725(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun725(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun725, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun759__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret__mlift_interpret_tests_10083_fun759(kk_function_t _fself, kk_interpret__value x_2, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun759(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun759, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret__mlift_interpret_tests_10083_fun759(kk_function_t _fself, kk_interpret__value x_2, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_2;
}
static kk_box_t kk_interpret__mlift_interpret_tests_10083_fun725(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x726;
  kk_interpret__expr _x_x727;
  kk_string_t _x_x728;
  kk_define_string_literal(, _s_x729, 4, "plus", _ctx)
  _x_x728 = kk_string_dup(_s_x729, _ctx); /*string*/
  kk_interpret__expr _x_x730;
  kk_string_t _x_x731;
  kk_define_string_literal(, _s_x732, 1, "a", _ctx)
  _x_x731 = kk_string_dup(_s_x732, _ctx); /*string*/
  kk_interpret__expr _x_x733;
  kk_string_t _x_x734;
  kk_define_string_literal(, _s_x735, 1, "b", _ctx)
  _x_x734 = kk_string_dup(_s_x735, _ctx); /*string*/
  kk_interpret__expr _x_x736;
  kk_string_t _x_x737;
  kk_define_string_literal(, _s_x738, 1, "+", _ctx)
  _x_x737 = kk_string_dup(_s_x738, _ctx); /*string*/
  kk_std_core_types__list _x_x739;
  kk_box_t _x_x740;
  kk_interpret__expr _x_x741;
  kk_string_t _x_x742;
  kk_define_string_literal(, _s_x743, 1, "a", _ctx)
  _x_x742 = kk_string_dup(_s_x743, _ctx); /*string*/
  _x_x741 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x742, _ctx); /*interpret/expr*/
  _x_x740 = kk_interpret__expr_box(_x_x741, _ctx); /*3426*/
  kk_std_core_types__list _x_x744;
  kk_box_t _x_x745;
  kk_interpret__expr _x_x746;
  kk_string_t _x_x747;
  kk_define_string_literal(, _s_x748, 1, "b", _ctx)
  _x_x747 = kk_string_dup(_s_x748, _ctx); /*string*/
  _x_x746 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x747, _ctx); /*interpret/expr*/
  _x_x745 = kk_interpret__expr_box(_x_x746, _ctx); /*3426*/
  _x_x744 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x745, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<3426>*/
  _x_x739 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x740, _x_x744, _ctx); /*list<3426>*/
  _x_x736 = kk_interpret__new_Prim(kk_reuse_null, 0, _x_x737, _x_x739, _ctx); /*interpret/expr*/
  _x_x733 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x734, _x_x736, _ctx); /*interpret/expr*/
  _x_x730 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x731, _x_x733, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x749;
  kk_interpret__expr _x_x750;
  kk_interpret__expr _x_x751;
  kk_string_t _x_x752;
  kk_define_string_literal(, _s_x753, 4, "plus", _ctx)
  _x_x752 = kk_string_dup(_s_x753, _ctx); /*string*/
  _x_x751 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x752, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x754;
  kk_interpret__value _x_x755 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*interpret/value*/
  _x_x754 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x755, _ctx); /*interpret/expr*/
  _x_x750 = kk_interpret__new_App(kk_reuse_null, 0, _x_x751, _x_x754, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x756;
  kk_interpret__value _x_x757 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(2), _ctx); /*interpret/value*/
  _x_x756 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x757, _ctx); /*interpret/expr*/
  _x_x749 = kk_interpret__new_App(kk_reuse_null, 0, _x_x750, _x_x756, _ctx); /*interpret/expr*/
  _x_x727 = kk_interpret__new_Let(kk_reuse_null, 0, _x_x728, _x_x730, _x_x749, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x758 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x726 = kk_interpret_eval_sq_(_x_x727, kk_std_core_types__new_Nil(_ctx), _x_x758, kk_interpret__new_mlift_interpret_tests_10083_fun759(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x726, _ctx);
}
static kk_box_t kk_interpret__mlift_interpret_tests_10083_fun724(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_0_10006 = kk_std_core_exn_try(kk_interpret__new_mlift_interpret_tests_10083_fun725(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x760;
  if (kk_std_core_exn__is_Error(t_0_10006, _ctx)) {
    kk_std_core_exn__exception exn_0_0 = t_0_10006._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0_0, _ctx);
    kk_std_core_exn__error_drop(t_0_10006, _ctx);
    _x_x760 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x278 = t_0_10006._cons.Ok.result;
    kk_interpret__value x_1 = kk_interpret__value_unbox(_box_x278, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_1, _ctx);
    kk_std_core_exn__error_drop(t_0_10006, _ctx);
    _x_x760 = kk_std_core_types__new_Right(kk_interpret__value_box(x_1, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x760, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun761__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10083_fun761(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun761(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun761, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_interpret_tests_10083_fun761(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x762;
  kk_box_t _x_x763;
  kk_interpret__value _x_x764 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(3), _ctx); /*interpret/value*/
  _x_x763 = kk_interpret__value_box(_x_x764, _ctx); /*1018*/
  _x_x762 = kk_std_core_types__new_Right(_x_x763, _ctx); /*either<1017,1018>*/
  return kk_std_core_types__either_box(_x_x762, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun765__t {
  struct kk_function_s _base;
};
static bool kk_interpret__mlift_interpret_tests_10083_fun765(kk_function_t _fself, kk_box_t _b_x290, kk_box_t _b_x291, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun765(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun765, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret__mlift_interpret_tests_10083_fun765(kk_function_t _fself, kk_box_t _b_x290, kk_box_t _b_x291, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x766 = kk_std_core_types__either_unbox(_b_x290, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x767 = kk_std_core_types__either_unbox(_b_x291, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x766, _x_x767, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun768__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10083_fun768(kk_function_t _fself, kk_box_t _b_x292, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun768(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun768, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun770__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10083_fun770(kk_function_t _fself, kk_box_t _b_x284, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun770(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun770, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret__mlift_interpret_tests_10083_fun770(kk_function_t _fself, kk_box_t _b_x284, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x771 = kk_std_core_exn__exception_unbox(_b_x284, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x771, _ctx);
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun772__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret__mlift_interpret_tests_10083_fun772(kk_function_t _fself, kk_box_t _b_x285, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun772(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun772, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret__mlift_interpret_tests_10083_fun772(kk_function_t _fself, kk_box_t _b_x285, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x773 = kk_interpret__value_unbox(_b_x285, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x773, _ctx);
}
static kk_string_t kk_interpret__mlift_interpret_tests_10083_fun768(kk_function_t _fself, kk_box_t _b_x292, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x769 = kk_std_core_types__either_unbox(_b_x292, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x769, kk_interpret__new_mlift_interpret_tests_10083_fun770(_ctx), kk_interpret__new_mlift_interpret_tests_10083_fun772(_ctx), _ctx);
}
static kk_unit_t kk_interpret__mlift_interpret_tests_10083_fun723(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_interpret__new_mlift_interpret_tests_10083_fun724(_ctx), kk_interpret__new_mlift_interpret_tests_10083_fun761(_ctx), kk_interpret__new_mlift_interpret_tests_10083_fun765(_ctx), kk_interpret__new_mlift_interpret_tests_10083_fun768(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret__mlift_interpret_tests_10083_fun720(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x721 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x721, kk_interpret__new_mlift_interpret_tests_10083_fun723(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_interpret__mlift_interpret_tests_10083_fun775__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_interpret_tests_10083_fun775(kk_function_t _fself, kk_box_t _b_x305, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_interpret_tests_10083_fun775(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_interpret_tests_10083_fun775, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_interpret_tests_10083_fun775(kk_function_t _fself, kk_box_t _b_x305, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___0_307 = kk_Unit;
  kk_unit_unbox(_b_x305);
  kk_unit_t _x_x776 = kk_Unit;
  kk_interpret__mlift_interpret_tests_10082(wild___0_307, _ctx);
  return kk_unit_box(_x_x776);
}

kk_unit_t kk_interpret__mlift_interpret_tests_10083(kk_unit_t wild__, kk_context_t* _ctx) { /* forall<a> (wild_ : ()) -> <div,utest/test-suite<a>> () */ 
  kk_unit_t x_10102 = kk_Unit;
  kk_string_t _x_x718;
  kk_define_string_literal(, _s_x719, 20, "Multiple Application", _ctx)
  _x_x718 = kk_string_dup(_s_x719, _ctx); /*string*/
  kk_utest_suite(_x_x718, kk_interpret__new_mlift_interpret_tests_10083_fun720(_ctx), _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x774 = kk_std_core_hnd_yield_extend(kk_interpret__new_mlift_interpret_tests_10083_fun775(_ctx), _ctx); /*3076*/
    kk_unit_unbox(_x_x774); return kk_Unit;
  }
  {
    kk_interpret__mlift_interpret_tests_10082(x_10102, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun777__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun777(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun777(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun777, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun780__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun780(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun780(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun780, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun783__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun783(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun783(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun783, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun784__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun784(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun784(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun784, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun785__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun785(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun785(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun785, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun803__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_interpret_tests_fun803(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun803(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun803, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_interpret_tests_fun803(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_0;
}
static kk_box_t kk_interpret_interpret_tests_fun785(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x786;
  kk_interpret__expr _x_x787;
  kk_string_t _x_x788;
  kk_define_string_literal(, _s_x789, 2, "id", _ctx)
  _x_x788 = kk_string_dup(_s_x789, _ctx); /*string*/
  kk_interpret__expr _x_x790;
  kk_string_t _x_x791;
  kk_define_string_literal(, _s_x792, 1, "x", _ctx)
  _x_x791 = kk_string_dup(_s_x792, _ctx); /*string*/
  kk_interpret__expr _x_x793;
  kk_string_t _x_x794;
  kk_define_string_literal(, _s_x795, 1, "x", _ctx)
  _x_x794 = kk_string_dup(_s_x795, _ctx); /*string*/
  _x_x793 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x794, _ctx); /*interpret/expr*/
  _x_x790 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x791, _x_x793, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x796;
  kk_interpret__expr _x_x797;
  kk_string_t _x_x798;
  kk_define_string_literal(, _s_x799, 2, "id", _ctx)
  _x_x798 = kk_string_dup(_s_x799, _ctx); /*string*/
  _x_x797 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x798, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x800;
  kk_interpret__value _x_x801 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1010), _ctx); /*interpret/value*/
  _x_x800 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x801, _ctx); /*interpret/expr*/
  _x_x796 = kk_interpret__new_App(kk_reuse_null, 0, _x_x797, _x_x800, _ctx); /*interpret/expr*/
  _x_x787 = kk_interpret__new_Let(kk_reuse_null, 0, _x_x788, _x_x790, _x_x796, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x802 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x786 = kk_interpret_eval_sq_(_x_x787, kk_std_core_types__new_Nil(_ctx), _x_x802, kk_interpret_new_interpret_tests_fun803(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x786, _ctx);
}
static kk_box_t kk_interpret_interpret_tests_fun784(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_10004 = kk_std_core_exn_try(kk_interpret_new_interpret_tests_fun785(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x804;
  if (kk_std_core_exn__is_Error(t_10004, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10004._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10004, _ctx);
    _x_x804 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x311 = t_10004._cons.Ok.result;
    kk_interpret__value x_1 = kk_interpret__value_unbox(_box_x311, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_1, _ctx);
    kk_std_core_exn__error_drop(t_10004, _ctx);
    _x_x804 = kk_std_core_types__new_Right(kk_interpret__value_box(x_1, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x804, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun805__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun805(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun805(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun805, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun805(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x806;
  kk_box_t _x_x807;
  kk_interpret__value _x_x808 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1010), _ctx); /*interpret/value*/
  _x_x807 = kk_interpret__value_box(_x_x808, _ctx); /*1018*/
  _x_x806 = kk_std_core_types__new_Right(_x_x807, _ctx); /*either<1017,1018>*/
  return kk_std_core_types__either_box(_x_x806, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun809__t {
  struct kk_function_s _base;
};
static bool kk_interpret_interpret_tests_fun809(kk_function_t _fself, kk_box_t _b_x323, kk_box_t _b_x324, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun809(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun809, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret_interpret_tests_fun809(kk_function_t _fself, kk_box_t _b_x323, kk_box_t _b_x324, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x810 = kk_std_core_types__either_unbox(_b_x323, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x811 = kk_std_core_types__either_unbox(_b_x324, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x810, _x_x811, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun812__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun812(kk_function_t _fself, kk_box_t _b_x325, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun812(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun812, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun814__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun814(kk_function_t _fself, kk_box_t _b_x317, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun814(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun814, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun814(kk_function_t _fself, kk_box_t _b_x317, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x815 = kk_std_core_exn__exception_unbox(_b_x317, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x815, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun816__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun816(kk_function_t _fself, kk_box_t _b_x318, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun816(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun816, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun816(kk_function_t _fself, kk_box_t _b_x318, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x817 = kk_interpret__value_unbox(_b_x318, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x817, _ctx);
}
static kk_string_t kk_interpret_interpret_tests_fun812(kk_function_t _fself, kk_box_t _b_x325, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x813 = kk_std_core_types__either_unbox(_b_x325, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x813, kk_interpret_new_interpret_tests_fun814(_ctx), kk_interpret_new_interpret_tests_fun816(_ctx), _ctx);
}
static kk_unit_t kk_interpret_interpret_tests_fun783(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_interpret_new_interpret_tests_fun784(_ctx), kk_interpret_new_interpret_tests_fun805(_ctx), kk_interpret_new_interpret_tests_fun809(_ctx), kk_interpret_new_interpret_tests_fun812(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret_interpret_tests_fun780(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x781 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x781, kk_interpret_new_interpret_tests_fun783(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun819__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun819(kk_function_t _fself, kk_box_t _b_x338, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun819(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun819, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun819(kk_function_t _fself, kk_box_t _b_x338, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___420 = kk_Unit;
  kk_unit_unbox(_b_x338);
  kk_unit_t _x_x820 = kk_Unit;
  kk_interpret__mlift_interpret_tests_10083(wild___420, _ctx);
  return kk_unit_box(_x_x820);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun823__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun823(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun823(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun823, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun826__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun826(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun826(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun826, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun827__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun827(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun827(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun827, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun828__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun828(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun828(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun828, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun862__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_interpret_tests_fun862(kk_function_t _fself, kk_interpret__value x_2_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun862(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun862, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_interpret_tests_fun862(kk_function_t _fself, kk_interpret__value x_2_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_2_0;
}
static kk_box_t kk_interpret_interpret_tests_fun828(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x829;
  kk_interpret__expr _x_x830;
  kk_string_t _x_x831;
  kk_define_string_literal(, _s_x832, 4, "plus", _ctx)
  _x_x831 = kk_string_dup(_s_x832, _ctx); /*string*/
  kk_interpret__expr _x_x833;
  kk_string_t _x_x834;
  kk_define_string_literal(, _s_x835, 1, "a", _ctx)
  _x_x834 = kk_string_dup(_s_x835, _ctx); /*string*/
  kk_interpret__expr _x_x836;
  kk_string_t _x_x837;
  kk_define_string_literal(, _s_x838, 1, "b", _ctx)
  _x_x837 = kk_string_dup(_s_x838, _ctx); /*string*/
  kk_interpret__expr _x_x839;
  kk_string_t _x_x840;
  kk_define_string_literal(, _s_x841, 1, "+", _ctx)
  _x_x840 = kk_string_dup(_s_x841, _ctx); /*string*/
  kk_std_core_types__list _x_x842;
  kk_box_t _x_x843;
  kk_interpret__expr _x_x844;
  kk_string_t _x_x845;
  kk_define_string_literal(, _s_x846, 1, "a", _ctx)
  _x_x845 = kk_string_dup(_s_x846, _ctx); /*string*/
  _x_x844 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x845, _ctx); /*interpret/expr*/
  _x_x843 = kk_interpret__expr_box(_x_x844, _ctx); /*3426*/
  kk_std_core_types__list _x_x847;
  kk_box_t _x_x848;
  kk_interpret__expr _x_x849;
  kk_string_t _x_x850;
  kk_define_string_literal(, _s_x851, 1, "b", _ctx)
  _x_x850 = kk_string_dup(_s_x851, _ctx); /*string*/
  _x_x849 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x850, _ctx); /*interpret/expr*/
  _x_x848 = kk_interpret__expr_box(_x_x849, _ctx); /*3426*/
  _x_x847 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x848, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<3426>*/
  _x_x842 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x843, _x_x847, _ctx); /*list<3426>*/
  _x_x839 = kk_interpret__new_Prim(kk_reuse_null, 0, _x_x840, _x_x842, _ctx); /*interpret/expr*/
  _x_x836 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x837, _x_x839, _ctx); /*interpret/expr*/
  _x_x833 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x834, _x_x836, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x852;
  kk_interpret__expr _x_x853;
  kk_interpret__expr _x_x854;
  kk_string_t _x_x855;
  kk_define_string_literal(, _s_x856, 4, "plus", _ctx)
  _x_x855 = kk_string_dup(_s_x856, _ctx); /*string*/
  _x_x854 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x855, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x857;
  kk_interpret__value _x_x858 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*interpret/value*/
  _x_x857 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x858, _ctx); /*interpret/expr*/
  _x_x853 = kk_interpret__new_App(kk_reuse_null, 0, _x_x854, _x_x857, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x859;
  kk_interpret__value _x_x860 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(2), _ctx); /*interpret/value*/
  _x_x859 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x860, _ctx); /*interpret/expr*/
  _x_x852 = kk_interpret__new_App(kk_reuse_null, 0, _x_x853, _x_x859, _ctx); /*interpret/expr*/
  _x_x830 = kk_interpret__new_Let(kk_reuse_null, 0, _x_x831, _x_x833, _x_x852, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x861 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x829 = kk_interpret_eval_sq_(_x_x830, kk_std_core_types__new_Nil(_ctx), _x_x861, kk_interpret_new_interpret_tests_fun862(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x829, _ctx);
}
static kk_box_t kk_interpret_interpret_tests_fun827(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_0_10006 = kk_std_core_exn_try(kk_interpret_new_interpret_tests_fun828(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x863;
  if (kk_std_core_exn__is_Error(t_0_10006, _ctx)) {
    kk_std_core_exn__exception exn_0_0 = t_0_10006._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0_0, _ctx);
    kk_std_core_exn__error_drop(t_0_10006, _ctx);
    _x_x863 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x350 = t_0_10006._cons.Ok.result;
    kk_interpret__value x_1_0 = kk_interpret__value_unbox(_box_x350, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_1_0, _ctx);
    kk_std_core_exn__error_drop(t_0_10006, _ctx);
    _x_x863 = kk_std_core_types__new_Right(kk_interpret__value_box(x_1_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x863, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun864__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun864(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun864(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun864, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun864(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x865;
  kk_box_t _x_x866;
  kk_interpret__value _x_x867 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(3), _ctx); /*interpret/value*/
  _x_x866 = kk_interpret__value_box(_x_x867, _ctx); /*1018*/
  _x_x865 = kk_std_core_types__new_Right(_x_x866, _ctx); /*either<1017,1018>*/
  return kk_std_core_types__either_box(_x_x865, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun868__t {
  struct kk_function_s _base;
};
static bool kk_interpret_interpret_tests_fun868(kk_function_t _fself, kk_box_t _b_x362, kk_box_t _b_x363, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun868(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun868, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret_interpret_tests_fun868(kk_function_t _fself, kk_box_t _b_x362, kk_box_t _b_x363, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x869 = kk_std_core_types__either_unbox(_b_x362, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x870 = kk_std_core_types__either_unbox(_b_x363, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x869, _x_x870, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun871__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun871(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun871(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun871, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun873__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun873(kk_function_t _fself, kk_box_t _b_x356, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun873(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun873, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun873(kk_function_t _fself, kk_box_t _b_x356, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x874 = kk_std_core_exn__exception_unbox(_b_x356, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x874, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun875__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun875(kk_function_t _fself, kk_box_t _b_x357, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun875(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun875, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun875(kk_function_t _fself, kk_box_t _b_x357, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x876 = kk_interpret__value_unbox(_b_x357, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x876, _ctx);
}
static kk_string_t kk_interpret_interpret_tests_fun871(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x872 = kk_std_core_types__either_unbox(_b_x364, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x872, kk_interpret_new_interpret_tests_fun873(_ctx), kk_interpret_new_interpret_tests_fun875(_ctx), _ctx);
}
static kk_unit_t kk_interpret_interpret_tests_fun826(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_interpret_new_interpret_tests_fun827(_ctx), kk_interpret_new_interpret_tests_fun864(_ctx), kk_interpret_new_interpret_tests_fun868(_ctx), kk_interpret_new_interpret_tests_fun871(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret_interpret_tests_fun823(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x824 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x824, kk_interpret_new_interpret_tests_fun826(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun878__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun878(kk_function_t _fself, kk_box_t _b_x377, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun878(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun878, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun878(kk_function_t _fself, kk_box_t _b_x377, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___0_421 = kk_Unit;
  kk_unit_unbox(_b_x377);
  kk_unit_t _x_x879 = kk_Unit;
  kk_interpret__mlift_interpret_tests_10082(wild___0_421, _ctx);
  return kk_unit_box(_x_x879);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun882__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun882(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun882(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun882, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun885__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_interpret_interpret_tests_fun885(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun885(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun885, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun886__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun886(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun886(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun886, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun887__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun887(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun887(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun887, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun910__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_interpret_tests_fun910(kk_function_t _fself, kk_interpret__value x_4, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun910(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun910, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_interpret_tests_fun910(kk_function_t _fself, kk_interpret__value x_4, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_4;
}
static kk_box_t kk_interpret_interpret_tests_fun887(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x888;
  kk_interpret__expr _x_x889;
  kk_interpret__expr _x_x890;
  kk_string_t _x_x891;
  kk_define_string_literal(, _s_x892, 1, "+", _ctx)
  _x_x891 = kk_string_dup(_s_x892, _ctx); /*string*/
  kk_std_core_types__list _x_x893;
  kk_box_t _x_x894;
  kk_interpret__expr _x_x895;
  kk_interpret__value _x_x896 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(1), _ctx); /*interpret/value*/
  _x_x895 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x896, _ctx); /*interpret/expr*/
  _x_x894 = kk_interpret__expr_box(_x_x895, _ctx); /*3669*/
  kk_std_core_types__list _x_x897;
  kk_box_t _x_x898;
  kk_interpret__expr _x_x899;
  kk_interpret__expr _x_x900;
  kk_string_t _x_x901;
  kk_define_string_literal(, _s_x902, 1, "k", _ctx)
  _x_x901 = kk_string_dup(_s_x902, _ctx); /*string*/
  kk_interpret__expr _x_x903;
  kk_interpret__expr _x_x904;
  kk_string_t _x_x905;
  kk_define_string_literal(, _s_x906, 1, "k", _ctx)
  _x_x905 = kk_string_dup(_s_x906, _ctx); /*string*/
  _x_x904 = kk_interpret__new_Var(kk_reuse_null, 0, _x_x905, _ctx); /*interpret/expr*/
  kk_interpret__expr _x_x907;
  kk_interpret__value _x_x908 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(2), _ctx); /*interpret/value*/
  _x_x907 = kk_interpret__new_Lit(kk_reuse_null, 0, _x_x908, _ctx); /*interpret/expr*/
  _x_x903 = kk_interpret__new_App(kk_reuse_null, 0, _x_x904, _x_x907, _ctx); /*interpret/expr*/
  _x_x900 = kk_interpret__new_Fn(kk_reuse_null, 0, _x_x901, _x_x903, _ctx); /*interpret/expr*/
  _x_x899 = kk_interpret__new_Shift(kk_reuse_null, 0, _x_x900, _ctx); /*interpret/expr*/
  _x_x898 = kk_interpret__expr_box(_x_x899, _ctx); /*3669*/
  _x_x897 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x898, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<3669>*/
  _x_x893 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x894, _x_x897, _ctx); /*list<3669>*/
  _x_x890 = kk_interpret__new_Prim(kk_reuse_null, 0, _x_x891, _x_x893, _ctx); /*interpret/expr*/
  _x_x889 = kk_interpret__new_Reset(kk_reuse_null, 0, _x_x890, _ctx); /*interpret/expr*/
  kk_std_core_types__list _x_x909 = kk_std_core_types__list_dup(kk_interpret_primitive_ops, _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  _x_x888 = kk_interpret_eval_sq_(_x_x889, kk_std_core_types__new_Nil(_ctx), _x_x909, kk_interpret_new_interpret_tests_fun910(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x888, _ctx);
}
static kk_box_t kk_interpret_interpret_tests_fun886(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__error t_1_10008 = kk_std_core_exn_try(kk_interpret_new_interpret_tests_fun887(_ctx), _ctx); /*error<interpret/value>*/;
  kk_std_core_types__either _x_x911;
  if (kk_std_core_exn__is_Error(t_1_10008, _ctx)) {
    kk_std_core_exn__exception exn_0_1 = t_1_10008._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0_1, _ctx);
    kk_std_core_exn__error_drop(t_1_10008, _ctx);
    _x_x911 = kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0_1, _ctx), _ctx); /*either<1017,1018>*/
  }
  else {
    kk_box_t _box_x389 = t_1_10008._cons.Ok.result;
    kk_interpret__value x_3_0 = kk_interpret__value_unbox(_box_x389, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x_3_0, _ctx);
    kk_std_core_exn__error_drop(t_1_10008, _ctx);
    _x_x911 = kk_std_core_types__new_Right(kk_interpret__value_box(x_3_0, _ctx), _ctx); /*either<1017,1018>*/
  }
  return kk_std_core_types__either_box(_x_x911, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun912__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun912(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun912(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun912, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun912(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x913;
  kk_box_t _x_x914;
  kk_interpret__value _x_x915 = kk_interpret__new_Int(kk_reuse_null, 0, kk_integer_from_small(3), _ctx); /*interpret/value*/
  _x_x914 = kk_interpret__value_box(_x_x915, _ctx); /*1018*/
  _x_x913 = kk_std_core_types__new_Right(_x_x914, _ctx); /*either<1017,1018>*/
  return kk_std_core_types__either_box(_x_x913, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun916__t {
  struct kk_function_s _base;
};
static bool kk_interpret_interpret_tests_fun916(kk_function_t _fself, kk_box_t _b_x401, kk_box_t _b_x402, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun916(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun916, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_interpret_interpret_tests_fun916(kk_function_t _fself, kk_box_t _b_x401, kk_box_t _b_x402, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x917 = kk_std_core_types__either_unbox(_b_x401, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  kk_std_core_types__either _x_x918 = kk_std_core_types__either_unbox(_b_x402, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_interpret__lp__eq__eq__rp_(_x_x917, _x_x918, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun919__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun919(kk_function_t _fself, kk_box_t _b_x403, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun919(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun919, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_interpret_interpret_tests_fun921__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun921(kk_function_t _fself, kk_box_t _b_x395, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun921(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun921, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun921(kk_function_t _fself, kk_box_t _b_x395, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_exn__exception _x_x922 = kk_std_core_exn__exception_unbox(_b_x395, KK_OWNED, _ctx); /*exception*/
  return kk_std_core_exn_show(_x_x922, _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun923__t {
  struct kk_function_s _base;
};
static kk_string_t kk_interpret_interpret_tests_fun923(kk_function_t _fself, kk_box_t _b_x396, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun923(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun923, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_interpret_interpret_tests_fun923(kk_function_t _fself, kk_box_t _b_x396, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__value _x_x924 = kk_interpret__value_unbox(_b_x396, KK_OWNED, _ctx); /*interpret/value*/
  return kk_interpret_show(_x_x924, _ctx);
}
static kk_string_t kk_interpret_interpret_tests_fun919(kk_function_t _fself, kk_box_t _b_x403, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__either _x_x920 = kk_std_core_types__either_unbox(_b_x403, KK_OWNED, _ctx); /*either<exception,interpret/value>*/
  return kk_std_core_either_show(_x_x920, kk_interpret_new_interpret_tests_fun921(_ctx), kk_interpret_new_interpret_tests_fun923(_ctx), _ctx);
}


// lift anonymous function
struct kk_interpret_interpret_tests_fun926__t {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_interpret_tests_fun926(kk_function_t _fself, kk_box_t _b_x416, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_interpret_tests_fun926(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_interpret_tests_fun926, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_interpret_tests_fun926(kk_function_t _fself, kk_box_t _b_x416, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___1_422 = kk_Unit;
  kk_unit_unbox(_b_x416);
  kk_unit_t _x_x927 = kk_Unit;
  kk_interpret__mlift_interpret_tests_10081(wild___1_422, _ctx);
  return kk_unit_box(_x_x927);
}
static kk_unit_t kk_interpret_interpret_tests_fun885(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_3_10110 = kk_Unit;
  kk_utest_assert_eq(kk_interpret_new_interpret_tests_fun886(_ctx), kk_interpret_new_interpret_tests_fun912(_ctx), kk_interpret_new_interpret_tests_fun916(_ctx), kk_interpret_new_interpret_tests_fun919(_ctx), _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x925 = kk_std_core_hnd_yield_extend(kk_interpret_new_interpret_tests_fun926(_ctx), _ctx); /*3076*/
    kk_unit_unbox(_x_x925); return kk_Unit;
  }
  {
    kk_interpret__mlift_interpret_tests_10081(x_3_10110, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_interpret_interpret_tests_fun882(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x883 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x883, kk_interpret_new_interpret_tests_fun885(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_interpret_interpret_tests_fun777(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_10104 = kk_Unit;
  kk_string_t _x_x778;
  kk_define_string_literal(, _s_x779, 5, "Apply", _ctx)
  _x_x778 = kk_string_dup(_s_x779, _ctx); /*string*/
  kk_utest_suite(_x_x778, kk_interpret_new_interpret_tests_fun780(_ctx), _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x818 = kk_std_core_hnd_yield_extend(kk_interpret_new_interpret_tests_fun819(_ctx), _ctx); /*3076*/
    kk_unit_unbox(_x_x818); return kk_Unit;
  }
  {
    kk_unit_t x_2_10107 = kk_Unit;
    kk_string_t _x_x821;
    kk_define_string_literal(, _s_x822, 20, "Multiple Application", _ctx)
    _x_x821 = kk_string_dup(_s_x822, _ctx); /*string*/
    kk_utest_suite(_x_x821, kk_interpret_new_interpret_tests_fun823(_ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x877 = kk_std_core_hnd_yield_extend(kk_interpret_new_interpret_tests_fun878(_ctx), _ctx); /*3076*/
      kk_unit_unbox(_x_x877); return kk_Unit;
    }
    {
      kk_string_t _x_x880;
      kk_define_string_literal(, _s_x881, 11, "Shift/Reset", _ctx)
      _x_x880 = kk_string_dup(_s_x881, _ctx); /*string*/
      kk_utest_suite(_x_x880, kk_interpret_new_interpret_tests_fun882(_ctx), _ctx); return kk_Unit;
    }
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
    kk_box_t _x_x596;
    kk_std_core_types__tuple2 _x_x597;
    kk_box_t _x_x598;
    kk_string_t _x_x599;
    kk_define_string_literal(, _s_x600, 1, "+", _ctx)
    _x_x599 = kk_string_dup(_s_x600, _ctx); /*string*/
    _x_x598 = kk_string_box(_x_x599); /*1038*/
    _x_x597 = kk_std_core_types__new_Tuple2(_x_x598, kk_function_box(kk_interpret_new_primitive_ops_fun601(_ctx), _ctx), _ctx); /*(1038, 1039)*/
    _x_x596 = kk_std_core_types__tuple2_box(_x_x597, _ctx); /*3054*/
    kk_interpret_primitive_ops = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x596, kk_std_core_types__new_Nil(_ctx), _ctx); /*forall<e> list<(string, (args : list<interpret/value>) -> <exn|e> interpret/value)>*/
  }
  {
    kk_interpret_interpret_tests = kk_interpret_new_interpret_tests_fun777(_ctx); /*forall<a> () -> <div,utest/test-suite<a>> ()*/
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
