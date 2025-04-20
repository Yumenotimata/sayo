// Koka generated module: std/num/random, koka version: 3.1.2, platform: 64-bit
#include "std_num_random.h"

kk_std_num_random__sfc kk_std_num_random_sfc_fs__copy(kk_std_num_random__sfc _this, kk_std_core_types__optional x, kk_std_core_types__optional y, kk_std_core_types__optional z, kk_std_core_types__optional cnt, kk_context_t* _ctx) { /* (sfc, x : ? int32, y : ? int32, z : ? int32, cnt : ? int32) -> sfc */ 
  int32_t _x_x177;
  if (kk_std_core_types__is_Optional(x, _ctx)) {
    kk_box_t _box_x0 = x._cons._Optional.value;
    int32_t _uniq_x_176 = kk_int32_unbox(_box_x0, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(x, _ctx);
    _x_x177 = _uniq_x_176; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(x, _ctx);
    {
      int32_t _x = _this.x;
      _x_x177 = _x; /*int32*/
    }
  }
  int32_t _x_x178;
  if (kk_std_core_types__is_Optional(y, _ctx)) {
    kk_box_t _box_x1 = y._cons._Optional.value;
    int32_t _uniq_y_183 = kk_int32_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(y, _ctx);
    _x_x178 = _uniq_y_183; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(y, _ctx);
    {
      int32_t _x_0 = _this.y;
      _x_x178 = _x_0; /*int32*/
    }
  }
  int32_t _x_x179;
  if (kk_std_core_types__is_Optional(z, _ctx)) {
    kk_box_t _box_x2 = z._cons._Optional.value;
    int32_t _uniq_z_190 = kk_int32_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(z, _ctx);
    _x_x179 = _uniq_z_190; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(z, _ctx);
    {
      int32_t _x_1 = _this.z;
      _x_x179 = _x_1; /*int32*/
    }
  }
  int32_t _x_x180;
  if (kk_std_core_types__is_Optional(cnt, _ctx)) {
    kk_box_t _box_x3 = cnt._cons._Optional.value;
    int32_t _uniq_cnt_197 = kk_int32_unbox(_box_x3, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(cnt, _ctx);
    _x_x180 = _uniq_cnt_197; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(cnt, _ctx);
    {
      int32_t _x_2 = _this.cnt;
      _x_x180 = _x_2; /*int32*/
    }
  }
  return kk_std_num_random__new_Sfc(_x_x177, _x_x178, _x_x179, _x_x180, _ctx);
}

kk_std_num_random__sfc_result kk_std_num_random_sfc_result_fs__copy(kk_std_num_random__sfc_result _this, kk_std_core_types__optional rnd, kk_std_core_types__optional rstate, kk_context_t* _ctx) { /* (sfc-result, rnd : ? int32, rstate : ? sfc) -> sfc-result */ 
  int32_t _x_x181;
  if (kk_std_core_types__is_Optional(rnd, _ctx)) {
    kk_box_t _box_x4 = rnd._cons._Optional.value;
    int32_t _uniq_rnd_230 = kk_int32_unbox(_box_x4, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(rnd, _ctx);
    _x_x181 = _uniq_rnd_230; /*int32*/
  }
  else {
    kk_std_core_types__optional_drop(rnd, _ctx);
    {
      kk_std_num_random__sfc _pat_0_0 = _this.rstate;
      int32_t _x = _this.rnd;
      _x_x181 = _x; /*int32*/
    }
  }
  kk_std_num_random__sfc _x_x182;
  if (kk_std_core_types__is_Optional(rstate, _ctx)) {
    kk_box_t _box_x5 = rstate._cons._Optional.value;
    kk_std_num_random__sfc _uniq_rstate_237 = kk_std_num_random__sfc_unbox(_box_x5, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(rstate, _ctx);
    _x_x182 = _uniq_rstate_237; /*std/num/random/sfc*/
  }
  else {
    kk_std_core_types__optional_drop(rstate, _ctx);
    {
      kk_std_num_random__sfc _x_0 = _this.rstate;
      _x_x182 = _x_0; /*std/num/random/sfc*/
    }
  }
  return kk_std_num_random__new_Sfc_result(_x_x181, _x_x182, _ctx);
}
 
// runtime tag for the effect `:random`

kk_std_core_hnd__htag kk_std_num_random__tag_random;
 
// handler for the effect `:random`

kk_box_t kk_std_num_random__handle_random(kk_std_num_random__random hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : random<e,b>, ret : (res : a) -> e b, action : () -> <random|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x185 = kk_std_core_hnd__htag_dup(kk_std_num_random__tag_random, _ctx); /*hnd/htag<std/num/random/random>*/
  return kk_std_core_hnd__hhandle(_x_x185, kk_std_num_random__random_box(hnd, _ctx), ret, action, _ctx);
}
 
// Return a strong random `:int32`

int32_t kk_std_num_random_srandom_int32(kk_context_t* _ctx) { /* () -> ndet int32 */ 
  return (int32_t)kk_srandom_uint32(kk_context());
}
extern int32_t kk_std_num_random_strong_random_fun190(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_num_random_srandom_int32(_ctx);
}
extern kk_box_t kk_std_num_random_strong_random_fun193(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_num_random_strong_random_fun193__t* _self = kk_function_as(struct kk_std_num_random_strong_random_fun193__t*, _fself, _ctx);
  kk_function_t _b_x20_21 = _self->_b_x20_21; /* () -> ndet int32 */
  kk_drop_match(_self, {kk_function_dup(_b_x20_21, _ctx);}, {}, _ctx)
  int32_t _x_x194 = kk_function_call(int32_t, (kk_function_t, kk_context_t*), _b_x20_21, (_b_x20_21, _ctx), _ctx); /*int32*/
  return kk_int32_box(_x_x194, _ctx);
}
extern kk_box_t kk_std_num_random_strong_random_fun195(kk_function_t _fself, kk_box_t _x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x;
}
extern int32_t kk_std_num_random__default_random_fun196(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_num_random_srandom_int32(_ctx);
}
extern kk_box_t kk_std_num_random__default_random_fun199(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_num_random__default_random_fun199__t* _self = kk_function_as(struct kk_std_num_random__default_random_fun199__t*, _fself, _ctx);
  kk_function_t _b_x22_23 = _self->_b_x22_23; /* () -> ndet int32 */
  kk_drop_match(_self, {kk_function_dup(_b_x22_23, _ctx);}, {}, _ctx)
  int32_t _x_x200 = kk_function_call(int32_t, (kk_function_t, kk_context_t*), _b_x22_23, (_b_x22_23, _ctx), _ctx); /*int32*/
  return kk_int32_box(_x_x200, _ctx);
}
extern kk_box_t kk_std_num_random__default_random_fun201(kk_function_t _fself, kk_box_t _x, kk_context_t* _ctx) {
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
    int32_t _x_x202 = (int32_t)((uint32_t)x + (uint32_t)y); /*int32*/
    res = (int32_t)((uint32_t)_x_x202 + (uint32_t)cnt); /*int32*/
    int32_t y_0_10007 = (int32_t)kk_shr32(y,((KK_I32(9)))); /*int32*/;
    kk_std_num_random__sfc _x_x203;
    int32_t _x_x204 = (y ^ y_0_10007); /*int32*/
    int32_t _x_x205;
    int32_t _x_x206 = kk_shl32(z,((KK_I32(3)))); /*int32*/
    _x_x205 = (int32_t)((uint32_t)z + (uint32_t)_x_x206); /*int32*/
    int32_t _x_x207;
    int32_t _x_x208 = (int32_t)kk_bits_rotl32(z,((KK_I32(21)))); /*int32*/
    _x_x207 = (int32_t)((uint32_t)_x_x208 + (uint32_t)res); /*int32*/
    int32_t _x_x209 = (int32_t)((uint32_t)cnt + (uint32_t)((KK_I32(1)))); /*int32*/
    _x_x203 = kk_std_num_random__new_Sfc(_x_x204, _x_x205, _x_x207, _x_x209, _ctx); /*std/num/random/sfc*/
    return kk_std_num_random__new_Sfc_result(res, _x_x203, _ctx);
  }
}


// lift anonymous function
struct kk_std_num_random_sfc_init32_fun211__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_sfc_init32_fun211(kk_function_t _fself, int32_t _b_x27, kk_box_t _b_x28, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_sfc_init32_fun211(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_sfc_init32_fun211, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_sfc_init32_fun211(kk_function_t _fself, int32_t _b_x27, kk_box_t _b_x28, kk_context_t* _ctx) {
  kk_unused(_fself);
  int32_t ___wildcard_x57__34_32 = _b_x27; /*int32*/;
  kk_std_num_random__sfc s_33 = kk_std_num_random__sfc_unbox(_b_x28, KK_OWNED, _ctx); /*std/num/random/sfc*/;
  kk_std_num_random__sfc_result _this_10014 = kk_std_num_random_sfc_step(s_33, _ctx); /*std/num/random/sfc-result*/;
  kk_std_num_random__sfc _x_x212;
  {
    kk_std_num_random__sfc _x = _this_10014.rstate;
    _x_x212 = _x; /*std/num/random/sfc*/
  }
  return kk_std_num_random__sfc_box(_x_x212, _ctx);
}

kk_std_num_random__sfc kk_std_num_random_sfc_init32(int32_t seed1, int32_t seed2, kk_context_t* _ctx) { /* (seed1 : int32, seed2 : int32) -> sfc */ 
  kk_std_num_random__sfc sfc0 = kk_std_num_random__new_Sfc((KK_I32(0)), seed1, seed2, (KK_I32(1)), _ctx); /*std/num/random/sfc*/;
  int32_t _b_x24_29 = (KK_I32(12)); /*int32*/;
  kk_box_t _x_x210;
  kk_function_t _brw_x167 = kk_std_num_random_new_sfc_init32_fun211(_ctx); /*(int32, 1887) -> 1888 1887*/;
  kk_box_t _brw_x168 = kk_std_num_int32_fold_int32(_b_x24_29, kk_std_num_random__sfc_box(sfc0, _ctx), _brw_x167, _ctx); /*1887*/;
  kk_function_drop(_brw_x167, _ctx);
  _x_x210 = _brw_x168; /*1887*/
  return kk_std_num_random__sfc_unbox(_x_x210, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_num_random_sfc_init_fun216__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_sfc_init_fun216(kk_function_t _fself, int32_t _b_x37, kk_box_t _b_x38, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_sfc_init_fun216(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_sfc_init_fun216, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_sfc_init_fun216(kk_function_t _fself, int32_t _b_x37, kk_box_t _b_x38, kk_context_t* _ctx) {
  kk_unused(_fself);
  int32_t ___wildcard_x57__34_42 = _b_x37; /*int32*/;
  kk_std_num_random__sfc s_43 = kk_std_num_random__sfc_unbox(_b_x38, KK_OWNED, _ctx); /*std/num/random/sfc*/;
  kk_std_num_random__sfc_result _this_10017 = kk_std_num_random_sfc_step(s_43, _ctx); /*std/num/random/sfc-result*/;
  kk_std_num_random__sfc _x_x217;
  {
    kk_std_num_random__sfc _x = _this_10017.rstate;
    _x_x217 = _x; /*std/num/random/sfc*/
  }
  return kk_std_num_random__sfc_box(_x_x217, _ctx);
}

kk_std_num_random__sfc kk_std_num_random_sfc_init(kk_integer_t seed, kk_context_t* _ctx) { /* (seed : int) -> sfc */ 
  int32_t seed1_10015;
  kk_integer_t _x_x213 = kk_integer_dup(seed, _ctx); /*int*/
  seed1_10015 = kk_integer_clamp32(_x_x213,kk_context()); /*int32*/
  int32_t seed2_10016;
  kk_integer_t _x_x214 = kk_integer_div(seed,(kk_integer_from_str("4294967296", _ctx)),kk_context()); /*int*/
  seed2_10016 = kk_integer_clamp32(_x_x214,kk_context()); /*int32*/
  kk_std_num_random__sfc sfc0 = kk_std_num_random__new_Sfc((KK_I32(0)), seed1_10015, seed2_10016, (KK_I32(1)), _ctx); /*std/num/random/sfc*/;
  int32_t _b_x34_39 = (KK_I32(12)); /*int32*/;
  kk_box_t _x_x215;
  kk_function_t _brw_x165 = kk_std_num_random_new_sfc_init_fun216(_ctx); /*(int32, 1887) -> 1888 1887*/;
  kk_box_t _brw_x166 = kk_std_num_int32_fold_int32(_b_x34_39, kk_std_num_random__sfc_box(sfc0, _ctx), _brw_x165, _ctx); /*1887*/;
  kk_function_drop(_brw_x165, _ctx);
  _x_x215 = _brw_x166; /*1887*/
  return kk_std_num_random__sfc_unbox(_x_x215, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_random__mlift_pseudo_random_10044_fun221__t {
  struct kk_function_s _base;
  kk_std_num_random__sfc_result sfc;
};
static kk_box_t kk_std_num_random__mlift_pseudo_random_10044_fun221(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_pseudo_random_10044_fun221(kk_std_num_random__sfc_result sfc, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_pseudo_random_10044_fun221__t* _self = kk_function_alloc_as(struct kk_std_num_random__mlift_pseudo_random_10044_fun221__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random__mlift_pseudo_random_10044_fun221, kk_context());
  _self->sfc = sfc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random__mlift_pseudo_random_10044_fun221(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_pseudo_random_10044_fun221__t* _self = kk_function_as(struct kk_std_num_random__mlift_pseudo_random_10044_fun221__t*, _fself, _ctx);
  kk_std_num_random__sfc_result sfc = _self->sfc; /* std/num/random/sfc-result */
  kk_drop_match(_self, {kk_std_num_random__sfc_result_dup(sfc, _ctx);}, {}, _ctx)
  kk_unit_t wild___51 = kk_Unit;
  kk_unit_unbox(_b_x49);
  int32_t _x_x222;
  {
    kk_std_num_random__sfc _pat_0_0_0 = sfc.rstate;
    int32_t _x_0 = sfc.rnd;
    _x_x222 = _x_0; /*int32*/
  }
  return kk_int32_box(_x_x222, _ctx);
}

int32_t kk_std_num_random__mlift_pseudo_random_10044(kk_ref_t s, kk_std_num_random__sfc _y_x10023, kk_context_t* _ctx) { /* forall<h,e> (s : local-var<h,sfc>, sfc) -> <local<h>|e> int32 */ 
  kk_std_num_random__sfc_result sfc = kk_std_num_random_sfc_step(_y_x10023, _ctx); /*std/num/random/sfc-result*/;
  kk_unit_t x_10054 = kk_Unit;
  kk_unit_t _brw_x164 = kk_Unit;
  kk_box_t _x_x218;
  kk_std_num_random__sfc _x_x219;
  {
    kk_std_num_random__sfc _x = sfc.rstate;
    _x_x219 = _x; /*std/num/random/sfc*/
  }
  _x_x218 = kk_std_num_random__sfc_box(_x_x219, _ctx); /*1000*/
  kk_ref_set_borrow(s,_x_x218,kk_context());
  kk_ref_drop(s, _ctx);
  _brw_x164;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x220 = kk_std_core_hnd_yield_extend(kk_std_num_random__new_mlift_pseudo_random_10044_fun221(sfc, _ctx), _ctx); /*3003*/
    return kk_int32_unbox(_x_x220, KK_OWNED, _ctx);
  }
  {
    kk_std_num_random__sfc _pat_0_0_0_0 = sfc.rstate;
    int32_t _x_0_0 = sfc.rnd;
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
struct kk_std_num_random_pseudo_random_fun226__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_num_random_pseudo_random_fun226(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_pseudo_random_fun226(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_num_random_pseudo_random_fun226__t* _self = kk_function_alloc_as(struct kk_std_num_random_pseudo_random_fun226__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random_pseudo_random_fun226, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_num_random_pseudo_random_fun231__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_num_random_pseudo_random_fun231(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_pseudo_random_fun231(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_num_random_pseudo_random_fun231__t* _self = kk_function_alloc_as(struct kk_std_num_random_pseudo_random_fun231__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random_pseudo_random_fun231, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random_pseudo_random_fun231(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_std_num_random_pseudo_random_fun231__t* _self = kk_function_as(struct kk_std_num_random_pseudo_random_fun231__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<798,std/num/random/sfc> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t _x_x232;
  kk_std_num_random__sfc _x_x233 = kk_std_num_random__sfc_unbox(_b_x57, KK_OWNED, _ctx); /*std/num/random/sfc*/
  _x_x232 = kk_std_num_random__mlift_pseudo_random_10044(loc, _x_x233, _ctx); /*int32*/
  return kk_int32_box(_x_x232, _ctx);
}
static kk_box_t kk_std_num_random_pseudo_random_fun226(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_num_random_pseudo_random_fun226__t* _self = kk_function_as(struct kk_std_num_random_pseudo_random_fun226__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<798,std/num/random/sfc> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_num_random__sfc x_10060;
  kk_box_t _x_x227;
  kk_ref_t _x_x228 = kk_ref_dup(loc, _ctx); /*local-var<798,std/num/random/sfc>*/
  _x_x227 = kk_ref_get(_x_x228,kk_context()); /*1000*/
  x_10060 = kk_std_num_random__sfc_unbox(_x_x227, KK_OWNED, _ctx); /*std/num/random/sfc*/
  int32_t _x_x229;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x230 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_pseudo_random_fun231(loc, _ctx), _ctx); /*3003*/
    _x_x229 = kk_int32_unbox(_x_x230, KK_OWNED, _ctx); /*int32*/
  }
  else {
    _x_x229 = kk_std_num_random__mlift_pseudo_random_10044(loc, x_10060, _ctx); /*int32*/
  }
  return kk_int32_box(_x_x229, _ctx);
}


// lift anonymous function
struct kk_std_num_random_pseudo_random_fun234__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_pseudo_random_fun234(kk_function_t _fself, kk_box_t _x_1, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_pseudo_random_fun234(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_pseudo_random_fun234, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_pseudo_random_fun234(kk_function_t _fself, kk_box_t _x_1, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x_1;
}

kk_box_t kk_std_num_random_pseudo_random(kk_integer_t seed, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e> (seed : int, action : () -> <random|e> a) -> e a */ 
  kk_std_num_random__sfc init_10058 = kk_std_num_random_sfc_init(seed, _ctx); /*std/num/random/sfc*/;
  kk_ref_t loc = kk_ref_alloc((kk_std_num_random__sfc_box(init_10058, _ctx)),kk_context()); /*local-var<798,std/num/random/sfc>*/;
  kk_box_t res;
  kk_std_num_random__random _x_x223;
  kk_std_core_hnd__clause0 _x_x224;
  kk_function_t _x_x225;
  kk_ref_dup(loc, _ctx);
  _x_x225 = kk_std_num_random_new_pseudo_random_fun226(loc, _ctx); /*() -> 1000 1003*/
  _x_x224 = kk_std_core_hnd_clause_tail0(_x_x225, _ctx); /*hnd/clause0<1003,1002,1000,1001>*/
  _x_x223 = kk_std_num_random__new_Hnd_random(kk_reuse_null, 0, kk_integer_from_small(1), _x_x224, _ctx); /*std/num/random/random<5,6>*/
  res = kk_std_num_random__handle_random(_x_x223, kk_std_num_random_new_pseudo_random_fun234(_ctx), action, _ctx); /*804*/
  return kk_std_core_hnd_prompt_local_var(loc, res, _ctx);
}
 
// Return a random boolean


// lift anonymous function
struct kk_std_num_random_random_bool_fun239__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_bool_fun239(kk_function_t _fself, kk_box_t _b_x69, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_bool_fun239(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_bool_fun239, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_bool_fun239(kk_function_t _fself, kk_box_t _b_x69, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x240;
  int32_t _x_x241 = kk_int32_unbox(_b_x69, KK_OWNED, _ctx); /*int32*/
  _x_x240 = kk_std_num_random__mlift_random_bool_10045(_x_x241, _ctx); /*bool*/
  return kk_bool_box(_x_x240);
}

bool kk_std_num_random_random_bool(kk_context_t* _ctx) { /* () -> random bool */ 
  kk_std_core_hnd__ev ev_10066 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10063;
  kk_box_t _x_x235;
  {
    struct kk_std_core_hnd_Ev* _con_x236 = kk_std_core_hnd__as_Ev(ev_10066, _ctx);
    kk_box_t _box_x62 = _con_x236->hnd;
    int32_t m = _con_x236->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x62, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x237 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x237->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x237->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x65 = _fun_random_int32.clause;
        _x_x235 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x65, (_fun_unbox_x65, m, ev_10066, _ctx), _ctx); /*1005*/
      }
    }
  }
  x_10063 = kk_int32_unbox(_x_x235, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x238 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_bool_fun239(_ctx), _ctx); /*3003*/
    return kk_bool_unbox(_x_x238);
  }
  {
    return (x_10063 >= ((KK_I32(0))));
  }
}
 
// Return a random integer in the range [-2^^31^^, 2^^31^^).


// lift anonymous function
struct kk_std_num_random_random_int_fun246__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_int_fun246(kk_function_t _fself, kk_box_t _b_x78, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_int_fun246(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_int_fun246, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_int_fun246(kk_function_t _fself, kk_box_t _b_x78, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x247;
  int32_t _x_x248 = kk_int32_unbox(_b_x78, KK_OWNED, _ctx); /*int32*/
  _x_x247 = kk_std_num_random__mlift_random_int_10046(_x_x248, _ctx); /*int*/
  return kk_integer_box(_x_x247, _ctx);
}

kk_integer_t kk_std_num_random_random_int(kk_context_t* _ctx) { /* () -> random int */ 
  kk_std_core_hnd__ev ev_10071 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10068;
  kk_box_t _x_x242;
  {
    struct kk_std_core_hnd_Ev* _con_x243 = kk_std_core_hnd__as_Ev(ev_10071, _ctx);
    kk_box_t _box_x71 = _con_x243->hnd;
    int32_t m = _con_x243->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x71, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x244 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x244->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x244->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x74 = _fun_random_int32.clause;
        _x_x242 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x74, (_fun_unbox_x74, m, ev_10071, _ctx), _ctx); /*1005*/
      }
    }
  }
  x_10068 = kk_int32_unbox(_x_x242, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x245 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_int_fun246(_ctx), _ctx); /*3003*/
    return kk_integer_unbox(_x_x245, _ctx);
  }
  {
    return kk_integer_from_int(x_10068,kk_context());
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_random__mlift_random_int64_10048_fun253__t {
  struct kk_function_s _base;
  int32_t _y_x10031;
};
static kk_box_t kk_std_num_random__mlift_random_int64_10048_fun253(kk_function_t _fself, kk_box_t _b_x87, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_random_int64_10048_fun253(int32_t _y_x10031, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_random_int64_10048_fun253__t* _self = kk_function_alloc_as(struct kk_std_num_random__mlift_random_int64_10048_fun253__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random__mlift_random_int64_10048_fun253, kk_context());
  _self->_y_x10031 = _y_x10031;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random__mlift_random_int64_10048_fun253(kk_function_t _fself, kk_box_t _b_x87, kk_context_t* _ctx) {
  struct kk_std_num_random__mlift_random_int64_10048_fun253__t* _self = kk_function_as(struct kk_std_num_random__mlift_random_int64_10048_fun253__t*, _fself, _ctx);
  int32_t _y_x10031 = _self->_y_x10031; /* int32 */
  kk_drop_match(_self, {kk_skip_dup(_y_x10031, _ctx);}, {}, _ctx)
  int32_t _y_x10032_89 = kk_int32_unbox(_b_x87, KK_OWNED, _ctx); /*int32*/;
  int64_t _x_x254 = kk_int64_hi_lo(_y_x10031,_y_x10032_89); /*int64*/
  return kk_int64_box(_x_x254, _ctx);
}

int64_t kk_std_num_random__mlift_random_int64_10048(int32_t _y_x10031, kk_context_t* _ctx) { /* (int32) -> random int64 */ 
  kk_std_core_hnd__ev ev_10075 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10073;
  kk_box_t _x_x249;
  {
    struct kk_std_core_hnd_Ev* _con_x250 = kk_std_core_hnd__as_Ev(ev_10075, _ctx);
    kk_box_t _box_x80 = _con_x250->hnd;
    int32_t m = _con_x250->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x80, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x251 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x251->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x251->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x83 = _fun_random_int32.clause;
        _x_x249 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x83, (_fun_unbox_x83, m, ev_10075, _ctx), _ctx); /*1005*/
      }
    }
  }
  x_10073 = kk_int32_unbox(_x_x249, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x252 = kk_std_core_hnd_yield_extend(kk_std_num_random__new_mlift_random_int64_10048_fun253(_y_x10031, _ctx), _ctx); /*3003*/
    return kk_int64_unbox(_x_x252, KK_OWNED, _ctx);
  }
  {
    return kk_int64_hi_lo(_y_x10031,x_10073);
  }
}


// lift anonymous function
struct kk_std_num_random_random_int64_fun259__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_int64_fun259(kk_function_t _fself, kk_box_t _b_x97, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_int64_fun259(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_int64_fun259, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_int64_fun259(kk_function_t _fself, kk_box_t _b_x97, kk_context_t* _ctx) {
  kk_unused(_fself);
  int64_t _x_x260;
  int32_t _x_x261 = kk_int32_unbox(_b_x97, KK_OWNED, _ctx); /*int32*/
  _x_x260 = kk_std_num_random__mlift_random_int64_10048(_x_x261, _ctx); /*int64*/
  return kk_int64_box(_x_x260, _ctx);
}


// lift anonymous function
struct kk_std_num_random_random_int64_fun266__t {
  struct kk_function_s _base;
  int32_t x_10079;
};
static kk_box_t kk_std_num_random_random_int64_fun266(kk_function_t _fself, kk_box_t _b_x105, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_int64_fun266(int32_t x_10079, kk_context_t* _ctx) {
  struct kk_std_num_random_random_int64_fun266__t* _self = kk_function_alloc_as(struct kk_std_num_random_random_int64_fun266__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_random_random_int64_fun266, kk_context());
  _self->x_10079 = x_10079;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_random_random_int64_fun266(kk_function_t _fself, kk_box_t _b_x105, kk_context_t* _ctx) {
  struct kk_std_num_random_random_int64_fun266__t* _self = kk_function_as(struct kk_std_num_random_random_int64_fun266__t*, _fself, _ctx);
  int32_t x_10079 = _self->x_10079; /* int32 */
  kk_drop_match(_self, {kk_skip_dup(x_10079, _ctx);}, {}, _ctx)
  int32_t _y_x10032_108 = kk_int32_unbox(_b_x105, KK_OWNED, _ctx); /*int32*/;
  int64_t _x_x267 = kk_int64_hi_lo(x_10079,_y_x10032_108); /*int64*/
  return kk_int64_box(_x_x267, _ctx);
}

int64_t kk_std_num_random_random_int64(kk_context_t* _ctx) { /* () -> random int64 */ 
  kk_std_core_hnd__ev ev_10082 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
  int32_t x_10079;
  kk_box_t _x_x255;
  {
    struct kk_std_core_hnd_Ev* _con_x256 = kk_std_core_hnd__as_Ev(ev_10082, _ctx);
    kk_box_t _box_x90 = _con_x256->hnd;
    int32_t m = _con_x256->marker;
    kk_std_num_random__random h = kk_std_num_random__random_unbox(_box_x90, KK_BORROWED, _ctx);
    kk_std_num_random__random_dup(h, _ctx);
    {
      struct kk_std_num_random__Hnd_random* _con_x257 = kk_std_num_random__as_Hnd_random(h, _ctx);
      kk_integer_t _pat_0 = _con_x257->_cfc;
      kk_std_core_hnd__clause0 _fun_random_int32 = _con_x257->_fun_random_int32;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_random_int32, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x93 = _fun_random_int32.clause;
        _x_x255 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x93, (_fun_unbox_x93, m, ev_10082, _ctx), _ctx); /*1005*/
      }
    }
  }
  x_10079 = kk_int32_unbox(_x_x255, KK_OWNED, _ctx); /*int32*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x258 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_int64_fun259(_ctx), _ctx); /*3003*/
    return kk_int64_unbox(_x_x258, KK_OWNED, _ctx);
  }
  {
    kk_std_core_hnd__ev ev_0_10087 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/num/random/random>*/;
    int32_t x_0_10084;
    kk_box_t _x_x262;
    {
      struct kk_std_core_hnd_Ev* _con_x263 = kk_std_core_hnd__as_Ev(ev_0_10087, _ctx);
      kk_box_t _box_x98 = _con_x263->hnd;
      int32_t m_0 = _con_x263->marker;
      kk_std_num_random__random h_0 = kk_std_num_random__random_unbox(_box_x98, KK_BORROWED, _ctx);
      kk_std_num_random__random_dup(h_0, _ctx);
      {
        struct kk_std_num_random__Hnd_random* _con_x264 = kk_std_num_random__as_Hnd_random(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x264->_cfc;
        kk_std_core_hnd__clause0 _fun_random_int32_0 = _con_x264->_fun_random_int32;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause0_dup(_fun_random_int32_0, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x101 = _fun_random_int32_0.clause;
          _x_x262 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x101, (_fun_unbox_x101, m_0, ev_0_10087, _ctx), _ctx); /*1005*/
        }
      }
    }
    x_0_10084 = kk_int32_unbox(_x_x262, KK_OWNED, _ctx); /*int32*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x265 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_int64_fun266(x_10079, _ctx), _ctx); /*3003*/
      return kk_int64_unbox(_x_x265, KK_OWNED, _ctx);
    }
    {
      return kk_int64_hi_lo(x_10079,x_0_10084);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_random__mlift_random_float64_10049_fun270__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random__mlift_random_float64_10049_fun270(kk_function_t _fself, kk_box_t _b_x112, kk_box_t _b_x113, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_random_float64_10049_fun270(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random__mlift_random_float64_10049_fun270, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random__mlift_random_float64_10049_fun270(kk_function_t _fself, kk_box_t _b_x112, kk_box_t _b_x113, kk_context_t* _ctx) {
  kk_unused(_fself);
  int64_t _x_x271;
  int64_t _x_x272 = kk_int64_unbox(_b_x112, KK_OWNED, _ctx); /*int64*/
  int64_t _x_x273;
  kk_integer_t _x_x274 = kk_integer_unbox(_b_x113, _ctx); /*int*/
  _x_x273 = kk_std_num_int64_int64(_x_x274, _ctx); /*int64*/
  _x_x271 = (int64_t)kk_shr64(_x_x272,_x_x273); /*int64*/
  return kk_int64_box(_x_x271, _ctx);
}


// lift anonymous function
struct kk_std_num_random__mlift_random_float64_10049_fun277__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random__mlift_random_float64_10049_fun277(kk_function_t _fself, kk_box_t _b_x116, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_random_float64_10049_fun277(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random__mlift_random_float64_10049_fun277, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random__mlift_random_float64_10049_fun277(kk_function_t _fself, kk_box_t _b_x116, kk_context_t* _ctx) {
  kk_unused(_fself);
  int64_t _x_x278;
  kk_integer_t _x_x279 = kk_integer_unbox(_b_x116, _ctx); /*int*/
  _x_x278 = kk_std_num_int64_int64(_x_x279, _ctx); /*int64*/
  return kk_int64_box(_x_x278, _ctx);
}


// lift anonymous function
struct kk_std_num_random__mlift_random_float64_10049_fun282__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random__mlift_random_float64_10049_fun282(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx);
static kk_function_t kk_std_num_random__new_mlift_random_float64_10049_fun282(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random__mlift_random_float64_10049_fun282, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random__mlift_random_float64_10049_fun282(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x283;
  int64_t _x_x284 = kk_int64_unbox(_b_x126, KK_OWNED, _ctx); /*int64*/
  _x_x283 = kk_std_num_float64_float64_from_bits(_x_x284, _ctx); /*float64*/
  return kk_double_box(_x_x283, _ctx);
}

double kk_std_num_random__mlift_random_float64_10049(int64_t _y_x10033, kk_context_t* _ctx) { /* (int64) -> random float64 */ 
  int64_t mag;
  int64_t _x_x268;
  kk_box_t _x_x269 = kk_std_core_hnd__open_none2(kk_std_num_random__new_mlift_random_float64_10049_fun270(_ctx), kk_int64_box(_y_x10033, _ctx), kk_integer_box(kk_integer_from_small(12), _ctx), _ctx); /*1002*/
  _x_x268 = kk_int64_unbox(_x_x269, KK_OWNED, _ctx); /*int64*/
  int64_t _x_x275;
  kk_box_t _x_x276 = kk_std_core_hnd__open_none1(kk_std_num_random__new_mlift_random_float64_10049_fun277(_ctx), kk_integer_box(kk_integer_from_str("4607182418800017408", _ctx), _ctx), _ctx); /*1001*/
  _x_x275 = kk_int64_unbox(_x_x276, KK_OWNED, _ctx); /*int64*/
  mag = _x_x268 | _x_x275; /*int64*/
  double _x_x280;
  kk_box_t _x_x281 = kk_std_core_hnd__open_none1(kk_std_num_random__new_mlift_random_float64_10049_fun282(_ctx), kk_int64_box(mag, _ctx), _ctx); /*1001*/
  _x_x280 = kk_double_unbox(_x_x281, KK_OWNED, _ctx); /*float64*/
  return (_x_x280 - 0x1p0);
}
 
// Return a random float64 in the range [0,1) using 52-bits of randomness


// lift anonymous function
struct kk_std_num_random_random_float64_fun286__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_float64_fun286(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_float64_fun286(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_float64_fun286, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_float64_fun286(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x287;
  int64_t _x_x288 = kk_int64_unbox(_b_x130, KK_OWNED, _ctx); /*int64*/
  _x_x287 = kk_std_num_random__mlift_random_float64_10049(_x_x288, _ctx); /*float64*/
  return kk_double_box(_x_x287, _ctx);
}


// lift anonymous function
struct kk_std_num_random_random_float64_fun291__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_float64_fun291(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_float64_fun291(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_float64_fun291, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_float64_fun291(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx) {
  kk_unused(_fself);
  int64_t _x_x292;
  int64_t _x_x293 = kk_int64_unbox(_b_x134, KK_OWNED, _ctx); /*int64*/
  int64_t _x_x294;
  kk_integer_t _x_x295 = kk_integer_unbox(_b_x135, _ctx); /*int*/
  _x_x294 = kk_std_num_int64_int64(_x_x295, _ctx); /*int64*/
  _x_x292 = (int64_t)kk_shr64(_x_x293,_x_x294); /*int64*/
  return kk_int64_box(_x_x292, _ctx);
}


// lift anonymous function
struct kk_std_num_random_random_float64_fun298__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_float64_fun298(kk_function_t _fself, kk_box_t _b_x138, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_float64_fun298(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_float64_fun298, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_float64_fun298(kk_function_t _fself, kk_box_t _b_x138, kk_context_t* _ctx) {
  kk_unused(_fself);
  int64_t _x_x299;
  kk_integer_t _x_x300 = kk_integer_unbox(_b_x138, _ctx); /*int*/
  _x_x299 = kk_std_num_int64_int64(_x_x300, _ctx); /*int64*/
  return kk_int64_box(_x_x299, _ctx);
}


// lift anonymous function
struct kk_std_num_random_random_float64_fun303__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_random_random_float64_fun303(kk_function_t _fself, kk_box_t _b_x148, kk_context_t* _ctx);
static kk_function_t kk_std_num_random_new_random_float64_fun303(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_random_random_float64_fun303, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_random_random_float64_fun303(kk_function_t _fself, kk_box_t _b_x148, kk_context_t* _ctx) {
  kk_unused(_fself);
  double _x_x304;
  int64_t _x_x305 = kk_int64_unbox(_b_x148, KK_OWNED, _ctx); /*int64*/
  _x_x304 = kk_std_num_float64_float64_from_bits(_x_x305, _ctx); /*float64*/
  return kk_double_box(_x_x304, _ctx);
}

double kk_std_num_random_random_float64(kk_context_t* _ctx) { /* () -> random float64 */ 
  int64_t x_10091 = kk_std_num_random_random_int64(_ctx); /*int64*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x285 = kk_std_core_hnd_yield_extend(kk_std_num_random_new_random_float64_fun286(_ctx), _ctx); /*3003*/
    return kk_double_unbox(_x_x285, KK_OWNED, _ctx);
  }
  {
    int64_t mag;
    int64_t _x_x289;
    kk_box_t _x_x290 = kk_std_core_hnd__open_none2(kk_std_num_random_new_random_float64_fun291(_ctx), kk_int64_box(x_10091, _ctx), kk_integer_box(kk_integer_from_small(12), _ctx), _ctx); /*1002*/
    _x_x289 = kk_int64_unbox(_x_x290, KK_OWNED, _ctx); /*int64*/
    int64_t _x_x296;
    kk_box_t _x_x297 = kk_std_core_hnd__open_none1(kk_std_num_random_new_random_float64_fun298(_ctx), kk_integer_box(kk_integer_from_str("4607182418800017408", _ctx), _ctx), _ctx); /*1001*/
    _x_x296 = kk_int64_unbox(_x_x297, KK_OWNED, _ctx); /*int64*/
    mag = _x_x289 | _x_x296; /*int64*/
    double _x_x301;
    kk_box_t _x_x302 = kk_std_core_hnd__open_none1(kk_std_num_random_new_random_float64_fun303(_ctx), kk_int64_box(mag, _ctx), _ctx); /*1001*/
    _x_x301 = kk_double_unbox(_x_x302, KK_OWNED, _ctx); /*float64*/
    return (_x_x301 - 0x1p0);
  }
}
 
// Returns one of its arguments `x`  or `y`  based on a non-deterministic choice.

kk_box_t kk_std_num_random_choose(kk_box_t x, kk_box_t y, kk_context_t* _ctx) { /* forall<a> (x : a, y : a) -> ndet a */ 
  bool _match_x155;
  int32_t _x_x307 = kk_std_num_random_srandom_int32(_ctx); /*int32*/
  _match_x155 = (_x_x307 >= ((KK_I32(0)))); /*bool*/
  if (_match_x155) {
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
  bool _match_x154 = (lo <= hi); /*bool*/;
  if (_match_x154) {
    low = lo; /*float64*/
  }
  else {
    low = hi; /*float64*/
  }
  double high;
  bool _match_x153 = (lo <= hi); /*bool*/;
  if (_match_x153) {
    high = hi; /*float64*/
  }
  else {
    high = lo; /*float64*/
  }
  double x;
  double _x_x309;
  double _x_x310 = (high - low); /*float64*/
  double _x_x311 = kk_std_num_random_srandom_float64(_ctx); /*float64*/
  _x_x309 = (_x_x310 * _x_x311); /*float64*/
  x = (_x_x309 + low); /*float64*/
  bool _match_x152 = (x >= high); /*bool*/;
  if (_match_x152) {
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
    kk_string_t _x_x183;
    kk_define_string_literal(, _s_x184, 13, "random@random", _ctx)
    _x_x183 = kk_string_dup(_s_x184, _ctx); /*string*/
    kk_std_num_random__tag_random = kk_std_core_hnd__new_Htag(_x_x183, _ctx); /*hnd/htag<std/num/random/random>*/
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
