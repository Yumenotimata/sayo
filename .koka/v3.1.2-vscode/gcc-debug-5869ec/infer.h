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
#include "std_core_string.h"

// type declarations

// value declarations

static inline kk_std_core_types__list kk_infer__lp__plus__dash__gt__rp_(kk_string_t u, kk_types__types t, kk_context_t* _ctx) { /* (u : expr/uid, t : types/types) -> list<(expr/uid, types/types)> */ 
  kk_box_t _x_x418;
  kk_std_core_types__tuple2 _x_x419 = kk_std_core_types__new_Tuple2(kk_string_box(u), kk_types__types_box(t, _ctx), _ctx); /*(1038, 1039)*/
  _x_x418 = kk_std_core_types__tuple2_box(_x_x419, _ctx); /*1024*/
  return kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x418, kk_std_core_types__new_Nil(_ctx), _ctx);
}

kk_types__types kk_infer__mlift_tvar_10055(kk_ref_t tv, kk_integer_t _y_x10004, kk_context_t* _ctx); /* forall<h> (tv : ref<h,tenv>, int) -> expr/unique types/types */ 

kk_types__types kk_infer_tvar(kk_ref_t tv, kk_context_t* _ctx); /* forall<h> (tv : ref<h,tenv>) -> <expr/unique,read<h>,write<h>> types/types */ 

kk_types__types kk_infer_tvar_sq_(kk_string_t u, kk_ref_t tv, kk_context_t* _ctx); /* forall<h> (u : expr/uid, tv : ref<h,tenv>) -> <expr/unique,read<h>,write<h>> types/types */ 

kk_types__types kk_infer__trmc_apply_sq_(kk_types__types t, kk_std_core_types__list s, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* (t : types/types, s : types/subst, ctx<types/types>) -> <console/console,div> types/types */ 

kk_types__types kk_infer_apply_sq_(kk_types__types t_1, kk_std_core_types__list s_0, kk_context_t* _ctx); /* (t : types/types, s : types/subst) -> <console/console,div> types/types */ 

kk_types__types kk_infer__mlift_infer_10056_sq_(kk_types__types t_ret, kk_std_core_types__list subst, kk_context_t* _ctx); /* forall<h> (t-ret : types/types, subst : types/subst) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 

kk_types__types kk_infer__mlift_infer_10057_sq_(kk_types__types t_e1, kk_types__types t_e2, kk_types__types t_ret_0, kk_context_t* _ctx); /* forall<h> (t-e1 : types/types, t-e2 : types/types, t-ret : types/types) -> <read<h>,expr/unique,write<h>,console/console,div,exn> types/types */ 

kk_types__types kk_infer__mlift_infer_10058_sq_(kk_types__types t_e1_0, kk_ref_t tv, kk_types__types t_e2_0, kk_context_t* _ctx); /* forall<h> (t-e1 : types/types, tv : ref<h,tenv>, t-e2 : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 

kk_types__types kk_infer__mlift_infer_10059_sq_(kk_expr__uexpr e2, kk_ref_t tv_0, kk_types__types t_e1_1, kk_context_t* _ctx); /* forall<h> (e2 : expr/uexpr, tv : ref<h,tenv>, t-e1 : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 

kk_types__types kk_infer__mlift_infer_10060_sq_(kk_types__types t_a, kk_types__types t_body, kk_context_t* _ctx); /* forall<h> (t-a : types/types, t-body : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 

kk_types__types kk_infer__mlift_infer_10061_sq_(kk_expr__uexpr body, kk_ref_t tv_1, kk_types__types t_a_0, kk_context_t* _ctx); /* forall<h> (body : expr/uexpr, tv : ref<h,tenv>, t-a : types/types) -> <read<h>,expr/unique,write<h>,console/console,div,exn> types/types */ 

kk_types__types kk_infer__mlift_infer_10062_sq_(kk_ref_t tv_2, kk_string_t x_3, kk_std_core_types__maybe _y_x10011, kk_context_t* _ctx); /* forall<h> (tv : ref<h,tenv>, x : expr/uid, maybe<types/types>) -> <read<h>,expr/unique,write<h>,console/console,div,exn> types/types */ 

kk_types__types kk_infer__mlift_infer_10063_sq_(kk_ref_t tv_3, kk_types__types t_e2_0_0, kk_context_t* _ctx); /* forall<h> (tv : ref<h,tenv>, t-e2@0 : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 

kk_types__types kk_infer__mlift_infer_10064_sq_(kk_expr__uexpr e2_0, kk_ref_t tv_4, kk_std_core_types__list _y_x10017, kk_context_t* _ctx); /* forall<h> (e2@0 : expr/uexpr, tv : ref<h,tenv>, list<(expr/uid, types/types)>) -> <read<h>,write<h>,console/console,div,exn,expr/unique> types/types */ 

kk_types__types kk_infer__mlift_infer_10065_sq_(kk_expr__uexpr e2_0_0, kk_ref_t tv_5, kk_std_core_types__list subst_0_0, kk_context_t* _ctx); /* forall<h> (e2@0 : expr/uexpr, tv : ref<h,tenv>, subst@0 : types/subst) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 

kk_types__types kk_infer__mlift_infer_10066_sq_(kk_expr__uexpr e2_0_1, kk_types__types t_x, kk_ref_t tv_6, kk_types__types t_e1_0_0, kk_context_t* _ctx); /* forall<h> (e2@0 : expr/uexpr, t-x : types/types, tv : ref<h,tenv>, t-e1@0 : types/types) -> <console/console,div,exn,read<h>,expr/unique,write<h>> types/types */ 

kk_types__types kk_infer__mlift_infer_10067_sq_(kk_expr__uexpr e1_0, kk_expr__uexpr e2_0_2, kk_ref_t tv_7, kk_types__types t_x_0, kk_context_t* _ctx); /* forall<h> (e1@0 : expr/uexpr, e2@0 : expr/uexpr, tv : ref<h,tenv>, t-x : types/types) -> <read<h>,expr/unique,write<h>,console/console,div,exn> types/types */ 

kk_types__types kk_infer_infer_sq_(kk_expr__uexpr e, kk_ref_t tv_8, kk_context_t* _ctx); /* forall<h> (e : expr/uexpr, tv : ref<h,tenv>) -> <pure,console/console,read<h>,expr/unique,write<h>> types/types */ 
 
// monadic lift

static inline kk_std_core_types__list kk_infer__mlift_infer_10068(kk_ref_t tv, kk_types__types wild__, kk_context_t* _ctx) { /* forall<$h> (tv : forall<h1> ref<h1,tenv>, wild_ : types/types) -> <console/console,div,exn,read<$h>,alloc<$h>,write<$h>> tenv */ 
  kk_types__types_drop(wild__, _ctx);
  kk_box_t _x_x678 = kk_ref_get(tv,kk_context()); /*1001*/
  return kk_std_core_types__list_unbox(_x_x678, KK_OWNED, _ctx);
}

kk_std_core_types__list kk_infer_infer(kk_expr__uexpr e, kk_context_t* _ctx); /* (e : expr/uexpr) -> <pure,console/console> tenv */ 

void kk_infer__init(kk_context_t* _ctx);


void kk_infer__done(kk_context_t* _ctx);

#endif // header
