// Koka generated module: std/num/int32, koka version: 3.1.2, platform: 64-bit
#include "std_num_int32.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2023, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static kk_std_core_types__tuple2 kk_umul32x_wide( int32_t x, int32_t y, kk_context_t* ctx ) {
  uint32_t hi;
  uint32_t lo = kk_umul32_wide((uint32_t)x, (uint32_t)y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int32_box((int32_t)lo,ctx), kk_int32_box((int32_t)hi,ctx), ctx );
}

static kk_std_core_types__tuple2 kk_imul32x_wide( int32_t x, int32_t y, kk_context_t* ctx ) {
  int32_t hi;
  uint32_t lo = kk_imul32_wide(x, y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int32_box((int32_t)lo,ctx), kk_int32_box(hi,ctx), ctx );
}

static kk_std_core_types__tuple2 kk_clmul32x_wide( int32_t x, int32_t y, kk_context_t* ctx ) {
  uint32_t hi;
  uint32_t lo = kk_clmul32_wide((uint32_t)x, (uint32_t)y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int32_box((int32_t)hi,ctx), kk_int32_box((int32_t)lo,ctx), ctx );
}
 
// The 32-bit integer with value 1.

int32_t kk_std_num_int32_one;
 
// The zero 32-bit integer.

int32_t kk_std_num_int32_zero;
 
// The maximal integer value before overflow happens

int32_t kk_std_num_int32_max_int32;
 
// The minimal integer value before underflow happens

int32_t kk_std_num_int32_min_int32;
 
// The number of bits in an `:int32` (always 32)

int32_t kk_std_num_int32_bits_int32;
 
// Show an `:int32` in hexadecimal notation
// The `width`  parameter specifies how wide the hex value is where `'0'`  is used to align.
// The `use-capitals` parameter (= `True`) determines if captical letters should be used to display the hexadecimal digits.
// The `pre` (=`"0x"`) is an optional prefix for the number (goes between the sign and the number).

