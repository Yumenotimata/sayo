#pragma once
#ifndef kk_value_H
#define kk_value_H
// Koka generated module: value, koka version: 3.1.2, platform: 64-bit
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

// type declarations

// type value/value
struct kk_value__value_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_value__value;
struct kk_value_Int {
  struct kk_value__value_s _base;
  kk_integer_t x;
};
struct kk_value_String {
  struct kk_value__value_s _base;
  kk_string_t x;
};
static inline kk_value__value kk_value__base_Int(struct kk_value_Int* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_value__value kk_value__new_Int(kk_reuse_t _at, int32_t _cpath, kk_integer_t x, kk_context_t* _ctx) {
  struct kk_value_Int* _con = kk_block_alloc_at_as(struct kk_value_Int, _at, 1 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->x = x;
  return kk_value__base_Int(_con, _ctx);
}
static inline struct kk_value_Int* kk_value__as_Int(kk_value__value x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_value_Int*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_value__value kk_value__base_String(struct kk_value_String* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_value__value kk_value__new_String(kk_reuse_t _at, int32_t _cpath, kk_string_t x, kk_context_t* _ctx) {
  struct kk_value_String* _con = kk_block_alloc_at_as(struct kk_value_String, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->x = x;
  return kk_value__base_String(_con, _ctx);
}
static inline struct kk_value_String* kk_value__as_String(kk_value__value x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_value_String*, x, (kk_tag_t)(2), _ctx);
}
static inline bool kk_value__is_Int(kk_value__value x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_value__is_String(kk_value__value x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline kk_value__value kk_value__value_dup(kk_value__value _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_value__value_drop(kk_value__value _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_value__value_box(kk_value__value _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_value__value kk_value__value_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Tests for the `Int` constructor of the `:value` type.

static inline bool kk_value_is_int(kk_value__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_value__is_Int(value, _ctx)) {
    struct kk_value_Int* _con_x2 = kk_value__as_Int(value, _ctx);
    return true;
  }
  {
    struct kk_value_String* _con_x3 = kk_value__as_String(value, _ctx);
    return false;
  }
}
 
// Automatically generated. Tests for the `String` constructor of the `:value` type.

static inline bool kk_value_is_string(kk_value__value value, kk_context_t* _ctx) { /* (value : value) -> bool */ 
  if (kk_value__is_String(value, _ctx)) {
    struct kk_value_String* _con_x4 = kk_value__as_String(value, _ctx);
    return true;
  }
  {
    struct kk_value_Int* _con_x5 = kk_value__as_Int(value, _ctx);
    return false;
  }
}

kk_string_t kk_value_show(kk_value__value v, kk_context_t* _ctx); /* (v : value) -> div string */ 

void kk_value__init(kk_context_t* _ctx);


void kk_value__done(kk_context_t* _ctx);

#endif // header
