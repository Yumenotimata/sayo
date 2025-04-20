// Koka generated module: std/text/parse, koka version: 3.1.2, platform: 64-bit
#include "std_text_parse.h"
 
// runtime tag for the effect `:parse`

kk_std_core_hnd__htag kk_std_text_parse__tag_parse;
 
// handler for the effect `:parse`

kk_box_t kk_std_text_parse__handle_parse(kk_std_text_parse__parse hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : parse<e,b>, ret : (res : a) -> e b, action : () -> <parse|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x1982 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
  return kk_std_core_hnd__hhandle(_x_x1982, kk_std_text_parse__parse_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_box_t kk_std_text_parse_satisfy_fun1987(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fun1987__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fun1987__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (sslice/sslice) -> maybe<(605, sslice/sslice)> */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x1988;
  kk_std_core_sslice__sslice _x_x1989 = kk_std_core_sslice__sslice_unbox(_b_x21, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x1988 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, _x_x1989, _ctx), _ctx); /*maybe<(605, sslice/sslice)>*/
  return kk_std_core_types__maybe_box(_x_x1988, _ctx);
}

kk_std_core_types__either kk_std_text_parse_either(kk_std_text_parse__parse_error perr, kk_context_t* _ctx) { /* forall<a> (perr : parse-error<a>) -> either<string,a> */ 
  if (kk_std_text_parse__is_ParseOk(perr, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x2001 = kk_std_text_parse__as_ParseOk(perr, _ctx);
    kk_std_core_sslice__sslice _pat_0 = _con_x2001->rest;
    kk_box_t x = _con_x2001->result;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Right(x, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x2002 = kk_std_text_parse__as_ParseError(perr, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x2002->rest;
    kk_string_t msg = _con_x2002->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Left(kk_string_box(msg), _ctx);
  }
}

kk_std_core_types__maybe kk_std_text_parse_maybe(kk_std_text_parse__parse_error perr, kk_context_t* _ctx) { /* forall<a> (perr : parse-error<a>) -> maybe<a> */ 
  if (kk_std_text_parse__is_ParseOk(perr, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x2003 = kk_std_text_parse__as_ParseOk(perr, _ctx);
    kk_std_core_sslice__sslice _pat_0_0 = _con_x2003->rest;
    kk_box_t x_0 = _con_x2003->result;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Just(x_0, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x2004 = kk_std_text_parse__as_ParseError(perr, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x2004->rest;
    kk_string_t msg = _con_x2004->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_string_drop(msg, _ctx);
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// monadic lift

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10533(kk_std_text_parse__parse_error err1, kk_std_text_parse__parse_error _y_x10370, kk_context_t* _ctx) { /* forall<h,a,e> (err1 : parse-error<a>, parse-error<a>) -> <local<h>|e> parse-error<a> */ 
  if (kk_std_text_parse__is_ParseOk(_y_x10370, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x2005 = kk_std_text_parse__as_ParseOk(_y_x10370, _ctx);
    kk_std_core_sslice__sslice rest2 = _con_x2005->rest;
    kk_box_t x2 = _con_x2005->result;
    kk_std_text_parse__parse_error_drop(err1, _ctx);
    kk_reuse_t _ru_x1878 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10370, _ctx)) {
      _ru_x1878 = (kk_datatype_ptr_reuse(_y_x10370, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest2, _ctx);
      kk_box_dup(x2, _ctx);
      kk_datatype_ptr_decref(_y_x10370, _ctx);
    }
    return kk_std_text_parse__new_ParseOk(_ru_x1878, 0, x2, rest2, _ctx);
  }
  {
    kk_std_text_parse__parse_error_drop(_y_x10370, _ctx);
    return err1;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10534_fun2007__t {
  struct kk_function_s _base;
  kk_std_text_parse__parse_error err1;
};
static kk_box_t kk_std_text_parse__mlift_parse_10534_fun2007(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10534_fun2007(kk_std_text_parse__parse_error err1, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10534_fun2007__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10534_fun2007__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10534_fun2007, kk_context());
  _self->err1 = err1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10534_fun2007(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10534_fun2007__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10534_fun2007__t*, _fself, _ctx);
  kk_std_text_parse__parse_error err1 = _self->err1; /* std/text/parse/parse-error<1563> */
  kk_drop_match(_self, {kk_std_text_parse__parse_error_dup(err1, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x2008;
  kk_std_text_parse__parse_error _y_x10370_47 = kk_std_text_parse__parse_error_unbox(_b_x45, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/;
  if (kk_std_text_parse__is_ParseOk(_y_x10370_47, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x2009 = kk_std_text_parse__as_ParseOk(_y_x10370_47, _ctx);
    kk_std_core_sslice__sslice rest2 = _con_x2009->rest;
    kk_box_t x2 = _con_x2009->result;
    kk_std_text_parse__parse_error_drop(err1, _ctx);
    kk_reuse_t _ru_x1879 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10370_47, _ctx)) {
      _ru_x1879 = (kk_datatype_ptr_reuse(_y_x10370_47, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest2, _ctx);
      kk_box_dup(x2, _ctx);
      kk_datatype_ptr_decref(_y_x10370_47, _ctx);
    }
    _x_x2008 = kk_std_text_parse__new_ParseOk(_ru_x1879, 0, x2, rest2, _ctx); /*std/text/parse/parse-error<33>*/
  }
  else {
    kk_std_text_parse__parse_error_drop(_y_x10370_47, _ctx);
    _x_x2008 = err1; /*std/text/parse/parse-error<33>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x2008, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10534(kk_std_text_parse__parse_error err1, kk_function_t resume, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,a,e> (err1 : parse-error<a>, resume : (bool) -> <local<h>|e> parse-error<a>, wild_ : ()) -> <local<h>|e> parse-error<a> */ 
  kk_std_text_parse__parse_error x_10595 = kk_function_call(kk_std_text_parse__parse_error, (kk_function_t, bool, kk_context_t*), resume, (resume, false, _ctx), _ctx); /*std/text/parse/parse-error<1563>*/;
  if (kk_yielding(kk_context())) {
    kk_std_text_parse__parse_error_drop(x_10595, _ctx);
    kk_box_t _x_x2006 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10534_fun2007(err1, _ctx), _ctx); /*2978*/
    return kk_std_text_parse__parse_error_unbox(_x_x2006, KK_OWNED, _ctx);
  }
  {
    kk_std_text_parse__parse_error _y_x10370_48 = x_10595; /*std/text/parse/parse-error<1563>*/;
    if (kk_std_text_parse__is_ParseOk(_y_x10370_48, _ctx)) {
      struct kk_std_text_parse_ParseOk* _con_x2010 = kk_std_text_parse__as_ParseOk(_y_x10370_48, _ctx);
      kk_std_core_sslice__sslice rest2 = _con_x2010->rest;
      kk_box_t x2 = _con_x2010->result;
      kk_std_text_parse__parse_error_drop(err1, _ctx);
      kk_reuse_t _ru_x1880 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(_y_x10370_48, _ctx)) {
        _ru_x1880 = (kk_datatype_ptr_reuse(_y_x10370_48, _ctx));
      }
      else {
        kk_std_core_sslice__sslice_dup(rest2, _ctx);
        kk_box_dup(x2, _ctx);
        kk_datatype_ptr_decref(_y_x10370_48, _ctx);
      }
      return kk_std_text_parse__new_ParseOk(_ru_x1880, 0, x2, rest2, _ctx);
    }
    {
      kk_std_text_parse__parse_error_drop(_y_x10370_48, _ctx);
      return err1;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10535_fun2013__t {
  struct kk_function_s _base;
  kk_std_text_parse__parse_error _y_x10368;
  kk_function_t resume;
};
static kk_box_t kk_std_text_parse__mlift_parse_10535_fun2013(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10535_fun2013(kk_std_text_parse__parse_error _y_x10368, kk_function_t resume, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10535_fun2013__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10535_fun2013__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10535_fun2013, kk_context());
  _self->_y_x10368 = _y_x10368;
  _self->resume = resume;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10535_fun2013(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10535_fun2013__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10535_fun2013__t*, _fself, _ctx);
  kk_std_text_parse__parse_error _y_x10368 = _self->_y_x10368; /* std/text/parse/parse-error<1563> */
  kk_function_t resume = _self->resume; /* (bool) -> <local<1557>|1564> std/text/parse/parse-error<1563> */
  kk_drop_match(_self, {kk_std_text_parse__parse_error_dup(_y_x10368, _ctx);kk_function_dup(resume, _ctx);}, {}, _ctx)
  kk_unit_t wild___56 = kk_Unit;
  kk_unit_unbox(_b_x54);
  kk_std_text_parse__parse_error _x_x2014 = kk_std_text_parse__mlift_parse_10534(_y_x10368, resume, wild___56, _ctx); /*std/text/parse/parse-error<1563>*/
  return kk_std_text_parse__parse_error_box(_x_x2014, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10535(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_std_text_parse__parse_error _y_x10368, kk_context_t* _ctx) { /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice, parse-error<a>) -> <local<h>|e> parse-error<a> */ 
  if (kk_std_text_parse__is_ParseOk(_y_x10368, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x2011 = kk_std_text_parse__as_ParseOk(_y_x10368, _ctx);
    kk_std_core_sslice__sslice rest1 = _con_x2011->rest;
    kk_box_t x1 = _con_x2011->result;
    kk_std_core_sslice__sslice_drop(save, _ctx);
    kk_function_drop(resume, _ctx);
    kk_ref_drop(input, _ctx);
    kk_reuse_t _ru_x1881 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10368, _ctx)) {
      _ru_x1881 = (kk_datatype_ptr_reuse(_y_x10368, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest1, _ctx);
      kk_box_dup(x1, _ctx);
      kk_datatype_ptr_decref(_y_x10368, _ctx);
    }
    return kk_std_text_parse__new_ParseOk(_ru_x1881, 0, x1, rest1, _ctx);
  }
  {
    kk_unit_t x_10599 = kk_Unit;
    kk_unit_t _brw_x1868 = kk_Unit;
    kk_ref_set_borrow(input,(kk_std_core_sslice__sslice_box(save, _ctx)),kk_context());
    kk_ref_drop(input, _ctx);
    _brw_x1868;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x2012 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10535_fun2013(_y_x10368, resume, _ctx), _ctx); /*2978*/
      return kk_std_text_parse__parse_error_unbox(_x_x2012, KK_OWNED, _ctx);
    }
    {
      return kk_std_text_parse__mlift_parse_10534(_y_x10368, resume, x_10599, _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10536_fun2017__t {
  struct kk_function_s _base;
  kk_ref_t input;
  kk_function_t resume;
  kk_std_core_sslice__sslice save;
};
static kk_box_t kk_std_text_parse__mlift_parse_10536_fun2017(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10536_fun2017(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10536_fun2017__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10536_fun2017__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10536_fun2017, kk_context());
  _self->input = input;
  _self->resume = resume;
  _self->save = save;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10536_fun2017(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10536_fun2017__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10536_fun2017__t*, _fself, _ctx);
  kk_ref_t input = _self->input; /* local-var<1557,sslice/sslice> */
  kk_function_t resume = _self->resume; /* (bool) -> <local<1557>|1564> std/text/parse/parse-error<1563> */
  kk_std_core_sslice__sslice save = _self->save; /* sslice/sslice */
  kk_drop_match(_self, {kk_ref_dup(input, _ctx);kk_function_dup(resume, _ctx);kk_std_core_sslice__sslice_dup(save, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _y_x10368_60 = kk_std_text_parse__parse_error_unbox(_b_x58, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/;
  kk_std_text_parse__parse_error _x_x2018 = kk_std_text_parse__mlift_parse_10535(input, resume, save, _y_x10368_60, _ctx); /*std/text/parse/parse-error<1563>*/
  return kk_std_text_parse__parse_error_box(_x_x2018, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10536(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_context_t* _ctx) { /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice) -> <local<h>|e> parse-error<a> */ 
  kk_std_text_parse__parse_error x_10601;
  kk_function_t _x_x2015 = kk_function_dup(resume, _ctx); /*(bool) -> <local<1557>|1564> std/text/parse/parse-error<1563>*/
  x_10601 = kk_function_call(kk_std_text_parse__parse_error, (kk_function_t, bool, kk_context_t*), _x_x2015, (_x_x2015, true, _ctx), _ctx); /*std/text/parse/parse-error<1563>*/
  if (kk_yielding(kk_context())) {
    kk_std_text_parse__parse_error_drop(x_10601, _ctx);
    kk_box_t _x_x2016 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10536_fun2017(input, resume, save, _ctx), _ctx); /*2978*/
    return kk_std_text_parse__parse_error_unbox(_x_x2016, KK_OWNED, _ctx);
  }
  {
    return kk_std_text_parse__mlift_parse_10535(input, resume, save, x_10601, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10538_fun2020__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_text_parse__mlift_parse_10538_fun2020(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10538_fun2020(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10538_fun2020__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10538_fun2020__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10538_fun2020, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10538_fun2020(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10538_fun2020__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10538_fun2020__t*, _fself, _ctx);
  kk_box_t x = _self->x; /* 1521 */
  kk_drop_match(_self, {kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_70 = kk_Unit;
  kk_unit_unbox(_b_x68);
  kk_std_core_types__maybe _x_x2021 = kk_std_core_types__new_Just(x, _ctx); /*maybe<91>*/
  return kk_std_core_types__maybe_box(_x_x2021, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse__mlift_parse_10538(kk_ref_t input, kk_function_t pred, kk_std_core_sslice__sslice inp, kk_context_t* _ctx) { /* forall<a,h,e> (input : local-var<h,sslice/sslice>, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>, inp : sslice/sslice) -> <local<h>|e> maybe<a> */ 
  kk_std_core_types__maybe _match_x1863 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, inp, _ctx), _ctx); /*maybe<(1521, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x1863, _ctx)) {
    kk_box_t _box_x61 = _match_x1863._cons.Just.value;
    kk_std_core_types__tuple2 _pat_9 = kk_std_core_types__tuple2_unbox(_box_x61, KK_BORROWED, _ctx);
    kk_box_t _box_x62 = _pat_9.snd;
    kk_std_core_sslice__sslice cap = kk_std_core_sslice__sslice_unbox(_box_x62, KK_BORROWED, _ctx);
    kk_box_t x = _pat_9.fst;
    kk_std_core_sslice__sslice_dup(cap, _ctx);
    kk_box_dup(x, _ctx);
    kk_std_core_types__maybe_drop(_match_x1863, _ctx);
    kk_unit_t x_0_10603 = kk_Unit;
    kk_unit_t _brw_x1865 = kk_Unit;
    kk_ref_set_borrow(input,(kk_std_core_sslice__sslice_box(cap, _ctx)),kk_context());
    kk_ref_drop(input, _ctx);
    _brw_x1865;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x2019 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10538_fun2020(x, _ctx), _ctx); /*2978*/
      return kk_std_core_types__maybe_unbox(_x_x2019, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Just(x, _ctx);
    }
  }
  {
    kk_ref_drop(input, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_parse_fun2024__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun2024(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2024(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2024__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2024__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2024, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun2024(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2024__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2024__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  return kk_ref_get(loc,kk_context());
}


// lift anonymous function
struct kk_std_text_parse_parse_fun2027__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun2027(kk_function_t _fself, int32_t _b_x84, kk_std_core_hnd__ev _b_x85, kk_box_t _b_x86, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2027(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2027__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2027__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2027, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun2028__t {
  struct kk_function_s _base;
  kk_box_t _b_x86;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun2028(kk_function_t _fself, kk_function_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2028(kk_box_t _b_x86, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2028__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2028__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2028, kk_context());
  _self->_b_x86 = _b_x86;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun2032__t {
  struct kk_function_s _base;
  kk_box_t _b_x86;
};
static kk_box_t kk_std_text_parse_parse_fun2032(kk_function_t _fself, kk_box_t _b_x78, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2032(kk_box_t _b_x86, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2032__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2032__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2032, kk_context());
  _self->_b_x86 = _b_x86;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun2032(kk_function_t _fself, kk_box_t _b_x78, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2032__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2032__t*, _fself, _ctx);
  kk_box_t _b_x86 = _self->_b_x86; /* 45 */
  kk_drop_match(_self, {kk_box_dup(_b_x86, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x2033;
  kk_string_t _x_x2034 = kk_string_unbox(_b_x86); /*string*/
  kk_std_core_sslice__sslice _x_x2035 = kk_std_core_sslice__sslice_unbox(_b_x78, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x2033 = kk_std_text_parse__new_ParseError(kk_reuse_null, 0, _x_x2034, _x_x2035, _ctx); /*std/text/parse/parse-error<33>*/
  return kk_std_text_parse__parse_error_box(_x_x2033, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun2028(kk_function_t _fself, kk_function_t _b_x81, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2028__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2028__t*, _fself, _ctx);
  kk_box_t _b_x86 = _self->_b_x86; /* 45 */
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_box_dup(_b_x86, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_function_drop(_b_x81, _ctx);
  kk_std_core_sslice__sslice x_0_10610;
  kk_box_t _x_x2029 = kk_ref_get(loc,kk_context()); /*2657*/
  x_0_10610 = kk_std_core_sslice__sslice_unbox(_x_x2029, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x2030;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_0_10610, _ctx);
    kk_box_t _x_x2031 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun2032(_b_x86, _ctx), _ctx); /*2978*/
    _x_x2030 = kk_std_text_parse__parse_error_unbox(_x_x2031, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  else {
    kk_string_t _x_x2036 = kk_string_unbox(_b_x86); /*string*/
    _x_x2030 = kk_std_text_parse__new_ParseError(kk_reuse_null, 0, _x_x2036, x_0_10610, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x2030, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun2027(kk_function_t _fself, int32_t _b_x84, kk_std_core_hnd__ev _b_x85, kk_box_t _b_x86, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2027__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2027__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_datatype_ptr_dropn(_b_x85, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(_b_x84, kk_std_text_parse_new_parse_fun2028(_b_x86, loc, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun2039__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun2039(kk_function_t _fself, kk_function_t _b_x92, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2039(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2039__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2039__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2039, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun2040__t {
  struct kk_function_s _base;
  kk_function_t _b_x92;
};
static kk_std_text_parse__parse_error kk_std_text_parse_parse_fun2040(kk_function_t _fself, bool _b_x93, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2040(kk_function_t _b_x92, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2040__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2040__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2040, kk_context());
  _self->_b_x92 = _b_x92;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_text_parse__parse_error kk_std_text_parse_parse_fun2040(kk_function_t _fself, bool _b_x93, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2040__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2040__t*, _fself, _ctx);
  kk_function_t _b_x92 = _self->_b_x92; /* (6172) -> 6173 6175 */
  kk_drop_match(_self, {kk_function_dup(_b_x92, _ctx);}, {}, _ctx)
  kk_box_t _x_x2041 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x92, (_b_x92, kk_bool_box(_b_x93), _ctx), _ctx); /*6175*/
  return kk_std_text_parse__parse_error_unbox(_x_x2041, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun2046__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_function_t resume_134;
};
static kk_box_t kk_std_text_parse_parse_fun2046(kk_function_t _fself, kk_box_t _b_x90, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2046(kk_ref_t loc, kk_function_t resume_134, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2046__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2046__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2046, kk_context());
  _self->loc = loc;
  _self->resume_134 = resume_134;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun2046(kk_function_t _fself, kk_box_t _b_x90, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2046__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2046__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_function_t resume_134 = _self->resume_134; /* (bool) -> <local<1557>|1564> std/text/parse/parse-error<1563> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_function_dup(resume_134, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x2047;
  kk_std_core_sslice__sslice _x_x2048 = kk_std_core_sslice__sslice_unbox(_b_x90, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x2047 = kk_std_text_parse__mlift_parse_10536(loc, resume_134, _x_x2048, _ctx); /*std/text/parse/parse-error<1563>*/
  return kk_std_text_parse__parse_error_box(_x_x2047, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun2039(kk_function_t _fself, kk_function_t _b_x92, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2039__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2039__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_function_t resume_134 = kk_std_text_parse_new_parse_fun2040(_b_x92, _ctx); /*(bool) -> <local<1557>|1564> std/text/parse/parse-error<1563>*/;
  kk_std_core_sslice__sslice x_1_10614;
  kk_box_t _x_x2042;
  kk_ref_t _x_x2043 = kk_ref_dup(loc, _ctx); /*local-var<1557,sslice/sslice>*/
  _x_x2042 = kk_ref_get(_x_x2043,kk_context()); /*2735*/
  x_1_10614 = kk_std_core_sslice__sslice_unbox(_x_x2042, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x2044;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_1_10614, _ctx);
    kk_box_t _x_x2045 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun2046(loc, resume_134, _ctx), _ctx); /*2978*/
    _x_x2044 = kk_std_text_parse__parse_error_unbox(_x_x2045, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  else {
    _x_x2044 = kk_std_text_parse__mlift_parse_10536(loc, resume_134, x_1_10614, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x2044, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun2051__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun2051(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2051(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2051__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2051__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2051, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun2052__t {
  struct kk_function_s _base;
  kk_box_t _b_x99;
};
static kk_std_core_types__maybe kk_std_text_parse_parse_fun2052(kk_function_t _fself, kk_std_core_sslice__sslice _b_x102, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2052(kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2052__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2052__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2052, kk_context());
  _self->_b_x99 = _b_x99;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_parse_fun2052(kk_function_t _fself, kk_std_core_sslice__sslice _b_x102, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2052__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2052__t*, _fself, _ctx);
  kk_box_t _b_x99 = _self->_b_x99; /* 5721 */
  kk_drop_match(_self, {kk_box_dup(_b_x99, _ctx);}, {}, _ctx)
  kk_box_t _x_x2053;
  kk_function_t _x_x2054 = kk_function_unbox(_b_x99, _ctx); /*(100) -> 101*/
  _x_x2053 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x2054, (_x_x2054, kk_std_core_sslice__sslice_box(_b_x102, _ctx), _ctx), _ctx); /*101*/
  return kk_std_core_types__maybe_unbox(_x_x2053, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun2059__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_function_t pred_135;
};
static kk_box_t kk_std_text_parse_parse_fun2059(kk_function_t _fself, kk_box_t _b_x97, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2059(kk_ref_t loc, kk_function_t pred_135, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2059__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2059__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2059, kk_context());
  _self->loc = loc;
  _self->pred_135 = pred_135;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun2059(kk_function_t _fself, kk_box_t _b_x97, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2059__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2059__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_function_t pred_135 = _self->pred_135; /* (sslice/sslice) -> maybe<(1521, sslice/sslice)> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_function_dup(pred_135, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2060;
  kk_std_core_sslice__sslice _x_x2061 = kk_std_core_sslice__sslice_unbox(_b_x97, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x2060 = kk_std_text_parse__mlift_parse_10538(loc, pred_135, _x_x2061, _ctx); /*maybe<1521>*/
  return kk_std_core_types__maybe_box(_x_x2060, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun2051(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2051__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2051__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_function_t pred_135 = kk_std_text_parse_new_parse_fun2052(_b_x99, _ctx); /*(sslice/sslice) -> maybe<(1521, sslice/sslice)>*/;
  kk_std_core_sslice__sslice x_2_10616;
  kk_box_t _x_x2055;
  kk_ref_t _x_x2056 = kk_ref_dup(loc, _ctx); /*local-var<1557,sslice/sslice>*/
  _x_x2055 = kk_ref_get(_x_x2056,kk_context()); /*2811*/
  x_2_10616 = kk_std_core_sslice__sslice_unbox(_x_x2055, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_core_types__maybe _x_x2057;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_2_10616, _ctx);
    kk_box_t _x_x2058 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun2059(loc, pred_135, _ctx), _ctx); /*2978*/
    _x_x2057 = kk_std_core_types__maybe_unbox(_x_x2058, KK_OWNED, _ctx); /*maybe<1521>*/
  }
  else {
    _x_x2057 = kk_std_text_parse__mlift_parse_10538(loc, pred_135, x_2_10616, _ctx); /*maybe<1521>*/
  }
  return kk_std_core_types__maybe_box(_x_x2057, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun2064__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun2064(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2064(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2064__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2064__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2064, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun2068__t {
  struct kk_function_s _base;
  kk_box_t _b_x110;
};
static kk_box_t kk_std_text_parse_parse_fun2068(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun2068(kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2068__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun2068__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun2068, kk_context());
  _self->_b_x110 = _b_x110;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun2068(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2068__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2068__t*, _fself, _ctx);
  kk_box_t _b_x110 = _self->_b_x110; /* 510 */
  kk_drop_match(_self, {kk_box_dup(_b_x110, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x2069;
  kk_std_core_sslice__sslice _x_x2070 = kk_std_core_sslice__sslice_unbox(_b_x106, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x2069 = kk_std_text_parse__new_ParseOk(kk_reuse_null, 0, _b_x110, _x_x2070, _ctx); /*std/text/parse/parse-error<33>*/
  return kk_std_text_parse__parse_error_box(_x_x2069, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun2064(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun2064__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun2064__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_core_sslice__sslice x_3_10618;
  kk_box_t _x_x2065 = kk_ref_get(loc,kk_context()); /*2836*/
  x_3_10618 = kk_std_core_sslice__sslice_unbox(_x_x2065, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x2066;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_3_10618, _ctx);
    kk_box_t _x_x2067 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun2068(_b_x110, _ctx), _ctx); /*2978*/
    _x_x2066 = kk_std_text_parse__parse_error_unbox(_x_x2067, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  else {
    _x_x2066 = kk_std_text_parse__new_ParseOk(kk_reuse_null, 0, _b_x110, x_3_10618, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x2066, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse_parse(kk_std_core_sslice__sslice input0, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (input0 : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_sslice__sslice_box(input0, _ctx)),kk_context()); /*local-var<1557,sslice/sslice>*/;
  kk_std_text_parse__parse _b_x107_111;
  kk_std_core_hnd__clause0 _x_x2022;
  kk_function_t _x_x2023;
  kk_ref_dup(loc, _ctx);
  _x_x2023 = kk_std_text_parse_new_parse_fun2024(loc, _ctx); /*() -> 6231 2614*/
  _x_x2022 = kk_std_core_hnd_clause_tail0(_x_x2023, _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  kk_std_core_hnd__clause1 _x_x2025;
  kk_function_t _x_x2026;
  kk_ref_dup(loc, _ctx);
  _x_x2026 = kk_std_text_parse_new_parse_fun2027(loc, _ctx); /*(hnd/marker<48,49>, hnd/ev<47>, 45) -> 48 3225*/
  _x_x2025 = kk_std_core_hnd__new_Clause1(_x_x2026, _ctx); /*hnd/clause1<45,46,47,48,49>*/
  kk_std_core_hnd__clause0 _x_x2037;
  kk_function_t _x_x2038;
  kk_ref_dup(loc, _ctx);
  _x_x2038 = kk_std_text_parse_new_parse_fun2039(loc, _ctx); /*((6172) -> 6173 6175) -> 6173 6175*/
  _x_x2037 = kk_std_core_hnd_clause_control0(_x_x2038, _ctx); /*hnd/clause0<6172,6174,6173,6175>*/
  kk_std_core_hnd__clause1 _x_x2049;
  kk_function_t _x_x2050;
  kk_ref_dup(loc, _ctx);
  _x_x2050 = kk_std_text_parse_new_parse_fun2051(loc, _ctx); /*(5721) -> 5718 5722*/
  _x_x2049 = kk_std_core_hnd_clause_tail1(_x_x2050, _ctx); /*hnd/clause1<5721,5722,5720,5718,5719>*/
  _b_x107_111 = kk_std_text_parse__new_Hnd_parse(kk_reuse_null, 0, kk_integer_from_small(3), _x_x2022, _x_x2025, _x_x2037, _x_x2049, _ctx); /*std/text/parse/parse<<local<1557>|1564>,std/text/parse/parse-error<1563>>*/
  kk_std_text_parse__parse_error res;
  kk_box_t _x_x2062;
  kk_function_t _x_x2063;
  kk_ref_dup(loc, _ctx);
  _x_x2063 = kk_std_text_parse_new_parse_fun2064(loc, _ctx); /*(510) -> 511 512*/
  _x_x2062 = kk_std_text_parse__handle_parse(_b_x107_111, _x_x2063, p, _ctx); /*512*/
  res = kk_std_text_parse__parse_error_unbox(_x_x2062, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/
  kk_box_t _x_x2071 = kk_std_core_hnd_prompt_local_var(loc, kk_std_text_parse__parse_error_box(res, _ctx), _ctx); /*9564*/
  return kk_std_text_parse__parse_error_unbox(_x_x2071, KK_OWNED, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse_starts_with(kk_string_t s, kk_function_t p, kk_context_t* _ctx) { /* forall<a> (s : string, p : () -> parse a) -> maybe<(a, sslice/sslice)> */ 
  kk_std_text_parse__parse_error _match_x1858;
  kk_std_core_sslice__sslice _x_x2072;
  kk_string_t _x_x2073 = kk_string_dup(s, _ctx); /*string*/
  kk_integer_t _x_x2074 = kk_string_len_int(s,kk_context()); /*int*/
  _x_x2072 = kk_std_core_sslice__new_Sslice(_x_x2073, kk_integer_from_small(0), _x_x2074, _ctx); /*sslice/sslice*/
  _match_x1858 = kk_std_text_parse_parse(_x_x2072, p, _ctx); /*std/text/parse/parse-error<1563>*/
  if (kk_std_text_parse__is_ParseOk(_match_x1858, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x2075 = kk_std_text_parse__as_ParseOk(_match_x1858, _ctx);
    kk_std_core_sslice__sslice rest = _con_x2075->rest;
    kk_box_t x = _con_x2075->result;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x1858, _ctx)) {
      kk_datatype_ptr_free(_match_x1858, _ctx);
    }
    else {
      kk_std_core_sslice__sslice_dup(rest, _ctx);
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(_match_x1858, _ctx);
    }
    kk_box_t _x_x2076;
    kk_std_core_types__tuple2 _x_x2077 = kk_std_core_types__new_Tuple2(x, kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2076 = kk_std_core_types__tuple2_box(_x_x2077, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x2076, _ctx);
  }
  {
    kk_std_text_parse__parse_error_drop(_match_x1858, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse__lp__at_x_fun2083__t_bar__bar__rp_ {
  struct kk_function_s _base;
  kk_ssize_t i_10626;
};
static kk_box_t kk_std_text_parse__lp__at_x_fun2083_bar__bar__rp_(kk_function_t _fself, kk_function_t _b_x157, kk_box_t _b_x158, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__lp__at_new_x_fun2083_bar__bar__rp_(kk_ssize_t i_10626, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__at_x_fun2083__t_bar__bar__rp_* _self = kk_function_alloc_as(struct kk_std_text_parse__lp__at_x_fun2083__t_bar__bar__rp_, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__lp__at_x_fun2083_bar__bar__rp_, kk_context());
  _self->i_10626 = i_10626;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__lp__at_x_fun2083_bar__bar__rp_(kk_function_t _fself, kk_function_t _b_x157, kk_box_t _b_x158, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__at_x_fun2083__t_bar__bar__rp_* _self = kk_function_as(struct kk_std_text_parse__lp__at_x_fun2083__t_bar__bar__rp_*, _fself, _ctx);
  kk_ssize_t i_10626 = _self->i_10626; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10626, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_10626, _b_x157, _b_x158, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__lp__at_x_fun2084__t_bar__bar__rp_ {
  struct kk_function_s _base;
  kk_function_t p1;
  kk_function_t p2;
};
static kk_box_t kk_std_text_parse__lp__at_x_fun2084_bar__bar__rp_(kk_function_t _fself, kk_box_t _b_x167, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__lp__at_new_x_fun2084_bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__at_x_fun2084__t_bar__bar__rp_* _self = kk_function_alloc_as(struct kk_std_text_parse__lp__at_x_fun2084__t_bar__bar__rp_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__lp__at_x_fun2084_bar__bar__rp_, kk_context());
  _self->p1 = p1;
  _self->p2 = p2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__lp__at_x_fun2084_bar__bar__rp_(kk_function_t _fself, kk_box_t _b_x167, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__at_x_fun2084__t_bar__bar__rp_* _self = kk_function_as(struct kk_std_text_parse__lp__at_x_fun2084__t_bar__bar__rp_*, _fself, _ctx);
  kk_function_t p1 = _self->p1; /* std/text/parse/parser<1636,1635> */
  kk_function_t p2 = _self->p2; /* std/text/parse/parser<1636,1635> */
  kk_drop_match(_self, {kk_function_dup(p1, _ctx);kk_function_dup(p2, _ctx);}, {}, _ctx)
  bool _match_x1856 = kk_bool_unbox(_b_x167); /*bool*/;
  if (_match_x1856) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx), _ctx);
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx), _ctx);
  }
}

kk_box_t kk_std_text_parse__lp__bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx) { /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>) -> <parse|e> a */ 
  kk_ssize_t i_10626;
  kk_std_core_hnd__htag _x_x2078 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
  i_10626 = kk_std_core_hnd__evv_index(_x_x2078, _ctx); /*hnd/ev-index*/
  kk_evv_t w = kk_evv_swap_create1(i_10626,kk_context()); /*hnd/evv<<std/text/parse/parse|1636>>*/;
  kk_std_core_hnd__ev ev_10628 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool y;
  kk_box_t _x_x2079;
  {
    struct kk_std_core_hnd_Ev* _con_x2080 = kk_std_core_hnd__as_Ev(ev_10628, _ctx);
    kk_box_t _box_x146 = _con_x2080->hnd;
    int32_t m = _con_x2080->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x146, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2081 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2081->_cfc;
      kk_std_core_hnd__clause0 _pat_1 = _con_x2081->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x2081->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x2081->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2081->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x149 = _ctl_pick.clause;
        _x_x2079 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x149, (_fun_unbox_x149, m, ev_10628, _ctx), _ctx); /*35*/
      }
    }
  }
  y = kk_bool_unbox(_x_x2079); /*bool*/
  kk_unit_t __ = kk_Unit;
  kk_evv_set(w,kk_context());
  bool x_10623;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2082 = kk_std_core_hnd_yield_cont(kk_std_text_parse__lp__at_new_x_fun2083_bar__bar__rp_(i_10626, _ctx), _ctx); /*3102*/
    x_10623 = kk_bool_unbox(_x_x2082); /*bool*/
  }
  else {
    x_10623 = y; /*bool*/
  }
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse__lp__at_new_x_fun2084_bar__bar__rp_(p1, p2, _ctx), _ctx);
  }
  if (x_10623) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx), _ctx);
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_optional_fun2090__t {
  struct kk_function_s _base;
  kk_ssize_t i_10636;
};
static kk_box_t kk_std_text_parse_optional_fun2090(kk_function_t _fself, kk_function_t _b_x182, kk_box_t _b_x183, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_optional_fun2090(kk_ssize_t i_10636, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun2090__t* _self = kk_function_alloc_as(struct kk_std_text_parse_optional_fun2090__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_optional_fun2090, kk_context());
  _self->i_10636 = i_10636;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_optional_fun2090(kk_function_t _fself, kk_function_t _b_x182, kk_box_t _b_x183, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun2090__t* _self = kk_function_as(struct kk_std_text_parse_optional_fun2090__t*, _fself, _ctx);
  kk_ssize_t i_10636 = _self->i_10636; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10636, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_10636, _b_x182, _b_x183, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_optional_fun2091__t {
  struct kk_function_s _base;
  kk_box_t kkloc_default;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_optional_fun2091(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_optional_fun2091(kk_box_t kkloc_default, kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun2091__t* _self = kk_function_alloc_as(struct kk_std_text_parse_optional_fun2091__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_optional_fun2091, kk_context());
  _self->kkloc_default = kkloc_default;
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_optional_fun2091(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun2091__t* _self = kk_function_as(struct kk_std_text_parse_optional_fun2091__t*, _fself, _ctx);
  kk_box_t kkloc_default = _self->kkloc_default; /* 1661 */
  kk_function_t p = _self->p; /* std/text/parse/parser<1662,1661> */
  kk_drop_match(_self, {kk_box_dup(kkloc_default, _ctx);kk_function_dup(p, _ctx);}, {}, _ctx)
  bool _match_x1853 = kk_bool_unbox(_b_x192); /*bool*/;
  if (_match_x1853) {
    kk_box_drop(kkloc_default, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx);
  }
  {
    kk_function_drop(p, _ctx);
    return kkloc_default;
  }
}

kk_box_t kk_std_text_parse_optional(kk_box_t kkloc_default, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (default : a, p : parser<e,a>) -> <parse|e> a */ 
  kk_ssize_t i_10636;
  kk_std_core_hnd__htag _x_x2085 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
  i_10636 = kk_std_core_hnd__evv_index(_x_x2085, _ctx); /*hnd/ev-index*/
  kk_evv_t w = kk_evv_swap_create1(i_10636,kk_context()); /*hnd/evv<<std/text/parse/parse|1662>>*/;
  kk_std_core_hnd__ev ev_10638 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool y;
  kk_box_t _x_x2086;
  {
    struct kk_std_core_hnd_Ev* _con_x2087 = kk_std_core_hnd__as_Ev(ev_10638, _ctx);
    kk_box_t _box_x171 = _con_x2087->hnd;
    int32_t m = _con_x2087->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x171, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2088 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2088->_cfc;
      kk_std_core_hnd__clause0 _pat_1 = _con_x2088->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x2088->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x2088->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2088->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x174 = _ctl_pick.clause;
        _x_x2086 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x174, (_fun_unbox_x174, m, ev_10638, _ctx), _ctx); /*35*/
      }
    }
  }
  y = kk_bool_unbox(_x_x2086); /*bool*/
  kk_unit_t __ = kk_Unit;
  kk_evv_set(w,kk_context());
  bool x_10633;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2089 = kk_std_core_hnd_yield_cont(kk_std_text_parse_new_optional_fun2090(i_10636, _ctx), _ctx); /*3102*/
    x_10633 = kk_bool_unbox(_x_x2089); /*bool*/
  }
  else {
    x_10633 = y; /*bool*/
  }
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_optional_fun2091(kkloc_default, p, _ctx), _ctx);
  }
  if (x_10633) {
    kk_box_drop(kkloc_default, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx);
  }
  {
    kk_function_drop(p, _ctx);
    return kkloc_default;
  }
}
 
// monadic lift

kk_box_t kk_std_text_parse__mlift_unroll_choose_10000_10542(kk_function_t p_0, kk_std_core_types__list pp, bool _y_x10393, kk_context_t* _ctx) { /* forall<a,e> (p@0 : parser<e,a>, pp : list<parser<e,a>>, bool) -> <parse|e> a */ 
  if (_y_x10393) {
    kk_std_core_types__list_drop(pp, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p_0, (p_0, _ctx), _ctx);
  }
  {
    kk_function_drop(p_0, _ctx);
    return kk_std_text_parse__unroll_choose_10000(pp, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse__unroll_choose_10000_fun2098__t {
  struct kk_function_s _base;
  kk_ssize_t i_10643;
};
static kk_box_t kk_std_text_parse__unroll_choose_10000_fun2098(kk_function_t _fself, kk_function_t cont, kk_box_t res, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_unroll_choose_10000_fun2098(kk_ssize_t i_10643, kk_context_t* _ctx) {
  struct kk_std_text_parse__unroll_choose_10000_fun2098__t* _self = kk_function_alloc_as(struct kk_std_text_parse__unroll_choose_10000_fun2098__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__unroll_choose_10000_fun2098, kk_context());
  _self->i_10643 = i_10643;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__unroll_choose_10000_fun2098(kk_function_t _fself, kk_function_t cont, kk_box_t res, kk_context_t* _ctx) {
  struct kk_std_text_parse__unroll_choose_10000_fun2098__t* _self = kk_function_as(struct kk_std_text_parse__unroll_choose_10000_fun2098__t*, _fself, _ctx);
  kk_ssize_t i_10643 = _self->i_10643; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10643, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_10643, cont, res, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__unroll_choose_10000_fun2107__t {
  struct kk_function_s _base;
  kk_ssize_t i_0_10652;
};
static kk_box_t kk_std_text_parse__unroll_choose_10000_fun2107(kk_function_t _fself, kk_function_t _b_x221, kk_box_t _b_x222, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_unroll_choose_10000_fun2107(kk_ssize_t i_0_10652, kk_context_t* _ctx) {
  struct kk_std_text_parse__unroll_choose_10000_fun2107__t* _self = kk_function_alloc_as(struct kk_std_text_parse__unroll_choose_10000_fun2107__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__unroll_choose_10000_fun2107, kk_context());
  _self->i_0_10652 = i_0_10652;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__unroll_choose_10000_fun2107(kk_function_t _fself, kk_function_t _b_x221, kk_box_t _b_x222, kk_context_t* _ctx) {
  struct kk_std_text_parse__unroll_choose_10000_fun2107__t* _self = kk_function_as(struct kk_std_text_parse__unroll_choose_10000_fun2107__t*, _fself, _ctx);
  kk_ssize_t i_0_10652 = _self->i_0_10652; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_0_10652, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_0_10652, _b_x221, _b_x222, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__unroll_choose_10000_fun2108__t {
  struct kk_function_s _base;
  kk_function_t p_0_0;
  kk_std_core_types__list pp_0;
};
static kk_box_t kk_std_text_parse__unroll_choose_10000_fun2108(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_unroll_choose_10000_fun2108(kk_function_t p_0_0, kk_std_core_types__list pp_0, kk_context_t* _ctx) {
  struct kk_std_text_parse__unroll_choose_10000_fun2108__t* _self = kk_function_alloc_as(struct kk_std_text_parse__unroll_choose_10000_fun2108__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__unroll_choose_10000_fun2108, kk_context());
  _self->p_0_0 = p_0_0;
  _self->pp_0 = pp_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__unroll_choose_10000_fun2108(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx) {
  struct kk_std_text_parse__unroll_choose_10000_fun2108__t* _self = kk_function_as(struct kk_std_text_parse__unroll_choose_10000_fun2108__t*, _fself, _ctx);
  kk_function_t p_0_0 = _self->p_0_0; /* std/text/parse/parser<1711,1710> */
  kk_std_core_types__list pp_0 = _self->pp_0; /* list<std/text/parse/parser<1711,1710>> */
  kk_drop_match(_self, {kk_function_dup(p_0_0, _ctx);kk_std_core_types__list_dup(pp_0, _ctx);}, {}, _ctx)
  bool _x_x2109 = kk_bool_unbox(_b_x231); /*bool*/
  return kk_std_text_parse__mlift_unroll_choose_10000_10542(p_0_0, pp_0, _x_x2109, _ctx);
}

kk_box_t kk_std_text_parse__unroll_choose_10000(kk_std_core_types__list ps, kk_context_t* _ctx) { /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(ps, _ctx)) {
    kk_ssize_t i_10643;
    kk_std_core_hnd__htag _x_x2092 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
    i_10643 = kk_std_core_hnd__evv_index(_x_x2092, _ctx); /*hnd/ev-index*/
    kk_evv_t w = kk_evv_swap_create1(i_10643,kk_context()); /*hnd/evv<<std/text/parse/parse|1711>>*/;
    kk_std_core_hnd__ev ev_10646 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t y;
    {
      struct kk_std_core_hnd_Ev* _con_x2093 = kk_std_core_hnd__as_Ev(ev_10646, _ctx);
      kk_box_t _box_x196 = _con_x2093->hnd;
      int32_t m = _con_x2093->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x196, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2094 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_0 = _con_x2094->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2094->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2094->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2 = _con_x2094->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_0 = _con_x2094->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x200 = _ctl_fail.clause;
          kk_box_t _x_x2095;
          kk_string_t _x_x2096;
          kk_define_string_literal(, _s_x2097, 23, "no further alternatives", _ctx)
          _x_x2096 = kk_string_dup(_s_x2097, _ctx); /*string*/
          _x_x2095 = kk_string_box(_x_x2096); /*45*/
          y = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x200, (_fun_unbox_x200, m, ev_10646, _x_x2095, _ctx), _ctx); /*1710*/
        }
      }
    }
    kk_unit_t __ = kk_Unit;
    kk_evv_set(w,kk_context());
    if (kk_yielding(kk_context())) {
      kk_box_drop(y, _ctx);
      return kk_std_core_hnd_yield_cont(kk_std_text_parse__new_unroll_choose_10000_fun2098(i_10643, _ctx), _ctx);
    }
    {
      return y;
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x2099 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_std_core_types__list _pat_1_1_0 = _con_x2099->tail;
    if (kk_std_core_types__is_Nil(_pat_1_1_0, _ctx)) {
      kk_box_t _fun_unbox_x205 = _con_x2099->head;
      if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
        kk_datatype_ptr_free(ps, _ctx);
      }
      else {
        kk_box_dup(_fun_unbox_x205, _ctx);
        kk_datatype_ptr_decref(ps, _ctx);
      }
      kk_function_t _x_x2100 = kk_function_unbox(_fun_unbox_x205, _ctx); /*() -> <std/text/parse/parse|1711> 206*/
      return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x2100, (_x_x2100, _ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x2101 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _fun_unbox_x208 = _con_x2101->head;
    kk_std_core_types__list pp_0 = _con_x2101->tail;
    if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
      kk_datatype_ptr_free(ps, _ctx);
    }
    else {
      kk_box_dup(_fun_unbox_x208, _ctx);
      kk_std_core_types__list_dup(pp_0, _ctx);
      kk_datatype_ptr_decref(ps, _ctx);
    }
    kk_function_t p_0_0 = kk_function_unbox(_fun_unbox_x208, _ctx); /*std/text/parse/parser<1711,1710>*/;
    kk_ssize_t i_0_10652;
    kk_std_core_hnd__htag _x_x2102 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
    i_0_10652 = kk_std_core_hnd__evv_index(_x_x2102, _ctx); /*hnd/ev-index*/
    kk_evv_t w_0 = kk_evv_swap_create1(i_0_10652,kk_context()); /*hnd/evv<<std/text/parse/parse|1711>>*/;
    kk_std_core_hnd__ev ev_0_10654 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    bool y_0;
    kk_box_t _x_x2103;
    {
      struct kk_std_core_hnd_Ev* _con_x2104 = kk_std_core_hnd__as_Ev(ev_0_10654, _ctx);
      kk_box_t _box_x210 = _con_x2104->hnd;
      int32_t m_0 = _con_x2104->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x210, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2105 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x2105->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2105->_fun_current_input;
        kk_std_core_hnd__clause1 _pat_2_1 = _con_x2105->_ctl_fail;
        kk_std_core_hnd__clause0 _ctl_pick = _con_x2105->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2105->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause1_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x213 = _ctl_pick.clause;
          _x_x2103 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x213, (_fun_unbox_x213, m_0, ev_0_10654, _ctx), _ctx); /*35*/
        }
      }
    }
    y_0 = kk_bool_unbox(_x_x2103); /*bool*/
    kk_unit_t ___0 = kk_Unit;
    kk_evv_set(w_0,kk_context());
    bool x_1_10649;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x2106 = kk_std_core_hnd_yield_cont(kk_std_text_parse__new_unroll_choose_10000_fun2107(i_0_10652, _ctx), _ctx); /*3102*/
      x_1_10649 = kk_bool_unbox(_x_x2106); /*bool*/
    }
    else {
      x_1_10649 = y_0; /*bool*/
    }
    if (kk_yielding(kk_context())) {
      return kk_std_core_hnd_yield_extend(kk_std_text_parse__new_unroll_choose_10000_fun2108(p_0_0, pp_0, _ctx), _ctx);
    }
    if (x_1_10649) {
      kk_std_core_types__list_drop(pp_0, _ctx);
      return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p_0_0, (p_0_0, _ctx), _ctx);
    }
    {
      kk_function_drop(p_0_0, _ctx);
      { // tailcall
        ps = pp_0;
        goto kk__tailcall;
      }
    }
  }
}
extern kk_box_t kk_std_text_parse_choose_fun2116(kk_function_t _fself, kk_function_t cont, kk_box_t res, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun2116__t* _self = kk_function_as(struct kk_std_text_parse_choose_fun2116__t*, _fself, _ctx);
  kk_ssize_t i_10656 = _self->i_10656; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10656, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_10656, cont, res, _ctx);
}
 
// monadic lift

kk_box_t kk_std_text_parse__mlift_satisfy_fail_10543(kk_string_t msg, kk_std_core_types__maybe _y_x10402, kk_context_t* _ctx) { /* forall<a> (msg : string, maybe<a>) -> parse a */ 
  if (kk_std_core_types__is_Nothing(_y_x10402, _ctx)) {
    kk_std_core_hnd__ev ev_10662 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    {
      struct kk_std_core_hnd_Ev* _con_x2117 = kk_std_core_hnd__as_Ev(ev_10662, _ctx);
      kk_box_t _box_x243 = _con_x2117->hnd;
      int32_t m = _con_x2117->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x243, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2118 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2118->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2118->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2118->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2118->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2118->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x247 = _ctl_fail.clause;
          return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x247, (_fun_unbox_x247, m, ev_10662, kk_string_box(msg), _ctx), _ctx);
        }
      }
    }
  }
  {
    kk_box_t x_0 = _y_x10402._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_satisfy_fail_fun2122__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_std_text_parse_satisfy_fail_fun2122(kk_function_t _fself, kk_box_t _b_x264, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_satisfy_fail_fun2122(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun2122__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fail_fun2122__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_satisfy_fail_fun2122, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_satisfy_fail_fun2122(kk_function_t _fself, kk_box_t _b_x264, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun2122__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fail_fun2122__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (sslice/sslice) -> maybe<(1746, sslice/sslice)> */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2123;
  kk_std_core_sslice__sslice _x_x2124 = kk_std_core_sslice__sslice_unbox(_b_x264, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x2123 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, _x_x2124, _ctx), _ctx); /*maybe<(1746, sslice/sslice)>*/
  return kk_std_core_types__maybe_box(_x_x2123, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_satisfy_fail_fun2125__t {
  struct kk_function_s _base;
  kk_string_t msg;
};
static kk_box_t kk_std_text_parse_satisfy_fail_fun2125(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_satisfy_fail_fun2125(kk_string_t msg, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun2125__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fail_fun2125__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_satisfy_fail_fun2125, kk_context());
  _self->msg = msg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_satisfy_fail_fun2125(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun2125__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fail_fun2125__t*, _fself, _ctx);
  kk_string_t msg = _self->msg; /* string */
  kk_drop_match(_self, {kk_string_dup(msg, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2126 = kk_std_core_types__maybe_unbox(_b_x266, KK_OWNED, _ctx); /*maybe<1746>*/
  return kk_std_text_parse__mlift_satisfy_fail_10543(msg, _x_x2126, _ctx);
}

kk_box_t kk_std_text_parse_satisfy_fail(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* forall<a> (msg : string, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse a */ 
  kk_std_core_hnd__ev ev_10668 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10665;
  kk_box_t _x_x2119;
  {
    struct kk_std_core_hnd_Ev* _con_x2120 = kk_std_core_hnd__as_Ev(ev_10668, _ctx);
    kk_box_t _box_x251 = _con_x2120->hnd;
    int32_t m = _con_x2120->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x251, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2121 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2121->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2121->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2121->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2121->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2121->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x258 = _fun_satisfy.clause;
        _x_x2119 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x258, (_fun_unbox_x258, m, ev_10668, kk_function_box(kk_std_text_parse_new_satisfy_fail_fun2122(pred, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10665 = kk_std_core_types__maybe_unbox(_x_x2119, KK_OWNED, _ctx); /*maybe<1746>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10665, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_satisfy_fail_fun2125(msg, _ctx), _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10665, _ctx)) {
    kk_std_core_hnd__ev ev_0_10671 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    {
      struct kk_std_core_hnd_Ev* _con_x2127 = kk_std_core_hnd__as_Ev(ev_0_10671, _ctx);
      kk_box_t _box_x267 = _con_x2127->hnd;
      int32_t m_0 = _con_x2127->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x267, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2128 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2128->_cfc;
        kk_std_core_hnd__clause0 _pat_1_2 = _con_x2128->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2128->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2128->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2128->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x271 = _ctl_fail.clause;
          return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x271, (_fun_unbox_x271, m_0, ev_0_10671, kk_string_box(msg), _ctx), _ctx);
        }
      }
    }
  }
  {
    kk_box_t x_2 = x_10665._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_unit_t kk_std_text_parse__mlift_eof_10544(kk_std_core_types__maybe _y_x10405, kk_context_t* _ctx) { /* (maybe<()>) -> parse () */ 
  if (kk_std_core_types__is_Nothing(_y_x10405, _ctx)) {
    kk_std_core_hnd__ev ev_10674 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2129;
    {
      struct kk_std_core_hnd_Ev* _con_x2130 = kk_std_core_hnd__as_Ev(ev_10674, _ctx);
      kk_box_t _box_x277 = _con_x2130->hnd;
      int32_t m = _con_x2130->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x277, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2131 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_0 = _con_x2131->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2131->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2131->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2131->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2131->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x281 = _ctl_fail.clause;
          kk_box_t _x_x2132;
          kk_string_t _x_x2133;
          kk_define_string_literal(, _s_x2134, 22, "expecting end-of-input", _ctx)
          _x_x2133 = kk_string_dup(_s_x2134, _ctx); /*string*/
          _x_x2132 = kk_string_box(_x_x2133); /*45*/
          _x_x2129 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x281, (_fun_unbox_x281, m, ev_10674, _x_x2132, _ctx), _ctx); /*46*/
        }
      }
    }
    kk_unit_unbox(_x_x2129); return kk_Unit;
  }
  {
    kk_box_t _box_x285 = _y_x10405._cons.Just.value;
    kk_unit_t _pat_3_0 = kk_unit_unbox(_box_x285);
    kk_std_core_types__maybe_drop(_y_x10405, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_text_parse_eof_fun2138__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_eof_fun2138(kk_function_t _fself, kk_box_t _b_x299, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_eof_fun2138(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_eof_fun2138, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_eof_fun2138(kk_function_t _fself, kk_box_t _b_x299, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool b_10039;
  kk_integer_t _brw_x1845;
  kk_std_core_sslice__sslice _match_x1844;
  kk_box_t _x_x2139 = kk_box_dup(_b_x299, _ctx); /*297*/
  _match_x1844 = kk_std_core_sslice__sslice_unbox(_x_x2139, KK_OWNED, _ctx); /*sslice/sslice*/
  {
    kk_integer_t _x = _match_x1844.len;
    kk_integer_dup(_x, _ctx);
    kk_std_core_sslice__sslice_drop(_match_x1844, _ctx);
    _brw_x1845 = _x; /*int*/
  }
  bool _brw_x1846 = kk_integer_gt_borrow(_brw_x1845,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1845, _ctx);
  b_10039 = _brw_x1846; /*bool*/
  kk_std_core_types__maybe _x_x2140;
  if (b_10039) {
    kk_box_drop(_b_x299, _ctx);
    _x_x2140 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
  }
  else {
    kk_box_t _x_x2141;
    kk_std_core_types__tuple2 _x_x2142 = kk_std_core_types__new_Tuple2(kk_unit_box(kk_Unit), _b_x299, _ctx); /*(129, 130)*/
    _x_x2141 = kk_std_core_types__tuple2_box(_x_x2142, _ctx); /*91*/
    _x_x2140 = kk_std_core_types__new_Just(_x_x2141, _ctx); /*forall<a> maybe<a>*/
  }
  return kk_std_core_types__maybe_box(_x_x2140, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_eof_fun2144__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_eof_fun2144(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_eof_fun2144(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_eof_fun2144, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_eof_fun2144(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2145 = kk_Unit;
  kk_std_core_types__maybe _x_x2146 = kk_std_core_types__maybe_unbox(_b_x308, KK_OWNED, _ctx); /*maybe<()>*/
  kk_std_text_parse__mlift_eof_10544(_x_x2146, _ctx);
  return kk_unit_box(_x_x2145);
}

kk_unit_t kk_std_text_parse_eof(kk_context_t* _ctx) { /* () -> parse () */ 
  kk_std_core_hnd__ev ev_10680 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10677;
  kk_box_t _x_x2135;
  {
    struct kk_std_core_hnd_Ev* _con_x2136 = kk_std_core_hnd__as_Ev(ev_10680, _ctx);
    kk_box_t _box_x286 = _con_x2136->hnd;
    int32_t m = _con_x2136->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x286, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2137 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2137->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2137->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2137->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2137->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2137->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x293 = _fun_satisfy.clause;
        _x_x2135 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x293, (_fun_unbox_x293, m, ev_10680, kk_function_box(kk_std_text_parse_new_eof_fun2138(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10677 = kk_std_core_types__maybe_unbox(_x_x2135, KK_OWNED, _ctx); /*maybe<()>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10677, _ctx);
    kk_box_t _x_x2143 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_eof_fun2144(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x2143); return kk_Unit;
  }
  if (kk_std_core_types__is_Nothing(x_10677, _ctx)) {
    kk_std_core_hnd__ev ev_0_10683 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2147;
    {
      struct kk_std_core_hnd_Ev* _con_x2148 = kk_std_core_hnd__as_Ev(ev_0_10683, _ctx);
      kk_box_t _box_x309 = _con_x2148->hnd;
      int32_t m_0 = _con_x2148->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x309, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2149 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x2149->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2149->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2149->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2149->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2149->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x313 = _ctl_fail.clause;
          kk_box_t _x_x2150;
          kk_string_t _x_x2151;
          kk_define_string_literal(, _s_x2152, 22, "expecting end-of-input", _ctx)
          _x_x2151 = kk_string_dup(_s_x2152, _ctx); /*string*/
          _x_x2150 = kk_string_box(_x_x2151); /*45*/
          _x_x2147 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x313, (_fun_unbox_x313, m_0, ev_0_10683, _x_x2150, _ctx), _ctx); /*46*/
        }
      }
    }
    kk_unit_unbox(_x_x2147); return kk_Unit;
  }
  {
    kk_box_t _box_x317 = x_10677._cons.Just.value;
    kk_unit_t _pat_3_0_0 = kk_unit_unbox(_box_x317);
    kk_std_core_types__maybe_drop(x_10677, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_std_text_parse__mlift_parse_eof_10545(kk_std_core_types__maybe _y_x10409, kk_context_t* _ctx) { /* (maybe<()>) -> parse () */ 
  if (kk_std_core_types__is_Nothing(_y_x10409, _ctx)) {
    kk_std_core_hnd__ev ev_10686 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2153;
    {
      struct kk_std_core_hnd_Ev* _con_x2154 = kk_std_core_hnd__as_Ev(ev_10686, _ctx);
      kk_box_t _box_x319 = _con_x2154->hnd;
      int32_t m = _con_x2154->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x319, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2155 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_0 = _con_x2155->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2155->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2155->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2155->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2155->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x323 = _ctl_fail.clause;
          kk_box_t _x_x2156;
          kk_string_t _x_x2157;
          kk_define_string_literal(, _s_x2158, 22, "expecting end-of-input", _ctx)
          _x_x2157 = kk_string_dup(_s_x2158, _ctx); /*string*/
          _x_x2156 = kk_string_box(_x_x2157); /*45*/
          _x_x2153 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x323, (_fun_unbox_x323, m, ev_10686, _x_x2156, _ctx), _ctx); /*46*/
        }
      }
    }
    kk_unit_unbox(_x_x2153); return kk_Unit;
  }
  {
    kk_box_t _box_x327 = _y_x10409._cons.Just.value;
    kk_unit_t _pat_3_0 = kk_unit_unbox(_box_x327);
    kk_std_core_types__maybe_drop(_y_x10409, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_eof_10547_fun2163__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_parse_eof_10547_fun2163(kk_function_t _fself, kk_box_t _b_x341, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_eof_10547_fun2163(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_parse_eof_10547_fun2163, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_eof_10547_fun2163(kk_function_t _fself, kk_box_t _b_x341, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool b_10039;
  kk_integer_t _brw_x1841;
  kk_std_core_sslice__sslice _match_x1840;
  kk_box_t _x_x2164 = kk_box_dup(_b_x341, _ctx); /*339*/
  _match_x1840 = kk_std_core_sslice__sslice_unbox(_x_x2164, KK_OWNED, _ctx); /*sslice/sslice*/
  {
    kk_integer_t _x = _match_x1840.len;
    kk_integer_dup(_x, _ctx);
    kk_std_core_sslice__sslice_drop(_match_x1840, _ctx);
    _brw_x1841 = _x; /*int*/
  }
  bool _brw_x1842 = kk_integer_gt_borrow(_brw_x1841,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1841, _ctx);
  b_10039 = _brw_x1842; /*bool*/
  kk_std_core_types__maybe _x_x2165;
  if (b_10039) {
    kk_box_drop(_b_x341, _ctx);
    _x_x2165 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
  }
  else {
    kk_box_t _x_x2166;
    kk_std_core_types__tuple2 _x_x2167 = kk_std_core_types__new_Tuple2(kk_unit_box(kk_Unit), _b_x341, _ctx); /*(129, 130)*/
    _x_x2166 = kk_std_core_types__tuple2_box(_x_x2167, _ctx); /*91*/
    _x_x2165 = kk_std_core_types__new_Just(_x_x2166, _ctx); /*forall<a> maybe<a>*/
  }
  return kk_std_core_types__maybe_box(_x_x2165, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_parse_eof_10547_fun2169__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_parse_eof_10547_fun2169(kk_function_t _fself, kk_box_t _b_x350, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_eof_10547_fun2169(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_parse_eof_10547_fun2169, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_eof_10547_fun2169(kk_function_t _fself, kk_box_t _b_x350, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2170 = kk_Unit;
  kk_std_core_types__maybe _x_x2171 = kk_std_core_types__maybe_unbox(_b_x350, KK_OWNED, _ctx); /*maybe<()>*/
  kk_std_text_parse__mlift_parse_eof_10545(_x_x2171, _ctx);
  return kk_unit_box(_x_x2170);
}


// lift anonymous function
struct kk_std_text_parse__mlift_parse_eof_10547_fun2173__t {
  struct kk_function_s _base;
  kk_ssize_t i_10691;
};
static kk_box_t kk_std_text_parse__mlift_parse_eof_10547_fun2173(kk_function_t _fself, kk_function_t _b_x357, kk_box_t _b_x358, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_eof_10547_fun2173(kk_ssize_t i_10691, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_eof_10547_fun2173__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_eof_10547_fun2173__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_eof_10547_fun2173, kk_context());
  _self->i_10691 = i_10691;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_eof_10547_fun2173(kk_function_t _fself, kk_function_t _b_x357, kk_box_t _b_x358, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_eof_10547_fun2173__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_eof_10547_fun2173__t*, _fself, _ctx);
  kk_ssize_t i_10691 = _self->i_10691; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10691, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_10691, _b_x357, _b_x358, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_parse_eof_10547_fun2174__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_text_parse__mlift_parse_eof_10547_fun2174(kk_function_t _fself, kk_box_t _b_x367, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_eof_10547_fun2174(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_eof_10547_fun2174__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_eof_10547_fun2174__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_eof_10547_fun2174, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_eof_10547_fun2174(kk_function_t _fself, kk_box_t _b_x367, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_eof_10547_fun2174__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_eof_10547_fun2174__t*, _fself, _ctx);
  kk_box_t x = _self->x; /* 1826 */
  kk_drop_match(_self, {kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_box_drop(_b_x367, _ctx);
  return x;
}

kk_box_t kk_std_text_parse__mlift_parse_eof_10547(kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (x : a) -> <parse|e> a */ 
  kk_ssize_t i_10691;
  kk_std_core_hnd__htag _x_x2159 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
  i_10691 = kk_std_core_hnd__evv_index(_x_x2159, _ctx); /*hnd/ev-index*/
  kk_evv_t w = kk_evv_swap_create1(i_10691,kk_context()); /*hnd/evv<<std/text/parse/parse|1827>>*/;
  kk_std_core_hnd__ev ev_10695 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_1_10693;
  kk_box_t _x_x2160;
  {
    struct kk_std_core_hnd_Ev* _con_x2161 = kk_std_core_hnd__as_Ev(ev_10695, _ctx);
    kk_box_t _box_x328 = _con_x2161->hnd;
    int32_t m = _con_x2161->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x328, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2162 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2162->_cfc;
      kk_std_core_hnd__clause0 _pat_1 = _con_x2162->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2162->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3_0 = _con_x2162->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2162->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x335 = _fun_satisfy.clause;
        _x_x2160 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x335, (_fun_unbox_x335, m, ev_10695, kk_function_box(kk_std_text_parse__new_mlift_parse_eof_10547_fun2163(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_1_10693 = kk_std_core_types__maybe_unbox(_x_x2160, KK_OWNED, _ctx); /*maybe<()>*/
  kk_unit_t y = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_1_10693, _ctx);
    kk_box_t _x_x2168 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_eof_10547_fun2169(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x2168);
  }
  else {
    kk_std_text_parse__mlift_parse_eof_10545(x_1_10693, _ctx);
  }
  kk_unit_t __ = kk_Unit;
  kk_evv_set(w,kk_context());
  kk_unit_t x_0_10689 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2172 = kk_std_core_hnd_yield_cont(kk_std_text_parse__new_mlift_parse_eof_10547_fun2173(i_10691, _ctx), _ctx); /*3102*/
    kk_unit_unbox(_x_x2172);
  }
  else {
    y;
  }
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_eof_10547_fun2174(x, _ctx), _ctx);
  }
  {
    return x;
  }
}


// lift anonymous function
struct kk_std_text_parse_parse_eof_fun2175__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_parse_eof_fun2175(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_eof_fun2175(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_eof_fun2175__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_eof_fun2175__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_eof_fun2175, kk_context());
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_eof_fun2177__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_parse_eof_fun2177(kk_function_t _fself, kk_box_t _x1_x2176, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_eof_fun2177(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_parse_eof_fun2177, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_parse_eof_fun2177(kk_function_t _fself, kk_box_t _x1_x2176, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_text_parse__mlift_parse_eof_10547(_x1_x2176, _ctx);
}
static kk_box_t kk_std_text_parse_parse_eof_fun2175(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_eof_fun2175__t* _self = kk_function_as(struct kk_std_text_parse_parse_eof_fun2175__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* () -> <std/text/parse/parse|1827> 1826 */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);}, {}, _ctx)
  kk_box_t x_10700 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx); /*1826*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10700, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_eof_fun2177(_ctx), _ctx);
  }
  {
    return kk_std_text_parse__mlift_parse_eof_10547(x_10700, _ctx);
  }
}

kk_std_text_parse__parse_error kk_std_text_parse_parse_eof(kk_std_core_sslice__sslice input, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (input : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 
  return kk_std_text_parse_parse(input, kk_std_text_parse_new_parse_eof_fun2175(p, _ctx), _ctx);
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_char_is_10548(kk_string_t msg, kk_std_core_types__maybe _y_x10414, kk_context_t* _ctx) { /* (msg : string, maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10414, _ctx)) {
    kk_std_core_hnd__ev ev_10702 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2178;
    {
      struct kk_std_core_hnd_Ev* _con_x2179 = kk_std_core_hnd__as_Ev(ev_10702, _ctx);
      kk_box_t _box_x371 = _con_x2179->hnd;
      int32_t m = _con_x2179->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x371, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2180 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2180->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2180->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2180->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2180->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2180->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x375 = _ctl_fail.clause;
          _x_x2178 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x375, (_fun_unbox_x375, m, ev_10702, kk_string_box(msg), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2178, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x379 = _y_x10414._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x379, KK_BORROWED, _ctx);
    kk_string_drop(msg, _ctx);
    kk_std_core_types__maybe_drop(_y_x10414, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_char_is_fun2184__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_std_text_parse_char_is_fun2184(kk_function_t _fself, kk_box_t _b_x393, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_is_fun2184(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun2184__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_is_fun2184__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_char_is_fun2184, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_char_is_fun2184(kk_function_t _fself, kk_box_t _b_x393, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun2184__t* _self = kk_function_as(struct kk_std_text_parse_char_is_fun2184__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (char) -> bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2185;
  kk_std_core_types__maybe _match_x1835;
  kk_std_core_sslice__sslice _x_x2186 = kk_std_core_sslice__sslice_unbox(_b_x393, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1835 = kk_std_core_sslice_next(_x_x2186, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1835, _ctx)) {
    kk_box_t _box_x394 = _match_x1835._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x394, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x395 = _pat_0_0_0.fst;
      kk_box_t _box_x396 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x395, KK_BORROWED, _ctx);
      kk_function_t _x_x2188 = kk_function_dup(pred, _ctx); /*(char) -> bool*/
      if (kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x_x2188, (_x_x2188, c, _ctx), _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x396, KK_BORROWED, _ctx);
        kk_function_drop(pred, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1835, _ctx);
        kk_box_t _x_x2189;
        kk_std_core_types__tuple2 _x_x2190 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2189 = kk_std_core_types__tuple2_box(_x_x2190, _ctx); /*91*/
        _x_x2185 = kk_std_core_types__new_Just(_x_x2189, _ctx); /*maybe<91>*/
        goto _match_x2187;
      }
    }
  }
  {
    kk_function_drop(pred, _ctx);
    kk_std_core_types__maybe_drop(_match_x1835, _ctx);
    _x_x2185 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2187: ;
  return kk_std_core_types__maybe_box(_x_x2185, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_char_is_fun2192__t {
  struct kk_function_s _base;
  kk_string_t msg;
};
static kk_box_t kk_std_text_parse_char_is_fun2192(kk_function_t _fself, kk_box_t _b_x405, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_is_fun2192(kk_string_t msg, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun2192__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_is_fun2192__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_char_is_fun2192, kk_context());
  _self->msg = msg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_char_is_fun2192(kk_function_t _fself, kk_box_t _b_x405, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun2192__t* _self = kk_function_as(struct kk_std_text_parse_char_is_fun2192__t*, _fself, _ctx);
  kk_string_t msg = _self->msg; /* string */
  kk_drop_match(_self, {kk_string_dup(msg, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10414_416 = kk_std_core_types__maybe_unbox(_b_x405, KK_OWNED, _ctx); /*maybe<char>*/;
  kk_char_t _x_x2193 = kk_std_text_parse__mlift_char_is_10548(msg, _y_x10414_416, _ctx); /*char*/
  return kk_char_box(_x_x2193, _ctx);
}

kk_char_t kk_std_text_parse_char_is(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* (msg : string, pred : (char) -> bool) -> parse char */ 
  kk_std_core_hnd__ev ev_10708 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10705;
  kk_box_t _x_x2181;
  {
    struct kk_std_core_hnd_Ev* _con_x2182 = kk_std_core_hnd__as_Ev(ev_10708, _ctx);
    kk_box_t _box_x380 = _con_x2182->hnd;
    int32_t m = _con_x2182->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x380, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2183 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2183->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2183->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2183->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2183->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2183->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x387 = _fun_satisfy.clause;
        _x_x2181 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x387, (_fun_unbox_x387, m, ev_10708, kk_function_box(kk_std_text_parse_new_char_is_fun2184(pred, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10705 = kk_std_core_types__maybe_unbox(_x_x2181, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10705, _ctx);
    kk_box_t _x_x2191 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_char_is_fun2192(msg, _ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2191, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10705, _ctx)) {
    kk_std_core_hnd__ev ev_0_10711 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2194;
    {
      struct kk_std_core_hnd_Ev* _con_x2195 = kk_std_core_hnd__as_Ev(ev_0_10711, _ctx);
      kk_box_t _box_x406 = _con_x2195->hnd;
      int32_t m_0 = _con_x2195->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x406, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2196 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2196->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2196->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2196->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2196->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2196->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x410 = _ctl_fail.clause;
          _x_x2194 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x410, (_fun_unbox_x410, m_0, ev_0_10711, kk_string_box(msg), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2194, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x414 = x_10705._cons.Just.value;
    kk_char_t x_2 = kk_char_unbox(_box_x414, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(x_10705, _ctx);
    kk_string_drop(msg, _ctx);
    return x_2;
  }
}

kk_std_core_types__tuple2 kk_std_text_parse_next_while0(kk_std_core_sslice__sslice slice, kk_function_t pred, kk_std_core_types__list acc, kk_context_t* _ctx) { /* (slice : sslice/sslice, pred : (char) -> bool, acc : list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1833;
  kk_std_core_sslice__sslice _x_x2197 = kk_std_core_sslice__sslice_dup(slice, _ctx); /*sslice/sslice*/
  _match_x1833 = kk_std_core_sslice_next(_x_x2197, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1833, _ctx)) {
    kk_box_t _box_x417 = _match_x1833._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x417, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x418 = _pat_0.fst;
      kk_box_t _box_x419 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x418, KK_BORROWED, _ctx);
      kk_function_t _x_x2198 = kk_function_dup(pred, _ctx); /*(char) -> bool*/
      if (kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x_x2198, (_x_x2198, c, _ctx), _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x419, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(slice, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1833, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2199 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(c, _ctx), acc, _ctx); /*list<82>*/
          slice = rest;
          acc = _x_x2199;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_function_drop(pred, _ctx);
    kk_std_core_types__maybe_drop(_match_x1833, _ctx);
    kk_std_core_types__list _b_x422_426;
    if (kk_std_core_types__is_Nil(acc, _ctx)) {
      _b_x422_426 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x422_426 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), acc, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x422_426, _ctx), kk_std_core_sslice__sslice_box(slice, _ctx), _ctx);
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_text_parse__mlift_chars_are_10549(kk_string_t msg, kk_std_core_types__maybe _y_x10417, kk_context_t* _ctx) { /* (msg : string, maybe<list<char>>) -> parse list<char> */ 
  if (kk_std_core_types__is_Nothing(_y_x10417, _ctx)) {
    kk_std_core_hnd__ev ev_10714 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2200;
    {
      struct kk_std_core_hnd_Ev* _con_x2201 = kk_std_core_hnd__as_Ev(ev_10714, _ctx);
      kk_box_t _box_x428 = _con_x2201->hnd;
      int32_t m = _con_x2201->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x428, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2202 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2202->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2202->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2202->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2202->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2202->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x432 = _ctl_fail.clause;
          _x_x2200 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x432, (_fun_unbox_x432, m, ev_10714, kk_string_box(msg), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_std_core_types__list_unbox(_x_x2200, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x436 = _y_x10417._cons.Just.value;
    kk_std_core_types__list x_0 = kk_std_core_types__list_unbox(_box_x436, KK_BORROWED, _ctx);
    kk_string_drop(msg, _ctx);
    kk_std_core_types__list_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_y_x10417, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_chars_are_fun2206__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_std_text_parse_chars_are_fun2206(kk_function_t _fself, kk_box_t _b_x450, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_chars_are_fun2206(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun2206__t* _self = kk_function_alloc_as(struct kk_std_text_parse_chars_are_fun2206__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_chars_are_fun2206, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_chars_are_fun2206(kk_function_t _fself, kk_box_t _b_x450, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun2206__t* _self = kk_function_as(struct kk_std_text_parse_chars_are_fun2206__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (char) -> bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2207;
  kk_std_core_types__tuple2 _match_x1832;
  kk_std_core_sslice__sslice _x_x2208 = kk_std_core_sslice__sslice_unbox(_b_x450, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1832 = kk_std_text_parse_next_while0(_x_x2208, pred, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x451 = _match_x1832.fst;
    kk_box_t _box_x452 = _match_x1832.snd;
    kk_std_core_types__list _pat_0_0_0 = kk_std_core_types__list_unbox(_box_x451, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x452, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1832, _ctx);
      _x_x2207 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2209;
    }
  }
  {
    kk_box_t _box_x453 = _match_x1832.fst;
    kk_box_t _box_x454 = _match_x1832.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x454, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x453, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1832, _ctx);
    kk_box_t _x_x2210;
    kk_std_core_types__tuple2 _x_x2211 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2210 = kk_std_core_types__tuple2_box(_x_x2211, _ctx); /*91*/
    _x_x2207 = kk_std_core_types__new_Just(_x_x2210, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2209: ;
  return kk_std_core_types__maybe_box(_x_x2207, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_chars_are_fun2213__t {
  struct kk_function_s _base;
  kk_string_t msg;
};
static kk_box_t kk_std_text_parse_chars_are_fun2213(kk_function_t _fself, kk_box_t _b_x463, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_chars_are_fun2213(kk_string_t msg, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun2213__t* _self = kk_function_alloc_as(struct kk_std_text_parse_chars_are_fun2213__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_chars_are_fun2213, kk_context());
  _self->msg = msg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_chars_are_fun2213(kk_function_t _fself, kk_box_t _b_x463, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun2213__t* _self = kk_function_as(struct kk_std_text_parse_chars_are_fun2213__t*, _fself, _ctx);
  kk_string_t msg = _self->msg; /* string */
  kk_drop_match(_self, {kk_string_dup(msg, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10417_474 = kk_std_core_types__maybe_unbox(_b_x463, KK_OWNED, _ctx); /*maybe<list<char>>*/;
  kk_std_core_types__list _x_x2214 = kk_std_text_parse__mlift_chars_are_10549(msg, _y_x10417_474, _ctx); /*list<char>*/
  return kk_std_core_types__list_box(_x_x2214, _ctx);
}

kk_std_core_types__list kk_std_text_parse_chars_are(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* (msg : string, pred : (char) -> bool) -> parse list<char> */ 
  kk_std_core_hnd__ev ev_10720 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10717;
  kk_box_t _x_x2203;
  {
    struct kk_std_core_hnd_Ev* _con_x2204 = kk_std_core_hnd__as_Ev(ev_10720, _ctx);
    kk_box_t _box_x437 = _con_x2204->hnd;
    int32_t m = _con_x2204->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x437, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2205 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2205->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2205->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2205->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2205->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2205->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x444 = _fun_satisfy.clause;
        _x_x2203 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x444, (_fun_unbox_x444, m, ev_10720, kk_function_box(kk_std_text_parse_new_chars_are_fun2206(pred, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10717 = kk_std_core_types__maybe_unbox(_x_x2203, KK_OWNED, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10717, _ctx);
    kk_box_t _x_x2212 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_chars_are_fun2213(msg, _ctx), _ctx); /*2978*/
    return kk_std_core_types__list_unbox(_x_x2212, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10717, _ctx)) {
    kk_std_core_hnd__ev ev_0_10723 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2215;
    {
      struct kk_std_core_hnd_Ev* _con_x2216 = kk_std_core_hnd__as_Ev(ev_0_10723, _ctx);
      kk_box_t _box_x464 = _con_x2216->hnd;
      int32_t m_0 = _con_x2216->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x464, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2217 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2217->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2217->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2217->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2217->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2217->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x468 = _ctl_fail.clause;
          _x_x2215 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x468, (_fun_unbox_x468, m_0, ev_0_10723, kk_string_box(msg), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_std_core_types__list_unbox(_x_x2215, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x472 = x_10717._cons.Just.value;
    kk_std_core_types__list x_2 = kk_std_core_types__list_unbox(_box_x472, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_2, _ctx);
    kk_std_core_types__maybe_drop(x_10717, _ctx);
    kk_string_drop(msg, _ctx);
    return x_2;
  }
}

kk_std_core_types__maybe kk_std_text_parse__unroll_next_match_10001(kk_std_core_sslice__sslice slice, kk_std_core_types__list cs, kk_context_t* _ctx) { /* (slice : sslice/sslice, cs : list<char>) -> maybe<sslice/sslice> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(cs, _ctx)) {
    return kk_std_core_types__new_Just(kk_std_core_sslice__sslice_box(slice, _ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x2218 = kk_std_core_types__as_Cons(cs, _ctx);
    kk_box_t _box_x476 = _con_x2218->head;
    kk_std_core_types__list cc = _con_x2218->tail;
    kk_char_t c = kk_char_unbox(_box_x476, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(cs, _ctx)) {
      kk_datatype_ptr_free(cs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(cc, _ctx);
      kk_datatype_ptr_decref(cs, _ctx);
    }
    kk_std_core_types__maybe _match_x1830 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
    if (kk_std_core_types__is_Just(_match_x1830, _ctx)) {
      kk_box_t _box_x477 = _match_x1830._cons.Just.value;
      kk_std_core_types__tuple2 _pat_2 = kk_std_core_types__tuple2_unbox(_box_x477, KK_BORROWED, _ctx);
      if (kk_std_core_types__is_Tuple2(_pat_2, _ctx)) {
        kk_box_t _box_x478 = _pat_2.fst;
        kk_box_t _box_x479 = _pat_2.snd;
        kk_char_t d = kk_char_unbox(_box_x478, KK_BORROWED, _ctx);
        if (c == d) {
          kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x479, KK_BORROWED, _ctx);
          kk_std_core_sslice__sslice_dup(rest, _ctx);
          kk_std_core_types__maybe_drop(_match_x1830, _ctx);
          { // tailcall
            slice = rest;
            cs = cc;
            goto kk__tailcall;
          }
        }
      }
    }
    {
      kk_std_core_types__list_drop(cc, _ctx);
      kk_std_core_types__maybe_drop(_match_x1830, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
}
 
// monadic lift

kk_string_t kk_std_text_parse__mlift_pstring_10550(kk_string_t s, kk_std_core_types__maybe _y_x10420, kk_context_t* _ctx) { /* (s : string, maybe<string>) -> parse string */ 
  if (kk_std_core_types__is_Nothing(_y_x10420, _ctx)) {
    kk_std_core_hnd__ev ev_10726 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2219;
    {
      struct kk_std_core_hnd_Ev* _con_x2220 = kk_std_core_hnd__as_Ev(ev_10726, _ctx);
      kk_box_t _box_x483 = _con_x2220->hnd;
      int32_t m = _con_x2220->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x483, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2221 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2221->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2221->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2221->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2221->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2221->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x487 = _ctl_fail.clause;
          _x_x2219 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x487, (_fun_unbox_x487, m, ev_10726, kk_string_box(s), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_string_unbox(_x_x2219);
  }
  {
    kk_box_t _box_x491 = _y_x10420._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x491);
    kk_string_drop(s, _ctx);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_y_x10420, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_pstring_fun2227__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static kk_box_t kk_std_text_parse_pstring_fun2227(kk_function_t _fself, kk_box_t _b_x505, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pstring_fun2227(kk_string_t s, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun2227__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pstring_fun2227__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_pstring_fun2227, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_pstring_fun2227(kk_function_t _fself, kk_box_t _b_x505, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun2227__t* _self = kk_function_as(struct kk_std_text_parse_pstring_fun2227__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_std_core_types__list cs_10028;
  kk_string_t _x_x2228 = kk_string_dup(s, _ctx); /*string*/
  cs_10028 = kk_std_core_string_list(_x_x2228, _ctx); /*list<char>*/
  kk_std_core_types__maybe _x_x2229;
  kk_std_core_types__maybe _match_x1829;
  if (kk_std_core_types__is_Nil(cs_10028, _ctx)) {
    _match_x1829 = kk_std_core_types__new_Just(_b_x505, _ctx); /*maybe<91>*/
  }
  else {
    kk_std_core_sslice__sslice _x_x2230 = kk_std_core_sslice__sslice_unbox(_b_x505, KK_OWNED, _ctx); /*sslice/sslice*/
    _match_x1829 = kk_std_text_parse__unroll_next_match_10001(_x_x2230, cs_10028, _ctx); /*maybe<91>*/
  }
  if (kk_std_core_types__is_Just(_match_x1829, _ctx)) {
    kk_box_t _box_x507 = _match_x1829._cons.Just.value;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x507, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__maybe_drop(_match_x1829, _ctx);
    kk_box_t _x_x2231;
    kk_std_core_types__tuple2 _x_x2232 = kk_std_core_types__new_Tuple2(kk_string_box(s), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2231 = kk_std_core_types__tuple2_box(_x_x2232, _ctx); /*91*/
    _x_x2229 = kk_std_core_types__new_Just(_x_x2231, _ctx); /*maybe<91>*/
  }
  else {
    kk_string_drop(s, _ctx);
    _x_x2229 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  return kk_std_core_types__maybe_box(_x_x2229, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pstring_fun2234__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static kk_box_t kk_std_text_parse_pstring_fun2234(kk_function_t _fself, kk_box_t _b_x517, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pstring_fun2234(kk_string_t s, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun2234__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pstring_fun2234__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_pstring_fun2234, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_pstring_fun2234(kk_function_t _fself, kk_box_t _b_x517, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun2234__t* _self = kk_function_as(struct kk_std_text_parse_pstring_fun2234__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10420_528 = kk_std_core_types__maybe_unbox(_b_x517, KK_OWNED, _ctx); /*maybe<string>*/;
  kk_string_t _x_x2235 = kk_std_text_parse__mlift_pstring_10550(s, _y_x10420_528, _ctx); /*string*/
  return kk_string_box(_x_x2235);
}

kk_string_t kk_std_text_parse_pstring(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> parse string */ 
  kk_std_core_hnd__ev ev_10732 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10729;
  kk_box_t _x_x2222;
  {
    struct kk_std_core_hnd_Ev* _con_x2223 = kk_std_core_hnd__as_Ev(ev_10732, _ctx);
    kk_box_t _box_x492 = _con_x2223->hnd;
    int32_t m = _con_x2223->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x492, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2224 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2224->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2224->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2224->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2224->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2224->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x499 = _fun_satisfy.clause;
        kk_box_t _x_x2225;
        kk_function_t _x_x2226;
        kk_string_dup(s, _ctx);
        _x_x2226 = kk_std_text_parse_new_pstring_fun2227(s, _ctx); /*(503) -> 504*/
        _x_x2225 = kk_function_box(_x_x2226, _ctx); /*45*/
        _x_x2222 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x499, (_fun_unbox_x499, m, ev_10732, _x_x2225, _ctx), _ctx); /*46*/
      }
    }
  }
  x_10729 = kk_std_core_types__maybe_unbox(_x_x2222, KK_OWNED, _ctx); /*maybe<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10729, _ctx);
    kk_box_t _x_x2233 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pstring_fun2234(s, _ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2233);
  }
  if (kk_std_core_types__is_Nothing(x_10729, _ctx)) {
    kk_std_core_hnd__ev ev_0_10735 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2236;
    {
      struct kk_std_core_hnd_Ev* _con_x2237 = kk_std_core_hnd__as_Ev(ev_0_10735, _ctx);
      kk_box_t _box_x518 = _con_x2237->hnd;
      int32_t m_0 = _con_x2237->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x518, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2238 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2238->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2238->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2238->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2238->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2238->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x522 = _ctl_fail.clause;
          _x_x2236 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x522, (_fun_unbox_x522, m_0, ev_0_10735, kk_string_box(s), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_string_unbox(_x_x2236);
  }
  {
    kk_box_t _box_x526 = x_10729._cons.Just.value;
    kk_string_t x_2 = kk_string_unbox(_box_x526);
    kk_string_dup(x_2, _ctx);
    kk_std_core_types__maybe_drop(x_10729, _ctx);
    kk_string_drop(s, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_char_10551(kk_string_t msg_10031, kk_std_core_types__maybe _y_x10423, kk_context_t* _ctx) { /* (msg@10031 : string, maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10423, _ctx)) {
    kk_std_core_hnd__ev ev_10738 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2239;
    {
      struct kk_std_core_hnd_Ev* _con_x2240 = kk_std_core_hnd__as_Ev(ev_10738, _ctx);
      kk_box_t _box_x529 = _con_x2240->hnd;
      int32_t m = _con_x2240->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x529, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2241 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2241->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2241->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2241->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2241->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2241->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x533 = _ctl_fail.clause;
          _x_x2239 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x533, (_fun_unbox_x533, m, ev_10738, kk_string_box(msg_10031), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2239, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x537 = _y_x10423._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x537, KK_BORROWED, _ctx);
    kk_string_drop(msg_10031, _ctx);
    kk_std_core_types__maybe_drop(_y_x10423, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_char_fun2251__t {
  struct kk_function_s _base;
  kk_char_t c;
};
static kk_box_t kk_std_text_parse_char_fun2251(kk_function_t _fself, kk_box_t _b_x551, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_fun2251(kk_char_t c, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun2251__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_fun2251__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_char_fun2251, kk_context());
  _self->c = c;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_char_fun2251(kk_function_t _fself, kk_box_t _b_x551, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun2251__t* _self = kk_function_as(struct kk_std_text_parse_char_fun2251__t*, _fself, _ctx);
  kk_char_t c = _self->c; /* char */
  kk_drop_match(_self, {kk_skip_dup(c, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2252;
  kk_std_core_types__maybe _match_x1827;
  kk_std_core_sslice__sslice _x_x2253 = kk_std_core_sslice__sslice_unbox(_b_x551, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1827 = kk_std_core_sslice_next(_x_x2253, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1827, _ctx)) {
    kk_box_t _box_x552 = _match_x1827._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x552, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x553 = _pat_0_0_0.fst;
      kk_box_t _box_x554 = _pat_0_0_0.snd;
      kk_char_t c_0 = kk_char_unbox(_box_x553, KK_BORROWED, _ctx);
      if (c == c_0) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x554, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1827, _ctx);
        kk_box_t _x_x2255;
        kk_std_core_types__tuple2 _x_x2256 = kk_std_core_types__new_Tuple2(kk_char_box(c_0, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2255 = kk_std_core_types__tuple2_box(_x_x2256, _ctx); /*91*/
        _x_x2252 = kk_std_core_types__new_Just(_x_x2255, _ctx); /*maybe<91>*/
        goto _match_x2254;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1827, _ctx);
    _x_x2252 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2254: ;
  return kk_std_core_types__maybe_box(_x_x2252, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_char_fun2258__t {
  struct kk_function_s _base;
  kk_string_t msg_10031;
};
static kk_box_t kk_std_text_parse_char_fun2258(kk_function_t _fself, kk_box_t _b_x563, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_fun2258(kk_string_t msg_10031, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun2258__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_fun2258__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_char_fun2258, kk_context());
  _self->msg_10031 = msg_10031;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_char_fun2258(kk_function_t _fself, kk_box_t _b_x563, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun2258__t* _self = kk_function_as(struct kk_std_text_parse_char_fun2258__t*, _fself, _ctx);
  kk_string_t msg_10031 = _self->msg_10031; /* string */
  kk_drop_match(_self, {kk_string_dup(msg_10031, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10423_574 = kk_std_core_types__maybe_unbox(_b_x563, KK_OWNED, _ctx); /*maybe<char>*/;
  kk_char_t _x_x2259 = kk_std_text_parse__mlift_char_10551(msg_10031, _y_x10423_574, _ctx); /*char*/
  return kk_char_box(_x_x2259, _ctx);
}

kk_char_t kk_std_text_parse_char(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> parse char */ 
  kk_string_t msg_10031;
  kk_string_t _x_x2242;
  kk_define_string_literal(, _s_x2243, 1, "\'", _ctx)
  _x_x2242 = kk_string_dup(_s_x2243, _ctx); /*string*/
  kk_string_t _x_x2244;
  kk_string_t _x_x2245 = kk_std_core_show_show_char(c, _ctx); /*string*/
  kk_string_t _x_x2246;
  kk_define_string_literal(, _s_x2247, 1, "\'", _ctx)
  _x_x2246 = kk_string_dup(_s_x2247, _ctx); /*string*/
  _x_x2244 = kk_std_core_types__lp__plus__plus__rp_(_x_x2245, _x_x2246, _ctx); /*string*/
  msg_10031 = kk_std_core_types__lp__plus__plus__rp_(_x_x2242, _x_x2244, _ctx); /*string*/
  kk_std_core_hnd__ev ev_10744 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10741;
  kk_box_t _x_x2248;
  {
    struct kk_std_core_hnd_Ev* _con_x2249 = kk_std_core_hnd__as_Ev(ev_10744, _ctx);
    kk_box_t _box_x538 = _con_x2249->hnd;
    int32_t m = _con_x2249->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x538, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2250 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2250->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2250->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2250->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2250->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2250->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x545 = _fun_satisfy.clause;
        _x_x2248 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x545, (_fun_unbox_x545, m, ev_10744, kk_function_box(kk_std_text_parse_new_char_fun2251(c, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10741 = kk_std_core_types__maybe_unbox(_x_x2248, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10741, _ctx);
    kk_box_t _x_x2257 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_char_fun2258(msg_10031, _ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2257, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10741, _ctx)) {
    kk_std_core_hnd__ev ev_0_10747 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2260;
    {
      struct kk_std_core_hnd_Ev* _con_x2261 = kk_std_core_hnd__as_Ev(ev_0_10747, _ctx);
      kk_box_t _box_x564 = _con_x2261->hnd;
      int32_t m_0 = _con_x2261->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x564, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2262 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2262->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2262->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2262->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2262->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2262->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x568 = _ctl_fail.clause;
          _x_x2260 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x568, (_fun_unbox_x568, m_0, ev_0_10747, kk_string_box(msg_10031), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2260, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x572 = x_10741._cons.Just.value;
    kk_char_t x_2 = kk_char_unbox(_box_x572, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(x_10741, _ctx);
    kk_string_drop(msg_10031, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_no_digit_10552(kk_std_core_types__maybe _y_x10426, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10426, _ctx)) {
    kk_std_core_hnd__ev ev_10750 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2263;
    {
      struct kk_std_core_hnd_Ev* _con_x2264 = kk_std_core_hnd__as_Ev(ev_10750, _ctx);
      kk_box_t _box_x575 = _con_x2264->hnd;
      int32_t m = _con_x2264->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x575, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2265 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2265->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2265->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2265->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2265->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2265->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x579 = _ctl_fail.clause;
          kk_box_t _x_x2266;
          kk_string_t _x_x2267;
          kk_define_string_literal(, _s_x2268, 11, "not a digit", _ctx)
          _x_x2267 = kk_string_dup(_s_x2268, _ctx); /*string*/
          _x_x2266 = kk_string_box(_x_x2267); /*45*/
          _x_x2263 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x579, (_fun_unbox_x579, m, ev_10750, _x_x2266, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2263, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x583 = _y_x10426._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x583, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(_y_x10426, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_no_digit_fun2272__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_no_digit_fun2272(kk_function_t _fself, kk_box_t _b_x597, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_no_digit_fun2272(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_no_digit_fun2272, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_no_digit_fun2272(kk_function_t _fself, kk_box_t _b_x597, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2273;
  kk_std_core_types__maybe _match_x1824;
  kk_std_core_sslice__sslice _x_x2274 = kk_std_core_sslice__sslice_unbox(_b_x597, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1824 = kk_std_core_sslice_next(_x_x2274, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1824, _ctx)) {
    kk_box_t _box_x598 = _match_x1824._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x598, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x599 = _pat_0_0_0.fst;
      kk_box_t _box_x600 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x599, KK_BORROWED, _ctx);
      bool b_10039;
      bool _match_x1825 = (c >= ('0')); /*bool*/;
      if (_match_x1825) {
        b_10039 = (c <= ('9')); /*bool*/
      }
      else {
        b_10039 = false; /*bool*/
      }
      bool _x_x2276;
      if (b_10039) {
        _x_x2276 = false; /*bool*/
      }
      else {
        _x_x2276 = true; /*bool*/
      }
      if (_x_x2276) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x600, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1824, _ctx);
        kk_box_t _x_x2277;
        kk_std_core_types__tuple2 _x_x2278 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2277 = kk_std_core_types__tuple2_box(_x_x2278, _ctx); /*91*/
        _x_x2273 = kk_std_core_types__new_Just(_x_x2277, _ctx); /*maybe<91>*/
        goto _match_x2275;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1824, _ctx);
    _x_x2273 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2275: ;
  return kk_std_core_types__maybe_box(_x_x2273, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_no_digit_fun2280__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_no_digit_fun2280(kk_function_t _fself, kk_box_t _b_x609, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_no_digit_fun2280(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_no_digit_fun2280, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_no_digit_fun2280(kk_function_t _fself, kk_box_t _b_x609, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2281;
  kk_std_core_types__maybe _x_x2282 = kk_std_core_types__maybe_unbox(_b_x609, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2281 = kk_std_text_parse__mlift_no_digit_10552(_x_x2282, _ctx); /*char*/
  return kk_char_box(_x_x2281, _ctx);
}

kk_char_t kk_std_text_parse_no_digit(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_std_core_hnd__ev ev_10756 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10753;
  kk_box_t _x_x2269;
  {
    struct kk_std_core_hnd_Ev* _con_x2270 = kk_std_core_hnd__as_Ev(ev_10756, _ctx);
    kk_box_t _box_x584 = _con_x2270->hnd;
    int32_t m = _con_x2270->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x584, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2271 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2271->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2271->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2271->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2271->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2271->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x591 = _fun_satisfy.clause;
        _x_x2269 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x591, (_fun_unbox_x591, m, ev_10756, kk_function_box(kk_std_text_parse_new_no_digit_fun2272(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10753 = kk_std_core_types__maybe_unbox(_x_x2269, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10753, _ctx);
    kk_box_t _x_x2279 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_no_digit_fun2280(_ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2279, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10753, _ctx)) {
    kk_std_core_hnd__ev ev_0_10759 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2283;
    {
      struct kk_std_core_hnd_Ev* _con_x2284 = kk_std_core_hnd__as_Ev(ev_0_10759, _ctx);
      kk_box_t _box_x610 = _con_x2284->hnd;
      int32_t m_0 = _con_x2284->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x610, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2285 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_4 = _con_x2285->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2285->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2285->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2285->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2285->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_4, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x614 = _ctl_fail.clause;
          kk_box_t _x_x2286;
          kk_string_t _x_x2287;
          kk_define_string_literal(, _s_x2288, 11, "not a digit", _ctx)
          _x_x2287 = kk_string_dup(_s_x2288, _ctx); /*string*/
          _x_x2286 = kk_string_box(_x_x2287); /*45*/
          _x_x2283 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x614, (_fun_unbox_x614, m_0, ev_0_10759, _x_x2286, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2283, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x618 = x_10753._cons.Just.value;
    kk_char_t x_2 = kk_char_unbox(_box_x618, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(x_10753, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_integer_t kk_std_text_parse__mlift_digit_10553(kk_char_t _c_x10431, kk_context_t* _ctx) { /* (char) -> int */ 
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
  kk_integer_t x_10002 = kk_integer_from_int(_c_x10431,kk_context()); /*int*/;
  kk_integer_t y_10003 = kk_integer_from_int(('0'),kk_context()); /*int*/;
  kk_char_t x;
  kk_integer_t _x_x2289 = kk_integer_sub(x_10002,y_10003,kk_context()); /*int*/
  x = kk_integer_clamp32(_x_x2289,kk_context()); /*char*/
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  return kk_integer_from_int(x,kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_digit_10554_fun2297__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_digit_10554_fun2297(kk_function_t _fself, kk_box_t _b_x630, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_digit_10554_fun2297(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_digit_10554_fun2297, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_digit_10554_fun2297(kk_function_t _fself, kk_box_t _b_x630, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2298;
  kk_char_t _x_x2299 = kk_char_unbox(_b_x630, KK_OWNED, _ctx); /*char*/
  _x_x2298 = kk_std_text_parse__mlift_digit_10553(_x_x2299, _ctx); /*int*/
  return kk_integer_box(_x_x2298, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_digit_10554(kk_std_core_types__maybe _y_x10429, kk_context_t* _ctx) { /* (maybe<char>) -> parse int */ 
  kk_char_t x_10765;
  if (kk_std_core_types__is_Nothing(_y_x10429, _ctx)) {
    kk_std_core_hnd__ev ev_10767 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2290;
    {
      struct kk_std_core_hnd_Ev* _con_x2291 = kk_std_core_hnd__as_Ev(ev_10767, _ctx);
      kk_box_t _box_x620 = _con_x2291->hnd;
      int32_t m = _con_x2291->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x620, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2292 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2292->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2292->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2292->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2292->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2292->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x624 = _ctl_fail.clause;
          kk_box_t _x_x2293;
          kk_string_t _x_x2294;
          kk_define_string_literal(, _s_x2295, 5, "digit", _ctx)
          _x_x2294 = kk_string_dup(_s_x2295, _ctx); /*string*/
          _x_x2293 = kk_string_box(_x_x2294); /*45*/
          _x_x2290 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x624, (_fun_unbox_x624, m, ev_10767, _x_x2293, _ctx), _ctx); /*46*/
        }
      }
    }
    x_10765 = kk_char_unbox(_x_x2290, KK_OWNED, _ctx); /*char*/
  }
  else {
    kk_box_t _box_x628 = _y_x10429._cons.Just.value;
    kk_char_t x_1 = kk_char_unbox(_box_x628, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(_y_x10429, _ctx);
    x_10765 = x_1; /*char*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2296 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_digit_10554_fun2297(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x2296, _ctx);
  }
  {
    return kk_std_text_parse__mlift_digit_10553(x_10765, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digit_fun2303__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun2303(kk_function_t _fself, kk_box_t _b_x645, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun2303(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun2303, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digit_fun2303(kk_function_t _fself, kk_box_t _b_x645, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2304;
  kk_std_core_types__maybe _match_x1820;
  kk_std_core_sslice__sslice _x_x2305 = kk_std_core_sslice__sslice_unbox(_b_x645, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1820 = kk_std_core_sslice_next(_x_x2305, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1820, _ctx)) {
    kk_box_t _box_x646 = _match_x1820._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x646, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x647 = _pat_0_0_0.fst;
      kk_box_t _box_x648 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x647, KK_BORROWED, _ctx);
      bool _match_x1821 = (c >= ('0')); /*bool*/;
      bool _x_x2307;
      if (_match_x1821) {
        _x_x2307 = (c <= ('9')); /*bool*/
      }
      else {
        _x_x2307 = false; /*bool*/
      }
      if (_x_x2307) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x648, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1820, _ctx);
        kk_box_t _x_x2308;
        kk_std_core_types__tuple2 _x_x2309 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2308 = kk_std_core_types__tuple2_box(_x_x2309, _ctx); /*91*/
        _x_x2304 = kk_std_core_types__new_Just(_x_x2308, _ctx); /*maybe<91>*/
        goto _match_x2306;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1820, _ctx);
    _x_x2304 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2306: ;
  return kk_std_core_types__maybe_box(_x_x2304, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digit_fun2311__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun2311(kk_function_t _fself, kk_box_t _b_x657, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun2311(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun2311, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digit_fun2311(kk_function_t _fself, kk_box_t _b_x657, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2312;
  kk_std_core_types__maybe _x_x2313 = kk_std_core_types__maybe_unbox(_b_x657, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2312 = kk_std_text_parse__mlift_digit_10554(_x_x2313, _ctx); /*int*/
  return kk_integer_box(_x_x2312, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digit_fun2321__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun2321(kk_function_t _fself, kk_box_t _b_x668, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun2321(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun2321, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digit_fun2321(kk_function_t _fself, kk_box_t _b_x668, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2322;
  kk_char_t _x_x2323 = kk_char_unbox(_b_x668, KK_OWNED, _ctx); /*char*/
  _x_x2322 = kk_std_text_parse__mlift_digit_10553(_x_x2323, _ctx); /*int*/
  return kk_integer_box(_x_x2322, _ctx);
}

kk_integer_t kk_std_text_parse_digit(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_std_core_hnd__ev ev_10773 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10770;
  kk_box_t _x_x2300;
  {
    struct kk_std_core_hnd_Ev* _con_x2301 = kk_std_core_hnd__as_Ev(ev_10773, _ctx);
    kk_box_t _box_x632 = _con_x2301->hnd;
    int32_t m = _con_x2301->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x632, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2302 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2302->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2302->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2302->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2302->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2302->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x639 = _fun_satisfy.clause;
        _x_x2300 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x639, (_fun_unbox_x639, m, ev_10773, kk_function_box(kk_std_text_parse_new_digit_fun2303(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10770 = kk_std_core_types__maybe_unbox(_x_x2300, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10770, _ctx);
    kk_box_t _x_x2310 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digit_fun2311(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x2310, _ctx);
  }
  {
    kk_char_t x_1_10776;
    if (kk_std_core_types__is_Nothing(x_10770, _ctx)) {
      kk_std_core_hnd__ev ev_0_10779 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_box_t _x_x2314;
      {
        struct kk_std_core_hnd_Ev* _con_x2315 = kk_std_core_hnd__as_Ev(ev_0_10779, _ctx);
        kk_box_t _box_x658 = _con_x2315->hnd;
        int32_t m_0 = _con_x2315->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x658, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2316 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
          kk_integer_t _pat_0_4 = _con_x2316->_cfc;
          kk_std_core_hnd__clause0 _pat_1_3 = _con_x2316->_fun_current_input;
          kk_std_core_hnd__clause1 _ctl_fail = _con_x2316->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_2_1 = _con_x2316->_ctl_pick;
          kk_std_core_hnd__clause1 _pat_3_1 = _con_x2316->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
            kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
            kk_integer_drop(_pat_0_4, _ctx);
            kk_datatype_ptr_free(h_0, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
            kk_datatype_ptr_decref(h_0, _ctx);
          }
          {
            kk_function_t _fun_unbox_x662 = _ctl_fail.clause;
            kk_box_t _x_x2317;
            kk_string_t _x_x2318;
            kk_define_string_literal(, _s_x2319, 5, "digit", _ctx)
            _x_x2318 = kk_string_dup(_s_x2319, _ctx); /*string*/
            _x_x2317 = kk_string_box(_x_x2318); /*45*/
            _x_x2314 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x662, (_fun_unbox_x662, m_0, ev_0_10779, _x_x2317, _ctx), _ctx); /*46*/
          }
        }
      }
      x_1_10776 = kk_char_unbox(_x_x2314, KK_OWNED, _ctx); /*char*/
    }
    else {
      kk_box_t _box_x666 = x_10770._cons.Just.value;
      kk_char_t x_3 = kk_char_unbox(_box_x666, KK_BORROWED, _ctx);
      kk_std_core_types__maybe_drop(x_10770, _ctx);
      x_1_10776 = x_3; /*char*/
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x2320 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digit_fun2321(_ctx), _ctx); /*2978*/
      return kk_integer_unbox(_x_x2320, _ctx);
    }
    {
      kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
      kk_integer_t x_10002 = kk_integer_from_int(x_1_10776,kk_context()); /*int*/;
      kk_integer_t y_10003 = kk_integer_from_int(('0'),kk_context()); /*int*/;
      kk_char_t x_4;
      kk_integer_t _x_x2324 = kk_integer_sub(x_10002,y_10003,kk_context()); /*int*/
      x_4 = kk_integer_clamp32(_x_x2324,kk_context()); /*char*/
      kk_unit_t keep = kk_Unit;
      kk_evv_set(w,kk_context());
      return kk_integer_from_int(x_4,kk_context());
    }
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_alpha_10555(kk_std_core_types__maybe _y_x10432, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10432, _ctx)) {
    kk_std_core_hnd__ev ev_10785 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2325;
    {
      struct kk_std_core_hnd_Ev* _con_x2326 = kk_std_core_hnd__as_Ev(ev_10785, _ctx);
      kk_box_t _box_x671 = _con_x2326->hnd;
      int32_t m = _con_x2326->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x671, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2327 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2327->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2327->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2327->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2327->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2327->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x675 = _ctl_fail.clause;
          kk_box_t _x_x2328;
          kk_string_t _x_x2329;
          kk_define_string_literal(, _s_x2330, 5, "alpha", _ctx)
          _x_x2329 = kk_string_dup(_s_x2330, _ctx); /*string*/
          _x_x2328 = kk_string_box(_x_x2329); /*45*/
          _x_x2325 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x675, (_fun_unbox_x675, m, ev_10785, _x_x2328, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2325, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x679 = _y_x10432._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x679, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(_y_x10432, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_alpha_fun2334__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_alpha_fun2334(kk_function_t _fself, kk_box_t _b_x693, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_fun2334(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_fun2334, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_alpha_fun2334(kk_function_t _fself, kk_box_t _b_x693, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2335;
  kk_std_core_types__maybe _match_x1817;
  kk_std_core_sslice__sslice _x_x2336 = kk_std_core_sslice__sslice_unbox(_b_x693, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1817 = kk_std_core_sslice_next(_x_x2336, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1817, _ctx)) {
    kk_box_t _box_x694 = _match_x1817._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x694, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x695 = _pat_0_0_0.fst;
      kk_box_t _box_x696 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x695, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_alpha(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x696, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1817, _ctx);
        kk_box_t _x_x2338;
        kk_std_core_types__tuple2 _x_x2339 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2338 = kk_std_core_types__tuple2_box(_x_x2339, _ctx); /*91*/
        _x_x2335 = kk_std_core_types__new_Just(_x_x2338, _ctx); /*maybe<91>*/
        goto _match_x2337;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1817, _ctx);
    _x_x2335 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2337: ;
  return kk_std_core_types__maybe_box(_x_x2335, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_alpha_fun2341__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_alpha_fun2341(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_fun2341(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_fun2341, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_alpha_fun2341(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2342;
  kk_std_core_types__maybe _x_x2343 = kk_std_core_types__maybe_unbox(_b_x705, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2342 = kk_std_text_parse__mlift_alpha_10555(_x_x2343, _ctx); /*char*/
  return kk_char_box(_x_x2342, _ctx);
}

kk_char_t kk_std_text_parse_alpha(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_std_core_hnd__ev ev_10791 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10788;
  kk_box_t _x_x2331;
  {
    struct kk_std_core_hnd_Ev* _con_x2332 = kk_std_core_hnd__as_Ev(ev_10791, _ctx);
    kk_box_t _box_x680 = _con_x2332->hnd;
    int32_t m = _con_x2332->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x680, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2333 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2333->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2333->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2333->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2333->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2333->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x687 = _fun_satisfy.clause;
        _x_x2331 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x687, (_fun_unbox_x687, m, ev_10791, kk_function_box(kk_std_text_parse_new_alpha_fun2334(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10788 = kk_std_core_types__maybe_unbox(_x_x2331, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10788, _ctx);
    kk_box_t _x_x2340 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_alpha_fun2341(_ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2340, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10788, _ctx)) {
    kk_std_core_hnd__ev ev_0_10794 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2344;
    {
      struct kk_std_core_hnd_Ev* _con_x2345 = kk_std_core_hnd__as_Ev(ev_0_10794, _ctx);
      kk_box_t _box_x706 = _con_x2345->hnd;
      int32_t m_0 = _con_x2345->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x706, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2346 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2346->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2346->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2346->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2346->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2346->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x710 = _ctl_fail.clause;
          kk_box_t _x_x2347;
          kk_string_t _x_x2348;
          kk_define_string_literal(, _s_x2349, 5, "alpha", _ctx)
          _x_x2348 = kk_string_dup(_s_x2349, _ctx); /*string*/
          _x_x2347 = kk_string_box(_x_x2348); /*45*/
          _x_x2344 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x710, (_fun_unbox_x710, m_0, ev_0_10794, _x_x2347, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2344, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x714 = x_10788._cons.Just.value;
    kk_char_t x_2 = kk_char_unbox(_box_x714, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(x_10788, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_alpha_num_10556(kk_std_core_types__maybe _y_x10435, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10435, _ctx)) {
    kk_std_core_hnd__ev ev_10797 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2350;
    {
      struct kk_std_core_hnd_Ev* _con_x2351 = kk_std_core_hnd__as_Ev(ev_10797, _ctx);
      kk_box_t _box_x716 = _con_x2351->hnd;
      int32_t m = _con_x2351->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x716, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2352 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2352->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2352->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2352->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2352->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2352->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x720 = _ctl_fail.clause;
          kk_box_t _x_x2353;
          kk_string_t _x_x2354;
          kk_define_string_literal(, _s_x2355, 9, "alpha-num", _ctx)
          _x_x2354 = kk_string_dup(_s_x2355, _ctx); /*string*/
          _x_x2353 = kk_string_box(_x_x2354); /*45*/
          _x_x2350 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x720, (_fun_unbox_x720, m, ev_10797, _x_x2353, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2350, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x724 = _y_x10435._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x724, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(_y_x10435, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_alpha_num_fun2359__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_alpha_num_fun2359(kk_function_t _fself, kk_box_t _b_x738, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_num_fun2359(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_num_fun2359, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_alpha_num_fun2359(kk_function_t _fself, kk_box_t _b_x738, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2360;
  kk_std_core_types__maybe _match_x1815;
  kk_std_core_sslice__sslice _x_x2361 = kk_std_core_sslice__sslice_unbox(_b_x738, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1815 = kk_std_core_sslice_next(_x_x2361, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1815, _ctx)) {
    kk_box_t _box_x739 = _match_x1815._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x739, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x740 = _pat_0_0_0.fst;
      kk_box_t _box_x741 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x740, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_alpha_num(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x741, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1815, _ctx);
        kk_box_t _x_x2363;
        kk_std_core_types__tuple2 _x_x2364 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2363 = kk_std_core_types__tuple2_box(_x_x2364, _ctx); /*91*/
        _x_x2360 = kk_std_core_types__new_Just(_x_x2363, _ctx); /*maybe<91>*/
        goto _match_x2362;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1815, _ctx);
    _x_x2360 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2362: ;
  return kk_std_core_types__maybe_box(_x_x2360, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_alpha_num_fun2366__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_alpha_num_fun2366(kk_function_t _fself, kk_box_t _b_x750, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_num_fun2366(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_num_fun2366, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_alpha_num_fun2366(kk_function_t _fself, kk_box_t _b_x750, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2367;
  kk_std_core_types__maybe _x_x2368 = kk_std_core_types__maybe_unbox(_b_x750, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2367 = kk_std_text_parse__mlift_alpha_num_10556(_x_x2368, _ctx); /*char*/
  return kk_char_box(_x_x2367, _ctx);
}

kk_char_t kk_std_text_parse_alpha_num(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_std_core_hnd__ev ev_10803 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10800;
  kk_box_t _x_x2356;
  {
    struct kk_std_core_hnd_Ev* _con_x2357 = kk_std_core_hnd__as_Ev(ev_10803, _ctx);
    kk_box_t _box_x725 = _con_x2357->hnd;
    int32_t m = _con_x2357->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x725, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2358 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2358->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2358->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2358->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2358->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2358->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x732 = _fun_satisfy.clause;
        _x_x2356 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x732, (_fun_unbox_x732, m, ev_10803, kk_function_box(kk_std_text_parse_new_alpha_num_fun2359(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10800 = kk_std_core_types__maybe_unbox(_x_x2356, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10800, _ctx);
    kk_box_t _x_x2365 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_alpha_num_fun2366(_ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2365, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10800, _ctx)) {
    kk_std_core_hnd__ev ev_0_10806 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2369;
    {
      struct kk_std_core_hnd_Ev* _con_x2370 = kk_std_core_hnd__as_Ev(ev_0_10806, _ctx);
      kk_box_t _box_x751 = _con_x2370->hnd;
      int32_t m_0 = _con_x2370->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x751, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2371 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2371->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2371->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2371->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2371->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2371->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x755 = _ctl_fail.clause;
          kk_box_t _x_x2372;
          kk_string_t _x_x2373;
          kk_define_string_literal(, _s_x2374, 9, "alpha-num", _ctx)
          _x_x2373 = kk_string_dup(_s_x2374, _ctx); /*string*/
          _x_x2372 = kk_string_box(_x_x2373); /*45*/
          _x_x2369 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x755, (_fun_unbox_x755, m_0, ev_0_10806, _x_x2372, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2369, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x759 = x_10800._cons.Just.value;
    kk_char_t x_2 = kk_char_unbox(_box_x759, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(x_10800, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_white_10557(kk_std_core_types__maybe _y_x10438, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10438, _ctx)) {
    kk_std_core_hnd__ev ev_10809 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2375;
    {
      struct kk_std_core_hnd_Ev* _con_x2376 = kk_std_core_hnd__as_Ev(ev_10809, _ctx);
      kk_box_t _box_x761 = _con_x2376->hnd;
      int32_t m = _con_x2376->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x761, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2377 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2377->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2377->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2377->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2377->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2377->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x765 = _ctl_fail.clause;
          kk_box_t _x_x2378;
          kk_string_t _x_x2379 = kk_string_empty(); /*string*/
          _x_x2378 = kk_string_box(_x_x2379); /*45*/
          _x_x2375 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x765, (_fun_unbox_x765, m, ev_10809, _x_x2378, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2375, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x769 = _y_x10438._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x769, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(_y_x10438, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_white_fun2384__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_white_fun2384(kk_function_t _fself, kk_box_t _b_x783, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_white_fun2384(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_white_fun2384, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_white_fun2384(kk_function_t _fself, kk_box_t _b_x783, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2385;
  kk_std_core_types__maybe _match_x1813;
  kk_std_core_sslice__sslice _x_x2386 = kk_std_core_sslice__sslice_unbox(_b_x783, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1813 = kk_std_core_sslice_next(_x_x2386, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1813, _ctx)) {
    kk_box_t _box_x784 = _match_x1813._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x784, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x785 = _pat_0_0_0.fst;
      kk_box_t _box_x786 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x785, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_white(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x786, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1813, _ctx);
        kk_box_t _x_x2388;
        kk_std_core_types__tuple2 _x_x2389 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2388 = kk_std_core_types__tuple2_box(_x_x2389, _ctx); /*91*/
        _x_x2385 = kk_std_core_types__new_Just(_x_x2388, _ctx); /*maybe<91>*/
        goto _match_x2387;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1813, _ctx);
    _x_x2385 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2387: ;
  return kk_std_core_types__maybe_box(_x_x2385, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_white_fun2391__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_white_fun2391(kk_function_t _fself, kk_box_t _b_x795, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_white_fun2391(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_white_fun2391, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_white_fun2391(kk_function_t _fself, kk_box_t _b_x795, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2392;
  kk_std_core_types__maybe _x_x2393 = kk_std_core_types__maybe_unbox(_b_x795, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2392 = kk_std_text_parse__mlift_white_10557(_x_x2393, _ctx); /*char*/
  return kk_char_box(_x_x2392, _ctx);
}

kk_char_t kk_std_text_parse_white(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_std_core_hnd__ev ev_10815 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10812;
  kk_box_t _x_x2381;
  {
    struct kk_std_core_hnd_Ev* _con_x2382 = kk_std_core_hnd__as_Ev(ev_10815, _ctx);
    kk_box_t _box_x770 = _con_x2382->hnd;
    int32_t m = _con_x2382->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x770, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2383 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2383->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2383->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2383->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2383->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2383->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x777 = _fun_satisfy.clause;
        _x_x2381 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x777, (_fun_unbox_x777, m, ev_10815, kk_function_box(kk_std_text_parse_new_white_fun2384(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10812 = kk_std_core_types__maybe_unbox(_x_x2381, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10812, _ctx);
    kk_box_t _x_x2390 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_white_fun2391(_ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2390, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10812, _ctx)) {
    kk_std_core_hnd__ev ev_0_10818 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2394;
    {
      struct kk_std_core_hnd_Ev* _con_x2395 = kk_std_core_hnd__as_Ev(ev_0_10818, _ctx);
      kk_box_t _box_x796 = _con_x2395->hnd;
      int32_t m_0 = _con_x2395->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x796, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2396 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2396->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2396->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2396->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2396->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2396->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x800 = _ctl_fail.clause;
          kk_box_t _x_x2397;
          kk_string_t _x_x2398 = kk_string_empty(); /*string*/
          _x_x2397 = kk_string_box(_x_x2398); /*45*/
          _x_x2394 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x800, (_fun_unbox_x800, m_0, ev_0_10818, _x_x2397, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2394, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x804 = x_10812._cons.Just.value;
    kk_char_t x_2 = kk_char_unbox(_box_x804, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(x_10812, _ctx);
    return x_2;
  }
}
 
// lifted local: whitespace, @spec-x10269
// specialized: std/text/parse/next-while0, on parameters @uniq-pred@10260, using:
// @uniq-pred@10260 = std/core/char/is-white

kk_std_core_types__tuple2 kk_std_text_parse__lift_whitespace_10348(kk_std_core_sslice__sslice _uniq_slice_10259, kk_std_core_types__list _uniq_acc_10261, kk_context_t* _ctx) { /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1811;
  kk_std_core_sslice__sslice _x_x2400 = kk_std_core_sslice__sslice_dup(_uniq_slice_10259, _ctx); /*sslice/sslice*/
  _match_x1811 = kk_std_core_sslice_next(_x_x2400, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1811, _ctx)) {
    kk_box_t _box_x806 = _match_x1811._cons.Just.value;
    kk_std_core_types__tuple2 _uniq_pat_0_10263 = kk_std_core_types__tuple2_unbox(_box_x806, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_uniq_pat_0_10263, _ctx)) {
      kk_box_t _box_x807 = _uniq_pat_0_10263.fst;
      kk_box_t _box_x808 = _uniq_pat_0_10263.snd;
      kk_char_t _uniq_c_10264 = kk_char_unbox(_box_x807, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_white(_uniq_c_10264, _ctx)) {
        kk_std_core_sslice__sslice _uniq_rest_10265 = kk_std_core_sslice__sslice_unbox(_box_x808, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(_uniq_slice_10259, _ctx);
        kk_std_core_sslice__sslice_dup(_uniq_rest_10265, _ctx);
        kk_std_core_types__maybe_drop(_match_x1811, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2401 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(_uniq_c_10264, _ctx), _uniq_acc_10261, _ctx); /*list<82>*/
          _uniq_slice_10259 = _uniq_rest_10265;
          _uniq_acc_10261 = _x_x2401;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1811, _ctx);
    kk_std_core_types__list _b_x811_815;
    if (kk_std_core_types__is_Nil(_uniq_acc_10261, _ctx)) {
      _b_x811_815 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x811_815 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), _uniq_acc_10261, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x811_815, _ctx), kk_std_core_sslice__sslice_box(_uniq_slice_10259, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_whitespace_10558_fun2409__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_whitespace_10558_fun2409(kk_function_t _fself, kk_box_t _b_x827, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_whitespace_10558_fun2409(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_whitespace_10558_fun2409, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_whitespace_10558_fun2409(kk_function_t _fself, kk_box_t _b_x827, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2410;
  kk_std_core_types__list _x_x2411 = kk_std_core_types__list_unbox(_b_x827, KK_OWNED, _ctx); /*list<char>*/
  _x_x2410 = kk_std_core_string_listchar_fs_string(_x_x2411, _ctx); /*string*/
  return kk_string_box(_x_x2410);
}

kk_string_t kk_std_text_parse__mlift_whitespace_10558(kk_std_core_types__maybe _y_x10441, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core_types__list x_10821;
  if (kk_std_core_types__is_Nothing(_y_x10441, _ctx)) {
    kk_std_core_hnd__ev ev_10823 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2402;
    {
      struct kk_std_core_hnd_Ev* _con_x2403 = kk_std_core_hnd__as_Ev(ev_10823, _ctx);
      kk_box_t _box_x817 = _con_x2403->hnd;
      int32_t m = _con_x2403->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x817, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2404 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2404->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2404->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2404->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2404->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2404->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x821 = _ctl_fail.clause;
          kk_box_t _x_x2405;
          kk_string_t _x_x2406 = kk_string_empty(); /*string*/
          _x_x2405 = kk_string_box(_x_x2406); /*45*/
          _x_x2402 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x821, (_fun_unbox_x821, m, ev_10823, _x_x2405, _ctx), _ctx); /*46*/
        }
      }
    }
    x_10821 = kk_std_core_types__list_unbox(_x_x2402, KK_OWNED, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x825 = _y_x10441._cons.Just.value;
    kk_std_core_types__list x_1 = kk_std_core_types__list_unbox(_box_x825, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_y_x10441, _ctx);
    x_10821 = x_1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10821, _ctx);
    kk_box_t _x_x2408 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_whitespace_10558_fun2409(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2408);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10821, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun2415__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace_fun2415(kk_function_t _fself, kk_box_t _b_x842, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun2415(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun2415, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace_fun2415(kk_function_t _fself, kk_box_t _b_x842, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2416;
  kk_std_core_types__tuple2 _match_x1809;
  kk_std_core_sslice__sslice _x_x2417 = kk_std_core_sslice__sslice_unbox(_b_x842, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1809 = kk_std_text_parse__lift_whitespace_10348(_x_x2417, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x843 = _match_x1809.fst;
    kk_box_t _box_x844 = _match_x1809.snd;
    kk_std_core_types__list _pat_0_0_0 = kk_std_core_types__list_unbox(_box_x843, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x844, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1809, _ctx);
      _x_x2416 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2418;
    }
  }
  {
    kk_box_t _box_x845 = _match_x1809.fst;
    kk_box_t _box_x846 = _match_x1809.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x846, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x845, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1809, _ctx);
    kk_box_t _x_x2419;
    kk_std_core_types__tuple2 _x_x2420 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2419 = kk_std_core_types__tuple2_box(_x_x2420, _ctx); /*91*/
    _x_x2416 = kk_std_core_types__new_Just(_x_x2419, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2418: ;
  return kk_std_core_types__maybe_box(_x_x2416, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun2422__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace_fun2422(kk_function_t _fself, kk_box_t _b_x855, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun2422(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun2422, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace_fun2422(kk_function_t _fself, kk_box_t _b_x855, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2423;
  kk_std_core_types__maybe _x_x2424 = kk_std_core_types__maybe_unbox(_b_x855, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2423 = kk_std_text_parse__mlift_whitespace_10558(_x_x2424, _ctx); /*string*/
  return kk_string_box(_x_x2423);
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun2432__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace_fun2432(kk_function_t _fself, kk_box_t _b_x866, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun2432(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun2432, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace_fun2432(kk_function_t _fself, kk_box_t _b_x866, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2433;
  kk_std_core_types__list _x_x2434 = kk_std_core_types__list_unbox(_b_x866, KK_OWNED, _ctx); /*list<char>*/
  _x_x2433 = kk_std_core_string_listchar_fs_string(_x_x2434, _ctx); /*string*/
  return kk_string_box(_x_x2433);
}

kk_string_t kk_std_text_parse_whitespace(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_10829 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10826;
  kk_box_t _x_x2412;
  {
    struct kk_std_core_hnd_Ev* _con_x2413 = kk_std_core_hnd__as_Ev(ev_10829, _ctx);
    kk_box_t _box_x829 = _con_x2413->hnd;
    int32_t m = _con_x2413->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x829, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2414 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2414->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2414->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2414->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2414->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2414->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x836 = _fun_satisfy.clause;
        _x_x2412 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x836, (_fun_unbox_x836, m, ev_10829, kk_function_box(kk_std_text_parse_new_whitespace_fun2415(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10826 = kk_std_core_types__maybe_unbox(_x_x2412, KK_OWNED, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10826, _ctx);
    kk_box_t _x_x2421 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace_fun2422(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2421);
  }
  {
    kk_std_core_types__list x_1_10832;
    if (kk_std_core_types__is_Nothing(x_10826, _ctx)) {
      kk_std_core_hnd__ev ev_0_10834 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_box_t _x_x2425;
      {
        struct kk_std_core_hnd_Ev* _con_x2426 = kk_std_core_hnd__as_Ev(ev_0_10834, _ctx);
        kk_box_t _box_x856 = _con_x2426->hnd;
        int32_t m_0 = _con_x2426->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x856, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2427 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
          kk_integer_t _pat_0_3 = _con_x2427->_cfc;
          kk_std_core_hnd__clause0 _pat_1_3 = _con_x2427->_fun_current_input;
          kk_std_core_hnd__clause1 _ctl_fail = _con_x2427->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_2_1 = _con_x2427->_ctl_pick;
          kk_std_core_hnd__clause1 _pat_3_1 = _con_x2427->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
            kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
            kk_integer_drop(_pat_0_3, _ctx);
            kk_datatype_ptr_free(h_0, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
            kk_datatype_ptr_decref(h_0, _ctx);
          }
          {
            kk_function_t _fun_unbox_x860 = _ctl_fail.clause;
            kk_box_t _x_x2428;
            kk_string_t _x_x2429 = kk_string_empty(); /*string*/
            _x_x2428 = kk_string_box(_x_x2429); /*45*/
            _x_x2425 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x860, (_fun_unbox_x860, m_0, ev_0_10834, _x_x2428, _ctx), _ctx); /*46*/
          }
        }
      }
      x_1_10832 = kk_std_core_types__list_unbox(_x_x2425, KK_OWNED, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x864 = x_10826._cons.Just.value;
      kk_std_core_types__list x_3 = kk_std_core_types__list_unbox(_box_x864, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(x_3, _ctx);
      kk_std_core_types__maybe_drop(x_10826, _ctx);
      x_1_10832 = x_3; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_1_10832, _ctx);
      kk_box_t _x_x2431 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace_fun2432(_ctx), _ctx); /*2978*/
      return kk_string_unbox(_x_x2431);
    }
    {
      return kk_std_core_string_listchar_fs_string(x_1_10832, _ctx);
    }
  }
}
 
// lifted local: whitespace0, @spec-x10280
// specialized: std/text/parse/next-while0, on parameters @uniq-pred@10271, using:
// @uniq-pred@10271 = std/core/char/is-white

kk_std_core_types__tuple2 kk_std_text_parse__lift_whitespace0_10349(kk_std_core_sslice__sslice _uniq_slice_10270, kk_std_core_types__list _uniq_acc_10272, kk_context_t* _ctx) { /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1806;
  kk_std_core_sslice__sslice _x_x2435 = kk_std_core_sslice__sslice_dup(_uniq_slice_10270, _ctx); /*sslice/sslice*/
  _match_x1806 = kk_std_core_sslice_next(_x_x2435, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1806, _ctx)) {
    kk_box_t _box_x869 = _match_x1806._cons.Just.value;
    kk_std_core_types__tuple2 _uniq_pat_0_10274 = kk_std_core_types__tuple2_unbox(_box_x869, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_uniq_pat_0_10274, _ctx)) {
      kk_box_t _box_x870 = _uniq_pat_0_10274.fst;
      kk_box_t _box_x871 = _uniq_pat_0_10274.snd;
      kk_char_t _uniq_c_10275 = kk_char_unbox(_box_x870, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_white(_uniq_c_10275, _ctx)) {
        kk_std_core_sslice__sslice _uniq_rest_10276 = kk_std_core_sslice__sslice_unbox(_box_x871, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(_uniq_slice_10270, _ctx);
        kk_std_core_sslice__sslice_dup(_uniq_rest_10276, _ctx);
        kk_std_core_types__maybe_drop(_match_x1806, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2436 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(_uniq_c_10275, _ctx), _uniq_acc_10272, _ctx); /*list<82>*/
          _uniq_slice_10270 = _uniq_rest_10276;
          _uniq_acc_10272 = _x_x2436;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1806, _ctx);
    kk_std_core_types__list _b_x874_878;
    if (kk_std_core_types__is_Nil(_uniq_acc_10272, _ctx)) {
      _b_x874_878 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x874_878 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), _uniq_acc_10272, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x874_878, _ctx), kk_std_core_sslice__sslice_box(_uniq_slice_10270, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_whitespace0_10559_fun2444__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_whitespace0_10559_fun2444(kk_function_t _fself, kk_box_t _b_x890, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_whitespace0_10559_fun2444(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_whitespace0_10559_fun2444, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_whitespace0_10559_fun2444(kk_function_t _fself, kk_box_t _b_x890, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2445;
  kk_std_core_types__list _x_x2446 = kk_std_core_types__list_unbox(_b_x890, KK_OWNED, _ctx); /*list<char>*/
  _x_x2445 = kk_std_core_string_listchar_fs_string(_x_x2446, _ctx); /*string*/
  return kk_string_box(_x_x2445);
}

kk_string_t kk_std_text_parse__mlift_whitespace0_10559(kk_std_core_types__maybe _y_x10445, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core_types__list x_10837;
  if (kk_std_core_types__is_Nothing(_y_x10445, _ctx)) {
    kk_std_core_hnd__ev ev_10839 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2437;
    {
      struct kk_std_core_hnd_Ev* _con_x2438 = kk_std_core_hnd__as_Ev(ev_10839, _ctx);
      kk_box_t _box_x880 = _con_x2438->hnd;
      int32_t m = _con_x2438->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x880, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2439 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2439->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2439->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2439->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2439->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2439->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x884 = _ctl_fail.clause;
          kk_box_t _x_x2440;
          kk_string_t _x_x2441 = kk_string_empty(); /*string*/
          _x_x2440 = kk_string_box(_x_x2441); /*45*/
          _x_x2437 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x884, (_fun_unbox_x884, m, ev_10839, _x_x2440, _ctx), _ctx); /*46*/
        }
      }
    }
    x_10837 = kk_std_core_types__list_unbox(_x_x2437, KK_OWNED, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x888 = _y_x10445._cons.Just.value;
    kk_std_core_types__list x_1 = kk_std_core_types__list_unbox(_box_x888, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_y_x10445, _ctx);
    x_10837 = x_1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10837, _ctx);
    kk_box_t _x_x2443 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_whitespace0_10559_fun2444(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2443);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10837, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_whitespace0_10560_fun2450__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_whitespace0_10560_fun2450(kk_function_t _fself, kk_box_t _b_x905, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_whitespace0_10560_fun2450(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_whitespace0_10560_fun2450, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_whitespace0_10560_fun2450(kk_function_t _fself, kk_box_t _b_x905, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2451;
  kk_std_core_types__tuple2 _match_x1804;
  kk_std_core_sslice__sslice _x_x2452 = kk_std_core_sslice__sslice_unbox(_b_x905, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1804 = kk_std_text_parse__lift_whitespace0_10349(_x_x2452, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x906 = _match_x1804.fst;
    kk_box_t _box_x907 = _match_x1804.snd;
    kk_std_core_types__list _pat_0_1_0 = kk_std_core_types__list_unbox(_box_x906, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x907, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_1_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1804, _ctx);
      _x_x2451 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2453;
    }
  }
  {
    kk_box_t _box_x908 = _match_x1804.fst;
    kk_box_t _box_x909 = _match_x1804.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x909, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x908, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1804, _ctx);
    kk_box_t _x_x2454;
    kk_std_core_types__tuple2 _x_x2455 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2454 = kk_std_core_types__tuple2_box(_x_x2455, _ctx); /*91*/
    _x_x2451 = kk_std_core_types__new_Just(_x_x2454, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2453: ;
  return kk_std_core_types__maybe_box(_x_x2451, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_whitespace0_10560_fun2457__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_whitespace0_10560_fun2457(kk_function_t _fself, kk_box_t _b_x918, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_whitespace0_10560_fun2457(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_whitespace0_10560_fun2457, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_whitespace0_10560_fun2457(kk_function_t _fself, kk_box_t _b_x918, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2458;
  kk_std_core_types__maybe _x_x2459 = kk_std_core_types__maybe_unbox(_b_x918, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2458 = kk_std_text_parse__mlift_whitespace0_10559(_x_x2459, _ctx); /*string*/
  return kk_string_box(_x_x2458);
}

kk_string_t kk_std_text_parse__mlift_whitespace0_10560(bool _y_x10444, kk_context_t* _ctx) { /* (bool) -> parse string */ 
  if (_y_x10444) {
    kk_std_core_hnd__ev ev_10844 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_std_core_types__maybe x_10842;
    kk_box_t _x_x2447;
    {
      struct kk_std_core_hnd_Ev* _con_x2448 = kk_std_core_hnd__as_Ev(ev_10844, _ctx);
      kk_box_t _box_x892 = _con_x2448->hnd;
      int32_t m = _con_x2448->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x892, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2449 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_0 = _con_x2449->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2449->_fun_current_input;
        kk_std_core_hnd__clause1 _pat_2 = _con_x2449->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_3 = _con_x2449->_ctl_pick;
        kk_std_core_hnd__clause1 _fun_satisfy = _con_x2449->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x899 = _fun_satisfy.clause;
          _x_x2447 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x899, (_fun_unbox_x899, m, ev_10844, kk_function_box(kk_std_text_parse__new_mlift_whitespace0_10560_fun2450(_ctx), _ctx), _ctx), _ctx); /*46*/
        }
      }
    }
    x_10842 = kk_std_core_types__maybe_unbox(_x_x2447, KK_OWNED, _ctx); /*maybe<list<char>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_10842, _ctx);
      kk_box_t _x_x2456 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_whitespace0_10560_fun2457(_ctx), _ctx); /*2978*/
      return kk_string_unbox(_x_x2456);
    }
    {
      return kk_std_text_parse__mlift_whitespace0_10559(x_10842, _ctx);
    }
  }
  {
    return kk_string_empty();
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun2465__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun2465(kk_function_t _fself, kk_box_t _b_x927, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun2465(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun2465, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace0_fun2465(kk_function_t _fself, kk_box_t _b_x927, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2466;
  bool _x_x2467 = kk_bool_unbox(_b_x927); /*bool*/
  _x_x2466 = kk_std_text_parse__mlift_whitespace0_10560(_x_x2467, _ctx); /*string*/
  return kk_string_box(_x_x2466);
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun2471__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun2471(kk_function_t _fself, kk_box_t _b_x941, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun2471(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun2471, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace0_fun2471(kk_function_t _fself, kk_box_t _b_x941, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2472;
  kk_std_core_types__tuple2 _match_x1802;
  kk_std_core_sslice__sslice _x_x2473 = kk_std_core_sslice__sslice_unbox(_b_x941, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1802 = kk_std_text_parse__lift_whitespace0_10349(_x_x2473, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x942 = _match_x1802.fst;
    kk_box_t _box_x943 = _match_x1802.snd;
    kk_std_core_types__list _pat_0_1_0 = kk_std_core_types__list_unbox(_box_x942, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x943, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_1_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1802, _ctx);
      _x_x2472 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2474;
    }
  }
  {
    kk_box_t _box_x944 = _match_x1802.fst;
    kk_box_t _box_x945 = _match_x1802.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x945, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x944, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1802, _ctx);
    kk_box_t _x_x2475;
    kk_std_core_types__tuple2 _x_x2476 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2475 = kk_std_core_types__tuple2_box(_x_x2476, _ctx); /*91*/
    _x_x2472 = kk_std_core_types__new_Just(_x_x2475, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2474: ;
  return kk_std_core_types__maybe_box(_x_x2472, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun2478__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun2478(kk_function_t _fself, kk_box_t _b_x954, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun2478(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun2478, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace0_fun2478(kk_function_t _fself, kk_box_t _b_x954, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2479;
  kk_std_core_types__maybe _x_x2480 = kk_std_core_types__maybe_unbox(_b_x954, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2479 = kk_std_text_parse__mlift_whitespace0_10559(_x_x2480, _ctx); /*string*/
  return kk_string_box(_x_x2479);
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun2488__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun2488(kk_function_t _fself, kk_box_t _b_x965, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun2488(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun2488, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace0_fun2488(kk_function_t _fself, kk_box_t _b_x965, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2489;
  kk_std_core_types__list _x_x2490 = kk_std_core_types__list_unbox(_b_x965, KK_OWNED, _ctx); /*list<char>*/
  _x_x2489 = kk_std_core_string_listchar_fs_string(_x_x2490, _ctx); /*string*/
  return kk_string_box(_x_x2489);
}

kk_string_t kk_std_text_parse_whitespace0(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_10850 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_10847;
  kk_box_t _x_x2461;
  {
    struct kk_std_core_hnd_Ev* _con_x2462 = kk_std_core_hnd__as_Ev(ev_10850, _ctx);
    kk_box_t _box_x920 = _con_x2462->hnd;
    int32_t m = _con_x2462->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x920, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2463 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2463->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2463->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2463->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x2463->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2463->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x923 = _ctl_pick.clause;
        _x_x2461 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x923, (_fun_unbox_x923, m, ev_10850, _ctx), _ctx); /*35*/
      }
    }
  }
  x_10847 = kk_bool_unbox(_x_x2461); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2464 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace0_fun2465(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2464);
  }
  if (x_10847) {
    kk_std_core_hnd__ev ev_0_10855 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_std_core_types__maybe x_0_10852;
    kk_box_t _x_x2468;
    {
      struct kk_std_core_hnd_Ev* _con_x2469 = kk_std_core_hnd__as_Ev(ev_0_10855, _ctx);
      kk_box_t _box_x928 = _con_x2469->hnd;
      int32_t m_0 = _con_x2469->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x928, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2470 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x2470->_cfc;
        kk_std_core_hnd__clause0 _pat_1_2 = _con_x2470->_fun_current_input;
        kk_std_core_hnd__clause1 _pat_2_1 = _con_x2470->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_3_1 = _con_x2470->_ctl_pick;
        kk_std_core_hnd__clause1 _fun_satisfy = _con_x2470->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause0_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause1_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x935 = _fun_satisfy.clause;
          _x_x2468 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x935, (_fun_unbox_x935, m_0, ev_0_10855, kk_function_box(kk_std_text_parse_new_whitespace0_fun2471(_ctx), _ctx), _ctx), _ctx); /*46*/
        }
      }
    }
    x_0_10852 = kk_std_core_types__maybe_unbox(_x_x2468, KK_OWNED, _ctx); /*maybe<list<char>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10852, _ctx);
      kk_box_t _x_x2477 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace0_fun2478(_ctx), _ctx); /*2978*/
      return kk_string_unbox(_x_x2477);
    }
    {
      kk_std_core_types__list x_2_10858;
      if (kk_std_core_types__is_Nothing(x_0_10852, _ctx)) {
        kk_std_core_hnd__ev ev_1_10860 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
        kk_box_t _x_x2481;
        {
          struct kk_std_core_hnd_Ev* _con_x2482 = kk_std_core_hnd__as_Ev(ev_1_10860, _ctx);
          kk_box_t _box_x955 = _con_x2482->hnd;
          int32_t m_1 = _con_x2482->marker;
          kk_std_text_parse__parse h_1 = kk_std_text_parse__parse_unbox(_box_x955, KK_BORROWED, _ctx);
          kk_std_text_parse__parse_dup(h_1, _ctx);
          {
            struct kk_std_text_parse__Hnd_parse* _con_x2483 = kk_std_text_parse__as_Hnd_parse(h_1, _ctx);
            kk_integer_t _pat_0_5 = _con_x2483->_cfc;
            kk_std_core_hnd__clause0 _pat_1_4 = _con_x2483->_fun_current_input;
            kk_std_core_hnd__clause1 _ctl_fail = _con_x2483->_ctl_fail;
            kk_std_core_hnd__clause0 _pat_2_2 = _con_x2483->_ctl_pick;
            kk_std_core_hnd__clause1 _pat_3_2 = _con_x2483->_fun_satisfy;
            if kk_likely(kk_datatype_ptr_is_unique(h_1, _ctx)) {
              kk_std_core_hnd__clause1_drop(_pat_3_2, _ctx);
              kk_std_core_hnd__clause0_drop(_pat_2_2, _ctx);
              kk_std_core_hnd__clause0_drop(_pat_1_4, _ctx);
              kk_integer_drop(_pat_0_5, _ctx);
              kk_datatype_ptr_free(h_1, _ctx);
            }
            else {
              kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
              kk_datatype_ptr_decref(h_1, _ctx);
            }
            {
              kk_function_t _fun_unbox_x959 = _ctl_fail.clause;
              kk_box_t _x_x2484;
              kk_string_t _x_x2485 = kk_string_empty(); /*string*/
              _x_x2484 = kk_string_box(_x_x2485); /*45*/
              _x_x2481 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x959, (_fun_unbox_x959, m_1, ev_1_10860, _x_x2484, _ctx), _ctx); /*46*/
            }
          }
        }
        x_2_10858 = kk_std_core_types__list_unbox(_x_x2481, KK_OWNED, _ctx); /*list<char>*/
      }
      else {
        kk_box_t _box_x963 = x_0_10852._cons.Just.value;
        kk_std_core_types__list x_4 = kk_std_core_types__list_unbox(_box_x963, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(x_4, _ctx);
        kk_std_core_types__maybe_drop(x_0_10852, _ctx);
        x_2_10858 = x_4; /*list<char>*/
      }
      if (kk_yielding(kk_context())) {
        kk_std_core_types__list_drop(x_2_10858, _ctx);
        kk_box_t _x_x2487 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace0_fun2488(_ctx), _ctx); /*2978*/
        return kk_string_unbox(_x_x2487);
      }
      {
        return kk_std_core_string_listchar_fs_string(x_2_10858, _ctx);
      }
    }
  }
  {
    return kk_string_empty();
  }
}
 
// lifted local: digits, @spec-x10291
// specialized: std/text/parse/next-while0, on parameters @uniq-pred@10282, using:
// @uniq-pred@10282 = std/core/char/is-digit

kk_std_core_types__tuple2 kk_std_text_parse__lift_digits_10350(kk_std_core_sslice__sslice _uniq_slice_10281, kk_std_core_types__list _uniq_acc_10283, kk_context_t* _ctx) { /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1798;
  kk_std_core_sslice__sslice _x_x2492 = kk_std_core_sslice__sslice_dup(_uniq_slice_10281, _ctx); /*sslice/sslice*/
  _match_x1798 = kk_std_core_sslice_next(_x_x2492, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1798, _ctx)) {
    kk_box_t _box_x969 = _match_x1798._cons.Just.value;
    kk_std_core_types__tuple2 _uniq_pat_0_10285 = kk_std_core_types__tuple2_unbox(_box_x969, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_uniq_pat_0_10285, _ctx)) {
      kk_box_t _box_x970 = _uniq_pat_0_10285.fst;
      kk_box_t _box_x971 = _uniq_pat_0_10285.snd;
      kk_char_t _uniq_c_10286 = kk_char_unbox(_box_x970, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_digit(_uniq_c_10286, _ctx)) {
        kk_std_core_sslice__sslice _uniq_rest_10287 = kk_std_core_sslice__sslice_unbox(_box_x971, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(_uniq_slice_10281, _ctx);
        kk_std_core_sslice__sslice_dup(_uniq_rest_10287, _ctx);
        kk_std_core_types__maybe_drop(_match_x1798, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2493 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(_uniq_c_10286, _ctx), _uniq_acc_10283, _ctx); /*list<82>*/
          _uniq_slice_10281 = _uniq_rest_10287;
          _uniq_acc_10283 = _x_x2493;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1798, _ctx);
    kk_std_core_types__list _b_x974_978;
    if (kk_std_core_types__is_Nil(_uniq_acc_10283, _ctx)) {
      _b_x974_978 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x974_978 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), _uniq_acc_10283, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x974_978, _ctx), kk_std_core_sslice__sslice_box(_uniq_slice_10281, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_digits_10561_fun2501__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_digits_10561_fun2501(kk_function_t _fself, kk_box_t _b_x990, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_digits_10561_fun2501(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_digits_10561_fun2501, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_digits_10561_fun2501(kk_function_t _fself, kk_box_t _b_x990, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2502;
  kk_std_core_types__list _x_x2503 = kk_std_core_types__list_unbox(_b_x990, KK_OWNED, _ctx); /*list<char>*/
  _x_x2502 = kk_std_core_string_listchar_fs_string(_x_x2503, _ctx); /*string*/
  return kk_string_box(_x_x2502);
}

kk_string_t kk_std_text_parse__mlift_digits_10561(kk_std_core_types__maybe _y_x10449, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core_types__list x_10863;
  if (kk_std_core_types__is_Nothing(_y_x10449, _ctx)) {
    kk_std_core_hnd__ev ev_10865 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2494;
    {
      struct kk_std_core_hnd_Ev* _con_x2495 = kk_std_core_hnd__as_Ev(ev_10865, _ctx);
      kk_box_t _box_x980 = _con_x2495->hnd;
      int32_t m = _con_x2495->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x980, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2496 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2496->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2496->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2496->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2496->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2496->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x984 = _ctl_fail.clause;
          kk_box_t _x_x2497;
          kk_string_t _x_x2498;
          kk_define_string_literal(, _s_x2499, 5, "digit", _ctx)
          _x_x2498 = kk_string_dup(_s_x2499, _ctx); /*string*/
          _x_x2497 = kk_string_box(_x_x2498); /*45*/
          _x_x2494 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x984, (_fun_unbox_x984, m, ev_10865, _x_x2497, _ctx), _ctx); /*46*/
        }
      }
    }
    x_10863 = kk_std_core_types__list_unbox(_x_x2494, KK_OWNED, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x988 = _y_x10449._cons.Just.value;
    kk_std_core_types__list x_1 = kk_std_core_types__list_unbox(_box_x988, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_y_x10449, _ctx);
    x_10863 = x_1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10863, _ctx);
    kk_box_t _x_x2500 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_digits_10561_fun2501(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2500);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10863, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits_fun2507__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits_fun2507(kk_function_t _fself, kk_box_t _b_x1005, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun2507(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun2507, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits_fun2507(kk_function_t _fself, kk_box_t _b_x1005, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2508;
  kk_std_core_types__tuple2 _match_x1796;
  kk_std_core_sslice__sslice _x_x2509 = kk_std_core_sslice__sslice_unbox(_b_x1005, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1796 = kk_std_text_parse__lift_digits_10350(_x_x2509, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x1006 = _match_x1796.fst;
    kk_box_t _box_x1007 = _match_x1796.snd;
    kk_std_core_types__list _pat_0_0_0 = kk_std_core_types__list_unbox(_box_x1006, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x1007, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1796, _ctx);
      _x_x2508 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2510;
    }
  }
  {
    kk_box_t _box_x1008 = _match_x1796.fst;
    kk_box_t _box_x1009 = _match_x1796.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1009, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x1008, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1796, _ctx);
    kk_box_t _x_x2511;
    kk_std_core_types__tuple2 _x_x2512 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2511 = kk_std_core_types__tuple2_box(_x_x2512, _ctx); /*91*/
    _x_x2508 = kk_std_core_types__new_Just(_x_x2511, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2510: ;
  return kk_std_core_types__maybe_box(_x_x2508, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digits_fun2514__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits_fun2514(kk_function_t _fself, kk_box_t _b_x1018, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun2514(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun2514, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits_fun2514(kk_function_t _fself, kk_box_t _b_x1018, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2515;
  kk_std_core_types__maybe _x_x2516 = kk_std_core_types__maybe_unbox(_b_x1018, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2515 = kk_std_text_parse__mlift_digits_10561(_x_x2516, _ctx); /*string*/
  return kk_string_box(_x_x2515);
}


// lift anonymous function
struct kk_std_text_parse_digits_fun2524__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits_fun2524(kk_function_t _fself, kk_box_t _b_x1029, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun2524(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun2524, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits_fun2524(kk_function_t _fself, kk_box_t _b_x1029, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2525;
  kk_std_core_types__list _x_x2526 = kk_std_core_types__list_unbox(_b_x1029, KK_OWNED, _ctx); /*list<char>*/
  _x_x2525 = kk_std_core_string_listchar_fs_string(_x_x2526, _ctx); /*string*/
  return kk_string_box(_x_x2525);
}

kk_string_t kk_std_text_parse_digits(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_10871 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10868;
  kk_box_t _x_x2504;
  {
    struct kk_std_core_hnd_Ev* _con_x2505 = kk_std_core_hnd__as_Ev(ev_10871, _ctx);
    kk_box_t _box_x992 = _con_x2505->hnd;
    int32_t m = _con_x2505->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x992, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2506 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2506->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2506->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2506->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2506->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2506->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x999 = _fun_satisfy.clause;
        _x_x2504 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x999, (_fun_unbox_x999, m, ev_10871, kk_function_box(kk_std_text_parse_new_digits_fun2507(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10868 = kk_std_core_types__maybe_unbox(_x_x2504, KK_OWNED, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10868, _ctx);
    kk_box_t _x_x2513 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits_fun2514(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2513);
  }
  {
    kk_std_core_types__list x_1_10874;
    if (kk_std_core_types__is_Nothing(x_10868, _ctx)) {
      kk_std_core_hnd__ev ev_0_10876 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_box_t _x_x2517;
      {
        struct kk_std_core_hnd_Ev* _con_x2518 = kk_std_core_hnd__as_Ev(ev_0_10876, _ctx);
        kk_box_t _box_x1019 = _con_x2518->hnd;
        int32_t m_0 = _con_x2518->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1019, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2519 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
          kk_integer_t _pat_0_3 = _con_x2519->_cfc;
          kk_std_core_hnd__clause0 _pat_1_3 = _con_x2519->_fun_current_input;
          kk_std_core_hnd__clause1 _ctl_fail = _con_x2519->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_2_1 = _con_x2519->_ctl_pick;
          kk_std_core_hnd__clause1 _pat_3_1 = _con_x2519->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
            kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
            kk_integer_drop(_pat_0_3, _ctx);
            kk_datatype_ptr_free(h_0, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
            kk_datatype_ptr_decref(h_0, _ctx);
          }
          {
            kk_function_t _fun_unbox_x1023 = _ctl_fail.clause;
            kk_box_t _x_x2520;
            kk_string_t _x_x2521;
            kk_define_string_literal(, _s_x2522, 5, "digit", _ctx)
            _x_x2521 = kk_string_dup(_s_x2522, _ctx); /*string*/
            _x_x2520 = kk_string_box(_x_x2521); /*45*/
            _x_x2517 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1023, (_fun_unbox_x1023, m_0, ev_0_10876, _x_x2520, _ctx), _ctx); /*46*/
          }
        }
      }
      x_1_10874 = kk_std_core_types__list_unbox(_x_x2517, KK_OWNED, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x1027 = x_10868._cons.Just.value;
      kk_std_core_types__list x_3 = kk_std_core_types__list_unbox(_box_x1027, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(x_3, _ctx);
      kk_std_core_types__maybe_drop(x_10868, _ctx);
      x_1_10874 = x_3; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_1_10874, _ctx);
      kk_box_t _x_x2523 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits_fun2524(_ctx), _ctx); /*2978*/
      return kk_string_unbox(_x_x2523);
    }
    {
      return kk_std_core_string_listchar_fs_string(x_1_10874, _ctx);
    }
  }
}
 
// lifted local: digits0, @spec-x10302
// specialized: std/text/parse/next-while0, on parameters @uniq-pred@10293, using:
// @uniq-pred@10293 = std/core/char/is-digit

kk_std_core_types__tuple2 kk_std_text_parse__lift_digits0_10351(kk_std_core_sslice__sslice _uniq_slice_10292, kk_std_core_types__list _uniq_acc_10294, kk_context_t* _ctx) { /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1793;
  kk_std_core_sslice__sslice _x_x2527 = kk_std_core_sslice__sslice_dup(_uniq_slice_10292, _ctx); /*sslice/sslice*/
  _match_x1793 = kk_std_core_sslice_next(_x_x2527, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1793, _ctx)) {
    kk_box_t _box_x1032 = _match_x1793._cons.Just.value;
    kk_std_core_types__tuple2 _uniq_pat_0_10296 = kk_std_core_types__tuple2_unbox(_box_x1032, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_uniq_pat_0_10296, _ctx)) {
      kk_box_t _box_x1033 = _uniq_pat_0_10296.fst;
      kk_box_t _box_x1034 = _uniq_pat_0_10296.snd;
      kk_char_t _uniq_c_10297 = kk_char_unbox(_box_x1033, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_digit(_uniq_c_10297, _ctx)) {
        kk_std_core_sslice__sslice _uniq_rest_10298 = kk_std_core_sslice__sslice_unbox(_box_x1034, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(_uniq_slice_10292, _ctx);
        kk_std_core_sslice__sslice_dup(_uniq_rest_10298, _ctx);
        kk_std_core_types__maybe_drop(_match_x1793, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2528 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(_uniq_c_10297, _ctx), _uniq_acc_10294, _ctx); /*list<82>*/
          _uniq_slice_10292 = _uniq_rest_10298;
          _uniq_acc_10294 = _x_x2528;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1793, _ctx);
    kk_std_core_types__list _b_x1037_1041;
    if (kk_std_core_types__is_Nil(_uniq_acc_10294, _ctx)) {
      _b_x1037_1041 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x1037_1041 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), _uniq_acc_10294, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x1037_1041, _ctx), kk_std_core_sslice__sslice_box(_uniq_slice_10292, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_digits0_10562_fun2536__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_digits0_10562_fun2536(kk_function_t _fself, kk_box_t _b_x1053, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_digits0_10562_fun2536(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_digits0_10562_fun2536, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_digits0_10562_fun2536(kk_function_t _fself, kk_box_t _b_x1053, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2537;
  kk_std_core_types__list _x_x2538 = kk_std_core_types__list_unbox(_b_x1053, KK_OWNED, _ctx); /*list<char>*/
  _x_x2537 = kk_std_core_string_listchar_fs_string(_x_x2538, _ctx); /*string*/
  return kk_string_box(_x_x2537);
}

kk_string_t kk_std_text_parse__mlift_digits0_10562(kk_std_core_types__maybe _y_x10453, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core_types__list x_10879;
  if (kk_std_core_types__is_Nothing(_y_x10453, _ctx)) {
    kk_std_core_hnd__ev ev_10881 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2529;
    {
      struct kk_std_core_hnd_Ev* _con_x2530 = kk_std_core_hnd__as_Ev(ev_10881, _ctx);
      kk_box_t _box_x1043 = _con_x2530->hnd;
      int32_t m = _con_x2530->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1043, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2531 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2531->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2531->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2531->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2531->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2531->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1047 = _ctl_fail.clause;
          kk_box_t _x_x2532;
          kk_string_t _x_x2533;
          kk_define_string_literal(, _s_x2534, 5, "digit", _ctx)
          _x_x2533 = kk_string_dup(_s_x2534, _ctx); /*string*/
          _x_x2532 = kk_string_box(_x_x2533); /*45*/
          _x_x2529 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1047, (_fun_unbox_x1047, m, ev_10881, _x_x2532, _ctx), _ctx); /*46*/
        }
      }
    }
    x_10879 = kk_std_core_types__list_unbox(_x_x2529, KK_OWNED, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x1051 = _y_x10453._cons.Just.value;
    kk_std_core_types__list x_1 = kk_std_core_types__list_unbox(_box_x1051, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_y_x10453, _ctx);
    x_10879 = x_1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10879, _ctx);
    kk_box_t _x_x2535 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_digits0_10562_fun2536(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2535);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10879, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_digits0_10563_fun2542__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_digits0_10563_fun2542(kk_function_t _fself, kk_box_t _b_x1068, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_digits0_10563_fun2542(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_digits0_10563_fun2542, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_digits0_10563_fun2542(kk_function_t _fself, kk_box_t _b_x1068, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2543;
  kk_std_core_types__tuple2 _match_x1791;
  kk_std_core_sslice__sslice _x_x2544 = kk_std_core_sslice__sslice_unbox(_b_x1068, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1791 = kk_std_text_parse__lift_digits0_10351(_x_x2544, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x1069 = _match_x1791.fst;
    kk_box_t _box_x1070 = _match_x1791.snd;
    kk_std_core_types__list _pat_0_1_0 = kk_std_core_types__list_unbox(_box_x1069, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x1070, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_1_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1791, _ctx);
      _x_x2543 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2545;
    }
  }
  {
    kk_box_t _box_x1071 = _match_x1791.fst;
    kk_box_t _box_x1072 = _match_x1791.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1072, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x1071, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1791, _ctx);
    kk_box_t _x_x2546;
    kk_std_core_types__tuple2 _x_x2547 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2546 = kk_std_core_types__tuple2_box(_x_x2547, _ctx); /*91*/
    _x_x2543 = kk_std_core_types__new_Just(_x_x2546, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2545: ;
  return kk_std_core_types__maybe_box(_x_x2543, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_digits0_10563_fun2549__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_digits0_10563_fun2549(kk_function_t _fself, kk_box_t _b_x1081, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_digits0_10563_fun2549(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_digits0_10563_fun2549, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_digits0_10563_fun2549(kk_function_t _fself, kk_box_t _b_x1081, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2550;
  kk_std_core_types__maybe _x_x2551 = kk_std_core_types__maybe_unbox(_b_x1081, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2550 = kk_std_text_parse__mlift_digits0_10562(_x_x2551, _ctx); /*string*/
  return kk_string_box(_x_x2550);
}

kk_string_t kk_std_text_parse__mlift_digits0_10563(bool _y_x10452, kk_context_t* _ctx) { /* (bool) -> parse string */ 
  if (_y_x10452) {
    kk_std_core_hnd__ev ev_10886 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_std_core_types__maybe x_10884;
    kk_box_t _x_x2539;
    {
      struct kk_std_core_hnd_Ev* _con_x2540 = kk_std_core_hnd__as_Ev(ev_10886, _ctx);
      kk_box_t _box_x1055 = _con_x2540->hnd;
      int32_t m = _con_x2540->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1055, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2541 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_0 = _con_x2541->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2541->_fun_current_input;
        kk_std_core_hnd__clause1 _pat_2 = _con_x2541->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_3 = _con_x2541->_ctl_pick;
        kk_std_core_hnd__clause1 _fun_satisfy = _con_x2541->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1062 = _fun_satisfy.clause;
          _x_x2539 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1062, (_fun_unbox_x1062, m, ev_10886, kk_function_box(kk_std_text_parse__new_mlift_digits0_10563_fun2542(_ctx), _ctx), _ctx), _ctx); /*46*/
        }
      }
    }
    x_10884 = kk_std_core_types__maybe_unbox(_x_x2539, KK_OWNED, _ctx); /*maybe<list<char>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_10884, _ctx);
      kk_box_t _x_x2548 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_digits0_10563_fun2549(_ctx), _ctx); /*2978*/
      return kk_string_unbox(_x_x2548);
    }
    {
      return kk_std_text_parse__mlift_digits0_10562(x_10884, _ctx);
    }
  }
  {
    kk_define_string_literal(, _s_x2552, 1, "0", _ctx)
    return kk_string_dup(_s_x2552, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun2557__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun2557(kk_function_t _fself, kk_box_t _b_x1090, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun2557(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun2557, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits0_fun2557(kk_function_t _fself, kk_box_t _b_x1090, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2558;
  bool _x_x2559 = kk_bool_unbox(_b_x1090); /*bool*/
  _x_x2558 = kk_std_text_parse__mlift_digits0_10563(_x_x2559, _ctx); /*string*/
  return kk_string_box(_x_x2558);
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun2563__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun2563(kk_function_t _fself, kk_box_t _b_x1104, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun2563(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun2563, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits0_fun2563(kk_function_t _fself, kk_box_t _b_x1104, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2564;
  kk_std_core_types__tuple2 _match_x1789;
  kk_std_core_sslice__sslice _x_x2565 = kk_std_core_sslice__sslice_unbox(_b_x1104, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1789 = kk_std_text_parse__lift_digits0_10351(_x_x2565, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x1105 = _match_x1789.fst;
    kk_box_t _box_x1106 = _match_x1789.snd;
    kk_std_core_types__list _pat_0_1_0 = kk_std_core_types__list_unbox(_box_x1105, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x1106, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_1_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1789, _ctx);
      _x_x2564 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2566;
    }
  }
  {
    kk_box_t _box_x1107 = _match_x1789.fst;
    kk_box_t _box_x1108 = _match_x1789.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1108, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x1107, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1789, _ctx);
    kk_box_t _x_x2567;
    kk_std_core_types__tuple2 _x_x2568 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2567 = kk_std_core_types__tuple2_box(_x_x2568, _ctx); /*91*/
    _x_x2564 = kk_std_core_types__new_Just(_x_x2567, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2566: ;
  return kk_std_core_types__maybe_box(_x_x2564, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun2570__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun2570(kk_function_t _fself, kk_box_t _b_x1117, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun2570(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun2570, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits0_fun2570(kk_function_t _fself, kk_box_t _b_x1117, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2571;
  kk_std_core_types__maybe _x_x2572 = kk_std_core_types__maybe_unbox(_b_x1117, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2571 = kk_std_text_parse__mlift_digits0_10562(_x_x2572, _ctx); /*string*/
  return kk_string_box(_x_x2571);
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun2580__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun2580(kk_function_t _fself, kk_box_t _b_x1128, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun2580(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun2580, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits0_fun2580(kk_function_t _fself, kk_box_t _b_x1128, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2581;
  kk_std_core_types__list _x_x2582 = kk_std_core_types__list_unbox(_b_x1128, KK_OWNED, _ctx); /*list<char>*/
  _x_x2581 = kk_std_core_string_listchar_fs_string(_x_x2582, _ctx); /*string*/
  return kk_string_box(_x_x2581);
}

kk_string_t kk_std_text_parse_digits0(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_10892 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_10889;
  kk_box_t _x_x2553;
  {
    struct kk_std_core_hnd_Ev* _con_x2554 = kk_std_core_hnd__as_Ev(ev_10892, _ctx);
    kk_box_t _box_x1083 = _con_x2554->hnd;
    int32_t m = _con_x2554->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1083, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2555 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2555->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2555->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2555->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x2555->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2555->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1086 = _ctl_pick.clause;
        _x_x2553 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1086, (_fun_unbox_x1086, m, ev_10892, _ctx), _ctx); /*35*/
      }
    }
  }
  x_10889 = kk_bool_unbox(_x_x2553); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2556 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits0_fun2557(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2556);
  }
  if (x_10889) {
    kk_std_core_hnd__ev ev_0_10897 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_std_core_types__maybe x_0_10894;
    kk_box_t _x_x2560;
    {
      struct kk_std_core_hnd_Ev* _con_x2561 = kk_std_core_hnd__as_Ev(ev_0_10897, _ctx);
      kk_box_t _box_x1091 = _con_x2561->hnd;
      int32_t m_0 = _con_x2561->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1091, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2562 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x2562->_cfc;
        kk_std_core_hnd__clause0 _pat_1_2 = _con_x2562->_fun_current_input;
        kk_std_core_hnd__clause1 _pat_2_1 = _con_x2562->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_3_1 = _con_x2562->_ctl_pick;
        kk_std_core_hnd__clause1 _fun_satisfy = _con_x2562->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause0_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause1_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1098 = _fun_satisfy.clause;
          _x_x2560 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1098, (_fun_unbox_x1098, m_0, ev_0_10897, kk_function_box(kk_std_text_parse_new_digits0_fun2563(_ctx), _ctx), _ctx), _ctx); /*46*/
        }
      }
    }
    x_0_10894 = kk_std_core_types__maybe_unbox(_x_x2560, KK_OWNED, _ctx); /*maybe<list<char>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10894, _ctx);
      kk_box_t _x_x2569 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits0_fun2570(_ctx), _ctx); /*2978*/
      return kk_string_unbox(_x_x2569);
    }
    {
      kk_std_core_types__list x_2_10900;
      if (kk_std_core_types__is_Nothing(x_0_10894, _ctx)) {
        kk_std_core_hnd__ev ev_1_10902 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
        kk_box_t _x_x2573;
        {
          struct kk_std_core_hnd_Ev* _con_x2574 = kk_std_core_hnd__as_Ev(ev_1_10902, _ctx);
          kk_box_t _box_x1118 = _con_x2574->hnd;
          int32_t m_1 = _con_x2574->marker;
          kk_std_text_parse__parse h_1 = kk_std_text_parse__parse_unbox(_box_x1118, KK_BORROWED, _ctx);
          kk_std_text_parse__parse_dup(h_1, _ctx);
          {
            struct kk_std_text_parse__Hnd_parse* _con_x2575 = kk_std_text_parse__as_Hnd_parse(h_1, _ctx);
            kk_integer_t _pat_0_5 = _con_x2575->_cfc;
            kk_std_core_hnd__clause0 _pat_1_4 = _con_x2575->_fun_current_input;
            kk_std_core_hnd__clause1 _ctl_fail = _con_x2575->_ctl_fail;
            kk_std_core_hnd__clause0 _pat_2_2 = _con_x2575->_ctl_pick;
            kk_std_core_hnd__clause1 _pat_3_2 = _con_x2575->_fun_satisfy;
            if kk_likely(kk_datatype_ptr_is_unique(h_1, _ctx)) {
              kk_std_core_hnd__clause1_drop(_pat_3_2, _ctx);
              kk_std_core_hnd__clause0_drop(_pat_2_2, _ctx);
              kk_std_core_hnd__clause0_drop(_pat_1_4, _ctx);
              kk_integer_drop(_pat_0_5, _ctx);
              kk_datatype_ptr_free(h_1, _ctx);
            }
            else {
              kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
              kk_datatype_ptr_decref(h_1, _ctx);
            }
            {
              kk_function_t _fun_unbox_x1122 = _ctl_fail.clause;
              kk_box_t _x_x2576;
              kk_string_t _x_x2577;
              kk_define_string_literal(, _s_x2578, 5, "digit", _ctx)
              _x_x2577 = kk_string_dup(_s_x2578, _ctx); /*string*/
              _x_x2576 = kk_string_box(_x_x2577); /*45*/
              _x_x2573 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1122, (_fun_unbox_x1122, m_1, ev_1_10902, _x_x2576, _ctx), _ctx); /*46*/
            }
          }
        }
        x_2_10900 = kk_std_core_types__list_unbox(_x_x2573, KK_OWNED, _ctx); /*list<char>*/
      }
      else {
        kk_box_t _box_x1126 = x_0_10894._cons.Just.value;
        kk_std_core_types__list x_4 = kk_std_core_types__list_unbox(_box_x1126, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(x_4, _ctx);
        kk_std_core_types__maybe_drop(x_0_10894, _ctx);
        x_2_10900 = x_4; /*list<char>*/
      }
      if (kk_yielding(kk_context())) {
        kk_std_core_types__list_drop(x_2_10900, _ctx);
        kk_box_t _x_x2579 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits0_fun2580(_ctx), _ctx); /*2978*/
        return kk_string_unbox(_x_x2579);
      }
      {
        return kk_std_core_string_listchar_fs_string(x_2_10900, _ctx);
      }
    }
  }
  {
    kk_define_string_literal(, _s_x2583, 1, "0", _ctx)
    return kk_string_dup(_s_x2583, _ctx);
  }
}
 
// lifted local: pnat, @spec-x10313
// specialized: std/text/parse/next-while0, on parameters @uniq-pred@10304, using:
// @uniq-pred@10304 = std/core/char/is-digit

kk_std_core_types__tuple2 kk_std_text_parse__lift_pnat_10352(kk_std_core_sslice__sslice _uniq_slice_10303, kk_std_core_types__list _uniq_acc_10305, kk_context_t* _ctx) { /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1785;
  kk_std_core_sslice__sslice _x_x2584 = kk_std_core_sslice__sslice_dup(_uniq_slice_10303, _ctx); /*sslice/sslice*/
  _match_x1785 = kk_std_core_sslice_next(_x_x2584, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1785, _ctx)) {
    kk_box_t _box_x1132 = _match_x1785._cons.Just.value;
    kk_std_core_types__tuple2 _uniq_pat_0_10307 = kk_std_core_types__tuple2_unbox(_box_x1132, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_uniq_pat_0_10307, _ctx)) {
      kk_box_t _box_x1133 = _uniq_pat_0_10307.fst;
      kk_box_t _box_x1134 = _uniq_pat_0_10307.snd;
      kk_char_t _uniq_c_10308 = kk_char_unbox(_box_x1133, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_digit(_uniq_c_10308, _ctx)) {
        kk_std_core_sslice__sslice _uniq_rest_10309 = kk_std_core_sslice__sslice_unbox(_box_x1134, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(_uniq_slice_10303, _ctx);
        kk_std_core_sslice__sslice_dup(_uniq_rest_10309, _ctx);
        kk_std_core_types__maybe_drop(_match_x1785, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2585 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(_uniq_c_10308, _ctx), _uniq_acc_10305, _ctx); /*list<82>*/
          _uniq_slice_10303 = _uniq_rest_10309;
          _uniq_acc_10305 = _x_x2585;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1785, _ctx);
    kk_std_core_types__list _b_x1137_1141;
    if (kk_std_core_types__is_Nil(_uniq_acc_10305, _ctx)) {
      _b_x1137_1141 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x1137_1141 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), _uniq_acc_10305, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x1137_1141, _ctx), kk_std_core_sslice__sslice_box(_uniq_slice_10303, _ctx), _ctx);
  }
}
 
// monadic lift

kk_integer_t kk_std_text_parse__mlift_pnat_10564(kk_std_core_types__list _c_x10459, kk_context_t* _ctx) { /* (list<char>) -> int */ 
  kk_string_t _x_x1_0_10524 = kk_std_core_string_listchar_fs_string(_c_x10459, _ctx); /*string*/;
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
  kk_std_core_types__maybe x;
  bool _x_x2586;
  kk_std_core_types__optional _match_x1784 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x1784, _ctx)) {
    kk_box_t _box_x1143 = _match_x1784._cons._Optional.value;
    bool _uniq_hex_528 = kk_bool_unbox(_box_x1143);
    kk_std_core_types__optional_drop(_match_x1784, _ctx);
    _x_x2586 = _uniq_hex_528; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x1784, _ctx);
    _x_x2586 = false; /*bool*/
  }
  x = kk_std_core_int_xparse(_x_x1_0_10524, _x_x2586, _ctx); /*maybe<int>*/
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
  kk_unit_t keep_0 = kk_Unit;
  kk_evv_set(w_0,kk_context());
  if (kk_std_core_types__is_Nothing(x, _ctx)) {
    return kk_integer_from_small(0);
  }
  {
    kk_box_t _box_x1144 = x._cons.Just.value;
    kk_integer_t x_1 = kk_integer_unbox(_box_x1144, _ctx);
    kk_integer_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(x, _ctx);
    return x_1;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_pnat_10565_fun2594__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pnat_10565_fun2594(kk_function_t _fself, kk_box_t _b_x1155, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pnat_10565_fun2594(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pnat_10565_fun2594, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pnat_10565_fun2594(kk_function_t _fself, kk_box_t _b_x1155, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2595;
  kk_std_core_types__list _x_x2596 = kk_std_core_types__list_unbox(_b_x1155, KK_OWNED, _ctx); /*list<char>*/
  _x_x2595 = kk_std_text_parse__mlift_pnat_10564(_x_x2596, _ctx); /*int*/
  return kk_integer_box(_x_x2595, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_pnat_10565(kk_std_core_types__maybe _y_x10457, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse int */ 
  kk_std_core_types__list x_10911;
  if (kk_std_core_types__is_Nothing(_y_x10457, _ctx)) {
    kk_std_core_hnd__ev ev_10913 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2587;
    {
      struct kk_std_core_hnd_Ev* _con_x2588 = kk_std_core_hnd__as_Ev(ev_10913, _ctx);
      kk_box_t _box_x1145 = _con_x2588->hnd;
      int32_t m = _con_x2588->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1145, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2589 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2589->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2589->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2589->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2589->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2589->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1149 = _ctl_fail.clause;
          kk_box_t _x_x2590;
          kk_string_t _x_x2591;
          kk_define_string_literal(, _s_x2592, 5, "digit", _ctx)
          _x_x2591 = kk_string_dup(_s_x2592, _ctx); /*string*/
          _x_x2590 = kk_string_box(_x_x2591); /*45*/
          _x_x2587 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1149, (_fun_unbox_x1149, m, ev_10913, _x_x2590, _ctx), _ctx); /*46*/
        }
      }
    }
    x_10911 = kk_std_core_types__list_unbox(_x_x2587, KK_OWNED, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x1153 = _y_x10457._cons.Just.value;
    kk_std_core_types__list x_0_0 = kk_std_core_types__list_unbox(_box_x1153, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_0_0, _ctx);
    kk_std_core_types__maybe_drop(_y_x10457, _ctx);
    x_10911 = x_0_0; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10911, _ctx);
    kk_box_t _x_x2593 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_pnat_10565_fun2594(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x2593, _ctx);
  }
  {
    return kk_std_text_parse__mlift_pnat_10564(x_10911, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun2600__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun2600(kk_function_t _fself, kk_box_t _b_x1170, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun2600(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun2600, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun2600(kk_function_t _fself, kk_box_t _b_x1170, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2601;
  kk_std_core_types__tuple2 _match_x1782;
  kk_std_core_sslice__sslice _x_x2602 = kk_std_core_sslice__sslice_unbox(_b_x1170, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1782 = kk_std_text_parse__lift_pnat_10352(_x_x2602, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x1171 = _match_x1782.fst;
    kk_box_t _box_x1172 = _match_x1782.snd;
    kk_std_core_types__list _pat_0_2 = kk_std_core_types__list_unbox(_box_x1171, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x1172, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_2, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1782, _ctx);
      _x_x2601 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2603;
    }
  }
  {
    kk_box_t _box_x1173 = _match_x1782.fst;
    kk_box_t _box_x1174 = _match_x1782.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1174, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x1173, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1782, _ctx);
    kk_box_t _x_x2604;
    kk_std_core_types__tuple2 _x_x2605 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2604 = kk_std_core_types__tuple2_box(_x_x2605, _ctx); /*91*/
    _x_x2601 = kk_std_core_types__new_Just(_x_x2604, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2603: ;
  return kk_std_core_types__maybe_box(_x_x2601, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun2607__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun2607(kk_function_t _fself, kk_box_t _b_x1183, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun2607(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun2607, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun2607(kk_function_t _fself, kk_box_t _b_x1183, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2608;
  kk_std_core_types__maybe _x_x2609 = kk_std_core_types__maybe_unbox(_b_x1183, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2608 = kk_std_text_parse__mlift_pnat_10565(_x_x2609, _ctx); /*int*/
  return kk_integer_box(_x_x2608, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun2617__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun2617(kk_function_t _fself, kk_box_t _b_x1194, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun2617(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun2617, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun2617(kk_function_t _fself, kk_box_t _b_x1194, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2618;
  kk_std_core_types__list _x_x2619 = kk_std_core_types__list_unbox(_b_x1194, KK_OWNED, _ctx); /*list<char>*/
  _x_x2618 = kk_std_text_parse__mlift_pnat_10564(_x_x2619, _ctx); /*int*/
  return kk_integer_box(_x_x2618, _ctx);
}

kk_integer_t kk_std_text_parse_pnat(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_std_core_hnd__ev ev_10919 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10916;
  kk_box_t _x_x2597;
  {
    struct kk_std_core_hnd_Ev* _con_x2598 = kk_std_core_hnd__as_Ev(ev_10919, _ctx);
    kk_box_t _box_x1157 = _con_x2598->hnd;
    int32_t m = _con_x2598->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1157, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2599 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2599->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2599->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2599->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2599->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2599->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1164 = _fun_satisfy.clause;
        _x_x2597 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1164, (_fun_unbox_x1164, m, ev_10919, kk_function_box(kk_std_text_parse_new_pnat_fun2600(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10916 = kk_std_core_types__maybe_unbox(_x_x2597, KK_OWNED, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10916, _ctx);
    kk_box_t _x_x2606 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pnat_fun2607(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x2606, _ctx);
  }
  {
    kk_std_core_types__list x_1_10922;
    if (kk_std_core_types__is_Nothing(x_10916, _ctx)) {
      kk_std_core_hnd__ev ev_0_10925 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_box_t _x_x2610;
      {
        struct kk_std_core_hnd_Ev* _con_x2611 = kk_std_core_hnd__as_Ev(ev_0_10925, _ctx);
        kk_box_t _box_x1184 = _con_x2611->hnd;
        int32_t m_0 = _con_x2611->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1184, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2612 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
          kk_integer_t _pat_0_4 = _con_x2612->_cfc;
          kk_std_core_hnd__clause0 _pat_1_2 = _con_x2612->_fun_current_input;
          kk_std_core_hnd__clause1 _ctl_fail = _con_x2612->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_2_2 = _con_x2612->_ctl_pick;
          kk_std_core_hnd__clause1 _pat_3_1 = _con_x2612->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
            kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_2_2, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
            kk_integer_drop(_pat_0_4, _ctx);
            kk_datatype_ptr_free(h_0, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
            kk_datatype_ptr_decref(h_0, _ctx);
          }
          {
            kk_function_t _fun_unbox_x1188 = _ctl_fail.clause;
            kk_box_t _x_x2613;
            kk_string_t _x_x2614;
            kk_define_string_literal(, _s_x2615, 5, "digit", _ctx)
            _x_x2614 = kk_string_dup(_s_x2615, _ctx); /*string*/
            _x_x2613 = kk_string_box(_x_x2614); /*45*/
            _x_x2610 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1188, (_fun_unbox_x1188, m_0, ev_0_10925, _x_x2613, _ctx), _ctx); /*46*/
          }
        }
      }
      x_1_10922 = kk_std_core_types__list_unbox(_x_x2610, KK_OWNED, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x1192 = x_10916._cons.Just.value;
      kk_std_core_types__list x_0_0 = kk_std_core_types__list_unbox(_box_x1192, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(x_0_0, _ctx);
      kk_std_core_types__maybe_drop(x_10916, _ctx);
      x_1_10922 = x_0_0; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_1_10922, _ctx);
      kk_box_t _x_x2616 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pnat_fun2617(_ctx), _ctx); /*2978*/
      return kk_integer_unbox(_x_x2616, _ctx);
    }
    {
      kk_string_t _x_x1_0_10524 = kk_std_core_string_listchar_fs_string(x_1_10922, _ctx); /*string*/;
      kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
      kk_std_core_types__maybe x_3;
      bool _x_x2620;
      kk_std_core_types__optional _match_x1781 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x1781, _ctx)) {
        kk_box_t _box_x1195 = _match_x1781._cons._Optional.value;
        bool _uniq_hex_528 = kk_bool_unbox(_box_x1195);
        kk_std_core_types__optional_drop(_match_x1781, _ctx);
        _x_x2620 = _uniq_hex_528; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x1781, _ctx);
        _x_x2620 = false; /*bool*/
      }
      x_3 = kk_std_core_int_xparse(_x_x1_0_10524, _x_x2620, _ctx); /*maybe<int>*/
      kk_unit_t keep = kk_Unit;
      kk_evv_set(w,kk_context());
      kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
      kk_unit_t keep_0 = kk_Unit;
      kk_evv_set(w_0,kk_context());
      if (kk_std_core_types__is_Nothing(x_3, _ctx)) {
        return kk_integer_from_small(0);
      }
      {
        kk_box_t _box_x1196 = x_3._cons.Just.value;
        kk_integer_t x_5 = kk_integer_unbox(_box_x1196, _ctx);
        kk_integer_dup(x_5, _ctx);
        kk_std_core_types__maybe_drop(x_3, _ctx);
        return x_5;
      }
    }
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_none_of_10566(kk_std_core_types__maybe _y_x10460, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10460, _ctx)) {
    kk_std_core_hnd__ev ev_10934 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2621;
    {
      struct kk_std_core_hnd_Ev* _con_x2622 = kk_std_core_hnd__as_Ev(ev_10934, _ctx);
      kk_box_t _box_x1199 = _con_x2622->hnd;
      int32_t m = _con_x2622->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1199, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2623 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2623->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2623->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2623->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2623->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2623->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1203 = _ctl_fail.clause;
          kk_box_t _x_x2624;
          kk_string_t _x_x2625 = kk_string_empty(); /*string*/
          _x_x2624 = kk_string_box(_x_x2625); /*45*/
          _x_x2621 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1203, (_fun_unbox_x1203, m, ev_10934, _x_x2624, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2621, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x1207 = _y_x10460._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x1207, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(_y_x10460, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_none_of_fun2630__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_box_t kk_std_text_parse_none_of_fun2630(kk_function_t _fself, kk_box_t _b_x1221, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_fun2630(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_fun2630__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_fun2630__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_none_of_fun2630, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_none_of_fun2630(kk_function_t _fself, kk_box_t _b_x1221, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_fun2630__t* _self = kk_function_as(struct kk_std_text_parse_none_of_fun2630__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2631;
  kk_std_core_types__maybe _match_x1778;
  kk_std_core_sslice__sslice _x_x2632 = kk_std_core_sslice__sslice_unbox(_b_x1221, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1778 = kk_std_core_sslice_next(_x_x2632, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1778, _ctx)) {
    kk_box_t _box_x1222 = _match_x1778._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x1222, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x1223 = _pat_0_0_0.fst;
      kk_box_t _box_x1224 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x1223, KK_BORROWED, _ctx);
      bool b_10109;
      kk_string_t _x_x2634 = kk_string_dup(chars, _ctx); /*string*/
      kk_string_t _x_x2635 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      b_10109 = kk_string_contains(_x_x2634,_x_x2635,kk_context()); /*bool*/
      bool _x_x2636;
      if (b_10109) {
        _x_x2636 = false; /*bool*/
      }
      else {
        _x_x2636 = true; /*bool*/
      }
      if (_x_x2636) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1224, KK_BORROWED, _ctx);
        kk_string_drop(chars, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1778, _ctx);
        kk_box_t _x_x2637;
        kk_std_core_types__tuple2 _x_x2638 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2637 = kk_std_core_types__tuple2_box(_x_x2638, _ctx); /*91*/
        _x_x2631 = kk_std_core_types__new_Just(_x_x2637, _ctx); /*maybe<91>*/
        goto _match_x2633;
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_x1778, _ctx);
    _x_x2631 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2633: ;
  return kk_std_core_types__maybe_box(_x_x2631, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_none_of_fun2640__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_none_of_fun2640(kk_function_t _fself, kk_box_t _b_x1233, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_fun2640(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_none_of_fun2640, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_none_of_fun2640(kk_function_t _fself, kk_box_t _b_x1233, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2641;
  kk_std_core_types__maybe _x_x2642 = kk_std_core_types__maybe_unbox(_b_x1233, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2641 = kk_std_text_parse__mlift_none_of_10566(_x_x2642, _ctx); /*char*/
  return kk_char_box(_x_x2641, _ctx);
}

kk_char_t kk_std_text_parse_none_of(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse char */ 
  kk_std_core_hnd__ev ev_10940 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10937;
  kk_box_t _x_x2627;
  {
    struct kk_std_core_hnd_Ev* _con_x2628 = kk_std_core_hnd__as_Ev(ev_10940, _ctx);
    kk_box_t _box_x1208 = _con_x2628->hnd;
    int32_t m = _con_x2628->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1208, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2629 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2629->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2629->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2629->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2629->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2629->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1215 = _fun_satisfy.clause;
        _x_x2627 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1215, (_fun_unbox_x1215, m, ev_10940, kk_function_box(kk_std_text_parse_new_none_of_fun2630(chars, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10937 = kk_std_core_types__maybe_unbox(_x_x2627, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10937, _ctx);
    kk_box_t _x_x2639 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_none_of_fun2640(_ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2639, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10937, _ctx)) {
    kk_std_core_hnd__ev ev_0_10943 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2643;
    {
      struct kk_std_core_hnd_Ev* _con_x2644 = kk_std_core_hnd__as_Ev(ev_0_10943, _ctx);
      kk_box_t _box_x1234 = _con_x2644->hnd;
      int32_t m_0 = _con_x2644->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1234, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2645 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x2645->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2645->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2645->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2645->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2645->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1238 = _ctl_fail.clause;
          kk_box_t _x_x2646;
          kk_string_t _x_x2647 = kk_string_empty(); /*string*/
          _x_x2646 = kk_string_box(_x_x2647); /*45*/
          _x_x2643 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1238, (_fun_unbox_x1238, m_0, ev_0_10943, _x_x2646, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2643, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x1242 = x_10937._cons.Just.value;
    kk_char_t x_2 = kk_char_unbox(_box_x1242, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(x_10937, _ctx);
    return x_2;
  }
}
 
// lifted local: none-of-many1, @spec-x10324
// specialized: std/text/parse/next-while0, on parameters @uniq-pred@10315, using:
// @uniq-pred@10315 = fn(c: char){
//   val b@10116 : bool
//         = std/core/string/contains(chars, (std/core/string/char/string(c)));
//   match (b@10116) {
//     ((std/core/types/True() : bool ) as @pat@9: bool)
//        -> std/core/types/False;
//     ((@skip std/core/types/False() : bool ) as @pat@0@1: bool)
//        -> std/core/types/True;
//   };
// }

kk_std_core_types__tuple2 kk_std_text_parse__lift_none_of_many1_10353(kk_string_t chars, kk_std_core_sslice__sslice _uniq_slice_10314, kk_std_core_types__list _uniq_acc_10316, kk_context_t* _ctx) { /* (chars : string, sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1776;
  kk_std_core_sslice__sslice _x_x2649 = kk_std_core_sslice__sslice_dup(_uniq_slice_10314, _ctx); /*sslice/sslice*/
  _match_x1776 = kk_std_core_sslice_next(_x_x2649, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1776, _ctx)) {
    kk_box_t _box_x1244 = _match_x1776._cons.Just.value;
    kk_std_core_types__tuple2 _uniq_pat_0_10318 = kk_std_core_types__tuple2_unbox(_box_x1244, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_uniq_pat_0_10318, _ctx)) {
      kk_box_t _box_x1245 = _uniq_pat_0_10318.fst;
      kk_box_t _box_x1246 = _uniq_pat_0_10318.snd;
      kk_char_t _uniq_c_10319 = kk_char_unbox(_box_x1245, KK_BORROWED, _ctx);
      bool b_10116;
      kk_string_t _x_x2650 = kk_string_dup(chars, _ctx); /*string*/
      kk_string_t _x_x2651 = kk_std_core_string_char_fs_string(_uniq_c_10319, _ctx); /*string*/
      b_10116 = kk_string_contains(_x_x2650,_x_x2651,kk_context()); /*bool*/
      bool _x_x2652;
      if (b_10116) {
        _x_x2652 = false; /*bool*/
      }
      else {
        _x_x2652 = true; /*bool*/
      }
      if (_x_x2652) {
        kk_std_core_sslice__sslice _uniq_rest_10320 = kk_std_core_sslice__sslice_unbox(_box_x1246, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(_uniq_slice_10314, _ctx);
        kk_std_core_sslice__sslice_dup(_uniq_rest_10320, _ctx);
        kk_std_core_types__maybe_drop(_match_x1776, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2653 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(_uniq_c_10319, _ctx), _uniq_acc_10316, _ctx); /*list<82>*/
          _uniq_slice_10314 = _uniq_rest_10320;
          _uniq_acc_10316 = _x_x2653;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_x1776, _ctx);
    kk_std_core_types__list _b_x1249_1253;
    if (kk_std_core_types__is_Nil(_uniq_acc_10316, _ctx)) {
      _b_x1249_1253 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x1249_1253 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), _uniq_acc_10316, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x1249_1253, _ctx), kk_std_core_sslice__sslice_box(_uniq_slice_10314, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_none_of_many1_10567_fun2661__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_none_of_many1_10567_fun2661(kk_function_t _fself, kk_box_t _b_x1265, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_none_of_many1_10567_fun2661(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_none_of_many1_10567_fun2661, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_none_of_many1_10567_fun2661(kk_function_t _fself, kk_box_t _b_x1265, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2662;
  kk_std_core_types__list _x_x2663 = kk_std_core_types__list_unbox(_b_x1265, KK_OWNED, _ctx); /*list<char>*/
  _x_x2662 = kk_std_core_string_listchar_fs_string(_x_x2663, _ctx); /*string*/
  return kk_string_box(_x_x2662);
}

kk_string_t kk_std_text_parse__mlift_none_of_many1_10567(kk_std_core_types__maybe _y_x10463, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core_types__list x_10946;
  if (kk_std_core_types__is_Nothing(_y_x10463, _ctx)) {
    kk_std_core_hnd__ev ev_10948 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2654;
    {
      struct kk_std_core_hnd_Ev* _con_x2655 = kk_std_core_hnd__as_Ev(ev_10948, _ctx);
      kk_box_t _box_x1255 = _con_x2655->hnd;
      int32_t m = _con_x2655->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1255, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2656 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2656->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2656->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2656->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2656->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2656->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1259 = _ctl_fail.clause;
          kk_box_t _x_x2657;
          kk_string_t _x_x2658 = kk_string_empty(); /*string*/
          _x_x2657 = kk_string_box(_x_x2658); /*45*/
          _x_x2654 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1259, (_fun_unbox_x1259, m, ev_10948, _x_x2657, _ctx), _ctx); /*46*/
        }
      }
    }
    x_10946 = kk_std_core_types__list_unbox(_x_x2654, KK_OWNED, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x1263 = _y_x10463._cons.Just.value;
    kk_std_core_types__list x_1 = kk_std_core_types__list_unbox(_box_x1263, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_y_x10463, _ctx);
    x_10946 = x_1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10946, _ctx);
    kk_box_t _x_x2660 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_none_of_many1_10567_fun2661(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2660);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10946, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun2667__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_box_t kk_std_text_parse_none_of_many1_fun2667(kk_function_t _fself, kk_box_t _b_x1280, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun2667(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun2667__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_many1_fun2667__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_none_of_many1_fun2667, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_none_of_many1_fun2667(kk_function_t _fself, kk_box_t _b_x1280, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun2667__t* _self = kk_function_as(struct kk_std_text_parse_none_of_many1_fun2667__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2668;
  kk_std_core_types__tuple2 _match_x1774;
  kk_std_core_sslice__sslice _x_x2669 = kk_std_core_sslice__sslice_unbox(_b_x1280, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1774 = kk_std_text_parse__lift_none_of_many1_10353(chars, _x_x2669, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x1281 = _match_x1774.fst;
    kk_box_t _box_x1282 = _match_x1774.snd;
    kk_std_core_types__list _pat_0_0_0 = kk_std_core_types__list_unbox(_box_x1281, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x1282, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1774, _ctx);
      _x_x2668 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2670;
    }
  }
  {
    kk_box_t _box_x1283 = _match_x1774.fst;
    kk_box_t _box_x1284 = _match_x1774.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1284, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x1283, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1774, _ctx);
    kk_box_t _x_x2671;
    kk_std_core_types__tuple2 _x_x2672 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2671 = kk_std_core_types__tuple2_box(_x_x2672, _ctx); /*91*/
    _x_x2668 = kk_std_core_types__new_Just(_x_x2671, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2670: ;
  return kk_std_core_types__maybe_box(_x_x2668, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun2674__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_none_of_many1_fun2674(kk_function_t _fself, kk_box_t _b_x1293, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun2674(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_none_of_many1_fun2674, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_none_of_many1_fun2674(kk_function_t _fself, kk_box_t _b_x1293, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2675;
  kk_std_core_types__maybe _x_x2676 = kk_std_core_types__maybe_unbox(_b_x1293, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2675 = kk_std_text_parse__mlift_none_of_many1_10567(_x_x2676, _ctx); /*string*/
  return kk_string_box(_x_x2675);
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun2684__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_none_of_many1_fun2684(kk_function_t _fself, kk_box_t _b_x1304, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun2684(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_none_of_many1_fun2684, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_none_of_many1_fun2684(kk_function_t _fself, kk_box_t _b_x1304, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2685;
  kk_std_core_types__list _x_x2686 = kk_std_core_types__list_unbox(_b_x1304, KK_OWNED, _ctx); /*list<char>*/
  _x_x2685 = kk_std_core_string_listchar_fs_string(_x_x2686, _ctx); /*string*/
  return kk_string_box(_x_x2685);
}

kk_string_t kk_std_text_parse_none_of_many1(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse string */ 
  kk_std_core_hnd__ev ev_10954 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10951;
  kk_box_t _x_x2664;
  {
    struct kk_std_core_hnd_Ev* _con_x2665 = kk_std_core_hnd__as_Ev(ev_10954, _ctx);
    kk_box_t _box_x1267 = _con_x2665->hnd;
    int32_t m = _con_x2665->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1267, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2666 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2666->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2666->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2666->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2666->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2666->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1274 = _fun_satisfy.clause;
        _x_x2664 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1274, (_fun_unbox_x1274, m, ev_10954, kk_function_box(kk_std_text_parse_new_none_of_many1_fun2667(chars, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10951 = kk_std_core_types__maybe_unbox(_x_x2664, KK_OWNED, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10951, _ctx);
    kk_box_t _x_x2673 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_none_of_many1_fun2674(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2673);
  }
  {
    kk_std_core_types__list x_1_10957;
    if (kk_std_core_types__is_Nothing(x_10951, _ctx)) {
      kk_std_core_hnd__ev ev_0_10959 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_box_t _x_x2677;
      {
        struct kk_std_core_hnd_Ev* _con_x2678 = kk_std_core_hnd__as_Ev(ev_0_10959, _ctx);
        kk_box_t _box_x1294 = _con_x2678->hnd;
        int32_t m_0 = _con_x2678->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1294, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2679 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
          kk_integer_t _pat_0_3 = _con_x2679->_cfc;
          kk_std_core_hnd__clause0 _pat_1_3 = _con_x2679->_fun_current_input;
          kk_std_core_hnd__clause1 _ctl_fail = _con_x2679->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_2_1 = _con_x2679->_ctl_pick;
          kk_std_core_hnd__clause1 _pat_3_1 = _con_x2679->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
            kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
            kk_integer_drop(_pat_0_3, _ctx);
            kk_datatype_ptr_free(h_0, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
            kk_datatype_ptr_decref(h_0, _ctx);
          }
          {
            kk_function_t _fun_unbox_x1298 = _ctl_fail.clause;
            kk_box_t _x_x2680;
            kk_string_t _x_x2681 = kk_string_empty(); /*string*/
            _x_x2680 = kk_string_box(_x_x2681); /*45*/
            _x_x2677 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1298, (_fun_unbox_x1298, m_0, ev_0_10959, _x_x2680, _ctx), _ctx); /*46*/
          }
        }
      }
      x_1_10957 = kk_std_core_types__list_unbox(_x_x2677, KK_OWNED, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x1302 = x_10951._cons.Just.value;
      kk_std_core_types__list x_3 = kk_std_core_types__list_unbox(_box_x1302, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(x_3, _ctx);
      kk_std_core_types__maybe_drop(x_10951, _ctx);
      x_1_10957 = x_3; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_1_10957, _ctx);
      kk_box_t _x_x2683 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_none_of_many1_fun2684(_ctx), _ctx); /*2978*/
      return kk_string_unbox(_x_x2683);
    }
    {
      return kk_std_core_string_listchar_fs_string(x_1_10957, _ctx);
    }
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_one_of_10568(kk_string_t chars, kk_std_core_types__maybe _y_x10466, kk_context_t* _ctx) { /* (chars : string, maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10466, _ctx)) {
    kk_std_core_hnd__ev ev_10962 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2687;
    {
      struct kk_std_core_hnd_Ev* _con_x2688 = kk_std_core_hnd__as_Ev(ev_10962, _ctx);
      kk_box_t _box_x1307 = _con_x2688->hnd;
      int32_t m = _con_x2688->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1307, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2689 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2689->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2689->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2689->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2689->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2689->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1311 = _ctl_fail.clause;
          _x_x2687 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1311, (_fun_unbox_x1311, m, ev_10962, kk_string_box(chars), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2687, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x1315 = _y_x10466._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x1315, KK_BORROWED, _ctx);
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_y_x10466, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_one_of_fun2695__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_box_t kk_std_text_parse_one_of_fun2695(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_one_of_fun2695(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun2695__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_fun2695__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_one_of_fun2695, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_one_of_fun2695(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun2695__t* _self = kk_function_as(struct kk_std_text_parse_one_of_fun2695__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x2696;
  kk_std_core_types__maybe _match_x1771;
  kk_std_core_sslice__sslice _x_x2697 = kk_std_core_sslice__sslice_unbox(_b_x1329, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1771 = kk_std_core_sslice_next(_x_x2697, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1771, _ctx)) {
    kk_box_t _box_x1330 = _match_x1771._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x1330, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x1331 = _pat_0_0_0.fst;
      kk_box_t _box_x1332 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x1331, KK_BORROWED, _ctx);
      kk_string_t _x_x2699 = kk_string_dup(chars, _ctx); /*string*/
      kk_string_t _x_x2700 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x2699,_x_x2700,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1332, KK_BORROWED, _ctx);
        kk_string_drop(chars, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1771, _ctx);
        kk_box_t _x_x2701;
        kk_std_core_types__tuple2 _x_x2702 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2701 = kk_std_core_types__tuple2_box(_x_x2702, _ctx); /*91*/
        _x_x2696 = kk_std_core_types__new_Just(_x_x2701, _ctx); /*maybe<91>*/
        goto _match_x2698;
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_x1771, _ctx);
    _x_x2696 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2698: ;
  return kk_std_core_types__maybe_box(_x_x2696, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_one_of_fun2704__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_box_t kk_std_text_parse_one_of_fun2704(kk_function_t _fself, kk_box_t _b_x1341, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_one_of_fun2704(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun2704__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_fun2704__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_one_of_fun2704, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_one_of_fun2704(kk_function_t _fself, kk_box_t _b_x1341, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun2704__t* _self = kk_function_as(struct kk_std_text_parse_one_of_fun2704__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10466_1352 = kk_std_core_types__maybe_unbox(_b_x1341, KK_OWNED, _ctx); /*maybe<char>*/;
  kk_char_t _x_x2705 = kk_std_text_parse__mlift_one_of_10568(chars, _y_x10466_1352, _ctx); /*char*/
  return kk_char_box(_x_x2705, _ctx);
}

kk_char_t kk_std_text_parse_one_of(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse char */ 
  kk_std_core_hnd__ev ev_10968 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10965;
  kk_box_t _x_x2690;
  {
    struct kk_std_core_hnd_Ev* _con_x2691 = kk_std_core_hnd__as_Ev(ev_10968, _ctx);
    kk_box_t _box_x1316 = _con_x2691->hnd;
    int32_t m = _con_x2691->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1316, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2692 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2692->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2692->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2692->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2692->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2692->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1323 = _fun_satisfy.clause;
        kk_box_t _x_x2693;
        kk_function_t _x_x2694;
        kk_string_dup(chars, _ctx);
        _x_x2694 = kk_std_text_parse_new_one_of_fun2695(chars, _ctx); /*(1327) -> 1328*/
        _x_x2693 = kk_function_box(_x_x2694, _ctx); /*45*/
        _x_x2690 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1323, (_fun_unbox_x1323, m, ev_10968, _x_x2693, _ctx), _ctx); /*46*/
      }
    }
  }
  x_10965 = kk_std_core_types__maybe_unbox(_x_x2690, KK_OWNED, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10965, _ctx);
    kk_box_t _x_x2703 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_one_of_fun2704(chars, _ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2703, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10965, _ctx)) {
    kk_std_core_hnd__ev ev_0_10971 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2706;
    {
      struct kk_std_core_hnd_Ev* _con_x2707 = kk_std_core_hnd__as_Ev(ev_0_10971, _ctx);
      kk_box_t _box_x1342 = _con_x2707->hnd;
      int32_t m_0 = _con_x2707->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1342, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2708 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x2708->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x2708->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2708->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x2708->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x2708->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1346 = _ctl_fail.clause;
          _x_x2706 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1346, (_fun_unbox_x1346, m_0, ev_0_10971, kk_string_box(chars), _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2706, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x1350 = x_10965._cons.Just.value;
    kk_char_t x_2 = kk_char_unbox(_box_x1350, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(x_10965, _ctx);
    kk_string_drop(chars, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_text_parse__mlift_many_acc_10569(kk_std_core_types__list acc, kk_function_t p, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 
  kk_std_core_types__list _x_x2709 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x, acc, _ctx); /*list<82>*/
  return kk_std_text_parse_many_acc(p, _x_x2709, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_many_acc_10570_fun2712__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
  kk_function_t p_0;
};
static kk_box_t kk_std_text_parse__mlift_many_acc_10570_fun2712(kk_function_t _fself, kk_box_t _b_x1354, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_many_acc_10570_fun2712(kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_many_acc_10570_fun2712__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_many_acc_10570_fun2712__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_many_acc_10570_fun2712, kk_context());
  _self->acc_0 = acc_0;
  _self->p_0 = p_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_many_acc_10570_fun2712(kk_function_t _fself, kk_box_t _b_x1354, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_many_acc_10570_fun2712__t* _self = kk_function_as(struct kk_std_text_parse__mlift_many_acc_10570_fun2712__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2462> */
  kk_function_t p_0 = _self->p_0; /* std/text/parse/parser<2463,2462> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);kk_function_dup(p_0, _ctx);}, {}, _ctx)
  kk_box_t x_1_1356 = _b_x1354; /*2462*/;
  kk_std_core_types__list _x_x2713 = kk_std_text_parse__mlift_many_acc_10569(acc_0, p_0, x_1_1356, _ctx); /*list<2462>*/
  return kk_std_core_types__list_box(_x_x2713, _ctx);
}

kk_std_core_types__list kk_std_text_parse__mlift_many_acc_10570(kk_std_core_types__list acc_0, kk_function_t p_0, bool _y_x10470, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, p : parser<e,a>, bool) -> <parse|e> list<a> */ 
  if (_y_x10470) {
    kk_box_t x_0_10974;
    kk_function_t _x_x2710 = kk_function_dup(p_0, _ctx); /*std/text/parse/parser<2463,2462>*/
    x_0_10974 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x2710, (_x_x2710, _ctx), _ctx); /*2462*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10974, _ctx);
      kk_box_t _x_x2711 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_many_acc_10570_fun2712(acc_0, p_0, _ctx), _ctx); /*2978*/
      return kk_std_core_types__list_unbox(_x_x2711, KK_OWNED, _ctx);
    }
    {
      return kk_std_text_parse__mlift_many_acc_10569(acc_0, p_0, x_0_10974, _ctx);
    }
  }
  {
    kk_function_drop(p_0, _ctx);
    kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<<std/text/parse/parse|2463>>*/;
    kk_std_core_types__list x_2;
    if (kk_std_core_types__is_Nil(acc_0, _ctx)) {
      x_2 = kk_std_core_types__new_Nil(_ctx); /*list<2462>*/
    }
    else {
      x_2 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), acc_0, _ctx); /*list<2462>*/
    }
    kk_unit_t keep = kk_Unit;
    kk_evv_set(w,kk_context());
    return x_2;
  }
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun2719__t {
  struct kk_function_s _base;
  kk_ssize_t i_10981;
};
static kk_box_t kk_std_text_parse_many_acc_fun2719(kk_function_t _fself, kk_function_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun2719(kk_ssize_t i_10981, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun2719__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun2719__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun2719, kk_context());
  _self->i_10981 = i_10981;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many_acc_fun2719(kk_function_t _fself, kk_function_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun2719__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun2719__t*, _fself, _ctx);
  kk_ssize_t i_10981 = _self->i_10981; /* hnd/ev-index */
  kk_drop_match(_self, {kk_skip_dup(i_10981, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_10981, _b_x1368, _b_x1369, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun2721__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_1;
  kk_function_t p_1;
};
static kk_box_t kk_std_text_parse_many_acc_fun2721(kk_function_t _fself, kk_box_t _b_x1378, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun2721(kk_std_core_types__list acc_1, kk_function_t p_1, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun2721__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun2721__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun2721, kk_context());
  _self->acc_1 = acc_1;
  _self->p_1 = p_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many_acc_fun2721(kk_function_t _fself, kk_box_t _b_x1378, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun2721__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun2721__t*, _fself, _ctx);
  kk_std_core_types__list acc_1 = _self->acc_1; /* list<2462> */
  kk_function_t p_1 = _self->p_1; /* std/text/parse/parser<2463,2462> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_1, _ctx);kk_function_dup(p_1, _ctx);}, {}, _ctx)
  bool _y_x10470_0_1384 = kk_bool_unbox(_b_x1378); /*bool*/;
  kk_std_core_types__list _x_x2722 = kk_std_text_parse__mlift_many_acc_10570(acc_1, p_1, _y_x10470_0_1384, _ctx); /*list<2462>*/
  return kk_std_core_types__list_box(_x_x2722, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun2725__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_1;
  kk_function_t p_1;
};
static kk_box_t kk_std_text_parse_many_acc_fun2725(kk_function_t _fself, kk_box_t _b_x1380, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun2725(kk_std_core_types__list acc_1, kk_function_t p_1, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun2725__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun2725__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun2725, kk_context());
  _self->acc_1 = acc_1;
  _self->p_1 = p_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many_acc_fun2725(kk_function_t _fself, kk_box_t _b_x1380, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun2725__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun2725__t*, _fself, _ctx);
  kk_std_core_types__list acc_1 = _self->acc_1; /* list<2462> */
  kk_function_t p_1 = _self->p_1; /* std/text/parse/parser<2463,2462> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_1, _ctx);kk_function_dup(p_1, _ctx);}, {}, _ctx)
  kk_box_t x_5_1385 = _b_x1380; /*2462*/;
  kk_std_core_types__list _x_x2726 = kk_std_text_parse__mlift_many_acc_10569(acc_1, p_1, x_5_1385, _ctx); /*list<2462>*/
  return kk_std_core_types__list_box(_x_x2726, _ctx);
}

kk_std_core_types__list kk_std_text_parse_many_acc(kk_function_t p_1, kk_std_core_types__list acc_1, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>, acc : list<a>) -> <parse|e> list<a> */ 
  kk__tailcall: ;
  kk_ssize_t i_10981;
  kk_std_core_hnd__htag _x_x2714 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
  i_10981 = kk_std_core_hnd__evv_index(_x_x2714, _ctx); /*hnd/ev-index*/
  kk_evv_t w_0 = kk_evv_swap_create1(i_10981,kk_context()); /*hnd/evv<<std/text/parse/parse|2463>>*/;
  kk_std_core_hnd__ev ev_10983 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool y;
  kk_box_t _x_x2715;
  {
    struct kk_std_core_hnd_Ev* _con_x2716 = kk_std_core_hnd__as_Ev(ev_10983, _ctx);
    kk_box_t _box_x1357 = _con_x2716->hnd;
    int32_t m = _con_x2716->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1357, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2717 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_2 = _con_x2717->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2717->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x2717->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x2717->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2717->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1360 = _ctl_pick.clause;
        _x_x2715 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1360, (_fun_unbox_x1360, m, ev_10983, _ctx), _ctx); /*35*/
      }
    }
  }
  y = kk_bool_unbox(_x_x2715); /*bool*/
  kk_unit_t __ = kk_Unit;
  kk_evv_set(w_0,kk_context());
  bool x_3_10978;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2718 = kk_std_core_hnd_yield_cont(kk_std_text_parse_new_many_acc_fun2719(i_10981, _ctx), _ctx); /*3102*/
    x_3_10978 = kk_bool_unbox(_x_x2718); /*bool*/
  }
  else {
    x_3_10978 = y; /*bool*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2720 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many_acc_fun2721(acc_1, p_1, _ctx), _ctx); /*2978*/
    return kk_std_core_types__list_unbox(_x_x2720, KK_OWNED, _ctx);
  }
  if (x_3_10978) {
    kk_box_t x_4_10985;
    kk_function_t _x_x2723 = kk_function_dup(p_1, _ctx); /*std/text/parse/parser<2463,2462>*/
    x_4_10985 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x2723, (_x_x2723, _ctx), _ctx); /*2462*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_4_10985, _ctx);
      kk_box_t _x_x2724 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many_acc_fun2725(acc_1, p_1, _ctx), _ctx); /*2978*/
      return kk_std_core_types__list_unbox(_x_x2724, KK_OWNED, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x2727 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_4_10985, acc_1, _ctx); /*list<82>*/
      acc_1 = _x_x2727;
      goto kk__tailcall;
    }
  }
  {
    kk_function_drop(p_1, _ctx);
    kk_evv_t w_1 = kk_evv_swap_create0(kk_context()); /*hnd/evv<<std/text/parse/parse|2463>>*/;
    kk_std_core_types__list x_7;
    if (kk_std_core_types__is_Nil(acc_1, _ctx)) {
      x_7 = kk_std_core_types__new_Nil(_ctx); /*list<2462>*/
    }
    else {
      x_7 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), acc_1, _ctx); /*list<2462>*/
    }
    kk_unit_t keep_0 = kk_Unit;
    kk_evv_set(w_1,kk_context());
    return x_7;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_many1_10572_fun2729__t {
  struct kk_function_s _base;
  kk_box_t _y_x10475;
};
static kk_box_t kk_std_text_parse__mlift_many1_10572_fun2729(kk_function_t _fself, kk_box_t _b_x1387, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_many1_10572_fun2729(kk_box_t _y_x10475, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_many1_10572_fun2729__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_many1_10572_fun2729__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_many1_10572_fun2729, kk_context());
  _self->_y_x10475 = _y_x10475;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_many1_10572_fun2729(kk_function_t _fself, kk_box_t _b_x1387, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_many1_10572_fun2729__t* _self = kk_function_as(struct kk_std_text_parse__mlift_many1_10572_fun2729__t*, _fself, _ctx);
  kk_box_t _y_x10475 = _self->_y_x10475; /* 2518 */
  kk_drop_match(_self, {kk_box_dup(_y_x10475, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10476_1389 = kk_std_core_types__list_unbox(_b_x1387, KK_OWNED, _ctx); /*list<2518>*/;
  kk_std_core_types__list _x_x2730 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10475, _y_x10476_1389, _ctx); /*list<82>*/
  return kk_std_core_types__list_box(_x_x2730, _ctx);
}

kk_std_core_types__list kk_std_text_parse__mlift_many1_10572(kk_function_t p, kk_box_t _y_x10475, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>, a) -> <parse|e> list<a> */ 
  kk_std_core_types__list x_10990 = kk_std_text_parse_many_acc(p, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<2518>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10990, _ctx);
    kk_box_t _x_x2728 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_many1_10572_fun2729(_y_x10475, _ctx), _ctx); /*2978*/
    return kk_std_core_types__list_unbox(_x_x2728, KK_OWNED, _ctx);
  }
  {
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10475, x_10990, _ctx);
  }
}
 
// The `many1` combinator parses `p` at least once an then until it fails, returning a list of the results of `p`.
// The `many1` combinator is non-divergent only when `p` always consumes input or `fail`s.


// lift anonymous function
struct kk_std_text_parse_many1_fun2733__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_many1_fun2733(kk_function_t _fself, kk_box_t _b_x1391, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many1_fun2733(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun2733__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many1_fun2733__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many1_fun2733, kk_context());
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many1_fun2733(kk_function_t _fself, kk_box_t _b_x1391, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun2733__t* _self = kk_function_as(struct kk_std_text_parse_many1_fun2733__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<2519,2518> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);}, {}, _ctx)
  kk_box_t _y_x10475_1396 = _b_x1391; /*2518*/;
  kk_std_core_types__list _x_x2734 = kk_std_text_parse__mlift_many1_10572(p, _y_x10475_1396, _ctx); /*list<2518>*/
  return kk_std_core_types__list_box(_x_x2734, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many1_fun2736__t {
  struct kk_function_s _base;
  kk_box_t x_10994;
};
static kk_box_t kk_std_text_parse_many1_fun2736(kk_function_t _fself, kk_box_t _b_x1393, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many1_fun2736(kk_box_t x_10994, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun2736__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many1_fun2736__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many1_fun2736, kk_context());
  _self->x_10994 = x_10994;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many1_fun2736(kk_function_t _fself, kk_box_t _b_x1393, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun2736__t* _self = kk_function_as(struct kk_std_text_parse_many1_fun2736__t*, _fself, _ctx);
  kk_box_t x_10994 = _self->x_10994; /* 2518 */
  kk_drop_match(_self, {kk_box_dup(x_10994, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10476_1397 = kk_std_core_types__list_unbox(_b_x1393, KK_OWNED, _ctx); /*list<2518>*/;
  kk_std_core_types__list _x_x2737 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_10994, _y_x10476_1397, _ctx); /*list<82>*/
  return kk_std_core_types__list_box(_x_x2737, _ctx);
}

kk_std_core_types__list kk_std_text_parse_many1(kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 
  kk_box_t x_10994;
  kk_function_t _x_x2731 = kk_function_dup(p, _ctx); /*std/text/parse/parser<2519,2518>*/
  x_10994 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x2731, (_x_x2731, _ctx), _ctx); /*2518*/
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10994, _ctx);
    kk_box_t _x_x2732 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many1_fun2733(p, _ctx), _ctx); /*2978*/
    return kk_std_core_types__list_unbox(_x_x2732, KK_OWNED, _ctx);
  }
  {
    kk_std_core_types__list x_0_10997 = kk_std_text_parse_many_acc(p, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<2518>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_0_10997, _ctx);
      kk_box_t _x_x2735 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many1_fun2736(x_10994, _ctx), _ctx); /*2978*/
      return kk_std_core_types__list_unbox(_x_x2735, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Cons(kk_reuse_null, 0, x_10994, x_0_10997, _ctx);
    }
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_text_parse__mlift_count_acc_10573(kk_std_core_types__list acc, kk_integer_t n, kk_function_t p, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, n : int, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 
  kk_integer_t _x_x2738 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
  kk_std_core_types__list _x_x2739 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x, acc, _ctx); /*list<82>*/
  return kk_std_text_parse_count_acc(_x_x2738, _x_x2739, p, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_count_acc_fun2742__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
  kk_integer_t n_0;
  kk_function_t p_0;
};
static kk_box_t kk_std_text_parse_count_acc_fun2742(kk_function_t _fself, kk_box_t _b_x1399, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_count_acc_fun2742(kk_std_core_types__list acc_0, kk_integer_t n_0, kk_function_t p_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_count_acc_fun2742__t* _self = kk_function_alloc_as(struct kk_std_text_parse_count_acc_fun2742__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_count_acc_fun2742, kk_context());
  _self->acc_0 = acc_0;
  _self->n_0 = n_0;
  _self->p_0 = p_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_count_acc_fun2742(kk_function_t _fself, kk_box_t _b_x1399, kk_context_t* _ctx) {
  struct kk_std_text_parse_count_acc_fun2742__t* _self = kk_function_as(struct kk_std_text_parse_count_acc_fun2742__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2586> */
  kk_integer_t n_0 = _self->n_0; /* int */
  kk_function_t p_0 = _self->p_0; /* std/text/parse/parser<2587,2586> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);kk_integer_dup(n_0, _ctx);kk_function_dup(p_0, _ctx);}, {}, _ctx)
  kk_box_t x_2_1401 = _b_x1399; /*2586*/;
  kk_std_core_types__list _x_x2743 = kk_std_text_parse__mlift_count_acc_10573(acc_0, n_0, p_0, x_2_1401, _ctx); /*list<2586>*/
  return kk_std_core_types__list_box(_x_x2743, _ctx);
}

kk_std_core_types__list kk_std_text_parse_count_acc(kk_integer_t n_0, kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx) { /* forall<a,e> (n : int, acc : list<a>, p : parser<e,a>) -> <parse|e> list<a> */ 
  kk__tailcall: ;
  bool _match_x1761 = kk_integer_lte_borrow(n_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x1761) {
    kk_function_drop(p_0, _ctx);
    kk_integer_drop(n_0, _ctx);
    kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<<std/text/parse/parse|2587>>*/;
    kk_std_core_types__list x_0;
    if (kk_std_core_types__is_Nil(acc_0, _ctx)) {
      x_0 = kk_std_core_types__new_Nil(_ctx); /*list<2586>*/
    }
    else {
      x_0 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), acc_0, _ctx); /*list<2586>*/
    }
    kk_unit_t keep = kk_Unit;
    kk_evv_set(w,kk_context());
    return x_0;
  }
  {
    kk_box_t x_1_11004;
    kk_function_t _x_x2740 = kk_function_dup(p_0, _ctx); /*std/text/parse/parser<2587,2586>*/
    x_1_11004 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x2740, (_x_x2740, _ctx), _ctx); /*2586*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_1_11004, _ctx);
      kk_box_t _x_x2741 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_count_acc_fun2742(acc_0, n_0, p_0, _ctx), _ctx); /*2978*/
      return kk_std_core_types__list_unbox(_x_x2741, KK_OWNED, _ctx);
    }
    { // tailcall
      kk_integer_t _x_x2744 = kk_integer_add_small_const(n_0, -1, _ctx); /*int*/
      kk_std_core_types__list _x_x2745 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_1_11004, acc_0, _ctx); /*list<82>*/
      n_0 = _x_x2744;
      acc_0 = _x_x2745;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_one_of_or_fun2750__t {
  struct kk_function_s _base;
  kk_string_t chars;
  kk_char_t kkloc_default;
};
static kk_box_t kk_std_text_parse_one_of_or_fun2750(kk_function_t _fself, kk_box_t _b_x1409, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_one_of_or_fun2750(kk_string_t chars, kk_char_t kkloc_default, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun2750__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_or_fun2750__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_one_of_or_fun2750, kk_context());
  _self->chars = chars;
  _self->kkloc_default = kkloc_default;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_one_of_or_fun2750(kk_function_t _fself, kk_box_t _b_x1409, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun2750__t* _self = kk_function_as(struct kk_std_text_parse_one_of_or_fun2750__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_char_t kkloc_default = _self->kkloc_default; /* char */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);kk_skip_dup(kkloc_default, _ctx);}, {}, _ctx)
  bool _y_x10481_1411 = kk_bool_unbox(_b_x1409); /*bool*/;
  kk_char_t _x_x2751;
  if (_y_x10481_1411) {
    _x_x2751 = kk_std_text_parse_one_of(chars, _ctx); /*char*/
  }
  else {
    kk_string_drop(chars, _ctx);
    _x_x2751 = kkloc_default; /*char*/
  }
  return kk_char_box(_x_x2751, _ctx);
}

kk_char_t kk_std_text_parse_one_of_or(kk_string_t chars, kk_char_t kkloc_default, kk_context_t* _ctx) { /* (chars : string, default : char) -> parse char */ 
  kk_std_core_hnd__ev ev_11010 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_11007;
  kk_box_t _x_x2746;
  {
    struct kk_std_core_hnd_Ev* _con_x2747 = kk_std_core_hnd__as_Ev(ev_11010, _ctx);
    kk_box_t _box_x1402 = _con_x2747->hnd;
    int32_t m = _con_x2747->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1402, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2748 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2748->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2748->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2748->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x2748->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2748->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1405 = _ctl_pick.clause;
        _x_x2746 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1405, (_fun_unbox_x1405, m, ev_11010, _ctx), _ctx); /*35*/
      }
    }
  }
  x_11007 = kk_bool_unbox(_x_x2746); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2749 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_one_of_or_fun2750(chars, kkloc_default, _ctx), _ctx); /*2978*/
    return kk_char_unbox(_x_x2749, KK_OWNED, _ctx);
  }
  if (x_11007) {
    return kk_std_text_parse_one_of(chars, _ctx);
  }
  {
    kk_string_drop(chars, _ctx);
    return kkloc_default;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_sign_10575(kk_std_core_types__maybe _y_x10485, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10485, _ctx)) {
    kk_std_core_hnd__ev ev_11015 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2752;
    {
      struct kk_std_core_hnd_Ev* _con_x2753 = kk_std_core_hnd__as_Ev(ev_11015, _ctx);
      kk_box_t _box_x1412 = _con_x2753->hnd;
      int32_t m = _con_x2753->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1412, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2754 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2754->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2754->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2754->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2754->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2754->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1416 = _ctl_fail.clause;
          kk_box_t _x_x2755;
          kk_string_t _x_x2756;
          kk_define_string_literal(, _s_x2757, 2, "+-", _ctx)
          _x_x2756 = kk_string_dup(_s_x2757, _ctx); /*string*/
          _x_x2755 = kk_string_box(_x_x2756); /*45*/
          _x_x2752 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1416, (_fun_unbox_x1416, m, ev_11015, _x_x2755, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2752, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x1420 = _y_x10485._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x1420, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(_y_x10485, _ctx);
    return x_0;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_sign_10577_fun2761__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_sign_10577_fun2761(kk_function_t _fself, kk_box_t _b_x1434, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_sign_10577_fun2761(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_sign_10577_fun2761, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_sign_10577_fun2761(kk_function_t _fself, kk_box_t _b_x1434, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2762;
  kk_std_core_types__maybe _match_x1759;
  kk_std_core_sslice__sslice _x_x2763 = kk_std_core_sslice__sslice_unbox(_b_x1434, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1759 = kk_std_core_sslice_next(_x_x2763, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1759, _ctx)) {
    kk_box_t _box_x1435 = _match_x1759._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x1435, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x1436 = _pat_0_0_0.fst;
      kk_box_t _box_x1437 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x1436, KK_BORROWED, _ctx);
      kk_string_t _x_x2765;
      kk_define_string_literal(, _s_x2766, 2, "+-", _ctx)
      _x_x2765 = kk_string_dup(_s_x2766, _ctx); /*string*/
      kk_string_t _x_x2767 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x2765,_x_x2767,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1437, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1759, _ctx);
        kk_box_t _x_x2768;
        kk_std_core_types__tuple2 _x_x2769 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2768 = kk_std_core_types__tuple2_box(_x_x2769, _ctx); /*91*/
        _x_x2762 = kk_std_core_types__new_Just(_x_x2768, _ctx); /*maybe<91>*/
        goto _match_x2764;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1759, _ctx);
    _x_x2762 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2764: ;
  return kk_std_core_types__maybe_box(_x_x2762, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_sign_10577_fun2771__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_sign_10577_fun2771(kk_function_t _fself, kk_box_t _b_x1446, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_sign_10577_fun2771(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_sign_10577_fun2771, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_sign_10577_fun2771(kk_function_t _fself, kk_box_t _b_x1446, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2772;
  kk_std_core_types__maybe _x_x2773 = kk_std_core_types__maybe_unbox(_b_x1446, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2772 = kk_std_text_parse__mlift_sign_10575(_x_x2773, _ctx); /*char*/
  return kk_char_box(_x_x2772, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_sign_10577_fun2775__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_sign_10577_fun2775(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_sign_10577_fun2775(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_sign_10577_fun2775, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_sign_10577_fun2775(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x2776;
  kk_char_t _x_x2777 = kk_char_unbox(_b_x1449, KK_OWNED, _ctx); /*char*/
  _x_x2776 = kk_std_text_parse__mlift_sign_10576(_x_x2777, _ctx); /*bool*/
  return kk_bool_box(_x_x2776);
}

bool kk_std_text_parse__mlift_sign_10577(bool _y_x10484, kk_context_t* _ctx) { /* (bool) -> parse bool */ 
  kk_char_t x_11018;
  if (_y_x10484) {
    kk_std_core_hnd__ev ev_11022 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_std_core_types__maybe x_0_11020;
    kk_box_t _x_x2758;
    {
      struct kk_std_core_hnd_Ev* _con_x2759 = kk_std_core_hnd__as_Ev(ev_11022, _ctx);
      kk_box_t _box_x1421 = _con_x2759->hnd;
      int32_t m = _con_x2759->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1421, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2760 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2760->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2760->_fun_current_input;
        kk_std_core_hnd__clause1 _pat_2 = _con_x2760->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_3_0 = _con_x2760->_ctl_pick;
        kk_std_core_hnd__clause1 _fun_satisfy = _con_x2760->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause0_drop(_pat_3_0, _ctx);
          kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1428 = _fun_satisfy.clause;
          _x_x2758 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1428, (_fun_unbox_x1428, m, ev_11022, kk_function_box(kk_std_text_parse__new_mlift_sign_10577_fun2761(_ctx), _ctx), _ctx), _ctx); /*46*/
        }
      }
    }
    x_0_11020 = kk_std_core_types__maybe_unbox(_x_x2758, KK_OWNED, _ctx); /*maybe<char>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_11020, _ctx);
      kk_box_t _x_x2770 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_sign_10577_fun2771(_ctx), _ctx); /*2978*/
      x_11018 = kk_char_unbox(_x_x2770, KK_OWNED, _ctx); /*char*/
    }
    else {
      x_11018 = kk_std_text_parse__mlift_sign_10575(x_0_11020, _ctx); /*char*/
    }
  }
  else {
    x_11018 = '+'; /*char*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2774 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_sign_10577_fun2775(_ctx), _ctx); /*2978*/
    return kk_bool_unbox(_x_x2774);
  }
  {
    return (x_11018 == ('-'));
  }
}


// lift anonymous function
struct kk_std_text_parse_sign_fun2782__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun2782(kk_function_t _fself, kk_box_t _b_x1458, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun2782(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun2782, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_sign_fun2782(kk_function_t _fself, kk_box_t _b_x1458, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x2783;
  bool _x_x2784 = kk_bool_unbox(_b_x1458); /*bool*/
  _x_x2783 = kk_std_text_parse__mlift_sign_10577(_x_x2784, _ctx); /*bool*/
  return kk_bool_box(_x_x2783);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun2788__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun2788(kk_function_t _fself, kk_box_t _b_x1472, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun2788(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun2788, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_sign_fun2788(kk_function_t _fself, kk_box_t _b_x1472, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2789;
  kk_std_core_types__maybe _match_x1756;
  kk_std_core_sslice__sslice _x_x2790 = kk_std_core_sslice__sslice_unbox(_b_x1472, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1756 = kk_std_core_sslice_next(_x_x2790, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1756, _ctx)) {
    kk_box_t _box_x1473 = _match_x1756._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x1473, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x1474 = _pat_0_0_0.fst;
      kk_box_t _box_x1475 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x1474, KK_BORROWED, _ctx);
      kk_string_t _x_x2792;
      kk_define_string_literal(, _s_x2793, 2, "+-", _ctx)
      _x_x2792 = kk_string_dup(_s_x2793, _ctx); /*string*/
      kk_string_t _x_x2794 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x2792,_x_x2794,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1475, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1756, _ctx);
        kk_box_t _x_x2795;
        kk_std_core_types__tuple2 _x_x2796 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2795 = kk_std_core_types__tuple2_box(_x_x2796, _ctx); /*91*/
        _x_x2789 = kk_std_core_types__new_Just(_x_x2795, _ctx); /*maybe<91>*/
        goto _match_x2791;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1756, _ctx);
    _x_x2789 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2791: ;
  return kk_std_core_types__maybe_box(_x_x2789, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun2798__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun2798(kk_function_t _fself, kk_box_t _b_x1484, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun2798(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun2798, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_sign_fun2798(kk_function_t _fself, kk_box_t _b_x1484, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2799;
  kk_std_core_types__maybe _x_x2800 = kk_std_core_types__maybe_unbox(_b_x1484, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2799 = kk_std_text_parse__mlift_sign_10575(_x_x2800, _ctx); /*char*/
  return kk_char_box(_x_x2799, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun2802__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun2802(kk_function_t _fself, kk_box_t _b_x1487, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun2802(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun2802, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_sign_fun2802(kk_function_t _fself, kk_box_t _b_x1487, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x2803;
  kk_char_t _x_x2804 = kk_char_unbox(_b_x1487, KK_OWNED, _ctx); /*char*/
  _x_x2803 = kk_std_text_parse__mlift_sign_10576(_x_x2804, _ctx); /*bool*/
  return kk_bool_box(_x_x2803);
}

bool kk_std_text_parse_sign(kk_context_t* _ctx) { /* () -> parse bool */ 
  kk_std_core_hnd__ev ev_11028 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_11025;
  kk_box_t _x_x2778;
  {
    struct kk_std_core_hnd_Ev* _con_x2779 = kk_std_core_hnd__as_Ev(ev_11028, _ctx);
    kk_box_t _box_x1451 = _con_x2779->hnd;
    int32_t m = _con_x2779->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1451, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2780 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2780->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2780->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2780->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x2780->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2780->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1454 = _ctl_pick.clause;
        _x_x2778 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1454, (_fun_unbox_x1454, m, ev_11028, _ctx), _ctx); /*35*/
      }
    }
  }
  x_11025 = kk_bool_unbox(_x_x2778); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2781 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sign_fun2782(_ctx), _ctx); /*2978*/
    return kk_bool_unbox(_x_x2781);
  }
  {
    kk_char_t x_0_11030;
    if (x_11025) {
      kk_std_core_hnd__ev ev_0_11035 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_std_core_types__maybe x_1_11033;
      kk_box_t _x_x2785;
      {
        struct kk_std_core_hnd_Ev* _con_x2786 = kk_std_core_hnd__as_Ev(ev_0_11035, _ctx);
        kk_box_t _box_x1459 = _con_x2786->hnd;
        int32_t m_0 = _con_x2786->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1459, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2787 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
          kk_integer_t _pat_0_2 = _con_x2787->_cfc;
          kk_std_core_hnd__clause0 _pat_1_2 = _con_x2787->_fun_current_input;
          kk_std_core_hnd__clause1 _pat_2_1 = _con_x2787->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_3_0 = _con_x2787->_ctl_pick;
          kk_std_core_hnd__clause1 _fun_satisfy = _con_x2787->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
            kk_std_core_hnd__clause0_drop(_pat_3_0, _ctx);
            kk_std_core_hnd__clause1_drop(_pat_2_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
            kk_integer_drop(_pat_0_2, _ctx);
            kk_datatype_ptr_free(h_0, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
            kk_datatype_ptr_decref(h_0, _ctx);
          }
          {
            kk_function_t _fun_unbox_x1466 = _fun_satisfy.clause;
            _x_x2785 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1466, (_fun_unbox_x1466, m_0, ev_0_11035, kk_function_box(kk_std_text_parse_new_sign_fun2788(_ctx), _ctx), _ctx), _ctx); /*46*/
          }
        }
      }
      x_1_11033 = kk_std_core_types__maybe_unbox(_x_x2785, KK_OWNED, _ctx); /*maybe<char>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__maybe_drop(x_1_11033, _ctx);
        kk_box_t _x_x2797 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sign_fun2798(_ctx), _ctx); /*2978*/
        x_0_11030 = kk_char_unbox(_x_x2797, KK_OWNED, _ctx); /*char*/
      }
      else {
        x_0_11030 = kk_std_text_parse__mlift_sign_10575(x_1_11033, _ctx); /*char*/
      }
    }
    else {
      x_0_11030 = '+'; /*char*/
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x2801 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sign_fun2802(_ctx), _ctx); /*2978*/
      return kk_bool_unbox(_x_x2801);
    }
    {
      return (x_0_11030 == ('-'));
    }
  }
}
 
// lifted local: i, pint, @spec-x10336
// specialized: std/text/parse/next-while0, on parameters @uniq-pred@10327, using:
// @uniq-pred@10327 = std/core/char/is-digit

kk_std_core_types__tuple2 kk_std_text_parse__lift_pint_10354(kk_std_core_sslice__sslice _uniq_slice_10326, kk_std_core_types__list _uniq_acc_10328, kk_context_t* _ctx) { /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1752;
  kk_std_core_sslice__sslice _x_x2805 = kk_std_core_sslice__sslice_dup(_uniq_slice_10326, _ctx); /*sslice/sslice*/
  _match_x1752 = kk_std_core_sslice_next(_x_x2805, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1752, _ctx)) {
    kk_box_t _box_x1490 = _match_x1752._cons.Just.value;
    kk_std_core_types__tuple2 _uniq_pat_0_10330 = kk_std_core_types__tuple2_unbox(_box_x1490, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_uniq_pat_0_10330, _ctx)) {
      kk_box_t _box_x1491 = _uniq_pat_0_10330.fst;
      kk_box_t _box_x1492 = _uniq_pat_0_10330.snd;
      kk_char_t _uniq_c_10331 = kk_char_unbox(_box_x1491, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_digit(_uniq_c_10331, _ctx)) {
        kk_std_core_sslice__sslice _uniq_rest_10332 = kk_std_core_sslice__sslice_unbox(_box_x1492, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(_uniq_slice_10326, _ctx);
        kk_std_core_sslice__sslice_dup(_uniq_rest_10332, _ctx);
        kk_std_core_types__maybe_drop(_match_x1752, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2806 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(_uniq_c_10331, _ctx), _uniq_acc_10328, _ctx); /*list<82>*/
          _uniq_slice_10326 = _uniq_rest_10332;
          _uniq_acc_10328 = _x_x2806;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1752, _ctx);
    kk_std_core_types__list _b_x1495_1499;
    if (kk_std_core_types__is_Nil(_uniq_acc_10328, _ctx)) {
      _b_x1495_1499 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x1495_1499 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), _uniq_acc_10328, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x1495_1499, _ctx), kk_std_core_sslice__sslice_box(_uniq_slice_10326, _ctx), _ctx);
  }
}
 
// monadic lift

kk_integer_t kk_std_text_parse__mlift_pint_10578(bool neg, kk_std_core_types__list _c_x10496, kk_context_t* _ctx) { /* (neg : bool, list<char>) -> int */ 
  kk_string_t _x_x1_0_10530 = kk_std_core_string_listchar_fs_string(_c_x10496, _ctx); /*string*/;
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
  kk_std_core_types__maybe x;
  bool _x_x2807;
  kk_std_core_types__optional _match_x1751 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x1751, _ctx)) {
    kk_box_t _box_x1501 = _match_x1751._cons._Optional.value;
    bool _uniq_hex_528 = kk_bool_unbox(_box_x1501);
    kk_std_core_types__optional_drop(_match_x1751, _ctx);
    _x_x2807 = _uniq_hex_528; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x1751, _ctx);
    _x_x2807 = false; /*bool*/
  }
  x = kk_std_core_int_xparse(_x_x1_0_10530, _x_x2807, _ctx); /*maybe<int>*/
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
  kk_unit_t keep_0 = kk_Unit;
  kk_evv_set(w_0,kk_context());
  if (neg) {
    kk_integer_t _x_x2808;
    if (kk_std_core_types__is_Nothing(x, _ctx)) {
      _x_x2808 = kk_integer_from_small(0); /*int*/
    }
    else {
      kk_box_t _box_x1502 = x._cons.Just.value;
      kk_integer_t x_0_0 = kk_integer_unbox(_box_x1502, _ctx);
      kk_integer_dup(x_0_0, _ctx);
      kk_std_core_types__maybe_drop(x, _ctx);
      _x_x2808 = x_0_0; /*int*/
    }
    return kk_integer_neg(_x_x2808,kk_context());
  }
  if (kk_std_core_types__is_Nothing(x, _ctx)) {
    return kk_integer_from_small(0);
  }
  {
    kk_box_t _box_x1503 = x._cons.Just.value;
    kk_integer_t x_0_0_0 = kk_integer_unbox(_box_x1503, _ctx);
    kk_integer_dup(x_0_0_0, _ctx);
    kk_std_core_types__maybe_drop(x, _ctx);
    return x_0_0_0;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_pint_10579_fun2816__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse__mlift_pint_10579_fun2816(kk_function_t _fself, kk_box_t _b_x1514, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pint_10579_fun2816(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_pint_10579_fun2816__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_pint_10579_fun2816__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_pint_10579_fun2816, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pint_10579_fun2816(kk_function_t _fself, kk_box_t _b_x1514, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_pint_10579_fun2816__t* _self = kk_function_as(struct kk_std_text_parse__mlift_pint_10579_fun2816__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10496_1516 = kk_std_core_types__list_unbox(_b_x1514, KK_OWNED, _ctx); /*list<char>*/;
  kk_integer_t _x_x2817 = kk_std_text_parse__mlift_pint_10578(neg, _c_x10496_1516, _ctx); /*int*/
  return kk_integer_box(_x_x2817, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_pint_10579(bool neg, kk_std_core_types__maybe _y_x10494, kk_context_t* _ctx) { /* (neg : bool, maybe<list<char>>) -> parse int */ 
  kk_std_core_types__list x_11044;
  if (kk_std_core_types__is_Nothing(_y_x10494, _ctx)) {
    kk_std_core_hnd__ev ev_11046 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2809;
    {
      struct kk_std_core_hnd_Ev* _con_x2810 = kk_std_core_hnd__as_Ev(ev_11046, _ctx);
      kk_box_t _box_x1504 = _con_x2810->hnd;
      int32_t m = _con_x2810->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1504, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2811 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2811->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2811->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2811->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2 = _con_x2811->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2811->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1508 = _ctl_fail.clause;
          kk_box_t _x_x2812;
          kk_string_t _x_x2813;
          kk_define_string_literal(, _s_x2814, 5, "digit", _ctx)
          _x_x2813 = kk_string_dup(_s_x2814, _ctx); /*string*/
          _x_x2812 = kk_string_box(_x_x2813); /*45*/
          _x_x2809 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1508, (_fun_unbox_x1508, m, ev_11046, _x_x2812, _ctx), _ctx); /*46*/
        }
      }
    }
    x_11044 = kk_std_core_types__list_unbox(_x_x2809, KK_OWNED, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x1512 = _y_x10494._cons.Just.value;
    kk_std_core_types__list x_0_0 = kk_std_core_types__list_unbox(_box_x1512, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_0_0, _ctx);
    kk_std_core_types__maybe_drop(_y_x10494, _ctx);
    x_11044 = x_0_0; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11044, _ctx);
    kk_box_t _x_x2815 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_pint_10579_fun2816(neg, _ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x2815, _ctx);
  }
  {
    return kk_std_text_parse__mlift_pint_10578(neg, x_11044, _ctx);
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift_pint_10580(kk_std_core_types__maybe _y_x10490, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_x10490, _ctx)) {
    kk_std_core_hnd__ev ev_11049 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2818;
    {
      struct kk_std_core_hnd_Ev* _con_x2819 = kk_std_core_hnd__as_Ev(ev_11049, _ctx);
      kk_box_t _box_x1517 = _con_x2819->hnd;
      int32_t m = _con_x2819->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1517, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2820 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x2820->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x2820->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2820->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2820->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2820->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1521 = _ctl_fail.clause;
          kk_box_t _x_x2821;
          kk_string_t _x_x2822;
          kk_define_string_literal(, _s_x2823, 2, "+-", _ctx)
          _x_x2822 = kk_string_dup(_s_x2823, _ctx); /*string*/
          _x_x2821 = kk_string_box(_x_x2822); /*45*/
          _x_x2818 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1521, (_fun_unbox_x1521, m, ev_11049, _x_x2821, _ctx), _ctx); /*46*/
        }
      }
    }
    return kk_char_unbox(_x_x2818, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x1525 = _y_x10490._cons.Just.value;
    kk_char_t x_0 = kk_char_unbox(_box_x1525, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(_y_x10490, _ctx);
    return x_0;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_pint_10581_fun2827__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pint_10581_fun2827(kk_function_t _fself, kk_box_t _b_x1539, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pint_10581_fun2827(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pint_10581_fun2827, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pint_10581_fun2827(kk_function_t _fself, kk_box_t _b_x1539, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2828;
  kk_std_core_types__tuple2 _match_x1749;
  kk_std_core_sslice__sslice _x_x2829 = kk_std_core_sslice__sslice_unbox(_b_x1539, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1749 = kk_std_text_parse__lift_pint_10354(_x_x2829, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x1540 = _match_x1749.fst;
    kk_box_t _box_x1541 = _match_x1749.snd;
    kk_std_core_types__list _pat_0_2_0 = kk_std_core_types__list_unbox(_box_x1540, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x1541, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_2_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1749, _ctx);
      _x_x2828 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2830;
    }
  }
  {
    kk_box_t _box_x1542 = _match_x1749.fst;
    kk_box_t _box_x1543 = _match_x1749.snd;
    kk_std_core_sslice__sslice rest_0 = kk_std_core_sslice__sslice_unbox(_box_x1543, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x1542, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest_0, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1749, _ctx);
    kk_box_t _x_x2831;
    kk_std_core_types__tuple2 _x_x2832 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest_0, _ctx), _ctx); /*(129, 130)*/
    _x_x2831 = kk_std_core_types__tuple2_box(_x_x2832, _ctx); /*91*/
    _x_x2828 = kk_std_core_types__new_Just(_x_x2831, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2830: ;
  return kk_std_core_types__maybe_box(_x_x2828, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_pint_10581_fun2834__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse__mlift_pint_10581_fun2834(kk_function_t _fself, kk_box_t _b_x1552, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pint_10581_fun2834(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_pint_10581_fun2834__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_pint_10581_fun2834__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_pint_10581_fun2834, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pint_10581_fun2834(kk_function_t _fself, kk_box_t _b_x1552, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_pint_10581_fun2834__t* _self = kk_function_as(struct kk_std_text_parse__mlift_pint_10581_fun2834__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10494_1554 = kk_std_core_types__maybe_unbox(_b_x1552, KK_OWNED, _ctx); /*maybe<list<char>>*/;
  kk_integer_t _x_x2835 = kk_std_text_parse__mlift_pint_10579(neg, _y_x10494_1554, _ctx); /*int*/
  return kk_integer_box(_x_x2835, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_pint_10581(kk_char_t _c_x10493, kk_context_t* _ctx) { /* (char) -> int */ 
  bool neg = (_c_x10493 == ('-')); /*bool*/;
  kk_std_core_hnd__ev ev_11054 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_11052;
  kk_box_t _x_x2824;
  {
    struct kk_std_core_hnd_Ev* _con_x2825 = kk_std_core_hnd__as_Ev(ev_11054, _ctx);
    kk_box_t _box_x1526 = _con_x2825->hnd;
    int32_t m = _con_x2825->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1526, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2826 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2826->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2826->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2826->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2826->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2826->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1533 = _fun_satisfy.clause;
        _x_x2824 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1533, (_fun_unbox_x1533, m, ev_11054, kk_function_box(kk_std_text_parse__new_mlift_pint_10581_fun2827(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_11052 = kk_std_core_types__maybe_unbox(_x_x2824, KK_OWNED, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_11052, _ctx);
    kk_box_t _x_x2833 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_pint_10581_fun2834(neg, _ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x2833, _ctx);
  }
  {
    return kk_std_text_parse__mlift_pint_10579(neg, x_11052, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_pint_10582_fun2839__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pint_10582_fun2839(kk_function_t _fself, kk_box_t _b_x1568, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pint_10582_fun2839(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pint_10582_fun2839, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pint_10582_fun2839(kk_function_t _fself, kk_box_t _b_x1568, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2840;
  kk_std_core_types__maybe _match_x1747;
  kk_std_core_sslice__sslice _x_x2841 = kk_std_core_sslice__sslice_unbox(_b_x1568, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1747 = kk_std_core_sslice_next(_x_x2841, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1747, _ctx)) {
    kk_box_t _box_x1569 = _match_x1747._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x1569, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x1570 = _pat_0_0_0.fst;
      kk_box_t _box_x1571 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x1570, KK_BORROWED, _ctx);
      kk_string_t _x_x2843;
      kk_define_string_literal(, _s_x2844, 2, "+-", _ctx)
      _x_x2843 = kk_string_dup(_s_x2844, _ctx); /*string*/
      kk_string_t _x_x2845 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x2843,_x_x2845,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1571, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1747, _ctx);
        kk_box_t _x_x2846;
        kk_std_core_types__tuple2 _x_x2847 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2846 = kk_std_core_types__tuple2_box(_x_x2847, _ctx); /*91*/
        _x_x2840 = kk_std_core_types__new_Just(_x_x2846, _ctx); /*maybe<91>*/
        goto _match_x2842;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1747, _ctx);
    _x_x2840 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2842: ;
  return kk_std_core_types__maybe_box(_x_x2840, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_pint_10582_fun2849__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pint_10582_fun2849(kk_function_t _fself, kk_box_t _b_x1580, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pint_10582_fun2849(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pint_10582_fun2849, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pint_10582_fun2849(kk_function_t _fself, kk_box_t _b_x1580, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2850;
  kk_std_core_types__maybe _x_x2851 = kk_std_core_types__maybe_unbox(_b_x1580, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2850 = kk_std_text_parse__mlift_pint_10580(_x_x2851, _ctx); /*char*/
  return kk_char_box(_x_x2850, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_pint_10582_fun2853__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pint_10582_fun2853(kk_function_t _fself, kk_box_t _b_x1583, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pint_10582_fun2853(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pint_10582_fun2853, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pint_10582_fun2853(kk_function_t _fself, kk_box_t _b_x1583, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2854;
  kk_char_t _x_x2855 = kk_char_unbox(_b_x1583, KK_OWNED, _ctx); /*char*/
  _x_x2854 = kk_std_text_parse__mlift_pint_10581(_x_x2855, _ctx); /*int*/
  return kk_integer_box(_x_x2854, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_pint_10582(bool _y_x10489, kk_context_t* _ctx) { /* (bool) -> parse int */ 
  kk_char_t x_11057;
  if (_y_x10489) {
    kk_std_core_hnd__ev ev_11061 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_std_core_types__maybe x_0_11059;
    kk_box_t _x_x2836;
    {
      struct kk_std_core_hnd_Ev* _con_x2837 = kk_std_core_hnd__as_Ev(ev_11061, _ctx);
      kk_box_t _box_x1555 = _con_x2837->hnd;
      int32_t m = _con_x2837->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1555, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2838 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2838->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2838->_fun_current_input;
        kk_std_core_hnd__clause1 _pat_2 = _con_x2838->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_3_0 = _con_x2838->_ctl_pick;
        kk_std_core_hnd__clause1 _fun_satisfy = _con_x2838->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause0_drop(_pat_3_0, _ctx);
          kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1562 = _fun_satisfy.clause;
          _x_x2836 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1562, (_fun_unbox_x1562, m, ev_11061, kk_function_box(kk_std_text_parse__new_mlift_pint_10582_fun2839(_ctx), _ctx), _ctx), _ctx); /*46*/
        }
      }
    }
    x_0_11059 = kk_std_core_types__maybe_unbox(_x_x2836, KK_OWNED, _ctx); /*maybe<char>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_11059, _ctx);
      kk_box_t _x_x2848 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_pint_10582_fun2849(_ctx), _ctx); /*2978*/
      x_11057 = kk_char_unbox(_x_x2848, KK_OWNED, _ctx); /*char*/
    }
    else {
      x_11057 = kk_std_text_parse__mlift_pint_10580(x_0_11059, _ctx); /*char*/
    }
  }
  else {
    x_11057 = '+'; /*char*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2852 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_pint_10582_fun2853(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x2852, _ctx);
  }
  {
    return kk_std_text_parse__mlift_pint_10581(x_11057, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_pint_fun2860__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun2860(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun2860(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun2860, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun2860(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2861;
  bool _x_x2862 = kk_bool_unbox(_b_x1592); /*bool*/
  _x_x2861 = kk_std_text_parse__mlift_pint_10582(_x_x2862, _ctx); /*int*/
  return kk_integer_box(_x_x2861, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun2866__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun2866(kk_function_t _fself, kk_box_t _b_x1606, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun2866(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun2866, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun2866(kk_function_t _fself, kk_box_t _b_x1606, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2867;
  kk_std_core_types__maybe _match_x1744;
  kk_std_core_sslice__sslice _x_x2868 = kk_std_core_sslice__sslice_unbox(_b_x1606, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1744 = kk_std_core_sslice_next(_x_x2868, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1744, _ctx)) {
    kk_box_t _box_x1607 = _match_x1744._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x1607, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0_0, _ctx)) {
      kk_box_t _box_x1608 = _pat_0_0_0.fst;
      kk_box_t _box_x1609 = _pat_0_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x1608, KK_BORROWED, _ctx);
      kk_string_t _x_x2870;
      kk_define_string_literal(, _s_x2871, 2, "+-", _ctx)
      _x_x2870 = kk_string_dup(_s_x2871, _ctx); /*string*/
      kk_string_t _x_x2872 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x2870,_x_x2872,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1609, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x1744, _ctx);
        kk_box_t _x_x2873;
        kk_std_core_types__tuple2 _x_x2874 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x2873 = kk_std_core_types__tuple2_box(_x_x2874, _ctx); /*91*/
        _x_x2867 = kk_std_core_types__new_Just(_x_x2873, _ctx); /*maybe<91>*/
        goto _match_x2869;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1744, _ctx);
    _x_x2867 = kk_std_core_types__new_Nothing(_ctx); /*maybe<91>*/
  }
  _match_x2869: ;
  return kk_std_core_types__maybe_box(_x_x2867, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun2876__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun2876(kk_function_t _fself, kk_box_t _b_x1618, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun2876(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun2876, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun2876(kk_function_t _fself, kk_box_t _b_x1618, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x2877;
  kk_std_core_types__maybe _x_x2878 = kk_std_core_types__maybe_unbox(_b_x1618, KK_OWNED, _ctx); /*maybe<char>*/
  _x_x2877 = kk_std_text_parse__mlift_pint_10580(_x_x2878, _ctx); /*char*/
  return kk_char_box(_x_x2877, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun2880__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun2880(kk_function_t _fself, kk_box_t _b_x1621, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun2880(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun2880, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun2880(kk_function_t _fself, kk_box_t _b_x1621, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2881;
  kk_char_t _x_x2882 = kk_char_unbox(_b_x1621, KK_OWNED, _ctx); /*char*/
  _x_x2881 = kk_std_text_parse__mlift_pint_10581(_x_x2882, _ctx); /*int*/
  return kk_integer_box(_x_x2881, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun2886__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun2886(kk_function_t _fself, kk_box_t _b_x1635, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun2886(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun2886, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun2886(kk_function_t _fself, kk_box_t _b_x1635, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2887;
  kk_std_core_types__tuple2 _match_x1742;
  kk_std_core_sslice__sslice _x_x2888 = kk_std_core_sslice__sslice_unbox(_b_x1635, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1742 = kk_std_text_parse__lift_pint_10354(_x_x2888, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x1636 = _match_x1742.fst;
    kk_box_t _box_x1637 = _match_x1742.snd;
    kk_std_core_types__list _pat_0_2_0_0_0 = kk_std_core_types__list_unbox(_box_x1636, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0_0 = kk_std_core_sslice__sslice_unbox(_box_x1637, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_2_0_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1742, _ctx);
      _x_x2887 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2889;
    }
  }
  {
    kk_box_t _box_x1638 = _match_x1742.fst;
    kk_box_t _box_x1639 = _match_x1742.snd;
    kk_std_core_sslice__sslice rest_0 = kk_std_core_sslice__sslice_unbox(_box_x1639, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x1638, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest_0, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1742, _ctx);
    kk_box_t _x_x2890;
    kk_std_core_types__tuple2 _x_x2891 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest_0, _ctx), _ctx); /*(129, 130)*/
    _x_x2890 = kk_std_core_types__tuple2_box(_x_x2891, _ctx); /*91*/
    _x_x2887 = kk_std_core_types__new_Just(_x_x2890, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2889: ;
  return kk_std_core_types__maybe_box(_x_x2887, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun2893__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse_pint_fun2893(kk_function_t _fself, kk_box_t _b_x1648, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun2893(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun2893__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pint_fun2893__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_pint_fun2893, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun2893(kk_function_t _fself, kk_box_t _b_x1648, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun2893__t* _self = kk_function_as(struct kk_std_text_parse_pint_fun2893__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10494_1667 = kk_std_core_types__maybe_unbox(_b_x1648, KK_OWNED, _ctx); /*maybe<list<char>>*/;
  kk_integer_t _x_x2894 = kk_std_text_parse__mlift_pint_10579(neg, _y_x10494_1667, _ctx); /*int*/
  return kk_integer_box(_x_x2894, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun2902__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse_pint_fun2902(kk_function_t _fself, kk_box_t _b_x1659, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun2902(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun2902__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pint_fun2902__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_pint_fun2902, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun2902(kk_function_t _fself, kk_box_t _b_x1659, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun2902__t* _self = kk_function_as(struct kk_std_text_parse_pint_fun2902__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10496_1668 = kk_std_core_types__list_unbox(_b_x1659, KK_OWNED, _ctx); /*list<char>*/;
  kk_integer_t _x_x2903 = kk_std_text_parse__mlift_pint_10578(neg, _c_x10496_1668, _ctx); /*int*/
  return kk_integer_box(_x_x2903, _ctx);
}

kk_integer_t kk_std_text_parse_pint(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_std_core_hnd__ev ev_11067 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_11064;
  kk_box_t _x_x2856;
  {
    struct kk_std_core_hnd_Ev* _con_x2857 = kk_std_core_hnd__as_Ev(ev_11067, _ctx);
    kk_box_t _box_x1585 = _con_x2857->hnd;
    int32_t m = _con_x2857->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1585, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2858 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2858->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2858->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2858->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x2858->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2858->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1588 = _ctl_pick.clause;
        _x_x2856 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1588, (_fun_unbox_x1588, m, ev_11067, _ctx), _ctx); /*35*/
      }
    }
  }
  x_11064 = kk_bool_unbox(_x_x2856); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2859 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun2860(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x2859, _ctx);
  }
  {
    kk_char_t x_0_11069;
    if (x_11064) {
      kk_std_core_hnd__ev ev_0_11074 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_std_core_types__maybe x_1_11072;
      kk_box_t _x_x2863;
      {
        struct kk_std_core_hnd_Ev* _con_x2864 = kk_std_core_hnd__as_Ev(ev_0_11074, _ctx);
        kk_box_t _box_x1593 = _con_x2864->hnd;
        int32_t m_0 = _con_x2864->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1593, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2865 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
          kk_integer_t _pat_0_2 = _con_x2865->_cfc;
          kk_std_core_hnd__clause0 _pat_1_2 = _con_x2865->_fun_current_input;
          kk_std_core_hnd__clause1 _pat_2_1 = _con_x2865->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_3_0 = _con_x2865->_ctl_pick;
          kk_std_core_hnd__clause1 _fun_satisfy = _con_x2865->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
            kk_std_core_hnd__clause0_drop(_pat_3_0, _ctx);
            kk_std_core_hnd__clause1_drop(_pat_2_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
            kk_integer_drop(_pat_0_2, _ctx);
            kk_datatype_ptr_free(h_0, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
            kk_datatype_ptr_decref(h_0, _ctx);
          }
          {
            kk_function_t _fun_unbox_x1600 = _fun_satisfy.clause;
            _x_x2863 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1600, (_fun_unbox_x1600, m_0, ev_0_11074, kk_function_box(kk_std_text_parse_new_pint_fun2866(_ctx), _ctx), _ctx), _ctx); /*46*/
          }
        }
      }
      x_1_11072 = kk_std_core_types__maybe_unbox(_x_x2863, KK_OWNED, _ctx); /*maybe<char>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__maybe_drop(x_1_11072, _ctx);
        kk_box_t _x_x2875 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun2876(_ctx), _ctx); /*2978*/
        x_0_11069 = kk_char_unbox(_x_x2875, KK_OWNED, _ctx); /*char*/
      }
      else {
        x_0_11069 = kk_std_text_parse__mlift_pint_10580(x_1_11072, _ctx); /*char*/
      }
    }
    else {
      x_0_11069 = '+'; /*char*/
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x2879 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun2880(_ctx), _ctx); /*2978*/
      return kk_integer_unbox(_x_x2879, _ctx);
    }
    {
      bool neg = (x_0_11069 == ('-')); /*bool*/;
      kk_std_core_hnd__ev ev_1_11080 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_std_core_types__maybe x_3_11077;
      kk_box_t _x_x2883;
      {
        struct kk_std_core_hnd_Ev* _con_x2884 = kk_std_core_hnd__as_Ev(ev_1_11080, _ctx);
        kk_box_t _box_x1622 = _con_x2884->hnd;
        int32_t m_1 = _con_x2884->marker;
        kk_std_text_parse__parse h_1 = kk_std_text_parse__parse_unbox(_box_x1622, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_1, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2885 = kk_std_text_parse__as_Hnd_parse(h_1, _ctx);
          kk_integer_t _pat_0_4 = _con_x2885->_cfc;
          kk_std_core_hnd__clause0 _pat_1_4 = _con_x2885->_fun_current_input;
          kk_std_core_hnd__clause1 _pat_2_2 = _con_x2885->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_3_2 = _con_x2885->_ctl_pick;
          kk_std_core_hnd__clause1 _fun_satisfy_0 = _con_x2885->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_1, _ctx)) {
            kk_std_core_hnd__clause0_drop(_pat_3_2, _ctx);
            kk_std_core_hnd__clause1_drop(_pat_2_2, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_4, _ctx);
            kk_integer_drop(_pat_0_4, _ctx);
            kk_datatype_ptr_free(h_1, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_fun_satisfy_0, _ctx);
            kk_datatype_ptr_decref(h_1, _ctx);
          }
          {
            kk_function_t _fun_unbox_x1629 = _fun_satisfy_0.clause;
            _x_x2883 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1629, (_fun_unbox_x1629, m_1, ev_1_11080, kk_function_box(kk_std_text_parse_new_pint_fun2886(_ctx), _ctx), _ctx), _ctx); /*46*/
          }
        }
      }
      x_3_11077 = kk_std_core_types__maybe_unbox(_x_x2883, KK_OWNED, _ctx); /*maybe<list<char>>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__maybe_drop(x_3_11077, _ctx);
        kk_box_t _x_x2892 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun2893(neg, _ctx), _ctx); /*2978*/
        return kk_integer_unbox(_x_x2892, _ctx);
      }
      {
        kk_std_core_types__list x_5_11083;
        if (kk_std_core_types__is_Nothing(x_3_11077, _ctx)) {
          kk_std_core_hnd__ev ev_2_11086 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
          kk_box_t _x_x2895;
          {
            struct kk_std_core_hnd_Ev* _con_x2896 = kk_std_core_hnd__as_Ev(ev_2_11086, _ctx);
            kk_box_t _box_x1649 = _con_x2896->hnd;
            int32_t m_2 = _con_x2896->marker;
            kk_std_text_parse__parse h_2 = kk_std_text_parse__parse_unbox(_box_x1649, KK_BORROWED, _ctx);
            kk_std_text_parse__parse_dup(h_2, _ctx);
            {
              struct kk_std_text_parse__Hnd_parse* _con_x2897 = kk_std_text_parse__as_Hnd_parse(h_2, _ctx);
              kk_integer_t _pat_0_6 = _con_x2897->_cfc;
              kk_std_core_hnd__clause0 _pat_1_5 = _con_x2897->_fun_current_input;
              kk_std_core_hnd__clause1 _ctl_fail = _con_x2897->_ctl_fail;
              kk_std_core_hnd__clause0 _pat_2_3 = _con_x2897->_ctl_pick;
              kk_std_core_hnd__clause1 _pat_3_3 = _con_x2897->_fun_satisfy;
              if kk_likely(kk_datatype_ptr_is_unique(h_2, _ctx)) {
                kk_std_core_hnd__clause1_drop(_pat_3_3, _ctx);
                kk_std_core_hnd__clause0_drop(_pat_2_3, _ctx);
                kk_std_core_hnd__clause0_drop(_pat_1_5, _ctx);
                kk_integer_drop(_pat_0_6, _ctx);
                kk_datatype_ptr_free(h_2, _ctx);
              }
              else {
                kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
                kk_datatype_ptr_decref(h_2, _ctx);
              }
              {
                kk_function_t _fun_unbox_x1653 = _ctl_fail.clause;
                kk_box_t _x_x2898;
                kk_string_t _x_x2899;
                kk_define_string_literal(, _s_x2900, 5, "digit", _ctx)
                _x_x2899 = kk_string_dup(_s_x2900, _ctx); /*string*/
                _x_x2898 = kk_string_box(_x_x2899); /*45*/
                _x_x2895 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1653, (_fun_unbox_x1653, m_2, ev_2_11086, _x_x2898, _ctx), _ctx); /*46*/
              }
            }
          }
          x_5_11083 = kk_std_core_types__list_unbox(_x_x2895, KK_OWNED, _ctx); /*list<char>*/
        }
        else {
          kk_box_t _box_x1657 = x_3_11077._cons.Just.value;
          kk_std_core_types__list x_0_0 = kk_std_core_types__list_unbox(_box_x1657, KK_BORROWED, _ctx);
          kk_std_core_types__list_dup(x_0_0, _ctx);
          kk_std_core_types__maybe_drop(x_3_11077, _ctx);
          x_5_11083 = x_0_0; /*list<char>*/
        }
        if (kk_yielding(kk_context())) {
          kk_std_core_types__list_drop(x_5_11083, _ctx);
          kk_box_t _x_x2901 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun2902(neg, _ctx), _ctx); /*2978*/
          return kk_integer_unbox(_x_x2901, _ctx);
        }
        {
          kk_string_t _x_x1_0_10530 = kk_std_core_string_listchar_fs_string(x_5_11083, _ctx); /*string*/;
          kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
          kk_std_core_types__maybe x_7;
          bool _x_x2904;
          kk_std_core_types__optional _match_x1741 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x1741, _ctx)) {
            kk_box_t _box_x1660 = _match_x1741._cons._Optional.value;
            bool _uniq_hex_528 = kk_bool_unbox(_box_x1660);
            kk_std_core_types__optional_drop(_match_x1741, _ctx);
            _x_x2904 = _uniq_hex_528; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x1741, _ctx);
            _x_x2904 = false; /*bool*/
          }
          x_7 = kk_std_core_int_xparse(_x_x1_0_10530, _x_x2904, _ctx); /*maybe<int>*/
          kk_unit_t keep = kk_Unit;
          kk_evv_set(w,kk_context());
          kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
          kk_unit_t keep_0 = kk_Unit;
          kk_evv_set(w_0,kk_context());
          if (neg) {
            kk_integer_t _x_x2905;
            if (kk_std_core_types__is_Nothing(x_7, _ctx)) {
              _x_x2905 = kk_integer_from_small(0); /*int*/
            }
            else {
              kk_box_t _box_x1661 = x_7._cons.Just.value;
              kk_integer_t x_0_1 = kk_integer_unbox(_box_x1661, _ctx);
              kk_integer_dup(x_0_1, _ctx);
              kk_std_core_types__maybe_drop(x_7, _ctx);
              _x_x2905 = x_0_1; /*int*/
            }
            return kk_integer_neg(_x_x2905,kk_context());
          }
          if (kk_std_core_types__is_Nothing(x_7, _ctx)) {
            return kk_integer_from_small(0);
          }
          {
            kk_box_t _box_x1662 = x_7._cons.Just.value;
            kk_integer_t x_0_1_0 = kk_integer_unbox(_box_x1662, _ctx);
            kk_integer_dup(x_0_1_0, _ctx);
            kk_std_core_types__maybe_drop(x_7, _ctx);
            return x_0_1_0;
          }
        }
      }
    }
  }
}
 
// lifted local: hex-digits, @spec-x10347
// specialized: std/text/parse/next-while0, on parameters @uniq-pred@10338, using:
// @uniq-pred@10338 = std/core/char/is-hex-digit

kk_std_core_types__tuple2 kk_std_text_parse__lift_hex_digits_10355(kk_std_core_sslice__sslice _uniq_slice_10337, kk_std_core_types__list _uniq_acc_10339, kk_context_t* _ctx) { /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x1736;
  kk_std_core_sslice__sslice _x_x2906 = kk_std_core_sslice__sslice_dup(_uniq_slice_10337, _ctx); /*sslice/sslice*/
  _match_x1736 = kk_std_core_sslice_next(_x_x2906, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x1736, _ctx)) {
    kk_box_t _box_x1669 = _match_x1736._cons.Just.value;
    kk_std_core_types__tuple2 _uniq_pat_0_10341 = kk_std_core_types__tuple2_unbox(_box_x1669, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_uniq_pat_0_10341, _ctx)) {
      kk_box_t _box_x1670 = _uniq_pat_0_10341.fst;
      kk_box_t _box_x1671 = _uniq_pat_0_10341.snd;
      kk_char_t _uniq_c_10342 = kk_char_unbox(_box_x1670, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_hex_digit(_uniq_c_10342, _ctx)) {
        kk_std_core_sslice__sslice _uniq_rest_10343 = kk_std_core_sslice__sslice_unbox(_box_x1671, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(_uniq_slice_10337, _ctx);
        kk_std_core_sslice__sslice_dup(_uniq_rest_10343, _ctx);
        kk_std_core_types__maybe_drop(_match_x1736, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x2907 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(_uniq_c_10342, _ctx), _uniq_acc_10339, _ctx); /*list<82>*/
          _uniq_slice_10337 = _uniq_rest_10343;
          _uniq_acc_10339 = _x_x2907;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x1736, _ctx);
    kk_std_core_types__list _b_x1674_1678;
    if (kk_std_core_types__is_Nil(_uniq_acc_10339, _ctx)) {
      _b_x1674_1678 = kk_std_core_types__new_Nil(_ctx); /*list<char>*/
    }
    else {
      _b_x1674_1678 = kk_std_core_list__unroll_lift_reverse_append_4948_10003(kk_std_core_types__new_Nil(_ctx), _uniq_acc_10339, _ctx); /*list<char>*/
    }
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x1674_1678, _ctx), kk_std_core_sslice__sslice_box(_uniq_slice_10337, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_hex_digits_10583_fun2915__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_hex_digits_10583_fun2915(kk_function_t _fself, kk_box_t _b_x1690, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_hex_digits_10583_fun2915(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_hex_digits_10583_fun2915, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_hex_digits_10583_fun2915(kk_function_t _fself, kk_box_t _b_x1690, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2916;
  kk_std_core_types__list _x_x2917 = kk_std_core_types__list_unbox(_b_x1690, KK_OWNED, _ctx); /*list<char>*/
  _x_x2916 = kk_std_core_string_listchar_fs_string(_x_x2917, _ctx); /*string*/
  return kk_string_box(_x_x2916);
}

kk_string_t kk_std_text_parse__mlift_hex_digits_10583(kk_std_core_types__maybe _y_x10498, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core_types__list x_11095;
  if (kk_std_core_types__is_Nothing(_y_x10498, _ctx)) {
    kk_std_core_hnd__ev ev_11097 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x2908;
    {
      struct kk_std_core_hnd_Ev* _con_x2909 = kk_std_core_hnd__as_Ev(ev_11097, _ctx);
      kk_box_t _box_x1680 = _con_x2909->hnd;
      int32_t m = _con_x2909->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1680, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2910 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0 = _con_x2910->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2910->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2910->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x2910->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2910->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x1684 = _ctl_fail.clause;
          kk_box_t _x_x2911;
          kk_string_t _x_x2912;
          kk_define_string_literal(, _s_x2913, 5, "digit", _ctx)
          _x_x2912 = kk_string_dup(_s_x2913, _ctx); /*string*/
          _x_x2911 = kk_string_box(_x_x2912); /*45*/
          _x_x2908 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1684, (_fun_unbox_x1684, m, ev_11097, _x_x2911, _ctx), _ctx); /*46*/
        }
      }
    }
    x_11095 = kk_std_core_types__list_unbox(_x_x2908, KK_OWNED, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x1688 = _y_x10498._cons.Just.value;
    kk_std_core_types__list x_1 = kk_std_core_types__list_unbox(_box_x1688, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_y_x10498, _ctx);
    x_11095 = x_1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11095, _ctx);
    kk_box_t _x_x2914 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_hex_digits_10583_fun2915(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2914);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_11095, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun2921__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_hex_digits_fun2921(kk_function_t _fself, kk_box_t _b_x1705, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun2921(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun2921, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_hex_digits_fun2921(kk_function_t _fself, kk_box_t _b_x1705, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2922;
  kk_std_core_types__tuple2 _match_x1734;
  kk_std_core_sslice__sslice _x_x2923 = kk_std_core_sslice__sslice_unbox(_b_x1705, KK_OWNED, _ctx); /*sslice/sslice*/
  _match_x1734 = kk_std_text_parse__lift_hex_digits_10355(_x_x2923, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/
  {
    kk_box_t _box_x1706 = _match_x1734.fst;
    kk_box_t _box_x1707 = _match_x1734.snd;
    kk_std_core_types__list _pat_0_0_0 = kk_std_core_types__list_unbox(_box_x1706, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0_0 = kk_std_core_sslice__sslice_unbox(_box_x1707, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x1734, _ctx);
      _x_x2922 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match_x2924;
    }
  }
  {
    kk_box_t _box_x1708 = _match_x1734.fst;
    kk_box_t _box_x1709 = _match_x1734.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x1709, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x1708, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1734, _ctx);
    kk_box_t _x_x2925;
    kk_std_core_types__tuple2 _x_x2926 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x2925 = kk_std_core_types__tuple2_box(_x_x2926, _ctx); /*91*/
    _x_x2922 = kk_std_core_types__new_Just(_x_x2925, _ctx); /*forall<a> maybe<a>*/
  }
  _match_x2924: ;
  return kk_std_core_types__maybe_box(_x_x2922, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun2928__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_hex_digits_fun2928(kk_function_t _fself, kk_box_t _b_x1718, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun2928(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun2928, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_hex_digits_fun2928(kk_function_t _fself, kk_box_t _b_x1718, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2929;
  kk_std_core_types__maybe _x_x2930 = kk_std_core_types__maybe_unbox(_b_x1718, KK_OWNED, _ctx); /*maybe<list<char>>*/
  _x_x2929 = kk_std_text_parse__mlift_hex_digits_10583(_x_x2930, _ctx); /*string*/
  return kk_string_box(_x_x2929);
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun2938__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_hex_digits_fun2938(kk_function_t _fself, kk_box_t _b_x1729, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun2938(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun2938, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_hex_digits_fun2938(kk_function_t _fself, kk_box_t _b_x1729, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2939;
  kk_std_core_types__list _x_x2940 = kk_std_core_types__list_unbox(_b_x1729, KK_OWNED, _ctx); /*list<char>*/
  _x_x2939 = kk_std_core_string_listchar_fs_string(_x_x2940, _ctx); /*string*/
  return kk_string_box(_x_x2939);
}

kk_string_t kk_std_text_parse_hex_digits(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_11103 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_11100;
  kk_box_t _x_x2918;
  {
    struct kk_std_core_hnd_Ev* _con_x2919 = kk_std_core_hnd__as_Ev(ev_11103, _ctx);
    kk_box_t _box_x1692 = _con_x2919->hnd;
    int32_t m = _con_x2919->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x1692, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2920 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x2920->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x2920->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x2920->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x2920->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x2920->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1699 = _fun_satisfy.clause;
        _x_x2918 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1699, (_fun_unbox_x1699, m, ev_11103, kk_function_box(kk_std_text_parse_new_hex_digits_fun2921(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_11100 = kk_std_core_types__maybe_unbox(_x_x2918, KK_OWNED, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_11100, _ctx);
    kk_box_t _x_x2927 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_hex_digits_fun2928(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x2927);
  }
  {
    kk_std_core_types__list x_1_11106;
    if (kk_std_core_types__is_Nothing(x_11100, _ctx)) {
      kk_std_core_hnd__ev ev_0_11108 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_box_t _x_x2931;
      {
        struct kk_std_core_hnd_Ev* _con_x2932 = kk_std_core_hnd__as_Ev(ev_0_11108, _ctx);
        kk_box_t _box_x1719 = _con_x2932->hnd;
        int32_t m_0 = _con_x2932->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x1719, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        {
          struct kk_std_text_parse__Hnd_parse* _con_x2933 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
          kk_integer_t _pat_0_3 = _con_x2933->_cfc;
          kk_std_core_hnd__clause0 _pat_1_3 = _con_x2933->_fun_current_input;
          kk_std_core_hnd__clause1 _ctl_fail = _con_x2933->_ctl_fail;
          kk_std_core_hnd__clause0 _pat_2_1 = _con_x2933->_ctl_pick;
          kk_std_core_hnd__clause1 _pat_3_1 = _con_x2933->_fun_satisfy;
          if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
            kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
            kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
            kk_integer_drop(_pat_0_3, _ctx);
            kk_datatype_ptr_free(h_0, _ctx);
          }
          else {
            kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
            kk_datatype_ptr_decref(h_0, _ctx);
          }
          {
            kk_function_t _fun_unbox_x1723 = _ctl_fail.clause;
            kk_box_t _x_x2934;
            kk_string_t _x_x2935;
            kk_define_string_literal(, _s_x2936, 5, "digit", _ctx)
            _x_x2935 = kk_string_dup(_s_x2936, _ctx); /*string*/
            _x_x2934 = kk_string_box(_x_x2935); /*45*/
            _x_x2931 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1723, (_fun_unbox_x1723, m_0, ev_0_11108, _x_x2934, _ctx), _ctx); /*46*/
          }
        }
      }
      x_1_11106 = kk_std_core_types__list_unbox(_x_x2931, KK_OWNED, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x1727 = x_11100._cons.Just.value;
      kk_std_core_types__list x_3 = kk_std_core_types__list_unbox(_box_x1727, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(x_3, _ctx);
      kk_std_core_types__maybe_drop(x_11100, _ctx);
      x_1_11106 = x_3; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_1_11106, _ctx);
      kk_box_t _x_x2937 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_hex_digits_fun2938(_ctx), _ctx); /*2978*/
      return kk_string_unbox(_x_x2937);
    }
    {
      return kk_std_core_string_listchar_fs_string(x_1_11106, _ctx);
    }
  }
}

// initialization
void kk_std_text_parse__init(kk_context_t* _ctx){
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
  kk_std_core_undiv__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x1980;
    kk_define_string_literal(, _s_x1981, 11, "parse@parse", _ctx)
    _x_x1980 = kk_string_dup(_s_x1981, _ctx); /*string*/
    kk_std_text_parse__tag_parse = kk_std_core_hnd__new_Htag(_x_x1980, _ctx); /*hnd/htag<std/text/parse/parse>*/
  }
}

// termination
void kk_std_text_parse__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_std_text_parse__tag_parse, _ctx);
  kk_std_core_undiv__done(_ctx);
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
