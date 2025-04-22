// Koka generated module: interpret, koka version: 3.1.2
"use strict";
 
// imports
import * as $std_core_types from './std_core_types.mjs';
import * as $std_core_hnd from './std_core_hnd.mjs';
import * as $std_core_bool from './std_core_bool.mjs';
import * as $std_core_order from './std_core_order.mjs';
import * as $std_core_char from './std_core_char.mjs';
import * as $std_core_int from './std_core_int.mjs';
import * as $std_core_string from './std_core_string.mjs';
import * as $std_core_sslice from './std_core_sslice.mjs';
import * as $std_core_maybe from './std_core_maybe.mjs';
import * as $std_core_tuple from './std_core_tuple.mjs';
import * as $std_core_show from './std_core_show.mjs';
import * as $std_core_debug from './std_core_debug.mjs';
import * as $std_core_delayed from './std_core_delayed.mjs';
import * as $std_core_console from './std_core_console.mjs';
import * as $std_core from './std_core.mjs';
import * as $std_core_either from './std_core_either.mjs';
import * as $std_core_exn from './std_core_exn.mjs';
import * as $std_core_list from './std_core_list.mjs';
import * as $std_core_vector from './std_core_vector.mjs';
import * as $std_num_random from './std_num_random.mjs';
import * as $utest from './utest.mjs';
 
// externals
 
// type declarations
// type value
export function Int(x) /* (x : int) -> value */  {
  return { _tag: 1, x: x };
}
export const Unit = { _tag: 2 }; // value
export function FnVal(x, body, env) /* (x : string, body : expr, env : list<(string, value)>) -> value */  {
  return { _tag: 3, x: x, body: body, env: env };
}
export function Cont(c) /* (c : cont<value>) -> value */  {
  return { _tag: 4, c: c };
}
// type expr
export function Lit(value) /* (value : value) -> expr */  {
  return { _tag: 1, value: value };
}
export function Var(x) /* (x : string) -> expr */  {
  return { _tag: 2, x: x };
}
export function Let(name, e1, e2) /* (name : string, e1 : expr, e2 : expr) -> expr */  {
  return { _tag: 3, name: name, e1: e1, e2: e2 };
}
export function Fn(x, e1) /* (x : string, e1 : expr) -> expr */  {
  return { _tag: 4, x: x, e1: e1 };
}
export function App(e1, e2) /* (e1 : expr, e2 : expr) -> expr */  {
  return { _tag: 5, e1: e1, e2: e2 };
}
export function Handle(e, h) /* (e : expr, h : list<(string, expr)>) -> expr */  {
  return { _tag: 6, e: e, h: h };
}
export function Prim(op, exprs) /* (op : string, exprs : list<expr>) -> expr */  {
  return { _tag: 7, op: op, exprs: exprs };
}
 
// declarations
 
 
// Automatically generated. Tests for the `Int` constructor of the `:value` type.
export function is_int(value) /* (value : value) -> bool */  {
  return (value._tag === 1);
}
 
 
// Automatically generated. Tests for the `Unit` constructor of the `:value` type.
export function is_unit(value) /* (value : value) -> bool */  {
  return (value._tag === 2);
}
 
 
// Automatically generated. Tests for the `FnVal` constructor of the `:value` type.
export function is_fnVal(value) /* (value : value) -> bool */  {
  return (value._tag === 3);
}
 
 
// Automatically generated. Tests for the `Cont` constructor of the `:value` type.
export function is_cont(value) /* (value : value) -> bool */  {
  return (value._tag === 4);
}
 
 
// Automatically generated. Tests for the `Lit` constructor of the `:expr` type.
export function is_lit(expr) /* (expr : expr) -> bool */  {
  return (expr._tag === 1);
}
 
 
// Automatically generated. Tests for the `Var` constructor of the `:expr` type.
export function is_var(expr) /* (expr : expr) -> bool */  {
  return (expr._tag === 2);
}
 
 
// Automatically generated. Tests for the `Let` constructor of the `:expr` type.
export function is_let(expr) /* (expr : expr) -> bool */  {
  return (expr._tag === 3);
}
 
 
// Automatically generated. Tests for the `Fn` constructor of the `:expr` type.
export function is_fn(expr) /* (expr : expr) -> bool */  {
  return (expr._tag === 4);
}
 
 
// Automatically generated. Tests for the `App` constructor of the `:expr` type.
export function is_app(expr) /* (expr : expr) -> bool */  {
  return (expr._tag === 5);
}
 
 
// Automatically generated. Tests for the `Handle` constructor of the `:expr` type.
export function is_handle(expr) /* (expr : expr) -> bool */  {
  return (expr._tag === 6);
}
 
 
// Automatically generated. Tests for the `Prim` constructor of the `:expr` type.
export function is_prim(expr) /* (expr : expr) -> bool */  {
  return (expr._tag === 7);
}
 