kk_string_t kk_std_num_int32_show_hex(int32_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (i : int32, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  kk_integer_t _x_x203 = kk_integer_from_int(i,kk_context()); /*int*/
  kk_std_core_types__optional _x_x204;
  kk_box_t _x_x205;
  kk_integer_t _x_x206;
  if (kk_std_core_types__is_Optional(width, _ctx)) {
    kk_box_t _box_x4 = width._cons._Optional.value;
    kk_integer_t _uniq_width_448 = kk_integer_unbox(_box_x4, _ctx);
    kk_integer_dup(_uniq_width_448, _ctx);
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x206 = _uniq_width_448; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x206 = kk_integer_from_small(1); /*int*/
  }
  _x_x205 = kk_integer_box(_x_x206, _ctx); /*7*/
  _x_x204 = kk_std_core_types__new_Optional(_x_x205, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x207;
  kk_box_t _x_x208;
  bool _x_x209;
  if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
    kk_box_t _box_x6 = use_capitals._cons._Optional.value;
    bool _uniq_use_capitals_452 = kk_bool_unbox(_box_x6);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x209 = _uniq_use_capitals_452; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x209 = true; /*bool*/
  }
  _x_x208 = kk_bool_box(_x_x209); /*7*/
  _x_x207 = kk_std_core_types__new_Optional(_x_x208, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x210;
  kk_box_t _x_x211;
  kk_string_t _x_x212;
  if (kk_std_core_types__is_Optional(pre, _ctx)) {
    kk_box_t _box_x8 = pre._cons._Optional.value;
    kk_string_t _uniq_pre_456 = kk_string_unbox(_box_x8);
    kk_string_dup(_uniq_pre_456, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    _x_x212 = _uniq_pre_456; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(pre, _ctx);
    kk_define_string_literal(, _s_x213, 2, "0x", _ctx)
    _x_x212 = kk_string_dup(_s_x213, _ctx); /*string*/
  }
  _x_x211 = kk_string_box(_x_x212); /*7*/
  _x_x210 = kk_std_core_types__new_Optional(_x_x211, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x203, _x_x204, _x_x207, _x_x210, _ctx);
}
 
// Convert an `:int` to `:int32` but interpret the `int` as an unsigned 32-bit value.
// `i` is clamped between `0` and `0xFFFFFFFF`.
// `0x7FFF_FFFF.uint32 == 0x7FFF_FFFF.int32 == max-int32`
// `0x8000_0000.uint32 == -0x8000_0000.int32 == min-int32`
// `0xFFFF_FFFF.uint32 == -1.int32`

int32_t kk_std_num_int32_uint32(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> int32 */ 
  kk_integer_t _x_x214;
  bool _match_x194;
  kk_integer_t _brw_x195 = kk_integer_from_int(kk_std_num_int32_max_int32,kk_context()); /*int*/;
  bool _brw_x196 = kk_integer_gt_borrow(i,_brw_x195,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x195, _ctx);
  _match_x194 = _brw_x196; /*bool*/
  if (_match_x194) {
    _x_x214 = kk_integer_sub(i,(kk_integer_from_str("4294967296", _ctx)),kk_context()); /*int*/
  }
  else {
    _x_x214 = i; /*int*/
  }
  return kk_integer_clamp32(_x_x214,kk_context());
}
 
// Show an `:int32` in hexadecimal notation interpreted as an unsigned 32-bit value.
// The `width`  parameter specifies how wide the hex value is where `'0'`  is used to align.
// The `use-capitals` parameter (= `True`) determines if captical letters should be used to display the hexadecimal digits.
// The `pre` (=`"0x"`) is an optional prefix for the number.

kk_string_t kk_std_num_int32_show_hex32(int32_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (i : int32, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  kk_integer_t _x_x215 = kk_std_num_int32_uint(i, _ctx); /*int*/
  kk_std_core_types__optional _x_x216;
  kk_box_t _x_x217;
  kk_integer_t _x_x218;
  if (kk_std_core_types__is_Optional(width, _ctx)) {
    kk_box_t _box_x13 = width._cons._Optional.value;
    kk_integer_t _uniq_width_539 = kk_integer_unbox(_box_x13, _ctx);
    kk_integer_dup(_uniq_width_539, _ctx);
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x218 = _uniq_width_539; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x218 = kk_integer_from_small(8); /*int*/
  }
  _x_x217 = kk_integer_box(_x_x218, _ctx); /*7*/
  _x_x216 = kk_std_core_types__new_Optional(_x_x217, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x219;
  kk_box_t _x_x220;
  bool _x_x221;
  if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
    kk_box_t _box_x15 = use_capitals._cons._Optional.value;
    bool _uniq_use_capitals_543 = kk_bool_unbox(_box_x15);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x221 = _uniq_use_capitals_543; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x221 = true; /*bool*/
  }
  _x_x220 = kk_bool_box(_x_x221); /*7*/
  _x_x219 = kk_std_core_types__new_Optional(_x_x220, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x222;
  kk_box_t _x_x223;
  kk_string_t _x_x224;
  if (kk_std_core_types__is_Optional(pre, _ctx)) {
    kk_box_t _box_x17 = pre._cons._Optional.value;
    kk_string_t _uniq_pre_547 = kk_string_unbox(_box_x17);
    kk_string_dup(_uniq_pre_547, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    _x_x224 = _uniq_pre_547; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(pre, _ctx);
    kk_define_string_literal(, _s_x225, 2, "0x", _ctx)
    _x_x224 = kk_string_dup(_s_x225, _ctx); /*string*/
  }
  _x_x223 = kk_string_box(_x_x224); /*7*/
  _x_x222 = kk_std_core_types__new_Optional(_x_x223, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x215, _x_x216, _x_x219, _x_x222, _ctx);
}
 
// Return the absolute value of an integer.
// Raises an exception if the `:int32` is `min-int32`
// (since the negation of `min-int32` equals itself and is still negative)

int32_t kk_std_num_int32_abs(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> exn int32 */ 
  bool _x_x1_10183 = 0 > i; /*bool*/;
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<exn>*/;
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  if (_x_x1_10183) {
    bool _match_x186 = (i > kk_std_num_int32_min_int32); /*bool*/;
    if (_match_x186) {
      return (int32_t)((uint32_t)((KK_I32(0))) - (uint32_t)i);
    }
    {
      kk_std_core_hnd__ev ev_10190 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
      kk_box_t _x_x228;
      {
        struct kk_std_core_hnd_Ev* _con_x229 = kk_std_core_hnd__as_Ev(ev_10190, _ctx);
        kk_box_t _box_x22 = _con_x229->hnd;
        int32_t m = _con_x229->marker;
        kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x22, KK_BORROWED, _ctx);
        kk_std_core_exn__exn_dup(h, _ctx);
        kk_std_core_hnd__clause1 _match_x187;
        kk_std_core_hnd__clause1 _brw_x189 = kk_std_core_exn__select_throw_exn(h, _ctx); /*hnd/clause1<exception,403,exn,404,405>*/;
        kk_std_core_exn__exn_drop(h, _ctx);
        _match_x187 = _brw_x189; /*hnd/clause1<exception,403,exn,404,405>*/
        {
          kk_function_t _fun_unbox_x26 = _match_x187.clause;
          kk_box_t _x_x230;
          kk_std_core_exn__exception _x_x231;
          kk_string_t _x_x232;
          kk_define_string_literal(, _s_x233, 79, "std/num/int32/abs: cannot make min-int32 into a positive int32 without overflow", _ctx)
          _x_x232 = kk_string_dup(_s_x233, _ctx); /*string*/
          kk_std_core_exn__exception_info _x_x234;
          kk_std_core_types__optional _match_x188 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x188, _ctx)) {
            kk_box_t _box_x30 = _match_x188._cons._Optional.value;
            kk_std_core_exn__exception_info _uniq_info_473 = kk_std_core_exn__exception_info_unbox(_box_x30, KK_BORROWED, _ctx);
            kk_std_core_exn__exception_info_dup(_uniq_info_473, _ctx);
            kk_std_core_types__optional_drop(_match_x188, _ctx);
            _x_x234 = _uniq_info_473; /*exception-info*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x188, _ctx);
            _x_x234 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
          }
          _x_x231 = kk_std_core_exn__new_Exception(_x_x232, _x_x234, _ctx); /*exception*/
          _x_x230 = kk_std_core_exn__exception_box(_x_x231, _ctx); /*45*/
          _x_x228 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x26, (_fun_unbox_x26, m, ev_10190, _x_x230, _ctx), _ctx); /*46*/
        }
      }
      return kk_int32_unbox(_x_x228, KK_OWNED, _ctx);
    }
  }
  {
    return i;
  }
}
 
// Return the absolute value of an integer.
// Returns 0 if the `:int32` is `min-int32`
// (since the negation of `min-int32` equals itself and is still negative)

int32_t kk_std_num_int32_abs0(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int32 */ 
  bool b_10011 = 0 > i; /*bool*/;
  if (b_10011) {
    bool _match_x185 = (i > kk_std_num_int32_min_int32); /*bool*/;
    if (_match_x185) {
      return (int32_t)((uint32_t)((KK_I32(0))) - (uint32_t)i);
    }
    {
      return (KK_I32(0));
    }
  }
  {
    return i;
  }
}
 
// Wide carry-less multiplication (or _xor_ multiplication) to `(hi,lo)`.
// where `(hi,lo).int == hi.int * 0x1_0000_0000 + lo.uint`
// See also <https://en.wikipedia.org/wiki/Carry-less_product>

kk_std_core_types__tuple2 kk_std_num_int32_clmul__wide(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> (int32, int32) */ 
  return kk_clmul32x_wide(x,y,kk_context());
}
 
// Full 32x32 bit unsigned multiply to `(hi,lo)`.
// where `umul(x,y).uint == x.uint * y.uint`

kk_std_core_types__tuple2 kk_std_num_int32_umul(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> (int32, int32) */ 
  return kk_umul32x_wide(i,j,kk_context());
}
 
// Full 32x32 bit signed multiply to `(hi,lo)`.
// where `imul(x,y).int == x.int * y.int`

kk_std_core_types__tuple2 kk_std_num_int32_imul(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> (int32, int32) */ 
  return kk_imul32x_wide(i,j,kk_context());
}
 
// Truncated division (as in C). See also `(/):(x : int32, y : int32) -> int32`.

int32_t kk_std_num_int32_cdiv(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> exn int32 */ 
  bool _match_x174 = 0 == j; /*bool*/;
  if (_match_x174) {
    kk_std_core_hnd__ev ev_10193 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x235;
    {
      struct kk_std_core_hnd_Ev* _con_x236 = kk_std_core_hnd__as_Ev(ev_10193, _ctx);
      kk_box_t _box_x31 = _con_x236->hnd;
      int32_t m = _con_x236->marker;
      kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x31, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x180;
      kk_std_core_hnd__clause1 _brw_x182 = kk_std_core_exn__select_throw_exn(h, _ctx); /*hnd/clause1<exception,403,exn,404,405>*/;
      kk_std_core_exn__exn_drop(h, _ctx);
      _match_x180 = _brw_x182; /*hnd/clause1<exception,403,exn,404,405>*/
      {
        kk_function_t _fun_unbox_x35 = _match_x180.clause;
        kk_box_t _x_x237;
        kk_std_core_exn__exception _x_x238;
        kk_string_t _x_x239;
        kk_define_string_literal(, _s_x240, 35, "std/num/int32/cdiv: modulus by zero", _ctx)
        _x_x239 = kk_string_dup(_s_x240, _ctx); /*string*/
        kk_std_core_exn__exception_info _x_x241;
        kk_std_core_types__optional _match_x181 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x181, _ctx)) {
          kk_box_t _box_x39 = _match_x181._cons._Optional.value;
          kk_std_core_exn__exception_info _uniq_info_473 = kk_std_core_exn__exception_info_unbox(_box_x39, KK_BORROWED, _ctx);
          kk_std_core_exn__exception_info_dup(_uniq_info_473, _ctx);
          kk_std_core_types__optional_drop(_match_x181, _ctx);
          _x_x241 = _uniq_info_473; /*exception-info*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x181, _ctx);
          _x_x241 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
        }
        _x_x238 = kk_std_core_exn__new_Exception(_x_x239, _x_x241, _ctx); /*exception*/
        _x_x237 = kk_std_core_exn__exception_box(_x_x238, _ctx); /*45*/
        _x_x235 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x35, (_fun_unbox_x35, m, ev_10193, _x_x237, _ctx), _ctx); /*46*/
      }
    }
    return kk_int32_unbox(_x_x235, KK_OWNED, _ctx);
  }
  {
    bool _match_x175 = (j == ((KK_I32(-1)))); /*bool*/;
    if (_match_x175) {
      bool _match_x176 = (i == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x176) {
        kk_std_core_hnd__ev ev_0_10196 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
        kk_box_t _x_x242;
        {
          struct kk_std_core_hnd_Ev* _con_x243 = kk_std_core_hnd__as_Ev(ev_0_10196, _ctx);
          kk_box_t _box_x40 = _con_x243->hnd;
          int32_t m_0 = _con_x243->marker;
          kk_std_core_exn__exn h_0 = kk_std_core_exn__exn_unbox(_box_x40, KK_BORROWED, _ctx);
          kk_std_core_exn__exn_dup(h_0, _ctx);
          kk_std_core_hnd__clause1 _match_x177;
          kk_std_core_hnd__clause1 _brw_x179 = kk_std_core_exn__select_throw_exn(h_0, _ctx); /*hnd/clause1<exception,403,exn,404,405>*/;
          kk_std_core_exn__exn_drop(h_0, _ctx);
          _match_x177 = _brw_x179; /*hnd/clause1<exception,403,exn,404,405>*/
          {
            kk_function_t _fun_unbox_x44 = _match_x177.clause;
            kk_box_t _x_x244;
            kk_std_core_exn__exception _x_x245;
            kk_string_t _x_x246;
            kk_define_string_literal(, _s_x247, 65, "std/num/int32/cdiv: modulus overflow in cdiv(min-int32, -1.int32)", _ctx)
            _x_x246 = kk_string_dup(_s_x247, _ctx); /*string*/
            kk_std_core_exn__exception_info _x_x248;
            kk_std_core_types__optional _match_x178 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
            if (kk_std_core_types__is_Optional(_match_x178, _ctx)) {
              kk_box_t _box_x48 = _match_x178._cons._Optional.value;
              kk_std_core_exn__exception_info _uniq_info_473_0 = kk_std_core_exn__exception_info_unbox(_box_x48, KK_BORROWED, _ctx);
              kk_std_core_exn__exception_info_dup(_uniq_info_473_0, _ctx);
              kk_std_core_types__optional_drop(_match_x178, _ctx);
              _x_x248 = _uniq_info_473_0; /*exception-info*/
            }
            else {
              kk_std_core_types__optional_drop(_match_x178, _ctx);
              _x_x248 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
            }
            _x_x245 = kk_std_core_exn__new_Exception(_x_x246, _x_x248, _ctx); /*exception*/
            _x_x244 = kk_std_core_exn__exception_box(_x_x245, _ctx); /*45*/
            _x_x242 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x44, (_fun_unbox_x44, m_0, ev_0_10196, _x_x244, _ctx), _ctx); /*46*/
          }
        }
        return kk_int32_unbox(_x_x242, KK_OWNED, _ctx);
      }
      {
        return (i / j);
      }
    }
    {
      return (i / j);
    }
  }
}
 
