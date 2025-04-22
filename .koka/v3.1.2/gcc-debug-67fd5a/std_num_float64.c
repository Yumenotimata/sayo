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
 
// Returns the smallest element of a list of floats (or `0` for the empty list)


// lift anonymous function
struct kk_std_num_float64_minimum_fun652__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_minimum_fun652(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_minimum_fun652(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_minimum_fun652, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_minimum_fun652(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x653;
  double _x_x654 = kk_double_unbox(_b_x4, KK_OWNED, _ctx); /*float64*/
  double _x_x655 = kk_double_unbox(_b_x5, KK_OWNED, _ctx); /*float64*/
  _x_x653 = kk_std_num_float64_min(_x_x654, _x_x655, _ctx); /*float64*/
  return kk_double_box(_x_x653, _ctx);
}

double kk_std_num_float64_minimum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    return 0x0p+0;
  }
  {
    struct kk_std_core_types_Cons* _con_x650 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x0 = _con_x650->head;
    kk_std_core_types__list xx = _con_x650->tail;
    double x = kk_double_unbox(_box_x0, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_box_drop(_box_x0, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t _x_x651 = kk_std_core_list_foldl(xx, kk_double_box(x, _ctx), kk_std_num_float64_new_minimum_fun652(_ctx), _ctx); /*1073*/
    return kk_double_unbox(_x_x651, KK_OWNED, _ctx);
  }
}
 
// Returns the largest element of a list of floats (or `0` for the empty list)


// lift anonymous function
struct kk_std_num_float64_maximum_fun658__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_maximum_fun658(kk_function_t _fself, kk_box_t _b_x13, kk_box_t _b_x14, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_maximum_fun658(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_maximum_fun658, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_maximum_fun658(kk_function_t _fself, kk_box_t _b_x13, kk_box_t _b_x14, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x659;
  double _x_x660 = kk_double_unbox(_b_x13, KK_OWNED, _ctx); /*float64*/
  double _x_x661 = kk_double_unbox(_b_x14, KK_OWNED, _ctx); /*float64*/
  _x_x659 = kk_std_num_float64_max(_x_x660, _x_x661, _ctx); /*float64*/
  return kk_double_box(_x_x659, _ctx);
}

double kk_std_num_float64_maximum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    return 0x0p+0;
  }
  {
    struct kk_std_core_types_Cons* _con_x656 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x9 = _con_x656->head;
    kk_std_core_types__list xx = _con_x656->tail;
    double x = kk_double_unbox(_box_x9, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_box_drop(_box_x9, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t _x_x657 = kk_std_core_list_foldl(xx, kk_double_box(x, _ctx), kk_std_num_float64_new_maximum_fun658(_ctx), _ctx); /*1073*/
    return kk_double_unbox(_x_x657, KK_OWNED, _ctx);
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
  int32_t _x_x662;
  kk_integer_t _x_x663;
  if (kk_std_core_types__is_Optional(precision, _ctx)) {
    kk_box_t _box_x18 = precision._cons._Optional.value;
    kk_integer_t _uniq_precision_524 = kk_integer_unbox(_box_x18, _ctx);
    kk_integer_dup(_uniq_precision_524, _ctx);
    kk_std_core_types__optional_drop(precision, _ctx);
    _x_x663 = _uniq_precision_524; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(precision, _ctx);
    _x_x663 = kk_integer_from_small(-17); /*int*/
  }
  _x_x662 = kk_integer_clamp32(_x_x663,kk_context()); /*int32*/
  return kk_std_num_float64_show_expx(d, _x_x662, _ctx);
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
  bool _match_x637 = (dabs < (0x1.203af9ee75616p-50)); /*bool*/;
  if (_match_x637) {
    int32_t _x_x664;
    kk_integer_t _x_x665;
    if (kk_std_core_types__is_Optional(precision, _ctx)) {
      kk_box_t _box_x19 = precision._cons._Optional.value;
      kk_integer_t _uniq_precision_540 = kk_integer_unbox(_box_x19, _ctx);
      kk_integer_dup(_uniq_precision_540, _ctx);
      kk_std_core_types__optional_drop(precision, _ctx);
      _x_x665 = _uniq_precision_540; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(precision, _ctx);
      _x_x665 = kk_integer_from_small(-2); /*int*/
    }
    _x_x664 = kk_integer_clamp32(_x_x665,kk_context()); /*int32*/
    return kk_std_num_float64_show_expx(d, _x_x664, _ctx);
  }
  {
    bool _match_x638 = (dabs > (0x1.b1ae4d6e2ef5p69)); /*bool*/;
    if (_match_x638) {
      int32_t _x_x666;
      kk_integer_t _x_x667;
      if (kk_std_core_types__is_Optional(precision, _ctx)) {
        kk_box_t _box_x20 = precision._cons._Optional.value;
        kk_integer_t _uniq_precision_540_0 = kk_integer_unbox(_box_x20, _ctx);
        kk_integer_dup(_uniq_precision_540_0, _ctx);
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x667 = _uniq_precision_540_0; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x667 = kk_integer_from_small(-2); /*int*/
      }
      _x_x666 = kk_integer_clamp32(_x_x667,kk_context()); /*int32*/
      return kk_std_num_float64_show_expx(d, _x_x666, _ctx);
    }
    {
      int32_t _x_x668;
      kk_integer_t _x_x669;
      if (kk_std_core_types__is_Optional(precision, _ctx)) {
        kk_box_t _box_x21 = precision._cons._Optional.value;
        kk_integer_t _uniq_precision_540_1 = kk_integer_unbox(_box_x21, _ctx);
        kk_integer_dup(_uniq_precision_540_1, _ctx);
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x669 = _uniq_precision_540_1; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x669 = kk_integer_from_small(-2); /*int*/
      }
      _x_x668 = kk_integer_clamp32(_x_x669,kk_context()); /*int32*/
      return kk_std_num_float64_show_fixedx(d, _x_x668, _ctx);
    }
  }
}
 
// Show a `:float64` as a string.
// If `d >= 1.0e-5` and `d < 1.0e+21`, `show-fixed` is used and otherwise `show-exp`.
// Default `precision` is `-17`.

kk_string_t kk_std_num_float64_show(double d, kk_std_core_types__optional precision, kk_context_t* _ctx) { /* (d : float64, precision : ? int) -> string */ 
  double dabs = kk_double_abs(d); /*float64*/;
  bool _match_x635 = (dabs >= (0x1.4f8b588e368f1p-17)); /*bool*/;
  if (_match_x635) {
    bool _match_x636 = (dabs < (0x1.b1ae4d6e2ef5p69)); /*bool*/;
    if (_match_x636) {
      kk_std_core_types__optional _x_x670;
      kk_box_t _x_x671;
      kk_integer_t _x_x672;
      if (kk_std_core_types__is_Optional(precision, _ctx)) {
        kk_box_t _box_x22 = precision._cons._Optional.value;
        kk_integer_t _uniq_precision_615 = kk_integer_unbox(_box_x22, _ctx);
        kk_integer_dup(_uniq_precision_615, _ctx);
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x672 = _uniq_precision_615; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x672 = kk_integer_from_small(-17); /*int*/
      }
      _x_x671 = kk_integer_box(_x_x672, _ctx); /*7*/
      _x_x670 = kk_std_core_types__new_Optional(_x_x671, _ctx); /*? 7*/
      return kk_std_num_float64_show_fixed(d, _x_x670, _ctx);
    }
    {
      int32_t _x_x673;
      kk_integer_t _x_x674;
      if (kk_std_core_types__is_Optional(precision, _ctx)) {
        kk_box_t _box_x24 = precision._cons._Optional.value;
        kk_integer_t _uniq_precision_615_0 = kk_integer_unbox(_box_x24, _ctx);
        kk_integer_dup(_uniq_precision_615_0, _ctx);
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x674 = _uniq_precision_615_0; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(precision, _ctx);
        _x_x674 = kk_integer_from_small(-17); /*int*/
      }
      _x_x673 = kk_integer_clamp32(_x_x674,kk_context()); /*int32*/
      return kk_std_num_float64_show_expx(d, _x_x673, _ctx);
    }
  }
  {
    int32_t _x_x675;
    kk_integer_t _x_x676;
    if (kk_std_core_types__is_Optional(precision, _ctx)) {
      kk_box_t _box_x25 = precision._cons._Optional.value;
      kk_integer_t _uniq_precision_615_1 = kk_integer_unbox(_box_x25, _ctx);
      kk_integer_dup(_uniq_precision_615_1, _ctx);
      kk_std_core_types__optional_drop(precision, _ctx);
      _x_x676 = _uniq_precision_615_1; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(precision, _ctx);
      _x_x676 = kk_integer_from_small(-17); /*int*/
    }
    _x_x675 = kk_integer_clamp32(_x_x676,kk_context()); /*int32*/
    return kk_std_num_float64_show_expx(d, _x_x675, _ctx);
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
  bool _match_x631 = kk_integer_lte_borrow(prec,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x631) {
    kk_integer_drop(prec, _ctx);
    return kk_double_round_even(d,kk_context());
  }
  {
    double p;
    double _x_x680 = kk_integer_as_double(prec,kk_context()); /*float64*/
    p = pow(10.0,_x_x680); /*float64*/
    double _x_x681;
    double _x_x682 = (d * p); /*float64*/
    _x_x681 = kk_double_round_even(_x_x682,kk_context()); /*float64*/
    return (_x_x681 / p);
  }
}
 
// Round a `:float64` to a `:float32`

float kk_std_num_float64_float64_fs_float32(double f, kk_context_t* _ctx) { /* (f : float64) -> float32 */ 
  return (float)(f);
}
 
// Returns `ln(exp(x) + exp(y))`.
// Avoids overlow/underflow errors.

double kk_std_num_float64_lnaddexp(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  bool _match_x629 = (x == y); /*bool*/;
  if (_match_x629) {
    return (x + (0x1.62e42fefa39efp-1));
  }
  {
    double z = (x - y); /*float64*/;
    bool _match_x630 = (z > (0x0p+0)); /*bool*/;
    if (_match_x630) {
      double _x_x687;
      double _x_x688;
      double _x_x689 = (-z); /*float64*/
      _x_x688 = exp(_x_x689); /*float64*/
      _x_x687 = log1p(_x_x688); /*float64*/
      return (x + _x_x687);
    }
    {
      double _x_x690;
      double _x_x691 = exp(z); /*float64*/
      _x_x690 = log1p(_x_x691); /*float64*/
      return (y + _x_x690);
    }
  }
}
 
// Returns `log2( exp2(x) + exp2(y) )`.
// Avoids overlow/underflow errors.

double kk_std_num_float64_logaddexp2(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  bool _match_x627 = (x == y); /*bool*/;
  if (_match_x627) {
    return (x + 0x1p0);
  }
  {
    double z = (x - y); /*float64*/;
    bool _match_x628 = (z > (0x0p+0)); /*bool*/;
    if (_match_x628) {
      double x_0_10009;
      double _x_x692 = (-z); /*float64*/
      x_0_10009 = exp2(_x_x692); /*float64*/
      double _x_x693;
      double _x_x694 = log1p(x_0_10009); /*float64*/
      _x_x693 = ((0x1.71547652b82fep0) * _x_x694); /*float64*/
      return (x + _x_x693);
    }
    {
      double x_1_10010 = exp2(z); /*float64*/;
      double _x_x695;
      double _x_x696 = log1p(x_1_10010); /*float64*/
      _x_x695 = ((0x1.71547652b82fep0) * _x_x696); /*float64*/
      return (y + _x_x695);
    }
  }
}
 
// Return if two floats are nearly equal with respect to some `epsilon` (=`8*flt-epsilon`).
// The epsilon is the nearest difference for numbers around 1.0. The routine automatically
// scales the epsilon for larger and smaller numbers, and for subnormal numbers.

bool kk_std_num_float64_nearly_eq(double x, double y, kk_std_core_types__optional epsilon, kk_context_t* _ctx) { /* (x : float64, y : float64, epsilon : ? float64) -> bool */ 
  double _uniq_epsilon_1077;
  if (kk_std_core_types__is_Optional(epsilon, _ctx)) {
    kk_box_t _box_x27 = epsilon._cons._Optional.value;
    double _uniq_epsilon_1078 = kk_double_unbox(_box_x27, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(epsilon, _ctx);
    _uniq_epsilon_1077 = _uniq_epsilon_1078; /*float64*/
  }
  else {
    kk_std_core_types__optional_drop(epsilon, _ctx);
    _uniq_epsilon_1077 = (0x1p3 * (0x1p-52)); /*float64*/
  }
  bool _match_x622 = (x == y); /*bool*/;
  if (_match_x622) {
    return true;
  }
  {
    double diff;
    double _x_x697 = (x - y); /*float64*/
    diff = kk_double_abs(_x_x697); /*float64*/
    bool _match_x623 = (x == (0x0p+0)); /*bool*/;
    if (_match_x623) {
      double _x_x698 = (0x1p1 * diff); /*float64*/
      double _x_x699 = (_uniq_epsilon_1077 * (0x1p-1022)); /*float64*/
      return (_x_x698 < _x_x699);
    }
    {
      bool _match_x624 = (y == (0x0p+0)); /*bool*/;
      if (_match_x624) {
        double _x_x700 = (0x1p1 * diff); /*float64*/
        double _x_x701 = (_uniq_epsilon_1077 * (0x1p-1022)); /*float64*/
        return (_x_x700 < _x_x701);
      }
      {
        bool _match_x625 = (diff < (0x1p-1022)); /*bool*/;
        if (_match_x625) {
          double _x_x702 = (0x1p1 * diff); /*float64*/
          double _x_x703 = (_uniq_epsilon_1077 * (0x1p-1022)); /*float64*/
          return (_x_x702 < _x_x703);
        }
        {
          double sum_0;
          double _x_x704 = kk_double_abs(x); /*float64*/
          double _x_x705 = kk_double_abs(y); /*float64*/
          sum_0 = (_x_x704 + _x_x705); /*float64*/
          double _x_x706;
          double _x_x707 = (0x1p1 * diff); /*float64*/
          double _x_x708;
          bool _match_x626 = (sum_0 > (0x1.fffffffffffffp1023)); /*bool*/;
          if (_match_x626) {
            _x_x708 = 0x1.fffffffffffffp1023; /*float64*/
          }
          else {
            _x_x708 = sum_0; /*float64*/
          }
          _x_x706 = (_x_x707 / _x_x708); /*float64*/
          return (_x_x706 < _uniq_epsilon_1077);
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
  bool _match_x620 = kk_integer_gte_borrow(e,(kk_integer_from_small(-1022)),kk_context()); /*bool*/;
  if (_match_x620) {
    bool _match_x621 = kk_integer_lte_borrow(e,(kk_integer_from_small(1023)),kk_context()); /*bool*/;
    if (_match_x621) {
      int64_t i_10011;
      kk_integer_t _x_x709 = kk_integer_add_small_const(e, 1023, _ctx); /*int*/
      i_10011 = kk_std_num_int64_int64(_x_x709, _ctx); /*int64*/
      int64_t _x_x710;
      int64_t _x_x711 = (KK_I64(52)); /*int64*/
      _x_x710 = kk_shl64(i_10011,_x_x711); /*int64*/
      return kk_std_num_float64_float64_from_bits(_x_x710, _ctx);
    }
    {
      double _x_x712 = kk_integer_as_double(e,kk_context()); /*float64*/
      return exp2(_x_x712);
    }
  }
  {
    double _x_x713 = kk_integer_as_double(e,kk_context()); /*float64*/
    return exp2(_x_x713);
  }
}
 
// 'Load exponent': returns `x`&middot;2^`e`^ for a `is-finite` `x` and
// otherwise `x` itself. See also `encode` which loads an integer mantissa.

double kk_std_num_float64_ldexp(double x, kk_integer_t e, kk_context_t* _ctx) { /* (x : float64, e : int) -> float64 */ 
  bool b_10015 = isfinite(x); /*bool*/;
  if (b_10015) {
    bool _match_x612 = kk_integer_gte_borrow(e,(kk_integer_from_small(-1022)),kk_context()); /*bool*/;
    if (_match_x612) {
      bool _match_x616 = kk_integer_lte_borrow(e,(kk_integer_from_small(1023)),kk_context()); /*bool*/;
      if (_match_x616) {
        double _x_x715 = kk_std_num_float64_exp2i(e, _ctx); /*float64*/
        return (x * _x_x715);
      }
      {
        bool _match_x617 = kk_integer_lte_borrow(e,(kk_integer_from_small(2046)),kk_context()); /*bool*/;
        if (_match_x617) {
          double x_1_10018 = (x * 0x1p1023); /*float64*/;
          kk_integer_t e_1_10019 = kk_integer_add_small_const(e, -1023, _ctx); /*int*/;
          double _x_x716 = kk_std_num_float64_exp2i(e_1_10019, _ctx); /*float64*/
          return (x_1_10018 * _x_x716);
        }
        {
          bool _match_x618 = kk_integer_lte_borrow(e,(kk_integer_from_small(3069)),kk_context()); /*bool*/;
          if (_match_x618) {
            double x_3_10022;
            double _x_x717 = (x * 0x1p1023); /*float64*/
            x_3_10022 = (_x_x717 * 0x1p1023); /*float64*/
            kk_integer_t e_2_10023 = kk_integer_add_small_const(e, -2046, _ctx); /*int*/;
            double _x_x718 = kk_std_num_float64_exp2i(e_2_10023, _ctx); /*float64*/
            return (x_3_10022 * _x_x718);
          }
          {
            kk_integer_drop(e, _ctx);
            bool _match_x619 = (x < (0x0p+0)); /*bool*/;
            if (_match_x619) {
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
      bool _match_x613 = kk_integer_gte_borrow(e,(kk_integer_from_small(-2044)),kk_context()); /*bool*/;
      if (_match_x613) {
        double x_5_10026 = (x * (0x1p-1022)); /*float64*/;
        kk_integer_t e_3_10027 = kk_integer_add_small_const(e, 1022, _ctx); /*int*/;
        double _x_x719 = kk_std_num_float64_exp2i(e_3_10027, _ctx); /*float64*/
        return (x_5_10026 * _x_x719);
      }
      {
        bool _match_x614 = kk_integer_gte_borrow(e,(kk_integer_from_small(-3066)),kk_context()); /*bool*/;
        if (_match_x614) {
          double x_7_10030;
          double _x_x720 = (x * (0x1p-1022)); /*float64*/
          x_7_10030 = (_x_x720 * (0x1p-1022)); /*float64*/
          kk_integer_t e_4_10031 = kk_integer_add_small_const(e, 2044, _ctx); /*int*/;
          double _x_x721 = kk_std_num_float64_exp2i(e_4_10031, _ctx); /*float64*/
          return (x_7_10030 * _x_x721);
        }
        {
          kk_integer_drop(e, _ctx);
          bool _match_x615 = (x < (0x0p+0)); /*bool*/;
          if (_match_x615) {
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
  int64_t _x_x723;
  int64_t _x_x724;
  int64_t _x_x725 = (KK_I64(52)); /*int64*/
  _x_x724 = (int64_t)kk_shr64(i,_x_x725); /*int64*/
  int64_t _x_x726 = (KK_I64(2047)); /*int64*/
  _x_x723 = _x_x724 & _x_x726; /*int64*/
  int64_t _x_x727 = (KK_I64(1043)); /*int64*/
  exp = (int64_t)((uint64_t)_x_x723 - (uint64_t)_x_x727); /*int64*/
  int64_t man;
  int64_t _x_x728;
  int64_t _x_x729 = (KK_I64(4503599627370495)); /*int64*/
  _x_x728 = i & _x_x729; /*int64*/
  int64_t _x_x730 = (KK_I64(4503599627370496)); /*int64*/
  man = (int64_t)((uint64_t)_x_x728 + (uint64_t)_x_x730); /*int64*/
  kk_integer_t x_0_10039 = kk_integer_from_int64(exp,kk_context()); /*int*/;
  kk_integer_t x_10037 = kk_integer_add_small_const(x_0_10039, -32, _ctx); /*int*/;
  kk_integer_t _b_x29_31;
  int64_t _x_x731;
  bool _match_x611 = 0 > i; /*bool*/;
  if (_match_x611) {
    int64_t _x_x732 = (KK_I64(0)); /*int64*/
    _x_x731 = (int64_t)((uint64_t)_x_x732 - (uint64_t)man); /*int64*/
  }
  else {
    _x_x731 = man; /*int64*/
  }
  _b_x29_31 = kk_integer_from_int64(_x_x731,kk_context()); /*int*/
  kk_integer_t _b_x30_32;
  kk_integer_t _x_x733;
  if (kk_std_core_types__is_Optional(e_adjust, _ctx)) {
    kk_box_t _box_x28 = e_adjust._cons._Optional.value;
    kk_integer_t _uniq_e_adjust_1665 = kk_integer_unbox(_box_x28, _ctx);
    kk_integer_dup(_uniq_e_adjust_1665, _ctx);
    kk_std_core_types__optional_drop(e_adjust, _ctx);
    _x_x733 = _uniq_e_adjust_1665; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(e_adjust, _ctx);
    _x_x733 = kk_integer_from_small(0); /*int*/
  }
  _b_x30_32 = kk_integer_add(x_10037,_x_x733,kk_context()); /*int*/
  return kk_std_core_types__new_Tuple2(kk_integer_box(_b_x29_31, _ctx), kk_integer_box(_b_x30_32, _ctx), _ctx);
}
 
// Decode a float64 `d` into a tuple `(m,e)` of a mantissa `m` and exponent `e`
// such that `m`&middot;2^`e`^ =  `d` exactly. The mantissa `m` is
// always either 0 or in the range [2^52^, 2^53^). See also `frexp`.

kk_std_core_types__tuple2 kk_std_num_float64_decode(double d, kk_context_t* _ctx) { /* (d : float64) -> (int, int) */ 
  bool _match_x608 = (d == (0x0p+0)); /*bool*/;
  if (_match_x608) {
    return kk_std_core_types__new_Tuple2(kk_integer_box(kk_integer_from_small(0), _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
  }
  {
    bool _match_x609 = (d != (0x0p+0)); /*bool*/;
    if (_match_x609) {
      bool _match_x610;
      double _x_x734 = kk_double_abs(d); /*float64*/
      _match_x610 = (_x_x734 < (0x1p-1022)); /*bool*/
      if (_match_x610) {
        double _x_x735 = (d * 0x1p54); /*float64*/
        kk_std_core_types__optional _x_x736 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(-54), _ctx), _ctx); /*? 7*/
        return kk_std_num_float64_decode_normalized(_x_x735, _x_x736, _ctx);
      }
      {
        kk_std_core_types__optional _x_x737 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*? 7*/
        return kk_std_num_float64_decode_normalized(d, _x_x737, _ctx);
      }
    }
    {
      kk_std_core_types__optional _x_x738 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*? 7*/
      return kk_std_num_float64_decode_normalized(d, _x_x738, _ctx);
    }
  }
}
 
// 'Fraction/exponent': return the normalized fraction `f` and exponent `exp`
// for a number `x` such that `x == f`&middot;2^`exp`^.
// The absolute value of the fraction `f` is always in the range [0.5, 1.0), or
// one of `0.0`, `-0.0`, `neginf`, `posinf`, or `nan`.
// See also `decode` which  decodes to an integer mantissa.

kk_std_core_types__tuple2 kk_std_num_float64_frexp(double x, kk_context_t* _ctx) { /* (x : float64) -> (float64, int) */ 
  bool b_10042 = isfinite(x); /*bool*/;
  if (b_10042) {
    bool _match_x604 = (x == (0x0p+0)); /*bool*/;
    if (_match_x604) {
      bool _match_x606;
      double _x_x739 = (0x1p0 / x); /*float64*/
      _match_x606 = (isinf(_x_x739) && signbit(_x_x739)); /*bool*/
      if (_match_x606) {
        return kk_std_core_types__new_Tuple2(kk_double_box(x, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
      }
      {
        kk_std_core_types__tuple2 _match_x607 = kk_std_num_float64_decode(x, _ctx); /*(int, int)*/;
        {
          kk_box_t _box_x45 = _match_x607.fst;
          kk_box_t _box_x46 = _match_x607.snd;
          kk_integer_t m = kk_integer_unbox(_box_x45, _ctx);
          kk_integer_t e = kk_integer_unbox(_box_x46, _ctx);
          kk_integer_dup(e, _ctx);
          kk_integer_dup(m, _ctx);
          kk_std_core_types__tuple2_drop(_match_x607, _ctx);
          double _b_x47_57;
          double _x_x740 = kk_integer_as_double(m,kk_context()); /*float64*/
          _b_x47_57 = (_x_x740 * (0x1p-53)); /*float64*/
          kk_integer_t _b_x48_58 = kk_integer_add_small_const(e, 53, _ctx); /*int*/;
          return kk_std_core_types__new_Tuple2(kk_double_box(_b_x47_57, _ctx), kk_integer_box(_b_x48_58, _ctx), _ctx);
        }
      }
    }
    {
      kk_std_core_types__tuple2 _match_x605 = kk_std_num_float64_decode(x, _ctx); /*(int, int)*/;
      {
        kk_box_t _box_x49 = _match_x605.fst;
        kk_box_t _box_x50 = _match_x605.snd;
        kk_integer_t m_0 = kk_integer_unbox(_box_x49, _ctx);
        kk_integer_t e_0 = kk_integer_unbox(_box_x50, _ctx);
        kk_integer_dup(e_0, _ctx);
        kk_integer_dup(m_0, _ctx);
        kk_std_core_types__tuple2_drop(_match_x605, _ctx);
        double _b_x51_59;
        double _x_x741 = kk_integer_as_double(m_0,kk_context()); /*float64*/
        _b_x51_59 = (_x_x741 * (0x1p-53)); /*float64*/
        kk_integer_t _b_x52_60 = kk_integer_add_small_const(e_0, 53, _ctx); /*int*/;
        return kk_std_core_types__new_Tuple2(kk_double_box(_b_x51_59, _ctx), kk_integer_box(_b_x52_60, _ctx), _ctx);
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
  bool _match_x600 = isnan(x); /*bool*/;
  if (_match_x600) {
    return x;
  }
  {
    bool _match_x601 = (isinf(x) && signbit(x)); /*bool*/;
    if (_match_x601) {
      return x;
    }
    {
      bool _match_x602 = (x == (0x0p+0)); /*bool*/;
      if (_match_x602) {
        return (-(0x1p-1074));
      }
      {
        int64_t i = kk_std_num_float64_float64_to_bits(x, _ctx); /*int64*/;
        int64_t next;
        bool _match_x603 = 0 > i; /*bool*/;
        if (_match_x603) {
          int64_t _x_x742 = (KK_I64(1)); /*int64*/
          next = (int64_t)((uint64_t)i + (uint64_t)_x_x742); /*int64*/
        }
        else {
          int64_t _x_x743 = (KK_I64(1)); /*int64*/
          next = (int64_t)((uint64_t)i - (uint64_t)_x_x743); /*int64*/
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
  bool _match_x596 = isnan(x); /*bool*/;
  if (_match_x596) {
    return x;
  }
  {
    bool _match_x597 = (isinf(x) && !signbit(x)); /*bool*/;
    if (_match_x597) {
      return x;
    }
    {
      bool _match_x598 = (x == (0x0p+0)); /*bool*/;
      if (_match_x598) {
        return 0x1p-1074;
      }
      {
        int64_t i = kk_std_num_float64_float64_to_bits(x, _ctx); /*int64*/;
        int64_t next;
        bool _match_x599 = 0 > i; /*bool*/;
        if (_match_x599) {
          int64_t _x_x744 = (KK_I64(1)); /*int64*/
          next = (int64_t)((uint64_t)i - (uint64_t)_x_x744); /*int64*/
        }
        else {
          int64_t _x_x745 = (KK_I64(1)); /*int64*/
          next = (int64_t)((uint64_t)i + (uint64_t)_x_x745); /*int64*/
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
  int64_t i_10052;
  int64_t _x_x746 = (KK_I64(63)); /*int64*/
  i_10052 = kk_sar64(bx,_x_x746); /*int64*/
  int64_t ix;
  int64_t _x_x747;
  int64_t _x_x748 = (KK_I64(1)); /*int64*/
  _x_x747 = (int64_t)kk_shr64(i_10052,_x_x748); /*int64*/
  ix = _x_x747 ^ bx; /*int64*/
  int64_t i_1_10056;
  int64_t _x_x749 = (KK_I64(63)); /*int64*/
  i_1_10056 = kk_sar64(by,_x_x749); /*int64*/
  int64_t iy;
  int64_t _x_x750;
  int64_t _x_x751 = (KK_I64(1)); /*int64*/
  _x_x750 = (int64_t)kk_shr64(i_1_10056,_x_x751); /*int64*/
  iy = _x_x750 ^ by; /*int64*/
  bool _match_x594 = (ix < iy); /*bool*/;
  if (_match_x594) {
    return kk_std_core_types__new_Lt(_ctx);
  }
  {
    bool _match_x595 = (ix > iy); /*bool*/;
    if (_match_x595) {
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
  bool _match_x588 = (x != (0x0p+0)); /*bool*/;
  if (_match_x588) {
    bool _match_x591;
    double _x_x752 = kk_double_abs(x); /*float64*/
    _match_x591 = (_x_x752 < (0x1p-1022)); /*bool*/
    if (_match_x591) {
      double _x_x753 = (x + y); /*float64*/
      return (_x_x753 / 0x1p1);
    }
    {
      bool _match_x592 = (y != (0x0p+0)); /*bool*/;
      if (_match_x592) {
        bool _match_x593;
        double _x_x754 = kk_double_abs(y); /*float64*/
        _match_x593 = (_x_x754 < (0x1p-1022)); /*bool*/
        if (_match_x593) {
          double _x_x755 = (x + y); /*float64*/
          return (_x_x755 / 0x1p1);
        }
        {
          double _x_x756 = (x / 0x1p1); /*float64*/
          double _x_x757 = (y / 0x1p1); /*float64*/
          return (_x_x756 + _x_x757);
        }
      }
      {
        double _x_x758 = (x / 0x1p1); /*float64*/
        double _x_x759 = (y / 0x1p1); /*float64*/
        return (_x_x758 + _x_x759);
      }
    }
  }
  {
    bool _match_x589 = (y != (0x0p+0)); /*bool*/;
    if (_match_x589) {
      bool _match_x590;
      double _x_x760 = kk_double_abs(y); /*float64*/
      _match_x590 = (_x_x760 < (0x1p-1022)); /*bool*/
      if (_match_x590) {
        double _x_x761 = (x + y); /*float64*/
        return (_x_x761 / 0x1p1);
      }
      {
        double _x_x762 = (x / 0x1p1); /*float64*/
        double _x_x763 = (y / 0x1p1); /*float64*/
        return (_x_x762 + _x_x763);
      }
    }
    {
      double _x_x764 = (x / 0x1p1); /*float64*/
      double _x_x765 = (y / 0x1p1); /*float64*/
      return (_x_x764 + _x_x765);
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
  bool _match_x566 = (x <= (0x0p+0)); /*bool*/;
  if (_match_x566) {
    bool _match_x577 = (y >= (0x0p+0)); /*bool*/;
    if (_match_x577) {
      double _x_x766 = (t * y); /*float64*/
      double _x_x767;
      double _x_x768 = (0x1p0 - t); /*float64*/
      _x_x767 = (_x_x768 * x); /*float64*/
      return (_x_x766 + _x_x767);
    }
    {
      bool _match_x578 = (x >= (0x0p+0)); /*bool*/;
      if (_match_x578) {
        bool _match_x583 = (y <= (0x0p+0)); /*bool*/;
        if (_match_x583) {
          double _x_x769 = (t * y); /*float64*/
          double _x_x770;
          double _x_x771 = (0x1p0 - t); /*float64*/
          _x_x770 = (_x_x771 * x); /*float64*/
          return (_x_x769 + _x_x770);
        }
        {
          bool _match_x584 = (t == 0x1p0); /*bool*/;
          if (_match_x584) {
            return y;
          }
          {
            double z;
            double _x_x772;
            double _x_x773 = (y - x); /*float64*/
            _x_x772 = (t * _x_x773); /*float64*/
            z = (x + _x_x772); /*float64*/
            bool x_0_10064 = (t > 0x1p0); /*bool*/;
            bool y_0_10065 = (y > x); /*bool*/;
            bool _match_x585;
            if (x_0_10064) {
              _match_x585 = y_0_10065; /*bool*/
            }
            else {
              if (y_0_10065) {
                _match_x585 = false; /*bool*/
              }
              else {
                _match_x585 = true; /*bool*/
              }
            }
            if (_match_x585) {
              bool _match_x587 = (y >= z); /*bool*/;
              if (_match_x587) {
                return y;
              }
              {
                return z;
              }
            }
            {
              bool _match_x586 = (y <= z); /*bool*/;
              if (_match_x586) {
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
        bool _match_x579 = (t == 0x1p0); /*bool*/;
        if (_match_x579) {
          return y;
        }
        {
          double z_0;
          double _x_x774;
          double _x_x775 = (y - x); /*float64*/
          _x_x774 = (t * _x_x775); /*float64*/
          z_0 = (x + _x_x774); /*float64*/
          bool x_3_10070 = (t > 0x1p0); /*bool*/;
          bool y_3_10071 = (y > x); /*bool*/;
          bool _match_x580;
          if (x_3_10070) {
            _match_x580 = y_3_10071; /*bool*/
          }
          else {
            if (y_3_10071) {
              _match_x580 = false; /*bool*/
            }
            else {
              _match_x580 = true; /*bool*/
            }
          }
          if (_match_x580) {
            bool _match_x582 = (y >= z_0); /*bool*/;
            if (_match_x582) {
              return y;
            }
            {
              return z_0;
            }
          }
          {
            bool _match_x581 = (y <= z_0); /*bool*/;
            if (_match_x581) {
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
    bool _match_x567 = (x >= (0x0p+0)); /*bool*/;
    if (_match_x567) {
      bool _match_x572 = (y <= (0x0p+0)); /*bool*/;
      if (_match_x572) {
        double _x_x776 = (t * y); /*float64*/
        double _x_x777;
        double _x_x778 = (0x1p0 - t); /*float64*/
        _x_x777 = (_x_x778 * x); /*float64*/
        return (_x_x776 + _x_x777);
      }
      {
        bool _match_x573 = (t == 0x1p0); /*bool*/;
        if (_match_x573) {
          return y;
        }
        {
          double z_1;
          double _x_x779;
          double _x_x780 = (y - x); /*float64*/
          _x_x779 = (t * _x_x780); /*float64*/
          z_1 = (x + _x_x779); /*float64*/
          bool x_6_10076 = (t > 0x1p0); /*bool*/;
          bool y_6_10077 = (y > x); /*bool*/;
          bool _match_x574;
          if (x_6_10076) {
            _match_x574 = y_6_10077; /*bool*/
          }
          else {
            if (y_6_10077) {
              _match_x574 = false; /*bool*/
            }
            else {
              _match_x574 = true; /*bool*/
            }
          }
          if (_match_x574) {
            bool _match_x576 = (y >= z_1); /*bool*/;
            if (_match_x576) {
              return y;
            }
            {
              return z_1;
            }
          }
          {
            bool _match_x575 = (y <= z_1); /*bool*/;
            if (_match_x575) {
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
      bool _match_x568 = (t == 0x1p0); /*bool*/;
      if (_match_x568) {
        return y;
      }
      {
        double z_0_0;
        double _x_x781;
        double _x_x782 = (y - x); /*float64*/
        _x_x781 = (t * _x_x782); /*float64*/
        z_0_0 = (x + _x_x781); /*float64*/
        bool x_9_10082 = (t > 0x1p0); /*bool*/;
        bool y_9_10083 = (y > x); /*bool*/;
        bool _match_x569;
        if (x_9_10082) {
          _match_x569 = y_9_10083; /*bool*/
        }
        else {
          if (y_9_10083) {
            _match_x569 = false; /*bool*/
          }
          else {
            _match_x569 = true; /*bool*/
          }
        }
        if (_match_x569) {
          bool _match_x571 = (y >= z_0_0); /*bool*/;
          if (_match_x571) {
            return y;
          }
          {
            return z_0_0;
          }
        }
        {
          bool _match_x570 = (y <= z_0_0); /*bool*/;
          if (_match_x570) {
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
  bool b_10088 = isfinite(d); /*bool*/;
  if (b_10088) {
    kk_std_core_types__tuple2 _match_x555 = kk_std_num_float64_decode(d, _ctx); /*(int, int)*/;
    {
      kk_box_t _box_x63 = _match_x555.fst;
      kk_box_t _box_x64 = _match_x555.snd;
      kk_integer_t m = kk_integer_unbox(_box_x63, _ctx);
      kk_integer_t e = kk_integer_unbox(_box_x64, _ctx);
      kk_integer_dup(e, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__tuple2_drop(_match_x555, _ctx);
      kk_string_t man;
      kk_integer_t _x_x783 = kk_integer_abs(m,kk_context()); /*int*/
      kk_std_core_types__optional _x_x784 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 7*/
      kk_std_core_types__optional _x_x785;
      kk_box_t _x_x786;
      bool _x_x787;
      if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
        kk_box_t _box_x66 = use_capitals._cons._Optional.value;
        bool _uniq_use_capitals_2400 = kk_bool_unbox(_box_x66);
        kk_std_core_types__optional_drop(use_capitals, _ctx);
        _x_x787 = _uniq_use_capitals_2400; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(use_capitals, _ctx);
        _x_x787 = true; /*bool*/
      }
      _x_x786 = kk_bool_box(_x_x787); /*7*/
      _x_x785 = kk_std_core_types__new_Optional(_x_x786, _ctx); /*? 7*/
      kk_std_core_types__optional _x_x788;
      kk_box_t _x_x789;
      kk_string_t _x_x790 = kk_string_empty(); /*string*/
      _x_x789 = kk_string_box(_x_x790); /*7*/
      _x_x788 = kk_std_core_types__new_Optional(_x_x789, _ctx); /*? 7*/
      man = kk_std_core_show_show_hex(_x_x783, _x_x784, _x_x785, _x_x788, _ctx); /*string*/
      kk_integer_t x_0_10091;
      kk_string_t _x_x792 = kk_string_dup(man, _ctx); /*string*/
      x_0_10091 = kk_std_core_string_count(_x_x792, _ctx); /*int*/
      kk_integer_t y_10090;
      kk_integer_t _x_x793 = kk_integer_add_small_const(x_0_10091, -1, _ctx); /*int*/
      y_10090 = kk_integer_mul((kk_integer_from_small(4)),_x_x793,kk_context()); /*int*/
      kk_integer_t exp0 = kk_integer_add(e,y_10090,kk_context()); /*int*/;
      kk_string_t exp;
      kk_string_t _x_x794;
      bool _match_x565 = kk_integer_gte_borrow(exp0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x565) {
        kk_define_string_literal(, _s_x795, 1, "+", _ctx)
        _x_x794 = kk_string_dup(_s_x795, _ctx); /*string*/
      }
      else {
        _x_x794 = kk_string_empty(); /*string*/
      }
      kk_string_t _x_x797 = kk_std_core_int_show(exp0, _ctx); /*string*/
      exp = kk_std_core_types__lp__plus__plus__rp_(_x_x794, _x_x797, _ctx); /*string*/
      kk_string_t frac;
      kk_string_t _own_x563;
      kk_string_t _x_x798;
      kk_string_t _x_x799 = kk_string_dup(man, _ctx); /*string*/
      _x_x798 = kk_std_core_sslice_tail(_x_x799, _ctx); /*string*/
      kk_string_t _x_x800;
      kk_define_string_literal(, _s_x801, 1, "0", _ctx)
      _x_x800 = kk_string_dup(_s_x801, _ctx); /*string*/
      _own_x563 = kk_std_core_sslice_trim_right(_x_x798, _x_x800, _ctx); /*string*/
      kk_integer_t _brw_x562;
      bool _match_x559;
      kk_integer_t _brw_x560;
      if (kk_std_core_types__is_Optional(width, _ctx)) {
        kk_box_t _box_x72 = width._cons._Optional.value;
        kk_integer_t _uniq_width_2396 = kk_integer_unbox(_box_x72, _ctx);
        kk_integer_dup(_uniq_width_2396, _ctx);
        _brw_x560 = _uniq_width_2396; /*int*/
      }
      else {
        _brw_x560 = kk_integer_from_small(1); /*int*/
      }
      bool _brw_x561 = kk_integer_gte_borrow((kk_integer_from_small(1)),_brw_x560,kk_context()); /*bool*/;
      kk_integer_drop(_brw_x560, _ctx);
      _match_x559 = _brw_x561; /*bool*/
      if (_match_x559) {
        kk_std_core_types__optional_drop(width, _ctx);
        _brw_x562 = kk_integer_from_small(1); /*int*/
      }
      else {
        if (kk_std_core_types__is_Optional(width, _ctx)) {
          kk_box_t _box_x73 = width._cons._Optional.value;
          kk_integer_t _uniq_width_2396_0 = kk_integer_unbox(_box_x73, _ctx);
          kk_integer_dup(_uniq_width_2396_0, _ctx);
          kk_std_core_types__optional_drop(width, _ctx);
          _brw_x562 = _uniq_width_2396_0; /*int*/
        }
        else {
          kk_std_core_types__optional_drop(width, _ctx);
          _brw_x562 = kk_integer_from_small(1); /*int*/
        }
      }
      kk_string_t _brw_x564;
      kk_std_core_types__optional _x_x802 = kk_std_core_types__new_Optional(kk_char_box('0', _ctx), _ctx); /*? 7*/
      _brw_x564 = kk_std_core_string_pad_right(_own_x563, _brw_x562, _x_x802, _ctx); /*string*/
      kk_integer_drop(_brw_x562, _ctx);
      frac = _brw_x564; /*string*/
      kk_string_t sign_0;
      bool _match_x556 = (d < (0x0p+0)); /*bool*/;
      if (_match_x556) {
        kk_define_string_literal(, _s_x803, 1, "-", _ctx)
        sign_0 = kk_string_dup(_s_x803, _ctx); /*string*/
      }
      else {
        bool _match_x557 = (d == (0x0p+0)); /*bool*/;
        if (_match_x557) {
          bool _match_x558;
          double _x_x804 = (0x1p0 / d); /*float64*/
          _match_x558 = (isinf(_x_x804) && signbit(_x_x804)); /*bool*/
          if (_match_x558) {
            kk_define_string_literal(, _s_x805, 1, "-", _ctx)
            sign_0 = kk_string_dup(_s_x805, _ctx); /*string*/
          }
          else {
            sign_0 = kk_string_empty(); /*string*/
          }
        }
        else {
          sign_0 = kk_string_empty(); /*string*/
        }
      }
      kk_string_t _x_x808;
      kk_string_t _x_x809;
      if (kk_std_core_types__is_Optional(pre, _ctx)) {
        kk_box_t _box_x76 = pre._cons._Optional.value;
        kk_string_t _uniq_pre_2404 = kk_string_unbox(_box_x76);
        kk_string_dup(_uniq_pre_2404, _ctx);
        kk_std_core_types__optional_drop(pre, _ctx);
        _x_x809 = _uniq_pre_2404; /*string*/
      }
      else {
        kk_std_core_types__optional_drop(pre, _ctx);
        kk_define_string_literal(, _s_x810, 2, "0x", _ctx)
        _x_x809 = kk_string_dup(_s_x810, _ctx); /*string*/
      }
      kk_string_t _x_x811;
      kk_string_t _x_x812 = kk_std_core_sslice_head(man, _ctx); /*string*/
      kk_string_t _x_x813;
      kk_string_t _x_x814;
      kk_define_string_literal(, _s_x815, 1, ".", _ctx)
      _x_x814 = kk_string_dup(_s_x815, _ctx); /*string*/
      kk_string_t _x_x816;
      kk_string_t _x_x817;
      kk_string_t _x_x818;
      kk_define_string_literal(, _s_x819, 1, "p", _ctx)
      _x_x818 = kk_string_dup(_s_x819, _ctx); /*string*/
      _x_x817 = kk_std_core_types__lp__plus__plus__rp_(_x_x818, exp, _ctx); /*string*/
      _x_x816 = kk_std_core_types__lp__plus__plus__rp_(frac, _x_x817, _ctx); /*string*/
      _x_x813 = kk_std_core_types__lp__plus__plus__rp_(_x_x814, _x_x816, _ctx); /*string*/
      _x_x811 = kk_std_core_types__lp__plus__plus__rp_(_x_x812, _x_x813, _ctx); /*string*/
      _x_x808 = kk_std_core_types__lp__plus__plus__rp_(_x_x809, _x_x811, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(sign_0, _x_x808, _ctx);
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


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10172_fun822__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10172_fun822(kk_function_t _fself, kk_box_t _b_x82, kk_box_t _b_x83, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10172_fun822(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10172_fun822, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10172_fun822(kk_function_t _fself, kk_box_t _b_x82, kk_box_t _b_x83, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x823;
  kk_string_t _x_x824 = kk_string_unbox(_b_x82); /*string*/
  bool _x_x825;
  kk_std_core_types__optional _match_x554 = kk_std_core_types__optional_unbox(_b_x83, KK_OWNED, _ctx); /*? bool*/;
  if (kk_std_core_types__is_Optional(_match_x554, _ctx)) {
    kk_box_t _box_x77 = _match_x554._cons._Optional.value;
    bool _uniq_hex_528 = kk_bool_unbox(_box_x77);
    kk_std_core_types__optional_drop(_match_x554, _ctx);
    _x_x825 = _uniq_hex_528; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x554, _ctx);
    _x_x825 = false; /*bool*/
  }
  _x_x823 = kk_std_core_int_xparse(_x_x824, _x_x825, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x_x823, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10172_fun829__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10172_fun829(kk_function_t _fself, kk_box_t _b_x94, kk_box_t _b_x95, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10172_fun829(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10172_fun829, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10172_fun829(kk_function_t _fself, kk_box_t _b_x94, kk_box_t _b_x95, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x830;
  kk_std_core_types__maybe _match_x553 = kk_std_core_types__maybe_unbox(_b_x94, KK_OWNED, _ctx); /*maybe<int>*/;
  if (kk_std_core_types__is_Nothing(_match_x553, _ctx)) {
    _x_x830 = kk_integer_unbox(_b_x95, _ctx); /*int*/
  }
  else {
    kk_box_t _box_x90 = _match_x553._cons.Just.value;
    kk_integer_t x = kk_integer_unbox(_box_x90, _ctx);
    kk_integer_dup(x, _ctx);
    kk_std_core_types__maybe_drop(_match_x553, _ctx);
    kk_box_drop(_b_x95, _ctx);
    _x_x830 = x; /*int*/
  }
  return kk_integer_box(_x_x830, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10172_fun833__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10172_fun833(kk_function_t _fself, kk_box_t _b_x104, kk_box_t _b_x105, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10172_fun833(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10172_fun833, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10172_fun833(kk_function_t _fself, kk_box_t _b_x104, kk_box_t _b_x105, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t man_0_109 = kk_integer_unbox(_b_x104, _ctx); /*int*/;
  kk_integer_t exp_0_110 = kk_integer_unbox(_b_x105, _ctx); /*int*/;
  double _x_x834;
  double _x_x835 = kk_integer_as_double(man_0_109,kk_context()); /*float64*/
  _x_x834 = kk_std_num_float64_ldexp(_x_x835, exp_0_110, _ctx); /*float64*/
  return kk_double_box(_x_x834, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10172(kk_string_t frac, kk_string_t man, kk_integer_t exp, kk_context_t* _ctx) { /* (frac : string, man : string, exp : int) -> std/text/parse/parse float64 */ 
  kk_string_t _x_x1_0_10166;
  kk_string_t _x_x820 = kk_string_dup(frac, _ctx); /*string*/
  _x_x1_0_10166 = kk_std_core_types__lp__plus__plus__rp_(man, _x_x820, _ctx); /*string*/
  kk_std_core_types__maybe _x_x1_10164;
  kk_box_t _x_x821;
  kk_box_t _x_x826;
  kk_std_core_types__optional _x_x827 = kk_std_core_types__new_Optional(kk_bool_box(true), _ctx); /*? 7*/
  _x_x826 = kk_std_core_types__optional_box(_x_x827, _ctx); /*8646*/
  _x_x821 = kk_std_core_hnd__open_none2(kk_std_num_float64__new_mlift_phexdouble_10172_fun822(_ctx), kk_string_box(_x_x1_0_10166), _x_x826, _ctx); /*8647*/
  _x_x1_10164 = kk_std_core_types__maybe_unbox(_x_x821, KK_OWNED, _ctx); /*maybe<int>*/
  kk_integer_t m_0;
  kk_box_t _x_x828 = kk_std_core_hnd__open_none2(kk_std_num_float64__new_mlift_phexdouble_10172_fun829(_ctx), kk_std_core_types__maybe_box(_x_x1_10164, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*8647*/
  m_0 = kk_integer_unbox(_x_x828, _ctx); /*int*/
  kk_integer_t y_10161;
  kk_integer_t _x_x831 = kk_std_core_string_count(frac, _ctx); /*int*/
  y_10161 = kk_integer_mul((kk_integer_from_small(4)),_x_x831,kk_context()); /*int*/
  kk_integer_t e = kk_integer_sub(exp,y_10161,kk_context()); /*int*/;
  kk_box_t _x_x832 = kk_std_core_hnd__open_none2(kk_std_num_float64__new_mlift_phexdouble_10172_fun833(_ctx), kk_integer_box(m_0, _ctx), kk_integer_box(e, _ctx), _ctx); /*8647*/
  return kk_double_unbox(_x_x832, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10174_fun839__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10174_fun839(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10174_fun839(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10174_fun839, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10174_fun844__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10174_fun844(kk_function_t _fself, kk_box_t _b_x112, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10174_fun844(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10174_fun844, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10174_fun844(kk_function_t _fself, kk_box_t _b_x112, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x845;
  kk_char_t _x_x846 = kk_char_unbox(_b_x112, KK_OWNED, _ctx); /*char*/
  _x_x845 = kk_std_num_float64__mlift_phexdouble_10171(_x_x846, _ctx); /*int*/
  return kk_integer_box(_x_x845, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_phexdouble_10174_fun839(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_0_10196;
  kk_string_t _x_x840;
  kk_define_string_literal(, _s_x841, 2, "pP", _ctx)
  _x_x840 = kk_string_dup(_s_x841, _ctx); /*string*/
  x_0_10196 = kk_std_text_parse_one_of(_x_x840, _ctx); /*char*/
  kk_integer_t _x_x842;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x843 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10174_fun844(_ctx), _ctx); /*2978*/
    _x_x842 = kk_integer_unbox(_x_x843, _ctx); /*int*/
  }
  else {
    _x_x842 = kk_std_text_parse_pint(_ctx); /*int*/
  }
  return kk_integer_box(_x_x842, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10174_fun847__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10174_fun847(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10174_fun847(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10174_fun847, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10174_fun847(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(0), _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10174_fun849__t {
  struct kk_function_s _base;
  kk_string_t frac;
  kk_string_t man;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10174_fun849(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10174_fun849(kk_string_t frac, kk_string_t man, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10174_fun849__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_phexdouble_10174_fun849__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_phexdouble_10174_fun849, kk_context());
  _self->frac = frac;
  _self->man = man;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10174_fun849(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10174_fun849__t* _self = kk_function_as(struct kk_std_num_float64__mlift_phexdouble_10174_fun849__t*, _fself, _ctx);
  kk_string_t frac = _self->frac; /* string */
  kk_string_t man = _self->man; /* string */
  kk_drop_match(_self, {kk_string_dup(frac, _ctx);kk_string_dup(man, _ctx);}, {}, _ctx)
  kk_integer_t exp_121 = kk_integer_unbox(_b_x119, _ctx); /*int*/;
  double _x_x850 = kk_std_num_float64__mlift_phexdouble_10172(frac, man, exp_121, _ctx); /*float64*/
  return kk_double_box(_x_x850, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10174(kk_string_t man, kk_string_t _y_x10133, kk_context_t* _ctx) { /* (man : string, string) -> std/text/parse/parse float64 */ 
  kk_string_t frac;
  kk_string_t _x_x836;
  kk_define_string_literal(, _s_x837, 1, "0", _ctx)
  _x_x836 = kk_string_dup(_s_x837, _ctx); /*string*/
  frac = kk_std_core_sslice_trim_right(_y_x10133, _x_x836, _ctx); /*string*/
  kk_integer_t x_10194;
  kk_box_t _x_x838 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_float64__new_mlift_phexdouble_10174_fun839(_ctx), kk_std_num_float64__new_mlift_phexdouble_10174_fun847(_ctx), _ctx); /*1635*/
  x_10194 = kk_integer_unbox(_x_x838, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10194, _ctx);
    kk_box_t _x_x848 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10174_fun849(frac, man, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x848, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10172(frac, man, x_10194, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10175_fun852__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10175_fun852(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10175_fun852(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10175_fun852, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10175_fun855__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10175_fun855(kk_function_t _fself, kk_box_t _b_x123, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10175_fun855(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10175_fun855, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10175_fun855(kk_function_t _fself, kk_box_t _b_x123, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x856;
  kk_char_t _x_x857 = kk_char_unbox(_b_x123, KK_OWNED, _ctx); /*char*/
  _x_x856 = kk_std_num_float64__mlift_phexdouble_10173(_x_x857, _ctx); /*string*/
  return kk_string_box(_x_x856);
}
static kk_box_t kk_std_num_float64__mlift_phexdouble_10175_fun852(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_0_10200 = kk_std_text_parse_char('.', _ctx); /*char*/;
  kk_string_t _x_x853;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x854 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10175_fun855(_ctx), _ctx); /*2978*/
    _x_x853 = kk_string_unbox(_x_x854); /*string*/
  }
  else {
    _x_x853 = kk_std_text_parse_hex_digits(_ctx); /*string*/
  }
  return kk_string_box(_x_x853);
}


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10175_fun858__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10175_fun858(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10175_fun858(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10175_fun858, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10175_fun858(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x859 = kk_string_empty(); /*string*/
  return kk_string_box(_x_x859);
}


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10175_fun862__t {
  struct kk_function_s _base;
  kk_string_t man;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10175_fun862(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10175_fun862(kk_string_t man, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10175_fun862__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_phexdouble_10175_fun862__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_phexdouble_10175_fun862, kk_context());
  _self->man = man;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10175_fun862(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_phexdouble_10175_fun862__t* _self = kk_function_as(struct kk_std_num_float64__mlift_phexdouble_10175_fun862__t*, _fself, _ctx);
  kk_string_t man = _self->man; /* string */
  kk_drop_match(_self, {kk_string_dup(man, _ctx);}, {}, _ctx)
  kk_string_t _y_x10133_132 = kk_string_unbox(_b_x130); /*string*/;
  double _x_x863 = kk_std_num_float64__mlift_phexdouble_10174(man, _y_x10133_132, _ctx); /*float64*/
  return kk_double_box(_x_x863, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10175(kk_string_t man, kk_context_t* _ctx) { /* (man : string) -> std/text/parse/parse float64 */ 
  kk_string_t x_10198;
  kk_box_t _x_x851 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_float64__new_mlift_phexdouble_10175_fun852(_ctx), kk_std_num_float64__new_mlift_phexdouble_10175_fun858(_ctx), _ctx); /*1635*/
  x_10198 = kk_string_unbox(_x_x851); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10198, _ctx);
    kk_box_t _x_x861 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10175_fun862(man, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x861, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10174(man, x_10198, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10176_fun865__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10176_fun865(kk_function_t _fself, kk_box_t _b_x134, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10176_fun865(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10176_fun865, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10176_fun865(kk_function_t _fself, kk_box_t _b_x134, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x866;
  kk_string_t _x_x867 = kk_string_unbox(_b_x134); /*string*/
  _x_x866 = kk_std_num_float64__mlift_phexdouble_10175(_x_x867, _ctx); /*float64*/
  return kk_double_box(_x_x866, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10176(kk_char_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : char) -> std/text/parse/parse float64 */ 
  kk_string_t x_10202 = kk_std_text_parse_hex_digits(_ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10202, _ctx);
    kk_box_t _x_x864 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10176_fun865(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x864, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10175(x_10202, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_phexdouble_10177_fun871__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_phexdouble_10177_fun871(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_phexdouble_10177_fun871(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_phexdouble_10177_fun871, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_phexdouble_10177_fun871(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x872;
  kk_char_t _x_x873 = kk_char_unbox(_b_x137, KK_OWNED, _ctx); /*char*/
  _x_x872 = kk_std_num_float64__mlift_phexdouble_10176(_x_x873, _ctx); /*float64*/
  return kk_double_box(_x_x872, _ctx);
}

double kk_std_num_float64__mlift_phexdouble_10177(kk_char_t wild__, kk_context_t* _ctx) { /* (wild_ : char) -> std/text/parse/parse float64 */ 
  kk_char_t x_10204;
  kk_string_t _x_x868;
  kk_define_string_literal(, _s_x869, 2, "xX", _ctx)
  _x_x868 = kk_string_dup(_s_x869, _ctx); /*string*/
  x_10204 = kk_std_text_parse_one_of(_x_x868, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x870 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_phexdouble_10177_fun871(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x870, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_phexdouble_10176(x_10204, _ctx);
  }
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun875__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun875(kk_function_t _fself, kk_box_t _b_x140, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun875(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun875, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun875(kk_function_t _fself, kk_box_t _b_x140, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x876;
  kk_char_t _x_x877 = kk_char_unbox(_b_x140, KK_OWNED, _ctx); /*char*/
  _x_x876 = kk_std_num_float64__mlift_phexdouble_10177(_x_x877, _ctx); /*float64*/
  return kk_double_box(_x_x876, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun881__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun881(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun881(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun881, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun881(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x882;
  kk_char_t _x_x883 = kk_char_unbox(_b_x142, KK_OWNED, _ctx); /*char*/
  _x_x882 = kk_std_num_float64__mlift_phexdouble_10176(_x_x883, _ctx); /*float64*/
  return kk_double_box(_x_x882, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun885__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun885(kk_function_t _fself, kk_box_t _b_x144, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun885(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun885, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun885(kk_function_t _fself, kk_box_t _b_x144, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x886;
  kk_string_t _x_x887 = kk_string_unbox(_b_x144); /*string*/
  _x_x886 = kk_std_num_float64__mlift_phexdouble_10175(_x_x887, _ctx); /*float64*/
  return kk_double_box(_x_x886, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun889__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun889(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun889(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun889, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_phexdouble_fun892__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun892(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun892(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun892, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun892(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x893;
  kk_char_t _x_x894 = kk_char_unbox(_b_x146, KK_OWNED, _ctx); /*char*/
  _x_x893 = kk_std_num_float64__mlift_phexdouble_10173(_x_x894, _ctx); /*string*/
  return kk_string_box(_x_x893);
}
static kk_box_t kk_std_num_float64_phexdouble_fun889(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_3_10218 = kk_std_text_parse_char('.', _ctx); /*char*/;
  kk_string_t _x_x890;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x891 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun892(_ctx), _ctx); /*2978*/
    _x_x890 = kk_string_unbox(_x_x891); /*string*/
  }
  else {
    _x_x890 = kk_std_text_parse_hex_digits(_ctx); /*string*/
  }
  return kk_string_box(_x_x890);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun895__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun895(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun895(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun895, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun895(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x896 = kk_string_empty(); /*string*/
  return kk_string_box(_x_x896);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun899__t {
  struct kk_function_s _base;
  kk_string_t x_1_10212;
};
static kk_box_t kk_std_num_float64_phexdouble_fun899(kk_function_t _fself, kk_box_t _b_x153, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun899(kk_string_t x_1_10212, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun899__t* _self = kk_function_alloc_as(struct kk_std_num_float64_phexdouble_fun899__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_phexdouble_fun899, kk_context());
  _self->x_1_10212 = x_1_10212;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun899(kk_function_t _fself, kk_box_t _b_x153, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun899__t* _self = kk_function_as(struct kk_std_num_float64_phexdouble_fun899__t*, _fself, _ctx);
  kk_string_t x_1_10212 = _self->x_1_10212; /* string */
  kk_drop_match(_self, {kk_string_dup(x_1_10212, _ctx);}, {}, _ctx)
  kk_string_t _y_x10133_200 = kk_string_unbox(_b_x153); /*string*/;
  double _x_x900 = kk_std_num_float64__mlift_phexdouble_10174(x_1_10212, _y_x10133_200, _ctx); /*float64*/
  return kk_double_box(_x_x900, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun904__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun904(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun904(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun904, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_phexdouble_fun909__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun909(kk_function_t _fself, kk_box_t _b_x155, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun909(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun909, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun909(kk_function_t _fself, kk_box_t _b_x155, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x910;
  kk_char_t _x_x911 = kk_char_unbox(_b_x155, KK_OWNED, _ctx); /*char*/
  _x_x910 = kk_std_num_float64__mlift_phexdouble_10171(_x_x911, _ctx); /*int*/
  return kk_integer_box(_x_x910, _ctx);
}
static kk_box_t kk_std_num_float64_phexdouble_fun904(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_5_10223;
  kk_string_t _x_x905;
  kk_define_string_literal(, _s_x906, 2, "pP", _ctx)
  _x_x905 = kk_string_dup(_s_x906, _ctx); /*string*/
  x_5_10223 = kk_std_text_parse_one_of(_x_x905, _ctx); /*char*/
  kk_integer_t _x_x907;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x908 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun909(_ctx), _ctx); /*2978*/
    _x_x907 = kk_integer_unbox(_x_x908, _ctx); /*int*/
  }
  else {
    _x_x907 = kk_std_text_parse_pint(_ctx); /*int*/
  }
  return kk_integer_box(_x_x907, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun912__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun912(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun912(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun912, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun912(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(0), _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun914__t {
  struct kk_function_s _base;
  kk_string_t frac;
  kk_string_t x_1_10212;
};
static kk_box_t kk_std_num_float64_phexdouble_fun914(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun914(kk_string_t frac, kk_string_t x_1_10212, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun914__t* _self = kk_function_alloc_as(struct kk_std_num_float64_phexdouble_fun914__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_phexdouble_fun914, kk_context());
  _self->frac = frac;
  _self->x_1_10212 = x_1_10212;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun914(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx) {
  struct kk_std_num_float64_phexdouble_fun914__t* _self = kk_function_as(struct kk_std_num_float64_phexdouble_fun914__t*, _fself, _ctx);
  kk_string_t frac = _self->frac; /* string */
  kk_string_t x_1_10212 = _self->x_1_10212; /* string */
  kk_drop_match(_self, {kk_string_dup(frac, _ctx);kk_string_dup(x_1_10212, _ctx);}, {}, _ctx)
  kk_integer_t exp_201 = kk_integer_unbox(_b_x162, _ctx); /*int*/;
  double _x_x915 = kk_std_num_float64__mlift_phexdouble_10172(frac, x_1_10212, exp_201, _ctx); /*float64*/
  return kk_double_box(_x_x915, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun918__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun918(kk_function_t _fself, kk_box_t _b_x168, kk_box_t _b_x169, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun918(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun918, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun918(kk_function_t _fself, kk_box_t _b_x168, kk_box_t _b_x169, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x919;
  kk_string_t _x_x920 = kk_string_unbox(_b_x168); /*string*/
  bool _x_x921;
  kk_std_core_types__optional _match_x544 = kk_std_core_types__optional_unbox(_b_x169, KK_OWNED, _ctx); /*? bool*/;
  if (kk_std_core_types__is_Optional(_match_x544, _ctx)) {
    kk_box_t _box_x163 = _match_x544._cons._Optional.value;
    bool _uniq_hex_528 = kk_bool_unbox(_box_x163);
    kk_std_core_types__optional_drop(_match_x544, _ctx);
    _x_x921 = _uniq_hex_528; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x544, _ctx);
    _x_x921 = false; /*bool*/
  }
  _x_x919 = kk_std_core_int_xparse(_x_x920, _x_x921, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x_x919, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun925__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun925(kk_function_t _fself, kk_box_t _b_x180, kk_box_t _b_x181, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun925(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun925, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun925(kk_function_t _fself, kk_box_t _b_x180, kk_box_t _b_x181, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x926;
  kk_std_core_types__maybe _match_x543 = kk_std_core_types__maybe_unbox(_b_x180, KK_OWNED, _ctx); /*maybe<int>*/;
  if (kk_std_core_types__is_Nothing(_match_x543, _ctx)) {
    _x_x926 = kk_integer_unbox(_b_x181, _ctx); /*int*/
  }
  else {
    kk_box_t _box_x176 = _match_x543._cons.Just.value;
    kk_integer_t x_6 = kk_integer_unbox(_box_x176, _ctx);
    kk_integer_dup(x_6, _ctx);
    kk_std_core_types__maybe_drop(_match_x543, _ctx);
    kk_box_drop(_b_x181, _ctx);
    _x_x926 = x_6; /*int*/
  }
  return kk_integer_box(_x_x926, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_phexdouble_fun929__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_phexdouble_fun929(kk_function_t _fself, kk_box_t _b_x190, kk_box_t _b_x191, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_phexdouble_fun929(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_phexdouble_fun929, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_phexdouble_fun929(kk_function_t _fself, kk_box_t _b_x190, kk_box_t _b_x191, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t man_0_202 = kk_integer_unbox(_b_x190, _ctx); /*int*/;
  kk_integer_t exp_0_0_203 = kk_integer_unbox(_b_x191, _ctx); /*int*/;
  double _x_x930;
  double _x_x931 = kk_integer_as_double(man_0_202,kk_context()); /*float64*/
  _x_x930 = kk_std_num_float64_ldexp(_x_x931, exp_0_0_203, _ctx); /*float64*/
  return kk_double_box(_x_x930, _ctx);
}

double kk_std_num_float64_phexdouble(kk_context_t* _ctx) { /* () -> std/text/parse/parse float64 */ 
  kk_char_t x_10206 = kk_std_text_parse_char('0', _ctx); /*char*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x874 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun875(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x874, KK_OWNED, _ctx);
  }
  {
    kk_char_t x_0_10209;
    kk_string_t _x_x878;
    kk_define_string_literal(, _s_x879, 2, "xX", _ctx)
    _x_x878 = kk_string_dup(_s_x879, _ctx); /*string*/
    x_0_10209 = kk_std_text_parse_one_of(_x_x878, _ctx); /*char*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x880 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun881(_ctx), _ctx); /*2978*/
      return kk_double_unbox(_x_x880, KK_OWNED, _ctx);
    }
    {
      kk_string_t x_1_10212 = kk_std_text_parse_hex_digits(_ctx); /*string*/;
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_1_10212, _ctx);
        kk_box_t _x_x884 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun885(_ctx), _ctx); /*2978*/
        return kk_double_unbox(_x_x884, KK_OWNED, _ctx);
      }
      {
        kk_string_t x_2_10215;
        kk_box_t _x_x888 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_float64_new_phexdouble_fun889(_ctx), kk_std_num_float64_new_phexdouble_fun895(_ctx), _ctx); /*1635*/
        x_2_10215 = kk_string_unbox(_x_x888); /*string*/
        if (kk_yielding(kk_context())) {
          kk_string_drop(x_2_10215, _ctx);
          kk_box_t _x_x898 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun899(x_1_10212, _ctx), _ctx); /*2978*/
          return kk_double_unbox(_x_x898, KK_OWNED, _ctx);
        }
        {
          kk_string_t frac;
          kk_string_t _x_x901;
          kk_define_string_literal(, _s_x902, 1, "0", _ctx)
          _x_x901 = kk_string_dup(_s_x902, _ctx); /*string*/
          frac = kk_std_core_sslice_trim_right(x_2_10215, _x_x901, _ctx); /*string*/
          kk_integer_t x_4_10220;
          kk_box_t _x_x903 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_float64_new_phexdouble_fun904(_ctx), kk_std_num_float64_new_phexdouble_fun912(_ctx), _ctx); /*1635*/
          x_4_10220 = kk_integer_unbox(_x_x903, _ctx); /*int*/
          if (kk_yielding(kk_context())) {
            kk_integer_drop(x_4_10220, _ctx);
            kk_box_t _x_x913 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_phexdouble_fun914(frac, x_1_10212, _ctx), _ctx); /*2978*/
            return kk_double_unbox(_x_x913, KK_OWNED, _ctx);
          }
          {
            kk_string_t _x_x1_0_10166;
            kk_string_t _x_x916 = kk_string_dup(frac, _ctx); /*string*/
            _x_x1_0_10166 = kk_std_core_types__lp__plus__plus__rp_(x_1_10212, _x_x916, _ctx); /*string*/
            kk_std_core_types__maybe _x_x1_10164;
            kk_box_t _x_x917;
            kk_box_t _x_x922;
            kk_std_core_types__optional _x_x923 = kk_std_core_types__new_Optional(kk_bool_box(true), _ctx); /*? 7*/
            _x_x922 = kk_std_core_types__optional_box(_x_x923, _ctx); /*8646*/
            _x_x917 = kk_std_core_hnd__open_none2(kk_std_num_float64_new_phexdouble_fun918(_ctx), kk_string_box(_x_x1_0_10166), _x_x922, _ctx); /*8647*/
            _x_x1_10164 = kk_std_core_types__maybe_unbox(_x_x917, KK_OWNED, _ctx); /*maybe<int>*/
            kk_integer_t m_0;
            kk_box_t _x_x924 = kk_std_core_hnd__open_none2(kk_std_num_float64_new_phexdouble_fun925(_ctx), kk_std_core_types__maybe_box(_x_x1_10164, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*8647*/
            m_0 = kk_integer_unbox(_x_x924, _ctx); /*int*/
            kk_integer_t y_10161;
            kk_integer_t _x_x927 = kk_std_core_string_count(frac, _ctx); /*int*/
            y_10161 = kk_integer_mul((kk_integer_from_small(4)),_x_x927,kk_context()); /*int*/
            kk_integer_t e = kk_integer_sub(x_4_10220,y_10161,kk_context()); /*int*/;
            kk_box_t _x_x928 = kk_std_core_hnd__open_none2(kk_std_num_float64_new_phexdouble_fun929(_ctx), kk_integer_box(m_0, _ctx), kk_integer_box(e, _ctx), _ctx); /*8647*/
            return kk_double_unbox(_x_x928, KK_OWNED, _ctx);
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
struct kk_std_num_float64__mlift_pdecdouble_10179_fun933__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10179_fun933(kk_function_t _fself, kk_box_t _b_x206, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10179_fun933(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10179_fun933, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10179_fun933(kk_function_t _fself, kk_box_t _b_x206, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x934;
  kk_string_t _x_x935 = kk_string_unbox(_b_x206); /*string*/
  _x_x934 = kk_std_num_float64_prim_parse_float64(_x_x935, _ctx); /*float64*/
  return kk_double_box(_x_x934, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10179(kk_std_core_sslice__sslice cur, kk_integer_t exp, kk_context_t* _ctx) { /* (cur : sslice/sslice, exp : int) -> std/text/parse/parse float64 */ 
  kk_integer_drop(exp, _ctx);
  kk_string_t _x_x1_10170 = kk_std_core_sslice_string(cur, _ctx); /*string*/;
  kk_box_t _x_x932 = kk_std_core_hnd__open_none1(kk_std_num_float64__new_mlift_pdecdouble_10179_fun933(_ctx), kk_string_box(_x_x1_10170), _ctx); /*8580*/
  return kk_double_unbox(_x_x932, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10181_fun939__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun939(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10181_fun939(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10181_fun939, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10181_fun944__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun944(kk_function_t _fself, kk_box_t _b_x210, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10181_fun944(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10181_fun944, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun944(kk_function_t _fself, kk_box_t _b_x210, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x945;
  kk_char_t _x_x946 = kk_char_unbox(_b_x210, KK_OWNED, _ctx); /*char*/
  _x_x945 = kk_std_num_float64__mlift_pdecdouble_10178(_x_x946, _ctx); /*int*/
  return kk_integer_box(_x_x945, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun939(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_0_10227;
  kk_string_t _x_x940;
  kk_define_string_literal(, _s_x941, 2, "eE", _ctx)
  _x_x940 = kk_string_dup(_s_x941, _ctx); /*string*/
  x_0_10227 = kk_std_text_parse_one_of(_x_x940, _ctx); /*char*/
  kk_integer_t _x_x942;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x943 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10181_fun944(_ctx), _ctx); /*2978*/
    _x_x942 = kk_integer_unbox(_x_x943, _ctx); /*int*/
  }
  else {
    _x_x942 = kk_std_text_parse_pint(_ctx); /*int*/
  }
  return kk_integer_box(_x_x942, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10181_fun947__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun947(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10181_fun947(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10181_fun947, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun947(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(0), _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10181_fun948__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice cur;
};
static double kk_std_num_float64__mlift_pdecdouble_10181_fun948(kk_function_t _fself, kk_integer_t exp, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10181_fun948(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10181_fun948__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10181_fun948__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10181_fun948, kk_context());
  _self->cur = cur;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10181_fun950__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun950(kk_function_t _fself, kk_box_t _b_x218, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10181_fun950(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10181_fun950, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun950(kk_function_t _fself, kk_box_t _b_x218, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x951;
  kk_string_t _x_x952 = kk_string_unbox(_b_x218); /*string*/
  _x_x951 = kk_std_num_float64_prim_parse_float64(_x_x952, _ctx); /*float64*/
  return kk_double_box(_x_x951, _ctx);
}
static double kk_std_num_float64__mlift_pdecdouble_10181_fun948(kk_function_t _fself, kk_integer_t exp, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10181_fun948__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10181_fun948__t*, _fself, _ctx);
  kk_std_core_sslice__sslice cur = _self->cur; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(cur, _ctx);}, {}, _ctx)
  kk_integer_drop(exp, _ctx);
  kk_string_t _x_x1_10170 = kk_std_core_sslice_string(cur, _ctx); /*string*/;
  kk_box_t _x_x949 = kk_std_core_hnd__open_none1(kk_std_num_float64__new_mlift_pdecdouble_10181_fun950(_ctx), kk_string_box(_x_x1_10170), _ctx); /*8580*/
  return kk_double_unbox(_x_x949, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10181_fun954__t {
  struct kk_function_s _base;
  kk_function_t next_10226;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun954(kk_function_t _fself, kk_box_t _b_x222, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10181_fun954(kk_function_t next_10226, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10181_fun954__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10181_fun954__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10181_fun954, kk_context());
  _self->next_10226 = next_10226;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10181_fun954(kk_function_t _fself, kk_box_t _b_x222, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10181_fun954__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10181_fun954__t*, _fself, _ctx);
  kk_function_t next_10226 = _self->next_10226; /* (int) -> std/text/parse/parse float64 */
  kk_drop_match(_self, {kk_function_dup(next_10226, _ctx);}, {}, _ctx)
  double _x_x955;
  kk_integer_t _x_x956 = kk_integer_unbox(_b_x222, _ctx); /*int*/
  _x_x955 = kk_function_call(double, (kk_function_t, kk_integer_t, kk_context_t*), next_10226, (next_10226, _x_x956, _ctx), _ctx); /*float64*/
  return kk_double_box(_x_x955, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10181(kk_std_core_sslice__sslice cur, kk_string_t _y_x10141, kk_context_t* _ctx) { /* (cur : sslice/sslice, string) -> std/text/parse/parse float64 */ 
  kk_string_t frac;
  kk_string_t _x_x936;
  kk_define_string_literal(, _s_x937, 1, "0", _ctx)
  _x_x936 = kk_string_dup(_s_x937, _ctx); /*string*/
  frac = kk_std_core_sslice_trim_right(_y_x10141, _x_x936, _ctx); /*string*/
  kk_string_drop(frac, _ctx);
  kk_integer_t x_10225;
  kk_box_t _x_x938 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_float64__new_mlift_pdecdouble_10181_fun939(_ctx), kk_std_num_float64__new_mlift_pdecdouble_10181_fun947(_ctx), _ctx); /*1635*/
  x_10225 = kk_integer_unbox(_x_x938, _ctx); /*int*/
  kk_function_t next_10226 = kk_std_num_float64__new_mlift_pdecdouble_10181_fun948(cur, _ctx); /*(int) -> std/text/parse/parse float64*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10225, _ctx);
    kk_box_t _x_x953 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10181_fun954(next_10226, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x953, KK_OWNED, _ctx);
  }
  {
    return kk_function_call(double, (kk_function_t, kk_integer_t, kk_context_t*), next_10226, (next_10226, x_10225, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10182_fun958__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10182_fun958(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10182_fun958(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10182_fun958, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10182_fun961__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10182_fun961(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10182_fun961(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10182_fun961, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10182_fun961(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x962;
  kk_char_t _x_x963 = kk_char_unbox(_b_x225, KK_OWNED, _ctx); /*char*/
  _x_x962 = kk_std_num_float64__mlift_pdecdouble_10180(_x_x963, _ctx); /*string*/
  return kk_string_box(_x_x962);
}
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10182_fun958(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_0_10233 = kk_std_text_parse_char('.', _ctx); /*char*/;
  kk_string_t _x_x959;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x960 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10182_fun961(_ctx), _ctx); /*2978*/
    _x_x959 = kk_string_unbox(_x_x960); /*string*/
  }
  else {
    _x_x959 = kk_std_text_parse_digits0(_ctx); /*string*/
  }
  return kk_string_box(_x_x959);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10182_fun964__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10182_fun964(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10182_fun964(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdecdouble_10182_fun964, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10182_fun964(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x965 = kk_string_empty(); /*string*/
  return kk_string_box(_x_x965);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10182_fun968__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice cur;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10182_fun968(kk_function_t _fself, kk_box_t _b_x232, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10182_fun968(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10182_fun968__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10182_fun968__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10182_fun968, kk_context());
  _self->cur = cur;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10182_fun968(kk_function_t _fself, kk_box_t _b_x232, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10182_fun968__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10182_fun968__t*, _fself, _ctx);
  kk_std_core_sslice__sslice cur = _self->cur; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(cur, _ctx);}, {}, _ctx)
  kk_string_t _y_x10141_234 = kk_string_unbox(_b_x232); /*string*/;
  double _x_x969 = kk_std_num_float64__mlift_pdecdouble_10181(cur, _y_x10141_234, _ctx); /*float64*/
  return kk_double_box(_x_x969, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10182(kk_std_core_sslice__sslice cur, kk_string_t man, kk_context_t* _ctx) { /* (cur : sslice/sslice, man : string) -> std/text/parse/parse float64 */ 
  kk_string_drop(man, _ctx);
  kk_string_t x_10231;
  kk_box_t _x_x957 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_float64__new_mlift_pdecdouble_10182_fun958(_ctx), kk_std_num_float64__new_mlift_pdecdouble_10182_fun964(_ctx), _ctx); /*1635*/
  x_10231 = kk_string_unbox(_x_x957); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10231, _ctx);
    kk_box_t _x_x967 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10182_fun968(cur, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x967, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_pdecdouble_10181(cur, x_10231, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdecdouble_10183_fun971__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice cur;
};
static kk_box_t kk_std_num_float64__mlift_pdecdouble_10183_fun971(kk_function_t _fself, kk_box_t _b_x236, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdecdouble_10183_fun971(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10183_fun971__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdecdouble_10183_fun971__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdecdouble_10183_fun971, kk_context());
  _self->cur = cur;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdecdouble_10183_fun971(kk_function_t _fself, kk_box_t _b_x236, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdecdouble_10183_fun971__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdecdouble_10183_fun971__t*, _fself, _ctx);
  kk_std_core_sslice__sslice cur = _self->cur; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(cur, _ctx);}, {}, _ctx)
  kk_string_t man_238 = kk_string_unbox(_b_x236); /*string*/;
  double _x_x972 = kk_std_num_float64__mlift_pdecdouble_10182(cur, man_238, _ctx); /*float64*/
  return kk_double_box(_x_x972, _ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10183(kk_std_core_sslice__sslice cur, kk_context_t* _ctx) { /* (cur : sslice/sslice) -> std/text/parse/parse float64 */ 
  kk_string_t x_10235 = kk_std_text_parse_digits(_ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10235, _ctx);
    kk_box_t _x_x970 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdecdouble_10183_fun971(cur, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x970, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_float64__mlift_pdecdouble_10182(cur, x_10235, _ctx);
  }
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun976__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun976(kk_function_t _fself, kk_box_t _b_x246, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun976(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun976, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun976(kk_function_t _fself, kk_box_t _b_x246, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x977;
  kk_std_core_sslice__sslice _x_x978 = kk_std_core_sslice__sslice_unbox(_b_x246, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x977 = kk_std_num_float64__mlift_pdecdouble_10183(_x_x978, _ctx); /*float64*/
  return kk_double_box(_x_x977, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun980__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice x_10237;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun980(kk_function_t _fself, kk_box_t _b_x248, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun980(kk_std_core_sslice__sslice x_10237, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun980__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdecdouble_fun980__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdecdouble_fun980, kk_context());
  _self->x_10237 = x_10237;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun980(kk_function_t _fself, kk_box_t _b_x248, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun980__t* _self = kk_function_as(struct kk_std_num_float64_pdecdouble_fun980__t*, _fself, _ctx);
  kk_std_core_sslice__sslice x_10237 = _self->x_10237; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(x_10237, _ctx);}, {}, _ctx)
  kk_string_t man_281 = kk_string_unbox(_b_x248); /*string*/;
  double _x_x981 = kk_std_num_float64__mlift_pdecdouble_10182(x_10237, man_281, _ctx); /*float64*/
  return kk_double_box(_x_x981, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun983__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun983(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun983(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun983, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun986__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun986(kk_function_t _fself, kk_box_t _b_x250, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun986(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun986, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun986(kk_function_t _fself, kk_box_t _b_x250, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x987;
  kk_char_t _x_x988 = kk_char_unbox(_b_x250, KK_OWNED, _ctx); /*char*/
  _x_x987 = kk_std_num_float64__mlift_pdecdouble_10180(_x_x988, _ctx); /*string*/
  return kk_string_box(_x_x987);
}
static kk_box_t kk_std_num_float64_pdecdouble_fun983(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_2_10248 = kk_std_text_parse_char('.', _ctx); /*char*/;
  kk_string_t _x_x984;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x985 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun986(_ctx), _ctx); /*2978*/
    _x_x984 = kk_string_unbox(_x_x985); /*string*/
  }
  else {
    _x_x984 = kk_std_text_parse_digits0(_ctx); /*string*/
  }
  return kk_string_box(_x_x984);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun989__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun989(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun989(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun989, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun989(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x990 = kk_string_empty(); /*string*/
  return kk_string_box(_x_x990);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun993__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice x_10237;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun993(kk_function_t _fself, kk_box_t _b_x257, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun993(kk_std_core_sslice__sslice x_10237, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun993__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdecdouble_fun993__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdecdouble_fun993, kk_context());
  _self->x_10237 = x_10237;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun993(kk_function_t _fself, kk_box_t _b_x257, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun993__t* _self = kk_function_as(struct kk_std_num_float64_pdecdouble_fun993__t*, _fself, _ctx);
  kk_std_core_sslice__sslice x_10237 = _self->x_10237; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(x_10237, _ctx);}, {}, _ctx)
  kk_string_t _y_x10141_282 = kk_string_unbox(_b_x257); /*string*/;
  double _x_x994 = kk_std_num_float64__mlift_pdecdouble_10181(x_10237, _y_x10141_282, _ctx); /*float64*/
  return kk_double_box(_x_x994, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun998__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun998(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun998(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun998, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1003__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1003(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1003(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1003, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1003(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1004;
  kk_char_t _x_x1005 = kk_char_unbox(_b_x259, KK_OWNED, _ctx); /*char*/
  _x_x1004 = kk_std_num_float64__mlift_pdecdouble_10178(_x_x1005, _ctx); /*int*/
  return kk_integer_box(_x_x1004, _ctx);
}
static kk_box_t kk_std_num_float64_pdecdouble_fun998(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_4_10253;
  kk_string_t _x_x999;
  kk_define_string_literal(, _s_x1000, 2, "eE", _ctx)
  _x_x999 = kk_string_dup(_s_x1000, _ctx); /*string*/
  x_4_10253 = kk_std_text_parse_one_of(_x_x999, _ctx); /*char*/
  kk_integer_t _x_x1001;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1002 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1003(_ctx), _ctx); /*2978*/
    _x_x1001 = kk_integer_unbox(_x_x1002, _ctx); /*int*/
  }
  else {
    _x_x1001 = kk_std_text_parse_pint(_ctx); /*int*/
  }
  return kk_integer_box(_x_x1001, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1006__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1006(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1006(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1006, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1006(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(0), _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1008__t {
  struct kk_function_s _base;
  kk_std_core_sslice__sslice x_10237;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1008(kk_function_t _fself, kk_box_t _b_x269, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1008(kk_std_core_sslice__sslice x_10237, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1008__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdecdouble_fun1008__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdecdouble_fun1008, kk_context());
  _self->x_10237 = x_10237;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1009__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1009(kk_function_t _fself, kk_box_t _b_x267, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1009(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1009, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1009(kk_function_t _fself, kk_box_t _b_x267, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1010;
  kk_string_t _x_x1011 = kk_string_unbox(_b_x267); /*string*/
  _x_x1010 = kk_std_num_float64_prim_parse_float64(_x_x1011, _ctx); /*float64*/
  return kk_double_box(_x_x1010, _ctx);
}
static kk_box_t kk_std_num_float64_pdecdouble_fun1008(kk_function_t _fself, kk_box_t _b_x269, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdecdouble_fun1008__t* _self = kk_function_as(struct kk_std_num_float64_pdecdouble_fun1008__t*, _fself, _ctx);
  kk_std_core_sslice__sslice x_10237 = _self->x_10237; /* sslice/sslice */
  kk_drop_match(_self, {kk_std_core_sslice__sslice_dup(x_10237, _ctx);}, {}, _ctx)
  kk_integer_t exp_283 = kk_integer_unbox(_b_x269, _ctx); /*int*/;
  kk_integer_drop(exp_283, _ctx);
  kk_string_t _x_x1_10170 = kk_std_core_sslice_string(x_10237, _ctx); /*string*/;
  return kk_std_core_hnd__open_none1(kk_std_num_float64_new_pdecdouble_fun1009(_ctx), kk_string_box(_x_x1_10170), _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdecdouble_fun1013__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdecdouble_fun1013(kk_function_t _fself, kk_box_t _b_x272, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdecdouble_fun1013(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdecdouble_fun1013, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdecdouble_fun1013(kk_function_t _fself, kk_box_t _b_x272, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1014;
  kk_string_t _x_x1015 = kk_string_unbox(_b_x272); /*string*/
  _x_x1014 = kk_std_num_float64_prim_parse_float64(_x_x1015, _ctx); /*float64*/
  return kk_double_box(_x_x1014, _ctx);
}

double kk_std_num_float64_pdecdouble(kk_context_t* _ctx) { /* () -> std/text/parse/parse float64 */ 
  kk_std_core_hnd__ev ev_10240 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_sslice__sslice x_10237;
  kk_box_t _x_x973;
  {
    struct kk_std_core_hnd_Ev* _con_x974 = kk_std_core_hnd__as_Ev(ev_10240, _ctx);
    kk_box_t _box_x239 = _con_x974->hnd;
    int32_t m = _con_x974->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x239, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x531;
    kk_std_core_hnd__clause0 _brw_x532 = kk_std_text_parse__select_current_input(h, _ctx); /*hnd/clause0<sslice/sslice,std/text/parse/parse,775,776>*/;
    kk_std_text_parse__parse_drop(h, _ctx);
    _match_x531 = _brw_x532; /*hnd/clause0<sslice/sslice,std/text/parse/parse,775,776>*/
    {
      kk_function_t _fun_unbox_x242 = _match_x531.clause;
      _x_x973 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x242, (_fun_unbox_x242, m, ev_10240, _ctx), _ctx); /*35*/
    }
  }
  x_10237 = kk_std_core_sslice__sslice_unbox(_x_x973, KK_OWNED, _ctx); /*sslice/sslice*/
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_10237, _ctx);
    kk_box_t _x_x975 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun976(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x975, KK_OWNED, _ctx);
  }
  {
    kk_string_t x_0_10242 = kk_std_text_parse_digits(_ctx); /*string*/;
    kk_string_drop(x_0_10242, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x979 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun980(x_10237, _ctx), _ctx); /*2978*/
      return kk_double_unbox(_x_x979, KK_OWNED, _ctx);
    }
    {
      kk_string_t x_1_10245;
      kk_box_t _x_x982 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_float64_new_pdecdouble_fun983(_ctx), kk_std_num_float64_new_pdecdouble_fun989(_ctx), _ctx); /*1635*/
      x_1_10245 = kk_string_unbox(_x_x982); /*string*/
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_1_10245, _ctx);
        kk_box_t _x_x992 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun993(x_10237, _ctx), _ctx); /*2978*/
        return kk_double_unbox(_x_x992, KK_OWNED, _ctx);
      }
      {
        kk_string_t frac;
        kk_string_t _x_x995;
        kk_define_string_literal(, _s_x996, 1, "0", _ctx)
        _x_x995 = kk_string_dup(_s_x996, _ctx); /*string*/
        frac = kk_std_core_sslice_trim_right(x_1_10245, _x_x995, _ctx); /*string*/
        kk_string_drop(frac, _ctx);
        kk_integer_t x_3_10250;
        kk_box_t _x_x997 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_float64_new_pdecdouble_fun998(_ctx), kk_std_num_float64_new_pdecdouble_fun1006(_ctx), _ctx); /*1635*/
        x_3_10250 = kk_integer_unbox(_x_x997, _ctx); /*int*/
        kk_integer_drop(x_3_10250, _ctx);
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x1007 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdecdouble_fun1008(x_10237, _ctx), _ctx); /*2978*/
          return kk_double_unbox(_x_x1007, KK_OWNED, _ctx);
        }
        {
          kk_string_t _x_x1_10170_0 = kk_std_core_sslice_string(x_10237, _ctx); /*string*/;
          kk_box_t _x_x1012 = kk_std_core_hnd__open_none1(kk_std_num_float64_new_pdecdouble_fun1013(_ctx), kk_string_box(_x_x1_10170_0), _ctx); /*8580*/
          return kk_double_unbox(_x_x1012, KK_OWNED, _ctx);
        }
      }
    }
  }
}


// lift anonymous function
struct kk_std_num_float64_pspecial_fun1018__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1018(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1018(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1018, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pspecial_fun1023__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1023(kk_function_t _fself, kk_box_t _b_x285, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1023(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1023, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pspecial_fun1023(kk_function_t _fself, kk_box_t _b_x285, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1024;
  kk_string_t _x_x1025 = kk_string_unbox(_b_x285); /*string*/
  _x_x1024 = kk_std_num_float64__mlift_pspecial_10184(_x_x1025, _ctx); /*float64*/
  return kk_double_box(_x_x1024, _ctx);
}
static kk_box_t kk_std_num_float64_pspecial_fun1018(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_10257;
  kk_string_t _x_x1019;
  kk_define_string_literal(, _s_x1020, 3, "nan", _ctx)
  _x_x1019 = kk_string_dup(_s_x1020, _ctx); /*string*/
  x_10257 = kk_std_text_parse_pstring(_x_x1019, _ctx); /*string*/
  kk_string_drop(x_10257, _ctx);
  double _x_x1021;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1022 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pspecial_fun1023(_ctx), _ctx); /*2978*/
    _x_x1021 = kk_double_unbox(_x_x1022, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1021 = kk_std_num_float64_nan; /*float64*/
  }
  return kk_double_box(_x_x1021, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pspecial_fun1027__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1027(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1027(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1027, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pspecial_fun1032__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1032(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1032(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1032, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pspecial_fun1032(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1033;
  kk_string_t _x_x1034 = kk_string_unbox(_b_x287); /*string*/
  _x_x1033 = kk_std_num_float64__mlift_pspecial_10185(_x_x1034, _ctx); /*float64*/
  return kk_double_box(_x_x1033, _ctx);
}
static kk_box_t kk_std_num_float64_pspecial_fun1027(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_0_10259;
  kk_string_t _x_x1028;
  kk_define_string_literal(, _s_x1029, 8, "infinity", _ctx)
  _x_x1028 = kk_string_dup(_s_x1029, _ctx); /*string*/
  x_0_10259 = kk_std_text_parse_pstring(_x_x1028, _ctx); /*string*/
  kk_string_drop(x_0_10259, _ctx);
  double _x_x1030;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1031 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pspecial_fun1032(_ctx), _ctx); /*2978*/
    _x_x1030 = kk_double_unbox(_x_x1031, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1030 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1030, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pspecial_fun1036__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1036(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1036(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1036, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pspecial_fun1041__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pspecial_fun1041(kk_function_t _fself, kk_box_t _b_x289, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pspecial_fun1041(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pspecial_fun1041, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pspecial_fun1041(kk_function_t _fself, kk_box_t _b_x289, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1042;
  kk_string_t _x_x1043 = kk_string_unbox(_b_x289); /*string*/
  _x_x1042 = kk_std_num_float64__mlift_pspecial_10186(_x_x1043, _ctx); /*float64*/
  return kk_double_box(_x_x1042, _ctx);
}
static kk_box_t kk_std_num_float64_pspecial_fun1036(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_1_10261;
  kk_string_t _x_x1037;
  kk_define_string_literal(, _s_x1038, 3, "inf", _ctx)
  _x_x1037 = kk_string_dup(_s_x1038, _ctx); /*string*/
  x_1_10261 = kk_std_text_parse_pstring(_x_x1037, _ctx); /*string*/
  kk_string_drop(x_1_10261, _ctx);
  double _x_x1039;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1040 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pspecial_fun1041(_ctx), _ctx); /*2978*/
    _x_x1039 = kk_double_unbox(_x_x1040, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1039 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1039, _ctx);
}

double kk_std_num_float64_pspecial(kk_context_t* _ctx) { /* () -> std/text/parse/parse float64 */ 
  kk_box_t _x_x1016;
  kk_std_core_types__list _x_x1017;
  kk_std_core_types__list _x_x1026;
  kk_std_core_types__list _x_x1035 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pspecial_fun1036(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4024>*/
  _x_x1026 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pspecial_fun1027(_ctx), _ctx), _x_x1035, _ctx); /*list<4024>*/
  _x_x1017 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pspecial_fun1018(_ctx), _ctx), _x_x1026, _ctx); /*list<4024>*/
  _x_x1016 = kk_std_text_parse_choose(_x_x1017, _ctx); /*5652*/
  return kk_double_unbox(_x_x1016, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1046__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1046(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1046(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1046, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1046(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1047 = kk_std_num_float64_phexdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1047, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1049__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1049(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1049(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1049, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1049(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1050 = kk_std_num_float64_pdecdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1050, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1052__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1052(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1052(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1052, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1054__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1054(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1054(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1054, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1059__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1059(kk_function_t _fself, kk_box_t _b_x311, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1059(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1059, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1059(kk_function_t _fself, kk_box_t _b_x311, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1060;
  kk_string_t _x_x1061 = kk_string_unbox(_b_x311); /*string*/
  _x_x1060 = kk_std_num_float64__mlift_pdouble_10187(_x_x1061, _ctx); /*float64*/
  return kk_double_box(_x_x1060, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1054(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_0_10265;
  kk_string_t _x_x1055;
  kk_define_string_literal(, _s_x1056, 3, "nan", _ctx)
  _x_x1055 = kk_string_dup(_s_x1056, _ctx); /*string*/
  x_0_10265 = kk_std_text_parse_pstring(_x_x1055, _ctx); /*string*/
  kk_string_drop(x_0_10265, _ctx);
  double _x_x1057;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1058 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdouble_10191_fun1059(_ctx), _ctx); /*2978*/
    _x_x1057 = kk_double_unbox(_x_x1058, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1057 = kk_std_num_float64_nan; /*float64*/
  }
  return kk_double_box(_x_x1057, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1063__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1063(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1063(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1063, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1068__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1068(kk_function_t _fself, kk_box_t _b_x313, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1068(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1068, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1068(kk_function_t _fself, kk_box_t _b_x313, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1069;
  kk_string_t _x_x1070 = kk_string_unbox(_b_x313); /*string*/
  _x_x1069 = kk_std_num_float64__mlift_pdouble_10188(_x_x1070, _ctx); /*float64*/
  return kk_double_box(_x_x1069, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1063(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_1_10267;
  kk_string_t _x_x1064;
  kk_define_string_literal(, _s_x1065, 8, "infinity", _ctx)
  _x_x1064 = kk_string_dup(_s_x1065, _ctx); /*string*/
  x_1_10267 = kk_std_text_parse_pstring(_x_x1064, _ctx); /*string*/
  kk_string_drop(x_1_10267, _ctx);
  double _x_x1066;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1067 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdouble_10191_fun1068(_ctx), _ctx); /*2978*/
    _x_x1066 = kk_double_unbox(_x_x1067, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1066 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1066, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1072__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1072(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1072(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1072, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1077__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1077(kk_function_t _fself, kk_box_t _b_x315, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1077(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1077, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1077(kk_function_t _fself, kk_box_t _b_x315, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1078;
  kk_string_t _x_x1079 = kk_string_unbox(_b_x315); /*string*/
  _x_x1078 = kk_std_num_float64__mlift_pdouble_10189(_x_x1079, _ctx); /*float64*/
  return kk_double_box(_x_x1078, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1072(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_2_10269;
  kk_string_t _x_x1073;
  kk_define_string_literal(, _s_x1074, 3, "inf", _ctx)
  _x_x1073 = kk_string_dup(_s_x1074, _ctx); /*string*/
  x_2_10269 = kk_std_text_parse_pstring(_x_x1073, _ctx); /*string*/
  kk_string_drop(x_2_10269, _ctx);
  double _x_x1075;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1076 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdouble_10191_fun1077(_ctx), _ctx); /*2978*/
    _x_x1075 = kk_double_unbox(_x_x1076, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1075 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1075, _ctx);
}
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1052(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x1053;
  kk_std_core_types__list _x_x1062;
  kk_std_core_types__list _x_x1071 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10191_fun1072(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4024>*/
  _x_x1062 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10191_fun1063(_ctx), _ctx), _x_x1071, _ctx); /*list<4024>*/
  _x_x1053 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10191_fun1054(_ctx), _ctx), _x_x1062, _ctx); /*list<4024>*/
  return kk_std_text_parse_choose(_x_x1053, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1081__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1081(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1081(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64__mlift_pdouble_10191_fun1081, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1081(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_double_box(0x0p+0, _ctx);
}


// lift anonymous function
struct kk_std_num_float64__mlift_pdouble_10191_fun1083__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1083(kk_function_t _fself, kk_box_t _b_x359, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_pdouble_10191_fun1083(bool neg, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdouble_10191_fun1083__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_pdouble_10191_fun1083__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_pdouble_10191_fun1083, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_pdouble_10191_fun1083(kk_function_t _fself, kk_box_t _b_x359, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_pdouble_10191_fun1083__t* _self = kk_function_as(struct kk_std_num_float64__mlift_pdouble_10191_fun1083__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  double _x_x1084;
  double d_361 = kk_double_unbox(_b_x359, KK_OWNED, _ctx); /*float64*/;
  if (neg) {
    _x_x1084 = (-d_361); /*float64*/
  }
  else {
    _x_x1084 = d_361; /*float64*/
  }
  return kk_double_box(_x_x1084, _ctx);
}

double kk_std_num_float64__mlift_pdouble_10191(bool neg, kk_context_t* _ctx) { /* (neg : bool) -> std/text/parse/parse float64 */ 
  double x_10263;
  kk_box_t _x_x1044;
  kk_std_core_types__list _x_x1045;
  kk_std_core_types__list _x_x1048;
  kk_std_core_types__list _x_x1051;
  kk_std_core_types__list _x_x1080 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10191_fun1081(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4087>*/
  _x_x1051 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10191_fun1052(_ctx), _ctx), _x_x1080, _ctx); /*list<4087>*/
  _x_x1048 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10191_fun1049(_ctx), _ctx), _x_x1051, _ctx); /*list<4087>*/
  _x_x1045 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64__new_mlift_pdouble_10191_fun1046(_ctx), _ctx), _x_x1048, _ctx); /*list<4087>*/
  _x_x1044 = kk_std_text_parse_choose(_x_x1045, _ctx); /*5715*/
  x_10263 = kk_double_unbox(_x_x1044, KK_OWNED, _ctx); /*float64*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1082 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_pdouble_10191_fun1083(neg, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1082, KK_OWNED, _ctx);
  }
  {
    double d_362 = x_10263; /*float64*/;
    if (neg) {
      return (-d_362);
    }
    {
      return d_362;
    }
  }
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1086__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1086(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1086(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1086, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1086(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1087;
  bool _x_x1088 = kk_bool_unbox(_b_x364); /*bool*/
  _x_x1087 = kk_std_num_float64__mlift_pdouble_10191(_x_x1088, _ctx); /*float64*/
  return kk_double_box(_x_x1087, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1091__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1091(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1091(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1091, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1091(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1092 = kk_std_num_float64_phexdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1092, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1094__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1094(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1094(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1094, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1094(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1095 = kk_std_num_float64_pdecdouble(_ctx); /*float64*/
  return kk_double_box(_x_x1095, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1097__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1097(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1097(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1097, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdouble_fun1099__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1099(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1099(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1099, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdouble_fun1104__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1104(kk_function_t _fself, kk_box_t _b_x366, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1104(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1104, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1104(kk_function_t _fself, kk_box_t _b_x366, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1105;
  kk_string_t _x_x1106 = kk_string_unbox(_b_x366); /*string*/
  _x_x1105 = kk_std_num_float64__mlift_pdouble_10187(_x_x1106, _ctx); /*float64*/
  return kk_double_box(_x_x1105, _ctx);
}
static kk_box_t kk_std_num_float64_pdouble_fun1099(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_1_10279;
  kk_string_t _x_x1100;
  kk_define_string_literal(, _s_x1101, 3, "nan", _ctx)
  _x_x1100 = kk_string_dup(_s_x1101, _ctx); /*string*/
  x_1_10279 = kk_std_text_parse_pstring(_x_x1100, _ctx); /*string*/
  kk_string_drop(x_1_10279, _ctx);
  double _x_x1102;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1103 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1104(_ctx), _ctx); /*2978*/
    _x_x1102 = kk_double_unbox(_x_x1103, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1102 = kk_std_num_float64_nan; /*float64*/
  }
  return kk_double_box(_x_x1102, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1108__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1108(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1108(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1108, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdouble_fun1113__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1113(kk_function_t _fself, kk_box_t _b_x368, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1113(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1113, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1113(kk_function_t _fself, kk_box_t _b_x368, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1114;
  kk_string_t _x_x1115 = kk_string_unbox(_b_x368); /*string*/
  _x_x1114 = kk_std_num_float64__mlift_pdouble_10188(_x_x1115, _ctx); /*float64*/
  return kk_double_box(_x_x1114, _ctx);
}
static kk_box_t kk_std_num_float64_pdouble_fun1108(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_2_10281;
  kk_string_t _x_x1109;
  kk_define_string_literal(, _s_x1110, 8, "infinity", _ctx)
  _x_x1109 = kk_string_dup(_s_x1110, _ctx); /*string*/
  x_2_10281 = kk_std_text_parse_pstring(_x_x1109, _ctx); /*string*/
  kk_string_drop(x_2_10281, _ctx);
  double _x_x1111;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1112 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1113(_ctx), _ctx); /*2978*/
    _x_x1111 = kk_double_unbox(_x_x1112, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1111 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1111, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1117__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1117(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1117(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1117, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_pdouble_fun1122__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1122(kk_function_t _fself, kk_box_t _b_x370, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1122(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1122, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1122(kk_function_t _fself, kk_box_t _b_x370, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1123;
  kk_string_t _x_x1124 = kk_string_unbox(_b_x370); /*string*/
  _x_x1123 = kk_std_num_float64__mlift_pdouble_10189(_x_x1124, _ctx); /*float64*/
  return kk_double_box(_x_x1123, _ctx);
}
static kk_box_t kk_std_num_float64_pdouble_fun1117(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t x_3_10283;
  kk_string_t _x_x1118;
  kk_define_string_literal(, _s_x1119, 3, "inf", _ctx)
  _x_x1118 = kk_string_dup(_s_x1119, _ctx); /*string*/
  x_3_10283 = kk_std_text_parse_pstring(_x_x1118, _ctx); /*string*/
  kk_string_drop(x_3_10283, _ctx);
  double _x_x1120;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1121 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1122(_ctx), _ctx); /*2978*/
    _x_x1120 = kk_double_unbox(_x_x1121, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1120 = kk_std_num_float64_posinf; /*float64*/
  }
  return kk_double_box(_x_x1120, _ctx);
}
static kk_box_t kk_std_num_float64_pdouble_fun1097(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x1098;
  kk_std_core_types__list _x_x1107;
  kk_std_core_types__list _x_x1116 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1117(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4024>*/
  _x_x1107 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1108(_ctx), _ctx), _x_x1116, _ctx); /*list<4024>*/
  _x_x1098 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1099(_ctx), _ctx), _x_x1107, _ctx); /*list<4024>*/
  return kk_std_text_parse_choose(_x_x1098, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1126__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_pdouble_fun1126(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1126(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_pdouble_fun1126, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1126(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_double_box(0x0p+0, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_pdouble_fun1128__t {
  struct kk_function_s _base;
  bool x_10273;
};
static kk_box_t kk_std_num_float64_pdouble_fun1128(kk_function_t _fself, kk_box_t _b_x414, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_pdouble_fun1128(bool x_10273, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdouble_fun1128__t* _self = kk_function_alloc_as(struct kk_std_num_float64_pdouble_fun1128__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_pdouble_fun1128, kk_context());
  _self->x_10273 = x_10273;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_pdouble_fun1128(kk_function_t _fself, kk_box_t _b_x414, kk_context_t* _ctx) {
  struct kk_std_num_float64_pdouble_fun1128__t* _self = kk_function_as(struct kk_std_num_float64_pdouble_fun1128__t*, _fself, _ctx);
  bool x_10273 = _self->x_10273; /* bool */
  kk_drop_match(_self, {kk_skip_dup(x_10273, _ctx);}, {}, _ctx)
  double d_417 = kk_double_unbox(_b_x414, KK_OWNED, _ctx); /*float64*/;
  double _x_x1129;
  if (x_10273) {
    _x_x1129 = (-d_417); /*float64*/
  }
  else {
    _x_x1129 = d_417; /*float64*/
  }
  return kk_double_box(_x_x1129, _ctx);
}

double kk_std_num_float64_pdouble(kk_context_t* _ctx) { /* () -> std/text/parse/parse float64 */ 
  bool x_10273 = kk_std_text_parse_sign(_ctx); /*bool*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1085 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1086(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1085, KK_OWNED, _ctx);
  }
  {
    double x_0_10276;
    kk_box_t _x_x1089;
    kk_std_core_types__list _x_x1090;
    kk_std_core_types__list _x_x1093;
    kk_std_core_types__list _x_x1096;
    kk_std_core_types__list _x_x1125 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1126(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<4087>*/
    _x_x1096 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1097(_ctx), _ctx), _x_x1125, _ctx); /*list<4087>*/
    _x_x1093 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1094(_ctx), _ctx), _x_x1096, _ctx); /*list<4087>*/
    _x_x1090 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_std_num_float64_new_pdouble_fun1091(_ctx), _ctx), _x_x1093, _ctx); /*list<4087>*/
    _x_x1089 = kk_std_text_parse_choose(_x_x1090, _ctx); /*5715*/
    x_0_10276 = kk_double_unbox(_x_x1089, KK_OWNED, _ctx); /*float64*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1127 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_pdouble_fun1128(x_10273, _ctx), _ctx); /*2978*/
      return kk_double_unbox(_x_x1127, KK_OWNED, _ctx);
    }
    if (x_10273) {
      return (-x_0_10276);
    }
    {
      return x_0_10276;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_float64__mlift_parse_float64_10193_fun1131__t {
  struct kk_function_s _base;
  double x;
};
static kk_box_t kk_std_num_float64__mlift_parse_float64_10193_fun1131(kk_function_t _fself, kk_box_t _b_x419, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64__new_mlift_parse_float64_10193_fun1131(double x, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_parse_float64_10193_fun1131__t* _self = kk_function_alloc_as(struct kk_std_num_float64__mlift_parse_float64_10193_fun1131__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64__mlift_parse_float64_10193_fun1131, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64__mlift_parse_float64_10193_fun1131(kk_function_t _fself, kk_box_t _b_x419, kk_context_t* _ctx) {
  struct kk_std_num_float64__mlift_parse_float64_10193_fun1131__t* _self = kk_function_as(struct kk_std_num_float64__mlift_parse_float64_10193_fun1131__t*, _fself, _ctx);
  double x = _self->x; /* float64 */
  kk_drop_match(_self, {kk_skip_dup(x, _ctx);}, {}, _ctx)
  kk_unit_t wild___421 = kk_Unit;
  kk_unit_unbox(_b_x419);
  return kk_double_box(x, _ctx);
}

double kk_std_num_float64__mlift_parse_float64_10193(double x, kk_context_t* _ctx) { /* (x : float64) -> std/text/parse/parse float64 */ 
  kk_unit_t x_0_10287 = kk_Unit;
  kk_std_text_parse_eof(_ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1130 = kk_std_core_hnd_yield_extend(kk_std_num_float64__new_mlift_parse_float64_10193_fun1131(x, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x1130, KK_OWNED, _ctx);
  }
  {
    return x;
  }
}
 
// Parse a float64 number. Can be "NaN", "Inf(inity)" (case-insensitive),
// a fix-point number (`1.2`) or in scientific notation (`-2.3e-5`).
// Also allows floats in [hexadecimal notation](https://books.google.com/books?id=FgMsCwAAQBAJ&pg=PA41) (`0xA.Fp-10`) that can
// be represented precisely (and are the preferred _round trip_ format).


// lift anonymous function
struct kk_std_num_float64_parse_float64_fun1136__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_parse_float64_fun1136(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_parse_float64_fun1136(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_parse_float64_fun1136, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_float64_parse_float64_fun1139__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_parse_float64_fun1139(kk_function_t _fself, kk_box_t _b_x423, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_parse_float64_fun1139(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_parse_float64_fun1139, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_parse_float64_fun1139(kk_function_t _fself, kk_box_t _b_x423, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x1140;
  double _x_x1141 = kk_double_unbox(_b_x423, KK_OWNED, _ctx); /*float64*/
  _x_x1140 = kk_std_num_float64__mlift_parse_float64_10193(_x_x1141, _ctx); /*float64*/
  return kk_double_box(_x_x1140, _ctx);
}
static kk_box_t kk_std_num_float64_parse_float64_fun1136(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  double x_10291 = kk_std_num_float64_pdouble(_ctx); /*float64*/;
  double _x_x1137;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1138 = kk_std_core_hnd_yield_extend(kk_std_num_float64_new_parse_float64_fun1139(_ctx), _ctx); /*2978*/
    _x_x1137 = kk_double_unbox(_x_x1138, KK_OWNED, _ctx); /*float64*/
  }
  else {
    _x_x1137 = kk_std_num_float64__mlift_parse_float64_10193(x_10291, _ctx); /*float64*/
  }
  return kk_double_box(_x_x1137, _ctx);
}

kk_std_core_types__maybe kk_std_num_float64_parse_float64(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<float64> */ 
  kk_string_t s_0_10108;
  kk_string_t _x_x1132;
  kk_string_t _x_x1133 = kk_string_trim_left(s,kk_context()); /*string*/
  _x_x1132 = kk_string_trim_right(_x_x1133,kk_context()); /*string*/
  s_0_10108 = kk_std_core_string_to_lower(_x_x1132, _ctx); /*string*/
  kk_std_core_sslice__sslice input_10106;
  kk_string_t _x_x1134 = kk_string_dup(s_0_10108, _ctx); /*string*/
  kk_integer_t _x_x1135 = kk_string_len_int(s_0_10108,kk_context()); /*int*/
  input_10106 = kk_std_core_sslice__new_Sslice(_x_x1134, kk_integer_from_small(0), _x_x1135, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error perr_10105 = kk_std_text_parse_parse(input_10106, kk_std_num_float64_new_parse_float64_fun1136(_ctx), _ctx); /*std/text/parse/parse-error<float64>*/;
  if (kk_std_text_parse__is_ParseOk(perr_10105, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x1142 = kk_std_text_parse__as_ParseOk(perr_10105, _ctx);
    kk_box_t _box_x429 = _con_x1142->result;
    kk_std_core_sslice__sslice _pat_0_0 = _con_x1142->rest;
    double x_0 = kk_double_unbox(_box_x429, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(perr_10105, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0_0, _ctx);
      kk_box_drop(_box_x429, _ctx);
      kk_datatype_ptr_free(perr_10105, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr_10105, _ctx);
    }
    return kk_std_core_types__new_Just(kk_double_box(x_0, _ctx), _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x1143 = kk_std_text_parse__as_ParseError(perr_10105, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x1143->rest;
    kk_string_t msg = _con_x1143->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr_10105, _ctx)) {
      kk_string_drop(msg, _ctx);
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr_10105, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr_10105, _ctx);
    }
    return kk_std_core_types__new_Nothing(_ctx);
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


// lift anonymous function
struct kk_std_num_float64_sum_fun1145__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
};
static kk_unit_t kk_std_num_float64_sum_fun1145(kk_function_t _fself, kk_box_t _b_x454, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_new_sum_fun1145(kk_ref_t loc, kk_ref_t loc_0, kk_context_t* _ctx) {
  struct kk_std_num_float64_sum_fun1145__t* _self = kk_function_alloc_as(struct kk_std_num_float64_sum_fun1145__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_sum_fun1145, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_num_float64_sum_fun1145(kk_function_t _fself, kk_box_t _b_x454, kk_context_t* _ctx) {
  struct kk_std_num_float64_sum_fun1145__t* _self = kk_function_as(struct kk_std_num_float64_sum_fun1145__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<3288,float64> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<3288,float64> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);}, {}, _ctx)
  double x_459 = kk_double_unbox(_b_x454, KK_OWNED, _ctx); /*float64*/;
  double t;
  double _x_x1146;
  kk_box_t _x_x1147;
  kk_ref_t _x_x1148 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
  _x_x1147 = kk_ref_get(_x_x1148,kk_context()); /*4543*/
  _x_x1146 = kk_double_unbox(_x_x1147, KK_OWNED, _ctx); /*float64*/
  t = (_x_x1146 + x_459); /*float64*/
  double c;
  bool _match_x510;
  double _x_x1149;
  double _x_x1150;
  kk_box_t _x_x1151;
  kk_ref_t _x_x1152 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
  _x_x1151 = kk_ref_get(_x_x1152,kk_context()); /*4502*/
  _x_x1150 = kk_double_unbox(_x_x1151, KK_OWNED, _ctx); /*float64*/
  _x_x1149 = kk_double_abs(_x_x1150); /*float64*/
  double _x_x1153 = kk_double_abs(x_459); /*float64*/
  _match_x510 = (_x_x1149 >= _x_x1153); /*bool*/
  if (_match_x510) {
    double _x_x1154;
    double _x_x1155;
    kk_box_t _x_x1156;
    kk_ref_t _x_x1157 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
    _x_x1156 = kk_ref_get(_x_x1157,kk_context()); /*4478*/
    _x_x1155 = kk_double_unbox(_x_x1156, KK_OWNED, _ctx); /*float64*/
    _x_x1154 = (_x_x1155 - t); /*float64*/
    c = (_x_x1154 + x_459); /*float64*/
  }
  else {
    double _x_x1158 = (x_459 - t); /*float64*/
    double _x_x1159;
    kk_box_t _x_x1160;
    kk_ref_t _x_x1161 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
    _x_x1160 = kk_ref_get(_x_x1161,kk_context()); /*4501*/
    _x_x1159 = kk_double_unbox(_x_x1160, KK_OWNED, _ctx); /*float64*/
    c = (_x_x1158 + _x_x1159); /*float64*/
  }
  double _b_x446_448;
  double _x_x1162;
  kk_box_t _x_x1163;
  kk_ref_t _x_x1164 = kk_ref_dup(loc_0, _ctx); /*local-var<3288,float64>*/
  _x_x1163 = kk_ref_get(_x_x1164,kk_context()); /*4543*/
  _x_x1162 = kk_double_unbox(_x_x1163, KK_OWNED, _ctx); /*float64*/
  _b_x446_448 = (_x_x1162 + c); /*float64*/
  kk_unit_t __ = kk_Unit;
  kk_unit_t _brw_x509 = kk_Unit;
  kk_ref_set_borrow(loc_0,(kk_double_box(_b_x446_448, _ctx)),kk_context());
  kk_ref_drop(loc_0, _ctx);
  _brw_x509;
  kk_unit_t _brw_x508 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_double_box(t, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x508; return kk_Unit;
}

double kk_std_num_float64_sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  kk_ref_t loc = kk_ref_alloc((kk_double_box(0x0p+0, _ctx)),kk_context()); /*local-var<3288,float64>*/;
  kk_ref_t loc_0 = kk_ref_alloc((kk_double_box(0x0p+0, _ctx)),kk_context()); /*local-var<3288,float64>*/;
  kk_unit_t ___0 = kk_Unit;
  kk_function_t _x_x1144;
  kk_ref_dup(loc, _ctx);
  kk_ref_dup(loc_0, _ctx);
  _x_x1144 = kk_std_num_float64_new_sum_fun1145(loc, loc_0, _ctx); /*(2691) -> 2692 ()*/
  kk_std_core_list_foreach(xs, _x_x1144, _ctx);
  double res_0;
  double _x_x1165;
  kk_box_t _x_x1166;
  kk_ref_t _x_x1167 = kk_ref_dup(loc, _ctx); /*local-var<3288,float64>*/
  _x_x1166 = kk_ref_get(_x_x1167,kk_context()); /*4575*/
  _x_x1165 = kk_double_unbox(_x_x1166, KK_OWNED, _ctx); /*float64*/
  double _x_x1168;
  kk_box_t _x_x1169;
  kk_ref_t _x_x1170 = kk_ref_dup(loc_0, _ctx); /*local-var<3288,float64>*/
  _x_x1169 = kk_ref_get(_x_x1170,kk_context()); /*4575*/
  _x_x1168 = kk_double_unbox(_x_x1169, KK_OWNED, _ctx); /*float64*/
  res_0 = (_x_x1165 + _x_x1168); /*float64*/
  double res;
  kk_box_t _x_x1171 = kk_std_core_hnd_prompt_local_var(loc_0, kk_double_box(res_0, _ctx), _ctx); /*9564*/
  res = kk_double_unbox(_x_x1171, KK_OWNED, _ctx); /*float64*/
  kk_box_t _x_x1172 = kk_std_core_hnd_prompt_local_var(loc, kk_double_box(res, _ctx), _ctx); /*9564*/
  return kk_double_unbox(_x_x1172, KK_OWNED, _ctx);
}
 
// The hypotenuse of `x` and `y`: `sqrt(x*x + y*y)`.
// Prevents overflow for large numbers.

double kk_std_num_float64_hypot(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  double xx = kk_double_abs(x); /*float64*/;
  double yy = kk_double_abs(y); /*float64*/;
  double lo;
  bool _match_x507 = (xx <= yy); /*bool*/;
  if (_match_x507) {
    lo = xx; /*float64*/
  }
  else {
    lo = yy; /*float64*/
  }
  double hi;
  bool _match_x506 = (xx >= yy); /*bool*/;
  if (_match_x506) {
    hi = xx; /*float64*/
  }
  else {
    hi = yy; /*float64*/
  }
  bool _match_x505 = (hi == (0x0p+0)); /*bool*/;
  if (_match_x505) {
    return 0x0p+0;
  }
  {
    double z = (lo / hi); /*float64*/;
    double _x_x1173;
    double _x_x1174;
    double _x_x1175 = (z * z); /*float64*/
    _x_x1174 = (0x1p0 + _x_x1175); /*float64*/
    _x_x1173 = sqrt(_x_x1174); /*float64*/
    return (hi * _x_x1173);
  }
}
 
// The square root of the sum of the squares of three floats.
// Prevents overflow for large numbers.

double kk_std_num_float64_xyz_fs_hypot(double x, double y, double z, kk_context_t* _ctx) { /* (x : float64, y : float64, z : float64) -> float64 */ 
  double xx = kk_double_abs(x); /*float64*/;
  double yy = kk_double_abs(y); /*float64*/;
  double zz = kk_double_abs(z); /*float64*/;
  double x_0_10115;
  bool _match_x504 = (xx >= yy); /*bool*/;
  if (_match_x504) {
    x_0_10115 = xx; /*float64*/
  }
  else {
    x_0_10115 = yy; /*float64*/
  }
  double hi;
  bool _match_x503 = (x_0_10115 >= zz); /*bool*/;
  if (_match_x503) {
    hi = x_0_10115; /*float64*/
  }
  else {
    hi = zz; /*float64*/
  }
  bool _match_x502 = (hi == (0x0p+0)); /*bool*/;
  if (_match_x502) {
    return 0x0p+0;
  }
  {
    double x_4_10121 = (zz / hi); /*float64*/;
    double x_2_10119 = (xx / hi); /*float64*/;
    double x_3_10120 = (yy / hi); /*float64*/;
    double _x_x1176;
    double _x_x1177;
    double _x_x1178;
    double _x_x1179 = (x_2_10119 * x_2_10119); /*float64*/
    double _x_x1180 = (x_3_10120 * x_3_10120); /*float64*/
    _x_x1178 = (_x_x1179 + _x_x1180); /*float64*/
    double _x_x1181 = (x_4_10121 * x_4_10121); /*float64*/
    _x_x1177 = (_x_x1178 + _x_x1181); /*float64*/
    _x_x1176 = sqrt(_x_x1177); /*float64*/
    return (hi * _x_x1176);
  }
}
 
// The maximum of a list of absolute values.


// lift anonymous function
struct kk_std_num_float64_list_fs_abs_max_fun1183__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_list_fs_abs_max_fun1183(kk_function_t _fself, kk_box_t _b_x475, kk_box_t _b_x476, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_list_fs_new_abs_max_fun1183(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_list_fs_abs_max_fun1183, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_list_fs_abs_max_fun1183(kk_function_t _fself, kk_box_t _b_x475, kk_box_t _b_x476, kk_context_t* _ctx) {
  kk_unused(_fself);
  double m_480 = kk_double_unbox(_b_x475, KK_OWNED, _ctx); /*float64*/;
  double x_481 = kk_double_unbox(_b_x476, KK_OWNED, _ctx); /*float64*/;
  double x_0_10124 = kk_double_abs(x_481); /*float64*/;
  double _x_x1184;
  bool _match_x500 = (x_0_10124 >= m_480); /*bool*/;
  if (_match_x500) {
    _x_x1184 = x_0_10124; /*float64*/
  }
  else {
    _x_x1184 = m_480; /*float64*/
  }
  return kk_double_box(_x_x1184, _ctx);
}

double kk_std_num_float64_list_fs_abs_max(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  kk_box_t _x_x1182 = kk_std_core_list_foldl(xs, kk_double_box(0x0p+0, _ctx), kk_std_num_float64_list_fs_new_abs_max_fun1183(_ctx), _ctx); /*5585*/
  return kk_double_unbox(_x_x1182, KK_OWNED, _ctx);
}
 
// The square root of the sum of squares of a list of floats.
// Prevents overflow for large numbers and uses Kahan-Babu&scaron;kan-Neumaier summation
// for precision.


// lift anonymous function
struct kk_std_num_float64_list_fs_hypot_fun1187__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_float64_list_fs_hypot_fun1187(kk_function_t _fself, kk_box_t _b_x485, kk_box_t _b_x486, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_list_fs_new_hypot_fun1187(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_float64_list_fs_hypot_fun1187, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_float64_list_fs_hypot_fun1187(kk_function_t _fself, kk_box_t _b_x485, kk_box_t _b_x486, kk_context_t* _ctx) {
  kk_unused(_fself);
  double x_0_10124;
  double _x_x1188 = kk_double_unbox(_b_x486, KK_OWNED, _ctx); /*float64*/
  x_0_10124 = kk_double_abs(_x_x1188); /*float64*/
  double _x_x1189;
  bool _match_x499;
  double _x_x1190;
  kk_box_t _x_x1191 = kk_box_dup(_b_x485, _ctx); /*5585*/
  _x_x1190 = kk_double_unbox(_x_x1191, KK_OWNED, _ctx); /*float64*/
  _match_x499 = (x_0_10124 >= _x_x1190); /*bool*/
  if (_match_x499) {
    kk_box_drop(_b_x485, _ctx);
    _x_x1189 = x_0_10124; /*float64*/
  }
  else {
    _x_x1189 = kk_double_unbox(_b_x485, KK_OWNED, _ctx); /*float64*/
  }
  return kk_double_box(_x_x1189, _ctx);
}


// lift anonymous function
struct kk_std_num_float64_list_fs_hypot_fun1193__t {
  struct kk_function_s _base;
  double hi;
};
static double kk_std_num_float64_list_fs_hypot_fun1193(kk_function_t _fself, double x_0, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_list_fs_new_hypot_fun1193(double hi, kk_context_t* _ctx) {
  struct kk_std_num_float64_list_fs_hypot_fun1193__t* _self = kk_function_alloc_as(struct kk_std_num_float64_list_fs_hypot_fun1193__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_list_fs_hypot_fun1193, kk_context());
  _self->hi = hi;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static double kk_std_num_float64_list_fs_hypot_fun1193(kk_function_t _fself, double x_0, kk_context_t* _ctx) {
  struct kk_std_num_float64_list_fs_hypot_fun1193__t* _self = kk_function_as(struct kk_std_num_float64_list_fs_hypot_fun1193__t*, _fself, _ctx);
  double hi = _self->hi; /* float64 */
  kk_drop_match(_self, {kk_skip_dup(hi, _ctx);}, {}, _ctx)
  double x_0_10126 = (x_0 / hi); /*float64*/;
  return (x_0_10126 * x_0_10126);
}


// lift anonymous function
struct kk_std_num_float64_list_fs_hypot_fun1196__t {
  struct kk_function_s _base;
  kk_function_t _b_x493_496;
};
static kk_box_t kk_std_num_float64_list_fs_hypot_fun1196(kk_function_t _fself, kk_box_t _b_x494, kk_context_t* _ctx);
static kk_function_t kk_std_num_float64_list_fs_new_hypot_fun1196(kk_function_t _b_x493_496, kk_context_t* _ctx) {
  struct kk_std_num_float64_list_fs_hypot_fun1196__t* _self = kk_function_alloc_as(struct kk_std_num_float64_list_fs_hypot_fun1196__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_float64_list_fs_hypot_fun1196, kk_context());
  _self->_b_x493_496 = _b_x493_496;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_float64_list_fs_hypot_fun1196(kk_function_t _fself, kk_box_t _b_x494, kk_context_t* _ctx) {
  struct kk_std_num_float64_list_fs_hypot_fun1196__t* _self = kk_function_as(struct kk_std_num_float64_list_fs_hypot_fun1196__t*, _fself, _ctx);
  kk_function_t _b_x493_496 = _self->_b_x493_496; /* (x@0 : float64) -> float64 */
  kk_drop_match(_self, {kk_function_dup(_b_x493_496, _ctx);}, {}, _ctx)
  double _x_x1197;
  double _x_x1198 = kk_double_unbox(_b_x494, KK_OWNED, _ctx); /*float64*/
  _x_x1197 = kk_function_call(double, (kk_function_t, double, kk_context_t*), _b_x493_496, (_b_x493_496, _x_x1198, _ctx), _ctx); /*float64*/
  return kk_double_box(_x_x1197, _ctx);
}

double kk_std_num_float64_list_fs_hypot(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<float64>) -> float64 */ 
  double hi;
  kk_box_t _x_x1185;
  kk_std_core_types__list _x_x1186 = kk_std_core_types__list_dup(xs, _ctx); /*list<float64>*/
  _x_x1185 = kk_std_core_list_foldl(_x_x1186, kk_double_box(0x0p+0, _ctx), kk_std_num_float64_list_fs_new_hypot_fun1187(_ctx), _ctx); /*5585*/
  hi = kk_double_unbox(_x_x1185, KK_OWNED, _ctx); /*float64*/
  bool _match_x498 = (hi == (0x0p+0)); /*bool*/;
  if (_match_x498) {
    kk_std_core_types__list_drop(xs, _ctx);
    return 0x0p+0;
  }
  {
    double _x_x1192;
    kk_std_core_types__list _b_x492_495 = xs; /*list<float64>*/;
    kk_function_t _b_x493_496 = kk_std_num_float64_list_fs_new_hypot_fun1193(hi, _ctx); /*(x@0 : float64) -> float64*/;
    double _x_x1194;
    kk_std_core_types__list _x_x1195 = kk_std_core_list_map(_b_x492_495, kk_std_num_float64_list_fs_new_hypot_fun1196(_b_x493_496, _ctx), _ctx); /*list<6573>*/
    _x_x1194 = kk_std_num_float64_sum(_x_x1195, _ctx); /*float64*/
    _x_x1192 = sqrt(_x_x1194); /*float64*/
    return (hi * _x_x1192);
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