export function show(v) /* (v : value) -> string */  {
  if (v._tag === 1) {
    return $std_core_int.show(v.x);
  }
  else if (v._tag === 3) {
    return $std_core_types._lp__plus__plus__rp_("fn ", $std_core_show.string_fs_show(v.x));
  }
  else if (v._tag === 4) {
    return "cont";
  }
  else {
    return "show: undefined";
  }
}
 
export function eq(v1, v2) /* (v1 : value, v2 : value) -> bool */  {
  if (v1._tag === 1 && v2._tag === 1) {
    return $std_core_types._int_eq((v1.x),(v2.x));
  }
  else {
    return false;
  }
}
 
export function _lp__eq__eq__rp_(e1, e2) /* (e1 : either<exception,value>, e2 : either<exception,value>) -> bool */  {
  if (e1._tag === 2 && e2._tag === 2) {
    if (e1.right._tag === 1 && e2.right._tag === 1) {
      return $std_core_types._int_eq((e1.right.x),(e2.right.x));
    }
    else {
      return false;
    }
  }
  else if (e1._tag === 1 && e2._tag === 1) {
    return true;
  }
  else {
    return false;
  }
}
 
export function extend(prev, $new) /* (prev : env, new : (string, value)) -> env */  {
  return $std_core_list.append(prev, $std_core_types.Cons($new, $std_core_types.Nil));
}
 
 
// monadic lift
export function _mlift_eval_10061_sq_(c_0, i, _y_x10013) /* (c@0 : cont<value>, i : string, maybe<(string, value)>) -> <div,exn> value */  {
  if (_y_x10013 !== null) {
    return c_0(_y_x10013.value.snd);
  }
  else {
    return $std_core_exn.$throw($std_core_types._lp__plus__plus__rp_("undefined variable ", $std_core_show.string_fs_show(i)));
  }
}
 
 
// monadic lift
export function _mlift_eval_prim_10062(c_1, env_1, exprs_0, h_1, prim_env_1, _y_x10027) /* (c@1 : cont<value>, env@1 : env, exprs@0 : list<expr>, h@1 : list<(string, expr)>, prim-env@1 : prim_env, maybe<(list<value>) -> exn value>) -> <div,exn> value */  {
  if (_y_x10027 !== null) {
     
    var x_10065 = $std_core_list.map(exprs_0, function(expr /* expr */ ) {
        return eval_sq_(expr, env_1, prim_env_1, h_1, c_1);
      });
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(_y_x10027.value);
    }
    else {
      return _y_x10027.value(x_10065);
    }
  }
  else {
    return $std_core_exn.$throw("undefined primitive op was evaluted!");
  }
}
 
export function apply(f, arg, prim_env, h, c) /* (f : value, arg : value, prim-env : prim_env, h : list<(string, expr)>, c : cont<value>) -> pure value */  {
  if (f._tag === 3) {
     
    var env_sq_ = $std_core_list.append(f.env, $std_core_types.Cons($std_core_types.Tuple2(f.x, arg), $std_core_types.Nil));
    return eval_sq_(f.body, env_sq_, prim_env, h, c);
  }
  else if (f._tag === 4) {
     
    var x_1_10067 = f.c(arg);
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(c);
    }
    else {
      return c(x_1_10067);
    }
  }
  else {
    return $std_core_exn.$throw("literal was handled as function!");
  }
}
 