// Truncated modulus (as in C). See also `(%):(x : int32, y : int32) -> int32`.

int32_t kk_std_num_int32_cmod(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> exn int32 */ 
  bool _match_x165 = 0 == j; /*bool*/;
  if (_match_x165) {
    kk_std_core_hnd__ev ev_10199 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x249;
    {
      struct kk_std_core_hnd_Ev* _con_x250 = kk_std_core_hnd__as_Ev(ev_10199, _ctx);
      kk_box_t _box_x49 = _con_x250->hnd;
      int32_t m = _con_x250->marker;
      kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x49, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x171;
      kk_std_core_hnd__clause1 _brw_x173 = kk_std_core_exn__select_throw_exn(h, _ctx); /*hnd/clause1<exception,403,exn,404,405>*/;
      kk_std_core_exn__exn_drop(h, _ctx);
      _match_x171 = _brw_x173; /*hnd/clause1<exception,403,exn,404,405>*/
      {
        kk_function_t _fun_unbox_x53 = _match_x171.clause;
        kk_box_t _x_x251;
        kk_std_core_exn__exception _x_x252;
        kk_string_t _x_x253;
        kk_define_string_literal(, _s_x254, 35, "std/num/int32/cmod: modulus by zero", _ctx)
        _x_x253 = kk_string_dup(_s_x254, _ctx); /*string*/
        kk_std_core_exn__exception_info _x_x255;
        kk_std_core_types__optional _match_x172 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x172, _ctx)) {
          kk_box_t _box_x57 = _match_x172._cons._Optional.value;
          kk_std_core_exn__exception_info _uniq_info_473 = kk_std_core_exn__exception_info_unbox(_box_x57, KK_BORROWED, _ctx);
          kk_std_core_exn__exception_info_dup(_uniq_info_473, _ctx);
          kk_std_core_types__optional_drop(_match_x172, _ctx);
          _x_x255 = _uniq_info_473; /*exception-info*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x172, _ctx);
          _x_x255 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
        }
        _x_x252 = kk_std_core_exn__new_Exception(_x_x253, _x_x255, _ctx); /*exception*/
        _x_x251 = kk_std_core_exn__exception_box(_x_x252, _ctx); /*45*/
        _x_x249 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x53, (_fun_unbox_x53, m, ev_10199, _x_x251, _ctx), _ctx); /*46*/
      }
    }
    return kk_int32_unbox(_x_x249, KK_OWNED, _ctx);
  }
  {
    bool _match_x166 = (j == ((KK_I32(-1)))); /*bool*/;
    if (_match_x166) {
      bool _match_x167 = (i == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x167) {
        kk_std_core_hnd__ev ev_0_10202 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
        kk_box_t _x_x256;
        {
          struct kk_std_core_hnd_Ev* _con_x257 = kk_std_core_hnd__as_Ev(ev_0_10202, _ctx);
          kk_box_t _box_x58 = _con_x257->hnd;
          int32_t m_0 = _con_x257->marker;
          kk_std_core_exn__exn h_0 = kk_std_core_exn__exn_unbox(_box_x58, KK_BORROWED, _ctx);
          kk_std_core_exn__exn_dup(h_0, _ctx);
          kk_std_core_hnd__clause1 _match_x168;
          kk_std_core_hnd__clause1 _brw_x170 = kk_std_core_exn__select_throw_exn(h_0, _ctx); /*hnd/clause1<exception,403,exn,404,405>*/;
          kk_std_core_exn__exn_drop(h_0, _ctx);
          _match_x168 = _brw_x170; /*hnd/clause1<exception,403,exn,404,405>*/
          {
            kk_function_t _fun_unbox_x62 = _match_x168.clause;
            kk_box_t _x_x258;
            kk_std_core_exn__exception _x_x259;
            kk_string_t _x_x260;
            kk_define_string_literal(, _s_x261, 65, "std/num/int32/cmod: modulus overflow in cmod(min-int32, -1.int32)", _ctx)
            _x_x260 = kk_string_dup(_s_x261, _ctx); /*string*/
            kk_std_core_exn__exception_info _x_x262;
            kk_std_core_types__optional _match_x169 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
            if (kk_std_core_types__is_Optional(_match_x169, _ctx)) {
              kk_box_t _box_x66 = _match_x169._cons._Optional.value;
              kk_std_core_exn__exception_info _uniq_info_473_0 = kk_std_core_exn__exception_info_unbox(_box_x66, KK_BORROWED, _ctx);
              kk_std_core_exn__exception_info_dup(_uniq_info_473_0, _ctx);
              kk_std_core_types__optional_drop(_match_x169, _ctx);
              _x_x262 = _uniq_info_473_0; /*exception-info*/
            }
            else {
              kk_std_core_types__optional_drop(_match_x169, _ctx);
              _x_x262 = kk_std_core_exn__new_ExnError(_ctx); /*exception-info*/
            }
            _x_x259 = kk_std_core_exn__new_Exception(_x_x260, _x_x262, _ctx); /*exception*/
            _x_x258 = kk_std_core_exn__exception_box(_x_x259, _ctx); /*45*/
            _x_x256 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x62, (_fun_unbox_x62, m_0, ev_0_10202, _x_x258, _ctx), _ctx); /*46*/
          }
        }
        return kk_int32_unbox(_x_x256, KK_OWNED, _ctx);
      }
      {
        return (i % j);
      }
    }
    {
      return (i % j);
    }
  }
}
 
