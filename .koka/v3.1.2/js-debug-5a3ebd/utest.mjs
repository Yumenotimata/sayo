// Koka generated module: utest, koka version: 3.1.2
"use strict";
 
// imports
import * as $std_core_types from './std_core_types.mjs';
import * as $std_core_hnd from './std_core_hnd.mjs';
import * as $std_core_exn from './std_core_exn.mjs';
import * as $std_core_bool from './std_core_bool.mjs';
import * as $std_core_order from './std_core_order.mjs';
import * as $std_core_char from './std_core_char.mjs';
import * as $std_core_int from './std_core_int.mjs';
import * as $std_core_vector from './std_core_vector.mjs';
import * as $std_core_string from './std_core_string.mjs';
import * as $std_core_sslice from './std_core_sslice.mjs';
import * as $std_core_maybe from './std_core_maybe.mjs';
import * as $std_core_either from './std_core_either.mjs';
import * as $std_core_tuple from './std_core_tuple.mjs';
import * as $std_core_show from './std_core_show.mjs';
import * as $std_core_debug from './std_core_debug.mjs';
import * as $std_core_delayed from './std_core_delayed.mjs';
import * as $std_core_console from './std_core_console.mjs';
import * as $std_core from './std_core.mjs';
import * as $std_core_list from './std_core_list.mjs';
 
// externals
 
// type declarations
 
 
// runtime tag for the effect `:test`
export var _tag_test;
var _tag_test = "test@utest";
 
 
// runtime tag for the effect `:test-case`
export var _tag_test_case;
var _tag_test_case = "test-case@utest";
 
 
// runtime tag for the effect `:test-suite`
export var _tag_test_suite;
var _tag_test_suite = "test-suite@utest";
// type test
export function _Hnd_test(_cfc, _fun_test_fail) /* forall<a,e,b> (int, hnd/clause2<string,string,(),test<a>,e,b>) -> test<a,e,b> */  {
  return { _cfc: _cfc, _fun_test_fail: _fun_test_fail };
}
// type test-case
export function _Hnd_test_case(_cfc, _fun_test_case_fail) /* forall<a,e,b> (int, hnd/clause2<string,string,(),test-case<a>,e,b>) -> test-case<a,e,b> */  {
  return { _cfc: _cfc, _fun_test_case_fail: _fun_test_case_fail };
}
// type test-failure
export function TestFailure(expected, actual, msg) /* forall<a,b> (expected : a, actual : b, msg : string) -> test-failure<a,b> */  {
  return { expected: expected, actual: actual, msg: msg };
}
// type test-suite
export function _Hnd_test_suite(_cfc, _fun_test_suite_fail) /* forall<a,e,b> (int, hnd/clause1<(string, string, string),(),test-suite<a>,e,b>) -> test-suite<a,e,b> */  {
  return { _cfc: _cfc, _fun_test_suite_fail: _fun_test_suite_fail };
}
 
// declarations
 
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test` type.
export function test_fs__cfc(test_0) /* forall<a,e,b> (test : test<a,e,b>) -> int */  {
  return test_0._cfc;
}
 
 
// Automatically generated. Retrieves the `@fun-test-fail` constructor field of the `:test` type.
export function test_fs__fun_test_fail(test_0) /* forall<a,e,b> (test : test<a,e,b>) -> hnd/clause2<string,string,(),test<a>,e,b> */  {
  return test_0._fun_test_fail;
}
 
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test-case` type.
export function test_case_fs__cfc(_this) /* forall<a,e,b> (test-case<a,e,b>) -> int */  {
  return _this._cfc;
}
 
 
// Automatically generated. Retrieves the `@fun-test-case-fail` constructor field of the `:test-case` type.
export function test_case_fs__fun_test_case_fail(_this) /* forall<a,e,b> (test-case<a,e,b>) -> hnd/clause2<string,string,(),test-case<a>,e,b> */  {
  return _this._fun_test_case_fail;
}
 
 
// Automatically generated. Retrieves the `expected` constructor field of the `:test-failure` type.
export function test_failure_fs_expected(_this) /* forall<a,b> (test-failure<a,b>) -> a */  {
  return _this.expected;
}
 
 
// Automatically generated. Retrieves the `actual` constructor field of the `:test-failure` type.
export function test_failure_fs_actual(_this) /* forall<a,b> (test-failure<a,b>) -> b */  {
  return _this.actual;
}
 
 
// Automatically generated. Retrieves the `msg` constructor field of the `:test-failure` type.
export function test_failure_fs_msg(_this) /* forall<a,b> (test-failure<a,b>) -> string */  {
  return _this.msg;
}
 
