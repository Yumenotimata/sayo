// Koka generated module: interpret, koka version: 3.1.2, platform: 64-bit
#include "interpret.h"

kk_interpret__hanop kk_interpret_hanop_fs__copy(kk_interpret__hanop _this, kk_std_core_types__optional hk, kk_std_core_types__optional he, kk_std_core_types__optional hf, kk_context_t* _ctx) { /* (hanop, hk : ? string, he : ? string, hf : ? expr) -> hanop */ 
  kk_string_t _x_x240;
  if (kk_std_core_types__is_Optional(hk, _ctx)) {
    kk_box_t _box_x0 = hk._cons._Optional.value;
    kk_string_t _uniq_hk_273 = kk_string_unbox(_box_x0);
    kk_string_dup(_uniq_hk_273, _ctx);
    kk_std_core_types__optional_drop(hk, _ctx);
    _x_x240 = _uniq_hk_273; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(hk, _ctx);
    {
      struct kk_interpret_Hanop* _con_x241 = kk_interpret__as_Hanop(_this, _ctx);
      kk_string_t _x = _con_x241->hk;
      kk_string_dup(_x, _ctx);
      _x_x240 = _x; /*string*/
    }
  }
  kk_string_t _x_x242;
  if (kk_std_core_types__is_Optional(he, _ctx)) {
    kk_box_t _box_x1 = he._cons._Optional.value;
    kk_string_t _uniq_he_280 = kk_string_unbox(_box_x1);
    kk_string_dup(_uniq_he_280, _ctx);
    kk_std_core_types__optional_drop(he, _ctx);
    _x_x242 = _uniq_he_280; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(he, _ctx);
    {
      struct kk_interpret_Hanop* _con_x243 = kk_interpret__as_Hanop(_this, _ctx);
      kk_string_t _x_0 = _con_x243->he;
      kk_string_dup(_x_0, _ctx);
      _x_x242 = _x_0; /*string*/
    }
  }
  kk_interpret__expr _x_x244;
  if (kk_std_core_types__is_Optional(hf, _ctx)) {
    kk_box_t _box_x2 = hf._cons._Optional.value;
    kk_interpret__expr _uniq_hf_287 = kk_interpret__expr_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_interpret__expr_dup(_uniq_hf_287, _ctx);
    kk_std_core_types__optional_drop(hf, _ctx);
    kk_interpret__hanop_drop(_this, _ctx);
    _x_x244 = _uniq_hf_287; /*interpret/expr*/
  }
  else {
    kk_std_core_types__optional_drop(hf, _ctx);
    {
      struct kk_interpret_Hanop* _con_x245 = kk_interpret__as_Hanop(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x245->hk;
      kk_string_t _pat_1_3 = _con_x245->he;
      kk_interpret__expr _x_1 = _con_x245->hf;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_interpret__expr_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x244 = _x_1; /*interpret/expr*/
    }
  }
  return kk_interpret__new_Hanop(kk_reuse_null, 0, _x_x240, _x_x242, _x_x244, _ctx);
}

kk_string_t kk_interpret_show(kk_interpret__value v, kk_context_t* _ctx) { /* (v : value) -> string */ 
  if (kk_interpret__is_Int(v, _ctx)) {
    struct kk_interpret_Int* _con_x246 = kk_interpret__as_Int(v, _ctx);
    kk_integer_t x = _con_x246->x;
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
    struct kk_interpret_FnVal* _con_x247 = kk_interpret__as_FnVal(v, _ctx);
    kk_string_t x_0 = _con_x247->x;
    kk_interpret__expr body = _con_x247->body;
    kk_std_core_types__list env = _con_x247->env;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_std_core_types__list_drop(env, _ctx);
      kk_interpret__expr_drop(body, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(x_0, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x248;
    kk_define_string_literal(, _s_x249, 3, "fn ", _ctx)
    _x_x248 = kk_string_dup(_s_x249, _ctx); /*string*/
    kk_string_t _x_x250 = kk_std_core_show_string_fs_show(x_0, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x248, _x_x250, _ctx);
  }
  {
    kk_interpret__value_drop(v, _ctx);
    kk_define_string_literal(, _s_x251, 15, "show: undefined", _ctx)
    return kk_string_dup(_s_x251, _ctx);
  }
}

bool kk_interpret_eq(kk_interpret__value v1, kk_interpret__value v2, kk_context_t* _ctx) { /* (v1 : value, v2 : value) -> bool */ 
  if (kk_interpret__is_Int(v1, _ctx) && kk_interpret__is_Int(v2, _ctx)) {
    struct kk_interpret_Int* _con_x252 = kk_interpret__as_Int(v1, _ctx);
    struct kk_interpret_Int* _con_x253 = kk_interpret__as_Int(v2, _ctx);
    kk_integer_t i1 = _con_x252->x;
    kk_integer_t i2 = _con_x253->x;
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
    bool _brw_x189 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
    kk_integer_drop(i1, _ctx);
    kk_integer_drop(i2, _ctx);
    return _brw_x189;
  }
  {
    kk_interpret__value_drop(v2, _ctx);
    kk_interpret__value_drop(v1, _ctx);
    return false;
  }
}

bool kk_interpret__lp__eq__eq__rp_(kk_std_core_types__either e1, kk_std_core_types__either e2, kk_context_t* _ctx) { /* (e1 : either<exception,value>, e2 : either<exception,value>) -> bool */ 
  if (kk_std_core_types__is_Right(e1, _ctx) && kk_std_core_types__is_Right(e2, _ctx)) {
    kk_box_t _box_x3 = e1._cons.Right.right;
    kk_box_t _box_x4 = e2._cons.Right.right;
    kk_interpret__value r1 = kk_interpret__value_unbox(_box_x3, KK_BORROWED, _ctx);
    kk_interpret__value r2 = kk_interpret__value_unbox(_box_x4, KK_BORROWED, _ctx);
    kk_interpret__value_dup(r2, _ctx);
    kk_std_core_types__either_drop(e2, _ctx);
    kk_interpret__value_dup(r1, _ctx);
    kk_std_core_types__either_drop(e1, _ctx);
    if (kk_interpret__is_Int(r1, _ctx) && kk_interpret__is_Int(r2, _ctx)) {
      struct kk_interpret_Int* _con_x254 = kk_interpret__as_Int(r1, _ctx);
      struct kk_interpret_Int* _con_x255 = kk_interpret__as_Int(r2, _ctx);
      kk_integer_t i1 = _con_x254->x;
      kk_integer_t i2 = _con_x255->x;
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
      bool _brw_x188 = kk_integer_eq_borrow(i1,i2,kk_context()); /*bool*/;
      kk_integer_drop(i1, _ctx);
      kk_integer_drop(i2, _ctx);
      return _brw_x188;
    }
    {
      kk_interpret__value_drop(r2, _ctx);
      kk_interpret__value_drop(r1, _ctx);
      return false;
    }
  }
  if (kk_std_core_types__is_Left(e1, _ctx) && kk_std_core_types__is_Left(e2, _ctx)) {
    kk_box_t _box_x5 = e1._cons.Left.left;
    kk_box_t _box_x6 = e2._cons.Left.left;
    kk_std_core_exn__exception e1_0 = kk_std_core_exn__exception_unbox(_box_x5, KK_BORROWED, _ctx);
    kk_std_core_exn__exception e2_0 = kk_std_core_exn__exception_unbox(_box_x6, KK_BORROWED, _ctx);
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

kk_interpret__computation kk_interpret__mlift_apply_10049(kk_function_t c, kk_interpret__computation _y_x10007, kk_context_t* _ctx) { /* (c : cont, computation) -> <div,exn,console/console> computation */ 
  if (kk_interpret__is_Return(_y_x10007, _ctx)) {
    struct kk_interpret_Return* _con_x257 = kk_interpret__as_Return(_y_x10007, _ctx);
    kk_interpret__value c_0_sq_ = _con_x257->v;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10007, _ctx)) {
      kk_datatype_ptr_free(_y_x10007, _ctx);
    }
    else {
      kk_interpret__value_dup(c_0_sq_, _ctx);
      kk_datatype_ptr_decref(_y_x10007, _ctx);
    }
    return kk_function_call(kk_interpret__computation, (kk_function_t, kk_interpret__value, kk_context_t*), c, (c, c_0_sq_, _ctx), _ctx);
  }
  {
    struct kk_interpret_OpCall* _con_x258 = kk_interpret__as_OpCall(_y_x10007, _ctx);
    kk_string_t _pat_3 = _con_x258->op;
    kk_string_t _pat_4 = _con_x258->k;
    kk_interpret__value _pat_5 = _con_x258->v;
    kk_function_t _pat_6 = _con_x258->c;
    kk_function_drop(c, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10007, _ctx)) {
      kk_function_drop(_pat_6, _ctx);
      kk_interpret__value_drop(_pat_5, _ctx);
      kk_string_drop(_pat_4, _ctx);
      kk_string_drop(_pat_3, _ctx);
      kk_datatype_ptr_free(_y_x10007, _ctx);
    }
    else {
      kk_datatype_ptr_decref(_y_x10007, _ctx);
    }
    kk_box_t _x_x259;
    kk_string_t _x_x260;
    kk_define_string_literal(, _s_x261, 7, "not yet", _ctx)
    _x_x260 = kk_string_dup(_s_x261, _ctx); /*string*/
    _x_x259 = kk_std_core_exn_throw(_x_x260, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__computation_unbox(_x_x259, KK_OWNED, _ctx);
  }
}
 
// monadic lift

kk_interpret__computation kk_interpret__mlift_eval_10050_sq_(kk_function_t c_0, kk_string_t i, kk_std_core_types__maybe _y_x10014, kk_context_t* _ctx) { /* (c@0 : cont, i : string, maybe<(string, value)>) -> <console/console,div,exn> computation */ 
  if (kk_std_core_types__is_Just(_y_x10014, _ctx)) {
    kk_box_t _box_x15 = _y_x10014._cons.Just.value;
    kk_std_core_types__tuple2 _pat_3_0 = kk_std_core_types__tuple2_unbox(_box_x15, KK_BORROWED, _ctx);
    kk_box_t _box_x16 = _pat_3_0.fst;
    kk_box_t _box_x17 = _pat_3_0.snd;
    kk_interpret__value v = kk_interpret__value_unbox(_box_x17, KK_BORROWED, _ctx);
    kk_string_drop(i, _ctx);
    kk_interpret__value_dup(v, _ctx);
    kk_std_core_types__maybe_drop(_y_x10014, _ctx);
    return kk_function_call(kk_interpret__computation, (kk_function_t, kk_interpret__value, kk_context_t*), c_0, (c_0, v, _ctx), _ctx);
  }
  {
    kk_function_drop(c_0, _ctx);
    kk_string_t _b_x18_20;
    kk_string_t _x_x262;
    kk_define_string_literal(, _s_x263, 19, "undefined variable ", _ctx)
    _x_x262 = kk_string_dup(_s_x263, _ctx); /*string*/
    kk_string_t _x_x264 = kk_std_core_show_string_fs_show(i, _ctx); /*string*/
    _b_x18_20 = kk_std_core_types__lp__plus__plus__rp_(_x_x262, _x_x264, _ctx); /*string*/
    kk_box_t _x_x265 = kk_std_core_exn_throw(_b_x18_20, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__computation_unbox(_x_x265, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_eval_10051_fun268__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_eval_10051_fun268_sq_(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_10051_fun268_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_eval_10051_fun268_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_eval_10051_fun268_sq_(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x269;
  kk_interpret__hanop _match_x187 = kk_interpret__hanop_unbox(_b_x25, KK_OWNED, _ctx); /*interpret/hanop*/;
  {
    struct kk_interpret_Hanop* _con_x270 = kk_interpret__as_Hanop(_match_x187, _ctx);
    kk_string_t _pat_0_1 = _con_x270->hk;
    kk_string_t _x = _con_x270->he;
    kk_interpret__expr _pat_1_1 = _con_x270->hf;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x187, _ctx)) {
      kk_interpret__expr_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x187, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x187, _ctx);
    }
    _x_x269 = _x; /*string*/
  }
  return kk_string_box(_x_x269);
}


// lift anonymous function
struct kk_interpret__mlift_eval_10051_fun277__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_eval_10051_fun277_sq_(kk_function_t _fself, kk_box_t _b_x39, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_10051_fun277_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_eval_10051_fun277_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_eval_10051_fun277_sq_(kk_function_t _fself, kk_box_t _b_x39, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x278;
  kk_interpret__hanop _match_x186 = kk_interpret__hanop_unbox(_b_x39, KK_OWNED, _ctx); /*interpret/hanop*/;
  {
    struct kk_interpret_Hanop* _con_x279 = kk_interpret__as_Hanop(_match_x186, _ctx);
    kk_string_t _x_0 = _con_x279->hk;
    kk_string_t _pat_0_2 = _con_x279->he;
    kk_interpret__expr _pat_1_2 = _con_x279->hf;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x186, _ctx)) {
      kk_interpret__expr_drop(_pat_1_2, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(_match_x186, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x186, _ctx);
    }
    _x_x278 = _x_0; /*string*/
  }
  return kk_string_box(_x_x278);
}


// lift anonymous function
struct kk_interpret__mlift_eval_10051_fun289__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret__mlift_eval_10051_fun289_sq_(kk_function_t _fself, kk_box_t _b_x53, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_10051_fun289_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret__mlift_eval_10051_fun289_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret__mlift_eval_10051_fun289_sq_(kk_function_t _fself, kk_box_t _b_x53, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__expr _x_x290;
  kk_interpret__hanop hanop_2_60 = kk_interpret__hanop_unbox(_b_x53, KK_OWNED, _ctx); /*interpret/hanop*/;
  {
    struct kk_interpret_Hanop* _con_x291 = kk_interpret__as_Hanop(hanop_2_60, _ctx);
    kk_string_t _pat_0_3 = _con_x291->hk;
    kk_string_t _pat_1_3 = _con_x291->he;
    kk_interpret__expr _x_1 = _con_x291->hf;
    if kk_likely(kk_datatype_ptr_is_unique(hanop_2_60, _ctx)) {
      kk_string_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(hanop_2_60, _ctx);
    }
    else {
      kk_interpret__expr_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(hanop_2_60, _ctx);
    }
    _x_x290 = _x_1; /*interpret/expr*/
  }
  return kk_interpret__expr_box(_x_x290, _ctx);
}

kk_interpret__computation kk_interpret__mlift_eval_10051_sq_(kk_function_t c_0_0, kk_interpret__value e_3, kk_std_core_types__list env_0, kk_function_t k_sq_, kk_std_core_types__maybe _y_x10027, kk_context_t* _ctx) { /* (c@0 : cont, e@3 : value, env@0 : env, k' : (value) -> <div,exn,console/console> computation, maybe<hanop>) -> <console/console,div,exn> computation */ 
  if (kk_std_core_types__is_Just(_y_x10027, _ctx)) {
    kk_box_t _box_x22 = _y_x10027._cons.Just.value;
    kk_interpret__hanop hanop = kk_interpret__hanop_unbox(_box_x22, KK_BORROWED, _ctx);
    struct kk_interpret_Hanop* _con_x266 = kk_interpret__as_Hanop(hanop, _ctx);
    kk_interpret__hanop_dup(hanop, _ctx);
    kk_std_core_types__maybe_drop(_y_x10027, _ctx);
    kk_string_t _b_x26_28;
    kk_box_t _x_x267;
    kk_box_t _x_x271;
    kk_interpret__hanop _x_x272 = kk_interpret__hanop_dup(hanop, _ctx); /*interpret/hanop*/
    _x_x271 = kk_interpret__hanop_box(_x_x272, _ctx); /*1000*/
    _x_x267 = kk_std_core_hnd__open_none1(kk_interpret__new_mlift_eval_10051_fun268_sq_(_ctx), _x_x271, _ctx); /*1001*/
    _b_x26_28 = kk_string_unbox(_x_x267); /*string*/
    kk_std_core_types__list env_0_0_sq_;
    kk_std_core_types__list _x_x273;
    kk_box_t _x_x274;
    kk_std_core_types__tuple2 _x_x275 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x26_28), kk_interpret__value_box(e_3, _ctx), _ctx); /*(1038, 1039)*/
    _x_x274 = kk_std_core_types__tuple2_box(_x_x275, _ctx); /*1024*/
    _x_x273 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x274, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    env_0_0_sq_ = kk_std_core_list_append(env_0, _x_x273, _ctx); /*interpret/env*/
    kk_string_t _b_x40_42;
    kk_box_t _x_x276;
    kk_box_t _x_x280;
    kk_interpret__hanop _x_x281 = kk_interpret__hanop_dup(hanop, _ctx); /*interpret/hanop*/
    _x_x280 = kk_interpret__hanop_box(_x_x281, _ctx); /*1000*/
    _x_x276 = kk_std_core_hnd__open_none1(kk_interpret__new_mlift_eval_10051_fun277_sq_(_ctx), _x_x280, _ctx); /*1001*/
    _b_x40_42 = kk_string_unbox(_x_x276); /*string*/
    kk_std_core_types__list env_sq__sq_;
    kk_std_core_types__list _x_x282;
    kk_box_t _x_x283;
    kk_std_core_types__tuple2 _x_x284;
    kk_box_t _x_x285;
    kk_interpret__value _x_x286 = kk_interpret__new_Cont(kk_reuse_null, 0, k_sq_, _ctx); /*interpret/value*/
    _x_x285 = kk_interpret__value_box(_x_x286, _ctx); /*1039*/
    _x_x284 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x40_42), _x_x285, _ctx); /*(1038, 1039)*/
    _x_x283 = kk_std_core_types__tuple2_box(_x_x284, _ctx); /*1024*/
    _x_x282 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x283, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    env_sq__sq_ = kk_std_core_list_append(env_0_0_sq_, _x_x282, _ctx); /*interpret/env*/
    kk_interpret__expr _x_x287;
    kk_box_t _x_x288 = kk_std_core_hnd__open_none1(kk_interpret__new_mlift_eval_10051_fun289_sq_(_ctx), kk_interpret__hanop_box(hanop, _ctx), _ctx); /*1001*/
    _x_x287 = kk_interpret__expr_unbox(_x_x288, KK_OWNED, _ctx); /*interpret/expr*/
    return kk_interpret_eval_sq_(_x_x287, env_sq__sq_, c_0_0, _ctx);
  }
  {
    kk_function_drop(k_sq_, _ctx);
    kk_std_core_types__list_drop(env_0, _ctx);
    kk_interpret__value_drop(e_3, _ctx);
    kk_function_drop(c_0_0, _ctx);
    kk_box_t _x_x292;
    kk_string_t _x_x293;
    kk_define_string_literal(, _s_x294, 29, "undefined handler was applied", _ctx)
    _x_x293 = kk_string_dup(_s_x294, _ctx); /*string*/
    _x_x292 = kk_std_core_exn_throw(_x_x293, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__computation_unbox(_x_x292, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_interpret__mlift_eval_10052_fun298__t_sq_ {
  struct kk_function_s _base;
  kk_string_t op_0;
};
static bool kk_interpret__mlift_eval_10052_fun298_sq_(kk_function_t _fself, kk_box_t _b_x63, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_10052_fun298_sq_(kk_string_t op_0, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_10052_fun298__t_sq_* _self = kk_function_alloc_as(struct kk_interpret__mlift_eval_10052_fun298__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret__mlift_eval_10052_fun298_sq_, kk_context());
  _self->op_0 = op_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret__mlift_eval_10052_fun298_sq_(kk_function_t _fself, kk_box_t _b_x63, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_10052_fun298__t_sq_* _self = kk_function_as(struct kk_interpret__mlift_eval_10052_fun298__t_sq_*, _fself, _ctx);
  kk_string_t op_0 = _self->op_0; /* string */
  kk_drop_match(_self, {kk_string_dup(op_0, _ctx);}, {}, _ctx)
  kk_string_t _x_x299 = kk_string_unbox(_b_x63); /*string*/
  return kk_string_is_eq(op_0,_x_x299,kk_context());
}


// lift anonymous function
struct kk_interpret__mlift_eval_10052_fun301__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_1;
  kk_interpret__value e_3_0;
  kk_std_core_types__list env_0_0;
  kk_function_t k_0_sq_;
};
static kk_box_t kk_interpret__mlift_eval_10052_fun301_sq_(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx);
static kk_function_t kk_interpret__new_mlift_eval_10052_fun301_sq_(kk_function_t c_0_1, kk_interpret__value e_3_0, kk_std_core_types__list env_0_0, kk_function_t k_0_sq_, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_10052_fun301__t_sq_* _self = kk_function_alloc_as(struct kk_interpret__mlift_eval_10052_fun301__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret__mlift_eval_10052_fun301_sq_, kk_context());
  _self->c_0_1 = c_0_1;
  _self->e_3_0 = e_3_0;
  _self->env_0_0 = env_0_0;
  _self->k_0_sq_ = k_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret__mlift_eval_10052_fun301_sq_(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx) {
  struct kk_interpret__mlift_eval_10052_fun301__t_sq_* _self = kk_function_as(struct kk_interpret__mlift_eval_10052_fun301__t_sq_*, _fself, _ctx);
  kk_function_t c_0_1 = _self->c_0_1; /* interpret/cont */
  kk_interpret__value e_3_0 = _self->e_3_0; /* interpret/value */
  kk_std_core_types__list env_0_0 = _self->env_0_0; /* interpret/env */
  kk_function_t k_0_sq_ = _self->k_0_sq_; /* (interpret/value) -> <div,exn,console/console> interpret/computation */
  kk_drop_match(_self, {kk_function_dup(c_0_1, _ctx);kk_interpret__value_dup(e_3_0, _ctx);kk_std_core_types__list_dup(env_0_0, _ctx);kk_function_dup(k_0_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10027_0_70 = kk_std_core_types__maybe_unbox(_b_x68, KK_OWNED, _ctx); /*maybe<interpret/hanop>*/;
  kk_interpret__computation _x_x302 = kk_interpret__mlift_eval_10051_sq_(c_0_1, e_3_0, env_0_0, k_0_sq_, _y_x10027_0_70, _ctx); /*interpret/computation*/
  return kk_interpret__computation_box(_x_x302, _ctx);
}

kk_interpret__computation kk_interpret__mlift_eval_10052_sq_(kk_function_t c_0_1, kk_std_core_types__list env_0_0, kk_std_core_types__list hs, kk_interpret__computation e_0_sq_, kk_context_t* _ctx) { /* (c@0 : cont, env@0 : env, hs : list<(string, hanop)>, e@0' : computation) -> <div,exn,console/console> computation */ 
  if (kk_interpret__is_Return(e_0_sq_, _ctx)) {
    struct kk_interpret_Return* _con_x295 = kk_interpret__as_Return(e_0_sq_, _ctx);
    kk_interpret__value e_2 = _con_x295->v;
    kk_std_core_types__list_drop(hs, _ctx);
    kk_std_core_types__list_drop(env_0_0, _ctx);
    kk_reuse_t _ru_x203 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e_0_sq_, _ctx)) {
      _ru_x203 = (kk_datatype_ptr_reuse(e_0_sq_, _ctx));
    }
    else {
      kk_interpret__value_dup(e_2, _ctx);
      kk_datatype_ptr_decref(e_0_sq_, _ctx);
    }
    kk_function_drop(c_0_1, _ctx);
    if kk_likely(_ru_x203!=NULL) {
      struct kk_interpret_Return* _con_x296 = (struct kk_interpret_Return*)_ru_x203;
      return kk_interpret__base_Return(_con_x296, _ctx);
    }
    {
      return kk_interpret__new_Return(kk_reuse_null, 0, e_2, _ctx);
    }
  }
  {
    struct kk_interpret_OpCall* _con_x297 = kk_interpret__as_OpCall(e_0_sq_, _ctx);
    kk_string_t op_0 = _con_x297->op;
    kk_string_t k_0 = _con_x297->k;
    kk_interpret__value e_3_0 = _con_x297->v;
    kk_function_t k_0_sq_ = _con_x297->c;
    if kk_likely(kk_datatype_ptr_is_unique(e_0_sq_, _ctx)) {
      kk_string_drop(k_0, _ctx);
      kk_datatype_ptr_free(e_0_sq_, _ctx);
    }
    else {
      kk_interpret__value_dup(e_3_0, _ctx);
      kk_function_dup(k_0_sq_, _ctx);
      kk_string_dup(op_0, _ctx);
      kk_datatype_ptr_decref(e_0_sq_, _ctx);
    }
    kk_std_core_types__maybe x_10053 = kk_std_core_list_lookup(hs, kk_interpret__new_mlift_eval_10052_fun298_sq_(op_0, _ctx), _ctx); /*maybe<interpret/hanop>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_10053, _ctx);
      kk_box_t _x_x300 = kk_std_core_hnd_yield_extend(kk_interpret__new_mlift_eval_10052_fun301_sq_(c_0_1, e_3_0, env_0_0, k_0_sq_, _ctx), _ctx); /*3003*/
      return kk_interpret__computation_unbox(_x_x300, KK_OWNED, _ctx);
    }
    {
      return kk_interpret__mlift_eval_10051_sq_(c_0_1, e_3_0, env_0_0, k_0_sq_, x_10053, _ctx);
    }
  }
}


// lift anonymous function
struct kk_interpret_apply_fun309__t {
  struct kk_function_s _base;
  kk_function_t c_1;
};
static kk_box_t kk_interpret_apply_fun309(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_apply_fun309(kk_function_t c_1, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun309__t* _self = kk_function_alloc_as(struct kk_interpret_apply_fun309__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_apply_fun309, kk_context());
  _self->c_1 = c_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_apply_fun309(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  struct kk_interpret_apply_fun309__t* _self = kk_function_as(struct kk_interpret_apply_fun309__t*, _fself, _ctx);
  kk_function_t c_1 = _self->c_1; /* interpret/cont */
  kk_drop_match(_self, {kk_function_dup(c_1, _ctx);}, {}, _ctx)
  kk_interpret__computation _y_x10007_0_90 = kk_interpret__computation_unbox(_b_x80, KK_OWNED, _ctx); /*interpret/computation*/;
  kk_interpret__computation _x_x310 = kk_interpret__mlift_apply_10049(c_1, _y_x10007_0_90, _ctx); /*interpret/computation*/
  return kk_interpret__computation_box(_x_x310, _ctx);
}

kk_interpret__computation kk_interpret_apply(kk_interpret__value f, kk_interpret__value arg, kk_function_t c_1, kk_context_t* _ctx) { /* (f : value, arg : value, c : cont) -> <pure,console/console> computation */ 
  if (kk_interpret__is_FnVal(f, _ctx)) {
    struct kk_interpret_FnVal* _con_x303 = kk_interpret__as_FnVal(f, _ctx);
    kk_string_t x_0 = _con_x303->x;
    kk_interpret__expr body = _con_x303->body;
    kk_std_core_types__list env = _con_x303->env;
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
    kk_std_core_types__list _x_x304;
    kk_box_t _x_x305;
    kk_std_core_types__tuple2 _x_x306 = kk_std_core_types__new_Tuple2(kk_string_box(x_0), kk_interpret__value_box(arg, _ctx), _ctx); /*(1038, 1039)*/
    _x_x305 = kk_std_core_types__tuple2_box(_x_x306, _ctx); /*1024*/
    _x_x304 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x305, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    env_sq_ = kk_std_core_list_append(env, _x_x304, _ctx); /*interpret/env*/
    return kk_interpret_eval_sq_(body, env_sq_, c_1, _ctx);
  }
  if (kk_interpret__is_Cont(f, _ctx)) {
    struct kk_interpret_Cont* _con_x307 = kk_interpret__as_Cont(f, _ctx);
    kk_function_t c_sq_ = _con_x307->cont;
    if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
      kk_datatype_ptr_free(f, _ctx);
    }
    else {
      kk_function_dup(c_sq_, _ctx);
      kk_datatype_ptr_decref(f, _ctx);
    }
    kk_interpret__computation x_1_10055 = kk_function_call(kk_interpret__computation, (kk_function_t, kk_interpret__value, kk_context_t*), c_sq_, (c_sq_, arg, _ctx), _ctx); /*interpret/computation*/;
    if (kk_yielding(kk_context())) {
      kk_interpret__computation_drop(x_1_10055, _ctx);
      kk_box_t _x_x308 = kk_std_core_hnd_yield_extend(kk_interpret_new_apply_fun309(c_1, _ctx), _ctx); /*3003*/
      return kk_interpret__computation_unbox(_x_x308, KK_OWNED, _ctx);
    }
    if (kk_interpret__is_Return(x_1_10055, _ctx)) {
      struct kk_interpret_Return* _con_x311 = kk_interpret__as_Return(x_1_10055, _ctx);
      kk_interpret__value c_0_0_sq_ = _con_x311->v;
      if kk_likely(kk_datatype_ptr_is_unique(x_1_10055, _ctx)) {
        kk_datatype_ptr_free(x_1_10055, _ctx);
      }
      else {
        kk_interpret__value_dup(c_0_0_sq_, _ctx);
        kk_datatype_ptr_decref(x_1_10055, _ctx);
      }
      return kk_function_call(kk_interpret__computation, (kk_function_t, kk_interpret__value, kk_context_t*), c_1, (c_1, c_0_0_sq_, _ctx), _ctx);
    }
    {
      struct kk_interpret_OpCall* _con_x312 = kk_interpret__as_OpCall(x_1_10055, _ctx);
      kk_string_t _pat_3_1 = _con_x312->op;
      kk_string_t _pat_4_1 = _con_x312->k;
      kk_interpret__value _pat_5_1 = _con_x312->v;
      kk_function_t _pat_6_0 = _con_x312->c;
      if kk_likely(kk_datatype_ptr_is_unique(x_1_10055, _ctx)) {
        kk_function_drop(_pat_6_0, _ctx);
        kk_interpret__value_drop(_pat_5_1, _ctx);
        kk_string_drop(_pat_4_1, _ctx);
        kk_string_drop(_pat_3_1, _ctx);
        kk_datatype_ptr_free(x_1_10055, _ctx);
      }
      else {
        kk_datatype_ptr_decref(x_1_10055, _ctx);
      }
      kk_function_drop(c_1, _ctx);
      kk_box_t _x_x313;
      kk_string_t _x_x314;
      kk_define_string_literal(, _s_x315, 7, "not yet", _ctx)
      _x_x314 = kk_string_dup(_s_x315, _ctx); /*string*/
      _x_x313 = kk_std_core_exn_throw(_x_x314, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
      return kk_interpret__computation_unbox(_x_x313, KK_OWNED, _ctx);
    }
  }
  {
    kk_interpret__value_drop(f, _ctx);
    kk_function_drop(c_1, _ctx);
    kk_interpret__value_drop(arg, _ctx);
    kk_box_t _x_x316;
    kk_string_t _x_x317;
    kk_define_string_literal(, _s_x318, 32, "literal was handled as function!", _ctx)
    _x_x317 = kk_string_dup(_s_x318, _ctx); /*string*/
    _x_x316 = kk_std_core_exn_throw(_x_x317, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
    return kk_interpret__computation_unbox(_x_x316, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_interpret_eval_fun321__t_sq_ {
  struct kk_function_s _base;
  kk_string_t i_0;
};
static bool kk_interpret_eval_fun321_sq_(kk_function_t _fself, kk_box_t _b_x95, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun321_sq_(kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun321__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun321__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun321_sq_, kk_context());
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret_eval_fun321_sq_(kk_function_t _fself, kk_box_t _b_x95, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun321__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun321__t_sq_*, _fself, _ctx);
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x183 = kk_std_core_types__tuple2_unbox(_b_x95, KK_OWNED, _ctx); /*(string, interpret/value)*/;
  {
    kk_box_t _box_x91 = _match_x183.fst;
    kk_box_t _box_x92 = _match_x183.snd;
    kk_string_t i_sq_ = kk_string_unbox(_box_x91);
    kk_string_dup(i_sq_, _ctx);
    kk_std_core_types__tuple2_drop(_match_x183, _ctx);
    return kk_string_is_eq(i_0,i_sq_,kk_context());
  }
}


// lift anonymous function
struct kk_interpret_eval_fun323__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_2;
  kk_string_t i_0;
};
static kk_box_t kk_interpret_eval_fun323_sq_(kk_function_t _fself, kk_box_t _b_x100, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun323_sq_(kk_function_t c_0_2, kk_string_t i_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun323__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun323__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun323_sq_, kk_context());
  _self->c_0_2 = c_0_2;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun323_sq_(kk_function_t _fself, kk_box_t _b_x100, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun323__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun323__t_sq_*, _fself, _ctx);
  kk_function_t c_0_2 = _self->c_0_2; /* interpret/cont */
  kk_string_t i_0 = _self->i_0; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_2, _ctx);kk_string_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10014_0_167 = kk_std_core_types__maybe_unbox(_b_x100, KK_OWNED, _ctx); /*maybe<(string, interpret/value)>*/;
  kk_interpret__computation _x_x324 = kk_interpret__mlift_eval_10050_sq_(c_0_2, i_0, _y_x10014_0_167, _ctx); /*interpret/computation*/
  return kk_interpret__computation_box(_x_x324, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun332__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_2;
  kk_interpret__expr e2;
  kk_std_core_types__list env_0_1;
  kk_string_t name;
};
static kk_interpret__computation kk_interpret_eval_fun332_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun332_sq_(kk_function_t c_0_2, kk_interpret__expr e2, kk_std_core_types__list env_0_1, kk_string_t name, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun332__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun332__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun332_sq_, kk_context());
  _self->c_0_2 = c_0_2;
  _self->e2 = e2;
  _self->env_0_1 = env_0_1;
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__computation kk_interpret_eval_fun332_sq_(kk_function_t _fself, kk_interpret__value e1_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun332__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun332__t_sq_*, _fself, _ctx);
  kk_function_t c_0_2 = _self->c_0_2; /* interpret/cont */
  kk_interpret__expr e2 = _self->e2; /* interpret/expr */
  kk_std_core_types__list env_0_1 = _self->env_0_1; /* interpret/env */
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_2, _ctx);kk_interpret__expr_dup(e2, _ctx);kk_std_core_types__list_dup(env_0_1, _ctx);kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__list env_0_sq_;
  kk_std_core_types__list _x_x333;
  kk_box_t _x_x334;
  kk_std_core_types__tuple2 _x_x335 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_interpret__value_box(e1_sq_, _ctx), _ctx); /*(1038, 1039)*/
  _x_x334 = kk_std_core_types__tuple2_box(_x_x335, _ctx); /*1024*/
  _x_x333 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x334, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
  env_0_sq_ = kk_std_core_list_append(env_0_1, _x_x333, _ctx); /*interpret/env*/
  return kk_interpret_eval_sq_(e2, env_0_sq_, c_0_2, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun341__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_2;
  kk_interpret__expr e2_0;
  kk_std_core_types__list env_0_1;
};
static kk_interpret__computation kk_interpret_eval_fun341_sq_(kk_function_t _fself, kk_interpret__value f_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun341_sq_(kk_function_t c_0_2, kk_interpret__expr e2_0, kk_std_core_types__list env_0_1, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun341__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun341__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun341_sq_, kk_context());
  _self->c_0_2 = c_0_2;
  _self->e2_0 = e2_0;
  _self->env_0_1 = env_0_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_eval_fun342__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_2;
  kk_interpret__value f_0;
};
static kk_interpret__computation kk_interpret_eval_fun342_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun342_sq_(kk_function_t c_0_2, kk_interpret__value f_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun342__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun342__t_sq_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun342_sq_, kk_context());
  _self->c_0_2 = c_0_2;
  _self->f_0 = f_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__computation kk_interpret_eval_fun342_sq_(kk_function_t _fself, kk_interpret__value arg_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun342__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun342__t_sq_*, _fself, _ctx);
  kk_function_t c_0_2 = _self->c_0_2; /* interpret/cont */
  kk_interpret__value f_0 = _self->f_0; /* interpret/value */
  kk_drop_match(_self, {kk_function_dup(c_0_2, _ctx);kk_interpret__value_dup(f_0, _ctx);}, {}, _ctx)
  return kk_interpret_apply(f_0, arg_0, c_0_2, _ctx);
}
static kk_interpret__computation kk_interpret_eval_fun341_sq_(kk_function_t _fself, kk_interpret__value f_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun341__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun341__t_sq_*, _fself, _ctx);
  kk_function_t c_0_2 = _self->c_0_2; /* interpret/cont */
  kk_interpret__expr e2_0 = _self->e2_0; /* interpret/expr */
  kk_std_core_types__list env_0_1 = _self->env_0_1; /* interpret/env */
  kk_drop_match(_self, {kk_function_dup(c_0_2, _ctx);kk_interpret__expr_dup(e2_0, _ctx);kk_std_core_types__list_dup(env_0_1, _ctx);}, {}, _ctx)
  return kk_interpret_eval_sq_(e2_0, env_0_1, kk_interpret_new_eval_fun342_sq_(c_0_2, f_0, _ctx), _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun346__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_2;
  kk_string_t k;
  kk_string_t op;
};
static kk_interpret__computation kk_interpret_eval_fun346_sq_(kk_function_t _fself, kk_interpret__value e_sq_, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun346_sq_(kk_function_t c_0_2, kk_string_t k, kk_string_t op, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun346__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun346__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun346_sq_, kk_context());
  _self->c_0_2 = c_0_2;
  _self->k = k;
  _self->op = op;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_interpret__computation kk_interpret_eval_fun346_sq_(kk_function_t _fself, kk_interpret__value e_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun346__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun346__t_sq_*, _fself, _ctx);
  kk_function_t c_0_2 = _self->c_0_2; /* interpret/cont */
  kk_string_t k = _self->k; /* string */
  kk_string_t op = _self->op; /* string */
  kk_drop_match(_self, {kk_function_dup(c_0_2, _ctx);kk_string_dup(k, _ctx);kk_string_dup(op, _ctx);}, {}, _ctx)
  return kk_interpret__new_OpCall(kk_reuse_null, 0, op, k, e_sq_, c_0_2, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun349__t_sq_ {
  struct kk_function_s _base;
};
static kk_interpret__computation kk_interpret_eval_fun349_sq_(kk_function_t _fself, kk_interpret__value x_0_0_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun349_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun349_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__computation kk_interpret_eval_fun349_sq_(kk_function_t _fself, kk_interpret__value x_0_0_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_interpret__new_Return(kk_reuse_null, 0, x_0_0_0, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun351__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_2;
  kk_std_core_types__list env_0_1;
  kk_std_core_types__list hs_0;
};
static kk_box_t kk_interpret_eval_fun351_sq_(kk_function_t _fself, kk_box_t _b_x115, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun351_sq_(kk_function_t c_0_2, kk_std_core_types__list env_0_1, kk_std_core_types__list hs_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun351__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun351__t_sq_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun351_sq_, kk_context());
  _self->c_0_2 = c_0_2;
  _self->env_0_1 = env_0_1;
  _self->hs_0 = hs_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun351_sq_(kk_function_t _fself, kk_box_t _b_x115, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun351__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun351__t_sq_*, _fself, _ctx);
  kk_function_t c_0_2 = _self->c_0_2; /* interpret/cont */
  kk_std_core_types__list env_0_1 = _self->env_0_1; /* interpret/env */
  kk_std_core_types__list hs_0 = _self->hs_0; /* list<(string, interpret/hanop)> */
  kk_drop_match(_self, {kk_function_dup(c_0_2, _ctx);kk_std_core_types__list_dup(env_0_1, _ctx);kk_std_core_types__list_dup(hs_0, _ctx);}, {}, _ctx)
  kk_interpret__computation e_0_0_168_sq_ = kk_interpret__computation_unbox(_b_x115, KK_OWNED, _ctx); /*interpret/computation*/;
  kk_interpret__computation _x_x352 = kk_interpret__mlift_eval_10052_sq_(c_0_2, env_0_1, hs_0, e_0_0_168_sq_, _ctx); /*interpret/computation*/
  return kk_interpret__computation_box(_x_x352, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun356__t_sq_ {
  struct kk_function_s _base;
  kk_string_t op_0_0;
};
static bool kk_interpret_eval_fun356_sq_(kk_function_t _fself, kk_box_t _b_x118, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun356_sq_(kk_string_t op_0_0, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun356__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun356__t_sq_, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun356_sq_, kk_context());
  _self->op_0_0 = op_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_interpret_eval_fun356_sq_(kk_function_t _fself, kk_box_t _b_x118, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun356__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun356__t_sq_*, _fself, _ctx);
  kk_string_t op_0_0 = _self->op_0_0; /* string */
  kk_drop_match(_self, {kk_string_dup(op_0_0, _ctx);}, {}, _ctx)
  kk_string_t _x_x357 = kk_string_unbox(_b_x118); /*string*/
  return kk_string_is_eq(op_0_0,_x_x357,kk_context());
}


// lift anonymous function
struct kk_interpret_eval_fun359__t_sq_ {
  struct kk_function_s _base;
  kk_function_t c_0_2;
  kk_interpret__value e_3_1;
  kk_std_core_types__list env_0_1;
  kk_function_t k_1_sq_;
};
static kk_box_t kk_interpret_eval_fun359_sq_(kk_function_t _fself, kk_box_t _b_x123, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun359_sq_(kk_function_t c_0_2, kk_interpret__value e_3_1, kk_std_core_types__list env_0_1, kk_function_t k_1_sq_, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun359__t_sq_* _self = kk_function_alloc_as(struct kk_interpret_eval_fun359__t_sq_, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_eval_fun359_sq_, kk_context());
  _self->c_0_2 = c_0_2;
  _self->e_3_1 = e_3_1;
  _self->env_0_1 = env_0_1;
  _self->k_1_sq_ = k_1_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_interpret_eval_fun359_sq_(kk_function_t _fself, kk_box_t _b_x123, kk_context_t* _ctx) {
  struct kk_interpret_eval_fun359__t_sq_* _self = kk_function_as(struct kk_interpret_eval_fun359__t_sq_*, _fself, _ctx);
  kk_function_t c_0_2 = _self->c_0_2; /* interpret/cont */
  kk_interpret__value e_3_1 = _self->e_3_1; /* interpret/value */
  kk_std_core_types__list env_0_1 = _self->env_0_1; /* interpret/env */
  kk_function_t k_1_sq_ = _self->k_1_sq_; /* (interpret/value) -> <div,exn,console/console> interpret/computation */
  kk_drop_match(_self, {kk_function_dup(c_0_2, _ctx);kk_interpret__value_dup(e_3_1, _ctx);kk_std_core_types__list_dup(env_0_1, _ctx);kk_function_dup(k_1_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10027_1_169 = kk_std_core_types__maybe_unbox(_b_x123, KK_OWNED, _ctx); /*maybe<interpret/hanop>*/;
  kk_interpret__computation _x_x360 = kk_interpret__mlift_eval_10051_sq_(c_0_2, e_3_1, env_0_1, k_1_sq_, _y_x10027_1_169, _ctx); /*interpret/computation*/
  return kk_interpret__computation_box(_x_x360, _ctx);
}


// lift anonymous function
struct kk_interpret_eval_fun363__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_eval_fun363_sq_(kk_function_t _fself, kk_box_t _b_x127, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun363_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun363_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_eval_fun363_sq_(kk_function_t _fself, kk_box_t _b_x127, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x364;
  kk_interpret__hanop _match_x181 = kk_interpret__hanop_unbox(_b_x127, KK_OWNED, _ctx); /*interpret/hanop*/;
  {
    struct kk_interpret_Hanop* _con_x365 = kk_interpret__as_Hanop(_match_x181, _ctx);
    kk_string_t _pat_0_1_0 = _con_x365->hk;
    kk_string_t _x_2 = _con_x365->he;
    kk_interpret__expr _pat_1_1_0 = _con_x365->hf;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x181, _ctx)) {
      kk_interpret__expr_drop(_pat_1_1_0, _ctx);
      kk_string_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(_match_x181, _ctx);
    }
    else {
      kk_string_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x181, _ctx);
    }
    _x_x364 = _x_2; /*string*/
  }
  return kk_string_box(_x_x364);
}


// lift anonymous function
struct kk_interpret_eval_fun372__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_eval_fun372_sq_(kk_function_t _fself, kk_box_t _b_x141, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun372_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun372_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_eval_fun372_sq_(kk_function_t _fself, kk_box_t _b_x141, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x373;
  kk_interpret__hanop _match_x180 = kk_interpret__hanop_unbox(_b_x141, KK_OWNED, _ctx); /*interpret/hanop*/;
  {
    struct kk_interpret_Hanop* _con_x374 = kk_interpret__as_Hanop(_match_x180, _ctx);
    kk_string_t _x_0_0 = _con_x374->hk;
    kk_string_t _pat_0_2_0 = _con_x374->he;
    kk_interpret__expr _pat_1_2_0 = _con_x374->hf;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x180, _ctx)) {
      kk_interpret__expr_drop(_pat_1_2_0, _ctx);
      kk_string_drop(_pat_0_2_0, _ctx);
      kk_datatype_ptr_free(_match_x180, _ctx);
    }
    else {
      kk_string_dup(_x_0_0, _ctx);
      kk_datatype_ptr_decref(_match_x180, _ctx);
    }
    _x_x373 = _x_0_0; /*string*/
  }
  return kk_string_box(_x_x373);
}


// lift anonymous function
struct kk_interpret_eval_fun384__t_sq_ {
  struct kk_function_s _base;
};
static kk_box_t kk_interpret_eval_fun384_sq_(kk_function_t _fself, kk_box_t _b_x155, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_eval_fun384_sq_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_eval_fun384_sq_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_interpret_eval_fun384_sq_(kk_function_t _fself, kk_box_t _b_x155, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_interpret__expr _x_x385;
  kk_interpret__hanop hanop_2_0_170 = kk_interpret__hanop_unbox(_b_x155, KK_OWNED, _ctx); /*interpret/hanop*/;
  {
    struct kk_interpret_Hanop* _con_x386 = kk_interpret__as_Hanop(hanop_2_0_170, _ctx);
    kk_string_t _pat_0_3_0 = _con_x386->hk;
    kk_string_t _pat_1_3_0 = _con_x386->he;
    kk_interpret__expr _x_1_0 = _con_x386->hf;
    if kk_likely(kk_datatype_ptr_is_unique(hanop_2_0_170, _ctx)) {
      kk_string_drop(_pat_1_3_0, _ctx);
      kk_string_drop(_pat_0_3_0, _ctx);
      kk_datatype_ptr_free(hanop_2_0_170, _ctx);
    }
    else {
      kk_interpret__expr_dup(_x_1_0, _ctx);
      kk_datatype_ptr_decref(hanop_2_0_170, _ctx);
    }
    _x_x385 = _x_1_0; /*interpret/expr*/
  }
  return kk_interpret__expr_box(_x_x385, _ctx);
}

kk_interpret__computation kk_interpret_eval_sq_(kk_interpret__expr e, kk_std_core_types__list env_0_1, kk_function_t c_0_2, kk_context_t* _ctx) { /* (e : expr, env : env, c : cont) -> <pure,console/console> computation */ 
  kk__tailcall: ;
  if (kk_interpret__is_Var(e, _ctx)) {
    struct kk_interpret_Var* _con_x319 = kk_interpret__as_Var(e, _ctx);
    kk_string_t i_0 = _con_x319->x;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_string_dup(i_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_std_core_types__maybe x_2_10058;
    kk_function_t _x_x320;
    kk_string_dup(i_0, _ctx);
    _x_x320 = kk_interpret_new_eval_fun321_sq_(i_0, _ctx); /*(1001) -> 1002 bool*/
    x_2_10058 = kk_std_core_list_find(env_0_1, _x_x320, _ctx); /*maybe<(string, interpret/value)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_2_10058, _ctx);
      kk_box_t _x_x322 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun323_sq_(c_0_2, i_0, _ctx), _ctx); /*3003*/
      return kk_interpret__computation_unbox(_x_x322, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Just(x_2_10058, _ctx)) {
      kk_box_t _box_x101 = x_2_10058._cons.Just.value;
      kk_std_core_types__tuple2 _pat_3_0_0 = kk_std_core_types__tuple2_unbox(_box_x101, KK_BORROWED, _ctx);
      kk_box_t _box_x102 = _pat_3_0_0.fst;
      kk_box_t _box_x103 = _pat_3_0_0.snd;
      kk_interpret__value v_0 = kk_interpret__value_unbox(_box_x103, KK_BORROWED, _ctx);
      kk_interpret__value_dup(v_0, _ctx);
      kk_std_core_types__maybe_drop(x_2_10058, _ctx);
      kk_string_drop(i_0, _ctx);
      return kk_function_call(kk_interpret__computation, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_2, (c_0_2, v_0, _ctx), _ctx);
    }
    {
      kk_function_drop(c_0_2, _ctx);
      kk_string_t _b_x104_159;
      kk_string_t _x_x325;
      kk_define_string_literal(, _s_x326, 19, "undefined variable ", _ctx)
      _x_x325 = kk_string_dup(_s_x326, _ctx); /*string*/
      kk_string_t _x_x327 = kk_std_core_show_string_fs_show(i_0, _ctx); /*string*/
      _b_x104_159 = kk_std_core_types__lp__plus__plus__rp_(_x_x325, _x_x327, _ctx); /*string*/
      kk_box_t _x_x328 = kk_std_core_exn_throw(_b_x104_159, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
      return kk_interpret__computation_unbox(_x_x328, KK_OWNED, _ctx);
    }
  }
  if (kk_interpret__is_Let(e, _ctx)) {
    struct kk_interpret_Let* _con_x329 = kk_interpret__as_Let(e, _ctx);
    kk_string_t name = _con_x329->name;
    kk_interpret__expr e1 = _con_x329->e1;
    kk_interpret__expr e2 = _con_x329->e2;
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
      kk_std_core_types__list _x_x330 = kk_std_core_types__list_dup(env_0_1, _ctx); /*interpret/env*/
      kk_function_t _x_x331 = kk_interpret_new_eval_fun332_sq_(c_0_2, e2, env_0_1, name, _ctx); /*(e1' : interpret/value) -> <div,exn,console/console> interpret/computation*/
      e = e1;
      env_0_1 = _x_x330;
      c_0_2 = _x_x331;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Fn(e, _ctx)) {
    struct kk_interpret_Fn* _con_x336 = kk_interpret__as_Fn(e, _ctx);
    kk_string_t x_0_0 = _con_x336->x;
    kk_interpret__expr e1_0 = _con_x336->e1;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_0, _ctx);
      kk_string_dup(x_0_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__value _x_x337 = kk_interpret__new_FnVal(kk_reuse_null, 0, x_0_0, e1_0, env_0_1, _ctx); /*interpret/value*/
    return kk_function_call(kk_interpret__computation, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_2, (c_0_2, _x_x337, _ctx), _ctx);
  }
  if (kk_interpret__is_App(e, _ctx)) {
    struct kk_interpret_App* _con_x338 = kk_interpret__as_App(e, _ctx);
    kk_interpret__expr e1_1 = _con_x338->e1;
    kk_interpret__expr e2_0 = _con_x338->e2;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e1_1, _ctx);
      kk_interpret__expr_dup(e2_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x339 = kk_std_core_types__list_dup(env_0_1, _ctx); /*interpret/env*/
      kk_function_t _x_x340 = kk_interpret_new_eval_fun341_sq_(c_0_2, e2_0, env_0_1, _ctx); /*(f@0 : interpret/value) -> <div,exn,console/console> interpret/computation*/
      e = e1_1;
      env_0_1 = _x_x339;
      c_0_2 = _x_x340;
      goto kk__tailcall;
    }
  }
  if (kk_interpret__is_Lit(e, _ctx)) {
    struct kk_interpret_Lit* _con_x343 = kk_interpret__as_Lit(e, _ctx);
    kk_interpret__value value = _con_x343->value;
    kk_std_core_types__list_drop(env_0_1, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__value_dup(value, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    return kk_function_call(kk_interpret__computation, (kk_function_t, kk_interpret__value, kk_context_t*), c_0_2, (c_0_2, value, _ctx), _ctx);
  }
  if (kk_interpret__is_Op(e, _ctx)) {
    struct kk_interpret_Op* _con_x344 = kk_interpret__as_Op(e, _ctx);
    kk_string_t op = _con_x344->op;
    kk_string_t k = _con_x344->k;
    kk_interpret__expr e_0 = _con_x344->e;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      kk_datatype_ptr_free(e, _ctx);
    }
    else {
      kk_interpret__expr_dup(e_0, _ctx);
      kk_string_dup(k, _ctx);
      kk_string_dup(op, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    { // tailcall
      kk_function_t _x_x345 = kk_interpret_new_eval_fun346_sq_(c_0_2, k, op, _ctx); /*(e' : interpret/value) -> <div,exn,console/console> interpret/computation*/
      e = e_0;
      c_0_2 = _x_x345;
      goto kk__tailcall;
    }
  }
  {
    struct kk_interpret_Handle* _con_x347 = kk_interpret__as_Handle(e, _ctx);
    kk_std_core_types__list hs_0 = _con_x347->hs;
    kk_interpret__expr e_1 = _con_x347->e;
    kk_reuse_t _ru_x215 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(e, _ctx)) {
      _ru_x215 = (kk_datatype_ptr_reuse(e, _ctx));
    }
    else {
      kk_interpret__expr_dup(e_1, _ctx);
      kk_std_core_types__list_dup(hs_0, _ctx);
      kk_datatype_ptr_decref(e, _ctx);
    }
    kk_interpret__computation x_3_10061;
    kk_std_core_types__list _x_x348 = kk_std_core_types__list_dup(env_0_1, _ctx); /*interpret/env*/
    x_3_10061 = kk_interpret_eval_sq_(e_1, _x_x348, kk_interpret_new_eval_fun349_sq_(_ctx), _ctx); /*interpret/computation*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x215,kk_context());
      kk_interpret__computation_drop(x_3_10061, _ctx);
      kk_box_t _x_x350 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun351_sq_(c_0_2, env_0_1, hs_0, _ctx), _ctx); /*3003*/
      return kk_interpret__computation_unbox(_x_x350, KK_OWNED, _ctx);
    }
    if (kk_interpret__is_Return(x_3_10061, _ctx)) {
      struct kk_interpret_Return* _con_x353 = kk_interpret__as_Return(x_3_10061, _ctx);
      kk_interpret__value e_2_0 = _con_x353->v;
      kk_reuse_drop(_ru_x215,kk_context());
      kk_reuse_t _ru_x216 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(x_3_10061, _ctx)) {
        _ru_x216 = (kk_datatype_ptr_reuse(x_3_10061, _ctx));
      }
      else {
        kk_interpret__value_dup(e_2_0, _ctx);
        kk_datatype_ptr_decref(x_3_10061, _ctx);
      }
      kk_std_core_types__list_drop(hs_0, _ctx);
      kk_std_core_types__list_drop(env_0_1, _ctx);
      kk_function_drop(c_0_2, _ctx);
      if kk_likely(_ru_x216!=NULL) {
        struct kk_interpret_Return* _con_x354 = (struct kk_interpret_Return*)_ru_x216;
        return kk_interpret__base_Return(_con_x354, _ctx);
      }
      {
        return kk_interpret__new_Return(kk_reuse_null, 0, e_2_0, _ctx);
      }
    }
    {
      struct kk_interpret_OpCall* _con_x355 = kk_interpret__as_OpCall(x_3_10061, _ctx);
      kk_string_t op_0_0 = _con_x355->op;
      kk_string_t k_0_0 = _con_x355->k;
      kk_interpret__value e_3_1 = _con_x355->v;
      kk_function_t k_1_sq_ = _con_x355->c;
      if kk_likely(kk_datatype_ptr_is_unique(x_3_10061, _ctx)) {
        kk_string_drop(k_0_0, _ctx);
        kk_datatype_ptr_free(x_3_10061, _ctx);
      }
      else {
        kk_interpret__value_dup(e_3_1, _ctx);
        kk_function_dup(k_1_sq_, _ctx);
        kk_string_dup(op_0_0, _ctx);
        kk_datatype_ptr_decref(x_3_10061, _ctx);
      }
      kk_std_core_types__maybe x_4_10064 = kk_std_core_list_lookup(hs_0, kk_interpret_new_eval_fun356_sq_(op_0_0, _ctx), _ctx); /*maybe<interpret/hanop>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x215,kk_context());
        kk_std_core_types__maybe_drop(x_4_10064, _ctx);
        kk_box_t _x_x358 = kk_std_core_hnd_yield_extend(kk_interpret_new_eval_fun359_sq_(c_0_2, e_3_1, env_0_1, k_1_sq_, _ctx), _ctx); /*3003*/
        return kk_interpret__computation_unbox(_x_x358, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Just(x_4_10064, _ctx)) {
        kk_box_t _box_x124 = x_4_10064._cons.Just.value;
        kk_interpret__hanop hanop_3 = kk_interpret__hanop_unbox(_box_x124, KK_BORROWED, _ctx);
        struct kk_interpret_Hanop* _con_x361 = kk_interpret__as_Hanop(hanop_3, _ctx);
        kk_interpret__hanop_dup(hanop_3, _ctx);
        kk_std_core_types__maybe_drop(x_4_10064, _ctx);
        kk_string_t _b_x128_130;
        kk_box_t _x_x362;
        kk_box_t _x_x366;
        kk_interpret__hanop _x_x367 = kk_interpret__hanop_dup(hanop_3, _ctx); /*interpret/hanop*/
        _x_x366 = kk_interpret__hanop_box(_x_x367, _ctx); /*1000*/
        _x_x362 = kk_std_core_hnd__open_none1(kk_interpret_new_eval_fun363_sq_(_ctx), _x_x366, _ctx); /*1001*/
        _b_x128_130 = kk_string_unbox(_x_x362); /*string*/
        kk_std_core_types__list env_0_0_0_sq_;
        kk_std_core_types__list _x_x368;
        kk_box_t _x_x369;
        kk_std_core_types__tuple2 _x_x370 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x128_130), kk_interpret__value_box(e_3_1, _ctx), _ctx); /*(1038, 1039)*/
        _x_x369 = kk_std_core_types__tuple2_box(_x_x370, _ctx); /*1024*/
        _x_x368 = kk_std_core_types__new_Cons(_ru_x215, 0, _x_x369, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
        env_0_0_0_sq_ = kk_std_core_list_append(env_0_1, _x_x368, _ctx); /*interpret/env*/
        kk_string_t _b_x142_144;
        kk_box_t _x_x371;
        kk_box_t _x_x375;
        kk_interpret__hanop _x_x376 = kk_interpret__hanop_dup(hanop_3, _ctx); /*interpret/hanop*/
        _x_x375 = kk_interpret__hanop_box(_x_x376, _ctx); /*1000*/
        _x_x371 = kk_std_core_hnd__open_none1(kk_interpret_new_eval_fun372_sq_(_ctx), _x_x375, _ctx); /*1001*/
        _b_x142_144 = kk_string_unbox(_x_x371); /*string*/
        kk_std_core_types__list env_0_sq__sq_;
        kk_std_core_types__list _x_x377;
        kk_box_t _x_x378;
        kk_std_core_types__tuple2 _x_x379;
        kk_box_t _x_x380;
        kk_interpret__value _x_x381 = kk_interpret__new_Cont(kk_reuse_null, 0, k_1_sq_, _ctx); /*interpret/value*/
        _x_x380 = kk_interpret__value_box(_x_x381, _ctx); /*1039*/
        _x_x379 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x142_144), _x_x380, _ctx); /*(1038, 1039)*/
        _x_x378 = kk_std_core_types__tuple2_box(_x_x379, _ctx); /*1024*/
        _x_x377 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x378, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
        env_0_sq__sq_ = kk_std_core_list_append(env_0_0_0_sq_, _x_x377, _ctx); /*interpret/env*/
        { // tailcall
          kk_interpret__expr _x_x382;
          kk_box_t _x_x383 = kk_std_core_hnd__open_none1(kk_interpret_new_eval_fun384_sq_(_ctx), kk_interpret__hanop_box(hanop_3, _ctx), _ctx); /*1001*/
          _x_x382 = kk_interpret__expr_unbox(_x_x383, KK_OWNED, _ctx); /*interpret/expr*/
          e = _x_x382;
          env_0_1 = env_0_sq__sq_;
          goto kk__tailcall;
        }
      }
      {
        kk_reuse_drop(_ru_x215,kk_context());
        kk_function_drop(k_1_sq_, _ctx);
        kk_std_core_types__list_drop(env_0_1, _ctx);
        kk_interpret__value_drop(e_3_1, _ctx);
        kk_function_drop(c_0_2, _ctx);
        kk_box_t _x_x387;
        kk_string_t _x_x388;
        kk_define_string_literal(, _s_x389, 29, "undefined handler was applied", _ctx)
        _x_x388 = kk_string_dup(_s_x389, _ctx); /*string*/
        _x_x387 = kk_std_core_exn_throw(_x_x388, kk_std_core_types__new_None(_ctx), _ctx); /*1000*/
        return kk_interpret__computation_unbox(_x_x387, KK_OWNED, _ctx);
      }
    }
  }
}
extern kk_interpret__computation kk_interpret_eval_fun390(kk_function_t _fself, kk_interpret__value x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_interpret__new_Return(kk_reuse_null, 0, x, _ctx);
}


// lift anonymous function
struct kk_interpret_run_fun391__t {
  struct kk_function_s _base;
  kk_interpret__expr e;
};
static kk_box_t kk_interpret_run_fun391(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun391(kk_interpret__expr e, kk_context_t* _ctx) {
  struct kk_interpret_run_fun391__t* _self = kk_function_alloc_as(struct kk_interpret_run_fun391__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_interpret_run_fun391, kk_context());
  _self->e = e;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_interpret_run_fun393__t {
  struct kk_function_s _base;
};
static kk_interpret__computation kk_interpret_run_fun393(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx);
static kk_function_t kk_interpret_new_run_fun393(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_interpret_run_fun393, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_interpret__computation kk_interpret_run_fun393(kk_function_t _fself, kk_interpret__value x_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_interpret__new_Return(kk_reuse_null, 0, x_0, _ctx);
}
static kk_box_t kk_interpret_run_fun391(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_interpret_run_fun391__t* _self = kk_function_as(struct kk_interpret_run_fun391__t*, _fself, _ctx);
  kk_interpret__expr e = _self->e; /* interpret/expr */
  kk_drop_match(_self, {kk_interpret__expr_dup(e, _ctx);}, {}, _ctx)
  kk_interpret__computation _x_x392 = kk_interpret_eval_sq_(e, kk_std_core_types__new_Nil(_ctx), kk_interpret_new_run_fun393(_ctx), _ctx); /*interpret/computation*/
  return kk_interpret__computation_box(_x_x392, _ctx);
}

kk_std_core_types__either kk_interpret_run(kk_interpret__expr e, kk_context_t* _ctx) { /* (e : expr) -> <console/console,div> either<exception,computation> */ 
  kk_std_core_exn__error t_10005 = kk_std_core_exn_try(kk_interpret_new_run_fun391(e, _ctx), _ctx); /*error<interpret/computation>*/;
  if (kk_std_core_exn__is_Error(t_10005, _ctx)) {
    kk_std_core_exn__exception exn_0 = t_10005._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn_0, _ctx);
    kk_std_core_exn__error_drop(t_10005, _ctx);
    return kk_std_core_types__new_Left(kk_std_core_exn__exception_box(exn_0, _ctx), _ctx);
  }
  {
    kk_box_t _box_x174 = t_10005._cons.Ok.result;
    kk_interpret__computation x = kk_interpret__computation_unbox(_box_x174, KK_BORROWED, _ctx);
    kk_interpret__computation_dup(x, _ctx);
    kk_std_core_exn__error_drop(t_10005, _ctx);
    return kk_std_core_types__new_Right(kk_interpret__computation_box(x, _ctx), _ctx);
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