/*
Euclidean-0 division.
Euclidean division is defined as: For any `D`  and `d`  where `d!=0` , we have:
1. `D == d*(D/d) + (D%d)`
2. `D%d`  is always positive where `0 <= D%d < abs(d)`
Moreover, Euclidean-0 is a total function, for the case where `d==0`  we have
that `D%0 == D`  and `D/0 == 0` . So property (1) still holds, but not property (2).
Useful laws that hold for Euclidean-0 division:
* `D/(-d) == -(D/d)`
* `D%(-d) == D%d`
* `D/(2^n) == sar(D,n)         `  (with `0 <= n <= 31`)
* `D%(2^n) == D & ((2^n) - 1)  `  (with `0 <= n <= 31`)
Note that an interesting edge case is `min-int32 / -1` which equals `min-int32` since in modulo 32-bit
arithmetic `min-int32 == -1 * min-int32 == -1 * (min-int32 / -1) + (min-int32 % -1)` satisfying property (1).
Of course `(min-int32 + 1) / -1` is again positive (namely `max-int32`).
See also _Division and modulus for computer scientists, Daan Leijen, 2001_
[pdf](https://www.microsoft.com/en-us/research/wp-content/uploads/2016/02/divmodnote-letter.pdf) .
*/

int32_t kk_std_num_int32__lp__fs__rp_(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> int32 */ 
  bool _match_x158 = (y == ((KK_I32(0)))); /*bool*/;
  if (_match_x158) {
    return (KK_I32(0));
  }
  {
    bool _match_x159 = (y == ((KK_I32(-1)))); /*bool*/;
    if (_match_x159) {
      bool _match_x162 = (x == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x162) {
        return x;
      }
      {
        int32_t q = (x / y); /*int32*/;
        int32_t r = (x % y); /*int32*/;
        bool _match_x163 = (r >= ((KK_I32(0)))); /*bool*/;
        if (_match_x163) {
          return q;
        }
        {
          bool _match_x164 = (y > ((KK_I32(0)))); /*bool*/;
          if (_match_x164) {
            return (int32_t)((uint32_t)q - (uint32_t)((KK_I32(1))));
          }
          {
            return (int32_t)((uint32_t)q + (uint32_t)((KK_I32(1))));
          }
        }
      }
    }
    {
      int32_t q_0 = (x / y); /*int32*/;
      int32_t r_0 = (x % y); /*int32*/;
      bool _match_x160 = (r_0 >= ((KK_I32(0)))); /*bool*/;
      if (_match_x160) {
        return q_0;
      }
      {
        bool _match_x161 = (y > ((KK_I32(0)))); /*bool*/;
        if (_match_x161) {
          return (int32_t)((uint32_t)q_0 - (uint32_t)((KK_I32(1))));
        }
        {
          return (int32_t)((uint32_t)q_0 + (uint32_t)((KK_I32(1))));
        }
      }
    }
  }
}
 
