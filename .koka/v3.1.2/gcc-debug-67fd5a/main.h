#pragma once
#ifndef kk_main_H
#define kk_main_H
// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
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
#include "utest.h"
#include "expr.h"
#include "value.h"
#include "types.h"
#include "infer.h"

// type declarations

// value declarations

kk_unit_t kk_main__mlift_main_10011(kk_std_core_types__list _y_x10000, kk_context_t* _ctx); /* (infer/tenv) -> <pure,console/console> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_main_10012(kk_unit_t _c_x10003, kk_context_t* _ctx) { /* (()) -> () */ 
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <pure,console/console> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