export function eval_sq_(e, env_0, prim_env_0, h_0, c_0_0) /* (e : expr, env : env, prim-env : prim_env, h : list<(string, expr)>, c : cont<value>) -> pure value */  { tailcall: while(1)
{
  if (e._tag === 2) {
     
    var x_2_10069 = $std_core_list.find(env_0, function(_pat_x54__25 /* (string, value) */ ) {
        return ((e.x) === (_pat_x54__25.fst));
      });
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(function(_y_x10013_0 /* maybe<(string, value)> */ ) {
        return _mlift_eval_10061_sq_(c_0_0, e.x, _y_x10013_0);
      });
    }
    else {
      if (x_2_10069 !== null) {
        return c_0_0(x_2_10069.value.snd);
      }
      else {
        return $std_core_exn.$throw($std_core_types._lp__plus__plus__rp_("undefined variable ", $std_core_show.string_fs_show(e.x)));
      }
    }
  }
  else if (e._tag === 3) {
    {
      // tail call
      var _x6 = function(_c_0_00 /* cont<value> */ , _e21 /* expr */ , _env_02 /* env */ , _h_03 /* list<(string, expr)> */ , _name4 /* string */ , _prim_env_05 /* prim_env */ ) {
        return function(e1_sq_ /* value */ ) {
           
          var env_0_sq_ = $std_core_list.append(_env_02, $std_core_types.Cons($std_core_types.Tuple2(_name4, e1_sq_), $std_core_types.Nil));
          return eval_sq_(_e21, env_0_sq_, _prim_env_05, _h_03, _c_0_00);
        };
      }(c_0_0, e.e2, env_0, h_0, e.name, prim_env_0);
      e = e.e1;
      c_0_0 = _x6;
      continue tailcall;
    }
  }
  else if (e._tag === 4) {
    return c_0_0(FnVal(e.x, e.e1, env_0));
  }
  else if (e._tag === 5) {
    {
      // tail call
      var _x12 = function(_c_0_07 /* cont<value> */ , _e2_08 /* expr */ , _env_09 /* env */ , _h_010 /* list<(string, expr)> */ , _prim_env_011 /* prim_env */ ) {
        return function(f_0 /* value */ ) {
          return eval_sq_(_e2_08, _env_09, _prim_env_011, _h_010, function(arg_0 /* value */ ) {
              return apply(f_0, arg_0, _prim_env_011, _h_010, _c_0_07);
            });
        };
      }(c_0_0, e.e2, env_0, h_0, prim_env_0);
      e = e.e1;
      c_0_0 = _x12;
      continue tailcall;
    }
  }
  else if (e._tag === 1) {
    return c_0_0(e.value);
  }
  else if (e._tag === 6) {
    {
      // tail call
      e = e.e;
      h_0 = e.h;
      continue tailcall;
    }
  }
  else {
    return eval_prim(e.op, e.exprs, env_0, h_0_0_0_0_0_0_0, c_0_0, prim_env_0);
  }
}}
 