// Euclidean-0 modulus. See `(/):(x : int32, y : int32) -> int32` division for more information.

int32_t kk_std_num_int32__lp__perc__rp_(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> int32 */ 
  bool _match_x151 = (y == ((KK_I32(0)))); /*bool*/;
  if (_match_x151) {
    return x;
  }
  {
    bool _match_x152 = (y == ((KK_I32(-1)))); /*bool*/;
    if (_match_x152) {
      bool _match_x155 = (x == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x155) {
        return (KK_I32(0));
      }
      {
        int32_t r = (x % y); /*int32*/;
        bool _match_x156 = (r >= ((KK_I32(0)))); /*bool*/;
        if (_match_x156) {
          return r;
        }
        {
          bool _match_x157 = (y > ((KK_I32(0)))); /*bool*/;
          if (_match_x157) {
            return (int32_t)((uint32_t)r + (uint32_t)y);
          }
          {
            return (int32_t)((uint32_t)r - (uint32_t)y);
          }
        }
      }
    }
    {
      int32_t r_0 = (x % y); /*int32*/;
      bool _match_x153 = (r_0 >= ((KK_I32(0)))); /*bool*/;
      if (_match_x153) {
        return r_0;
      }
      {
        bool _match_x154 = (y > ((KK_I32(0)))); /*bool*/;
        if (_match_x154) {
          return (int32_t)((uint32_t)r_0 + (uint32_t)y);
        }
        {
          return (int32_t)((uint32_t)r_0 - (uint32_t)y);
        }
      }
    }
  }
}

kk_std_core_types__tuple2 kk_std_num_int32_divmod(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> (int32, int32) */ 
  bool _match_x146 = 0 == y; /*bool*/;
  if (_match_x146) {
    return kk_std_core_types__new_Tuple2(kk_int32_box(kk_std_num_int32_zero, _ctx), kk_int32_box(x, _ctx), _ctx);
  }
  {
    bool _match_x147 = (y == ((KK_I32(-1)))); /*bool*/;
    if (_match_x147) {
      bool _match_x149 = (x == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x149) {
        int32_t _b_x70_86 = (KK_I32(0)); /*int32*/;
        return kk_std_core_types__new_Tuple2(kk_int32_box(x, _ctx), kk_int32_box(_b_x70_86, _ctx), _ctx);
      }
      {
        int32_t q = (x / y); /*int32*/;
        int32_t r = (x % y); /*int32*/;
        bool b_10021 = 0 > r; /*bool*/;
        if (b_10021) {
          bool _match_x150 = 0 < y; /*bool*/;
          if (_match_x150) {
            int32_t _b_x71_87 = (int32_t)((uint32_t)q - (uint32_t)((KK_I32(1)))); /*int32*/;
            int32_t _b_x72_88 = (int32_t)((uint32_t)r + (uint32_t)y); /*int32*/;
            return kk_std_core_types__new_Tuple2(kk_int32_box(_b_x71_87, _ctx), kk_int32_box(_b_x72_88, _ctx), _ctx);
          }
          {
            int32_t _b_x73_89 = (int32_t)((uint32_t)q + (uint32_t)((KK_I32(1)))); /*int32*/;
            int32_t _b_x74_90 = (int32_t)((uint32_t)r - (uint32_t)y); /*int32*/;
            return kk_std_core_types__new_Tuple2(kk_int32_box(_b_x73_89, _ctx), kk_int32_box(_b_x74_90, _ctx), _ctx);
          }
        }
        {
          return kk_std_core_types__new_Tuple2(kk_int32_box(q, _ctx), kk_int32_box(r, _ctx), _ctx);
        }
      }
    }
    {
      int32_t q_0 = (x / y); /*int32*/;
      int32_t r_0 = (x % y); /*int32*/;
      bool b_0_10024 = 0 > r_0; /*bool*/;
      if (b_0_10024) {
        bool _match_x148 = 0 < y; /*bool*/;
        if (_match_x148) {
          int32_t _b_x77_93 = (int32_t)((uint32_t)q_0 - (uint32_t)((KK_I32(1)))); /*int32*/;
          int32_t _b_x78_94 = (int32_t)((uint32_t)r_0 + (uint32_t)y); /*int32*/;
          return kk_std_core_types__new_Tuple2(kk_int32_box(_b_x77_93, _ctx), kk_int32_box(_b_x78_94, _ctx), _ctx);
        }
        {
          int32_t _b_x79_95 = (int32_t)((uint32_t)q_0 + (uint32_t)((KK_I32(1)))); /*int32*/;
          int32_t _b_x80_96 = (int32_t)((uint32_t)r_0 - (uint32_t)y); /*int32*/;
          return kk_std_core_types__new_Tuple2(kk_int32_box(_b_x79_95, _ctx), kk_int32_box(_b_x80_96, _ctx), _ctx);
        }
      }
      {
        return kk_std_core_types__new_Tuple2(kk_int32_box(q_0, _ctx), kk_int32_box(r_0, _ctx), _ctx);
      }
    }
  }
}
 
