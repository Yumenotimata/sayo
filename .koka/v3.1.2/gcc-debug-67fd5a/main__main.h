#pragma once
#ifndef kk_main__main_H
#define kk_main__main_H
// Koka generated module: main/@main, koka version: 3.1.2, platform: 64-bit
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
#include "main.h"
#include "std_core.h"

// type declarations

// value declarations

static inline kk_unit_t kk_main__main__expr(kk_context_t* _ctx) { /* () -> <pure,console/console> () */ 
  kk_main_main(_ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main__main__main_fun0__t {
  struct kk_function_s _base;
};
extern kk_unit_t kk_main__main__main_fun0(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_main__main__new_main_fun0(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__main__main_fun0, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_unit_t kk_main__main__main(kk_context_t* _ctx) { /* () -> <st<global>,console/console,div,fsys,ndet,net,ui> () */ 
  kk_std_core__default_exn(kk_main__main__new_main_fun0(_ctx), _ctx); return kk_Unit;
}

void kk_main__main__init(kk_context_t* _ctx);


void kk_main__main__done(kk_context_t* _ctx);

#endif // header
