// Koka generated module: std/num/float64, koka version: 3.1.2, platform: 64-bit
#include "std_num_float64.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2021, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static int64_t kk_double_to_bits( double d, kk_context_t* ctx ) {
  kk_unused(ctx);
  return (int64_t)kk_bits_from_double(d);
}

static double kk_double_from_bits( int64_t i, kk_context_t* ctx ) {
  kk_unused(ctx);
  return kk_bits_to_double((uint64_t)i);
}

static double kk_prim_parse_double( kk_string_t str, kk_context_t* ctx) {
  const char* s = kk_string_cbuf_borrow(str,NULL,ctx);
  char* end;
  double d = strtod(s,&end);
  kk_string_drop(str,ctx);
  return d;
}


kk_integer_t kk_std_num_float64_flt_max_prec;
 
// Extend a `:float32` to a `:float64`

double kk_std_num_float64_float32_fs_float64(float f, kk_context_t* _ctx) { /* (f : float32) -> float64 */ 
  return (double)(f);
}

double kk_std_num_float64_make_neginf(kk_context_t* _ctx) { /* () -> float64 */ 
  return -HUGE_VAL;
}
 
// Negative infinity

double kk_std_num_float64_neginf;

double kk_std_num_float64_make_posinf(kk_context_t* _ctx) { /* () -> float64 */ 
  return HUGE_VAL;
}
 
// Positive infinity

double kk_std_num_float64_posinf;
 
// lifted local: @lift-minimum@10331, minimum, @spec-x10257
// specialized: std/core/list/@unroll-foldl@10005, on parameters @uniq-f@10252, using:
// @uniq-f@10252 = std/num/float64/min

double kk_std_num_float64__lift_minimum_10332(kk_std_core_types__list _uniq_xs_10250, double _uniq_z_10251, kk_context_t* _ctx) { /* (list<float64>, float64) -> float64 */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(_uniq_xs_10250, _ctx)) {
    struct kk_std_core_types_Cons* _con_x701 = kk_std_core_types__as_Cons(_uniq_xs_10250, _ctx);
    kk_box_t _box_x0 = _con_x701->head;
    kk_std_core_types__list _uniq_xx_10255 = _con_x701->tail;
    double _uniq_x_10254 = kk_double_unbox(_box_x0, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_uniq_xs_10250, _ctx)) {
      kk_box_drop(_box_x0, _ctx);
      kk_datatype_ptr_free(_uniq_xs_10250, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_uniq_xx_10255, _ctx);
      kk_datatype_ptr_decref(_uniq_xs_10250, _ctx);
    }
    { // tailcall
      double _x_x702;
      bool _match_x685 = (_uniq_z_10251 <= _uniq_x_10254); /*bool*/;
      if (_match_x685) {
        _x_x702 = _uniq_z_10251; /*float64*/
      }
      else {
        _x_x702 = _uniq_x_10254; /*float64*/
      }
      _uniq_xs_10250 = _uniq_xx_10255;
      _uniq_z_10251 = _x_x702;
      goto kk__tailcall;
    }
  }
  {
    return _uniq_z_10251;
  }
}
 
// lifted local: minimum, @spec-x10249
// specialized: std/core/list/foldl, on parameters @uniq-f@10246, using:
// @uniq-f@10246 = std/num/float64/min

double kk_std_num_float64__lift_minimum_10331(kk_std_core_types__list _uniq_xs_10244, double _uniq_z_10245, kk_context_t* _ctx) { /* (list<float64>, float64) -> float64 */ 
  if (kk_std_core_types__is_Nil(_uniq_xs_10244, _ctx)) {
    return _uniq_z_10245;
  }
  {
    return kk_std_num_float64__lift_minimum_10332(_uniq_xs_10244, _uniq_z_10245, _ctx);
  }
}
 
// Returns the smallest element of a list of floats (or `0` for the empty list)

double kk_std_num_float64_minimum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    return 0x0p+0;
  }
  {
    struct kk_std_core_types_Cons* _con_x703 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x1 = _con_x703->head;
    kk_std_core_types__list xx = _con_x703->tail;
    double x = kk_double_unbox(_box_x1, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_box_drop(_box_x1, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    return kk_std_num_float64__lift_minimum_10331(xx, x, _ctx);
  }
}
 
// lifted local: @lift-maximum@10333, maximum, @spec-x10271
// specialized: std/core/list/@unroll-foldl@10005, on parameters @uniq-f@10266, using:
// @uniq-f@10266 = std/num/float64/max

double kk_std_num_float64__lift_maximum_10334(kk_std_core_types__list _uniq_xs_10264, double _uniq_z_10265, kk_context_t* _ctx) { /* (list<float64>, float64) -> float64 */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(_uniq_xs_10264, _ctx)) {
    struct kk_std_core_types_Cons* _con_x704 = kk_std_core_types__as_Cons(_uniq_xs_10264, _ctx);
    kk_box_t _box_x2 = _con_x704->head;
    kk_std_core_types__list _uniq_xx_10269 = _con_x704->tail;
    double _uniq_x_10268 = kk_double_unbox(_box_x2, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_uniq_xs_10264, _ctx)) {
      kk_box_drop(_box_x2, _ctx);
      kk_datatype_ptr_free(_uniq_xs_10264, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_uniq_xx_10269, _ctx);
      kk_datatype_ptr_decref(_uniq_xs_10264, _ctx);
    }
    { // tailcall
      double _x_x705;
      bool _match_x684 = (_uniq_z_10265 >= _uniq_x_10268); /*bool*/;
      if (_match_x684) {
        _x_x705 = _uniq_z_10265; /*float64*/
      }
      else {
        _x_x705 = _uniq_x_10268; /*float64*/
      }
      _uniq_xs_10264 = _uniq_xx_10269;
      _uniq_z_10265 = _x_x705;
      goto kk__tailcall;
    }
  }
  {
    return _uniq_z_10265;
  }
}
 
// lifted local: maximum, @spec-x10263
// specialized: std/core/list/foldl, on parameters @uniq-f@10260, using:
// @uniq-f@10260 = std/num/float64/max

double kk_std_num_float64__lift_maximum_10333(kk_std_core_types__list _uniq_xs_10258, double _uniq_z_10259, kk_context_t* _ctx) { /* (list<float64>, float64) -> float64 */ 
  if (kk_std_core_types__is_Nil(_uniq_xs_10258, _ctx)) {
    return _uniq_z_10259;
  }
  {
    return kk_std_num_float64__lift_maximum_10334(_uniq_xs_10258, _uniq_z_10259, _ctx);
  }
}
 
// Returns the largest element of a list of floats (or `0` for the empty list)