// monadic lift

kk_box_t kk_std_num_int32_range_fs__mlift_fold_int32_10184(int32_t end, kk_function_t f, int32_t start, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (end : int32, f : (int32, a) -> e a, start : int32, x : a) -> e a */ 
  int32_t _own_x144 = (int32_t)((uint32_t)start + (uint32_t)((KK_I32(1)))); /*int32*/;
  kk_box_t _brw_x145 = kk_std_num_int32_range_fs_fold_int32(_own_x144, end, x, f, _ctx); /*116*/;
  kk_function_drop(f, _ctx);
  return _brw_x145;
}
 
// Fold over the range `[start,end]` (including `end`).


// lift anonymous function
struct kk_std_num_int32_range_fs_fold_int32_fun265__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  int32_t end_0;
  int32_t start_0;
};
static kk_box_t kk_std_num_int32_range_fs_fold_int32_fun265(kk_function_t _fself, kk_box_t x_1, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_range_fs_new_fold_int32_fun265(kk_function_t f_0, int32_t end_0, int32_t start_0, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs_fold_int32_fun265__t* _self = kk_function_alloc_as(struct kk_std_num_int32_range_fs_fold_int32_fun265__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int32_range_fs_fold_int32_fun265, kk_context());
  _self->f_0 = f_0;
  _self->end_0 = end_0;
  _self->start_0 = start_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int32_range_fs_fold_int32_fun265(kk_function_t _fself, kk_box_t x_1, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs_fold_int32_fun265__t* _self = kk_function_as(struct kk_std_num_int32_range_fs_fold_int32_fun265__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (int32, 1938) -> 1939 1938 */
  int32_t end_0 = _self->end_0; /* int32 */
  int32_t start_0 = _self->start_0; /* int32 */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(start_0, _ctx);}, {}, _ctx)
  return kk_std_num_int32_range_fs__mlift_fold_int32_10184(end_0, f_0, start_0, x_1, _ctx);
}

kk_box_t kk_std_num_int32_range_fs_fold_int32(int32_t start_0, int32_t end_0, kk_box_t init, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,e> (start : int32, end : int32, init : a, f : (int32, a) -> e a) -> e a */ 
  kk__tailcall: ;
  bool _match_x141 = (start_0 > end_0); /*bool*/;
  if (_match_x141) {
    return init;
  }
  {
    kk_box_t x_0_10205;
    kk_function_t _x_x263 = kk_function_dup(f_0, _ctx); /*(int32, 1938) -> 1939 1938*/
    x_0_10205 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_box_t, kk_context_t*), _x_x263, (_x_x263, start_0, init, _ctx), _ctx); /*1938*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10205, _ctx);
      kk_function_t _x_x264;
      kk_function_dup(f_0, _ctx);
      _x_x264 = kk_std_num_int32_range_fs_new_fold_int32_fun265(f_0, end_0, start_0, _ctx); /*(x@1 : 1938) -> 1939 1938*/
      return kk_std_core_hnd_yield_extend(_x_x264, _ctx);
    }
    {
      int32_t _own_x143 = (int32_t)((uint32_t)start_0 + (uint32_t)((KK_I32(1)))); /*int32*/;
      { // tailcall
        start_0 = _own_x143;
        init = x_0_10205;
        goto kk__tailcall;
      }
    }
  }
}
 
// monadic lift

kk_box_t kk_std_num_int32_range_fs__mlift_fold_while_int32_10185(int32_t end, kk_function_t f, kk_box_t init, int32_t start, kk_std_core_types__maybe _y_x10157, kk_context_t* _ctx) { /* forall<a,e> (end : int32, f : (int32, a) -> e maybe<a>, init : a, start : int32, maybe<a>) -> e a */ 
  if (kk_std_core_types__is_Just(_y_x10157, _ctx)) {
    kk_box_t x = _y_x10157._cons.Just.value;
    kk_box_drop(init, _ctx);
    int32_t _x_x266 = (int32_t)((uint32_t)start + (uint32_t)((KK_I32(1)))); /*int32*/
    return kk_std_num_int32_range_fs_fold_while_int32(_x_x266, end, x, f, _ctx);
  }
  {
    kk_function_drop(f, _ctx);
    return init;
  }
}
 
// Iterate over the range `[start,end]` (including `end`).


