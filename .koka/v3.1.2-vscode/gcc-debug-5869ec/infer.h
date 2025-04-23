#pragma once
#ifndef kk_infer_H
#define kk_infer_H
// Koka generated module: infer, koka version: 3.1.2, platform: 64-bit
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
#include "value.h"
#include "expr.h"
#include "types.h"

// type declarations

// type infer/tenv-ref
struct kk_infer__tenv_ref_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_infer__tenv_ref;
struct kk_infer__Hnd_tenv_ref {
  struct kk_infer__tenv_ref_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause1 _fun_modify;
  kk_std_core_hnd__clause0 _fun_tv;
};
static inline kk_infer__tenv_ref kk_infer__base_Hnd_tenv_ref(struct kk_infer__Hnd_tenv_ref* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_infer__tenv_ref kk_infer__new_Hnd_tenv_ref(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _fun_modify, kk_std_core_hnd__clause0 _fun_tv, kk_context_t* _ctx) {
  struct kk_infer__Hnd_tenv_ref* _con = kk_block_alloc_at_as(struct kk_infer__Hnd_tenv_ref, _at, 3 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_modify = _fun_modify;
  _con->_fun_tv = _fun_tv;
  return kk_infer__base_Hnd_tenv_ref(_con, _ctx);
}
static inline struct kk_infer__Hnd_tenv_ref* kk_infer__as_Hnd_tenv_ref(kk_infer__tenv_ref x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_infer__Hnd_tenv_ref*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_infer__is_Hnd_tenv_ref(kk_infer__tenv_ref x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_infer__tenv_ref kk_infer__tenv_ref_dup(kk_infer__tenv_ref _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_infer__tenv_ref_drop(kk_infer__tenv_ref _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_infer__tenv_ref_box(kk_infer__tenv_ref _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_infer__tenv_ref kk_infer__tenv_ref_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:tenv-ref` type.

static inline kk_integer_t kk_infer_tenv_ref_fs__cfc(kk_infer__tenv_ref _this, kk_context_t* _ctx) { /* forall<e,a> (tenv-ref<e,a>) -> int */ 
  {
    struct kk_infer__Hnd_tenv_ref* _con_x482 = kk_infer__as_Hnd_tenv_ref(_this, _ctx);
    kk_integer_t _x = _con_x482->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-modify` constructor field of the `:tenv-ref` type.

static inline kk_std_core_hnd__clause1 kk_infer_tenv_ref_fs__fun_modify(kk_infer__tenv_ref _this, kk_context_t* _ctx) { /* forall<e,a> (tenv-ref<e,a>) -> hnd/clause1<(tenv) -> tenv,(),tenv-ref,e,a> */ 
  {
    struct kk_infer__Hnd_tenv_ref* _con_x483 = kk_infer__as_Hnd_tenv_ref(_this, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x483->_fun_modify;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-tv` constructor field of the `:tenv-ref` type.

static inline kk_std_core_hnd__clause0 kk_infer_tenv_ref_fs__fun_tv(kk_infer__tenv_ref _this, kk_context_t* _ctx) { /* forall<e,a> (tenv-ref<e,a>) -> hnd/clause0<tenv,tenv-ref,e,a> */ 
  {
    struct kk_infer__Hnd_tenv_ref* _con_x484 = kk_infer__as_Hnd_tenv_ref(_this, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x484->_fun_tv;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}

static inline kk_std_core_types__list kk_infer__lp__plus__dash__gt__rp_(kk_string_t u, kk_types__types t, kk_context_t* _ctx) { /* (u : expr/uid, t : types/types) -> list<(expr/uid, types/types)> */ 
  kk_box_t _x_x485;
  kk_std_core_types__tuple2 _x_x486 = kk_std_core_types__new_Tuple2(kk_string_box(u), kk_types__types_box(t, _ctx), _ctx); /*(1038, 1039)*/
  _x_x485 = kk_std_core_types__tuple2_box(_x_x486, _ctx); /*1024*/
  return kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x485, kk_std_core_types__new_Nil(_ctx), _ctx);
}

extern kk_std_core_hnd__htag kk_infer__tag_tenv_ref;

kk_box_t kk_infer__handle_tenv_ref(kk_infer__tenv_ref hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : tenv-ref<e,b>, ret : (res : a) -> e b, action : () -> <tenv-ref|e> a) -> e b */ 
 
// select `modify` operation out of effect `:tenv-ref`

static inline kk_std_core_hnd__clause1 kk_infer__select_modify(kk_infer__tenv_ref hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : tenv-ref<e,a>) -> hnd/clause1<(tenv) -> tenv,(),tenv-ref,e,a> */ 
  {
    struct kk_infer__Hnd_tenv_ref* _con_x490 = kk_infer__as_Hnd_tenv_ref(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_modify = _con_x490->_fun_modify;
    return kk_std_core_hnd__clause1_dup(_fun_modify, _ctx);
  }
}
 
// Call the `fun modify` operation of the effect `:tenv-ref`


// lift anonymous function
struct kk_infer_modify_fun494__t {
  struct kk_function_s _base;
  kk_function_t f;
};
extern kk_box_t kk_infer_modify_fun494(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static inline kk_function_t kk_infer_new_modify_fun494(kk_function_t f, kk_context_t* _ctx) {
  struct kk_infer_modify_fun494__t* _self = kk_function_alloc_as(struct kk_infer_modify_fun494__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_infer_modify_fun494, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_unit_t kk_infer_modify(kk_function_t f, kk_context_t* _ctx) { /* (f : (tenv) -> tenv) -> tenv-ref () */ 
  kk_std_core_hnd__ev ev_10080 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<infer/tenv-ref>*/;
  kk_box_t _x_x491;
  {
    struct kk_std_core_hnd_Ev* _con_x492 = kk_std_core_hnd__as_Ev(ev_10080, _ctx);
    kk_box_t _box_x16 = _con_x492->hnd;
    int32_t m = _con_x492->marker;
    kk_infer__tenv_ref h = kk_infer__tenv_ref_unbox(_box_x16, KK_BORROWED, _ctx);
    kk_infer__tenv_ref_dup(h, _ctx);
    {
      struct kk_infer__Hnd_tenv_ref* _con_x493 = kk_infer__as_Hnd_tenv_ref(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x493->_cfc;
      kk_std_core_hnd__clause1 _fun_modify = _con_x493->_fun_modify;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x493->_fun_tv;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_modify, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x23 = _fun_modify.clause;
        _x_x491 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x23, (_fun_unbox_x23, m, ev_10080, kk_function_box(kk_infer_new_modify_fun494(f, _ctx), _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  kk_unit_unbox(_x_x491); return kk_Unit;
}
 
// select `tv` operation out of effect `:tenv-ref`

static inline kk_std_core_hnd__clause0 kk_infer__select_tv(kk_infer__tenv_ref hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : tenv-ref<e,a>) -> hnd/clause0<tenv,tenv-ref,e,a> */ 
  {
    struct kk_infer__Hnd_tenv_ref* _con_x497 = kk_infer__as_Hnd_tenv_ref(hnd, _ctx);
    kk_std_core_hnd__clause0 _fun_tv = _con_x497->_fun_tv;
    return kk_std_core_hnd__clause0_dup(_fun_tv, _ctx);
  }
}
 
// Call the `fun tv` operation of the effect `:tenv-ref`

static inline kk_std_core_types__list kk_infer_tv(kk_context_t* _ctx) { /* () -> tenv-ref tenv */ 
  kk_std_core_hnd__ev ev_10083 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<infer/tenv-ref>*/;
  kk_box_t _x_x498;
  {
    struct kk_std_core_hnd_Ev* _con_x499 = kk_std_core_hnd__as_Ev(ev_10083, _ctx);
    kk_box_t _box_x30 = _con_x499->hnd;
    int32_t m = _con_x499->marker;
    kk_infer__tenv_ref h = kk_infer__tenv_ref_unbox(_box_x30, KK_BORROWED, _ctx);
    kk_infer__tenv_ref_dup(h, _ctx);
    {
      struct kk_infer__Hnd_tenv_ref* _con_x500 = kk_infer__as_Hnd_tenv_ref(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x500->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x500->_fun_modify;
      kk_std_core_hnd__clause0 _fun_tv = _con_x500->_fun_tv;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_tv, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x33 = _fun_tv.clause;
        _x_x498 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x33, (_fun_unbox_x33, m, ev_10083, _ctx), _ctx); /*1005*/
      }
    }
  }
  return kk_std_core_types__list_unbox(_x_x498, KK_OWNED, _ctx);
}
 
// monadic lift

static inline kk_unit_t kk_infer__mlift_handle_tenv_ref_10067(kk_function_t m, kk_ref_t tenv, kk_std_core_types__list _y_x10010, kk_context_t* _ctx) { /* forall<h,e> (m : (tenv) -> tenv, tenv : local-var<h,list<(expr/uid, types/types)>>, tenv) -> <local<h>|e> () */ 
  kk_std_core_types__list _b_x37_39 = kk_function_call(kk_std_core_types__list, (kk_function_t, kk_std_core_types__list, kk_context_t*), m, (m, _y_x10010, _ctx), _ctx); /*infer/tenv*/;
  kk_unit_t _brw_x468 = kk_Unit;
  kk_ref_set_borrow(tenv,(kk_std_core_types__list_box(_b_x37_39, _ctx)),kk_context());
  kk_ref_drop(tenv, _ctx);
  _brw_x468; return kk_Unit;
}
 
// monadic lift

static inline kk_std_core_types__tuple2 kk_infer__mlift_handle_tenv_ref_10068(kk_box_t t, kk_std_core_types__list _y_x10013, kk_context_t* _ctx) { /* forall<h,a,e> (t : a, list<(expr/uid, types/types)>) -> <local<h>|e> (a, list<(expr/uid, types/types)>) */ 
  return kk_std_core_types__new_Tuple2(t, kk_std_core_types__list_box(_y_x10013, _ctx), _ctx);
}

kk_std_core_types__tuple2 kk_infer_handle_tenv_ref(kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (f : () -> <tenv-ref|e> a) -> e (a, tenv) */ 
 
// monadic lift

static inline kk_types__types kk_infer__mlift_tvar_10069(kk_types__types v, kk_unit_t wild__, kk_context_t* _ctx) { /* (v : types/types, wild_ : ()) -> <tenv-ref,expr/unique> types/types */ 
  return v;
}

kk_types__types kk_infer__mlift_tvar_10070(kk_string_t u, kk_integer_t _y_x10019, kk_context_t* _ctx); /* (u : expr/uid, int) -> <expr/unique,tenv-ref> types/types */ 

kk_types__types kk_infer_tvar(kk_string_t u, kk_context_t* _ctx); /* (u : expr/uid) -> <tenv-ref,expr/unique> types/types */ 

kk_types__types kk_infer__trmc_apply_sq_(kk_types__types t, kk_std_core_types__list s, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* (t : types/types, s : types/subst, ctx<types/types>) -> div types/types */ 

kk_types__types kk_infer_apply_sq_(kk_types__types t_1, kk_std_core_types__list s_0, kk_context_t* _ctx); /* (t : types/types, s : types/subst) -> div types/types */ 

kk_types__types kk_infer__mlift_infer_10071_sq_(kk_types__types t_ret, kk_std_core_types__list subst, kk_context_t* _ctx); /* (t-ret : types/types, subst : types/subst) -> <console/console,div,exn,tenv-ref,expr/unique> types/types */ 

kk_types__types kk_infer__mlift_infer_10072_sq_(kk_types__types t_e1, kk_types__types t_e2, kk_types__types t_ret_0, kk_context_t* _ctx); /* (t-e1 : types/types, t-e2 : types/types, t-ret : types/types) -> <tenv-ref,expr/unique,console/console,div,exn> types/types */ 

kk_types__types kk_infer__mlift_infer_10073_sq_(kk_types__types t_e1_0, kk_types__types t_e2_0, kk_context_t* _ctx); /* (t-e1 : types/types, t-e2 : types/types) -> <pure,console/console,tenv-ref,expr/unique> types/types */ 

kk_types__types kk_infer__mlift_infer_10074_sq_(kk_expr__uexpr e2, kk_types__types t_e1_1, kk_context_t* _ctx); /* (e2 : expr/uexpr, t-e1 : types/types) -> <pure,console/console,tenv-ref,expr/unique> types/types */ 

kk_types__types kk_infer__mlift_infer_10075_sq_(kk_types__types t_a, kk_types__types t_body, kk_context_t* _ctx); /* (t-a : types/types, t-body : types/types) -> <pure,console/console,tenv-ref,expr/unique> types/types */ 

kk_types__types kk_infer__mlift_infer_10076_sq_(kk_expr__uexpr body, kk_types__types t_a_0, kk_context_t* _ctx); /* (body : expr/uexpr, t-a : types/types) -> <tenv-ref,expr/unique,console/console,div,exn> types/types */ 

kk_types__types kk_infer__mlift_infer_10077_sq_(kk_string_t x_3, kk_std_core_types__maybe _y_x10030, kk_context_t* _ctx); /* (x : expr/uid, maybe<types/types>) -> <tenv-ref,exn,console/console,div,expr/unique> types/types */ 

kk_types__types kk_infer__mlift_infer_10078_sq_(kk_string_t x_4, kk_std_core_types__list _y_x10029, kk_context_t* _ctx); /* (x : expr/uid, tenv) -> <tenv-ref,exn,console/console,div,expr/unique> types/types */ 

kk_types__types kk_infer_infer_sq_(kk_expr__uexpr e, kk_context_t* _ctx); /* (e : expr/uexpr) -> <pure,console/console,tenv-ref,expr/unique> types/types */ 

kk_std_core_types__either kk_infer_infer(kk_expr__uexpr e, kk_context_t* _ctx); /* (e : expr/uexpr) -> <console/console,div> either<exception,(types/types, tenv)> */ 

void kk_infer__init(kk_context_t* _ctx);


void kk_infer__done(kk_context_t* _ctx);

#endif // header