double kk_std_num_float64_maximum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    return 0x0p+0;
  }
  {
    struct kk_std_core_types_Cons* _con_x706 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x3 = _con_x706->head;
    kk_std_core_types__list xx = _con_x706->tail;
    double x = kk_double_unbox(_box_x3, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_box_drop(_box_x3, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    return kk_std_num_float64__lift_maximum_10333(xx, x, _ctx);
  }
}

double kk_std_num_float64_make_nan(kk_context_t* _ctx) { /* () -> float64 */ 
  return (double)NAN;
}
 
// Represents a value that is _not a number_ (NaN)

double kk_std_num_float64_nan;

kk_string_t kk_std_num_float64_show_fixedx(double d, int32_t prec, kk_context_t* _ctx) { /* (d : float64, prec : int32) -> string */ 
  return kk_double_show_fixed(d,prec,kk_context());
}

kk_string_t kk_std_num_float64_show_expx(double d, int32_t prec, kk_context_t* _ctx) { /* (d : float64, prec : int32) -> string */ 
  return kk_double_show_exp(d,prec,kk_context());
}
 
// Show a `:float64` in exponential (scientific) notation.
// The optional `precision` (= `-17`) specifies the precision.
// If `>=0` it specifies the number of digits behind the dot (up to `17` max).
// If negative, then at most the absolute value of `precision` digits behind the dot are used.

kk_string_t kk_std_num_float64_show_exp(double d, kk_std_core_types__optional precision, kk_context_t* _ctx) { /* (d : float64, precision : ? int) -> string */ 
  int32_t _x_x707;
  kk_integer_t _x_x708;
  if (kk_std_core_types__is_Optional(precision, _ctx)) {
    kk_box_t _box_x4 = precision._cons._Optional.value;
    kk_integer_t _uniq_precision_524 = kk_integer_unbox(_box_x4, _ctx);
    kk_integer_dup(_uniq_precision_524, _ctx);
    kk_std_core_types__optional_drop(precision, _ctx);
    _x_x708 = _uniq_precision_524; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(precision, _ctx);
    _x_x708 = kk_integer_from_small(-17); /*int*/
  }
  _x_x707 = kk_integer_clamp32(_x_x708,kk_context()); /*int32*/
  return kk_std_num_float64_show_expx(d, _x_x707, _ctx);
}
 
// Show a `:float64` fixed-point notation.
// The optional `precision` (= `-2`) specifies the maximum precision.
// If `>=0` it specifies the number of digits behind the dot (up to `20` max).
// If negative, then at most the absolute value of `precision` digits behind the dot are used.
// This may still show a number in exponential notation if the it is too small or large,
// in particular, for  a `d` where `d > 1.0e21` or `d < 1.0e-15`, or if
// `precision.abs > 17`, the `show-exp` routine is used.

kk_string_t kk_std_num_float64_show_fixed(double d, kk_std_core_types__optional precision, kk_context_t* _ctx) { /* (d : float64, precision : ? int) -> string */ 
  double dabs = kk_double_abs(d); /*float64*/;
  bool _match_x680 = (dabs < (0x1.203af9ee75616p-50)); /*bool*/;
  if (_match_x680) {
    int32_t _x_x709;
    kk_integer_t _x_x710;
    if (kk_std_core_types__is_Optional(precision, _ctx)) {
      kk_box_t _box_x5 = precision._cons._Optional.value;
      kk_integer_t _uniq_precision_540 = kk_integer_unbox(_box_x5, _ctx);
      kk_integer_dup(_uniq_precision_540, _ctx);
      kk_std_core_types__optional_drop(precision, _ctx);
      _x_x710 = _uniq_precision_540; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(precision, _ctx);
      _x_x710 = kk_integer_from_small(-2); /*int*/
    }
    _x_x709 = kk_integer_clamp32(_x_x710,kk_context()); /*int32*/
    return kk_std_num_float64_show_expx(d, _x_x709, _ctx);
  }
  {
    bool _match_x681 = (dabs > (0x1.b1ae4d6e2ef5p69)); /*bool*/;
    if (_match_x681) {
      int32_t _x_x711;
      kk_integer_t _x_x712;
      if (kk_std_core_types__is_Optional(precision, _ctx)) {
        kk_box_t _box_x6 = precision._cons._Optional.value;
        kk_integer_t _uniq_precision_540_0 = kk_integer_unbox(_box_x6, _ctx);
        kk_integer_dup(_uniq_precision_540_0, _ctx);
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x712 = _uniq_precision_540_0; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x712 = kk_integer_from_small(-2); /*int*/
      }
      _x_x711 = kk_integer_clamp32(_x_x712,kk_context()); /*int32*/
      return kk_std_num_float64_show_expx(d, _x_x711, _ctx);
    }
    {
      int32_t _x_x713;
      kk_integer_t _x_x714;
      if (kk_std_core_types__is_Optional(precision, _ctx)) {
        kk_box_t _box_x7 = precision._cons._Optional.value;
        kk_integer_t _uniq_precision_540_1 = kk_integer_unbox(_box_x7, _ctx);
        kk_integer_dup(_uniq_precision_540_1, _ctx);
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x714 = _uniq_precision_540_1; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x714 = kk_integer_from_small(-2); /*int*/
      }
      _x_x713 = kk_integer_clamp32(_x_x714,kk_context()); /*int32*/
      return kk_std_num_float64_show_fixedx(d, _x_x713, _ctx);
    }
  }
}
 
// Show a `:float64` as a string.
// If `d >= 1.0e-5` and `d < 1.0e+21`, `show-fixed` is used and otherwise `show-exp`.
// Default `precision` is `-17`.

kk_string_t kk_std_num_float64_show(double d, kk_std_core_types__optional precision, kk_context_t* _ctx) { /* (d : float64, precision : ? int) -> string */ 
  double dabs = kk_double_abs(d); /*float64*/;
  bool _match_x676 = (dabs >= (0x1.4f8b588e368f1p-17)); /*bool*/;
  if (_match_x676) {
    bool _match_x677 = (dabs < (0x1.b1ae4d6e2ef5p69)); /*bool*/;
    if (_match_x677) {
      double dabs_0 = kk_double_abs(d); /*float64*/;
      bool _match_x678 = (dabs_0 < (0x1.203af9ee75616p-50)); /*bool*/;
      if (_match_x678) {
        int32_t _x_x715;
        kk_integer_t _x_x716;
        if (kk_std_core_types__is_Optional(precision, _ctx)) {
          kk_box_t _box_x8 = precision._cons._Optional.value;
          kk_integer_t _uniq_precision_615 = kk_integer_unbox(_box_x8, _ctx);
          kk_integer_dup(_uniq_precision_615, _ctx);
          kk_std_core_types__optional_drop(precision, _ctx);
          _x_x716 = _uniq_precision_615; /*int*/
        }
        else {
          kk_std_core_types__optional_drop(precision, _ctx);
          _x_x716 = kk_integer_from_small(-17); /*int*/
        }
        _x_x715 = kk_integer_clamp32(_x_x716,kk_context()); /*int32*/
        return kk_std_num_float64_show_expx(d, _x_x715, _ctx);
      }
      {
        bool _match_x679 = (dabs_0 > (0x1.b1ae4d6e2ef5p69)); /*bool*/;
        if (_match_x679) {
          int32_t _x_x717;
          kk_integer_t _x_x718;
          if (kk_std_core_types__is_Optional(precision, _ctx)) {
            kk_box_t _box_x9 = precision._cons._Optional.value;
            kk_integer_t _uniq_precision_615_0 = kk_integer_unbox(_box_x9, _ctx);
            kk_integer_dup(_uniq_precision_615_0, _ctx);
            kk_std_core_types__optional_drop(precision, _ctx);
            _x_x718 = _uniq_precision_615_0; /*int*/
          }
          else {
            kk_std_core_types__optional_drop(precision, _ctx);
            _x_x718 = kk_integer_from_small(-17); /*int*/
          }
          _x_x717 = kk_integer_clamp32(_x_x718,kk_context()); /*int32*/
          return kk_std_num_float64_show_expx(d, _x_x717, _ctx);
        }
        {
          int32_t _x_x719;
          kk_integer_t _x_x720;
          if (kk_std_core_types__is_Optional(precision, _ctx)) {
            kk_box_t _box_x10 = precision._cons._Optional.value;
            kk_integer_t _uniq_precision_615_1 = kk_integer_unbox(_box_x10, _ctx);
            kk_integer_dup(_uniq_precision_615_1, _ctx);
            kk_std_core_types__optional_drop(precision, _ctx);
            _x_x720 = _uniq_precision_615_1; /*int*/
          }
          else {
            kk_std_core_types__optional_drop(precision, _ctx);
            _x_x720 = kk_integer_from_small(-17); /*int*/
          }
          _x_x719 = kk_integer_clamp32(_x_x720,kk_context()); /*int32*/
          return kk_std_num_float64_show_fixedx(d, _x_x719, _ctx);
        }
      }
    }
    {
      int32_t _x_x721;
      kk_integer_t _x_x722;
      if (kk_std_core_types__is_Optional(precision, _ctx)) {
        kk_box_t _box_x11 = precision._cons._Optional.value;
        kk_integer_t _uniq_precision_615_2 = kk_integer_unbox(_box_x11, _ctx);
        kk_integer_dup(_uniq_precision_615_2, _ctx);
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x722 = _uniq_precision_615_2; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x722 = kk_integer_from_small(-17); /*int*/
      }
      _x_x721 = kk_integer_clamp32(_x_x722,kk_context()); /*int32*/
      return kk_std_num_float64_show_expx(d, _x_x721, _ctx);
    }
  }
  {
    int32_t _x_x723;
    kk_integer_t _x_x724;
    if (kk_std_core_types__is_Optional(precision, _ctx)) {
      kk_box_t _box_x12 = precision._cons._Optional.value;
      kk_integer_t _uniq_precision_615_3 = kk_integer_unbox(_box_x12, _ctx);
      kk_integer_dup(_uniq_precision_615_3, _ctx);
      kk_std_core_types__optional_drop(precision, _ctx);
      _x_x724 = _uniq_precision_615_3; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(precision, _ctx);
      _x_x724 = kk_integer_from_small(-17); /*int*/
    }
    _x_x723 = kk_integer_clamp32(_x_x724,kk_context()); /*int32*/
    return kk_std_num_float64_show_expx(d, _x_x723, _ctx);
  }
}
 
// Is this value equal to negative or positive infinity ?

bool kk_std_num_float64_is_inf(double d, kk_context_t* _ctx) { /* (d : float64) -> bool */ 
  return isinf(d);
}
 
// fused multiply-add. Computes `(x*y)+z` as if to infinite precision
// with only the final result rounded back to a `:float64`.

double kk_std_num_float64_fmadd(double x, double y, double z, kk_context_t* _ctx) { /* (x : float64, y : float64, z : float64) -> float64 */ 
  return fma(x,y,z);
}
 
// Round a float64 to a specified precision. Rounds to the  even number in case of a tie.
// `123.456.round-to-prec(2) == 123.46`
// `123.456.round-to-prec(-1) == 120.0`

double kk_std_num_float64_round_to_prec(double d, kk_integer_t prec, kk_context_t* _ctx) { /* (d : float64, prec : int) -> float64 */ 
  bool _match_x672 = kk_integer_lte_borrow(prec,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x672) {
    kk_integer_drop(prec, _ctx);
    return kk_double_round_even(d,kk_context());
  }
  {
    double p;
    double _x_x728 = kk_integer_as_double(prec,kk_context()); /*float64*/
    p = pow(10.0,_x_x728); /*float64*/
    double _x_x729;
    double _x_x730 = (d * p); /*float64*/
    _x_x729 = kk_double_round_even(_x_x730,kk_context()); /*float64*/
    return (_x_x729 / p);
  }
}
 
// Round a `:float64` to a `:float32`

float kk_std_num_float64_float64_fs_float32(double f, kk_context_t* _ctx) { /* (f : float64) -> float32 */ 
  return (float)(f);
}
 
// Returns `ln(exp(x) + exp(y))`.
// Avoids overlow/underflow errors.

double kk_std_num_float64_lnaddexp(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  bool _match_x670 = (x == y); /*bool*/;
  if (_match_x670) {
    return (x + (0x1.62e42fefa39efp-1));
  }
  {
    double z = (x - y); /*float64*/;
    bool _match_x671 = (z > (0x0p+0)); /*bool*/;
    if (_match_x671) {
      double _x_x735;
      double _x_x736;
      double _x_x737 = (-z); /*float64*/
      _x_x736 = exp(_x_x737); /*float64*/
      _x_x735 = log1p(_x_x736); /*float64*/
      return (x + _x_x735);
    }
    {
      double _x_x738;
      double _x_x739 = exp(z); /*float64*/
      _x_x738 = log1p(_x_x739); /*float64*/
      return (y + _x_x738);
    }
  }
}
 
// Returns `log2( exp2(x) + exp2(y) )`.
// Avoids overlow/underflow errors.

double kk_std_num_float64_logaddexp2(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  bool _match_x668 = (x == y); /*bool*/;
  if (_match_x668) {
    return (x + 0x1p0);
  }
  {
    double z = (x - y); /*float64*/;
    bool _match_x669 = (z > (0x0p+0)); /*bool*/;
    if (_match_x669) {
      double x_0_10015;
      double _x_x740 = (-z); /*float64*/
      x_0_10015 = exp2(_x_x740); /*float64*/
      double _x_x741;
      double _x_x742 = log1p(x_0_10015); /*float64*/
      _x_x741 = ((0x1.71547652b82fep0) * _x_x742); /*float64*/
      return (x + _x_x741);
    }
    {
      double x_1_10016 = exp2(z); /*float64*/;
      double _x_x743;
      double _x_x744 = log1p(x_1_10016); /*float64*/
      _x_x743 = ((0x1.71547652b82fep0) * _x_x744); /*float64*/
      return (y + _x_x743);
    }
  }
}
 
// Return if two floats are nearly equal with respect to some `epsilon` (=`8*flt-epsilon`).
// The epsilon is the nearest difference for numbers around 1.0. The routine automatically
// scales the epsilon for larger and smaller numbers, and for subnormal numbers.

bool kk_std_num_float64_nearly_eq(double x, double y, kk_std_core_types__optional epsilon, kk_context_t* _ctx) { /* (x : float64, y : float64, epsilon : ? float64) -> bool */ 
  double _uniq_epsilon_1077;
  if (kk_std_core_types__is_Optional(epsilon, _ctx)) {
    kk_box_t _box_x13 = epsilon._cons._Optional.value;
    double _uniq_epsilon_1078 = kk_double_unbox(_box_x13, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(epsilon, _ctx);
    _uniq_epsilon_1077 = _uniq_epsilon_1078; /*float64*/
  }
  else {
    kk_std_core_types__optional_drop(epsilon, _ctx);
    _uniq_epsilon_1077 = (0x1p3 * (0x1p-52)); /*float64*/
  }
  bool _match_x663 = (x == y); /*bool*/;
  if (_match_x663) {
    return true;
  }
  {
    double diff;
    double _x_x745 = (x - y); /*float64*/
    diff = kk_double_abs(_x_x745); /*float64*/
    bool _match_x664 = (x == (0x0p+0)); /*bool*/;
    if (_match_x664) {
      double _x_x746 = (0x1p1 * diff); /*float64*/
      double _x_x747 = (_uniq_epsilon_1077 * (0x1p-1022)); /*float64*/
      return (_x_x746 < _x_x747);
    }
    {
      bool _match_x665 = (y == (0x0p+0)); /*bool*/;
      if (_match_x665) {
        double _x_x748 = (0x1p1 * diff); /*float64*/
        double _x_x749 = (_uniq_epsilon_1077 * (0x1p-1022)); /*float64*/
        return (_x_x748 < _x_x749);
      }
      {
        bool _match_x666 = (diff < (0x1p-1022)); /*bool*/;
        if (_match_x666) {
          double _x_x750 = (0x1p1 * diff); /*float64*/
          double _x_x751 = (_uniq_epsilon_1077 * (0x1p-1022)); /*float64*/
          return (_x_x750 < _x_x751);
        }
        {
          double sum_0;
          double _x_x752 = kk_double_abs(x); /*float64*/
          double _x_x753 = kk_double_abs(y); /*float64*/
          sum_0 = (_x_x752 + _x_x753); /*float64*/
          double _x_x754;
          double _x_x755 = (0x1p1 * diff); /*float64*/
          double _x_x756;
          bool _match_x667 = (sum_0 > (0x1.fffffffffffffp1023)); /*bool*/;
          if (_match_x667) {
            _x_x756 = 0x1.fffffffffffffp1023; /*float64*/
          }
          else {
            _x_x756 = sum_0; /*float64*/
          }
          _x_x754 = (_x_x755 / _x_x756); /*float64*/
          return (_x_x754 < _uniq_epsilon_1077);
        }
      }
    }
  }
}
 
// Low-level: return the bits of a 64-bit `:float64` as in `:int64`

int64_t kk_std_num_float64_float64_to_bits(double d, kk_context_t* _ctx) { /* (d : float64) -> int64 */ 
  return kk_double_to_bits(d,kk_context());
}
 
// Low-level: create a `:float64` from the given 64-bit integer.

double kk_std_num_float64_float64_from_bits(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> float64 */ 
  return kk_double_from_bits(i,kk_context());
}
 
// Calculate 2&middot;^`e`^ for an integer `e`.
// Uses efficient bit conversion for exponents between  -1022 and 1023 and
// otherwise falls back to the regular `exp2` function converting `e` to a float64.

double kk_std_num_float64_exp2i(kk_integer_t e, kk_context_t* _ctx) { /* (e : int) -> float64 */ 
  bool _match_x661 = kk_integer_gte_borrow(e,(kk_integer_from_small(-1022)),kk_context()); /*bool*/;
  if (_match_x661) {
    bool _match_x662 = kk_integer_lte_borrow(e,(kk_integer_from_small(1023)),kk_context()); /*bool*/;
    if (_match_x662) {
      int64_t i_10017;
      kk_integer_t _x_x757 = kk_integer_add_small_const(e, 1023, _ctx); /*int*/
      i_10017 = kk_std_num_int64_int64(_x_x757, _ctx); /*int64*/
      int64_t _x_x758;
      int64_t _x_x759 = (KK_I64(52)); /*int64*/
      _x_x758 = kk_shl64(i_10017,_x_x759); /*int64*/
      return kk_std_num_float64_float64_from_bits(_x_x758, _ctx);
    }
    {
      double _x_x760 = kk_integer_as_double(e,kk_context()); /*float64*/
      return exp2(_x_x760);
    }
  }
  {
    double _x_x761 = kk_integer_as_double(e,kk_context()); /*float64*/
    return exp2(_x_x761);
  }
}
 
// 'Load exponent': returns `x`&middot;2^`e`^ for a `is-finite` `x` and
// otherwise `x` itself. See also `encode` which loads an integer mantissa.

double kk_std_num_float64_ldexp(double x, kk_integer_t e, kk_context_t* _ctx) { /* (x : float64, e : int) -> float64 */ 
  bool b_10021 = isfinite(x); /*bool*/;
  if (b_10021) {
    bool _match_x653 = kk_integer_gte_borrow(e,(kk_integer_from_small(-1022)),kk_context()); /*bool*/;
    if (_match_x653) {
      bool _match_x657 = kk_integer_lte_borrow(e,(kk_integer_from_small(1023)),kk_context()); /*bool*/;
      if (_match_x657) {
        double _x_x763 = kk_std_num_float64_exp2i(e, _ctx); /*float64*/
        return (x * _x_x763);
      }
      {
        bool _match_x658 = kk_integer_lte_borrow(e,(kk_integer_from_small(2046)),kk_context()); /*bool*/;
        if (_match_x658) {
          double x_1_10024 = (x * 0x1p1023); /*float64*/;
          kk_integer_t e_1_10025 = kk_integer_add_small_const(e, -1023, _ctx); /*int*/;
          double _x_x764 = kk_std_num_float64_exp2i(e_1_10025, _ctx); /*float64*/
          return (x_1_10024 * _x_x764);
        }
        {
          bool _match_x659 = kk_integer_lte_borrow(e,(kk_integer_from_small(3069)),kk_context()); /*bool*/;
          if (_match_x659) {
            double x_3_10028;
            double _x_x765 = (x * 0x1p1023); /*float64*/
            x_3_10028 = (_x_x765 * 0x1p1023); /*float64*/
            kk_integer_t e_2_10029 = kk_integer_add_small_const(e, -2046, _ctx); /*int*/;
            double _x_x766 = kk_std_num_float64_exp2i(e_2_10029, _ctx); /*float64*/
            return (x_3_10028 * _x_x766);
          }
          {
            kk_integer_drop(e, _ctx);
            bool _match_x660 = (x < (0x0p+0)); /*bool*/;
            if (_match_x660) {
              return kk_std_num_float64_neginf;
            }
            {
              return kk_std_num_float64_posinf;
            }
          }
        }
      }
    }
    {
      bool _match_x654 = kk_integer_gte_borrow(e,(kk_integer_from_small(-2044)),kk_context()); /*bool*/;
      if (_match_x654) {
        double x_5_10032 = (x * (0x1p-1022)); /*float64*/;
        kk_integer_t e_3_10033 = kk_integer_add_small_const(e, 1022, _ctx); /*int*/;
        double _x_x767 = kk_std_num_float64_exp2i(e_3_10033, _ctx); /*float64*/
        return (x_5_10032 * _x_x767);
      }
      {
        bool _match_x655 = kk_integer_gte_borrow(e,(kk_integer_from_small(-3066)),kk_context()); /*bool*/;
        if (_match_x655) {
          double x_7_10036;
          double _x_x768 = (x * (0x1p-1022)); /*float64*/
          x_7_10036 = (_x_x768 * (0x1p-1022)); /*float64*/
          kk_integer_t e_4_10037 = kk_integer_add_small_const(e, 2044, _ctx); /*int*/;
          double _x_x769 = kk_std_num_float64_exp2i(e_4_10037, _ctx); /*float64*/
          return (x_7_10036 * _x_x769);
        }
        {
          kk_integer_drop(e, _ctx);
          bool _match_x656 = (x < (0x0p+0)); /*bool*/;
          if (_match_x656) {
            return -0x0p+0;
          }
          {
            return 0x0p+0;
          }
        }
      }
    }
  }
  {
    kk_integer_drop(e, _ctx);
    return x;
  }
}
 
// decode a normalized float64 (i.e. not subnormal)

kk_std_core_types__tuple2 kk_std_num_float64_decode_normalized(double d, kk_std_core_types__optional e_adjust, kk_context_t* _ctx) { /* (d : float64, e-adjust : ? int) -> (int, int) */ 
  int64_t i = kk_std_num_float64_float64_to_bits(d, _ctx); /*int64*/;
  int64_t exp;
  int64_t _x_x771;
  int64_t _x_x772;
  int64_t _x_x773 = (KK_I64(52)); /*int64*/
  _x_x772 = (int64_t)kk_shr64(i,_x_x773); /*int64*/
  int64_t _x_x774 = (KK_I64(2047)); /*int64*/
  _x_x771 = _x_x772 & _x_x774; /*int64*/
  int64_t _x_x775 = (KK_I64(1043)); /*int64*/
  exp = (int64_t)((uint64_t)_x_x771 - (uint64_t)_x_x775); /*int64*/
  int64_t man;
  int64_t _x_x776;
  int64_t _x_x777 = (KK_I64(4503599627370495)); /*int64*/
  _x_x776 = i & _x_x777; /*int64*/
  int64_t _x_x778 = (KK_I64(4503599627370496)); /*int64*/
  man = (int64_t)((uint64_t)_x_x776 + (uint64_t)_x_x778); /*int64*/
  kk_integer_t x_0_10045 = kk_integer_from_int64(exp,kk_context()); /*int*/;
  kk_integer_t x_10043 = kk_integer_add_small_const(x_0_10045, -32, _ctx); /*int*/;
  kk_integer_t _b_x15_17;
  int64_t _x_x779;
  bool _match_x652 = 0 > i; /*bool*/;
  if (_match_x652) {
    int64_t _x_x780 = (KK_I64(0)); /*int64*/
    _x_x779 = (int64_t)((uint64_t)_x_x780 - (uint64_t)man); /*int64*/
  }
  else {
    _x_x779 = man; /*int64*/
  }
  _b_x15_17 = kk_integer_from_int64(_x_x779,kk_context()); /*int*/
  kk_integer_t _b_x16_18;
  kk_integer_t _x_x781;
  if (kk_std_core_types__is_Optional(e_adjust, _ctx)) {
    kk_box_t _box_x14 = e_adjust._cons._Optional.value;
    kk_integer_t _uniq_e_adjust_1665 = kk_integer_unbox(_box_x14, _ctx);
    kk_integer_dup(_uniq_e_adjust_1665, _ctx);
    kk_std_core_types__optional_drop(e_adjust, _ctx);
    _x_x781 = _uniq_e_adjust_1665; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(e_adjust, _ctx);
    _x_x781 = kk_integer_from_small(0); /*int*/
  }
  _b_x16_18 = kk_integer_add(x_10043,_x_x781,kk_context()); /*int*/
  return kk_std_core_types__new_Tuple2(kk_integer_box(_b_x15_17, _ctx), kk_integer_box(_b_x16_18, _ctx), _ctx);
}
 
// Decode a float64 `d` into a tuple `(m,e)` of a mantissa `m` and exponent `e`
// such that `m`&middot;2^`e`^ =  `d` exactly. The mantissa `m` is
// always either 0 or in the range [2^52^, 2^53^). See also `frexp`.

kk_std_core_types__tuple2 kk_std_num_float64_decode(double d, kk_context_t* _ctx) { /* (d : float64) -> (int, int) */ 
  bool _match_x646 = (d == (0x0p+0)); /*bool*/;
  if (_match_x646) {
    return kk_std_core_types__new_Tuple2(kk_integer_box(kk_integer_from_small(0), _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
  }
  {
    bool _match_x647 = (d != (0x0p+0)); /*bool*/;
    if (_match_x647) {
      bool _match_x649;
      double _x_x782 = kk_double_abs(d); /*float64*/
      _match_x649 = (_x_x782 < (0x1p-1022)); /*bool*/
      if (_match_x649) {
        double d_0_10137 = (d * 0x1p54); /*float64*/;
        int64_t i = kk_std_num_float64_float64_to_bits(d_0_10137, _ctx); /*int64*/;
        int64_t exp;
        int64_t _x_x783;
        int64_t _x_x784;
        int64_t _x_x785 = (KK_I64(52)); /*int64*/
        _x_x784 = (int64_t)kk_shr64(i,_x_x785); /*int64*/
        int64_t _x_x786 = (KK_I64(2047)); /*int64*/
        _x_x783 = _x_x784 & _x_x786; /*int64*/
        int64_t _x_x787 = (KK_I64(1043)); /*int64*/
        exp = (int64_t)((uint64_t)_x_x783 - (uint64_t)_x_x787); /*int64*/
        int64_t man;
        int64_t _x_x788;
        int64_t _x_x789 = (KK_I64(4503599627370495)); /*int64*/
        _x_x788 = i & _x_x789; /*int64*/
        int64_t _x_x790 = (KK_I64(4503599627370496)); /*int64*/
        man = (int64_t)((uint64_t)_x_x788 + (uint64_t)_x_x790); /*int64*/
        kk_integer_t x_0_10045 = kk_integer_from_int64(exp,kk_context()); /*int*/;
        kk_integer_t x_10043 = kk_integer_add_small_const(x_0_10045, -32, _ctx); /*int*/;
        kk_integer_t _b_x21_29;
        int64_t _x_x791;
        bool _match_x651 = 0 > i; /*bool*/;
        if (_match_x651) {
          int64_t _x_x792 = (KK_I64(0)); /*int64*/
          _x_x791 = (int64_t)((uint64_t)_x_x792 - (uint64_t)man); /*int64*/
        }
        else {
          _x_x791 = man; /*int64*/
        }
        _b_x21_29 = kk_integer_from_int64(_x_x791,kk_context()); /*int*/
        kk_integer_t _b_x22_30 = kk_integer_add_small_const(x_10043, -54, _ctx); /*int*/;
        return kk_std_core_types__new_Tuple2(kk_integer_box(_b_x21_29, _ctx), kk_integer_box(_b_x22_30, _ctx), _ctx);
      }
      {
        int64_t i_0 = kk_std_num_float64_float64_to_bits(d, _ctx); /*int64*/;
        int64_t exp_0;
        int64_t _x_x793;
        int64_t _x_x794;
        int64_t _x_x795 = (KK_I64(52)); /*int64*/
        _x_x794 = (int64_t)kk_shr64(i_0,_x_x795); /*int64*/
        int64_t _x_x796 = (KK_I64(2047)); /*int64*/
        _x_x793 = _x_x794 & _x_x796; /*int64*/
        int64_t _x_x797 = (KK_I64(1043)); /*int64*/
        exp_0 = (int64_t)((uint64_t)_x_x793 - (uint64_t)_x_x797); /*int64*/
        int64_t man_0;
        int64_t _x_x798;
        int64_t _x_x799 = (KK_I64(4503599627370495)); /*int64*/
        _x_x798 = i_0 & _x_x799; /*int64*/
        int64_t _x_x800 = (KK_I64(4503599627370496)); /*int64*/
        man_0 = (int64_t)((uint64_t)_x_x798 + (uint64_t)_x_x800); /*int64*/
        kk_integer_t x_0_10045_0 = kk_integer_from_int64(exp_0,kk_context()); /*int*/;
        kk_integer_t x_10043_0 = kk_integer_add_small_const(x_0_10045_0, -32, _ctx); /*int*/;
        kk_integer_t _b_x23_31;
        int64_t _x_x801;
        bool _match_x650 = 0 > i_0; /*bool*/;
        if (_match_x650) {
          int64_t _x_x802 = (KK_I64(0)); /*int64*/
          _x_x801 = (int64_t)((uint64_t)_x_x802 - (uint64_t)man_0); /*int64*/
        }
        else {
          _x_x801 = man_0; /*int64*/
        }
        _b_x23_31 = kk_integer_from_int64(_x_x801,kk_context()); /*int*/
        kk_integer_t _b_x24_32 = kk_integer_add_small_const(x_10043_0, 0, _ctx); /*int*/;
        return kk_std_core_types__new_Tuple2(kk_integer_box(_b_x23_31, _ctx), kk_integer_box(_b_x24_32, _ctx), _ctx);
      }
    }
    {
      int64_t i_1 = kk_std_num_float64_float64_to_bits(d, _ctx); /*int64*/;
      int64_t exp_1;
      int64_t _x_x803;
      int64_t _x_x804;
      int64_t _x_x805 = (KK_I64(52)); /*int64*/
      _x_x804 = (int64_t)kk_shr64(i_1,_x_x805); /*int64*/
      int64_t _x_x806 = (KK_I64(2047)); /*int64*/
      _x_x803 = _x_x804 & _x_x806; /*int64*/
      int64_t _x_x807 = (KK_I64(1043)); /*int64*/
      exp_1 = (int64_t)((uint64_t)_x_x803 - (uint64_t)_x_x807); /*int64*/
      int64_t man_1;
      int64_t _x_x808;
      int64_t _x_x809 = (KK_I64(4503599627370495)); /*int64*/
      _x_x808 = i_1 & _x_x809; /*int64*/
      int64_t _x_x810 = (KK_I64(4503599627370496)); /*int64*/
      man_1 = (int64_t)((uint64_t)_x_x808 + (uint64_t)_x_x810); /*int64*/
      kk_integer_t x_0_10045_1 = kk_integer_from_int64(exp_1,kk_context()); /*int*/;
      kk_integer_t x_10043_1 = kk_integer_add_small_const(x_0_10045_1, -32, _ctx); /*int*/;
      kk_integer_t _b_x25_33;
      int64_t _x_x811;
      bool _match_x648 = 0 > i_1; /*bool*/;
      if (_match_x648) {
        int64_t _x_x812 = (KK_I64(0)); /*int64*/
        _x_x811 = (int64_t)((uint64_t)_x_x812 - (uint64_t)man_1); /*int64*/
      }
      else {
        _x_x811 = man_1; /*int64*/
      }
      _b_x25_33 = kk_integer_from_int64(_x_x811,kk_context()); /*int*/
      kk_integer_t _b_x26_34 = kk_integer_add_small_const(x_10043_1, 0, _ctx); /*int*/;
      return kk_std_core_types__new_Tuple2(kk_integer_box(_b_x25_33, _ctx), kk_integer_box(_b_x26_34, _ctx), _ctx);
    }
  }
}
 
// 'Fraction/exponent': return the normalized fraction `f` and exponent `exp`
// for a number `x` such that `x == f`&middot;2^`exp`^.
// The absolute value of the fraction `f` is always in the range [0.5, 1.0), or
// one of `0.0`, `-0.0`, `neginf`, `posinf`, or `nan`.
// See also `decode` which  decodes to an integer mantissa.

kk_std_core_types__tuple2 kk_std_num_float64_frexp(double x, kk_context_t* _ctx) { /* (x : float64) -> (float64, int) */ 
  bool b_10048 = isfinite(x); /*bool*/;
  if (b_10048) {
    bool _match_x642 = (x == (0x0p+0)); /*bool*/;
    if (_match_x642) {
      bool _match_x644;
      double _x_x813 = (0x1p0 / x); /*float64*/
      _match_x644 = (isinf(_x_x813) && signbit(_x_x813)); /*bool*/
      if (_match_x644) {
        return kk_std_core_types__new_Tuple2(kk_double_box(x, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
      }
      {
        kk_std_core_types__tuple2 _match_x645 = kk_std_num_float64_decode(x, _ctx); /*(int, int)*/;
        {
          kk_box_t _box_x37 = _match_x645.fst;
          kk_box_t _box_x38 = _match_x645.snd;
          kk_integer_t m = kk_integer_unbox(_box_x37, _ctx);
          kk_integer_t e = kk_integer_unbox(_box_x38, _ctx);
          kk_integer_dup(e, _ctx);
          kk_integer_dup(m, _ctx);
          kk_std_core_types__tuple2_drop(_match_x645, _ctx);
          double _b_x39_49;
          double _x_x814 = kk_integer_as_double(m,kk_context()); /*float64*/
          _b_x39_49 = (_x_x814 * (0x1p-53)); /*float64*/
          kk_integer_t _b_x40_50 = kk_integer_add_small_const(e, 53, _ctx); /*int*/;
          return kk_std_core_types__new_Tuple2(kk_double_box(_b_x39_49, _ctx), kk_integer_box(_b_x40_50, _ctx), _ctx);
        }
      }
    }
    {
      kk_std_core_types__tuple2 _match_x643 = kk_std_num_float64_decode(x, _ctx); /*(int, int)*/;
      {
        kk_box_t _box_x41 = _match_x643.fst;
        kk_box_t _box_x42 = _match_x643.snd;
        kk_integer_t m_0 = kk_integer_unbox(_box_x41, _ctx);
        kk_integer_t e_0 = kk_integer_unbox(_box_x42, _ctx);
        kk_integer_dup(e_0, _ctx);
        kk_integer_dup(m_0, _ctx);
        kk_std_core_types__tuple2_drop(_match_x643, _ctx);
        double _b_x43_51;
        double _x_x815 = kk_integer_as_double(m_0,kk_context()); /*float64*/
        _b_x43_51 = (_x_x815 * (0x1p-53)); /*float64*/
        kk_integer_t _b_x44_52 = kk_integer_add_small_const(e_0, 53, _ctx); /*int*/;
        return kk_std_core_types__new_Tuple2(kk_double_box(_b_x43_51, _ctx), kk_integer_box(_b_x44_52, _ctx), _ctx);
      }
    }
  }
  {
    return kk_std_core_types__new_Tuple2(kk_double_box(x, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
  }
}
 
// Returns the greatest `:float64` less than `x`.
// This behaves exactly as `nextDown` in the IEEE 754-2008 standard.
// The identity `x.next-down == ~next-down(~x)` holds for all `x`.
// When `x` is finite `x == x.next-down.next-up` also holds.

double kk_std_num_float64_next_down(double x, kk_context_t* _ctx) { /* (x : float64) -> float64 */ 
  bool _match_x638 = isnan(x); /*bool*/;
  if (_match_x638) {
    return x;
  }
  {
    bool _match_x639 = (isinf(x) && signbit(x)); /*bool*/;
    if (_match_x639) {
      return x;
    }
    {
      bool _match_x640 = (x == (0x0p+0)); /*bool*/;
      if (_match_x640) {
        return (-(0x1p-1074));
      }
      {
        int64_t i = kk_std_num_float64_float64_to_bits(x, _ctx); /*int64*/;
        int64_t next;
        bool _match_x641 = 0 > i; /*bool*/;
        if (_match_x641) {
          int64_t _x_x816 = (KK_I64(1)); /*int64*/
          next = (int64_t)((uint64_t)i + (uint64_t)_x_x816); /*int64*/
        }
        else {
          int64_t _x_x817 = (KK_I64(1)); /*int64*/
          next = (int64_t)((uint64_t)i - (uint64_t)_x_x817); /*int64*/
        }
        return kk_std_num_float64_float64_from_bits(next, _ctx);
      }
    }
  }
}
 
// Returns the least `:float64` greater than `x`.
// This behaves exactly as `nextUp` in the IEEE 754-2008 standard.
// The identity `x.next-up == ~next-down(~x)` holds for all `x`.
// When `x` is finite `x == x.next-up.next-down` also holds.

double kk_std_num_float64_next_up(double x, kk_context_t* _ctx) { /* (x : float64) -> float64 */ 
  bool _match_x634 = isnan(x); /*bool*/;
  if (_match_x634) {
    return x;
  }
  {
    bool _match_x635 = (isinf(x) && !signbit(x)); /*bool*/;
    if (_match_x635) {
      return x;
    }
    {
      bool _match_x636 = (x == (0x0p+0)); /*bool*/;
      if (_match_x636) {
        return 0x1p-1074;
      }
      {
        int64_t i = kk_std_num_float64_float64_to_bits(x, _ctx); /*int64*/;
        int64_t next;
        bool _match_x637 = 0 > i; /*bool*/;
        if (_match_x637) {
          int64_t _x_x818 = (KK_I64(1)); /*int64*/
          next = (int64_t)((uint64_t)i - (uint64_t)_x_x818); /*int64*/
        }
        else {
          int64_t _x_x819 = (KK_I64(1)); /*int64*/
          next = (int64_t)((uint64_t)i + (uint64_t)_x_x819); /*int64*/
        }
        return kk_std_num_float64_float64_from_bits(next, _ctx);
      }
    }
  }
}
 
// Compare floats using a total ordering on the `:float64`.
// The ordering follows the `totalOrder` predicate as defined in IEEE 754-2008 exactly.
// The values are ordered in following order:
// negative quiet nan,
// negative signaling nan,
// `neginf`,
// -finite,
// -0.0,
// +0.0,
// finite,
// `posinf`,
// signaling nan,
// and quiet nan.

kk_std_core_types__order kk_std_num_float64_cmp(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> order */ 
  int64_t bx = kk_std_num_float64_float64_to_bits(x, _ctx); /*int64*/;
  int64_t by = kk_std_num_float64_float64_to_bits(y, _ctx); /*int64*/;
  int64_t i_10058;
  int64_t _x_x820 = (KK_I64(63)); /*int64*/
  i_10058 = kk_sar64(bx,_x_x820); /*int64*/
  int64_t ix;
  int64_t _x_x821;
  int64_t _x_x822 = (KK_I64(1)); /*int64*/
  _x_x821 = (int64_t)kk_shr64(i_10058,_x_x822); /*int64*/
  ix = _x_x821 ^ bx; /*int64*/
  int64_t i_1_10062;
  int64_t _x_x823 = (KK_I64(63)); /*int64*/
  i_1_10062 = kk_sar64(by,_x_x823); /*int64*/
  int64_t iy;
  int64_t _x_x824;
  int64_t _x_x825 = (KK_I64(1)); /*int64*/
  _x_x824 = (int64_t)kk_shr64(i_1_10062,_x_x825); /*int64*/
  iy = _x_x824 ^ by; /*int64*/
  bool _match_x632 = (ix < iy); /*bool*/;
  if (_match_x632) {
    return kk_std_core_types__new_Lt(_ctx);
  }
  {
    bool _match_x633 = (ix > iy); /*bool*/;
    if (_match_x633) {
      return kk_std_core_types__new_Gt(_ctx);
    }
    {
      return kk_std_core_types__new_Eq(_ctx);
    }
  }
}
 
// The midpoint is the average of `x` and `y`.
// Avoids overflow on large numbers.

double kk_std_num_float64_midpoint(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  bool _match_x626 = (x != (0x0p+0)); /*bool*/;
  if (_match_x626) {
    bool _match_x629;
    double _x_x826 = kk_double_abs(x); /*float64*/
    _match_x629 = (_x_x826 < (0x1p-1022)); /*bool*/
    if (_match_x629) {
      double _x_x827 = (x + y); /*float64*/
      return (_x_x827 / 0x1p1);
    }
    {
      bool _match_x630 = (y != (0x0p+0)); /*bool*/;
      if (_match_x630) {
        bool _match_x631;
        double _x_x828 = kk_double_abs(y); /*float64*/
        _match_x631 = (_x_x828 < (0x1p-1022)); /*bool*/
        if (_match_x631) {
          double _x_x829 = (x + y); /*float64*/
          return (_x_x829 / 0x1p1);
        }
        {
          double _x_x830 = (x / 0x1p1); /*float64*/
          double _x_x831 = (y / 0x1p1); /*float64*/
          return (_x_x830 + _x_x831);
        }
      }
      {
        double _x_x832 = (x / 0x1p1); /*float64*/
        double _x_x833 = (y / 0x1p1); /*float64*/
        return (_x_x832 + _x_x833);
      }
    }
  }
  {
    bool _match_x627 = (y != (0x0p+0)); /*bool*/;
    if (_match_x627) {
      bool _match_x628;
      double _x_x834 = kk_double_abs(y); /*float64*/
      _match_x628 = (_x_x834 < (0x1p-1022)); /*bool*/
      if (_match_x628) {
        double _x_x835 = (x + y); /*float64*/
        return (_x_x835 / 0x1p1);
      }
      {
        double _x_x836 = (x / 0x1p1); /*float64*/
        double _x_x837 = (y / 0x1p1); /*float64*/
        return (_x_x836 + _x_x837);
      }
    }
    {
      double _x_x838 = (x / 0x1p1); /*float64*/
      double _x_x839 = (y / 0x1p1); /*float64*/
      return (_x_x838 + _x_x839);
    }
  }
}
 
// Linear interpolation, calculating `x + t*(y - x)` but avoids troublesome edge cases.
// Follows the C++20 [specification](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p0811r3.html).
// In particular, if `x.is-finite && y.is-finite`, then:
// - exact: `lerp(x,y,0.0) == x` and  `lerp(x,y,1.0) == y`
// - monotonic: if `x <= y` and `t1 <= t2`, then `cmp( lerp(x,y,t1), lerp(x,y,t2) ) <= Eq` (and other cases)
// - deterministic: only `lerp(x,x,flt-inf)` results in `nan`
// - bounded: `t<0.0 || t>1.0 || is-finite(lerp(x,y,t))`
// - consistent: `lerp(x,x,t) == x`

double kk_std_num_float64_lerp(double x, double y, double t, kk_context_t* _ctx) { /* (x : float64, y : float64, t : float64) -> float64 */ 
  bool _match_x604 = (x <= (0x0p+0)); /*bool*/;
  if (_match_x604) {
    bool _match_x615 = (y >= (0x0p+0)); /*bool*/;
    if (_match_x615) {
      double _x_x840 = (t * y); /*float64*/
      double _x_x841;
      double _x_x842 = (0x1p0 - t); /*float64*/
      _x_x841 = (_x_x842 * x); /*float64*/
      return (_x_x840 + _x_x841);
    }
    {
      bool _match_x616 = (x >= (0x0p+0)); /*bool*/;
      if (_match_x616) {
        bool _match_x621 = (y <= (0x0p+0)); /*bool*/;
        if (_match_x621) {
          double _x_x843 = (t * y); /*float64*/
          double _x_x844;
          double _x_x845 = (0x1p0 - t); /*float64*/
          _x_x844 = (_x_x845 * x); /*float64*/
          return (_x_x843 + _x_x844);
        }
        {
          bool _match_x622 = (t == 0x1p0); /*bool*/;
          if (_match_x622) {
            return y;
          }
          {
            double z;
            double _x_x846;
            double _x_x847 = (y - x); /*float64*/
            _x_x846 = (t * _x_x847); /*float64*/
            z = (x + _x_x846); /*float64*/
            bool x_0_10070 = (t > 0x1p0); /*bool*/;
            bool y_0_10071 = (y > x); /*bool*/;
            bool _match_x623;
            if (x_0_10070) {
              _match_x623 = y_0_10071; /*bool*/
            }
            else {
              if (y_0_10071) {
                _match_x623 = false; /*bool*/
              }
              else {
                _match_x623 = true; /*bool*/
              }
            }
            if (_match_x623) {
              bool _match_x625 = (y >= z); /*bool*/;
              if (_match_x625) {
                return y;
              }
              {
                return z;
              }
            }
            {
              bool _match_x624 = (y <= z); /*bool*/;
              if (_match_x624) {
                return y;
              }
              {
                return z;
              }
            }
          }
        }
      }
      {
        bool _match_x617 = (t == 0x1p0); /*bool*/;
        if (_match_x617) {
          return y;
        }
        {
          double z_0;
          double _x_x848;
          double _x_x849 = (y - x); /*float64*/
          _x_x848 = (t * _x_x849); /*float64*/
          z_0 = (x + _x_x848); /*float64*/
          bool x_3_10076 = (t > 0x1p0); /*bool*/;
          bool y_3_10077 = (y > x); /*bool*/;
          bool _match_x618;
          if (x_3_10076) {
            _match_x618 = y_3_10077; /*bool*/
          }
          else {
            if (y_3_10077) {
              _match_x618 = false; /*bool*/
            }
            else {
              _match_x618 = true; /*bool*/
            }
          }
          if (_match_x618) {
            bool _match_x620 = (y >= z_0); /*bool*/;
            if (_match_x620) {
              return y;
            }
            {
              return z_0;
            }
          }
          {
            bool _match_x619 = (y <= z_0); /*bool*/;
            if (_match_x619) {
              return y;
            }
            {
              return z_0;
            }
          }
        }
      }
    }
  }
  {
    bool _match_x605 = (x >= (0x0p+0)); /*bool*/;
    if (_match_x605) {
      bool _match_x610 = (y <= (0x0p+0)); /*bool*/;
      if (_match_x610) {
        double _x_x850 = (t * y); /*float64*/
        double _x_x851;
        double _x_x852 = (0x1p0 - t); /*float64*/
        _x_x851 = (_x_x852 * x); /*float64*/
        return (_x_x850 + _x_x851);
      }
      {
        bool _match_x611 = (t == 0x1p0); /*bool*/;
        if (_match_x611) {
          return y;
        }
        {
          double z_1;
          double _x_x853;
          double _x_x854 = (y - x); /*float64*/
          _x_x853 = (t * _x_x854); /*float64*/
          z_1 = (x + _x_x853); /*float64*/
          bool x_6_10082 = (t > 0x1p0); /*bool*/;
          bool y_6_10083 = (y > x); /*bool*/;
          bool _match_x612;
          if (x_6_10082) {
            _match_x612 = y_6_10083; /*bool*/
          }
          else {
            if (y_6_10083) {
              _match_x612 = false; /*bool*/
            }
            else {
              _match_x612 = true; /*bool*/
            }
          }
          if (_match_x612) {
            bool _match_x614 = (y >= z_1); /*bool*/;
            if (_match_x614) {
              return y;
            }
            {
              return z_1;
            }
          }
          {
            bool _match_x613 = (y <= z_1); /*bool*/;
            if (_match_x613) {
              return y;
            }
            {
              return z_1;
            }
          }
        }
      }
    }
    {
      bool _match_x606 = (t == 0x1p0); /*bool*/;
      if (_match_x606) {
        return y;
      }
      {
        double z_0_0;
        double _x_x855;
        double _x_x856 = (y - x); /*float64*/
        _x_x855 = (t * _x_x856); /*float64*/
        z_0_0 = (x + _x_x855); /*float64*/
        bool x_9_10088 = (t > 0x1p0); /*bool*/;
        bool y_9_10089 = (y > x); /*bool*/;
        bool _match_x607;
        if (x_9_10088) {
          _match_x607 = y_9_10089; /*bool*/
        }
        else {
          if (y_9_10089) {
            _match_x607 = false; /*bool*/
          }
          else {
            _match_x607 = true; /*bool*/
          }
        }
        if (_match_x607) {
          bool _match_x609 = (y >= z_0_0); /*bool*/;
          if (_match_x609) {
            return y;
          }
          {
            return z_0_0;
          }
        }
        {
          bool _match_x608 = (y <= z_0_0); /*bool*/;
          if (_match_x608) {
            return y;
          }
          {
            return z_0_0;
          }
        }
      }
    }
  }
}
 
/* Show a float64 in [hexadecimal notation](https://books.google.com/books?id=FgMsCwAAQBAJ&pg=PA41).
An advantage of this format is that it precisely represents the `:float64` and can
reliably (and efficiently) be parsed back, i.e. `d.show-hex.parse-float64 == Just(d)`.
The significant is the _hexadecimal_ fraction while the
exponent after the `p` is the _decimal_ power of 2.
 For example, ``0xA.Fp-10`` = (10 + 15/16)&middot;2^-10^  (not 2^-16^!) = 0.01068115234375.
 Equivalently, ``0xA.Fp-10 == 0x5.78p-9 == 0x2.BCp-8 == 0x1.5Ep-7``.
```
> flt-min.show-hex
"0x1.0p-1022"
> 0.1.show-hex
"0x1.999999999999Ap-4"
> flt-max.show-hex
"0x1.FFFFFFFFFFFFFp+1023"
> -0.0.show-hex
"-0x0.0p+0"
> nan.show-hex
"NaN"
> 0.01068115234375.show-hex
"0x1.5Ep-7"
```
.
*/

kk_string_t kk_std_num_float64_show_hex(double d, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (d : float64, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  bool b_10094 = isfinite(d); /*bool*/;
  if (b_10094) {
    kk_std_core_types__tuple2 _match_x595 = kk_std_num_float64_decode(d, _ctx); /*(int, int)*/;
    {
      kk_box_t _box_x55 = _match_x595.fst;
      kk_box_t _box_x56 = _match_x595.snd;
      kk_integer_t m = kk_integer_unbox(_box_x55, _ctx);
      kk_integer_t e = kk_integer_unbox(_box_x56, _ctx);
      kk_integer_dup(e, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__tuple2_drop(_match_x595, _ctx);
      kk_string_t man;
      kk_integer_t _x_x857 = kk_integer_abs(m,kk_context()); /*int*/
      kk_std_core_types__optional _x_x858 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 7*/
      kk_std_core_types__optional _x_x859;
      kk_box_t _x_x860;
      bool _x_x861;
      if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
        kk_box_t _box_x58 = use_capitals._cons._Optional.value;
        bool _uniq_use_capitals_2400 = kk_bool_unbox(_box_x58);
        kk_std_core_types__optional_drop(use_capitals, _ctx);
        _x_x861 = _uniq_use_capitals_2400; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(use_capitals, _ctx);
        _x_x861 = true; /*bool*/
      }
      _x_x860 = kk_bool_box(_x_x861); /*7*/
      _x_x859 = kk_std_core_types__new_Optional(_x_x860, _ctx); /*? 7*/
      kk_std_core_types__optional _x_x862;
      kk_box_t _x_x863;
      kk_string_t _x_x864 = kk_string_empty(); /*string*/
      _x_x863 = kk_string_box(_x_x864); /*7*/
      _x_x862 = kk_std_core_types__new_Optional(_x_x863, _ctx); /*? 7*/
      man = kk_std_core_show_show_hex(_x_x857, _x_x858, _x_x859, _x_x862, _ctx); /*string*/
      kk_integer_t x_0_10097;
      kk_string_t _x_x866 = kk_string_dup(man, _ctx); /*string*/
      x_0_10097 = kk_std_core_string_count(_x_x866, _ctx); /*int*/
      kk_integer_t y_10096;
      kk_integer_t _x_x867 = kk_integer_add_small_const(x_0_10097, -1, _ctx); /*int*/
      y_10096 = kk_integer_mul((kk_integer_from_small(4)),_x_x867,kk_context()); /*int*/
      kk_integer_t exp0 = kk_integer_add(e,y_10096,kk_context()); /*int*/;
      kk_string_t exp;
      kk_string_t _x_x868;
      bool _match_x603 = kk_integer_gte_borrow(exp0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x603) {
        kk_define_string_literal(, _s_x869, 1, "+", _ctx)
        _x_x868 = kk_string_dup(_s_x869, _ctx); /*string*/
      }
      else {
        _x_x868 = kk_string_empty(); /*string*/
      }
      kk_string_t _x_x871 = kk_std_core_int_show(exp0, _ctx); /*string*/
      exp = kk_std_core_types__lp__plus__plus__rp_(_x_x868, _x_x871, _ctx); /*string*/
      kk_string_t s_10099;
      kk_string_t _x_x872;
      kk_string_t _x_x873 = kk_string_dup(man, _ctx); /*string*/
      _x_x872 = kk_std_core_sslice_tail(_x_x873, _ctx); /*string*/
      kk_string_t _x_x874;
      kk_define_string_literal(, _s_x875, 1, "0", _ctx)
      _x_x874 = kk_string_dup(_s_x875, _ctx); /*string*/
      s_10099 = kk_std_core_sslice_trim_right(_x_x872, _x_x874, _ctx); /*string*/
      kk_integer_t width_0_10100;
      bool _match_x600;
      kk_integer_t _brw_x601;
      if (kk_std_core_types__is_Optional(width, _ctx)) {
        kk_box_t _box_x64 = width._cons._Optional.value;
        kk_integer_t _uniq_width_2396 = kk_integer_unbox(_box_x64, _ctx);
        kk_integer_dup(_uniq_width_2396, _ctx);
        _brw_x601 = _uniq_width_2396; /*int*/
      }
      else {
        _brw_x601 = kk_integer_from_small(1); /*int*/
      }
      bool _brw_x602 = kk_integer_gte_borrow((kk_integer_from_small(1)),_brw_x601,kk_context()); /*bool*/;
      kk_integer_drop(_brw_x601, _ctx);
      _match_x600 = _brw_x602; /*bool*/
      if (_match_x600) {
        kk_std_core_types__optional_drop(width, _ctx);
        width_0_10100 = kk_integer_from_small(1); /*int*/
      }
      else {
        if (kk_std_core_types__is_Optional(width, _ctx)) {
          kk_box_t _box_x65 = width._cons._Optional.value;
          kk_integer_t _uniq_width_2396_0 = kk_integer_unbox(_box_x65, _ctx);
          kk_integer_dup(_uniq_width_2396_0, _ctx);
          kk_std_core_types__optional_drop(width, _ctx);
          width_0_10100 = _uniq_width_2396_0; /*int*/
        }
        else {
          kk_std_core_types__optional_drop(width, _ctx);
          width_0_10100 = kk_integer_from_small(1); /*int*/
        }
      }
      kk_integer_t n;
      kk_string_t _x_x876 = kk_string_dup(s_10099, _ctx); /*string*/
      n = kk_std_core_string_count(_x_x876, _ctx); /*int*/
      kk_string_t frac;
      bool _match_x599 = kk_integer_lte_borrow(width_0_10100,n,kk_context()); /*bool*/;
      if (_match_x599) {
        kk_integer_drop(width_0_10100, _ctx);
        kk_integer_drop(n, _ctx);
        frac = s_10099; /*string*/
      }
      else {
        kk_string_t s_0_10015 = kk_std_core_string_char_fs_string('0', _ctx); /*string*/;
        kk_integer_t n_0_10016 = kk_integer_sub(width_0_10100,n,kk_context()); /*int*/;
        kk_string_t _x_x877 = kk_std_core_string_repeatz(s_0_10015, kk_std_core_int_ssize__t(n_0_10016, _ctx), _ctx); /*string*/
        frac = kk_std_core_types__lp__plus__plus__rp_(s_10099, _x_x877, _ctx); /*string*/
      }
      kk_string_t sign_0;
      bool _match_x596 = (d < (0x0p+0)); /*bool*/;
      if (_match_x596) {
        kk_define_string_literal(, _s_x878, 1, "-", _ctx)
        sign_0 = kk_string_dup(_s_x878, _ctx); /*string*/
      }
      else {
        bool _match_x597 = (d == (0x0p+0)); /*bool*/;
        if (_match_x597) {
          bool _match_x598;
          double _x_x879 = (0x1p0 / d); /*float64*/
          _match_x598 = (isinf(_x_x879) && signbit(_x_x879)); /*bool*/
          if (_match_x598) {
            kk_define_string_literal(, _s_x880, 1, "-", _ctx)
            sign_0 = kk_string_dup(_s_x880, _ctx); /*string*/
          }
          else {
            sign_0 = kk_string_empty(); /*string*/
          }
        }
        else {
          sign_0 = kk_string_empty(); /*string*/
        }
      }
      kk_string_t _x_x883;
      kk_string_t _x_x884;
      if (kk_std_core_types__is_Optional(pre, _ctx)) {
        kk_box_t _box_x66 = pre._cons._Optional.value;
        kk_string_t _uniq_pre_2404 = kk_string_unbox(_box_x66);
        kk_string_dup(_uniq_pre_2404, _ctx);
        kk_std_core_types__optional_drop(pre, _ctx);
        _x_x884 = _uniq_pre_2404; /*string*/
      }
      else {
        kk_std_core_types__optional_drop(pre, _ctx);
        kk_define_string_literal(, _s_x885, 2, "0x", _ctx)
        _x_x884 = kk_string_dup(_s_x885, _ctx); /*string*/
      }
      kk_string_t _x_x886;
      kk_string_t _x_x887 = kk_std_core_sslice_head(man, _ctx); /*string*/
      kk_string_t _x_x888;
      kk_string_t _x_x889;
      kk_define_string_literal(, _s_x890, 1, ".", _ctx)
      _x_x889 = kk_string_dup(_s_x890, _ctx); /*string*/
      kk_string_t _x_x891;
      kk_string_t _x_x892;
      kk_string_t _x_x893;
      kk_define_string_literal(, _s_x894, 1, "p", _ctx)
      _x_x893 = kk_string_dup(_s_x894, _ctx); /*string*/
      _x_x892 = kk_std_core_types__lp__plus__plus__rp_(_x_x893, exp, _ctx); /*string*/
      _x_x891 = kk_std_core_types__lp__plus__plus__rp_(frac, _x_x892, _ctx); /*string*/
      _x_x888 = kk_std_core_types__lp__plus__plus__rp_(_x_x889, _x_x891, _ctx); /*string*/
      _x_x886 = kk_std_core_types__lp__plus__plus__rp_(_x_x887, _x_x888, _ctx); /*string*/
      _x_x883 = kk_std_core_types__lp__plus__plus__rp_(_x_x884, _x_x886, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(sign_0, _x_x883, _ctx);
    }
  }
  {
    kk_std_core_types__optional_drop(width, _ctx);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    return kk_std_num_float64_show(d, kk_std_core_types__new_None(_ctx), _ctx);
  }
}
 
// monadic lift

double kk_std_num_float64__mlift_phexdouble_10402(kk_string_t frac, kk_string_t man, kk_integer_t _c_x10360, kk_context_t* _ctx) { /* (frac : string, man : string, int) -> float64 */ 
  kk_string_t _x_x1_0_10396;
  kk_string_t _x_x895 = kk_string_dup(frac, _ctx); /*string*/
  _x_x1_0_10396 = kk_std_core_types__lp__plus__plus__rp_(man, _x_x895, _ctx); /*string*/
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
  kk_std_core_types__maybe x = kk_std_core_int_xparse(_x_x1_0_10396, true, _ctx); /*maybe<int>*/;
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
  kk_unit_t keep_0 = kk_Unit;
  kk_evv_set(w_0,kk_context());
  kk_integer_t y_10391;
  kk_integer_t _x_x896 = kk_std_core_string_count(frac, _ctx); /*int*/
  y_10391 = kk_integer_mul((kk_integer_from_small(4)),_x_x896,kk_context()); /*int*/
  kk_integer_t e = kk_integer_sub(_c_x10360,y_10391,kk_context()); /*int*/;
  kk_evv_t w_1 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
  double x_2;
  double _x_x897;
  kk_integer_t _x_x898;
  if (kk_std_core_types__is_Nothing(x, _ctx)) {
    _x_x898 = kk_integer_from_small(0); /*int*/
  }
  else {
    kk_box_t _box_x67 = x._cons.Just.value;
    kk_integer_t x_1 = kk_integer_unbox(_box_x67, _ctx);
    kk_integer_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(x, _ctx);
    _x_x898 = x_1; /*int*/
  }
  _x_x897 = kk_integer_as_double(_x_x898,kk_context()); /*float64*/
  x_2 = kk_std_num_float64_ldexp(_x_x897, e, _ctx); /*float64*/
  kk_unit_t keep_1 = kk_Unit;
  kk_evv_set(w_1,kk_context());
  return x_2;
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10403_fun902__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10403_fun902(kk_function_t _fself, kk_box_t _b_x69, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10403_fun902(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10403_fun902, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10403_fun902(kk_function_t _fself, kk_box_t _b_x69, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x903;
  kk_char_t _x_x904 = kk_char_unbox(_b_x69, KK_OWNED, _ctx); /*char*/
  _x_x903 = kk_std_num_float64__mlift_phexdouble_10401(_x_x904, _ctx); /*int*/
  return kk_integer_box(_x_x903, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10403_fun906__t {
  struct kk_function_s _base;
  kk_string_t frac;
  kk_string_t man;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10403_fun906(kk_function_t _fself, kk_box_t _b_x72, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10403_fun906(kk_string_t frac, kk_string_t man, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10403_fun906__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_phexdouble_10403_fun906__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_phexdouble_10403_fun906, kk_context());
  _self->frac = frac;
  _self->man = man;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10403_fun906(kk_function_t _fself, kk_box_t _b_x72, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10403_fun906__t* _self = kk_function_as(struct kk_std_num_float64__mlift_phexdouble_10403_fun906__t*, _fself, _ctx);
  kk_string_t frac = _self->frac; /* string */
  kk_string_t man = _self->man; /* string */
  kk_drop_match(_self, {kk_string_dup(frac, _ctx);kk_string_dup(man, _ctx);}, {}, _ctx)
  kk_integer_t _c_x10360_74 = kk_integer_unbox(_b_x72, _ctx); /*int*/;
  double _x_x907 = kk_std_num_float64__mlift_phexdouble_10402(frac, man, _c_x10360_74, _ctx); /*float64*/
  return kk_double_box(_x_x907, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10403(kk_string_t frac, kk_string_t man, bool _y_x10357, kk_context_t* _ctx) { /* (frac : string, man : string, bool) -> std/text/parse/parse float64 */ 
  kk_integer_t x_10439;
  if (_y_x10357) {
    kk_char_t x_0_10441;
    kk_string_t _x_x899;
    kk_define_string_literal(, _s_x900, 2, "pP", _ctx)
    _x_x899 = kk_string_dup(_s_x900, _ctx); /*string*/
    x_0_10441 = kk_std_text_parse_one_of(_x_x899, _ctx); /*char*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x901 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10403_fun902(_ctx), _ctx); /*2978*/
      x_10439 = kk_integer_unbox(_x_x901, _ctx); /*int*/
    }
    else {
      x_10439 = kk_std_text_parse_pint(_ctx); /*int*/
    }
  }
  else {
    x_10439 = kk_integer_from_small(0); /*int*/
  }
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10439, _ctx);
    kk_box_t _x_x905 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10403_fun906(frac, man, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x905, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10402(frac, man, x_10439, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10405_fun913__t {
  struct kk_function_s _base;
  kk_string_t frac;
  kk_string_t man;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10405_fun913(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10405_fun913(kk_string_t frac, kk_string_t man, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10405_fun913__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_phexdouble_10405_fun913__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_phexdouble_10405_fun913, kk_context());
  _self->frac = frac;
  _self->man = man;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10405_fun913(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10405_fun913__t* _self = kk_function_as(struct kk_std_num_float64__mlift_phexdouble_10405_fun913__t*, _fself, _ctx);
  kk_string_t frac = _self->frac; /* string */
  kk_string_t man = _self->man; /* string */
  kk_drop_match(_self, {kk_string_dup(frac, _ctx);kk_string_dup(man, _ctx);}, {}, _ctx)
  bool _y_x10357_84 = kk_bool_unbox(_b_x82); /*bool*/;
  double _x_x914 = kk_std_num_float64__mlift_phexdouble_10403(frac, man, _y_x10357_84, _ctx); /*float64*/
  return kk_double_box(_x_x914, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10405(kk_string_t man, kk_string_t _c_x10356, kk_context_t* _ctx) { /* (man : string, string) -> float64 */ 
  kk_string_t frac;
  kk_string_t _x_x908;
  kk_define_string_literal(, _s_x909, 1, "0", _ctx)
  _x_x908 = kk_string_dup(_s_x909, _ctx); /*string*/
  frac = kk_std_core_sslice_trim_right(_c_x10356, _x_x908, _ctx); /*string*/
  kk_std_core_hnd__ev ev_10445 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_10443;
  kk_box_t _x_x910;
  {
    struct kk_std_core_hnd_Ev* _con_x911 = kk_std_core_hnd__as_Ev(ev_10445, _ctx);
    kk_box_t _box_x75 = _con_x911->hnd;
    int32_t m = _con_x911->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x75, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x591;
    kk_std_core_hnd__clause0 _brw_x592 = kk_std_text_parse__select_pick(h, _ctx); /*hnd/clause0<bool,std/text/parse/parse,711,712>*/;
    kk_std_text_parse__parse_drop(h, _ctx);
    _match_x591 = _brw_x592; /*hnd/clause0<bool,std/text/parse/parse,711,712>*/
    {
      kk_function_t _fun_unbox_x78 = _match_x591.clause;
      _x_x910 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x78, (_fun_unbox_x78, m, ev_10445, _ctx), _ctx); /*35*/
    }
  }
  x_10443 = kk_bool_unbox(_x_x910); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x912 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10405_fun913(frac, man, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x912, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10403(frac, man, x_10443, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10406_fun916__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10406_fun916(kk_function_t _fself, kk_box_t _b_x86, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10406_fun916(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10406_fun916, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10406_fun916(kk_function_t _fself, kk_box_t _b_x86, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x917;
  kk_char_t _x_x918 = kk_char_unbox(_b_x86, KK_OWNED, _ctx); /*char*/
  _x_x917 = kk_std_num_float64__mlift_phexdouble_10404(_x_x918, _ctx); /*string*/
  return kk_string_box(_x_x917);
}


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10406_fun921__t {
  struct kk_function_s _base;
  kk_string_t man;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10406_fun921(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10406_fun921(kk_string_t man, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10406_fun921__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_phexdouble_10406_fun921__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_phexdouble_10406_fun921, kk_context());
  _self->man = man;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10406_fun921(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10406_fun921__t* _self = kk_function_as(struct kk_std_num_float64__mlift_phexdouble_10406_fun921__t*, _fself, _ctx);
  kk_string_t man = _self->man; /* string */
  kk_drop_match(_self, {kk_string_dup(man, _ctx);}, {}, _ctx)
  kk_string_t _c_x10356_91 = kk_string_unbox(_b_x89); /*string*/;
  double _x_x922 = kk_std_num_float64__mlift_phexdouble_10405(man, _c_x10356_91, _ctx); /*float64*/
  return kk_double_box(_x_x922, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10406(kk_string_t man, bool _y_x10353, kk_context_t* _ctx) { /* (man : string, bool) -> std/text/parse/parse float64 */ 
  kk_string_t x_10447;
  if (_y_x10353) {
    kk_char_t x_0_10449 = kk_std_text_parse_char('.', _ctx); /*char*/;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x915 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10406_fun916(_ctx), _ctx); /*2978*/
      x_10447 = kk_string_unbox(_x_x915); /*string*/
    }
    else {
      x_10447 = kk_std_text_parse_hex_digits(_ctx); /*string*/
    }
  }
  else {
    x_10447 = kk_string_empty(); /*string*/
  }
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10447, _ctx);
    kk_box_t _x_x920 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10406_fun921(man, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x920, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10405(man, x_10447, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10407_fun926__t {
  struct kk_function_s _base;
  kk_string_t man;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10407_fun926(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10407_fun926(kk_string_t man, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10407_fun926__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_phexdouble_10407_fun926__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_phexdouble_10407_fun926, kk_context());
  _self->man = man;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10407_fun926(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10407_fun926__t* _self = kk_function_as(struct kk_std_num_float64__mlift_phexdouble_10407_fun926__t*, _fself, _ctx);
  kk_string_t man = _self->man; /* string */
  kk_drop_match(_self, {kk_string_dup(man, _ctx);}, {}, _ctx)
  bool _y_x10353_101 = kk_bool_unbox(_b_x99); /*bool*/;
  double _x_x927 = kk_std_num_float64__mlift_phexdouble_10406(man, _y_x10353_101, _ctx); /*float64*/
  return kk_double_box(_x_x927, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10407(kk_string_t man, kk_context_t* _ctx) { /* (man : string) -> std/text/parse/parse float64 */ 
  kk_std_core_hnd__ev ev_10453 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_10451;
  kk_box_t _x_x923;
  {
    struct kk_std_core_hnd_Ev* _con_x924 = kk_std_core_hnd__as_Ev(ev_10453, _ctx);
    kk_box_t _box_x92 = _con_x924->hnd;
    int32_t m = _con_x924->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x92, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x586;
    kk_std_core_hnd__clause0 _brw_x587 = kk_std_text_parse__select_pick(h, _ctx); /*hnd/clause0<bool,std/text/parse/parse,711,712>*/;
    kk_std_text_parse__parse_drop(h, _ctx);
    _match_x586 = _brw_x587; /*hnd/clause0<bool,std/text/parse/parse,711,712>*/
    {
      kk_function_t _fun_unbox_x95 = _match_x586.clause;
      _x_x923 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x95, (_fun_unbox_x95, m, ev_10453, _ctx), _ctx); /*35*/
    }
  }
  x_10451 = kk_bool_unbox(_x_x923); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x925 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10407_fun926(man, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x925, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10406(man, x_10451, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10408_fun929__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10408_fun929(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10408_fun929(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10408_fun929, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10408_fun929(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x930;
  kk_string_t _x_x931 = kk_string_unbox(_b_x103); /*string*/
  _x_x930 = kk_std_num_float64__mlift_phexdouble_10407(_x_x931, _ctx); /*float64*/
  return kk_double_box(_x_x930, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10408(kk_char_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : char) -> std/text/parse/parse float64 */ 
  kk_string_t x_10455 = kk_std_text_parse_hex_digits(_ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10455, _ctx);
    kk_box_t _x_x928 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10408_fun929(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x928, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10407(x_10455, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10409_fun935__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10409_fun935(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10409_fun935(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10409_fun935, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10409_fun935(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x936;
  kk_char_t _x_x937 = kk_char_unbox(_b_x106, KK_OWNED, _ctx); /*char*/
  _x_x936 = kk_std_num_float64__mlift_phexdouble_10408(_x_x937, _ctx); /*float64*/
  return kk_double_box(_x_x936, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10409(kk_char_t wild__, kk_context_t* _ctx) { /* (wild_ : char) -> std/text/parse/parse float64 */ 
  kk_char_t x_10457;
  kk_string_t _x_x932;
  kk_define_string_literal(, _s_x933, 2, "xX", _ctx)
  _x_x932 = kk_string_dup(_s_x933, _ctx); /*string*/
  x_10457 = kk_std_text_parse_one_of(_x_x932, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x934 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10409_fun935(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x934, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10408(x_10457, _ctx);
  }
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun939__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun939(kk_function_t _fself, kk_box_t _b_x109, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun939(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun939, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun939(kk_function_t _fself, kk_box_t _b_x109, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x940;
  kk_char_t _x_x941 = kk_char_unbox(_b_x109, KK_OWNED, _ctx); /*char*/
  _x_x940 = kk_std_num_float64__mlift_phexdouble_10409(_x_x941, _ctx); /*float64*/
  return kk_double_box(_x_x940, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun945__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun945(kk_function_t _fself, kk_box_t _b_x111, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun945(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun945, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun945(kk_function_t _fself, kk_box_t _b_x111, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x946;
  kk_char_t _x_x947 = kk_char_unbox(_b_x111, KK_OWNED, _ctx); /*char*/
  _x_x946 = kk_std_num_float64__mlift_phexdouble_10408(_x_x947, _ctx); /*float64*/
  return kk_double_box(_x_x946, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun949__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun949(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun949(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun949, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun949(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x950;
  kk_string_t _x_x951 = kk_string_unbox(_b_x113); /*string*/
  _x_x950 = kk_std_num_float64__mlift_phexdouble_10407(_x_x951, _ctx); /*float64*/
  return kk_double_box(_x_x950, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun955__t {
  struct kk_function_s _base;
  kk_string_t x_1_10465;
};
static kk_box_t kk_std_num_float64_phexdouble_fun955(kk_function_t _fself, kk_box_t _b_x121, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun955(kk_string_t x_1_10465, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun955__t* _self = kk_function_alloc_as(struct kk_std_num_float64_phexdouble_fun955__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_phexdouble_fun955, kk_context());
  _self->x_1_10465 = x_1_10465;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun955(kk_function_t _fself, kk_box_t _b_x121, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun955__t* _self = kk_function_as(struct kk_std_num_float64_phexdouble_fun955__t*, _fself, _ctx);
  kk_string_t x_1_10465 = _self->x_1_10465; /* string */
  kk_drop_match(_self, {kk_string_dup(x_1_10465, _ctx);}, {}, _ctx)
  bool _y_x10353_148 = kk_bool_unbox(_b_x121); /*bool*/;
  double _x_x956 = kk_std_num_float64__mlift_phexdouble_10406(x_1_10465, _y_x10353_148, _ctx); /*float64*/
  return kk_double_box(_x_x956, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun958__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun958(kk_function_t _fself, kk_box_t _b_x123, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun958(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun958, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun958(kk_function_t _fself, kk_box_t _b_x123, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x959;
  kk_char_t _x_x960 = kk_char_unbox(_b_x123, KK_OWNED, _ctx); /*char*/
  _x_x959 = kk_std_num_float64__mlift_phexdouble_10404(_x_x960, _ctx); /*string*/
  return kk_string_box(_x_x959);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun963__t {
  struct kk_function_s _base;
  kk_string_t x_1_10465;
};
static kk_box_t kk_std_num_float64_phexdouble_fun963(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun963(kk_string_t x_1_10465, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun963__t* _self = kk_function_alloc_as(struct kk_std_num_float64_phexdouble_fun963__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_phexdouble_fun963, kk_context());
  _self->x_1_10465 = x_1_10465;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun963(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun963__t* _self = kk_function_as(struct kk_std_num_float64_phexdouble_fun963__t*, _fself, _ctx);
  kk_string_t x_1_10465 = _self->x_1_10465; /* string */
  kk_drop_match(_self, {kk_string_dup(x_1_10465, _ctx);}, {}, _ctx)
  kk_string_t _c_x10356_149 = kk_string_unbox(_b_x126); /*string*/;
  double _x_x964 = kk_std_num_float64__mlift_phexdouble_10405(x_1_10465, _c_x10356_149, _ctx); /*float64*/
  return kk_double_box(_x_x964, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun970__t {
  struct kk_function_s _base;
  kk_string_t frac;
  kk_string_t x_1_10465;
};
static kk_box_t kk_std_num_float64_phexdouble_fun970(kk_function_t _fself, kk_box_t _b_x134, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun970(kk_string_t frac, kk_string_t x_1_10465, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun970__t* _self = kk_function_alloc_as(struct kk_std_num_float64_phexdouble_fun970__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_phexdouble_fun970, kk_context());
  _self->frac = frac;
  _self->x_1_10465 = x_1_10465;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun970(kk_function_t _fself, kk_box_t _b_x134, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun970__t* _self = kk_function_as(struct kk_std_num_float64_phexdouble_fun970__t*, _fself, _ctx);
  kk_string_t frac = _self->frac; /* string */
  kk_string_t x_1_10465 = _self->x_1_10465; /* string */
  kk_drop_match(_self, {kk_string_dup(frac, _ctx);kk_string_dup(x_1_10465, _ctx);}, {}, _ctx)
  bool _y_x10357_150 = kk_bool_unbox(_b_x134); /*bool*/;
  double _x_x971 = kk_std_num_float64__mlift_phexdouble_10403(frac, x_1_10465, _y_x10357_150, _ctx); /*float64*/
  return kk_double_box(_x_x971, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun975__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun975(kk_function_t _fself, kk_box_t _b_x136, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun975(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun975, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun975(kk_function_t _fself, kk_box_t _b_x136, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x976;
  kk_char_t _x_x977 = kk_char_unbox(_b_x136, KK_OWNED, _ctx); /*char*/
  _x_x976 = kk_std_num_float64__mlift_phexdouble_10401(_x_x977, _ctx); /*int*/
  return kk_integer_box(_x_x976, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun979__t {
  struct kk_function_s _base;
  kk_string_t frac;
  kk_string_t x_1_10465;
};
static kk_box_t kk_std_num_float64_phexdouble_fun979(kk_function_t _fself, kk_box_t _b_x139, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun979(kk_string_t frac, kk_string_t x_1_10465, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun979__t* _self = kk_function_alloc_as(struct kk_std_num_float64_phexdouble_fun979__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_phexdouble_fun979, kk_context());
  _self->frac = frac;
  _self->x_1_10465 = x_1_10465;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun979(kk_function_t _fself, kk_box_t _b_x139, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun979__t* _self = kk_function_as(struct kk_std_num_float64_phexdouble_fun979__t*, _fself, _ctx);
  kk_string_t frac = _self->frac; /* string */
  kk_string_t x_1_10465 = _self->x_1_10465; /* string */
  kk_drop_match(_self, {kk_string_dup(frac, _ctx);kk_string_dup(x_1_10465, _ctx);}, {}, _ctx)
  kk_integer_t _c_x10360_151 = kk_integer_unbox(_b_x139, _ctx); /*int*/;
  double _x_x980 = kk_std_num_float64__mlift_phexdouble_10402(frac, x_1_10465, _c_x10360_151, _ctx); /*float64*/
  return kk_double_box(_x_x980, _ctx);
}

double kk_std_num_float64_phexdouble(kk_context_t* _ctx) { /* () -> std/text/parse/parse float64 */ 
  kk_char_t x_10459 = kk_std_text_parse_char('0', _ctx); /*char*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x938 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun939(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x938, KK_OWNED, _ctx);
  }
  {
    kk_char_t x_0_10462;
    kk_string_t _x_x942;
    kk_define_string_literal(, _s_x943, 2, "xX", _ctx)
    _x_x942 = kk_string_dup(_s_x943, _ctx); /*string*/
    x_0_10462 = kk_std_text_parse_one_of(_x_x942, _ctx); /*char*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x944 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun945(_ctx), _ctx); /*2978*/
      return kk_double_unbox(_x_x944, KK_OWNED, _ctx);
    }
    {
      kk_string_t x_1_10465 = kk_std_text_parse_hex_digits(_ctx); /*string*/;
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_1_10465, _ctx);
        kk_box_t _x_x948 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun949(_ctx), _ctx); /*2978*/
        return kk_double_unbox(_x_x948, KK_OWNED, _ctx);
      }
      {
        kk_std_core_hnd__ev ev_10471 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
        bool x_2_10468;
        kk_box_t _x_x952;
        {
          struct kk_std_core_hnd_Ev* _con_x953 = kk_std_core_hnd__as_Ev(ev_10471, _ctx);
          kk_box_t _box_x114 = _con_x953->hnd;
          int32_t m = _con_x953->marker;
          kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x114, KK_BORROWED, _ctx);
          kk_std_text_parse__parse_dup(h, _ctx);
          kk_std_core_hnd__clause0 _match_x581;
          kk_std_core_hnd__clause0 _brw_x582 = kk_std_text_parse__select_pick(h, _ctx); /*hnd/clause0<bool,std/text/parse/parse,711,712>*/;
          kk_std_text_parse__parse_drop(h, _ctx);
          _match_x581 = _brw_x582; /*hnd/clause0<bool,std/text/parse/parse,711,712>*/
          {
            kk_function_t _fun_unbox_x117 = _match_x581.clause;
            _x_x952 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x117, (_fun_unbox_x117, m, ev_10471, _ctx), _ctx); /*35*/
          }
        }
        x_2_10468 = kk_bool_unbox(_x_x952); /*bool*/
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x954 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun955(x_1_10465, _ctx), _ctx); /*2978*/
          return kk_double_unbox(_x_x954, KK_OWNED, _ctx);
        }
        {
          kk_string_t x_3_10473;
          if (x_2_10468) {
            kk_char_t x_4_10476 = kk_std_text_parse_char('.', _ctx); /*char*/;
            if (kk_yielding(kk_context())) {
              kk_box_t _x_x957 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun958(_ctx), _ctx); /*2978*/
              x_3_10473 = kk_string_unbox(_x_x957); /*string*/
            }
            else {
              x_3_10473 = kk_std_text_parse_hex_digits(_ctx); /*string*/
            }
          }
          else {
            x_3_10473 = kk_string_empty(); /*string*/
          }
          if (kk_yielding(kk_context())) {
            kk_string_drop(x_3_10473, _ctx);
            kk_box_t _x_x962 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun963(x_1_10465, _ctx), _ctx); /*2978*/
            return kk_double_unbox(_x_x962, KK_OWNED, _ctx);
          }
          {
            kk_string_t frac;
            kk_string_t _x_x965;
            kk_define_string_literal(, _s_x966, 1, "0", _ctx)
            _x_x965 = kk_string_dup(_s_x966, _ctx); /*string*/
            frac = kk_std_core_sslice_trim_right(x_3_10473, _x_x965, _ctx); /*string*/
            kk_std_core_hnd__ev ev_0_10481 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
            bool x_5_10478;
            kk_box_t _x_x967;
            {
              struct kk_std_core_hnd_Ev* _con_x968 = kk_std_core_hnd__as_Ev(ev_0_10481, _ctx);
              kk_box_t _box_x127 = _con_x968->hnd;
              int32_t m_0 = _con_x968->marker;
              kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x127, KK_BORROWED, _ctx);
              kk_std_text_parse__parse_dup(h_0, _ctx);
              kk_std_core_hnd__clause0 _match_x578;
              kk_std_core_hnd__clause0 _brw_x579 = kk_std_text_parse__select_pick(h_0, _ctx); /*hnd/clause0<bool,std/text/parse/parse,711,712>*/;
              kk_std_text_parse__parse_drop(h_0, _ctx);
              _match_x578 = _brw_x579; /*hnd/clause0<bool,std/text/parse/parse,711,712>*/
              {
                kk_function_t _fun_unbox_x130 = _match_x578.clause;
                _x_x967 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x130, (_fun_unbox_x130, m_0, ev_0_10481, _ctx), _ctx); /*35*/
              }
            }
            x_5_10478 = kk_bool_unbox(_x_x967); /*bool*/
            if (kk_yielding(kk_context())) {
              kk_box_t _x_x969 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun970(frac, x_1_10465, _ctx), _ctx); /*2978*/
              return kk_double_unbox(_x_x969, KK_OWNED, _ctx);
            }
            {
              kk_integer_t x_6_10483;
              if (x_5_10478) {
                kk_char_t x_7_10486;
                kk_string_t _x_x972;
                kk_define_string_literal(, _s_x973, 2, "pP", _ctx)
                _x_x972 = kk_string_dup(_s_x973, _ctx); /*string*/
                x_7_10486 = kk_std_text_parse_one_of(_x_x972, _ctx); /*char*/
                if (kk_yielding(kk_context())) {
                  kk_box_t _x_x974 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun975(_ctx), _ctx); /*2978*/
                  x_6_10483 = kk_integer_unbox(_x_x974, _ctx); /*int*/
                }
                else {
                  x_6_10483 = kk_std_text_parse_pint(_ctx); /*int*/
                }
              }
              else {
                x_6_10483 = kk_integer_from_small(0); /*int*/
              }
              if (kk_yielding(kk_context())) {
                kk_integer_drop(x_6_10483, _ctx);
                kk_box_t _x_x978 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun979(frac, x_1_10465, _ctx), _ctx); /*2978*/
                return kk_double_unbox(_x_x978, KK_OWNED, _ctx);
              }
              {
                kk_string_t _x_x1_0_10396;
                kk_string_t _x_x981 = kk_string_dup(frac, _ctx); /*string*/
                _x_x1_0_10396 = kk_std_core_types__lp__plus__plus__rp_(x_1_10465, _x_x981, _ctx); /*string*/
                kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
                kk_std_core_types__maybe x_8 = kk_std_core_int_xparse(_x_x1_0_10396, true, _ctx); /*maybe<int>*/;
                kk_unit_t keep = kk_Unit;
                kk_evv_set(w,kk_context());
                kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
                kk_unit_t keep_0 = kk_Unit;
                kk_evv_set(w_0,kk_context());
                kk_integer_t y_10391;
                kk_integer_t _x_x982 = kk_std_core_string_count(frac, _ctx); /*int*/
                y_10391 = kk_integer_mul((kk_integer_from_small(4)),_x_x982,kk_context()); /*int*/
                kk_integer_t e = kk_integer_sub(x_6_10483,y_10391,kk_context()); /*int*/;
                kk_evv_t w_1 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/text/parse/parse>*/;
                double x_11;
                double _x_x983;
                kk_integer_t _x_x984;
                if (kk_std_core_types__is_Nothing(x_8, _ctx)) {
                  _x_x984 = kk_integer_from_small(0); /*int*/
                }
                else {
                  kk_box_t _box_x140 = x_8._cons.Just.value;
                  kk_integer_t x_10 = kk_integer_unbox(_box_x140, _ctx);
                  kk_integer_dup(x_10, _ctx);
                  kk_std_core_types__maybe_drop(x_8, _ctx);
                  _x_x984 = x_10; /*int*/
                }
                _x_x983 = kk_integer_as_double(_x_x984,kk_context()); /*float64*/
                x_11 = kk_std_num_float64_ldexp(_x_x983, e, _ctx); /*float64*/
                kk_unit_t keep_1 = kk_Unit;
                kk_evv_set(w_1,kk_context());
                return x_11;
              }
            }
          }
        }
      }
    }
  }
}
 
// Return `nan` on failure

double kk_std_num_float64_prim_parse_float64(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> float64 */ 
  return kk_prim_parse_double(s,kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10411_fun986__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10411_fun986(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10411_fun986(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10411_fun986, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10411_fun986(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x987;
  kk_string_t _x_x988 = kk_string_unbox(_b_x154); /*string*/
  _x_x987 = kk_std_num_float64_prim_parse_float64(_x_x988, _ctx); /*float64*/
  return kk_double_box(_x_x987, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10411(kk_std_core_sslice__sslice cur, kk_integer_t _c_x10370, kk_context_t* _ctx) { /* (cur : sslice/sslice, int) -> float64 */ 
  kk_integer_drop(_c_x10370, _ctx);
  kk_string_t _x_x1_10400 = kk_std_core_sslice_string(cur, _ctx); /*string*/;
  kk_box_t _x_x985 = kk_std_core_hnd__open_none1(kk_std_num_float64__new_mlift_pdecdouble_10411_fun986(_ctx), kk_string_box(_x_x1_10400), _ctx); /*8580*/
  return kk_double_unbox(_x_x985, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10412_fun992__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10412_fun992(kk_function_t _fself, kk_box_t _b_x158, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10412_fun992(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10412_fun992, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10412_fun992(kk_function_t _fself, kk_box_t _b_x158, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x993;
  kk_char_t _x_x994 = kk_char_unbox(_b_x158, KK_OWNED, _ctx); /*char*/
  _x_x993 = kk_std_num_float64__mlift_pdecdouble_10410(_x_x994, _ctx); /*int*/
  return kk_integer_box(_x_x993, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10412_fun995__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice cur;
};
static double kk_std_num_float64__mlift_pdecdouble_10412_fun995(kk_function_t _fself, kk_integer_t _c_x10370, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10412_fun995(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10412_fun995__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10412_fun995__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10412_fun995, kk_context());
  _self->cur = cur;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10412_fun997__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10412_fun997(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10412_fun997(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10412_fun997, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10412_fun997(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x998;
  kk_string_t _x_x999 = kk_string_unbox(_b_x162); /*string*/
  _x_x998 = kk_std_num_float64_prim_parse_float64(_x_x999, _ctx); /*float64*/
  return kk_double_box(_x_x998, _ctx);
}
static double kk_std_num_float64__mlift_pdecdouble_10412_fun995(kk_function_t _fself, kk_integer_t _c_x10370, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10412_fun995__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10412_fun995__t*, _fself, _ctx);
  kk_std_core_sslice__sslice cur = _self->cur; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(cur, _ctx);}, {}, _ctx)
  kk_integer_drop(_c_x10370, _ctx);
  kk_string_t _x_x1_10400 = kk_std_core_sslice_string(cur, _ctx); /*string*/;
  kk_box_t _x_x996 = kk_std_core_hnd__open_none1(kk_std_num_float64__new_mlift_pdecdouble_10412_fun997(_ctx), kk_string_box(_x_x1_10400), _ctx); /*8580*/
  return kk_double_unbox(_x_x996, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10412_fun1001__t {
  struct kk_function_s _base;
  kk_function_t next_10498;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10412_fun1001(kk_function_t _fself, kk_box_t _b_x166, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10412_fun1001(kk_function_t next_10498, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10412_fun1001__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10412_fun1001__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10412_fun1001, kk_context());
  _self->next_10498 = next_10498;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10412_fun1001(kk_function_t _fself, kk_box_t _b_x166, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10412_fun1001__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10412_fun1001__t*, _fself, _ctx);
  kk_function_t next_10498 = _self->next_10498; /* (int) -> float64 */
  kk_drop_match(_self, {kk_function_dup(next_10498, _ctx);}, {}, _ctx)
  double _x_x1002;
  kk_integer_t _x_x1003 = kk_integer_unbox(_b_x166, _ctx); /*int*/
  _x_x1002 = kk_function_call(double, (kk_function_t, kk_integer_t, kk_context_t*), next_10498, (next_10498, _x_x1003, _ctx), _ctx); /*float64*/
  return kk_double_box(_x_x1002, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10412(kk_std_core_sslice__sslice cur, bool _y_x10367, kk_context_t* _ctx) { /* (cur : sslice/sslice, bool) -> std/text/parse/parse float64 */ 
  kk_integer_t x_10497;
  if (_y_x10367) {
    kk_char_t x_0_10499;
    kk_string_t _x_x989;
    kk_define_string_literal(, _s_x990, 2, "eE", _ctx)
    _x_x989 = kk_string_dup(_s_x990, _ctx); /*string*/
    x_0_10499 = kk_std_text_parse_one_of(_x_x989, _ctx); /*char*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x991 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10412_fun992(_ctx), _ctx); /*2978*/
      x_10497 = kk_integer_unbox(_x_x991, _ctx); /*int*/
    }
    else {
      x_10497 = kk_std_text_parse_pint(_ctx); /*int*/
    }
  }
  else {
    x_10497 = kk_integer_from_small(0); /*int*/
  }
  kk_function_t next_10498 = kk_std_num_float64__new_mlift_pdecdouble_10412_fun995(cur, _ctx); /*(int) -> float64*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10497, _ctx);
    kk_box_t _x_x1000 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10412_fun1001(next_10498, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1000, KK_OWNED, _ctx);
  }
  {
    return kk_function_call(double, (kk_function_t, kk_integer_t, kk_context_t*), next_10498, (next_10498, x_10497, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10414_fun1009__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice cur;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10414_fun1009(kk_function_t _fself, kk_box_t _b_x175, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10414_fun1009(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10414_fun1009__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10414_fun1009__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10414_fun1009, kk_context());
  _self->cur = cur;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10414_fun1009(kk_function_t _fself, kk_box_t _b_x175, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10414_fun1009__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10414_fun1009__t*, _fself, _ctx);
  kk_std_core_sslice__sslice cur = _self->cur; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(cur, _ctx);}, {}, _ctx)
  bool _y_x10367_177 = kk_bool_unbox(_b_x175); /*bool*/;
  double _x_x1010 = kk_std_num_float64__mlift_pdecdouble_10412(cur, _y_x10367_177, _ctx); /*float64*/
  return kk_double_box(_x_x1010, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10414(kk_std_core_sslice__sslice cur, kk_string_t _c_x10366, kk_context_t* _ctx) { /* (cur : sslice/sslice, string) -> float64 */ 
  kk_string_t frac;
  kk_string_t _x_x1004;
  kk_define_string_literal(, _s_x1005, 1, "0", _ctx)
  _x_x1004 = kk_string_dup(_s_x1005, _ctx); /*string*/
  frac = kk_std_core_sslice_trim_right(_c_x10366, _x_x1004, _ctx); /*string*/
  kk_string_drop(frac, _ctx);
  kk_std_core_hnd__ev ev_10505 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_10503;
  kk_box_t _x_x1006;
  {
    struct kk_std_core_hnd_Ev* _con_x1007 = kk_std_core_hnd__as_Ev(ev_10505, _ctx);
    kk_box_t _box_x168 = _con_x1007->hnd;
    int32_t m = _con_x1007->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x168, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x566;
    kk_std_core_hnd__clause0 _brw_x567 = kk_std_text_parse__select_pick(h, _ctx); /*hnd/clause0<bool,std/text/parse/parse,711,712>*/;
    kk_std_text_parse__parse_drop(h, _ctx);
    _match_x566 = _brw_x567; /*hnd/clause0<bool,std/text/parse/parse,711,712>*/
    {
      kk_function_t _fun_unbox_x171 = _match_x566.clause;
      _x_x1006 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x171, (_fun_unbox_x171, m, ev_10505, _ctx), _ctx); /*35*/
    }
  }
  x_10503 = kk_bool_unbox(_x_x1006); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1008 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10414_fun1009(cur, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1008, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_pdecdouble_10412(cur, x_10503, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10415_fun1012__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10415_fun1012(kk_function_t _fself, kk_box_t _b_x179, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10415_fun1012(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10415_fun1012, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10415_fun1012(kk_function_t _fself, kk_box_t _b_x179, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1013;
  kk_char_t _x_x1014 = kk_char_unbox(_b_x179, KK_OWNED, _ctx); /*char*/
  _x_x1013 = kk_std_num_float64__mlift_pdecdouble_10413(_x_x1014, _ctx); /*string*/
  return kk_string_box(_x_x1013);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10415_fun1017__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice cur;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10415_fun1017(kk_function_t _fself, kk_box_t _b_x182, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10415_fun1017(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10415_fun1017__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10415_fun1017__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10415_fun1017, kk_context());
  _self->cur = cur;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10415_fun1017(kk_function_t _fself, kk_box_t _b_x182, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10415_fun1017__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10415_fun1017__t*, _fself, _ctx);
  kk_std_core_sslice__sslice cur = _self->cur; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(cur, _ctx);}, {}, _ctx)
  kk_string_t _c_x10366_184 = kk_string_unbox(_b_x182); /*string*/;
  double _x_x1018 = kk_std_num_float64__mlift_pdecdouble_10414(cur, _c_x10366_184, _ctx); /*float64*/
  return kk_double_box(_x_x1018, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10415(kk_std_core_sslice__sslice cur, bool _y_x10363, kk_context_t* _ctx) { /* (cur : sslice/sslice, bool) -> std/text/parse/parse float64 */ 
  kk_string_t x_10507;
  if (_y_x10363) {
    kk_char_t x_0_10509 = kk_std_text_parse_char('.', _ctx); /*char*/;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1011 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10415_fun1012(_ctx), _ctx); /*2978*/
      x_10507 = kk_string_unbox(_x_x1011); /*string*/
    }
    else {
      x_10507 = kk_std_text_parse_digits0(_ctx); /*string*/
    }
  }
  else {
    x_10507 = kk_string_empty(); /*string*/
  }
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10507, _ctx);
    kk_box_t _x_x1016 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10415_fun1017(cur, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1016, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_pdecdouble_10414(cur, x_10507, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10416_fun1022__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice cur;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10416_fun1022(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10416_fun1022(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10416_fun1022__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10416_fun1022__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10416_fun1022, kk_context());
  _self->cur = cur;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10416_fun1022(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10416_fun1022__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10416_fun1022__t*, _fself, _ctx);
  kk_std_core_sslice__sslice cur = _self->cur; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(cur, _ctx);}, {}, _ctx)
  bool _y_x10363_194 = kk_bool_unbox(_b_x192); /*bool*/;
  double _x_x1023 = kk_std_num_float64__mlift_pdecdouble_10415(cur, _y_x10363_194, _ctx); /*float64*/
  return kk_double_box(_x_x1023, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10416(kk_std_core_sslice__sslice cur, kk_string_t man, kk_context_t* _ctx) { /* (cur : sslice/sslice, man : string) -> std/text/parse/parse float64 */ 
  kk_string_drop(man, _ctx);
  kk_std_core_hnd__ev ev_10513 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  bool x_10511;
  kk_box_t _x_x1019;
  {
    struct kk_std_core_hnd_Ev* _con_x1020 = kk_std_core_hnd__as_Ev(ev_10513, _ctx);
    kk_box_t _box_x185 = _con_x1020->hnd;
    int32_t m = _con_x1020->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x185, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x561;
    kk_std_core_hnd__clause0 _brw_x562 = kk_std_text_parse__select_pick(h, _ctx); /*hnd/clause0<bool,std/text/parse/parse,711,712>*/;
    kk_std_text_parse__parse_drop(h, _ctx);
    _match_x561 = _brw_x562; /*hnd/clause0<bool,std/text/parse/parse,711,712>*/
    {
      kk_function_t _fun_unbox_x188 = _match_x561.clause;
      _x_x1019 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x188, (_fun_unbox_x188, m, ev_10513, _ctx), _ctx); /*35*/
    }
  }
  x_10511 = kk_bool_unbox(_x_x1019); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1021 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10416_fun1022(cur, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1021, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_pdecdouble_10415(cur, x_10511, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10417_fun1025__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice cur;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10417_fun1025(kk_function_t _fself, kk_box_t _b_x196, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10417_fun1025(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10417_fun1025__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10417_fun1025__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10417_fun1025, kk_context());
  _self->cur = cur;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10417_fun1025(kk_function_t _fself, kk_box_t _b_x196, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10417_fun1025__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10417_fun1025__t*, _fself, _ctx);
  kk_std_core_sslice__sslice cur = _self->cur; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(cur, _ctx);}, {}, _ctx)
  kk_string_t man_198 = kk_string_unbox(_b_x196); /*string*/;
  double _x_x1026 = kk_std_num_float64__mlift_pdecdouble_10416(cur, man_198, _ctx); /*float64*/
  return kk_double_box(_x_x1026, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10417(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) { /* (cur : sslice/sslice) -> std/text/parse/parse float64 */ 
  kk_string_t x_10515 = kk_std_text_parse_digits(_ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10515, _ctx);
    kk_box_t _x_x1024 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10417_fun1025(cur, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1024, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_pdecdouble_10416(cur, x_10515, _ctx);
  }
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1030__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1030(kk_function_t _fself, kk_box_t _b_x206, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1030(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1030, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1030(kk_function_t _fself, kk_box_t _b_x206, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1031;
  kk_std_core_sslice__sslice _x_x1032 = kk_std_core_sslice__sslice_unbox(_b_x206, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x1031 = kk_std_num_float64__mlift_pdecdouble_10417(_x_x1032, _ctx); /*float64*/
  return kk_double_box(_x_x1031, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1034__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice x_10517;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1034(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1034(kk_std_core_sslice__sslice x_10517, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1034__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdecdouble_fun1034__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdecdouble_fun1034, kk_context());
  _self->x_10517 = x_10517;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1034(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1034__t* _self = kk_function_as(struct kk_std_num_float64_pdecdouble_fun1034__t*, _fself, _ctx);
  kk_std_core_sslice__sslice x_10517 = _self->x_10517; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(x_10517, _ctx);}, {}, _ctx)
  kk_string_t man_251 = kk_string_unbox(_b_x208); /*string*/;
  double _x_x1035 = kk_std_num_float64__mlift_pdecdouble_10416(x_10517, man_251, _ctx); /*float64*/
  return kk_double_box(_x_x1035, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1039__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice x_10517;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1039(kk_function_t _fself, kk_box_t _b_x216, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1039(kk_std_core_sslice__sslice x_10517, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1039__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdecdouble_fun1039__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdecdouble_fun1039, kk_context());
  _self->x_10517 = x_10517;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1039(kk_function_t _fself, kk_box_t _b_x216, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1039__t* _self = kk_function_as(struct kk_std_num_float64_pdecdouble_fun1039__t*, _fself, _ctx);
  kk_std_core_sslice__sslice x_10517 = _self->x_10517; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(x_10517, _ctx);}, {}, _ctx)
  bool _y_x10363_252 = kk_bool_unbox(_b_x216); /*bool*/;
  double _x_x1040 = kk_std_num_float64__mlift_pdecdouble_10415(x_10517, _y_x10363_252, _ctx); /*float64*/
  return kk_double_box(_x_x1040, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1042__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1042(kk_function_t _fself, kk_box_t _b_x218, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1042(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1042, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1042(kk_function_t _fself, kk_box_t _b_x218, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1043;
  kk_char_t _x_x1044 = kk_char_unbox(_b_x218, KK_OWNED, _ctx); /*char*/
  _x_x1043 = kk_std_num_float64__mlift_pdecdouble_10413(_x_x1044, _ctx); /*string*/
  return kk_string_box(_x_x1043);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1047__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice x_10517;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1047(kk_function_t _fself, kk_box_t _b_x221, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1047(kk_std_core_sslice__sslice x_10517, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1047__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdecdouble_fun1047__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdecdouble_fun1047, kk_context());
  _self->x_10517 = x_10517;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1047(kk_function_t _fself, kk_box_t _b_x221, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1047__t* _self = kk_function_as(struct kk_std_num_float64_pdecdouble_fun1047__t*, _fself, _ctx);
  kk_std_core_sslice__sslice x_10517 = _self->x_10517; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(x_10517, _ctx);}, {}, _ctx)
  kk_string_t _c_x10366_253 = kk_string_unbox(_b_x221); /*string*/;
  double _x_x1048 = kk_std_num_float64__mlift_pdecdouble_10414(x_10517, _c_x10366_253, _ctx); /*float64*/
  return kk_double_box(_x_x1048, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1054__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice x_10517;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1054(kk_function_t _fself, kk_box_t _b_x229, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1054(kk_std_core_sslice__sslice x_10517, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1054__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdecdouble_fun1054__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdecdouble_fun1054, kk_context());
  _self->x_10517 = x_10517;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1054(kk_function_t _fself, kk_box_t _b_x229, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1054__t* _self = kk_function_as(struct kk_std_num_float64_pdecdouble_fun1054__t*, _fself, _ctx);
  kk_std_core_sslice__sslice x_10517 = _self->x_10517; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(x_10517, _ctx);}, {}, _ctx)
  bool _y_x10367_254 = kk_bool_unbox(_b_x229); /*bool*/;
  double _x_x1055 = kk_std_num_float64__mlift_pdecdouble_10412(x_10517, _y_x10367_254, _ctx); /*float64*/
  return kk_double_box(_x_x1055, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1059__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1059(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1059(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1059, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1059(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1060;
  kk_char_t _x_x1061 = kk_char_unbox(_b_x231, KK_OWNED, _ctx); /*char*/
  _x_x1060 = kk_std_num_float64__mlift_pdecdouble_10410(_x_x1061, _ctx); /*int*/
  return kk_integer_box(_x_x1060, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1063__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice x_10517;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1063(kk_function_t _fself, kk_box_t _b_x237, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1063(kk_std_core_sslice__sslice x_10517, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1063__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdecdouble_fun1063__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdecdouble_fun1063, kk_context());
  _self->x_10517 = x_10517;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1064__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1064(kk_function_t _fself, kk_box_t _b_x235, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1064(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1064, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1064(kk_function_t _fself, kk_box_t _b_x235, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1065;
  kk_string_t _x_x1066 = kk_string_unbox(_b_x235); /*string*/
  _x_x1065 = kk_std_num_float64_prim_parse_float64(_x_x1066, _ctx); /*float64*/
  return kk_double_box(_x_x1065, _ctx);
}
static kk_box_t kk_std_num_float64_pdecdouble_fun1063(kk_function_t _fself, kk_box_t _b_x237, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1063__t* _self = kk_function_as(struct kk_std_num_float64_pdecdouble_fun1063__t*, _fself, _ctx);
  kk_std_core_sslice__sslice x_10517 = _self->x_10517; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(x_10517, _ctx);}, {}, _ctx)
  kk_integer_t _c_x10370_255 = kk_integer_unbox(_b_x237, _ctx); /*int*/;
  kk_integer_drop(_c_x10370_255, _ctx);
  kk_string_t _x_x1_10400 = kk_std_core_sslice_string(x_10517, _ctx); /*string*/;
  return kk_std_core_hnd__open_none1(kk_std_num_float64_new_pdecdouble_fun1064(_ctx), kk_string_box(_x_x1_10400), _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1068__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1068(kk_function_t _fself, kk_box_t _b_x240, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1068(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1068, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1068(kk_function_t _fself, kk_box_t _b_x240, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1069;
  kk_string_t _x_x1070 = kk_string_unbox(_b_x240); /*string*/
  _x_x1069 = kk_std_num_float64_prim_parse_float64(_x_x1070, _ctx); /*float64*/
  return kk_double_box(_x_x1069, _ctx);
}

double kk_std_num_float64_pdecdouble(kk_context_t* _ctx) { /* () -> std/text/parse/parse float64 */ 
  kk_std_core_hnd__ev ev_10520 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_sslice__sslice x_10517;
  kk_box_t _x_x1027;
  {
    struct kk_std_core_hnd_Ev* _con_x1028 = kk_std_core_hnd__as_Ev(ev_10520, _ctx);
    kk_box_t _box_x199 = _con_x1028->hnd;
    int32_t m = _con_x1028->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x199, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x557;
    kk_std_core_hnd__clause0 _brw_x558 = kk_std_text_parse__select_current_input(h, _ctx); /*hnd/clause0<sslice/sslice,std/text/parse/parse,775,776>*/;
    kk_std_text_parse__parse_drop(h, _ctx);
    _match_x557 = _brw_x558; /*hnd/clause0<sslice/sslice,std/text/parse/parse,775,776>*/
    {
      kk_function_t _fun_unbox_x202 = _match_x557.clause;
      _x_x1027 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x202, (_fun_unbox_x202, m, ev_10520, _ctx), _ctx); /*35*/
    }
  }
  x_10517 = kk_std_core_sslice__sslice_unbox(_x_x1027, KK_OWNED, _ctx); /*sslice/sslice*/
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_10517, _ctx);
    kk_box_t _x_x1029 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1030(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1029, KK_OWNED, _ctx);
  }
  {
    kk_string_t x_0_10522 = kk_std_text_parse_digits(_ctx); /*string*/;
    kk_string_drop(x_0_10522, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1033 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1034(x_10517, _ctx), _ctx); /*2978*/
      return kk_double_unbox(_x_x1033, KK_OWNED, _ctx);
    }
    {
      kk_std_core_hnd__ev ev_0_10528 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      bool x_1_10525;
      kk_box_t _x_x1036;
      {
        struct kk_std_core_hnd_Ev* _con_x1037 = kk_std_core_hnd__as_Ev(ev_0_10528, _ctx);
        kk_box_t _box_x209 = _con_x1037->hnd;
        int32_t m_0 = _con_x1037->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x209, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        kk_std_core_hnd__clause0 _match_x555;
        kk_std_core_hnd__clause0 _brw_x556 = kk_std_text_parse__select_pick(h_0, _ctx); /*hnd/clause0<bool,std/text/parse/parse,711,712>*/;
        kk_std_text_parse__parse_drop(h_0, _ctx);
        _match_x555 = _brw_x556; /*hnd/clause0<bool,std/text/parse/parse,711,712>*/
        {
          kk_function_t _fun_unbox_x212 = _match_x555.clause;
          _x_x1036 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x212, (_fun_unbox_x212, m_0, ev_0_10528, _ctx), _ctx); /*35*/
        }
      }
      x_1_10525 = kk_bool_unbox(_x_x1036); /*bool*/
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x1038 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1039(x_10517, _ctx), _ctx); /*2978*/
        return kk_double_unbox(_x_x1038, KK_OWNED, _ctx);
      }
      {
        kk_string_t x_2_10530;
        if (x_1_10525) {
          kk_char_t x_3_10533 = kk_std_text_parse_char('.', _ctx); /*char*/;
          if (kk_yielding(kk_context())) {
            kk_box_t _x_x1041 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1042(_ctx), _ctx); /*2978*/
            x_2_10530 = kk_string_unbox(_x_x1041); /*string*/
          }
          else {
            x_2_10530 = kk_std_text_parse_digits0(_ctx); /*string*/
          }
        }
        else {
          x_2_10530 = kk_string_empty(); /*string*/
        }
        if (kk_yielding(kk_context())) {
          kk_string_drop(x_2_10530, _ctx);
          kk_box_t _x_x1046 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1047(x_10517, _ctx), _ctx); /*2978*/
          return kk_double_unbox(_x_x1046, KK_OWNED, _ctx);
        }
        {
          kk_string_t frac;
          kk_string_t _x_x1049;
          kk_define_string_literal(, _s_x1050, 1, "0", _ctx)
          _x_x1049 = kk_string_dup(_s_x1050, _ctx); /*string*/
          frac = kk_std_core_sslice_trim_right(x_2_10530, _x_x1049, _ctx); /*string*/
          kk_string_drop(frac, _ctx);
          kk_std_core_hnd__ev ev_1_10538 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
          bool x_4_10535;
          kk_box_t _x_x1051;
          {
            struct kk_std_core_hnd_Ev* _con_x1052 = kk_std_core_hnd__as_Ev(ev_1_10538, _ctx);
            kk_box_t _box_x222 = _con_x1052->hnd;
            int32_t m_1 = _con_x1052->marker;
            kk_std_text_parse__parse h_1 = kk_std_text_parse__parse_unbox(_box_x222, KK_BORROWED, _ctx);
            kk_std_text_parse__parse_dup(h_1, _ctx);
            kk_std_core_hnd__clause0 _match_x552;
            kk_std_core_hnd__clause0 _brw_x553 = kk_std_text_parse__select_pick(h_1, _ctx); /*hnd/clause0<bool,std/text/parse/parse,711,712>*/;
            kk_std_text_parse__parse_drop(h_1, _ctx);
            _match_x552 = _brw_x553; /*hnd/clause0<bool,std/text/parse/parse,711,712>*/
            {
              kk_function_t _fun_unbox_x225 = _match_x552.clause;
              _x_x1051 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x225, (_fun_unbox_x225, m_1, ev_1_10538, _ctx), _ctx); /*35*/
            }
          }
          x_4_10535 = kk_bool_unbox(_x_x1051); /*bool*/
          if (kk_yielding(kk_context())) {
            kk_box_t _x_x1053 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1054(x_10517, _ctx), _ctx); /*2978*/
            return kk_double_unbox(_x_x1053, KK_OWNED, _ctx);
          }
          {
            kk_integer_t x_5_10540;
            if (x_4_10535) {
              kk_char_t x_6_10543;
              kk_string_t _x_x1056;
              kk_define_string_literal(, _s_x1057, 2, "eE", _ctx)
              _x_x1056 = kk_string_dup(_s_x1057, _ctx); /*string*/
              x_6_10543 = kk_std_text_parse_one_of(_x_x1056, _ctx); /*char*/
              if (kk_yielding(kk_context())) {
                kk_box_t _x_x1058 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1059(_ctx), _ctx); /*2978*/
                x_5_10540 = kk_integer_unbox(_x_x1058, _ctx); /*int*/
              }
              else {
                x_5_10540 = kk_std_text_parse_pint(_ctx); /*int*/
              }
            }
            else {
              x_5_10540 = kk_integer_from_small(0); /*int*/
            }
            kk_integer_drop(x_5_10540, _ctx);
            if (kk_yielding(kk_context())) {
              kk_box_t _x_x1062 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1063(x_10517, _ctx), _ctx); /*2978*/
              return kk_double_unbox(_x_x1062, KK_OWNED, _ctx);
            }
            {
              kk_string_t _x_x1_10400_0 = kk_std_core_sslice_string(x_10517, _ctx); /*string*/;
              kk_box_t _x_x1067 = kk_std_core_hnd__open_none1(kk_std_num_float64_new_pdecdouble_fun1068(_ctx), kk_string_box(_x_x1_10400_0), _ctx); /*8580*/
              return kk_double_unbox(_x_x1067, KK_OWNED, _ctx);
            }
          }
        }
      }
    }
  }
}


// lift anonymous function
struct kk_std_num_float64_pspecial_fun1071__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1071(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1071(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1071, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pspecial_fun1076__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1076(kk_function_t _fself, kk_box_t _b_x257, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1076(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1076, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pspecial_fun1076(kk_function_t _fself, kk_box_t _b_x257, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1077;
  kk_string_t _x_x1078 = kk_string_unbox(_b_x257); /*string*/
  _x_x1077 = kk_std_num_float64__mlift_pspecial_10418(_x_x1078, _ctx); /*float64*/
  return kk_double_box(_x_x1077, _ctx);
}
static kk_box_t kk_std_num_float64_pspecial_fun1071(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_10547;
  kk_string_t _x_x1072;
  kk_define_string_literal(, _s_x1073, 3, "nan", _ctx)
  _x_x1072 = kk_string_dup(_s_x1073, _ctx); /*string*/
  x_10547 = kk_std_text_parse_pstring(_x_x1072, _ctx); /*string*/
  kk_string_drop(x_10547, _ctx);
  double _x_x1074;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1075 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pspecial_fun1076(_ctx), _ctx); /*2978*/
    _x_x1074 = kk_double_unbox(_x_x1075, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1074 = kk_std_num_float64_nan; /*float64*/
  }
  return kk_double_box(_x_x1074, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pspecial_fun1080__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1080(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1080(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1080, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pspecial_fun1085__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1085(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1085(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1085, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pspecial_fun1085(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1086;
  kk_string_t _x_x1087 = kk_string_unbox(_b_x259); /*string*/
  _x_x1086 = kk_std_num_float64__mlift_pspecial_10419(_x_x1087, _ctx); /*float64*/
  return kk_double_box(_x_x1086, _ctx);
}
static kk_box_t kk_std_num_float64_pspecial_fun1080(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_0_10549;
  kk_string_t _x_x1081;
  kk_define_string_literal(, _s_x1082, 8, "infinity", _ctx)
  _x_x1081 = kk_string_dup(_s_x1082, _ctx); /*string*/
  x_0_10549 = kk_std_text_parse_pstring(_x_x1081, _ctx); /*string*/
  kk_string_drop(x_0_10549, _ctx);
  double _x_x1083;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1084 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pspecial_fun1085(_ctx), _ctx); /*2978*/
    _x_x1083 = kk_double_unbox(_x_x1084, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1083 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1083, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pspecial_fun1089__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1089(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1089(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1089, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pspecial_fun1094__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1094(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1094(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1094, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pspecial_fun1094(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1095;
  kk_string_t _x_x1096 = kk_string_unbox(_b_x261); /*string*/
  _x_x1095 = kk_std_num_float64__mlift_pspecial_10420(_x_x1096, _ctx); /*float64*/
  return kk_double_box(_x_x1095, _ctx);
}
static kk_box_t kk_std_num_float64_pspecial_fun1089(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_1_10551;
  kk_string_t _x_x1090;
  kk_define_string_literal(, _s_x1091, 3, "inf", _ctx)
  _x_x1090 = kk_string_dup(_s_x1091, _ctx); /*string*/
  x_1_10551 = kk_std_text_parse_pstring(_x_x1090, _ctx); /*string*/
  kk_string_drop(x_1_10551, _ctx);
  double _x_x1092;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1093 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pspecial_fun1094(_ctx), _ctx); /*2978*/
    _x_x1092 = kk_double_unbox(_x_x1093, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1092 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1092, _ctx);
}

double kk_std_num_float64_pspecial(kk_context_t* _ctx) { /* () -> std/text/parse/parse float64 */ 
  kk_std_core_types__list ps_10114;
  kk_std_core_types__list _x_x1079;
  kk_std_core_types__list _x_x1088 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pspecial_fun1089(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4024>*/
  _x_x1079 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pspecial_fun1080(_ctx), _ctx), _x_x1088, _ctx); /*list<4024>*/
  ps_10114 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pspecial_fun1071(_ctx), _ctx), _x_x1079, _ctx); /*list<std/text/parse/parser<total,float64>>*/
  if (kk_std_core_types__is_Nil(ps_10114, _ctx)) {
    kk_std_core_hnd__ev ev_10553 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x1097;
    {
      struct kk_std_core_hnd_Ev* _con_x1098 = kk_std_core_hnd__as_Ev(ev_10553, _ctx);
      kk_box_t _box_x280 = _con_x1098->hnd;
      int32_t m = _con_x1098->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x280, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x540;
      kk_std_core_hnd__clause1 _brw_x541 = kk_std_text_parse__select_fail(h, _ctx); /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/;
      kk_std_text_parse__parse_drop(h, _ctx);
      _match_x540 = _brw_x541; /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/
      {
        kk_function_t _fun_unbox_x284 = _match_x540.clause;
        kk_box_t _x_x1099;
        kk_string_t _x_x1100;
        kk_define_string_literal(, _s_x1101, 23, "no further alternatives", _ctx)
        _x_x1100 = kk_string_dup(_s_x1101, _ctx); /*string*/
        _x_x1099 = kk_string_box(_x_x1100); /*45*/
        _x_x1097 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x284, (_fun_unbox_x284, m, ev_10553, _x_x1099, _ctx), _ctx); /*46*/
      }
    }
    return kk_double_unbox(_x_x1097, KK_OWNED, _ctx);
  }
  {
    kk_box_t _x_x1102 = kk_std_text_parse__unroll_choose_10000(ps_10114, _ctx); /*4421*/
    return kk_double_unbox(_x_x1102, KK_OWNED, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1103__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1103(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1103(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1103, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1103(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1104 = kk_std_num_float64_phexdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1104, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1106__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1106(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1106(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1106, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1106(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1107 = kk_std_num_float64_pdecdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1107, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1109__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1109(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1109(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1109, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1110__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1110(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1110(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1110, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1115__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1115(kk_function_t _fself, kk_box_t _b_x291, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1115(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1115, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1115(kk_function_t _fself, kk_box_t _b_x291, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1116;
  kk_string_t _x_x1117 = kk_string_unbox(_b_x291); /*string*/
  _x_x1116 = kk_std_num_float64__mlift_pdouble_10421(_x_x1117, _ctx); /*float64*/
  return kk_double_box(_x_x1116, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1110(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_10556;
  kk_string_t _x_x1111;
  kk_define_string_literal(, _s_x1112, 3, "nan", _ctx)
  _x_x1111 = kk_string_dup(_s_x1112, _ctx); /*string*/
  x_10556 = kk_std_text_parse_pstring(_x_x1111, _ctx); /*string*/
  kk_string_drop(x_10556, _ctx);
  double _x_x1113;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1114 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdouble_10425_fun1115(_ctx), _ctx); /*2978*/
    _x_x1113 = kk_double_unbox(_x_x1114, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1113 = kk_std_num_float64_nan; /*float64*/
  }
  return kk_double_box(_x_x1113, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1119__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1119(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1119(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1119, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1124__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1124(kk_function_t _fself, kk_box_t _b_x293, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1124(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1124, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1124(kk_function_t _fself, kk_box_t _b_x293, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1125;
  kk_string_t _x_x1126 = kk_string_unbox(_b_x293); /*string*/
  _x_x1125 = kk_std_num_float64__mlift_pdouble_10422(_x_x1126, _ctx); /*float64*/
  return kk_double_box(_x_x1125, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1119(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_0_10558;
  kk_string_t _x_x1120;
  kk_define_string_literal(, _s_x1121, 8, "infinity", _ctx)
  _x_x1120 = kk_string_dup(_s_x1121, _ctx); /*string*/
  x_0_10558 = kk_std_text_parse_pstring(_x_x1120, _ctx); /*string*/
  kk_string_drop(x_0_10558, _ctx);
  double _x_x1122;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1123 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdouble_10425_fun1124(_ctx), _ctx); /*2978*/
    _x_x1122 = kk_double_unbox(_x_x1123, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1122 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1122, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1128__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1128(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1128(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1128, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1133__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1133(kk_function_t _fself, kk_box_t _b_x295, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1133(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1133, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1133(kk_function_t _fself, kk_box_t _b_x295, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1134;
  kk_string_t _x_x1135 = kk_string_unbox(_b_x295); /*string*/
  _x_x1134 = kk_std_num_float64__mlift_pdouble_10423(_x_x1135, _ctx); /*float64*/
  return kk_double_box(_x_x1134, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1128(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_1_10560;
  kk_string_t _x_x1129;
  kk_define_string_literal(, _s_x1130, 3, "inf", _ctx)
  _x_x1129 = kk_string_dup(_s_x1130, _ctx); /*string*/
  x_1_10560 = kk_std_text_parse_pstring(_x_x1129, _ctx); /*string*/
  kk_string_drop(x_1_10560, _ctx);
  double _x_x1131;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1132 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdouble_10425_fun1133(_ctx), _ctx); /*2978*/
    _x_x1131 = kk_double_unbox(_x_x1132, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1131 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1131, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1109(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list ps_0_10116;
  kk_std_core_types__list _x_x1118;
  kk_std_core_types__list _x_x1127 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10425_fun1128(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4024>*/
  _x_x1118 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10425_fun1119(_ctx), _ctx), _x_x1127, _ctx); /*list<4024>*/
  ps_0_10116 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10425_fun1110(_ctx), _ctx), _x_x1118, _ctx); /*list<std/text/parse/parser<total,float64>>*/
  double _x_x1136;
  if (kk_std_core_types__is_Nil(ps_0_10116, _ctx)) {
    kk_std_core_hnd__ev ev_10562 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x1137;
    {
      struct kk_std_core_hnd_Ev* _con_x1138 = kk_std_core_hnd__as_Ev(ev_10562, _ctx);
      kk_box_t _box_x314 = _con_x1138->hnd;
      int32_t m = _con_x1138->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x314, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x535;
      kk_std_core_hnd__clause1 _brw_x536 = kk_std_text_parse__select_fail(h, _ctx); /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/;
      kk_std_text_parse__parse_drop(h, _ctx);
      _match_x535 = _brw_x536; /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/
      {
        kk_function_t _fun_unbox_x318 = _match_x535.clause;
        kk_box_t _x_x1139;
        kk_string_t _x_x1140;
        kk_define_string_literal(, _s_x1141, 23, "no further alternatives", _ctx)
        _x_x1140 = kk_string_dup(_s_x1141, _ctx); /*string*/
        _x_x1139 = kk_string_box(_x_x1140); /*45*/
        _x_x1137 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x318, (_fun_unbox_x318, m, ev_10562, _x_x1139, _ctx), _ctx); /*46*/
      }
    }
    _x_x1136 = kk_double_unbox(_x_x1137, KK_OWNED, _ctx); /*float64*/
  }
  else {
    kk_box_t _x_x1142 = kk_std_text_parse__unroll_choose_10000(ps_0_10116, _ctx); /*4421*/
    _x_x1136 = kk_double_unbox(_x_x1142, KK_OWNED, _ctx); /*float64*/
  }
  return kk_double_box(_x_x1136, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1144__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1144(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1144(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10425_fun1144, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1144(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_double_box(0x0p+0, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10425_fun1152__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1152(kk_function_t _fself, kk_box_t _b_x355, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10425_fun1152(bool neg, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdouble_10425_fun1152__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdouble_10425_fun1152__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdouble_10425_fun1152, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10425_fun1152(kk_function_t _fself, kk_box_t _b_x355, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdouble_10425_fun1152__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdouble_10425_fun1152__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  double _x_x1153;
  double _c_x10386_357 = kk_double_unbox(_b_x355, KK_OWNED, _ctx); /*float64*/;
  if (neg) {
    _x_x1153 = (-_c_x10386_357); /*float64*/
  }
  else {
    _x_x1153 = _c_x10386_357; /*float64*/
  }
  return kk_double_box(_x_x1153, _ctx);
}

double kk_std_num_float64__mlift_pdouble_10425(bool neg, kk_context_t* _ctx) { /* (neg : bool) -> std/text/parse/parse float64 */ 
  kk_std_core_types__list ps_10115;
  kk_std_core_types__list _x_x1105;
  kk_std_core_types__list _x_x1108;
  kk_std_core_types__list _x_x1143 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10425_fun1144(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4087>*/
  _x_x1108 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10425_fun1109(_ctx), _ctx), _x_x1143, _ctx); /*list<4087>*/
  _x_x1105 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10425_fun1106(_ctx), _ctx), _x_x1108, _ctx); /*list<4087>*/
  ps_10115 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10425_fun1103(_ctx), _ctx), _x_x1105, _ctx); /*list<std/text/parse/parser<total,float64>>*/
  double x_3_10565;
  if (kk_std_core_types__is_Nil(ps_10115, _ctx)) {
    kk_std_core_hnd__ev ev_0_10567 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x1145;
    {
      struct kk_std_core_hnd_Ev* _con_x1146 = kk_std_core_hnd__as_Ev(ev_0_10567, _ctx);
      kk_box_t _box_x344 = _con_x1146->hnd;
      int32_t m_0 = _con_x1146->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x344, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      kk_std_core_hnd__clause1 _match_x533;
      kk_std_core_hnd__clause1 _brw_x534 = kk_std_text_parse__select_fail(h_0, _ctx); /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/;
      kk_std_text_parse__parse_drop(h_0, _ctx);
      _match_x533 = _brw_x534; /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/
      {
        kk_function_t _fun_unbox_x348 = _match_x533.clause;
        kk_box_t _x_x1147;
        kk_string_t _x_x1148;
        kk_define_string_literal(, _s_x1149, 23, "no further alternatives", _ctx)
        _x_x1148 = kk_string_dup(_s_x1149, _ctx); /*string*/
        _x_x1147 = kk_string_box(_x_x1148); /*45*/
        _x_x1145 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x348, (_fun_unbox_x348, m_0, ev_0_10567, _x_x1147, _ctx), _ctx); /*46*/
      }
    }
    x_3_10565 = kk_double_unbox(_x_x1145, KK_OWNED, _ctx); /*float64*/
  }
  else {
    kk_box_t _x_x1150 = kk_std_text_parse__unroll_choose_10000(ps_10115, _ctx); /*4421*/
    x_3_10565 = kk_double_unbox(_x_x1150, KK_OWNED, _ctx); /*float64*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1151 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdouble_10425_fun1152(neg, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1151, KK_OWNED, _ctx);
  }
  {
    double _c_x10386_358 = x_3_10565; /*float64*/;
    if (neg) {
      return (-_c_x10386_358);
    }
    {
      return _c_x10386_358;
    }
  }
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1155__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1155(kk_function_t _fself, kk_box_t _b_x360, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1155(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1155, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1155(kk_function_t _fself, kk_box_t _b_x360, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1156;
  bool _x_x1157 = kk_bool_unbox(_b_x360); /*bool*/
  _x_x1156 = kk_std_num_float64__mlift_pdouble_10425(_x_x1157, _ctx); /*float64*/
  return kk_double_box(_x_x1156, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1158__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1158(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1158(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1158, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1158(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1159 = kk_std_num_float64_phexdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1159, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1161__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1161(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1161(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1161, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1161(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1162 = kk_std_num_float64_pdecdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1162, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1164__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1164(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1164(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1164, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdouble_fun1165__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1165(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1165(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1165, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdouble_fun1170__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1170(kk_function_t _fself, kk_box_t _b_x362, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1170(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1170, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1170(kk_function_t _fself, kk_box_t _b_x362, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1171;
  kk_string_t _x_x1172 = kk_string_unbox(_b_x362); /*string*/
  _x_x1171 = kk_std_num_float64__mlift_pdouble_10421(_x_x1172, _ctx); /*float64*/
  return kk_double_box(_x_x1171, _ctx);
}
static kk_box_t kk_std_num_float64_pdouble_fun1165(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_0_10575;
  kk_string_t _x_x1166;
  kk_define_string_literal(, _s_x1167, 3, "nan", _ctx)
  _x_x1166 = kk_string_dup(_s_x1167, _ctx); /*string*/
  x_0_10575 = kk_std_text_parse_pstring(_x_x1166, _ctx); /*string*/
  kk_string_drop(x_0_10575, _ctx);
  double _x_x1168;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1169 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1170(_ctx), _ctx); /*2978*/
    _x_x1168 = kk_double_unbox(_x_x1169, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1168 = kk_std_num_float64_nan; /*float64*/
  }
  return kk_double_box(_x_x1168, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1174__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1174(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1174(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1174, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdouble_fun1179__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1179(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1179(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1179, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1179(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1180;
  kk_string_t _x_x1181 = kk_string_unbox(_b_x364); /*string*/
  _x_x1180 = kk_std_num_float64__mlift_pdouble_10422(_x_x1181, _ctx); /*float64*/
  return kk_double_box(_x_x1180, _ctx);
}
static kk_box_t kk_std_num_float64_pdouble_fun1174(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_1_10577;
  kk_string_t _x_x1175;
  kk_define_string_literal(, _s_x1176, 8, "infinity", _ctx)
  _x_x1175 = kk_string_dup(_s_x1176, _ctx); /*string*/
  x_1_10577 = kk_std_text_parse_pstring(_x_x1175, _ctx); /*string*/
  kk_string_drop(x_1_10577, _ctx);
  double _x_x1177;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1178 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1179(_ctx), _ctx); /*2978*/
    _x_x1177 = kk_double_unbox(_x_x1178, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1177 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1177, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1183__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1183(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1183(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1183, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdouble_fun1188__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1188(kk_function_t _fself, kk_box_t _b_x366, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1188(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1188, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1188(kk_function_t _fself, kk_box_t _b_x366, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1189;
  kk_string_t _x_x1190 = kk_string_unbox(_b_x366); /*string*/
  _x_x1189 = kk_std_num_float64__mlift_pdouble_10423(_x_x1190, _ctx); /*float64*/
  return kk_double_box(_x_x1189, _ctx);
}
static kk_box_t kk_std_num_float64_pdouble_fun1183(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_2_10579;
  kk_string_t _x_x1184;
  kk_define_string_literal(, _s_x1185, 3, "inf", _ctx)
  _x_x1184 = kk_string_dup(_s_x1185, _ctx); /*string*/
  x_2_10579 = kk_std_text_parse_pstring(_x_x1184, _ctx); /*string*/
  kk_string_drop(x_2_10579, _ctx);
  double _x_x1186;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1187 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1188(_ctx), _ctx); /*2978*/
    _x_x1186 = kk_double_unbox(_x_x1187, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1186 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1186, _ctx);
}
static kk_box_t kk_std_num_float64_pdouble_fun1164(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list ps_0_10116;
  kk_std_core_types__list _x_x1173;
  kk_std_core_types__list _x_x1182 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1183(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4024>*/
  _x_x1173 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1174(_ctx), _ctx), _x_x1182, _ctx); /*list<4024>*/
  ps_0_10116 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1165(_ctx), _ctx), _x_x1173, _ctx); /*list<std/text/parse/parser<total,float64>>*/
  double _x_x1191;
  if (kk_std_core_types__is_Nil(ps_0_10116, _ctx)) {
    kk_std_core_hnd__ev ev_10581 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x1192;
    {
      struct kk_std_core_hnd_Ev* _con_x1193 = kk_std_core_hnd__as_Ev(ev_10581, _ctx);
      kk_box_t _box_x385 = _con_x1193->hnd;
      int32_t m = _con_x1193->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x385, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x527;
      kk_std_core_hnd__clause1 _brw_x528 = kk_std_text_parse__select_fail(h, _ctx); /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/;
      kk_std_text_parse__parse_drop(h, _ctx);
      _match_x527 = _brw_x528; /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/
      {
        kk_function_t _fun_unbox_x389 = _match_x527.clause;
        kk_box_t _x_x1194;
        kk_string_t _x_x1195;
        kk_define_string_literal(, _s_x1196, 23, "no further alternatives", _ctx)
        _x_x1195 = kk_string_dup(_s_x1196, _ctx); /*string*/
        _x_x1194 = kk_string_box(_x_x1195); /*45*/
        _x_x1192 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x389, (_fun_unbox_x389, m, ev_10581, _x_x1194, _ctx), _ctx); /*46*/
      }
    }
    _x_x1191 = kk_double_unbox(_x_x1192, KK_OWNED, _ctx); /*float64*/
  }
  else {
    kk_box_t _x_x1197 = kk_std_text_parse__unroll_choose_10000(ps_0_10116, _ctx); /*4421*/
    _x_x1191 = kk_double_unbox(_x_x1197, KK_OWNED, _ctx); /*float64*/
  }
  return kk_double_box(_x_x1191, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1199__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1199(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1199(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1199, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1199(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_double_box(0x0p+0, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1207__t {
  struct kk_function_s _base;
  bool x_10572;
};
static kk_box_t kk_std_num_float64_pdouble_fun1207(kk_function_t _fself, kk_box_t _b_x426, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1207(bool x_10572, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdouble_fun1207__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdouble_fun1207__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdouble_fun1207, kk_context());
  _self->x_10572 = x_10572;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1207(kk_function_t _fself, kk_box_t _b_x426, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdouble_fun1207__t* _self = kk_function_as(struct kk_std_num_float64_pdouble_fun1207__t*, _fself, _ctx);
  bool x_10572 = _self->x_10572; /* bool */
  kk_drop_match(_self, {kk_skip_dup(x_10572, _ctx);}, {}, _ctx)
  double _c_x10386_429 = kk_double_unbox(_b_x426, KK_OWNED, _ctx); /*float64*/;
  double _x_x1208;
  if (x_10572) {
    _x_x1208 = (-_c_x10386_429); /*float64*/
  }
  else {
    _x_x1208 = _c_x10386_429; /*float64*/
  }
  return kk_double_box(_x_x1208, _ctx);
}

double kk_std_num_float64_pdouble(kk_context_t* _ctx) { /* () -> std/text/parse/parse float64 */ 
  bool x_10572 = kk_std_text_parse_sign(_ctx); /*bool*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1154 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1155(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1154, KK_OWNED, _ctx);
  }
  {
    kk_std_core_types__list ps_10115;
    kk_std_core_types__list _x_x1160;
    kk_std_core_types__list _x_x1163;
    kk_std_core_types__list _x_x1198 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1199(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4087>*/
    _x_x1163 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1164(_ctx), _ctx), _x_x1198, _ctx); /*list<4087>*/
    _x_x1160 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1161(_ctx), _ctx), _x_x1163, _ctx); /*list<4087>*/
    ps_10115 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1158(_ctx), _ctx), _x_x1160, _ctx); /*list<std/text/parse/parser<total,float64>>*/
    double x_4_10584;
    if (kk_std_core_types__is_Nil(ps_10115, _ctx)) {
      kk_std_core_hnd__ev ev_0_10587 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
      kk_box_t _x_x1200;
      {
        struct kk_std_core_hnd_Ev* _con_x1201 = kk_std_core_hnd__as_Ev(ev_0_10587, _ctx);
        kk_box_t _box_x415 = _con_x1201->hnd;
        int32_t m_0 = _con_x1201->marker;
        kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x415, KK_BORROWED, _ctx);
        kk_std_text_parse__parse_dup(h_0, _ctx);
        kk_std_core_hnd__clause1 _match_x525;
        kk_std_core_hnd__clause1 _brw_x526 = kk_std_text_parse__select_fail(h_0, _ctx); /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/;
        kk_std_text_parse__parse_drop(h_0, _ctx);
        _match_x525 = _brw_x526; /*hnd/clause1<string,630,std/text/parse/parse,631,632>*/
        {
          kk_function_t _fun_unbox_x419 = _match_x525.clause;
          kk_box_t _x_x1202;
          kk_string_t _x_x1203;
          kk_define_string_literal(, _s_x1204, 23, "no further alternatives", _ctx)
          _x_x1203 = kk_string_dup(_s_x1204, _ctx); /*string*/
          _x_x1202 = kk_string_box(_x_x1203); /*45*/
          _x_x1200 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x419, (_fun_unbox_x419, m_0, ev_0_10587, _x_x1202, _ctx), _ctx); /*46*/
        }
      }
      x_4_10584 = kk_double_unbox(_x_x1200, KK_OWNED, _ctx); /*float64*/
    }
    else {
      kk_box_t _x_x1205 = kk_std_text_parse__unroll_choose_10000(ps_10115, _ctx); /*4421*/
      x_4_10584 = kk_double_unbox(_x_x1205, KK_OWNED, _ctx); /*float64*/
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1206 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1207(x_10572, _ctx), _ctx); /*2978*/
      return kk_double_unbox(_x_x1206, KK_OWNED, _ctx);
    }
    if (x_10572) {
      return (-x_4_10584);
    }
    {
      return x_4_10584;
    }
  }
}
 
// Parse a float64 number. Can be "NaN", "Inf(inity)" (case-insensitive),
// a fix-point number (`1.2`) or in scientific notation (`-2.3e-5`).
// Also allows floats in [hexadecimal notation](https://books.google.com/books?id=FgMsCwAAQBAJ&pg=PA41) (`0xA.Fp-10`) that can
// be represented precisely (and are the preferred _round trip_ format).


// lift anonymous function
struct kk_std_num_float64_parse_float64_fun1213__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_parse_float64_fun1213(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_parse_float64_fun1213(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_parse_float64_fun1213, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_parse_float64_fun1213(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1214 = kk_std_num_float64_pdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1214, _ctx);
}

kk_std_core_types__maybe kk_std_num_float64_parse_float64(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<float64> */ 
  kk_string_t s_0_10118;
  kk_string_t _x_x1209;
  kk_string_t _x_x1210 = kk_string_trim_left(s,kk_context()); /*string*/
  _x_x1209 = kk_string_trim_right(_x_x1210,kk_context()); /*string*/
  s_0_10118 = kk_std_core_string_to_lower(_x_x1209, _ctx); /*string*/
  kk_std_core_sslice__sslice _b_x430_432;
  kk_string_t _x_x1211 = kk_string_dup(s_0_10118, _ctx); /*string*/
  kk_integer_t _x_x1212 = kk_string_len_int(s_0_10118,kk_context()); /*int*/
  _b_x430_432 = kk_std_core_sslice__new_Sslice(_x_x1211, kk_integer_from_small(0), _x_x1212, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error perr_10117 = kk_std_text_parse_parse_eof(_b_x430_432, kk_std_num_float64_new_parse_float64_fun1213(_ctx), _ctx); /*std/text/parse/parse-error<float64>*/;
  if (kk_std_text_parse__is_ParseOk(perr_10117, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x1215 = kk_std_text_parse__as_ParseOk(perr_10117, _ctx);
    kk_box_t _box_x434 = _con_x1215->result;
    kk_std_core_sslice__sslice _pat_0_0 = _con_x1215->rest;
    double x_0 = kk_double_unbox(_box_x434, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(perr_10117, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0_0, _ctx);
      kk_box_drop(_box_x434, _ctx);
      kk_datatype_ptr_free(perr_10117, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr_10117, _ctx);
    }
    return kk_std_core_types__new_Just(kk_double_box(x_0, _ctx), _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x1216 = kk_std_text_parse__as_ParseError(perr_10117, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x1216->rest;
    kk_string_t msg = _con_x1216->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr_10117, _ctx)) {
      kk_string_drop(msg, _ctx);
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr_10117, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr_10117, _ctx);
    }
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// lifted local: @lift-sum@10335, sum, @spec-x10284
// specialized: std/core/list/@unroll-foreach@10016, on parameters @uniq-action@10278, using:
// @uniq-action@10278 = fn<((local :: H -> X)<(h :: H)>)>(x: float64){
//   val t : float64;
//   val c : float64;
//   val _ : ();
//   std/core/types/local-set<float64,(total :: E),(h :: H)>(total, t);
// }

kk_unit_t kk_std_num_float64__lift_sum_10336(kk_ref_t comp, kk_ref_t total, kk_std_core_types__list _uniq_xs_10277, kk_context_t* _ctx) { /* forall<h> (comp : local-var<h,float64>, total : local-var<h,float64>, list<float64>) -> (local<h>) () */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(_uniq_xs_10277, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1217 = kk_std_core_types__as_Cons(_uniq_xs_10277, _ctx);
    kk_box_t _box_x437 = _con_x1217->head;
    kk_std_core_types__list _uniq_xx_10281 = _con_x1217->tail;
    double _uniq_x_10280 = kk_double_unbox(_box_x437, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_uniq_xs_10277, _ctx)) {
      kk_box_drop(_box_x437, _ctx);
      kk_datatype_ptr_free(_uniq_xs_10277, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_uniq_xx_10281, _ctx);
      kk_datatype_ptr_decref(_uniq_xs_10277, _ctx);
    }
    double t;
    double _x_x1218;
    kk_box_t _x_x1219;
    kk_ref_t _x_x1220 = kk_ref_dup(total, _ctx); /*local-var<3288,float64>*/
    _x_x1219 = kk_ref_get(_x_x1220,kk_context()); /*4543*/
    _x_x1218 = kk_double_unbox(_x_x1219, KK_OWNED, _ctx); /*float64*/
    t = (_x_x1218 + _uniq_x_10280); /*float64*/
    double c;
    bool _match_x522;
    double _x_x1221;
    double _x_x1222;
    kk_box_t _x_x1223;
    kk_ref_t _x_x1224 = kk_ref_dup(total, _ctx); /*local-var<3288,float64>*/
    _x_x1223 = kk_ref_get(_x_x1224,kk_context()); /*4502*/
    _x_x1222 = kk_double_unbox(_x_x1223, KK_OWNED, _ctx); /*float64*/
    _x_x1221 = kk_double_abs(_x_x1222); /*float64*/
    double _x_x1225 = kk_double_abs(_uniq_x_10280); /*float64*/
    _match_x522 = (_x_x1221 >= _x_x1225); /*bool*/
    if (_match_x522) {
      double _x_x1226;
      double _x_x1227;
      kk_box_t _x_x1228;
      kk_ref_t _x_x1229 = kk_ref_dup(total, _ctx); /*local-var<3288,float64>*/
      _x_x1228 = kk_ref_get(_x_x1229,kk_context()); /*4478*/
      _x_x1227 = kk_double_unbox(_x_x1228, KK_OWNED, _ctx); /*float64*/
      _x_x1226 = (_x_x1227 - t); /*float64*/
      c = (_x_x1226 + _uniq_x_10280); /*float64*/
    }
    else {
      double _x_x1230 = (_uniq_x_10280 - t); /*float64*/
      double _x_x1231;
      kk_box_t _x_x1232;
      kk_ref_t _x_x1233 = kk_ref_dup(total, _ctx); /*local-var<3288,float64>*/
      _x_x1232 = kk_ref_get(_x_x1233,kk_context()); /*4501*/
      _x_x1231 = kk_double_unbox(_x_x1232, KK_OWNED, _ctx); /*float64*/
      c = (_x_x1230 + _x_x1231); /*float64*/
    }
    double _b_x448_450;
    double _x_x1234;
    kk_box_t _x_x1235;
    kk_ref_t _x_x1236 = kk_ref_dup(comp, _ctx); /*local-var<3288,float64>*/
    _x_x1235 = kk_ref_get(_x_x1236,kk_context()); /*4543*/
    _x_x1234 = kk_double_unbox(_x_x1235, KK_OWNED, _ctx); /*float64*/
    _b_x448_450 = (_x_x1234 + c); /*float64*/
    kk_unit_t __ = kk_Unit;
    kk_ref_set_borrow(comp,(kk_double_box(_b_x448_450, _ctx)),kk_context());
    kk_unit_t _uniq_x___10282 = kk_Unit;
    kk_ref_set_borrow(total,(kk_double_box(t, _ctx)),kk_context());
    { // tailcall
      _uniq_xs_10277 = _uniq_xx_10281;
      goto kk__tailcall;
    }
  }
  {
    kk_ref_drop(total, _ctx);
    kk_ref_drop(comp, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// lifted local: sum, @spec-x10276
// specialized: std/core/list/foreach, on parameters @uniq-action@10273, using:
// @uniq-action@10273 = fn<((local :: H -> X)<(h :: H)>)>(x: float64){
//   val t : float64;
//   val c : float64;
//   val _ : ();
//   std/core/types/local-set<float64,(total :: E),(h :: H)>(total, t);
// }

kk_unit_t kk_std_num_float64__lift_sum_10335(kk_ref_t comp, kk_ref_t total, kk_std_core_types__list _uniq_xs_10272, kk_context_t* _ctx) { /* forall<h> (comp : local-var<h,float64>, total : local-var<h,float64>, list<float64>) -> (local<h>) () */ 
  if (kk_std_core_types__is_Nil(_uniq_xs_10272, _ctx)) {
    kk_ref_drop(total, _ctx);
    kk_ref_drop(comp, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    kk_std_num_float64__lift_sum_10336(comp, total, _uniq_xs_10272, _ctx); return kk_Unit;
  }
}
 
// Return the sum of a list of floats.
// Uses [Kahan-Babu&scaron;kan-Neumaier summation](https://en.wikipedia.org/wiki/Kahan_summation_algorithm#Further_enhancements)
// to minimize rounding errors. This
// is more precise as Kahan summation and about as fast.
// `[1.0e3,1.0e97,1.0e3,-1.0e97].sum == 2000.0`
// while
// `[1.0e3,1.0e97,1.0e3,-1.0e97].foldl(0.0,(+)) == 0.0` (!)
// A. Neumaier, _Rundungsfehleranalyse einiger Verfahren zur Summation endlicher Summen_.
// Math. Mechanik, 54:39--51, 1974.

double kk_std_num_float64_sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  kk_ref_t loc = kk_ref_alloc((kk_double_box(0x0p+0, _ctx)),kk_context()); /*local-var<3288,float64>*/;
  kk_ref_t loc_0 = kk_ref_alloc((kk_double_box(0x0p+0, _ctx)),kk_context()); /*local-var<3288,float64>*/;
  kk_unit_t ___0 = kk_Unit;
  kk_ref_t _x_x1237 = kk_ref_dup(loc_0, _ctx); /*local-var<3288,float64>*/
  kk_ref_t _x_x1238 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
  kk_std_num_float64__lift_sum_10335(_x_x1237, _x_x1238, xs, _ctx);
  double res_0;
  double _x_x1239;
  kk_box_t _x_x1240;
  kk_ref_t _x_x1241 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
  _x_x1240 = kk_ref_get(_x_x1241,kk_context()); /*4575*/
  _x_x1239 = kk_double_unbox(_x_x1240, KK_OWNED, _ctx); /*float64*/
  double _x_x1242;
  kk_box_t _x_x1243;
  kk_ref_t _x_x1244 = kk_ref_dup(loc_0, _ctx); /*local-var<3288,float64>*/
  _x_x1243 = kk_ref_get(_x_x1244,kk_context()); /*4575*/
  _x_x1242 = kk_double_unbox(_x_x1243, KK_OWNED, _ctx); /*float64*/
  res_0 = (_x_x1239 + _x_x1242); /*float64*/
  double res;
  kk_box_t _x_x1245 = kk_std_core_hnd_prompt_local_var(loc_0, kk_double_box(res_0, _ctx), _ctx); /*9564*/
  res = kk_double_unbox(_x_x1245, KK_OWNED, _ctx); /*float64*/
  kk_box_t _x_x1246 = kk_std_core_hnd_prompt_local_var(loc, kk_double_box(res, _ctx), _ctx); /*9564*/
  return kk_double_unbox(_x_x1246, KK_OWNED, _ctx);
}
 
// The hypotenuse of `x` and `y`: `sqrt(x*x + y*y)`.
// Prevents overflow for large numbers.

double kk_std_num_float64_hypot(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  double xx = kk_double_abs(x); /*float64*/;
  double yy = kk_double_abs(y); /*float64*/;
  double lo;
  bool _match_x521 = (xx <= yy); /*bool*/;
  if (_match_x521) {
    lo = xx; /*float64*/
  }
  else {
    lo = yy; /*float64*/
  }
  double hi;
  bool _match_x520 = (xx >= yy); /*bool*/;
  if (_match_x520) {
    hi = xx; /*float64*/
  }
  else {
    hi = yy; /*float64*/
  }
  bool _match_x519 = (hi == (0x0p+0)); /*bool*/;
  if (_match_x519) {
    return 0x0p+0;
  }
  {
    double z = (lo / hi); /*float64*/;
    double _x_x1247;
    double _x_x1248;
    double _x_x1249 = (z * z); /*float64*/
    _x_x1248 = (0x1p0 + _x_x1249); /*float64*/
    _x_x1247 = sqrt(_x_x1248); /*float64*/
    return (hi * _x_x1247);
  }
}
 
// The square root of the sum of the squares of three floats.
// Prevents overflow for large numbers.

double kk_std_num_float64_xyz_fs_hypot(double x, double y, double z, kk_context_t* _ctx) { /* (x : float64, y : float64, z : float64) -> float64 */ 
  double xx = kk_double_abs(x); /*float64*/;
  double yy = kk_double_abs(y); /*float64*/;
  double zz = kk_double_abs(z); /*float64*/;
  double x_0_10125;
  bool _match_x518 = (xx >= yy); /*bool*/;
  if (_match_x518) {
    x_0_10125 = xx; /*float64*/
  }
  else {
    x_0_10125 = yy; /*float64*/
  }
  double hi;
  bool _match_x517 = (x_0_10125 >= zz); /*bool*/;
  if (_match_x517) {
    hi = x_0_10125; /*float64*/
  }
  else {
    hi = zz; /*float64*/
  }
  bool _match_x516 = (hi == (0x0p+0)); /*bool*/;
  if (_match_x516) {
    return 0x0p+0;
  }
  {
    double x_4_10131 = (zz / hi); /*float64*/;
    double x_2_10129 = (xx / hi); /*float64*/;
    double x_3_10130 = (yy / hi); /*float64*/;
    double _x_x1250;
    double _x_x1251;
    double _x_x1252;
    double _x_x1253 = (x_2_10129 * x_2_10129); /*float64*/
    double _x_x1254 = (x_3_10130 * x_3_10130); /*float64*/
    _x_x1252 = (_x_x1253 + _x_x1254); /*float64*/
    double _x_x1255 = (x_4_10131 * x_4_10131); /*float64*/
    _x_x1251 = (_x_x1252 + _x_x1255); /*float64*/
    _x_x1250 = sqrt(_x_x1251); /*float64*/
    return (hi * _x_x1250);
  }
}
 
// lifted local: list/@lift-abs-max@10337, list/abs-max, @spec-x10299
// specialized: std/core/list/@unroll-foldl@10005, on parameters @uniq-f@10294, using:
// @uniq-f@10294 = fn(m: float64, x: float64){
//   val x@0@10134 : float64
//         = std/num/float64/abs(x);
//   match ((std/num/float64/(>=)(x@0@10134, m))) {
//     ((std/core/types/True() : bool ) as @pat: bool)
//        -> x@0@10134;
//     ((@skip std/core/types/False() : bool ) as @pat@0: bool)
//        -> m;
//   };
// }

double kk_std_num_float64_list_fs__lift_abs_max_10338(kk_std_core_types__list _uniq_xs_10292, double _uniq_z_10293, kk_context_t* _ctx) { /* (list<float64>, float64) -> float64 */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(_uniq_xs_10292, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1256 = kk_std_core_types__as_Cons(_uniq_xs_10292, _ctx);
    kk_box_t _box_x472 = _con_x1256->head;
    kk_std_core_types__list _uniq_xx_10297 = _con_x1256->tail;
    double _uniq_x_10296 = kk_double_unbox(_box_x472, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_uniq_xs_10292, _ctx)) {
      kk_box_drop(_box_x472, _ctx);
      kk_datatype_ptr_free(_uniq_xs_10292, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_uniq_xx_10297, _ctx);
      kk_datatype_ptr_decref(_uniq_xs_10292, _ctx);
    }
    double x_0_10134 = kk_double_abs(_uniq_x_10296); /*float64*/;
    { // tailcall
      double _x_x1257;
      bool _match_x514 = (x_0_10134 >= _uniq_z_10293); /*bool*/;
      if (_match_x514) {
        _x_x1257 = x_0_10134; /*float64*/
      }
      else {
        _x_x1257 = _uniq_z_10293; /*float64*/
      }
      _uniq_xs_10292 = _uniq_xx_10297;
      _uniq_z_10293 = _x_x1257;
      goto kk__tailcall;
    }
  }
  {
    return _uniq_z_10293;
  }
}
 
// lifted local: list/abs-max, @spec-x10291
// specialized: std/core/list/foldl, on parameters @uniq-f@10288, using:
// @uniq-f@10288 = fn(m: float64, x: float64){
//   val x@0@10134 : float64
//         = std/num/float64/abs(x);
//   match ((std/num/float64/(>=)(x@0@10134, m))) {
//     ((std/core/types/True() : bool ) as @pat: bool)
//        -> x@0@10134;
//     ((@skip std/core/types/False() : bool ) as @pat@0: bool)
//        -> m;
//   };
// }

double kk_std_num_float64_list_fs__lift_abs_max_10337(kk_std_core_types__list _uniq_xs_10286, double _uniq_z_10287, kk_context_t* _ctx) { /* (list<float64>, float64) -> float64 */ 
  if (kk_std_core_types__is_Nil(_uniq_xs_10286, _ctx)) {
    return _uniq_z_10287;
  }
  {
    return kk_std_num_float64_list_fs__lift_abs_max_10338(_uniq_xs_10286, _uniq_z_10287, _ctx);
  }
}
 
// lifted local: list/@lift-hypot@10339, list/hypot, @spec-x10315
// specialized: std/core/list/@unroll-foldl@10005, on parameters @uniq-f@10310, using:
// @uniq-f@10310 = fn(m: float64, x: float64){
//   val x@0@10134 : float64
//         = std/num/float64/abs(x);
//   match ((std/num/float64/(>=)(x@0@10134, m))) {
//     ((std/core/types/True() : bool ) as @pat: bool)
//        -> x@0@10134;
//     ((@skip std/core/types/False() : bool ) as @pat@0: bool)
//        -> m;
//   };
// }

double kk_std_num_float64_list_fs__lift_hypot_10340(kk_std_core_types__list _uniq_xs_10308, double _uniq_z_10309, kk_context_t* _ctx) { /* (list<float64>, float64) -> float64 */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(_uniq_xs_10308, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1258 = kk_std_core_types__as_Cons(_uniq_xs_10308, _ctx);
    kk_box_t _box_x473 = _con_x1258->head;
    kk_std_core_types__list _uniq_xx_10313 = _con_x1258->tail;
    double _uniq_x_10312 = kk_double_unbox(_box_x473, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_uniq_xs_10308, _ctx)) {
      kk_box_drop(_box_x473, _ctx);
      kk_datatype_ptr_free(_uniq_xs_10308, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_uniq_xx_10313, _ctx);
      kk_datatype_ptr_decref(_uniq_xs_10308, _ctx);
    }
    double x_0_10134 = kk_double_abs(_uniq_x_10312); /*float64*/;
    { // tailcall
      double _x_x1259;
      bool _match_x513 = (x_0_10134 >= _uniq_z_10309); /*bool*/;
      if (_match_x513) {
        _x_x1259 = x_0_10134; /*float64*/
      }
      else {
        _x_x1259 = _uniq_z_10309; /*float64*/
      }
      _uniq_xs_10308 = _uniq_xx_10313;
      _uniq_z_10309 = _x_x1259;
      goto kk__tailcall;
    }
  }
  {
    return _uniq_z_10309;
  }
}
 
// lifted local: list/hypot, @spec-x10307
// specialized: std/core/list/foldl, on parameters @uniq-f@10304, using:
// @uniq-f@10304 = fn(m: float64, x: float64){
//   val x@0@10134 : float64
//         = std/num/float64/abs(x);
//   match ((std/num/float64/(>=)(x@0@10134, m))) {
//     ((std/core/types/True() : bool ) as @pat: bool)
//        -> x@0@10134;
//     ((@skip std/core/types/False() : bool ) as @pat@0: bool)
//        -> m;
//   };
// }

double kk_std_num_float64_list_fs__lift_hypot_10339(kk_std_core_types__list _uniq_xs_10302, double _uniq_z_10303, kk_context_t* _ctx) { /* (list<float64>, float64) -> float64 */ 
  if (kk_std_core_types__is_Nil(_uniq_xs_10302, _ctx)) {
    return _uniq_z_10303;
  }
  {
    return kk_std_num_float64_list_fs__lift_hypot_10340(_uniq_xs_10302, _uniq_z_10303, _ctx);
  }
}
 
// lifted local: list/@lift-hypot@10341, list/hypot, @spec-x10329
// specialized: std/core/list/@unroll-map@10010, on parameters @uniq-f@10324, using:
// @uniq-f@10324 = fn(x@0: float64){
//   val x@0@10136 : float64
//         = std/num/float64/(/)(x@0, hi);
//   std/num/float64/(*)(x@0@10136, x@0@10136);
// }

kk_std_core_types__list kk_std_num_float64_list_fs__trmc_lift_hypot_10342(double hi, kk_std_core_types__list _uniq_xs_10323, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (hi : float64, list<float64>, ctx<list<float64>>) -> list<float64> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(_uniq_xs_10323, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1260 = kk_std_core_types__as_Cons(_uniq_xs_10323, _ctx);
    kk_box_t _box_x474 = _con_x1260->head;
    kk_std_core_types__list _uniq_xx_10327 = _con_x1260->tail;
    double _uniq_x_10326 = kk_double_unbox(_box_x474, KK_BORROWED, _ctx);
    kk_reuse_t _ru_x698 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_uniq_xs_10323, _ctx)) {
      kk_box_drop(_box_x474, _ctx);
      _ru_x698 = (kk_datatype_ptr_reuse(_uniq_xs_10323, _ctx));
    }
    else {
      kk_std_core_types__list_dup(_uniq_xx_10327, _ctx);
      kk_datatype_ptr_decref(_uniq_xs_10323, _ctx);
    }
    double x_0_10136 = (_uniq_x_10326 / hi); /*float64*/;
    double _trmc_x10347 = (x_0_10136 * x_0_10136); /*float64*/;
    kk_std_core_types__list _trmc_x10348 = kk_datatype_null(); /*list<float64>*/;
    kk_std_core_types__list _trmc_x10349 = kk_std_core_types__new_Cons(_ru_x698, 0, kk_double_box(_trmc_x10347, _ctx), _trmc_x10348, _ctx); /*list<float64>*/;
    kk_field_addr_t _b_x484_489 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10349, _ctx)->tail, _ctx); /*@field-addr<list<float64>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x1261 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10349, _ctx)),_b_x484_489,kk_context()); /*ctx<0>*/
      _uniq_xs_10323 = _uniq_xx_10327;
      _acc = _x_x1261;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x1262 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1262, KK_OWNED, _ctx);
  }
}
 
// lifted local: list/@lift-hypot@10341, list/hypot, @spec-x10329
// specialized: std/core/list/@unroll-map@10010, on parameters @uniq-f@10324, using:
// @uniq-f@10324 = fn(x@0: float64){
//   val x@0@10136 : float64
//         = std/num/float64/(/)(x@0, hi);
//   std/num/float64/(*)(x@0@10136, x@0@10136);
// }

kk_std_core_types__list kk_std_num_float64_list_fs__lift_hypot_10342(double hi_0, kk_std_core_types__list _uniq_xs_10323_0, kk_context_t* _ctx) { /* (hi : float64, list<float64>) -> list<float64> */ 
  kk_std_core_types__cctx _x_x1263 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_num_float64_list_fs__trmc_lift_hypot_10342(hi_0, _uniq_xs_10323_0, _x_x1263, _ctx);
}
 
// lifted local: list/hypot, @spec-x10322
// specialized: std/core/list/map, on parameters @uniq-f@10319, using:
// @uniq-f@10319 = fn(x@0: float64){
//   val x@0@10136 : float64
//         = std/num/float64/(/)(x@0, hi);
//   std/num/float64/(*)(x@0@10136, x@0@10136);
// }

kk_std_core_types__list kk_std_num_float64_list_fs__lift_hypot_10341(double hi, kk_std_core_types__list _uniq_xs_10318, kk_context_t* _ctx) { /* (hi : float64, list<float64>) -> list<float64> */ 
  if (kk_std_core_types__is_Nil(_uniq_xs_10318, _ctx)) {
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    return kk_std_num_float64_list_fs__lift_hypot_10342(hi, _uniq_xs_10318, _ctx);
  }
}
 
// The square root of the sum of squares of a list of floats.
// Prevents overflow for large numbers and uses Kahan-Babu&scaron;kan-Neumaier summation
// for precision.

double kk_std_num_float64_list_fs_hypot(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  double hi;
  kk_std_core_types__list _x_x1264 = kk_std_core_types__list_dup(xs, _ctx); /*list<float64>*/
  hi = kk_std_num_float64_list_fs__lift_hypot_10339(_x_x1264, 0x0p+0, _ctx); /*float64*/
  bool _match_x512 = (hi == (0x0p+0)); /*bool*/;
  if (_match_x512) {
    kk_std_core_types__list_drop(xs, _ctx);
    return 0x0p+0;
  }
  {
    kk_std_core_types__list xs_0_10628 = kk_std_num_float64_list_fs__lift_hypot_10341(hi, xs, _ctx); /*list<float64>*/;
    kk_ref_t loc = kk_ref_alloc((kk_double_box(0x0p+0, _ctx)),kk_context()); /*local-var<3288,float64>*/;
    kk_ref_t loc_0 = kk_ref_alloc((kk_double_box(0x0p+0, _ctx)),kk_context()); /*local-var<3288,float64>*/;
    kk_unit_t ___0 = kk_Unit;
    kk_ref_t _x_x1265 = kk_ref_dup(loc_0, _ctx); /*local-var<3288,float64>*/
    kk_ref_t _x_x1266 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
    kk_std_num_float64__lift_sum_10335(_x_x1265, _x_x1266, xs_0_10628, _ctx);
    double res_0;
    double _x_x1267;
    kk_box_t _x_x1268;
    kk_ref_t _x_x1269 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
    _x_x1268 = kk_ref_get(_x_x1269,kk_context()); /*4575*/
    _x_x1267 = kk_double_unbox(_x_x1268, KK_OWNED, _ctx); /*float64*/
    double _x_x1270;
    kk_box_t _x_x1271;
    kk_ref_t _x_x1272 = kk_ref_dup(loc_0, _ctx); /*local-var<3288,float64>*/
    _x_x1271 = kk_ref_get(_x_x1272,kk_context()); /*4575*/
    _x_x1270 = kk_double_unbox(_x_x1271, KK_OWNED, _ctx); /*float64*/
    res_0 = (_x_x1267 + _x_x1270); /*float64*/
    double res;
    kk_box_t _x_x1273 = kk_std_core_hnd_prompt_local_var(loc_0, kk_double_box(res_0, _ctx), _ctx); /*9564*/
    res = kk_double_unbox(_x_x1273, KK_OWNED, _ctx); /*float64*/
    kk_ref_t _b_x507_509 = loc; /*local-var<3288,float64>*/;
    double _b_x508_510 = res; /*float64*/;
    double _x_x1274;
    double _x_x1275;
    kk_box_t _x_x1276 = kk_std_core_hnd_prompt_local_var(_b_x507_509, kk_double_box(_b_x508_510, _ctx), _ctx); /*9564*/
    _x_x1275 = kk_double_unbox(_x_x1276, KK_OWNED, _ctx); /*float64*/
    _x_x1274 = sqrt(_x_x1275); /*float64*/
    return (hi * _x_x1274);
  }
}

double kk_std_num_float64_rad2deg;

double kk_std_num_float64_deg2rad;
 
// The area hyperbolic tangent of `d`

double kk_std_num_float64_atanh(double d, kk_context_t* _ctx) { /* (d : float64) -> float64 */ 
  return atanh(d);
}
 
// The area hyperbolic cosine of `d`

double kk_std_num_float64_acosh(double d, kk_context_t* _ctx) { /* (d : float64) -> float64 */ 
  return acosh(d);
}
 
// The area hyperbolic sine of `d`

double kk_std_num_float64_asinh(double d, kk_context_t* _ctx) { /* (d : float64) -> float64 */ 
  return asinh(d);
}

// initialization
void kk_std_num_float64__init(kk_context_t* _ctx){
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
  kk_std_text_parse__init(_ctx);
  kk_std_num_int32__init(_ctx);
  kk_std_num_int64__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_std_num_float64_flt_max_prec = kk_integer_from_small(15); /*int*/
  }
  {
    kk_std_num_float64_neginf = kk_std_num_float64_make_neginf(_ctx); /*float64*/
  }
  {
    kk_std_num_float64_posinf = kk_std_num_float64_make_posinf(_ctx); /*float64*/
  }
  {
    kk_std_num_float64_nan = kk_std_num_float64_make_nan(_ctx); /*float64*/
  }
  {
    kk_std_num_float64_rad2deg = ((0x1.68p7) / (0x1.921fb54442d18p1)); /*float64*/
  }
  {
    kk_std_num_float64_deg2rad = ((0x1.921fb54442d18p1) / (0x1.68p7)); /*float64*/
  }
}

// termination
void kk_std_num_float64__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_skip_drop(kk_std_num_float64_deg2rad, _ctx);
  kk_skip_drop(kk_std_num_float64_rad2deg, _ctx);
  kk_skip_drop(kk_std_num_float64_nan, _ctx);
  kk_skip_drop(kk_std_num_float64_posinf, _ctx);
  kk_skip_drop(kk_std_num_float64_neginf, _ctx);
  kk_integer_drop(kk_std_num_float64_flt_max_prec, _ctx);
  kk_std_num_int64__done(_ctx);
  kk_std_num_int32__done(_ctx);
  kk_std_text_parse__done(_ctx);
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
