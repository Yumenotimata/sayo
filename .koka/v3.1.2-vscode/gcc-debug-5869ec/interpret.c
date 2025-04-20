// Koka generated module: interpret, koka version: 3.1.2, platform: 64-bit
#include "interpret.h"

kk_string_t kk_interpret_show(kk_interpret__value v, kk_context_t* _ctx) { /* (v : value) -> string */ 
  if (kk_interpret__is_Int(v, _ctx)) {
    struct kk_interpret_Int* _con_x112 = kk_interpret__as_Int(v, _ctx);
    kk_integer_t x = _con_x112->x;
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
    struct kk_interpret_FnVal* _con_x113 = kk_interpret__as_FnVal(v, _ctx);
    kk_string_t x_0 = _con_x113->x;
    kk_interpret__expr body = _con_x113->body;
    kk_std_core_types__list env = _con_x113->env;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_std_core_types__list_drop(env, _ctx);
      kk_interpret__expr_drop(body, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(x_0, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x114;
    kk_define_string_literal(, _s_x115, 3, "fn ", _ctx)
    _x_x114 = kk_string_dup(_s_x115, _ctx); /*string*/
    kk_string_t _x_x116 = kk_std_core_show_string_fs_show(x_0, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x114, _x_x116, _ctx);
  }
  if (kk_interpret__is_Cont(v, _ctx)) {
    struct kk_interpret_Cont* _con_x117 = kk_interpret__as_Cont(v, _ctx);
    kk_function_t c = _con_x117->c;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_function_drop(c, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_define_string_literal(, _s_x118, 4, "cont", _ctx)
    return kk_string_dup(_s_x118, _ctx);
  }
  {
    kk_define_string_literal(, _s_x119, 15, "show: undefined", _ctx)
    return kk_string_dup(_s_x119, _ctx);
  }
}

bool kk_interpret_eq(kk_interpret__value v1, kk_interpret__value v2, kk_context_t* _ctx) { /* (v1 : value, v2 : value) -> bool */ 
  if (kk_interpret__is_Int(v1, _ctx) && kk_interpret__is_Int(v2, _ctx)) {
    struct kk_interpret_Int* _con_x120 = kk_interpret__as_Int(v1, _ctx);
    struct kk_interpret_Int* _con_x121 = kk_interpret__as_Int(v2, _ctx);
    kk_integer_t i1 = _con_x120->x;
    kk_integer_t i2 = _con_x121->x;
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
    bool _brw_x84 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
    kk_integer_drop(i1, _ctx);
    kk_integer_drop(i2, _ctx);
    return _brw_x84;
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
      struct kk_interpret_Int* _con_x122 = kk_interpret__as_Int(r1, _ctx);
      struct kk_interpret_Int* _con_x123 = kk_interpret__as_Int(r2, _ctx);
      kk_integer_t i1 = _con_x122->x;
      kk_integer_t i2 = _con_x123->x;
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
      bool _brw_x83 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
      kk_integer_drop(i1, _ctx);
      kk_integer_drop(i2, _ctx);
      return _brw_x83;
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

kk_interpret__value kk_interpret__mlift_eval_10035_sq_(kk_function_t c_0, kk_string_t i, kk_std_core_types__maybe _y_x10009, kk_context_t* _ctx) { /* (c@0 : cont<value>, i : string, maybe<(string, value)>) -> <console/console,div,exn> value */ 
  if (kk_std_core_types__is_Just(_y_x10009, _ctx)) {
    kk_box_t _box_x8 = _y_x10009._cons.Just.value;
    kk_std_core_types__tuple2 _pat_3 = kk_std_core_types__tuple2_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_box_t _box_x9 = _pat_3.fst;
    kk_box_t _box_x10 = _pat_3.snd;
    kk_interpret__value v = kk_interpret__value_unbox(_box_x10, KK_BORROWED, _ctx);
    kk_string_drop(i, _ctx);
    kk_interpret__value_dup(v, _ctx);
    kk_std_core_types__maybe_drop(_y_x10009, _ctx);
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0, (c_0, v, _ctx), _ctx);
  }
  {
    kk_function_drop(c_0, _ctx);
    kk_string_t _b_x11_13;
    kk_string_t _x_x125;
    kk_define_string_literal(, _s_x126, 19, "undefined variable ", _ctx)
    _x_x125 = kk_string_dup(_s_x126, _ctx); /*string*/
    kk_string_t _x_x127 = kk_std_core_show_string_fs_show(i, _ctx); /*string*/
    _b_x11_13 = kk_std_core_types__lp__plus__plus__rp_(_x_x125, _x_x127, _ctx); /*string*/
    kk_box_t _x_x128 = kk_std_core_exn_throw(_b_x11_13, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x128, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_apply_fun135__t {
  struct kk_function_s _base;
  kk_function_t c;
};
static kk_box_t kk_interpret_apply_fun135(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_apply_fun135(kk_function_t c, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun135__t* _self = kk_function_alloc_as(struct kk_interpret_apply_fun135__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_apply_fun135, kk_context());
  _self->c = c;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_apply_fun135(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun135__t* _self = kk_function_as(struct kk_interpret_apply_fun135__t*, _fself, _ctx);
  kk_function_t c = _self->c; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x136;
  kk_interpret__value _x_x137 = kk_interpret__value_unbox(_b_x24, KK_OWNED, _ctx); /*interpret/value*/
  _x_x136 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, _x_x137, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x136, _ctx);
}

kk_interpret__value kk_interpret_apply(kk_interpret__value f, kk_interpret__value arg, kk_function_t c, kk_context_t* _ctx) { /* (f : value, arg : value, c : cont<value>) -> <pure,console/console> value */ 
  if (kk_interpret__is_FnVal(f, _ctx)) {
    struct kk_interpret_FnVal* _con_x129 = kk_interpret__as_FnVal(f, _ctx);
    kk_string_t x = _con_x129->x;
    kk_interpret__expr body = _con_x129->body;
    kk_std_core_types__list env = _con_x129->env;
    if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
      kk_datatype_ptr_free(f, _ctx);
    }
    else {
      kk_interpret__expr_dup(body, _ctx);
      kk_std_core_types__list_dup(env, _ctx);
      kk_string_dup(x, _ctx);
      kk_datatype_ptr_decref(f, _ctx);
    }
    kk_std_core_types__list env_sq_;
    kk_std_core_types__list _x_x130;
    kk_box_t _x_x131;
    kk_std_core_types__tuple2 _x_x132 = kk_std_core_types__new_Tuple2(kk_string_box(x), kk_interpret__value_box(arg, _ctx), _ctx); /*(1038, 1039)*/
    _x_x131 = kk_std_core_types__tuple2_box(_x_x132, _ctx); /*1024*/
    _x_x130 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x131, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    env_sq_ = kk_std_core_list_append(env, _x_x130, _ctx); /*interpret/env*/
    return kk_interpret_eval_sq_(body, env_sq_, c, _ctx);
  }
  if (kk_interpret__is_Cont(f, _ctx)) {
    struct kk_interpret_Cont* _con_x133 = kk_interpret__as_Cont(f, _ctx);
    kk_function_t c_sq_ = _con_x133->c;
    if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
      kk_datatype_ptr_free(f, _ctx);
    }
    else {
      kk_function_dup(c_sq_, _ctx);
      kk_datatype_ptr_decref(f, _ctx);
    }
    kk_interpret__value x_0_10036 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_sq_, (c_sq_, arg, _ctx), _ctx); /*interpret/value*/;
    if (kk_yielding(kk_context())) {
      kk_interpret__value_drop(x_0_10036, _ctx);
      kk_box_t _x_x134 = kk_std_core_hnd_yield_extend(kk_interpret_new_apply_fun135(c, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x134, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, x_0_10036, _ctx), _ctx);
    }
  }
  {
    kk_interpret__value_drop(f, _ctx);
    kk_function_drop(c, _ctx);
    kk_interpret__value_drop(arg, _ctx);
    kk_box_t _x_x138;
    kk_string_t _x_x139;
    kk_define_string_literal(, _s_x140, 32, "literal was handled as function!", _ctx)
    _x_x139 = kk_string_dup(_s_x140, _ctx); /*string*/
    _x_x138 = kk_std_core_exn_throw(_x_x139, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x138, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_fun143__t_sq_ {
  struct kk_function_s _base;
  kk_string_t i_0;
};
static bool kk_interpret_eval_fun143_sq_(kk_function_t _fself, kk_box_t _b_x34, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun143_sq_(kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun143__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun143__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun143_sq_, kk_context());
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret_eval_fun143_sq_(kk_function_t _fself, kk_box_t _b_x34, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun143__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun143__t_sq_*, _fself, _ctx);
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x81 = kk_std_core_types__tuple2_unbox(_b_x34, KK_OWNED, _ctx); /*(string, interpret/value)*/;
  {
    kk_box_t _box_x30 = _match_x81.fst;
    kk_box_t _box_x31 = _match_x81.snd;
    kk_string_t i_sq_ = kk_string_unbox(_box_x30);
    kk_string_dup(i_sq_, _ctx);
    kk_std_core_types__tuple2_drop(_match_x81, _ctx);
    return kk_string_is_eq(i_0,i_sq_,kk_context());
  }
}


// lift anonymous function
struct kk_interpret_eval_fun145__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_string_t i_0;
};
static kk_box_t kk_interpret_eval_fun145_sq_(kk_function_t _fself, kk_box_t _b_x39, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun145_sq_(kk_function_t c_0_0, kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun145__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun145__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun145_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun145_sq_(kk_function_t _fself, kk_box_t _b_x39, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun145__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun145__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10009_0_71 = kk_std_core_types__maybe_unbox(_b_x39, KK_OWNED, _ctx); /*maybe<(string, interpret/value)>*/;
  kk_interpret__value _x_x146 = kk_interpret__mlift_eval_10035_sq_(c_0_0, i_0, _y_x10009_0_71, _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x146, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun154__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__expr e2;
  kk_std_core_types__list env_0;
  kk_string_t name;
};
static kk_interpret__value kk_interpret_eval_fun154_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun154_sq_(kk_function_t c_0_0, kk_interpret__expr e2, kk_std_core_types__list env_0, kk_string_t name, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun154__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun154__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun154_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->e2 = e2;
  _self->env_0 = env_0;
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_fun154_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun154__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun154__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__expr e2 = _self->e2; /* interpret/expr */
  kk_std_core_types__list env_0 = _self->env_0; /* interpret/env */
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__expr_dup(e2, _ctx);kk_std_core_types__list_dup(env_0, _ctx);kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__list env_0_sq_;
  kk_std_core_types__list _x_x155;
  kk_box_t _x_x156;
  kk_std_core_types__tuple2 _x_x157 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_interpret__value_box(e1_sq_, _ctx), _ctx); /*(1038, 1039)*/
  _x_x156 = kk_std_core_types__tuple2_box(_x_x157, _ctx); /*1024*/
  _x_x155 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x156, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  env_0_sq_ = kk_std_core_list_append(env_0, _x_x155, _ctx); /*interpret/env*/
  return kk_interpret_eval_sq_(e2, env_0_sq_, c_0_0, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun163__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__expr e2_0;
  kk_std_core_types__list env_0;
};
static kk_interpret__value kk_interpret_eval_fun163_sq_(kk_function_t _fself, kk_interpret__value f_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun163_sq_(kk_function_t c_0_0, kk_interpret__expr e2_0, kk_std_core_types__list env_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun163__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun163__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun163_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->e2_0 = e2_0;
  _self->env_0 = env_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun164__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
  kk_interpret__value f_0;
};
static kk_interpret__value kk_interpret_eval_fun164_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun164_sq_(kk_function_t c_0_0, kk_interpret__value f_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun164__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun164__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun164_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  _self->f_0 = f_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__value kk_interpret_eval_fun164_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun164__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun164__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__value f_0 = _self->f_0; /* interpret/value */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__value_dup(f_0, _ctx);}, {}, _ctx)
  return kk_interpret_apply(f_0, arg_0, c_0_0, _ctx);
}
static kk_interpret__value kk_interpret_eval_fun163_sq_(kk_function_t _fself, kk_interpret__value f_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun163__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun163__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_interpret__expr e2_0 = _self->e2_0; /* interpret/expr */
  kk_std_core_types__list env_0 = _self->env_0; /* interpret/env */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);kk_interpret__expr_dup(e2_0, _ctx);kk_std_core_types__list_dup(env_0, _ctx);}, {}, _ctx)
  return kk_interpret_eval_sq_(e2_0, env_0, kk_interpret_new_eval_fun164_sq_(c_0_0, f_0, _ctx), _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun168__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
};
static kk_interpret__value kk_interpret_eval_fun168_sq_(kk_function_t _fself, kk_interpret__value e_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun168_sq_(kk_function_t c_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun168__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun168__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun168_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun174__t_sq_ {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_eval_fun174_sq_(kk_function_t _fself, kk_interpret__value x_1_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun174_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun174_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_eval_fun174_sq_(kk_function_t _fself, kk_interpret__value x_1_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_1_0;
}
static kk_interpret__value kk_interpret_eval_fun168_sq_(kk_function_t _fself, kk_interpret__value e_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun168__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun168__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);}, {}, _ctx)
  if (kk_interpret__is_FnVal(e_sq_, _ctx)) {
    struct kk_interpret_FnVal* _con_x169 = kk_interpret__as_FnVal(e_sq_, _ctx);
    kk_string_t x_sq_ = _con_x169->x;
    kk_interpret__expr body_0 = _con_x169->body;
    kk_std_core_types__list env_0_0_sq_ = _con_x169->env;
    if kk_likely(kk_datatype_ptr_is_unique(e_sq_, _ctx)) {
      kk_datatype_ptr_free(e_sq_, _ctx);
    }
    else {
      kk_interpret__expr_dup(body_0, _ctx);
      kk_std_core_types__list_dup(env_0_0_sq_, _ctx);
      kk_string_dup(x_sq_, _ctx);
      kk_datatype_ptr_decref(e_sq_, _ctx);
    }
    kk_std_core_types__tuple2 _b_x55_64;
    kk_box_t _x_x170;
    kk_interpret__value _x_x171 = kk_interpret__new_Cont(kk_reuse_null, 0, c_0_0, _ctx); /*interpret/value*/
    _x_x170 = kk_interpret__value_box(_x_x171, _ctx); /*1039*/
    _b_x55_64 = kk_std_core_types__new_Tuple2(kk_string_box(x_sq_), _x_x170, _ctx); /*(string, interpret/value)*/
    kk_std_core_types__list _b_x56_65 = kk_std_core_types__new_Nil(_ctx); /*list<(string, interpret/value)>*/;
    kk_std_core_types__list _x_x172;
    kk_std_core_types__list _x_x173 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__tuple2_box(_b_x55_64, _ctx), _b_x56_65, _ctx); /*list<1024>*/
    _x_x172 = kk_std_core_list_append(env_0_0_sq_, _x_x173, _ctx); /*list<1001>*/
    return kk_interpret_eval_sq_(body_0, _x_x172, kk_interpret_new_eval_fun174_sq_(_ctx), _ctx);
  }
  {
    kk_interpret__value_drop(e_sq_, _ctx);
    kk_function_drop(c_0_0, _ctx);
    kk_box_t _x_x175;
    kk_string_t _x_x176;
    kk_define_string_literal(, _s_x177, 16, "unexpected shift", _ctx)
    _x_x176 = kk_string_dup(_s_x177, _ctx); /*string*/
    _x_x175 = kk_std_core_exn_throw(_x_x176, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__value_unbox(_x_x175, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_fun179__t_sq_ {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_eval_fun179_sq_(kk_function_t _fself, kk_interpret__value x_2_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun179_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun179_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_eval_fun179_sq_(kk_function_t _fself, kk_interpret__value x_2_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_2_0;
}


// lift anonymous function
struct kk_interpret_eval_fun181__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_0;
};
static kk_box_t kk_interpret_eval_fun181_sq_(kk_function_t _fself, kk_box_t _b_x60, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun181_sq_(kk_function_t c_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun181__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun181__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun181_sq_, kk_context());
  _self->c_0_0 = c_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun181_sq_(kk_function_t _fself, kk_box_t _b_x60, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun181__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun181__t_sq_*, _fself, _ctx);
  kk_function_t c_0_0 = _self->c_0_0; /* interpret/cont<interpret/value> */
  kk_drop_match(_self, {kk_function_dup(c_0_0, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x182;
  kk_interpret__value _x_x183 = kk_interpret__value_unbox(_b_x60, KK_OWNED, _ctx); /*interpret/value*/
  _x_x182 = kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, _x_x183, _ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x182, _ctx);
}

kk_interpret__value kk_interpret_eval_sq_(kk_interpret__expr e, kk_std_core_types__list env_0, kk_function_t c_0_0, kk_context_t* _ctx) { /* (e : expr, env : env, c : cont<value>) -> <pure,console/console> value */ 
  kk__tailcall: ;
  if (kk_interpret__is_Var(e, _ctx)) {
    struct kk_interpret_Var* _con_x141 = kk_interpret__as_Var(e, _ctx);
    kk_string_t i_0 = _con_x141->x;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(i_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__maybe x_1_10038;
    kk_function_t _x_x142;
    kk_string_dup(i_0, _ctx);
    _x_x142 = kk_interpret_new_eval_fun143_sq_(i_0, _ctx); /*(1001) -> 1002 bool*/
    x_1_10038 = kk_std_core_list_find(env_0, _x_x142, _ctx); /*maybe<(string, interpret/value)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_1_10038, _ctx);
      kk_box_t _x_x144 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun145_sq_(c_0_0, i_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x144, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Just(x_1_10038, _ctx)) {
      kk_box_t _box_x40 = x_1_10038._cons.Just.value;
      kk_std_core_types__tuple2 _pat_3_0 = kk_std_core_types__tuple2_unbox(_box_x40, KK_BORROWED, _ctx);
      kk_box_t _box_x41 = _pat_3_0.fst;
      kk_box_t _box_x42 = _pat_3_0.snd;
      kk_interpret__value v_0 = kk_interpret__value_unbox(_box_x42, KK_BORROWED, _ctx);
      kk_interpret__value_dup(v_0, _ctx);
      kk_std_core_types__maybe_drop(x_1_10038, _ctx);
      kk_string_drop(i_0, _ctx);
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, v_0, _ctx), _ctx);
    }
    {
      kk_function_drop(c_0_0, _ctx);
      kk_string_t _b_x43_62;
      kk_string_t _x_x147;
      kk_define_string_literal(, _s_x148, 19, "undefined variable ", _ctx)
      _x_x147 = kk_string_dup(_s_x148, _ctx); /*string*/
      kk_string_t _x_x149 = kk_std_core_show_string_fs_show(i_0, _ctx); /*string*/
      _b_x43_62 = kk_std_core_types__lp__plus__plus__rp_(_x_x147, _x_x149, _ctx); /*string*/
      kk_box_t _x_x150 = kk_std_core_exn_throw(_b_x43_62, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
      return kk_interpret__value_unbox(_x_x150, KK_OWNED, _ctx);
    }
  }
  if (kk_interpret__is_Let(e, _ctx)) {
    struct kk_interpret_Let* _con_x151 = kk_interpret__as_Let(e, _ctx);
    kk_string_t name = _con_x151->name;
    kk_interpret__expr e1 = _con_x151->e1;
    kk_interpret__expr e2 = _con_x151->e2;
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
      kk_std_core_types__list _x_x152 = kk_std_core_types__list_dup(env_0, _ctx); /*interpret/env*/
      kk_function_t _x_x153 = kk_interpret_new_eval_fun154_sq_(c_0_0, e2, env_0, name, _ctx); /*(e1' : interpret/value) -> <div,exn,console/console> interpret/value*/
      e = e1;
      env_0 = _x_x152;
      c_0_0 = _x_x153;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Fn(e, _ctx)) {
    struct kk_interpret_Fn* _con_x158 = kk_interpret__as_Fn(e, _ctx);
    kk_string_t x_0_0 = _con_x158->x;
    kk_interpret__expr e1_0 = _con_x158->e1;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_0, _ctx);
      kk_string_dup(x_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__value _x_x159 = kk_interpret__new_FnVal(kk_reuse_null, 0, x_0_0, e1_0, env_0, _ctx); /*interpret/value*/
    return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, _x_x159, _ctx), _ctx);
  }
  if (kk_interpret__is_App(e, _ctx)) {
    struct kk_interpret_App* _con_x160 = kk_interpret__as_App(e, _ctx);
    kk_interpret__expr e1_1 = _con_x160->e1;
    kk_interpret__expr e2_0 = _con_x160->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_1, _ctx);
      kk_interpret__expr_dup(e2_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x161 = kk_std_core_types__list_dup(env_0, _ctx); /*interpret/env*/
      kk_function_t _x_x162 = kk_interpret_new_eval_fun163_sq_(c_0_0, e2_0, env_0, _ctx); /*(f@0 : interpret/value) -> <div,exn,console/console> interpret/value*/
      e = e1_1;
      env_0 = _x_x161;
      c_0_0 = _x_x162;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Lit(e, _ctx)) {
    struct kk_interpret_Lit* _con_x165 = kk_interpret__as_Lit(e, _ctx);
    kk_interpret__value value = _con_x165->value;
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
    struct kk_interpret_Shift* _con_x166 = kk_interpret__as_Shift(e, _ctx);
    kk_interpret__expr x_0_0_0 = _con_x166->e;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(x_0_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_function_t _x_x167 = kk_interpret_new_eval_fun168_sq_(c_0_0, _ctx); /*(e' : interpret/value) -> <div,exn,console/console> interpret/value*/
      e = x_0_0_0;
      c_0_0 = _x_x167;
      goto kk__tailcall;
    }
  }
  {
    struct kk_interpret_Reset* _con_x178 = kk_interpret__as_Reset(e, _ctx);
    kk_interpret__expr e_0 = _con_x178->e;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__value x_2_10041 = kk_interpret_eval_sq_(e_0, env_0, kk_interpret_new_eval_fun179_sq_(_ctx), _ctx); /*interpret/value*/;
    if (kk_yielding(kk_context())) {
      kk_interpret__value_drop(x_2_10041, _ctx);
      kk_box_t _x_x180 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun181_sq_(c_0_0, _ctx), _ctx); /*3003*/
      return kk_interpret__value_unbox(_x_x180, KK_OWNED, _ctx);
    }
    {
      return kk_function_call(kk_interpret__value, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_0, (c_0_0, x_2_10041, _ctx), _ctx);
    }
  }
}
extern kk_interpret__value kk_interpret_eval_fun184(kk_function_t _fself, kk_interpret__value x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x;
}


// lift anonymous function
struct kk_interpret_run_fun185__t {
  struct kk_function_s _base;
  kk_interpret__expr e;
};
static kk_box_t kk_interpret_run_fun185(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun185(kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_run_fun185__t* _self = kk_function_alloc_as(struct kk_interpret_run_fun185__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_run_fun185, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_run_fun187__t {
  struct kk_function_s _base;
};
static kk_interpret__value kk_interpret_run_fun187(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun187(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_run_fun187, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__value kk_interpret_run_fun187(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return x_0;
}
static kk_box_t kk_interpret_run_fun185(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_interpret_run_fun185__t* _self = kk_function_as(struct kk_interpret_run_fun185__t*, _fself, _ctx);
  kk_interpret__expr e = _self->e; /* interpret/expr */
  kk_drop_match(_self, {kk_interpret__expr_dup(e, _ctx);}, {}, _ctx)
  kk_interpret__value _x_x186 = kk_interpret_eval_sq_(e, kk_std_core_types__new_Nil(_ctx), kk_interpret_new_run_fun187(_ctx), _ctx); /*interpret/value*/
  return kk_interpret__value_box(_x_x186, _ctx);
}

kk_std_core_types__either kk_interpret_run(kk_interpret__expr e, kk_context_t* _ctx) { /* (e : expr) -> <console/console,div> either<exception,value> */ 
  kk_std_core_exn__error t_10002 = kk_std_core_exn_try(kk_interpret_new_run_fun185(e, _ctx), _ctx); /*error<interpret/value>*/;
  if (kk_std_core_exn__is_Error(t_10002, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10002._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10002, _ctx);
    return kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx);
  }
  {
    kk_box_t _box_x75 = t_10002._cons.Ok.result;
    kk_interpret__value x = kk_interpret__value_unbox(_box_x75, KK_BORROWED, _ctx);
    kk_interpret__value_dup(x, _ctx);
    kk_std_core_exn__error_drop(t_10002, _ctx);
    return kk_std_core_types__new_Right(kk_interpret__value_box(x, _ctx), _ctx);
  }
}

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
  kk_etest__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_interpret__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_etest__done(_ctx);
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