export function eval_prim(id, exprs_0_0, env_1_0, h_1_0, c_1_0, prim_env_1_0) /* (id : string, exprs : list<expr>, env : env, h : list<(string, expr)>, c : cont<value>, prim-env : prim_env) -> pure value */  {
   
  var x_3_10072 = $std_core_list.lookup(prim_env_1_0, function(id_sq_ /* string */ ) {
      return (id === id_sq_);
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(function(_y_x10027_0 /* maybe<(list<value>) -> exn value> */ ) {
      return _mlift_eval_prim_10062(c_1_0, env_1_0, exprs_0_0, h_1_0, prim_env_1_0, _y_x10027_0);
    });
  }
  else {
    if (x_3_10072 !== null) {
       
      var x_4_10075 = $std_core_list.map(exprs_0_0, function(expr_0 /* expr */ ) {
          return eval_sq_(expr_0, env_1_0, prim_env_1_0, h_1_0, c_1_0);
        });
      if ($std_core_hnd._yielding()) {
        return $std_core_hnd.yield_extend(x_3_10072.value);
      }
      else {
        return x_3_10072.value(x_4_10075);
      }
    }
    else {
      return $std_core_exn.$throw("undefined primitive op was evaluted!");
    }
  }
}
 
export function $eval(e) /* (e : expr) -> pure value */  {
  return eval_sq_(e, $std_core_types.Nil, $std_core_types.Nil, $std_core_types.Nil, function(x /* value */ ) {
      return x;
    });
}
 
export function arg2(args) /* (args : list<value>) -> exn (value, value) */  {
  if (args !== null && args.tail !== null) {
    return $std_core_types.Tuple2(args.head, args.tail.head);
  }
  else {
    return $std_core_exn.$throw("expected two arguments");
  }
}
 
 
// monadic lift
export function _mlift_primitive_ops_10063(_y_x10038) /* forall<e> ((value, value)) -> <exn|e> value */  {
  if (_y_x10038.fst._tag === 1 && _y_x10038.snd._tag === 1) {
    return Int($std_core_types._int_add((_y_x10038.fst.x),(_y_x10038.snd.x)));
  }
  else {
    return $std_core_hnd._open_at2($std_core_hnd._evv_index($std_core_exn._tag_exn), $std_core_exn.$throw, "add: arguments must be Int");
  }
}
 
export var primitive_ops;
var primitive_ops = $std_core_types.Cons($std_core_types.Tuple2("+", function(args /* list<value> */ ) {
       
      var x_10077 = $std_core_hnd._open_at1($std_core_hnd._evv_index($std_core_exn._tag_exn), function(args_0 /* list<value> */ ) {
          if (args_0 !== null && args_0.tail !== null) {
            return $std_core_types.Tuple2(args_0.head, args_0.tail.head);
          }
          else {
            return $std_core_exn.$throw("expected two arguments");
          }
        }, args);
      if ($std_core_hnd._yielding()) {
        return $std_core_hnd.yield_extend(function(_y_x10038 /* (value, value) */ ) {
          return _mlift_primitive_ops_10063(_y_x10038);
        });
      }
      else {
        return _mlift_primitive_ops_10063(x_10077);
      }
    }), $std_core_types.Nil);
 
export function run(e) /* (e : expr) -> div either<exception,value> */  {
   
  var t_10002 = $std_core_exn.$try(function() {
    return eval_sq_(e, $std_core_types.Nil, primitive_ops, $std_core_types.Nil, function(x_0 /* value */ ) {
        return x_0;
      });
  });
  if (t_10002._tag === 1) {
    return $std_core_types.Left(t_10002.exception);
  }
  else {
    return $std_core_types.Right(t_10002.result);
  }
}
 
 
// monadic lift
export function _mlift_interpret_tests_10064(wild__) /* forall<a> (wild_ : ()) -> <div,utest/test-suite<a>> () */  {
  return $utest.suite("Multiple Application", function() {
      return $utest.test("", function() {
          return $utest.assert_eq(function() {
               
              var t_0_10006 = $std_core_exn.$try(function() {
                return eval_sq_(Let("plus", Fn("a", Fn("b", Prim("+", $std_core_types.Cons(Var("a"), $std_core_types.Cons(Var("b"), $std_core_types.Nil))))), App(App(Var("plus"), Lit(Int(1))), Lit(Int(2)))), $std_core_types.Nil, primitive_ops, $std_core_types.Nil, function(x_2 /* value */ ) {
                    return x_2;
                  });
              });
              if (t_0_10006._tag === 1) {
                return $std_core_types.Left(t_0_10006.exception);
              }
              else {
                return $std_core_types.Right(t_0_10006.result);
              }
            }, function() {
              return $std_core_types.Right(Int(3));
            }, _lp__eq__eq__rp_, function(_arg_x1_0 /* either<exception,value> */ ) {
              return $std_core_either.show(_arg_x1_0, $std_core_exn.show, show);
            });
        });
    });
}
 
export function interpret_tests() /* forall<a> () -> <div,utest/test-suite<a>> () */  {
   
  var x_10079 = $utest.suite("Apply", function() {
      return $utest.test("", function() {
          return $utest.assert_eq(function() {
               
              var t_10004 = $std_core_exn.$try(function() {
                return eval_sq_(Let("id", Fn("x", Var("x")), App(Var("id"), Lit(Int(1010)))), $std_core_types.Nil, primitive_ops, $std_core_types.Nil, function(x_0 /* value */ ) {
                    return x_0;
                  });
              });
              if (t_10004._tag === 1) {
                return $std_core_types.Left(t_10004.exception);
              }
              else {
                return $std_core_types.Right(t_10004.result);
              }
            }, function() {
              return $std_core_types.Right(Int(1010));
            }, _lp__eq__eq__rp_, function(_arg_x1 /* either<exception,value> */ ) {
              return $std_core_either.show(_arg_x1, $std_core_exn.show, show);
            });
        });
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(function(wild__ /* () */ ) {
      return _mlift_interpret_tests_10064(wild__);
    });
  }
  else {
    return $utest.suite("Multiple Application", function() {
        return $utest.test("", function() {
            return $utest.assert_eq(function() {
                 
                var t_0_10006 = $std_core_exn.$try(function() {
                  return eval_sq_(Let("plus", Fn("a", Fn("b", Prim("+", $std_core_types.Cons(Var("a"), $std_core_types.Cons(Var("b"), $std_core_types.Nil))))), App(App(Var("plus"), Lit(Int(1))), Lit(Int(2)))), $std_core_types.Nil, primitive_ops, $std_core_types.Nil, function(x_2 /* value */ ) {
                      return x_2;
                    });
                });
                if (t_0_10006._tag === 1) {
                  return $std_core_types.Left(t_0_10006.exception);
                }
                else {
                  return $std_core_types.Right(t_0_10006.result);
                }
              }, function() {
                return $std_core_types.Right(Int(3));
              }, _lp__eq__eq__rp_, function(_arg_x1_0 /* either<exception,value> */ ) {
                return $std_core_either.show(_arg_x1_0, $std_core_exn.show, show);
              });
          });
      });
  }
}