export function test_failure_fs__copy(_this, expected, actual, msg) /* forall<a,b> (test-failure<a,b>, expected : ? a, actual : ? b, msg : ? string) -> test-failure<a,b> */  {
  if (expected !== undefined) {
    var _x0 = expected;
  }
  else {
    var _x0 = _this.expected;
  }
  if (actual !== undefined) {
    var _x1 = actual;
  }
  else {
    var _x1 = _this.actual;
  }
  if (msg !== undefined) {
    var _x2 = msg;
  }
  else {
    var _x2 = _this.msg;
  }
  return TestFailure(_x0, _x1, _x2);
}
 
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test-suite` type.
export function test_suite_fs__cfc(_this) /* forall<a,e,b> (test-suite<a,e,b>) -> int */  {
  return _this._cfc;
}
 
 
// Automatically generated. Retrieves the `@fun-test-suite-fail` constructor field of the `:test-suite` type.
export function test_suite_fs__fun_test_suite_fail(_this) /* forall<a,e,b> (test-suite<a,e,b>) -> hnd/clause1<(string, string, string),(),test-suite<a>,e,b> */  {
  return _this._fun_test_suite_fail;
}
 
 
// handler for the effect `:test`
export function _handle_test(hnd, ret, action) /* forall<a,b,e,c> (hnd : test<a,e,c>, ret : (res : b) -> e c, action : () -> <test<a>|e> b) -> e c */  {
  return $std_core_hnd._hhandle(_tag_test, hnd, ret, action);
}
 
 
// select `test-fail` operation out of effect `:test`
export function _select_test_fail(hnd) /* forall<a,e,b> (hnd : test<a,e,b>) -> hnd/clause2<string,string,(),test<a>,e,b> */  {
  return hnd._fun_test_fail;
}
 
 
// Call the `fun test-fail` operation of the effect `:test`
export function test_fail(expected, actual) /* forall<a> (expected : string, actual : string) -> (test<a>) () */  {
   
  var evx_10045 = $std_core_hnd._evv_at(0);
  return evx_10045.hnd._fun_test_fail(evx_10045.marker, evx_10045, expected, actual);
}
 
 
// handler for the effect `:test-case`
export function _handle_test_case(hnd, ret, action) /* forall<a,b,e,c> (hnd : test-case<a,e,c>, ret : (res : b) -> e c, action : () -> <test-case<a>|e> b) -> e c */  {
  return $std_core_hnd._hhandle(_tag_test_case, hnd, ret, action);
}
 
 
// select `test-case-fail` operation out of effect `:test-case`
export function _select_test_case_fail(hnd) /* forall<a,e,b> (hnd : test-case<a,e,b>) -> hnd/clause2<string,string,(),test-case<a>,e,b> */  {
  return hnd._fun_test_case_fail;
}
 
 
// Call the `fun test-case-fail` operation of the effect `:test-case`
export function test_case_fail(expected, actual) /* forall<a> (expected : string, actual : string) -> (test-case<a>) () */  {
   
  var evx_10050 = $std_core_hnd._evv_at(0);
  return evx_10050.hnd._fun_test_case_fail(evx_10050.marker, evx_10050, expected, actual);
}
 
 
// handler for the effect `:test-suite`
export function _handle_test_suite(hnd, ret, action) /* forall<a,b,e,c> (hnd : test-suite<a,e,c>, ret : (res : b) -> e c, action : () -> <test-suite<a>|e> b) -> e c */  {
  return $std_core_hnd._hhandle(_tag_test_suite, hnd, ret, action);
}
 
 
// select `test-suite-fail` operation out of effect `:test-suite`
export function _select_test_suite_fail(hnd) /* forall<a,e,b> (hnd : test-suite<a,e,b>) -> hnd/clause1<(string, string, string),(),test-suite<a>,e,b> */  {
  return hnd._fun_test_suite_fail;
}
 
 
// Call the `fun test-suite-fail` operation of the effect `:test-suite`
export function test_suite_fail(suite_name, expected, actual) /* forall<a> (suite-name : string, expected : string, actual : string) -> (test-suite<a>) () */  {
  return $std_core_hnd._perform3($std_core_hnd._evv_at(0), _select_test_suite_fail, suite_name, expected, actual);
}
 
export function assert_eq(actual, expected, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show) /* forall<a,b> (actual : () -> div a, expected : () -> div a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> <div,test<b>> () */  {
   
  var _x_x1_10039 = $std_core_hnd._open_none0(expected);
   
  var _x_x2_10040 = $std_core_hnd._open_none0(actual);
  var _x3 = $std_core_hnd._open_none3(function(x /* 1149 */ , y /* 1149 */ , _implicit_fs__lp__at_x_0_eq__eq__rp_ /* (1149, 1149) -> bool */ ) {
       
      var b_10002 = _implicit_fs__lp__at_x_0_eq__eq__rp_(x, y);
      return (b_10002) ? false : true;
    }, _x_x1_10039, _x_x2_10040, _implicit_fs__lp__eq__eq__rp_);
  if (_x3) {
     
    var _x_x1_0_10042 = $std_core_hnd._open_none0(expected);
     
    var expected_0_10003 = $std_core_hnd._open_none1(_implicit_fs_show, _x_x1_0_10042);
     
    var _x_x1_1_10043 = $std_core_hnd._open_none0(actual);
     
    var actual_0_10004 = $std_core_hnd._open_none1(_implicit_fs_show, _x_x1_1_10043);
     
    var evx_10055 = $std_core_hnd._evv_at(0);
    return evx_10055.hnd._fun_test_fail(evx_10055.marker, evx_10055, expected_0_10003, actual_0_10004);
  }
  else {
    return $std_core_types.Unit;
  }
}
 
export function test(test_name, tests) /* forall<a> (test-name : string, tests : () -> <div,test<a>> ()) -> <div,test-case<a>> () */  {
  return _handle_test(_Hnd_test(1, function(m /* hnd/marker<<test-case<1247>,div>,()> */ , ev /* hnd/ev<test<1247>> */ , x1 /* string */ , x2 /* string */ ) {
        return $std_core_hnd.under2(ev, function(expected /* string */ , actual /* string */ ) {
             
            var evx_10060 = $std_core_hnd._evv_at(0);
            return evx_10060.hnd._fun_test_case_fail(evx_10060.marker, evx_10060, expected, actual);
          }, x1, x2);
      }), function(_x /* () */ ) {
      return _x;
    }, function() {
      return $std_core_hnd._open_at0(0, tests);
    });
}
 
export function suite(suite_name, test_cases) /* forall<a> (suite-name : string, test-cases : () -> <div,test-case<a>> ()) -> <div,test-suite<a>> () */  {
  return _handle_test_case(_Hnd_test_case(1, function(m /* hnd/marker<<test-suite<1342>,div>,()> */ , ev /* hnd/ev<test-case<1342>> */ , x1 /* string */ , x2 /* string */ ) {
        return $std_core_hnd.under2(ev, function(expected /* string */ , actual /* string */ ) {
            return $std_core_hnd._perform3($std_core_hnd._evv_at(0), _select_test_suite_fail, suite_name, expected, actual);
          }, x1, x2);
      }), function(_x /* () */ ) {
      return _x;
    }, function() {
      return $std_core_hnd._open_at0(0, test_cases);
    });
}
 
export function run_utest(test_suites) /* forall<a> (test-suites : () -> <div,test-suite<a>> ()) -> <div,console/console> () */  {
  return function() {
     
    var loc = { value: ($std_core_types.Nil) };
     
    _handle_test_suite(_Hnd_test_suite(1, function(___wildcard_x633__14 /* hnd/marker<<local<1987>,div,console/console>,()> */ , ___wildcard_x633__17 /* hnd/ev<test-suite<1992>> */ , x /* (string, string, string) */ ) {
          return ((loc).value = ($std_core_list.append(((loc).value), $std_core_types.Cons($std_core_types.Tuple3(x.fst, x.snd, x.thd), $std_core_types.Nil))));
        }), function(_x /* () */ ) {
        return _x;
      }, test_suites);
     
    $std_core_console.printsln("Running test...\n");
     
    var xs_10013 = ((loc).value);
     
    if (xs_10013 === null) {
      var res = $std_core_console.printsln("All tests passed!");
    }
    else {
       
      $std_core_list.map(((loc).value), function(_pat_x42__21 /* (string, string, string) */ ) {
           
          var s_0_10014 = $std_core_types._lp__plus__plus__rp_("failed at ", $std_core_show.string_fs_show(_pat_x42__21.fst));
           
          $std_core_console.printsln(s_0_10014);
           
          var s_1_10015 = $std_core_types._lp__plus__plus__rp_("  expected ", $std_core_types._lp__plus__plus__rp_(_pat_x42__21.snd, $std_core_types._lp__plus__plus__rp_(", but got ", _pat_x42__21.thd)));
          return $std_core_console.printsln(s_1_10015);
        });
      var res = $std_core_types.Unit;
    }
    return $std_core_hnd.prompt_local_var(loc, res);
  }();
}