// lift anonymous function
struct kk_std_num_int32_range_fs_fold_while_int32_fun269__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_box_t init_0;
  int32_t end_0;
  int32_t start_0;
};
static kk_box_t kk_std_num_int32_range_fs_fold_while_int32_fun269(kk_function_t _fself, kk_box_t _b_x100, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_range_fs_new_fold_while_int32_fun269(kk_function_t f_0, kk_box_t init_0, int32_t end_0, int32_t start_0, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs_fold_while_int32_fun269__t* _self = kk_function_alloc_as(struct kk_std_num_int32_range_fs_fold_while_int32_fun269__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int32_range_fs_fold_while_int32_fun269, kk_context());
  _self->f_0 = f_0;
  _self->init_0 = init_0;
  _self->end_0 = end_0;
  _self->start_0 = start_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int32_range_fs_fold_while_int32_fun269(kk_function_t _fself, kk_box_t _b_x100, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs_fold_while_int32_fun269__t* _self = kk_function_as(struct kk_std_num_int32_range_fs_fold_while_int32_fun269__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (int32, 2035) -> 2036 maybe<2035> */
  kk_box_t init_0 = _self->init_0; /* 2035 */
  int32_t end_0 = _self->end_0; /* int32 */
  int32_t start_0 = _self->start_0; /* int32 */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_box_dup(init_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(start_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x270 = kk_std_core_types__maybe_unbox(_b_x100, KK_OWNED, _ctx); /*maybe<2035>*/
  return kk_std_num_int32_range_fs__mlift_fold_while_int32_10185(end_0, f_0, init_0, start_0, _x_x270, _ctx);
}

kk_box_t kk_std_num_int32_range_fs_fold_while_int32(int32_t start_0, int32_t end_0, kk_box_t init_0, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,e> (start : int32, end : int32, init : a, f : (int32, a) -> e maybe<a>) -> e a */ 
  kk__tailcall: ;
  bool _match_x138 = (start_0 > end_0); /*bool*/;
  if (_match_x138) {
    kk_function_drop(f_0, _ctx);
    return init_0;
  }
  {
    kk_std_core_types__maybe x_0_10208;
    kk_function_t _x_x268 = kk_function_dup(f_0, _ctx); /*(int32, 2035) -> 2036 maybe<2035>*/
    kk_box_t _x_x267 = kk_box_dup(init_0, _ctx); /*2035*/
    x_0_10208 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, int32_t, kk_box_t, kk_context_t*), _x_x268, (_x_x268, start_0, _x_x267, _ctx), _ctx); /*maybe<2035>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10208, _ctx);
      return kk_std_core_hnd_yield_extend(kk_std_num_int32_range_fs_new_fold_while_int32_fun269(f_0, init_0, end_0, start_0, _ctx), _ctx);
    }
    if (kk_std_core_types__is_Just(x_0_10208, _ctx)) {
      kk_box_t x_1 = x_0_10208._cons.Just.value;
      kk_box_drop(init_0, _ctx);
      { // tailcall
        int32_t _x_x271 = (int32_t)((uint32_t)start_0 + (uint32_t)((KK_I32(1)))); /*int32*/
        start_0 = _x_x271;
        init_0 = x_1;
        goto kk__tailcall;
      }
    }
    {
      kk_function_drop(f_0, _ctx);
      return init_0;
    }
  }
}
 
// monadic lift

kk_unit_t kk_std_num_int32_range_fs__mlift_lift_for32_2291_10186(kk_function_t action, int32_t end, int32_t i, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<e> (action : (int32) -> e (), end : int32, i : int32, wild_ : ()) -> e () */ 
  int32_t i_0_10027 = (int32_t)((uint32_t)i + (uint32_t)((KK_I32(1)))); /*int32*/;
  kk_std_num_int32_range_fs__lift_for32_2291(action, end, i_0_10027, _ctx); return kk_Unit;
}
 
// lifted local: range/for32, rep


// lift anonymous function
struct kk_std_num_int32_range_fs__lift_for32_2291_fun275__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  int32_t end_0;
  int32_t i_0;
};
static kk_box_t kk_std_num_int32_range_fs__lift_for32_2291_fun275(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_range_fs__new_lift_for32_2291_fun275(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs__lift_for32_2291_fun275__t* _self = kk_function_alloc_as(struct kk_std_num_int32_range_fs__lift_for32_2291_fun275__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int32_range_fs__lift_for32_2291_fun275, kk_context());
  _self->action_0 = action_0;
  _self->end_0 = end_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int32_range_fs__lift_for32_2291_fun275(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs__lift_for32_2291_fun275__t* _self = kk_function_as(struct kk_std_num_int32_range_fs__lift_for32_2291_fun275__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (int32) -> 2092 () */
  int32_t end_0 = _self->end_0; /* int32 */
  int32_t i_0 = _self->i_0; /* int32 */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(i_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_106 = kk_Unit;
  kk_unit_unbox(_b_x104);
  kk_unit_t _x_x276 = kk_Unit;
  kk_std_num_int32_range_fs__mlift_lift_for32_2291_10186(action_0, end_0, i_0, wild___0_106, _ctx);
  return kk_unit_box(_x_x276);
}

kk_unit_t kk_std_num_int32_range_fs__lift_for32_2291(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx) { /* forall<e> (action : (int32) -> e (), end : int32, i : int32) -> e () */ 
  kk__tailcall: ;
  bool _match_x136 = (i_0 <= end_0); /*bool*/;
  if (_match_x136) {
    kk_unit_t x_10211 = kk_Unit;
    kk_function_t _x_x273 = kk_function_dup(action_0, _ctx); /*(int32) -> 2092 ()*/
    kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_context_t*), _x_x273, (_x_x273, i_0, _ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x274 = kk_std_core_hnd_yield_extend(kk_std_num_int32_range_fs__new_lift_for32_2291_fun275(action_0, end_0, i_0, _ctx), _ctx); /*2978*/
      kk_unit_unbox(_x_x274); return kk_Unit;
    }
    {
      int32_t i_0_10027_0 = (int32_t)((uint32_t)i_0 + (uint32_t)((KK_I32(1)))); /*int32*/;
      { // tailcall
        i_0 = i_0_10027_0;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift

kk_std_core_types__maybe kk_std_num_int32_range_fs__mlift_lift_for_while32_2292_10187(kk_function_t action, int32_t end, int32_t i, kk_std_core_types__maybe _y_x10167, kk_context_t* _ctx) { /* forall<a,e> (action : (int32) -> e maybe<a>, end : int32, i : int32, maybe<a>) -> e maybe<a> */ 
  if (kk_std_core_types__is_Nothing(_y_x10167, _ctx)) {
    int32_t i_0_10031 = (int32_t)((uint32_t)i + (uint32_t)((KK_I32(1)))); /*int32*/;
    return kk_std_num_int32_range_fs__lift_for_while32_2292(action, end, i_0_10031, _ctx);
  }
  {
    kk_box_t x = _y_x10167._cons.Just.value;
    kk_function_drop(action, _ctx);
    return kk_std_core_types__new_Just(x, _ctx);
  }
}
 
// lifted local: range/for-while32, rep


// lift anonymous function
struct kk_std_num_int32_range_fs__lift_for_while32_2292_fun279__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  int32_t end_0;
  int32_t i_0;
};
static kk_box_t kk_std_num_int32_range_fs__lift_for_while32_2292_fun279(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_range_fs__new_lift_for_while32_2292_fun279(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs__lift_for_while32_2292_fun279__t* _self = kk_function_alloc_as(struct kk_std_num_int32_range_fs__lift_for_while32_2292_fun279__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int32_range_fs__lift_for_while32_2292_fun279, kk_context());
  _self->action_0 = action_0;
  _self->end_0 = end_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int32_range_fs__lift_for_while32_2292_fun279(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs__lift_for_while32_2292_fun279__t* _self = kk_function_as(struct kk_std_num_int32_range_fs__lift_for_while32_2292_fun279__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (int32) -> 2174 maybe<2173> */
  int32_t end_0 = _self->end_0; /* int32 */
  int32_t i_0 = _self->i_0; /* int32 */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10167_0_110 = kk_std_core_types__maybe_unbox(_b_x108, KK_OWNED, _ctx); /*maybe<2173>*/;
  kk_std_core_types__maybe _x_x280 = kk_std_num_int32_range_fs__mlift_lift_for_while32_2292_10187(action_0, end_0, i_0, _y_x10167_0_110, _ctx); /*maybe<2173>*/
  return kk_std_core_types__maybe_box(_x_x280, _ctx);
}

kk_std_core_types__maybe kk_std_num_int32_range_fs__lift_for_while32_2292(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx) { /* forall<a,e> (action : (int32) -> e maybe<a>, end : int32, i : int32) -> e maybe<a> */ 
  kk__tailcall: ;
  bool _match_x134 = (i_0 <= end_0); /*bool*/;
  if (_match_x134) {
    kk_std_core_types__maybe x_0_10214;
    kk_function_t _x_x277 = kk_function_dup(action_0, _ctx); /*(int32) -> 2174 maybe<2173>*/
    x_0_10214 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, int32_t, kk_context_t*), _x_x277, (_x_x277, i_0, _ctx), _ctx); /*maybe<2173>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10214, _ctx);
      kk_box_t _x_x278 = kk_std_core_hnd_yield_extend(kk_std_num_int32_range_fs__new_lift_for_while32_2292_fun279(action_0, end_0, i_0, _ctx), _ctx); /*2978*/
      return kk_std_core_types__maybe_unbox(_x_x278, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Nothing(x_0_10214, _ctx)) {
      int32_t i_0_10031_0 = (int32_t)((uint32_t)i_0 + (uint32_t)((KK_I32(1)))); /*int32*/;
      { // tailcall
        i_0 = i_0_10031_0;
        goto kk__tailcall;
      }
    }
    {
      kk_box_t x_1 = x_0_10214._cons.Just.value;
      kk_function_drop(action_0, _ctx);
      return kk_std_core_types__new_Just(x_1, _ctx);
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Create a list with 32-bit integer elements from `lo` to `hi` (including `hi`).

kk_std_core_types__list kk_std_num_int32__trmc_list32(int32_t lo_0, int32_t hi_0, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (lo : int32, hi : int32, ctx<list<int32>>) -> list<int32> */ 
  kk__tailcall: ;
  bool _match_x133 = (lo_0 <= hi_0); /*bool*/;
  if (_match_x133) {
    kk_std_core_types__list _trmc_x10138 = kk_datatype_null(); /*list<int32>*/;
    kk_std_core_types__list _trmc_x10139 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_int32_box(lo_0, _ctx), _trmc_x10138, _ctx); /*list<int32>*/;
    kk_field_addr_t _b_x120_125 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10139, _ctx)->tail, _ctx); /*@field-addr<list<int32>>*/;
    { // tailcall
      int32_t _x_x281 = (int32_t)((uint32_t)lo_0 + (uint32_t)((KK_I32(1)))); /*int32*/
      kk_std_core_types__cctx _x_x282 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10139, _ctx)),_b_x120_125,kk_context()); /*ctx<0>*/
      lo_0 = _x_x281;
      _acc = _x_x282;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x283 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x283, KK_OWNED, _ctx);
  }
}
 
// Create a list with 32-bit integer elements from `lo` to `hi` (including `hi`).

kk_std_core_types__list kk_std_num_int32_list32(int32_t lo_0_0, int32_t hi_0_0, kk_context_t* _ctx) { /* (lo : int32, hi : int32) -> list<int32> */ 
  kk_std_core_types__cctx _x_x284 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_num_int32__trmc_list32(lo_0_0, hi_0_0, _x_x284, _ctx);
}

int32_t kk_std_num_int32__unroll_sumacc32_10000(kk_std_core_types__list xs, int32_t acc, kk_context_t* _ctx) { /* (xs : list<int32>, acc : int32) -> int32 */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x285 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x131 = _con_x285->head;
    kk_std_core_types__list xx = _con_x285->tail;
    int32_t x = kk_int32_unbox(_box_x131, KK_BORROWED, _ctx);
    int32_t _own_x132 = (int32_t)((uint32_t)acc + (uint32_t)x); /*int32*/;
    { // tailcall
      xs = xx;
      acc = _own_x132;
      goto kk__tailcall;
    }
  }
  {
    return acc;
  }
}

// initialization
void kk_std_num_int32__init(kk_context_t* _ctx){
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
    kk_std_num_int32_one = (KK_I32(1)); /*int32*/
  }
  {
    kk_std_num_int32_zero = (KK_I32(0)); /*int32*/
  }
  {
    kk_std_num_int32_max_int32 = (KK_I32(2147483647)); /*int32*/
  }
  {
    kk_std_num_int32_min_int32 = (INT32_MIN); /*int32*/
  }
  {
    kk_std_num_int32_bits_int32 = (KK_I32(32)); /*int32*/
  }
}

// termination
void kk_std_num_int32__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_skip_drop(kk_std_num_int32_bits_int32, _ctx);
  kk_skip_drop(kk_std_num_int32_min_int32, _ctx);
  kk_skip_drop(kk_std_num_int32_max_int32, _ctx);
  kk_skip_drop(kk_std_num_int32_zero, _ctx);
  kk_skip_drop(kk_std_num_int32_one, _ctx);
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
