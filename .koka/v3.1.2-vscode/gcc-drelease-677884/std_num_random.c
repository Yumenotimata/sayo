// Koka generated module: std/num/random, koka version: 3.1.2, platform: 64-bit
#include "std_num_random.h"

kk_std_num_random__sfc kk_std_num_random_sfc_fs__copy(kk_std_num_random__sfc _this, kk_std_core_types__optional x, kk_std_core_types__optional y, kk_std_core_types__optional z, kk_std_core_types__optional cnt, kk_context_t* _ctx) { /* (sfc, x : ? int32, y : ? int32, z : ? int32, cnt : ? int32) -> sfc */ 
  int32_t _x_x162;
  if (kk_std_core_types__is_Optional(x, _ctx)) {
    kk_box_t _box_x0 = x._cons._Optional.value;
    int32_t _uniq_x_176 = kk_int32_unbox(_box_x0, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(x, _ctx);
    _x_x162 = _uniq_x_176; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(x, _ctx);
    {
      int32_t _x = _this.x;
      _x_x162 = _x; /*int32*/
    }
  }
  int32_t _x_x163;
  if (kk_std_core_types__is_Optional(y, _ctx)) {
    kk_box_t _box_x1 = y._cons._Optional.value;
    int32_t _uniq_y_183 = kk_int32_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(y, _ctx);
    _x_x163 = _uniq_y_183; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(y, _ctx);
    {
      int32_t _x_0 = _this.y;
      _x_x163 = _x_0; /*int32*/
    }
  }
  int32_t _x_x164;
  if (kk_std_core_types__is_Optional(z, _ctx)) {
    kk_box_t _box_x2 = z._cons._Optional.value;
    int32_t _uniq_z_190 = kk_int32_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(z, _ctx);
    _x_x164 = _uniq_z_190; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(z, _ctx);
    {
      int32_t _x_1 = _this.z;
      _x_x164 = _x_1; /*int32*/
    }
  }
  int32_t _x_x165;
  if (kk_std_core_types__is_Optional(cnt, _ctx)) {
    kk_box_t _box_x3 = cnt._cons._Optional.value;
    int32_t _uniq_cnt_197 = kk_int32_unbox(_box_x3, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(cnt, _ctx);
    _x_x165 = _uniq_cnt_197; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(cnt, _ctx);
    {
      int32_t _x_2 = _this.cnt;
      _x_x165 = _x_2; /*int32*/
    }
  }
  return kk_std_num_random__new_Sfc(_x_x162, _x_x163, _x_x164, _x_x165, _ctx);
}

kk_std_num_random__sfc_result kk_std_num_random_sfc_result_fs__copy(kk_std_num_random__sfc_result _this, kk_std_core_types__optional rnd, kk_std_core_types__optional rstate, kk_context_t* _ctx) { /* (sfc-result, rnd : ? int32, rstate : ? sfc) -> sfc-result */ 
  int32_t _x_x166;
  if (kk_std_core_types__is_Optional(rnd, _ctx)) {
    kk_box_t _box_x4 = rnd._cons._Optional.value;
    int32_t _uniq_rnd_230 = kk_int32_unbox(_box_x4, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(rnd, _ctx);
    _x_x166 = _uniq_rnd_230; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(rnd, _ctx);
    {
      kk_std_num_random__sfc _pat_0_0 = _this.rstate;
      int32_t _x = _this.rnd;
      _x_x166 = _x; /*int32*/
    }
  }
  kk_std_num_random__sfc _x_x167;
  if (kk_std_core_types__is_Optional(rstate, _ctx)) {
    kk_box_t _box_x5 = rstate._cons._Optional.value;
    kk_std_num_random__sfc _uniq_rstate_237 = kk_std_num_random__sfc_unbox(_box_x5, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(rstate, _ctx);
    _x_x167 = _uniq_rstate_237; /*std/num/random/sfc*/
  }
  else {
    kk_std_core_types__optional_drop(rstate, _ctx);
    {
      kk_std_num_random__sfc _x_0 = _this.rstate;
      _x_x167 = _x_0; /*std/num/random/sfc*/
    }
  }
  return kk_std_num_random__new_Sfc_result(_x_x166, _x_x167, _ctx);
}
 
// runtime tag for the effect `:random`

kk_std_core_hnd__htag kk_std_num_random__tag_random;
 
// handler for the effect `:random`

kk_box_t kk_std_num_random__handle_random(kk_std_num_random__random hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : random<e,b>, ret : (res : a) -> e b, action : () -> <random|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x170 = kk_std_core_hnd__htag_dup(kk_std_num_random__tag_random, _ctx); /*hnd/htag<std/num/random/random>*/
  return kk_std_core_hnd__hhandle(_x_x170, kk_std_num_random__random_box(hnd, _ctx), ret, action, _ctx);
}
 
// Return a strong random `:int32`

int32_t kk_std_num_random_srandom_int32(kk_context_t* _ctx) { /* () -> ndet int32 */ 
  return (int32_t)kk_srandom_uint32(kk_context());
}
extern int32_t kk_std_num_random_strong_random_fun175(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_num_random_srandom_int32(_ctx);
}
extern kk_box_t kk_std_num_random_strong_random_fun178(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_num_random_strong_random_fun178__t* _self = kk_function_as(struct kk_std_num_random_strong_random_fun178__t*, _fself, _ctx);
  kk_function_t _b_x20_21 = _self->_b_x20_21; /* () -> ndet int32 */
  kk_drop_match(_self, {kk_function_dup(_b_x20_21, _ctx);}, {}, _ctx)
  int32_t _x_x179 = kk_function_call(int32_t, (kk_function_t, kk_context_t*), _b_x20_21, (_b_x20_21, _ctx), _ctx); /*int32*/
  return kk_int32_box(_x_x179, _ctx);
}
extern kk_box_t kk_std_num_random_strong_random_fun180(kk_function_t _fself, kk_box_t _x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x;
}
extern int32_t kk_std_num_random__default_random_fun181(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_num_random_srandom_int32(_ctx);
}
extern kk_box_t kk_std_num_random__default_random_fun184(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_num_random__default_random_fun184__t* _self = kk_function_as(struct kk_std_num_random__default_random_fun184__t*, _fself, _ctx);
  kk_function_t _b_x22_23 = _self->_b_x22_23; /* () -> ndet int32 */
  kk_drop_match(_self, {kk_function_dup(_b_x22_23, _ctx);}, {}, _ctx)
  int32_t _x_x185 = kk_function_call(int32_t, (kk_function_t, kk_context_t*), _b_x22_23, (_b_x22_23, _ctx), _ctx); /*int32*/
  return kk_int32_box(_x_x185, _ctx);
}
extern kk_box_t kk_std_num_random__default_random_fun186(kk_function_t _fself, kk_box_t _x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x;
}

kk_std_num_random__sfc_result kk_std_num_random_sfc_step(kk_std_num_random__sfc sfc, kk_context_t* _ctx) { /* (sfc : sfc) -> sfc-result */ 
  {
    int32_t x = sfc.x;
    int32_t y = sfc.y;
    int32_t z = sfc.z;
    int32_t cnt = sfc.cnt;
    int32_t res;
    int32_t _x_x187 = (int32_t)((uint32_t)x + (uint32_t)y); /*int32*/
    res = (int32_t)((uint32_t)_x_x187 + (uint32_t)cnt); /*int32*/
    int32_t y_0_10007 = (int32_t)kk_shr32(y,((KK_I32(9)))); /*int32*/;
    kk_std_num_random__sfc _x_x188;
    int32_t _x_x189 = (y ^ y_0_10007); /*int32*/
    int32_t _x_x190;
    int32_t _x_x191 = kk_shl32(z,((KK_I32(3)))); /*int32*/
    _x_x190 = (int32_t)((uint32_t)z + (uint32_t)_x_x191); /*int32*/
    int32_t _x_x192;
    int32_t _x_x193 = (int32_t)kk_bits_rotl32(z,((KK_I32(21)))); /*int32*/
    _x_x192 = (int32_t)((uint32_t)_x_x193 + (uint32_t)res); /*int32*/
    int32_t _x_x194 = (int32_t)((uint32_t)cnt + (uint32_t)((KK_I32(1)))); /*int32*/
    _x_x188 = kk_std_num_random__new_Sfc(_x_x189, _x_x190, _x_x192, _x_x194, _ctx); /*std/num/random/sfc*/
    return kk_std_num_random__new_Sfc_result(res, _x_x188, _ctx);
  }
}
 
// lifted local: @lift-sfc-init32@10159, sfc-init32, @spec-x10140
// specialized: std/num/int32/#range/fold-int32, on parameters @uniq-f@10135, using:
// @uniq-f@10135 = fn(@_wildcard-x57_34: int32, s: std/num/random/sfc){
//   val @this@10014 : std/num/random/sfc-result
//         = std/num/random/sfc-step(s);
//   match (@this@10014) {
//     ((@skip std/num/random/Sfc-result((@pat@0: int32) : int32, ((@skip std/num/random/Sfc((@pat@1: int32) : int32, (@pat@2: int32) : int32, (@pat@3: int32) : int32, (@pat@4: int32) : int32) : std/num/random/sfc ) as @x: std/num/random/sfc) : std/num/random/sfc) : std/num/random/sfc-result ) as @pat: std/num/random/sfc-result)
//        -> @x;
//   };
// }

kk_std_num_random__sfc kk_std_num_random__lift_sfc_init32_10160(int32_t _uniq_start_10132, int32_t _uniq_end_10133, kk_std_num_random__sfc _uniq_init_10134, kk_context_t* _ctx) { /* (int32, int32, sfc) -> sfc */ 
  kk__tailcall: ;
  bool _match_x149 = (_uniq_start_10132 > _uniq_end_10133); /*bool*/;
  if (_match_x149) {
    return _uniq_init_10134;
  }
  {
    kk_std_num_random__sfc_result _this_10014 = kk_std_num_random_sfc_step(_uniq_init_10134, _ctx); /*std/num/random/sfc-result*/;
    int32_t _own_x150 = (int32_t)((uint32_t)_uniq_start_10132 + (uint32_t)((KK_I32(1)))); /*int32*/;
    { // tailcall
      kk_std_num_random__sfc _x_x195;
      {
        kk_std_num_random__sfc _x = _this_10014.rstate;
        _x_x195 = _x; /*std/num/random/sfc*/
      }
      _uniq_start_10132 = _own_x150;
      _uniq_init_10134 = _x_x195;
      goto kk__tailcall;
    }
  }
}
 
// lifted local: sfc-init32, @spec-x10131
// specialized: std/num/int32/fold-int32, on parameters @uniq-f@10129, using:
// @uniq-f@10129 = fn(@_wildcard-x57_34: int32, s: std/num/random/sfc){
//   val @this@10014 : std/num/random/sfc-result
//         = std/num/random/sfc-step(s);
//   match (@this@10014) {
//     ((@skip std/num/random/Sfc-result((@pat@0: int32) : int32, ((@skip std/num/random/Sfc((@pat@1: int32) : int32, (@pat@2: int32) : int32, (@pat@3: int32) : int32, (@pat@4: int32) : int32) : std/num/random/sfc ) as @x: std/num/random/sfc) : std/num/random/sfc) : std/num/random/sfc-result ) as @pat: std/num/random/sfc-result)
//        -> @x;
//   };
// }

kk_std_num_random__sfc kk_std_num_random__lift_sfc_init32_10159(int32_t _uniq_n_10127, kk_std_num_random__sfc _uniq_init_10128, kk_context_t* _ctx) { /* (int32, sfc) -> sfc */ 
  int32_t _own_x148 = (int32_t)((uint32_t)_uniq_n_10127 - (uint32_t)((KK_I32(1)))); /*int32*/;
  return kk_std_num_random__lift_sfc_init32_10160(kk_std_num_int32_zero, _own_x148, _uniq_init_10128, _ctx);
}
 
// lifted local: @lift-sfc-init@10161, sfc-init, @spec-x10156
// specialized: std/num/int32/#range/fold-int32, on parameters @uniq-f@10151, using:
// @uniq-f@10151 = fn(@_wildcard-x57_34: int32, s: std/num/random/sfc){
//   val @this@10017 : std/num/random/sfc-result
//         = std/num/random/sfc-step(s);
//   match (@this@10017) {
//     ((@skip std/num/random/Sfc-result((@pat@0: int32) : int32, ((@skip std/num/random/Sfc((@pat@1: int32) : int32, (@pat@2: int32) : int32, (@pat@3: int32) : int32, (@pat@4: int32) : int32) : std/num/random/sfc ) as @x: std/num/random/sfc) : std/num/random/sfc) : std/num/random/sfc-result ) as @pat: std/num/random/sfc-result)
//        -> @x;
//   };
// }

kk_std_num_random__sfc kk_std_num_random__lift_sfc_init_10162(int32_t _uniq_start_10148, int32_t _uniq_end_10149, kk_std_num_random__sfc _uniq_init_10150, kk_context_t* _ctx) { /* (int32, int32, sfc) -> sfc */ 
  kk__tailcall: ;
  bool _match_x145 = (_uniq_start_10148 > _uniq_end_10149); /*bool*/;
  if (_match_x145) {
    return _uniq_init_10150;
  }
  {
    kk_std_num_random__sfc_result _this_10017 = kk_std_num_random_sfc_step(_uniq_init_10150, _ctx); /*std/num/random/sfc-result*/;
    int32_t _own_x146 = (int32_t)((uint32_t)_uniq_start_10148 + (uint32_t)((KK_I32(1)))); /*int32*/;
    { // tailcall
      kk_std_num_random__sfc _x_x196;
      {
        kk_std_num_random__sfc _x = _this_10017.rstate;
        _x_x196 = _x; /*std/num/random/sfc*/
      }
      _uniq_start_10148 = _own_x146;
      _uniq_init_10150 = _x_x196;
      goto kk__tailcall;
    }
  }
}
 
// lifted local: sfc-init, @spec-x10147
// specialized: std/num/int32/fold-int32, on parameters @uniq-f@10145, using:
// @uniq-f@10145 = fn(@_wildcard-x57_34: int32, s: std/num/random/sfc){
//   val @this@10017 : std/num/random/sfc-result
//         = std/num/random/sfc-step(s);
//   match (@this@10017) {
//     ((@skip std/num/random/Sfc-result((@pat@0: int32) : int32, ((@skip std/num/random/Sfc((@pat@1: int32) : int32, (@pat@2: int32) : int32, (@pat@3: int32) : int32, (@pat@4: int32) : int32) : std/num/random/sfc ) as @x: std/num/random/sfc) : std/num/random/sfc) : std/num/random/sfc-result ) as @pat: std/num/random/sfc-result)
//        -> @x;
//   };
// }

kk_std_num_random__sfc kk_std_num_random__lift_sfc_init_10161(int32_t _uniq_n_10143, kk_std_num_random__sfc _uniq_init_10144, kk_context_t* _ctx) { /* (int32, sfc) -> sfc */ 
  int32_t _own_x144 = (int32_t)((uint32_t)_uniq_n_10143 - (uint32_t)((KK_I32(1)))); /*int32*/;
  return kk_std_num_random__lift_sfc_init_10162(kk_std_num_int32_zero, _own_x144, _uniq_init_10144, _ctx);
}

kk_std_num_random__sfc kk_std_num_random_sfc_init(kk_integer_t seed, kk_context_t* _ctx) { /* (seed : int) -> sfc */ 
  int32_t seed1_10015;
  kk_integer_t _x_x197 = kk_integer_dup(seed, _ctx); /*int*/
  seed1_10015 = kk_integer_clamp32(_x_x197,kk_context()); /*int32*/
  int32_t seed2_10016;
  kk_integer_t _x_x198 = kk_integer_div(seed,(kk_integer_from_str("4294967296", _ctx)),kk_context()); /*int*/
  seed2_10016 = kk_integer_clamp32(_x_x198,kk_context()); /*int32*/
  kk_std_num_random__sfc sfc0 = kk_std_num_random__new_Sfc((KK_I32(0)), seed1_10015, seed2_10016, (KK_I32(1)), _ctx); /*std/num/random/sfc*/;
  int32_t _own_x143 = (KK_I32(12)); /*int32*/;
  return kk_std_num_random__lift_sfc_init_10161(_own_x143, sfc0, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_random__mlift_pseudo_random_10190_fun210__t {
  struct kk_function_s _base;
  kk_std_num_random__sfc_result sfc_0;
};
static kk_box_t kk_std_num_random__mlift_pseudo_random_10190_fun210(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_pseudo_random_10190_fun210(kk_std_num_random__sfc_result sfc_0, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_pseudo_random_10190_fun210__t* _self = kk_function_alloc_as(struct kk_std_num_random__mlift_pseudo_random_10190_fun210__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random__mlift_pseudo_random_10190_fun210, kk_context());
  _self->sfc_0 = sfc_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random__mlift_pseudo_random_10190_fun210(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_pseudo_random_10190_fun210__t* _self = kk_function_as(struct kk_std_num_random__mlift_pseudo_random_10190_fun210__t*, _fself, _ctx);
  kk_std_num_random__sfc_result sfc_0 = _self->sfc_0; /* std/num/random/sfc-result */
  kk_drop_match(_self, {kk_std_num_random__sfc_result_dup(sfc_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___31 = kk_Unit;
  kk_unit_unbox(_b_x29);
  int32_t _x_x211;
  {
    kk_std_num_random__sfc _pat_0_1_0 = sfc_0.rstate;
    int32_t _x_0 = sfc_0.rnd;
    _x_x211 = _x_0; /*int32*/
  }
  return kk_int32_box(_x_x211, _ctx);
}

int32_t kk_std_num_random__mlift_pseudo_random_10190(kk_ref_t s, kk_std_num_random__sfc _y_x10167, kk_context_t* _ctx) { /* forall<h,e> (s : local-var<h,sfc>, sfc) -> <local<h>|e> int32 */ 
  kk_std_num_random__sfc_result sfc_0;
  {
    int32_t x = _y_x10167.x;
    int32_t y = _y_x10167.y;
    int32_t z = _y_x10167.z;
    int32_t cnt = _y_x10167.cnt;
    int32_t res;
    int32_t _x_x199 = (int32_t)((uint32_t)x + (uint32_t)y); /*int32*/
    res = (int32_t)((uint32_t)_x_x199 + (uint32_t)cnt); /*int32*/
    int32_t y_0_10020 = (int32_t)kk_shr32(y,((KK_I32(9)))); /*int32*/;
    kk_std_num_random__sfc _x_x200;
    int32_t _x_x201 = (y ^ y_0_10020); /*int32*/
    int32_t _x_x202;
    int32_t _x_x203 = kk_shl32(z,((KK_I32(3)))); /*int32*/
    _x_x202 = (int32_t)((uint32_t)z + (uint32_t)_x_x203); /*int32*/
    int32_t _x_x204;
    int32_t _x_x205 = (int32_t)kk_bits_rotl32(z,((KK_I32(21)))); /*int32*/
    _x_x204 = (int32_t)((uint32_t)_x_x205 + (uint32_t)res); /*int32*/
    int32_t _x_x206 = (int32_t)((uint32_t)cnt + (uint32_t)((KK_I32(1)))); /*int32*/
    _x_x200 = kk_std_num_random__new_Sfc(_x_x201, _x_x202, _x_x204, _x_x206, _ctx); /*std/num/random/sfc*/
    sfc_0 = kk_std_num_random__new_Sfc_result(res, _x_x200, _ctx); /*std/num/random/sfc-result*/
  }
  kk_unit_t x_0_10201 = kk_Unit;
  kk_unit_t _brw_x142 = kk_Unit;
  kk_box_t _x_x207;
  kk_std_num_random__sfc _x_x208;
  {
    kk_std_num_random__sfc _x = sfc_0.rstate;
    _x_x208 = _x; /*std/num/random/sfc*/
  }
  _x_x207 = kk_std_num_random__sfc_box(_x_x208, _ctx); /*2060*/
  kk_ref_set_borrow(s,_x_x207,kk_context());
  kk_ref_drop(s, _ctx);
  _brw_x142;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x209 = kk_std_core_hnd_yield_extend(kk_std_num_random__new_mlift_pseudo_random_10190_fun210(sfc_0, _ctx), _ctx); /*2978*/
    return kk_int32_unbox(_x_x209, KK_OWNED, _ctx);
  }
  {
    kk_std_num_random__sfc _pat_0_1_0_0 = sfc_0.rstate;
    int32_t _x_0_0 = sfc_0.rnd;
    return _x_0_0;
  }
}
 
// Use pseudo random numbers given some initial `seed`. At most
// 64-bits of the initial seed are used. Do not use this for
// cryptographic applications (use `strong-random` instead).
// Uses _sfc32_ by Chris Doty-Humphrey which is a fast random
// number generator with a 128-bit internal state which
// passes PractRand and BigCrush. The worst case minimum cycle
// is 2^^32^^, where a potential cycle of 2^^48^^ has a chance
// of 2^^-80^^.


// lift anonymous function
struct kk_std_num_random_pseudo_random_fun215__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_num_random_pseudo_random_fun215(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_pseudo_random_fun215(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_num_random_pseudo_random_fun215__t* _self = kk_function_alloc_as(struct kk_std_num_random_pseudo_random_fun215__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random_pseudo_random_fun215, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_num_random_pseudo_random_fun220__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_num_random_pseudo_random_fun220(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_pseudo_random_fun220(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_num_random_pseudo_random_fun220__t* _self = kk_function_alloc_as(struct kk_std_num_random_pseudo_random_fun220__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random_pseudo_random_fun220, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random_pseudo_random_fun220(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  struct kk_std_num_random_pseudo_random_fun220__t* _self = kk_function_as(struct kk_std_num_random_pseudo_random_fun220__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<798,std/num/random/sfc> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t _x_x221;
  kk_std_num_random__sfc _x_x222 = kk_std_num_random__sfc_unbox(_b_x37, KK_OWNED, _ctx); /*std/num/random/sfc*/
  _x_x221 = kk_std_num_random__mlift_pseudo_random_10190(loc, _x_x222, _ctx); /*int32*/
  return kk_int32_box(_x_x221, _ctx);
}
static kk_box_t kk_std_num_random_pseudo_random_fun215(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_num_random_pseudo_random_fun215__t* _self = kk_function_as(struct kk_std_num_random_pseudo_random_fun215__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<798,std/num/random/sfc> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_num_random__sfc x_10207;
  kk_box_t _x_x216;
  kk_ref_t _x_x217 = kk_ref_dup(loc, _ctx); /*local-var<798,std/num/random/sfc>*/
  _x_x216 = kk_ref_get(_x_x217,kk_context()); /*2074*/
  x_10207 = kk_std_num_random__sfc_unbox(_x_x216, KK_OWNED, _ctx); /*std/num/random/sfc*/
  int32_t _x_x218;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x219 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_pseudo_random_fun220(loc, _ctx), _ctx); /*2978*/
    _x_x218 = kk_int32_unbox(_x_x219, KK_OWNED, _ctx); /*int32*/
  }
  else {
    _x_x218 = kk_std_num_random__mlift_pseudo_random_10190(loc, x_10207, _ctx); /*int32*/
  }
  return kk_int32_box(_x_x218, _ctx);
}


// lift anonymous function
struct kk_std_num_random_pseudo_random_fun223__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_pseudo_random_fun223(kk_function_t _fself, kk_box_t _x_1, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_pseudo_random_fun223(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_pseudo_random_fun223, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_pseudo_random_fun223(kk_function_t _fself, kk_box_t _x_1, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x_1;
}

kk_box_t kk_std_num_random_pseudo_random(kk_integer_t seed, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e> (seed : int, action : () -> <random|e> a) -> e a */ 
  kk_std_num_random__sfc init_10205 = kk_std_num_random_sfc_init(seed, _ctx); /*std/num/random/sfc*/;
  kk_ref_t loc = kk_ref_alloc((kk_std_num_random__sfc_box(init_10205, _ctx)),kk_context()); /*local-var<798,std/num/random/sfc>*/;
  kk_box_t res;
  kk_std_num_random__random _x_x212;
  kk_std_core_hnd__clause0 _x_x213;
  kk_function_t _x_x214;
  kk_ref_dup(loc, _ctx);
  _x_x214 = kk_std_num_random_new_pseudo_random_fun215(loc, _ctx); /*() -> 6231 6234*/
  _x_x213 = kk_std_core_hnd_clause_tail0(_x_x214, _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  _x_x212 = kk_std_num_random__new_Hnd_random(kk_reuse_null, 0, kk_integer_from_small(1), _x_x213, _ctx); /*std/num/random/random<5,6>*/
  res = kk_std_num_random__handle_random(_x_x212, kk_std_num_random_new_pseudo_random_fun223(_ctx), action, _ctx); /*804*/
  return kk_std_core_hnd_prompt_local_var(loc, res, _ctx);
}
 
// Return a random boolean


// lift anonymous function
struct kk_std_num_random_random_bool_fun228__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_bool_fun228(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_bool_fun228(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_bool_fun228, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_bool_fun228(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x229;
  int32_t _x_x230 = kk_int32_unbox(_b_x49, KK_OWNED, _ctx); /*int32*/
  _x_x229 = kk_std_num_random__mlift_random_bool_10191(_x_x230, _ctx); /*bool*/
  return kk_bool_box(_x_x229);
}

bool kk_std_num_random_random_bool(kk_context_t* _ctx) { /* () -> random bool */ 
  kk_std_core_hnd__ev ev_10213 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10210;
  kk_box_t _x_x224;
  {
    struct kk_std_core_hnd_Ev* _con_x225 = kk_std_core_hnd__as_Ev(ev_10213, _ctx);
    kk_box_t _box_x42 = _con_x225->hnd;
    int32_t m = _con_x225->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x42, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x226 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x226->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x226->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x45 = _fun_random_int32.clause;
        _x_x224 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x45, (_fun_unbox_x45, m, ev_10213, _ctx), _ctx); /*35*/
      }
    }
  }
  x_10210 = kk_int32_unbox(_x_x224, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x227 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_bool_fun228(_ctx), _ctx); /*2978*/
    return kk_bool_unbox(_x_x227);
  }
  {
    return (x_10210 >= ((KK_I32(0))));
  }
}
 
// Return a random integer in the range [-2^^31^^, 2^^31^^).


// lift anonymous function
struct kk_std_num_random_random_int_fun235__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_int_fun235(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_int_fun235(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_int_fun235, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_int_fun235(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x236;
  int32_t _x_x237 = kk_int32_unbox(_b_x58, KK_OWNED, _ctx); /*int32*/
  _x_x236 = kk_std_num_random__mlift_random_int_10192(_x_x237, _ctx); /*int*/
  return kk_integer_box(_x_x236, _ctx);
}

kk_integer_t kk_std_num_random_random_int(kk_context_t* _ctx) { /* () -> random int */ 
  kk_std_core_hnd__ev ev_10218 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10215;
  kk_box_t _x_x231;
  {
    struct kk_std_core_hnd_Ev* _con_x232 = kk_std_core_hnd__as_Ev(ev_10218, _ctx);
    kk_box_t _box_x51 = _con_x232->hnd;
    int32_t m = _con_x232->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x51, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x233 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x233->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x233->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x54 = _fun_random_int32.clause;
        _x_x231 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x54, (_fun_unbox_x54, m, ev_10218, _ctx), _ctx); /*35*/
      }
    }
  }
  x_10215 = kk_int32_unbox(_x_x231, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x234 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_int_fun235(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x234, _ctx);
  }
  {
    return kk_integer_from_int(x_10215,kk_context());
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_random__mlift_random_int64_10194_fun242__t {
  struct kk_function_s _base;
  int32_t _y_x10175;
};
static kk_box_t kk_std_num_random__mlift_random_int64_10194_fun242(kk_function_t _fself, kk_box_t _b_x67, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_random_int64_10194_fun242(int32_t _y_x10175, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_random_int64_10194_fun242__t* _self = kk_function_alloc_as(struct kk_std_num_random__mlift_random_int64_10194_fun242__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random__mlift_random_int64_10194_fun242, kk_context());
  _self->_y_x10175 = _y_x10175;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random__mlift_random_int64_10194_fun242(kk_function_t _fself, kk_box_t _b_x67, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_random_int64_10194_fun242__t* _self = kk_function_as(struct kk_std_num_random__mlift_random_int64_10194_fun242__t*, _fself, _ctx);
  int32_t _y_x10175 = _self->_y_x10175; /* int32 */
  kk_drop_match(_self, {kk_skip_dup(_y_x10175, _ctx);}, {}, _ctx)
  int32_t _y_x10176_69 = kk_int32_unbox(_b_x67, KK_OWNED, _ctx); /*int32*/;
  int64_t _x_x243 = kk_int64_hi_lo(_y_x10175,_y_x10176_69); /*int64*/
  return kk_int64_box(_x_x243, _ctx);
}

int64_t kk_std_num_random__mlift_random_int64_10194(int32_t _y_x10175, kk_context_t* _ctx) { /* (int32) -> random int64 */ 
  kk_std_core_hnd__ev ev_10222 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10220;
  kk_box_t _x_x238;
  {
    struct kk_std_core_hnd_Ev* _con_x239 = kk_std_core_hnd__as_Ev(ev_10222, _ctx);
    kk_box_t _box_x60 = _con_x239->hnd;
    int32_t m = _con_x239->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x60, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x240 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x240->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x240->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x63 = _fun_random_int32.clause;
        _x_x238 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x63, (_fun_unbox_x63, m, ev_10222, _ctx), _ctx); /*35*/
      }
    }
  }
  x_10220 = kk_int32_unbox(_x_x238, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x241 = kk_std_core_hnd_yield_extend(kk_std_num_random__new_mlift_random_int64_10194_fun242(_y_x10175, _ctx), _ctx); /*2978*/
    return kk_int64_unbox(_x_x241, KK_OWNED, _ctx);
  }
  {
    return kk_int64_hi_lo(_y_x10175,x_10220);
  }
}


// lift anonymous function
struct kk_std_num_random_random_int64_fun248__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_int64_fun248(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_int64_fun248(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_int64_fun248, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_int64_fun248(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx) {
  kk_unused(_fself);
  int64_t _x_x249;
  int32_t _x_x250 = kk_int32_unbox(_b_x77, KK_OWNED, _ctx); /*int32*/
  _x_x249 = kk_std_num_random__mlift_random_int64_10194(_x_x250, _ctx); /*int64*/
  return kk_int64_box(_x_x249, _ctx);
}


// lift anonymous function
struct kk_std_num_random_random_int64_fun255__t {
  struct kk_function_s _base;
  int32_t x_10226;
};
static kk_box_t kk_std_num_random_random_int64_fun255(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_int64_fun255(int32_t x_10226, kk_context_t* _ctx) {
  struct kk_std_num_random_random_int64_fun255__t* _self = kk_function_alloc_as(struct kk_std_num_random_random_int64_fun255__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random_random_int64_fun255, kk_context());
  _self->x_10226 = x_10226;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random_random_int64_fun255(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx) {
  struct kk_std_num_random_random_int64_fun255__t* _self = kk_function_as(struct kk_std_num_random_random_int64_fun255__t*, _fself, _ctx);
  int32_t x_10226 = _self->x_10226; /* int32 */
  kk_drop_match(_self, {kk_skip_dup(x_10226, _ctx);}, {}, _ctx)
  int32_t _y_x10176_88 = kk_int32_unbox(_b_x85, KK_OWNED, _ctx); /*int32*/;
  int64_t _x_x256 = kk_int64_hi_lo(x_10226,_y_x10176_88); /*int64*/
  return kk_int64_box(_x_x256, _ctx);
}

int64_t kk_std_num_random_random_int64(kk_context_t* _ctx) { /* () -> random int64 */ 
  kk_std_core_hnd__ev ev_10229 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10226;
  kk_box_t _x_x244;
  {
    struct kk_std_core_hnd_Ev* _con_x245 = kk_std_core_hnd__as_Ev(ev_10229, _ctx);
    kk_box_t _box_x70 = _con_x245->hnd;
    int32_t m = _con_x245->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x70, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x246 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x246->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x246->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x73 = _fun_random_int32.clause;
        _x_x244 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x73, (_fun_unbox_x73, m, ev_10229, _ctx), _ctx); /*35*/
      }
    }
  }
  x_10226 = kk_int32_unbox(_x_x244, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x247 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_int64_fun248(_ctx), _ctx); /*2978*/
    return kk_int64_unbox(_x_x247, KK_OWNED, _ctx);
  }
  {
    kk_std_core_hnd__ev ev_0_10234 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
    int32_t x_0_10231;
    kk_box_t _x_x251;
    {
      struct kk_std_core_hnd_Ev* _con_x252 = kk_std_core_hnd__as_Ev(ev_0_10234, _ctx);
      kk_box_t _box_x78 = _con_x252->hnd;
      int32_t m_0 = _con_x252->marker;
      kk_std_num_random__random h_0 = kk_std_num_random__random_unbox(_box_x78, KK_BORROWED, _ctx);
      kk_std_num_random__random_dup(h_0, _ctx);
      {
        struct kk_std_num_random__Hnd_random* _con_x253 = kk_std_num_random__as_Hnd_random(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x253->_cfc;
        kk_std_core_hnd__clause0 _fun_random_int32_0 = _con_x253->_fun_random_int32;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause0_dup(_fun_random_int32_0, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x81 = _fun_random_int32_0.clause;
          _x_x251 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x81, (_fun_unbox_x81, m_0, ev_0_10234, _ctx), _ctx); /*35*/
        }
      }
    }
    x_0_10231 = kk_int32_unbox(_x_x251, KK_OWNED, _ctx); /*int32*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x254 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_int64_fun255(x_10226, _ctx), _ctx); /*2978*/
      return kk_int64_unbox(_x_x254, KK_OWNED, _ctx);
    }
    {
      return kk_int64_hi_lo(x_10226,x_0_10231);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_random__mlift_random_float64_10195_fun260__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random__mlift_random_float64_10195_fun260(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_random_float64_10195_fun260(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random__mlift_random_float64_10195_fun260, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random__mlift_random_float64_10195_fun260(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x261;
  int64_t _x_x262 = kk_int64_unbox(_b_x91, KK_OWNED, _ctx); /*int64*/
  _x_x261 = kk_std_num_float64_float64_from_bits(_x_x262, _ctx); /*float64*/
  return kk_double_box(_x_x261, _ctx);
}

double kk_std_num_random__mlift_random_float64_10195(int32_t _y_x10177, int32_t _y_x10178, kk_context_t* _ctx) { /* (int32, int32) -> random float64 */ 
  int64_t _x_x1_10185 = kk_int64_hi_lo(_y_x10177,_y_x10178); /*int64*/;
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/num/random/random>*/;
  int64_t x;
  int64_t _x_x257 = (KK_I64(12)); /*int64*/
  x = (int64_t)kk_shr64(_x_x1_10185,_x_x257); /*int64*/
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/num/random/random>*/;
  int64_t x_0 = (KK_I64(4607182418800017408)); /*int64*/;
  kk_unit_t keep_0 = kk_Unit;
  kk_evv_set(w_0,kk_context());
  int64_t mag = x | x_0; /*int64*/;
  double _x_x258;
  kk_box_t _x_x259 = kk_std_core_hnd__open_none1(kk_std_num_random__new_mlift_random_float64_10195_fun260(_ctx), kk_int64_box(mag, _ctx), _ctx); /*8580*/
  _x_x258 = kk_double_unbox(_x_x259, KK_OWNED, _ctx); /*float64*/
  return (_x_x258 - 0x1p0);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_random__mlift_random_float64_10196_fun267__t {
  struct kk_function_s _base;
  int32_t _y_x10177;
};
static kk_box_t kk_std_num_random__mlift_random_float64_10196_fun267(kk_function_t _fself, kk_box_t _b_x101, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_random_float64_10196_fun267(int32_t _y_x10177, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_random_float64_10196_fun267__t* _self = kk_function_alloc_as(struct kk_std_num_random__mlift_random_float64_10196_fun267__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random__mlift_random_float64_10196_fun267, kk_context());
  _self->_y_x10177 = _y_x10177;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random__mlift_random_float64_10196_fun267(kk_function_t _fself, kk_box_t _b_x101, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_random_float64_10196_fun267__t* _self = kk_function_as(struct kk_std_num_random__mlift_random_float64_10196_fun267__t*, _fself, _ctx);
  int32_t _y_x10177 = _self->_y_x10177; /* int32 */
  kk_drop_match(_self, {kk_skip_dup(_y_x10177, _ctx);}, {}, _ctx)
  int32_t _y_x10178_103 = kk_int32_unbox(_b_x101, KK_OWNED, _ctx); /*int32*/;
  double _x_x268 = kk_std_num_random__mlift_random_float64_10195(_y_x10177, _y_x10178_103, _ctx); /*float64*/
  return kk_double_box(_x_x268, _ctx);
}

double kk_std_num_random__mlift_random_float64_10196(int32_t _y_x10177, kk_context_t* _ctx) { /* (int32) -> random float64 */ 
  kk_std_core_hnd__ev ev_10245 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10243;
  kk_box_t _x_x263;
  {
    struct kk_std_core_hnd_Ev* _con_x264 = kk_std_core_hnd__as_Ev(ev_10245, _ctx);
    kk_box_t _box_x94 = _con_x264->hnd;
    int32_t m = _con_x264->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x94, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x265 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x265->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x265->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x97 = _fun_random_int32.clause;
        _x_x263 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x97, (_fun_unbox_x97, m, ev_10245, _ctx), _ctx); /*35*/
      }
    }
  }
  x_10243 = kk_int32_unbox(_x_x263, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x266 = kk_std_core_hnd_yield_extend(kk_std_num_random__new_mlift_random_float64_10196_fun267(_y_x10177, _ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x266, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_random__mlift_random_float64_10195(_y_x10177, x_10243, _ctx);
  }
}
 
// Return a random float64 in the range [0,1) using 52-bits of randomness


// lift anonymous function
struct kk_std_num_random_random_float64_fun273__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_float64_fun273(kk_function_t _fself, kk_box_t _b_x111, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_float64_fun273(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_float64_fun273, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_float64_fun273(kk_function_t _fself, kk_box_t _b_x111, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x274;
  int32_t _x_x275 = kk_int32_unbox(_b_x111, KK_OWNED, _ctx); /*int32*/
  _x_x274 = kk_std_num_random__mlift_random_float64_10196(_x_x275, _ctx); /*float64*/
  return kk_double_box(_x_x274, _ctx);
}


// lift anonymous function
struct kk_std_num_random_random_float64_fun280__t {
  struct kk_function_s _base;
  int32_t x_10247;
};
static kk_box_t kk_std_num_random_random_float64_fun280(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_float64_fun280(int32_t x_10247, kk_context_t* _ctx) {
  struct kk_std_num_random_random_float64_fun280__t* _self = kk_function_alloc_as(struct kk_std_num_random_random_float64_fun280__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random_random_float64_fun280, kk_context());
  _self->x_10247 = x_10247;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random_random_float64_fun280(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx) {
  struct kk_std_num_random_random_float64_fun280__t* _self = kk_function_as(struct kk_std_num_random_random_float64_fun280__t*, _fself, _ctx);
  int32_t x_10247 = _self->x_10247; /* int32 */
  kk_drop_match(_self, {kk_skip_dup(x_10247, _ctx);}, {}, _ctx)
  int32_t _y_x10178_127 = kk_int32_unbox(_b_x119, KK_OWNED, _ctx); /*int32*/;
  double _x_x281 = kk_std_num_random__mlift_random_float64_10195(x_10247, _y_x10178_127, _ctx); /*float64*/
  return kk_double_box(_x_x281, _ctx);
}


// lift anonymous function
struct kk_std_num_random_random_float64_fun285__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_float64_fun285(kk_function_t _fself, kk_box_t _b_x122, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_float64_fun285(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_float64_fun285, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_float64_fun285(kk_function_t _fself, kk_box_t _b_x122, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x286;
  int64_t _x_x287 = kk_int64_unbox(_b_x122, KK_OWNED, _ctx); /*int64*/
  _x_x286 = kk_std_num_float64_float64_from_bits(_x_x287, _ctx); /*float64*/
  return kk_double_box(_x_x286, _ctx);
}

double kk_std_num_random_random_float64(kk_context_t* _ctx) { /* () -> random float64 */ 
  kk_std_core_hnd__ev ev_10250 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10247;
  kk_box_t _x_x269;
  {
    struct kk_std_core_hnd_Ev* _con_x270 = kk_std_core_hnd__as_Ev(ev_10250, _ctx);
    kk_box_t _box_x104 = _con_x270->hnd;
    int32_t m = _con_x270->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x104, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x271 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x271->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x271->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x107 = _fun_random_int32.clause;
        _x_x269 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x107, (_fun_unbox_x107, m, ev_10250, _ctx), _ctx); /*35*/
      }
    }
  }
  x_10247 = kk_int32_unbox(_x_x269, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x272 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_float64_fun273(_ctx), _ctx); /*2978*/
    return kk_double_unbox(_x_x272, KK_OWNED, _ctx);
  }
  {
    kk_std_core_hnd__ev ev_0_10255 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
    int32_t x_0_10252;
    kk_box_t _x_x276;
    {
      struct kk_std_core_hnd_Ev* _con_x277 = kk_std_core_hnd__as_Ev(ev_0_10255, _ctx);
      kk_box_t _box_x112 = _con_x277->hnd;
      int32_t m_0 = _con_x277->marker;
      kk_std_num_random__random h_0 = kk_std_num_random__random_unbox(_box_x112, KK_BORROWED, _ctx);
      kk_std_num_random__random_dup(h_0, _ctx);
      {
        struct kk_std_num_random__Hnd_random* _con_x278 = kk_std_num_random__as_Hnd_random(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x278->_cfc;
        kk_std_core_hnd__clause0 _fun_random_int32_0 = _con_x278->_fun_random_int32;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause0_dup(_fun_random_int32_0, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x115 = _fun_random_int32_0.clause;
          _x_x276 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x115, (_fun_unbox_x115, m_0, ev_0_10255, _ctx), _ctx); /*35*/
        }
      }
    }
    x_0_10252 = kk_int32_unbox(_x_x276, KK_OWNED, _ctx); /*int32*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x279 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_float64_fun280(x_10247, _ctx), _ctx); /*2978*/
      return kk_double_unbox(_x_x279, KK_OWNED, _ctx);
    }
    {
      int64_t _x_x1_10185 = kk_int64_hi_lo(x_10247,x_0_10252); /*int64*/;
      kk_evv_t w = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/num/random/random>*/;
      int64_t x_1;
      int64_t _x_x282 = (KK_I64(12)); /*int64*/
      x_1 = (int64_t)kk_shr64(_x_x1_10185,_x_x282); /*int64*/
      kk_unit_t keep = kk_Unit;
      kk_evv_set(w,kk_context());
      kk_evv_t w_0 = kk_evv_swap_create0(kk_context()); /*hnd/evv<std/num/random/random>*/;
      int64_t x_2 = (KK_I64(4607182418800017408)); /*int64*/;
      kk_unit_t keep_0 = kk_Unit;
      kk_evv_set(w_0,kk_context());
      int64_t mag = x_1 | x_2; /*int64*/;
      double _x_x283;
      kk_box_t _x_x284 = kk_std_core_hnd__open_none1(kk_std_num_random_new_random_float64_fun285(_ctx), kk_int64_box(mag, _ctx), _ctx); /*8580*/
      _x_x283 = kk_double_unbox(_x_x284, KK_OWNED, _ctx); /*float64*/
      return (_x_x283 - 0x1p0);
    }
  }
}
 
// Returns one of its arguments `x`  or `y`  based on a non-deterministic choice.

kk_box_t kk_std_num_random_choose(kk_box_t x, kk_box_t y, kk_context_t* _ctx) { /* forall<a> (x : a, y : a) -> ndet a */ 
  bool _match_x131;
  int32_t _x_x289 = kk_std_num_random_srandom_int32(_ctx); /*int32*/
  _match_x131 = (_x_x289 >= ((KK_I32(0)))); /*bool*/
  if (_match_x131) {
    kk_box_drop(y, _ctx);
    return x;
  }
  {
    kk_box_drop(x, _ctx);
    return y;
  }
}
 
// Return a strong random `:float64` in the range [0,1) using 52-bits of randomness

double kk_std_num_random_srandom_float64(kk_context_t* _ctx) { /* () -> ndet float64 */ 
  return kk_srandom_double(kk_context());
}
 
// Are the strong random numbers generated from a strong random source? (like /dev/urandom)

bool kk_std_num_random_srandom_is_strong(kk_context_t* _ctx) { /* () -> ndet bool */ 
  return kk_srandom_is_strong(kk_context());
}
 
// Return a strong random `:int32` uniformly distributed in the range [lo,hi)

int32_t kk_std_num_random_srandom_int32_range(int32_t lo, int32_t hi, kk_context_t* _ctx) { /* (lo : int32, hi : int32) -> ndet int32 */ 
  return kk_srandom_range_int32(lo,hi,kk_context());
}
 
// Generate a strong random float64 uniformly distributed in the range [lo, hi)

double kk_std_num_random_srandom_float64_range(double lo, double hi, kk_context_t* _ctx) { /* (lo : float64, hi : float64) -> ndet float64 */ 
  double low;
  bool _match_x130 = (lo <= hi); /*bool*/;
  if (_match_x130) {
    low = lo; /*float64*/
  }
  else {
    low = hi; /*float64*/
  }
  double high;
  bool _match_x129 = (lo <= hi); /*bool*/;
  if (_match_x129) {
    high = hi; /*float64*/
  }
  else {
    high = lo; /*float64*/
  }
  double x;
  double _x_x291;
  double _x_x292 = (high - low); /*float64*/
  double _x_x293 = kk_std_num_random_srandom_float64(_ctx); /*float64*/
  _x_x291 = (_x_x292 * _x_x293); /*float64*/
  x = (_x_x291 + low); /*float64*/
  bool _match_x128 = (x >= high); /*bool*/;
  if (_match_x128) {
    return low;
  }
  {
    return x;
  }
}

// initialization
void kk_std_num_random__init(kk_context_t* _ctx){
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
  kk_std_num_int32__init(_ctx);
  kk_std_num_int64__init(_ctx);
  kk_std_num_float64__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x168;
    kk_define_string_literal(, _s_x169, 13, "random@random", _ctx)
    _x_x168 = kk_string_dup(_s_x169, _ctx); /*string*/
    kk_std_num_random__tag_random = kk_std_core_hnd__new_Htag(_x_x168, _ctx); /*hnd/htag<std/num/random/random>*/
  }
}

// termination
void kk_std_num_random__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_std_num_random__tag_random, _ctx);
  kk_std_num_float64__done(_ctx);
  kk_std_num_int64__done(_ctx);
  kk_std_num_int32__done(_ctx);
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
