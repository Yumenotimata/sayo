#pragma once
#ifndef kk_std_text_parse_H
#define kk_std_text_parse_H
// Koka generated module: std/text/parse, koka version: 3.1.2, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core_exn.h"
#include "std_core_bool.h"
#include "std_core_order.h"
#include "std_core_char.h"
#include "std_core_int.h"
#include "std_core_vector.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_list.h"
#include "std_core_maybe.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"
#include "std_core_undiv.h"

// type declarations

// type std/text/parse/parse
struct kk_std_text_parse__parse_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_text_parse__parse;
struct kk_std_text_parse__Hnd_parse {
  struct kk_std_text_parse__parse_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause0 _fun_current_input;
  kk_std_core_hnd__clause1 _ctl_fail;
  kk_std_core_hnd__clause0 _ctl_pick;
  kk_std_core_hnd__clause1 _fun_satisfy;
};
static inline kk_std_text_parse__parse kk_std_text_parse__base_Hnd_parse(struct kk_std_text_parse__Hnd_parse* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_text_parse__parse kk_std_text_parse__new_Hnd_parse(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause0 _fun_current_input, kk_std_core_hnd__clause1 _ctl_fail, kk_std_core_hnd__clause0 _ctl_pick, kk_std_core_hnd__clause1 _fun_satisfy, kk_context_t* _ctx) {
  struct kk_std_text_parse__Hnd_parse* _con = kk_block_alloc_at_as(struct kk_std_text_parse__Hnd_parse, _at, 5 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_current_input = _fun_current_input;
  _con->_ctl_fail = _ctl_fail;
  _con->_ctl_pick = _ctl_pick;
  _con->_fun_satisfy = _fun_satisfy;
  return kk_std_text_parse__base_Hnd_parse(_con, _ctx);
}
static inline struct kk_std_text_parse__Hnd_parse* kk_std_text_parse__as_Hnd_parse(kk_std_text_parse__parse x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_text_parse__Hnd_parse*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_std_text_parse__is_Hnd_parse(kk_std_text_parse__parse x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_text_parse__parse kk_std_text_parse__parse_dup(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_text_parse__parse_drop(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_text_parse__parse_box(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_text_parse__parse kk_std_text_parse__parse_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type std/text/parse/parse-error
struct kk_std_text_parse__parse_error_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_text_parse__parse_error;
struct kk_std_text_parse_ParseOk {
  struct kk_std_text_parse__parse_error_s _base;
  kk_box_t result;
  kk_std_core_sslice__sslice rest;
};
struct kk_std_text_parse_ParseError {
  struct kk_std_text_parse__parse_error_s _base;
  kk_string_t msg;
  kk_std_core_sslice__sslice rest;
};
static inline kk_std_text_parse__parse_error kk_std_text_parse__base_ParseOk(struct kk_std_text_parse_ParseOk* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__new_ParseOk(kk_reuse_t _at, int32_t _cpath, kk_box_t result, kk_std_core_sslice__sslice rest, kk_context_t* _ctx) {
  struct kk_std_text_parse_ParseOk* _con = kk_block_alloc_at_as(struct kk_std_text_parse_ParseOk, _at, 4 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->result = result;
  _con->rest = rest;
  return kk_std_text_parse__base_ParseOk(_con, _ctx);
}
static inline struct kk_std_text_parse_ParseOk* kk_std_text_parse__as_ParseOk(kk_std_text_parse__parse_error x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_text_parse_ParseOk*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__base_ParseError(struct kk_std_text_parse_ParseError* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__new_ParseError(kk_reuse_t _at, int32_t _cpath, kk_string_t msg, kk_std_core_sslice__sslice rest, kk_context_t* _ctx) {
  struct kk_std_text_parse_ParseError* _con = kk_block_alloc_at_as(struct kk_std_text_parse_ParseError, _at, 4 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->msg = msg;
  _con->rest = rest;
  return kk_std_text_parse__base_ParseError(_con, _ctx);
}
static inline struct kk_std_text_parse_ParseError* kk_std_text_parse__as_ParseError(kk_std_text_parse__parse_error x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_text_parse_ParseError*, x, (kk_tag_t)(2), _ctx);
}
static inline bool kk_std_text_parse__is_ParseOk(kk_std_text_parse__parse_error x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_std_text_parse__is_ParseError(kk_std_text_parse__parse_error x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__parse_error_dup(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_text_parse__parse_error_drop(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_text_parse__parse_error_box(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__parse_error_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:parse` type.

static inline kk_integer_t kk_std_text_parse_parse_fs__cfc(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a> (parse : parse<e,a>) -> int */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1971 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_integer_t _x = _con_x1971->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-current-input` constructor field of the `:parse` type.

static inline kk_std_core_hnd__clause0 kk_std_text_parse_parse_fs__fun_current_input(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a> (parse : parse<e,a>) -> hnd/clause0<sslice/sslice,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1972 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x1972->_fun_current_input;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@ctl-fail` constructor field of the `:parse` type.

static inline kk_std_core_hnd__clause1 kk_std_text_parse_parse_fs__ctl_fail(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a,b> (parse : parse<e,a>) -> hnd/clause1<string,b,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1973 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x1973->_ctl_fail;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@ctl-pick` constructor field of the `:parse` type.

static inline kk_std_core_hnd__clause0 kk_std_text_parse_parse_fs__ctl_pick(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a> (parse : parse<e,a>) -> hnd/clause0<bool,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1974 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x1974->_ctl_pick;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-satisfy` constructor field of the `:parse` type.

static inline kk_std_core_hnd__clause1 kk_std_text_parse_parse_fs__fun_satisfy(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a,b> (parse : parse<e,a>) -> hnd/clause1<(sslice/sslice) -> maybe<(b, sslice/sslice)>,maybe<b>,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1975 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x1975->_fun_satisfy;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `rest` constructor field of the `:parse-error` type.

static inline kk_std_core_sslice__sslice kk_std_text_parse_parse_error_fs_rest(kk_std_text_parse__parse_error _this, kk_context_t* _ctx) { /* forall<a> (parse-error<a>) -> sslice/sslice */ 
  if (kk_std_text_parse__is_ParseOk(_this, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x1976 = kk_std_text_parse__as_ParseOk(_this, _ctx);
    kk_std_core_sslice__sslice _x = _con_x1976->rest;
    return kk_std_core_sslice__sslice_dup(_x, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x1977 = kk_std_text_parse__as_ParseError(_this, _ctx);
    kk_std_core_sslice__sslice _x_0 = _con_x1977->rest;
    return kk_std_core_sslice__sslice_dup(_x_0, _ctx);
  }
}
 
// Automatically generated. Tests for the `ParseOk` constructor of the `:parse-error` type.

static inline bool kk_std_text_parse_is_parseOk(kk_std_text_parse__parse_error parse_error, kk_context_t* _ctx) { /* forall<a> (parse-error : parse-error<a>) -> bool */ 
  if (kk_std_text_parse__is_ParseOk(parse_error, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x1978 = kk_std_text_parse__as_ParseOk(parse_error, _ctx);
    kk_std_core_sslice__sslice _pat_1 = _con_x1978->rest;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ParseError` constructor of the `:parse-error` type.

static inline bool kk_std_text_parse_is_parseError(kk_std_text_parse__parse_error parse_error, kk_context_t* _ctx) { /* forall<a> (parse-error : parse-error<a>) -> bool */ 
  if (kk_std_text_parse__is_ParseError(parse_error, _ctx)) {
    struct kk_std_text_parse_ParseError* _con_x1979 = kk_std_text_parse__as_ParseError(parse_error, _ctx);
    kk_std_core_sslice__sslice _pat_1 = _con_x1979->rest;
    return true;
  }
  {
    return false;
  }
}

extern kk_std_core_hnd__htag kk_std_text_parse__tag_parse;

kk_box_t kk_std_text_parse__handle_parse(kk_std_text_parse__parse hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : parse<e,b>, ret : (res : a) -> e b, action : () -> <parse|e> a) -> e b */ 
 
// select `satisfy` operation out of effect `:parse`

static inline kk_std_core_hnd__clause1 kk_std_text_parse__select_satisfy(kk_std_text_parse__parse hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : parse<e,b>) -> hnd/clause1<(sslice/sslice) -> maybe<(a, sslice/sslice)>,maybe<a>,parse,e,b> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1983 = kk_std_text_parse__as_Hnd_parse(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_satisfy = _con_x1983->_fun_satisfy;
    return kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
  }
}
 
// Call the `fun satisfy` operation of the effect `:parse`


// lift anonymous function
struct kk_std_text_parse_satisfy_fun1987__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
extern kk_box_t kk_std_text_parse_satisfy_fun1987(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_satisfy_fun1987(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fun1987__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fun1987__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_satisfy_fun1987, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_std_core_types__maybe kk_std_text_parse_satisfy(kk_function_t pred, kk_context_t* _ctx) { /* forall<a> (pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse maybe<a> */ 
  kk_std_core_hnd__ev ev_10585 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_box_t _x_x1984;
  {
    struct kk_std_core_hnd_Ev* _con_x1985 = kk_std_core_hnd__as_Ev(ev_10585, _ctx);
    kk_box_t _box_x8 = _con_x1985->hnd;
    int32_t m = _con_x1985->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x1986 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1986->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x1986->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x1986->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x1986->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x1986->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x15 = _fun_satisfy.clause;
        _x_x1984 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x15, (_fun_unbox_x15, m, ev_10585, kk_function_box(kk_std_text_parse_new_satisfy_fun1987(pred, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  return kk_std_core_types__maybe_unbox(_x_x1984, KK_OWNED, _ctx);
}
 
// select `fail` operation out of effect `:parse`

static inline kk_std_core_hnd__clause1 kk_std_text_parse__select_fail(kk_std_text_parse__parse hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : parse<e,b>) -> hnd/clause1<string,a,parse,e,b> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1990 = kk_std_text_parse__as_Hnd_parse(hnd, _ctx);
    kk_std_core_hnd__clause1 _ctl_fail = _con_x1990->_ctl_fail;
    return kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
  }
}
 
// Call the `ctl fail` operation of the effect `:parse`

static inline kk_box_t kk_std_text_parse_fail(kk_string_t msg, kk_context_t* _ctx) { /* forall<a> (msg : string) -> parse a */ 
  kk_std_core_hnd__ev ev_10588 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1991 = kk_std_core_hnd__as_Ev(ev_10588, _ctx);
    kk_box_t _box_x22 = _con_x1991->hnd;
    int32_t m = _con_x1991->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x22, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x1992 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1992->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x1992->_fun_current_input;
      kk_std_core_hnd__clause1 _ctl_fail = _con_x1992->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x1992->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x1992->_fun_satisfy;
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
        kk_function_t _fun_unbox_x26 = _ctl_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x26, (_fun_unbox_x26, m, ev_10588, kk_string_box(msg), _ctx), _ctx);
      }
    }
  }
}
 
// select `pick` operation out of effect `:parse`

static inline kk_std_core_hnd__clause0 kk_std_text_parse__select_pick(kk_std_text_parse__parse hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : parse<e,a>) -> hnd/clause0<bool,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1993 = kk_std_text_parse__as_Hnd_parse(hnd, _ctx);
    kk_std_core_hnd__clause0 _ctl_pick = _con_x1993->_ctl_pick;
    return kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
  }
}
 
// Call the `ctl pick` operation of the effect `:parse`

static inline bool kk_std_text_parse_pick(kk_context_t* _ctx) { /* () -> parse bool */ 
  kk_std_core_hnd__ev ev_10591 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_box_t _x_x1994;
  {
    struct kk_std_core_hnd_Ev* _con_x1995 = kk_std_core_hnd__as_Ev(ev_10591, _ctx);
    kk_box_t _box_x30 = _con_x1995->hnd;
    int32_t m = _con_x1995->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x30, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x1996 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1996->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x1996->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x1996->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x1996->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x1996->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x33 = _ctl_pick.clause;
        _x_x1994 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x33, (_fun_unbox_x33, m, ev_10591, _ctx), _ctx); /*35*/
      }
    }
  }
  return kk_bool_unbox(_x_x1994);
}
 
// select `current-input` operation out of effect `:parse`

static inline kk_std_core_hnd__clause0 kk_std_text_parse__select_current_input(kk_std_text_parse__parse hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : parse<e,a>) -> hnd/clause0<sslice/sslice,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x1997 = kk_std_text_parse__as_Hnd_parse(hnd, _ctx);
    kk_std_core_hnd__clause0 _fun_current_input = _con_x1997->_fun_current_input;
    return kk_std_core_hnd__clause0_dup(_fun_current_input, _ctx);
  }
}
 
// Call the `fun current-input` operation of the effect `:parse`

static inline kk_std_core_sslice__sslice kk_std_text_parse_current_input(kk_context_t* _ctx) { /* () -> parse sslice/sslice */ 
  kk_std_core_hnd__ev ev_10593 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_box_t _x_x1998;
  {
    struct kk_std_core_hnd_Ev* _con_x1999 = kk_std_core_hnd__as_Ev(ev_10593, _ctx);
    kk_box_t _box_x36 = _con_x1999->hnd;
    int32_t m = _con_x1999->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x36, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x2000 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x2000->_cfc;
      kk_std_core_hnd__clause0 _fun_current_input = _con_x2000->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x2000->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x2000->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x2000->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_current_input, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x39 = _fun_current_input.clause;
        _x_x1998 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x39, (_fun_unbox_x39, m, ev_10593, _ctx), _ctx); /*35*/
      }
    }
  }
  return kk_std_core_sslice__sslice_unbox(_x_x1998, KK_OWNED, _ctx);
}

kk_std_core_types__either kk_std_text_parse_either(kk_std_text_parse__parse_error perr, kk_context_t* _ctx); /* forall<a> (perr : parse-error<a>) -> either<string,a> */ 

kk_std_core_types__maybe kk_std_text_parse_maybe(kk_std_text_parse__parse_error perr, kk_context_t* _ctx); /* forall<a> (perr : parse-error<a>) -> maybe<a> */ 
 
// monadic lift

static inline kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10532(kk_string_t msg, kk_std_core_sslice__sslice _y_x10366, kk_context_t* _ctx) { /* forall<h,a,e> (msg : string, sslice/sslice) -> <local<h>|e> parse-error<a> */ 
  return kk_std_text_parse__new_ParseError(kk_reuse_null, 0, msg, _y_x10366, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10533(kk_std_text_parse__parse_error err1, kk_std_text_parse__parse_error _y_x10370, kk_context_t* _ctx); /* forall<h,a,e> (err1 : parse-error<a>, parse-error<a>) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10534(kk_std_text_parse__parse_error err1, kk_function_t resume, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h,a,e> (err1 : parse-error<a>, resume : (bool) -> <local<h>|e> parse-error<a>, wild_ : ()) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10535(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_std_text_parse__parse_error _y_x10368, kk_context_t* _ctx); /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice, parse-error<a>) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10536(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_context_t* _ctx); /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice) -> <local<h>|e> parse-error<a> */ 
 
// monadic lift

static inline kk_std_core_types__maybe kk_std_text_parse__mlift_parse_10537(kk_box_t x, kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<a,h,e> (x : a, wild_@0 : ()) -> <local<h>|e> maybe<a> */ 
  return kk_std_core_types__new_Just(x, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse__mlift_parse_10538(kk_ref_t input, kk_function_t pred, kk_std_core_sslice__sslice inp, kk_context_t* _ctx); /* forall<a,h,e> (input : local-var<h,sslice/sslice>, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>, inp : sslice/sslice) -> <local<h>|e> maybe<a> */ 
 
// monadic lift

static inline kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10539(kk_box_t x_0, kk_std_core_sslice__sslice _y_x10375, kk_context_t* _ctx) { /* forall<h,a,e> (x@0 : a, sslice/sslice) -> <local<h>|e> parse-error<a> */ 
  return kk_std_text_parse__new_ParseOk(kk_reuse_null, 0, x_0, _y_x10375, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse_parse(kk_std_core_sslice__sslice input0, kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (input0 : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 

kk_std_core_types__maybe kk_std_text_parse_starts_with(kk_string_t s, kk_function_t p, kk_context_t* _ctx); /* forall<a> (s : string, p : () -> parse a) -> maybe<(a, sslice/sslice)> */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__lp__at_mlift_x_10540_bar__bar__rp_(kk_function_t p1, kk_function_t p2, bool _y_x10381, kk_context_t* _ctx) { /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>, bool) -> <parse|e> a */ 
  if (_y_x10381) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx), _ctx);
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx), _ctx);
  }
}

kk_box_t kk_std_text_parse__lp__bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx); /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>) -> <parse|e> a */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__mlift_optional_10541(kk_box_t kkloc_default, kk_function_t p, bool _y_x10386, kk_context_t* _ctx) { /* forall<a,e> (default : a, p : parser<e,a>, bool) -> <parse|e> a */ 
  if (_y_x10386) {
    kk_box_drop(kkloc_default, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx);
  }
  {
    kk_function_drop(p, _ctx);
    return kkloc_default;
  }
}

kk_box_t kk_std_text_parse_optional(kk_box_t kkloc_default, kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (default : a, p : parser<e,a>) -> <parse|e> a */ 

kk_box_t kk_std_text_parse__mlift_unroll_choose_10000_10542(kk_function_t p_0, kk_std_core_types__list pp, bool _y_x10393, kk_context_t* _ctx); /* forall<a,e> (p@0 : parser<e,a>, pp : list<parser<e,a>>, bool) -> <parse|e> a */ 

kk_box_t kk_std_text_parse__unroll_choose_10000(kk_std_core_types__list ps, kk_context_t* _ctx); /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */ 
 
// unrolling of singleton matches of std/text/parse/@unroll-choose@10000


// lift anonymous function
struct kk_std_text_parse_choose_fun2116__t {
  struct kk_function_s _base;
  kk_ssize_t i_10656;
};
extern kk_box_t kk_std_text_parse_choose_fun2116(kk_function_t _fself, kk_function_t cont, kk_box_t res, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_choose_fun2116(kk_ssize_t i_10656, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun2116__t* _self = kk_function_alloc_as(struct kk_std_text_parse_choose_fun2116__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_choose_fun2116, kk_context());
  _self->i_10656 = i_10656;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_box_t kk_std_text_parse_choose(kk_std_core_types__list ps, kk_context_t* _ctx) { /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */ 
  if (kk_std_core_types__is_Nil(ps, _ctx)) {
    kk_ssize_t i_10656;
    kk_std_core_hnd__htag _x_x2110 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
    i_10656 = kk_std_core_hnd__evv_index(_x_x2110, _ctx); /*hnd/ev-index*/
    kk_evv_t w = kk_evv_swap_create1(i_10656,kk_context()); /*hnd/evv<<std/text/parse/parse|1711>>*/;
    kk_std_core_hnd__ev ev_10659 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t y;
    {
      struct kk_std_core_hnd_Ev* _con_x2111 = kk_std_core_hnd__as_Ev(ev_10659, _ctx);
      kk_box_t _box_x235 = _con_x2111->hnd;
      int32_t m = _con_x2111->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x235, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x2112 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_0 = _con_x2112->_cfc;
        kk_std_core_hnd__clause0 _pat_1_1 = _con_x2112->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x2112->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2 = _con_x2112->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x2112->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
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
          kk_function_t _fun_unbox_x239 = _ctl_fail.clause;
          kk_box_t _x_x2113;
          kk_string_t _x_x2114;
          kk_define_string_literal(, _s_x2115, 23, "no further alternatives", _ctx)
          _x_x2114 = kk_string_dup(_s_x2115, _ctx); /*string*/
          _x_x2113 = kk_string_box(_x_x2114); /*45*/
          y = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x239, (_fun_unbox_x239, m, ev_10659, _x_x2113, _ctx), _ctx); /*1710*/
        }
      }
    }
    kk_unit_t __ = kk_Unit;
    kk_evv_set(w,kk_context());
    if (kk_yielding(kk_context())) {
      kk_box_drop(y, _ctx);
      return kk_std_core_hnd_yield_cont(kk_std_text_parse_new_choose_fun2116(i_10656, _ctx), _ctx);
    }
    {
      return y;
    }
  }
  {
    return kk_std_text_parse__unroll_choose_10000(ps, _ctx);
  }
}

kk_box_t kk_std_text_parse__mlift_satisfy_fail_10543(kk_string_t msg, kk_std_core_types__maybe _y_x10402, kk_context_t* _ctx); /* forall<a> (msg : string, maybe<a>) -> parse a */ 

kk_box_t kk_std_text_parse_satisfy_fail(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* forall<a> (msg : string, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse a */ 

kk_unit_t kk_std_text_parse__mlift_eof_10544(kk_std_core_types__maybe _y_x10405, kk_context_t* _ctx); /* (maybe<()>) -> parse () */ 

kk_unit_t kk_std_text_parse_eof(kk_context_t* _ctx); /* () -> parse () */ 

kk_unit_t kk_std_text_parse__mlift_parse_eof_10545(kk_std_core_types__maybe _y_x10409, kk_context_t* _ctx); /* (maybe<()>) -> parse () */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__mlift_parse_eof_10546(kk_box_t x, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<a,e> (x : a, wild_ : ()) -> <parse|e> a */ 
  return x;
}

kk_box_t kk_std_text_parse__mlift_parse_eof_10547(kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (x : a) -> <parse|e> a */ 

kk_std_text_parse__parse_error kk_std_text_parse_parse_eof(kk_std_core_sslice__sslice input, kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (input : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 

kk_char_t kk_std_text_parse__mlift_char_is_10548(kk_string_t msg, kk_std_core_types__maybe _y_x10414, kk_context_t* _ctx); /* (msg : string, maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_char_is(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* (msg : string, pred : (char) -> bool) -> parse char */ 

kk_std_core_types__tuple2 kk_std_text_parse_next_while0(kk_std_core_sslice__sslice slice, kk_function_t pred, kk_std_core_types__list acc, kk_context_t* _ctx); /* (slice : sslice/sslice, pred : (char) -> bool, acc : list<char>) -> (list<char>, sslice/sslice) */ 

kk_std_core_types__list kk_std_text_parse__mlift_chars_are_10549(kk_string_t msg, kk_std_core_types__maybe _y_x10417, kk_context_t* _ctx); /* (msg : string, maybe<list<char>>) -> parse list<char> */ 

kk_std_core_types__list kk_std_text_parse_chars_are(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* (msg : string, pred : (char) -> bool) -> parse list<char> */ 

kk_std_core_types__maybe kk_std_text_parse__unroll_next_match_10001(kk_std_core_sslice__sslice slice, kk_std_core_types__list cs, kk_context_t* _ctx); /* (slice : sslice/sslice, cs : list<char>) -> maybe<sslice/sslice> */ 
 
// unrolling of singleton matches of std/text/parse/@unroll-next-match@10001

static inline kk_std_core_types__maybe kk_std_text_parse_next_match(kk_std_core_sslice__sslice slice, kk_std_core_types__list cs, kk_context_t* _ctx) { /* (slice : sslice/sslice, cs : list<char>) -> maybe<sslice/sslice> */ 
  if (kk_std_core_types__is_Nil(cs, _ctx)) {
    return kk_std_core_types__new_Just(kk_std_core_sslice__sslice_box(slice, _ctx), _ctx);
  }
  {
    return kk_std_text_parse__unroll_next_match_10001(slice, cs, _ctx);
  }
}

kk_string_t kk_std_text_parse__mlift_pstring_10550(kk_string_t s, kk_std_core_types__maybe _y_x10420, kk_context_t* _ctx); /* (s : string, maybe<string>) -> parse string */ 

kk_string_t kk_std_text_parse_pstring(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> parse string */ 

kk_char_t kk_std_text_parse__mlift_char_10551(kk_string_t msg_10031, kk_std_core_types__maybe _y_x10423, kk_context_t* _ctx); /* (msg@10031 : string, maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_char(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> parse char */ 

kk_char_t kk_std_text_parse__mlift_no_digit_10552(kk_std_core_types__maybe _y_x10426, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_no_digit(kk_context_t* _ctx); /* () -> parse char */ 

kk_integer_t kk_std_text_parse__mlift_digit_10553(kk_char_t _c_x10431, kk_context_t* _ctx); /* (char) -> int */ 

kk_integer_t kk_std_text_parse__mlift_digit_10554(kk_std_core_types__maybe _y_x10429, kk_context_t* _ctx); /* (maybe<char>) -> parse int */ 

kk_integer_t kk_std_text_parse_digit(kk_context_t* _ctx); /* () -> parse int */ 

kk_char_t kk_std_text_parse__mlift_alpha_10555(kk_std_core_types__maybe _y_x10432, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_alpha(kk_context_t* _ctx); /* () -> parse char */ 

kk_char_t kk_std_text_parse__mlift_alpha_num_10556(kk_std_core_types__maybe _y_x10435, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_alpha_num(kk_context_t* _ctx); /* () -> parse char */ 

kk_char_t kk_std_text_parse__mlift_white_10557(kk_std_core_types__maybe _y_x10438, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_white(kk_context_t* _ctx); /* () -> parse char */ 

kk_std_core_types__tuple2 kk_std_text_parse__lift_whitespace_10348(kk_std_core_sslice__sslice _uniq_slice_10259, kk_std_core_types__list _uniq_acc_10261, kk_context_t* _ctx); /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 

kk_string_t kk_std_text_parse__mlift_whitespace_10558(kk_std_core_types__maybe _y_x10441, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse_whitespace(kk_context_t* _ctx); /* () -> parse string */ 

kk_std_core_types__tuple2 kk_std_text_parse__lift_whitespace0_10349(kk_std_core_sslice__sslice _uniq_slice_10270, kk_std_core_types__list _uniq_acc_10272, kk_context_t* _ctx); /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 

kk_string_t kk_std_text_parse__mlift_whitespace0_10559(kk_std_core_types__maybe _y_x10445, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse__mlift_whitespace0_10560(bool _y_x10444, kk_context_t* _ctx); /* (bool) -> parse string */ 

kk_string_t kk_std_text_parse_whitespace0(kk_context_t* _ctx); /* () -> parse string */ 

kk_std_core_types__tuple2 kk_std_text_parse__lift_digits_10350(kk_std_core_sslice__sslice _uniq_slice_10281, kk_std_core_types__list _uniq_acc_10283, kk_context_t* _ctx); /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 

kk_string_t kk_std_text_parse__mlift_digits_10561(kk_std_core_types__maybe _y_x10449, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse_digits(kk_context_t* _ctx); /* () -> parse string */ 

kk_std_core_types__tuple2 kk_std_text_parse__lift_digits0_10351(kk_std_core_sslice__sslice _uniq_slice_10292, kk_std_core_types__list _uniq_acc_10294, kk_context_t* _ctx); /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 

kk_string_t kk_std_text_parse__mlift_digits0_10562(kk_std_core_types__maybe _y_x10453, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse__mlift_digits0_10563(bool _y_x10452, kk_context_t* _ctx); /* (bool) -> parse string */ 

kk_string_t kk_std_text_parse_digits0(kk_context_t* _ctx); /* () -> parse string */ 

kk_std_core_types__tuple2 kk_std_text_parse__lift_pnat_10352(kk_std_core_sslice__sslice _uniq_slice_10303, kk_std_core_types__list _uniq_acc_10305, kk_context_t* _ctx); /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 

kk_integer_t kk_std_text_parse__mlift_pnat_10564(kk_std_core_types__list _c_x10459, kk_context_t* _ctx); /* (list<char>) -> int */ 

kk_integer_t kk_std_text_parse__mlift_pnat_10565(kk_std_core_types__maybe _y_x10457, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse int */ 

kk_integer_t kk_std_text_parse_pnat(kk_context_t* _ctx); /* () -> parse int */ 

kk_char_t kk_std_text_parse__mlift_none_of_10566(kk_std_core_types__maybe _y_x10460, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_none_of(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse char */ 

kk_std_core_types__tuple2 kk_std_text_parse__lift_none_of_many1_10353(kk_string_t chars, kk_std_core_sslice__sslice _uniq_slice_10314, kk_std_core_types__list _uniq_acc_10316, kk_context_t* _ctx); /* (chars : string, sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 

kk_string_t kk_std_text_parse__mlift_none_of_many1_10567(kk_std_core_types__maybe _y_x10463, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse_none_of_many1(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse string */ 

kk_char_t kk_std_text_parse__mlift_one_of_10568(kk_string_t chars, kk_std_core_types__maybe _y_x10466, kk_context_t* _ctx); /* (chars : string, maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_one_of(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse char */ 

kk_std_core_types__list kk_std_text_parse__mlift_many_acc_10569(kk_std_core_types__list acc, kk_function_t p, kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (acc : list<a>, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse__mlift_many_acc_10570(kk_std_core_types__list acc_0, kk_function_t p_0, bool _y_x10470, kk_context_t* _ctx); /* forall<a,e> (acc : list<a>, p : parser<e,a>, bool) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse_many_acc(kk_function_t p_1, kk_std_core_types__list acc_1, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>, acc : list<a>) -> <parse|e> list<a> */ 
 
// The `many` combinator parses `p` until it fails, returning a list of the results of `p`.
// The `many` combinator is non-divergent only when `p` always consumes input or `fail`s.

static inline kk_std_core_types__list kk_std_text_parse_many(kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 
  return kk_std_text_parse_many_acc(p, kk_std_core_types__new_Nil(_ctx), _ctx);
}
 
// monadic lift

static inline kk_std_core_types__list kk_std_text_parse__mlift_many1_10571(kk_box_t _y_x10475, kk_std_core_types__list _y_x10476, kk_context_t* _ctx) { /* forall<a,e> (a, list<a>) -> <parse|e> list<a> */ 
  return kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10475, _y_x10476, _ctx);
}

kk_std_core_types__list kk_std_text_parse__mlift_many1_10572(kk_function_t p, kk_box_t _y_x10475, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>, a) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse_many1(kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse__mlift_count_acc_10573(kk_std_core_types__list acc, kk_integer_t n, kk_function_t p, kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (acc : list<a>, n : int, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse_count_acc(kk_integer_t n_0, kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx); /* forall<a,e> (n : int, acc : list<a>, p : parser<e,a>) -> <parse|e> list<a> */ 

static inline kk_std_core_types__list kk_std_text_parse_count(kk_integer_t n, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (n : int, p : parser<e,a>) -> <parse|e> list<a> */ 
  return kk_std_text_parse_count_acc(n, kk_std_core_types__new_Nil(_ctx), p, _ctx);
}
 
// monadic lift

static inline kk_char_t kk_std_text_parse__mlift_one_of_or_10574(kk_string_t chars, kk_char_t kkloc_default, bool _y_x10481, kk_context_t* _ctx) { /* (chars : string, default : char, bool) -> parse char */ 
  if (_y_x10481) {
    return kk_std_text_parse_one_of(chars, _ctx);
  }
  {
    kk_string_drop(chars, _ctx);
    return kkloc_default;
  }
}

kk_char_t kk_std_text_parse_one_of_or(kk_string_t chars, kk_char_t kkloc_default, kk_context_t* _ctx); /* (chars : string, default : char) -> parse char */ 

kk_char_t kk_std_text_parse__mlift_sign_10575(kk_std_core_types__maybe _y_x10485, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 
 
// monadic lift

static inline bool kk_std_text_parse__mlift_sign_10576(kk_char_t _c_x10488, kk_context_t* _ctx) { /* (char) -> bool */ 
  return (_c_x10488 == ('-'));
}

bool kk_std_text_parse__mlift_sign_10577(bool _y_x10484, kk_context_t* _ctx); /* (bool) -> parse bool */ 

bool kk_std_text_parse_sign(kk_context_t* _ctx); /* () -> parse bool */ 

kk_std_core_types__tuple2 kk_std_text_parse__lift_pint_10354(kk_std_core_sslice__sslice _uniq_slice_10326, kk_std_core_types__list _uniq_acc_10328, kk_context_t* _ctx); /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 

kk_integer_t kk_std_text_parse__mlift_pint_10578(bool neg, kk_std_core_types__list _c_x10496, kk_context_t* _ctx); /* (neg : bool, list<char>) -> int */ 

kk_integer_t kk_std_text_parse__mlift_pint_10579(bool neg, kk_std_core_types__maybe _y_x10494, kk_context_t* _ctx); /* (neg : bool, maybe<list<char>>) -> parse int */ 

kk_char_t kk_std_text_parse__mlift_pint_10580(kk_std_core_types__maybe _y_x10490, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_integer_t kk_std_text_parse__mlift_pint_10581(kk_char_t _c_x10493, kk_context_t* _ctx); /* (char) -> int */ 

kk_integer_t kk_std_text_parse__mlift_pint_10582(bool _y_x10489, kk_context_t* _ctx); /* (bool) -> parse int */ 

kk_integer_t kk_std_text_parse_pint(kk_context_t* _ctx); /* () -> parse int */ 

kk_std_core_types__tuple2 kk_std_text_parse__lift_hex_digits_10355(kk_std_core_sslice__sslice _uniq_slice_10337, kk_std_core_types__list _uniq_acc_10339, kk_context_t* _ctx); /* (sslice/sslice, list<char>) -> (list<char>, sslice/sslice) */ 

kk_string_t kk_std_text_parse__mlift_hex_digits_10583(kk_std_core_types__maybe _y_x10498, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse_hex_digits(kk_context_t* _ctx); /* () -> parse string */ 

void kk_std_text_parse__init(kk_context_t* _ctx);


void kk_std_text_parse__done(kk_context_t* _ctx);

#endif // header
