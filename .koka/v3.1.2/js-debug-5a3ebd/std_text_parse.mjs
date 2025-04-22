// Koka generated module: std/text/parse, koka version: 3.1.2
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
import * as $std_core_list from './std_core_list.mjs';
import * as $std_core_maybe from './std_core_maybe.mjs';
import * as $std_core_either from './std_core_either.mjs';
import * as $std_core_tuple from './std_core_tuple.mjs';
import * as $std_core_show from './std_core_show.mjs';
import * as $std_core_debug from './std_core_debug.mjs';
import * as $std_core_delayed from './std_core_delayed.mjs';
import * as $std_core_console from './std_core_console.mjs';
import * as $std_core from './std_core.mjs';
import * as $std_core_undiv from './std_core_undiv.mjs';
 
// externals
 
// type declarations
 
 
// runtime tag for the effect `:parse`
export var _tag_parse;
var _tag_parse = "parse@parse";
// type parse
export function _Hnd_parse(_cfc, _fun_current_input, _ctl_fail, _ctl_pick, _fun_satisfy) /* forall<e,a> (int, hnd/clause0<sslice/sslice,parse,e,a>, forall<b> hnd/clause1<string,b,parse,e,a>, hnd/clause0<bool,parse,e,a>, forall<b> hnd/clause1<(sslice/sslice) -> maybe<(b, sslice/sslice)>,maybe<b>,parse,e,a>) -> parse<e,a> */  {
  return { _cfc: _cfc, _fun_current_input: _fun_current_input, _ctl_fail: _ctl_fail, _ctl_pick: _ctl_pick, _fun_satisfy: _fun_satisfy };
}
// type parse-error
export function ParseOk(result, rest) /* forall<a> (result : a, rest : sslice/sslice) -> parse-error<a> */  {
  return { _tag: 1, result: result, rest: rest };
}
export function ParseError(msg, rest) /* forall<a> (msg : string, rest : sslice/sslice) -> parse-error<a> */  {
  return { _tag: 2, msg: msg, rest: rest };
}
 
// declarations
 
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:parse` type.
export function parse_fs__cfc(parse_0) /* forall<e,a> (parse : parse<e,a>) -> int */  {
  return parse_0._cfc;
}
 
 
// Automatically generated. Retrieves the `@fun-current-input` constructor field of the `:parse` type.
export function parse_fs__fun_current_input(parse_0) /* forall<e,a> (parse : parse<e,a>) -> hnd/clause0<sslice/sslice,parse,e,a> */  {
  return parse_0._fun_current_input;
}
 
 
// Automatically generated. Retrieves the `@ctl-fail` constructor field of the `:parse` type.
export function parse_fs__ctl_fail(parse_0) /* forall<e,a,b> (parse : parse<e,a>) -> hnd/clause1<string,b,parse,e,a> */  {
  return parse_0._ctl_fail;
}
 
 
// Automatically generated. Retrieves the `@ctl-pick` constructor field of the `:parse` type.
export function parse_fs__ctl_pick(parse_0) /* forall<e,a> (parse : parse<e,a>) -> hnd/clause0<bool,parse,e,a> */  {
  return parse_0._ctl_pick;
}
 
 
// Automatically generated. Retrieves the `@fun-satisfy` constructor field of the `:parse` type.
export function parse_fs__fun_satisfy(parse_0) /* forall<e,a,b> (parse : parse<e,a>) -> hnd/clause1<(sslice/sslice) -> maybe<(b, sslice/sslice)>,maybe<b>,parse,e,a> */  {
  return parse_0._fun_satisfy;
}
 
 
// Automatically generated. Retrieves the `rest` constructor field of the `:parse-error` type.
export function parse_error_fs_rest(_this) /* forall<a> (parse-error<a>) -> sslice/sslice */  {
  return (_this._tag === 1) ? _this.rest : _this.rest;
}
 
 
// Automatically generated. Tests for the `ParseOk` constructor of the `:parse-error` type.
export function is_parseOk(parse_error) /* forall<a> (parse-error : parse-error<a>) -> bool */  {
  return (parse_error._tag === 1);
}
 
 
// Automatically generated. Tests for the `ParseError` constructor of the `:parse-error` type.
export function is_parseError(parse_error) /* forall<a> (parse-error : parse-error<a>) -> bool */  {
  return (parse_error._tag === 2);
}
 
 
// handler for the effect `:parse`
export function _handle_parse(hnd, ret, action) /* forall<a,e,b> (hnd : parse<e,b>, ret : (res : a) -> e b, action : () -> <parse|e> a) -> e b */  {
  return $std_core_hnd._hhandle(_tag_parse, hnd, ret, action);
}
 
 
// select `satisfy` operation out of effect `:parse`
export function _select_satisfy(hnd) /* forall<a,e,b> (hnd : parse<e,b>) -> hnd/clause1<(sslice/sslice) -> maybe<(a, sslice/sslice)>,maybe<a>,parse,e,b> */  {
  return hnd._fun_satisfy;
}
 
 
// Call the `fun satisfy` operation of the effect `:parse`
export function satisfy(pred) /* forall<a> (pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse maybe<a> */  {
   
  var ev_10191 = $std_core_hnd._evv_at(0);
  var _x0 = ev_10191.hnd._fun_satisfy;
  return _x0(ev_10191.marker, ev_10191, pred);
}
 
 
// select `fail` operation out of effect `:parse`
export function _select_fail(hnd) /* forall<a,e,b> (hnd : parse<e,b>) -> hnd/clause1<string,a,parse,e,b> */  {
  return hnd._ctl_fail;
}
 
 
// Call the `ctl fail` operation of the effect `:parse`
export function fail(msg) /* forall<a> (msg : string) -> parse a */  {
   
  var ev_10194 = $std_core_hnd._evv_at(0);
  var _x1 = ev_10194.hnd._ctl_fail;
  return _x1(ev_10194.marker, ev_10194, msg);
}
 
 
// select `pick` operation out of effect `:parse`
export function _select_pick(hnd) /* forall<e,a> (hnd : parse<e,a>) -> hnd/clause0<bool,parse,e,a> */  {
  return hnd._ctl_pick;
}
 
 
// Call the `ctl pick` operation of the effect `:parse`
export function pick() /* () -> parse bool */  {
   
  var ev_10197 = $std_core_hnd._evv_at(0);
  return ev_10197.hnd._ctl_pick(ev_10197.marker, ev_10197);
}
 
 
// select `current-input` operation out of effect `:parse`
export function _select_current_input(hnd) /* forall<e,a> (hnd : parse<e,a>) -> hnd/clause0<sslice/sslice,parse,e,a> */  {
  return hnd._fun_current_input;
}
 
 
// Call the `fun current-input` operation of the effect `:parse`
export function current_input() /* () -> parse sslice/sslice */  {
   
  var ev_10199 = $std_core_hnd._evv_at(0);
  return ev_10199.hnd._fun_current_input(ev_10199.marker, ev_10199);
}
 
export function either(perr) /* forall<a> (perr : parse-error<a>) -> either<string,a> */  {
  if (perr._tag === 1) {
    return $std_core_types.Right(perr.result);
  }
  else {
    return $std_core_types.Left(perr.msg);
  }
}
 
export function maybe(perr) /* forall<a> (perr : parse-error<a>) -> maybe<a> */  {
  if (perr._tag === 1) {
    return $std_core_types.Just(perr.result);
  }
  else {
    return $std_core_types.Nothing;
  }
}
 
 
// monadic lift
export function _mlift_parse_10167(msg, _y_x10072) /* forall<h,a,e> (msg : string, sslice/sslice) -> <local<h>|e> parse-error<a> */  {
  return ParseError(msg, _y_x10072);
}
 
 
// monadic lift
export function _mlift_parse_10168(err1, _y_x10076) /* forall<h,a,e> (err1 : parse-error<a>, parse-error<a>) -> <local<h>|e> parse-error<a> */  {
  if (_y_x10076._tag === 1) {
    return ParseOk(_y_x10076.result, _y_x10076.rest);
  }
  else {
    return err1;
  }
}
 
 
// monadic lift
export function _mlift_parse_10169(err1, resume, wild__) /* forall<h,a,e> (err1 : parse-error<a>, resume : (bool) -> <local<h>|e> parse-error<a>, wild_ : ()) -> <local<h>|e> parse-error<a> */  {
   
  var x_10201 = resume(false);
   
  function next_10202(_y_x10076) /* (parse-error<1563>) -> <local<1557>|1564> parse-error<1563> */  {
    if (_y_x10076._tag === 1) {
      return ParseOk(_y_x10076.result, _y_x10076.rest);
    }
    else {
      return err1;
    }
  }
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(next_10202);
  }
  else {
    return next_10202(x_10201);
  }
}
 
 
// monadic lift
export function _mlift_parse_10170(input, resume, save, _y_x10074) /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice, parse-error<a>) -> <local<h>|e> parse-error<a> */  {
  if (_y_x10074._tag === 1) {
    return ParseOk(_y_x10074.result, _y_x10074.rest);
  }
  else {
     
    var x_10205 = ((input).value = save);
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(function(wild__ /* () */ ) {
        return _mlift_parse_10169(_y_x10074, resume, wild__);
      });
    }
    else {
      return _mlift_parse_10169(_y_x10074, resume, x_10205);
    }
  }
}
 
 
// monadic lift
export function _mlift_parse_10171(input, resume, save) /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice) -> <local<h>|e> parse-error<a> */  {
   
  var x_10207 = resume(true);
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(function(_y_x10074 /* parse-error<1563> */ ) {
      return _mlift_parse_10170(input, resume, save, _y_x10074);
    });
  }
  else {
    return _mlift_parse_10170(input, resume, save, x_10207);
  }
}
 
 
// monadic lift
export function _mlift_parse_10172(x, wild___0) /* forall<a,h,e> (x : a, wild_@0 : ()) -> <local<h>|e> maybe<a> */  {
  return $std_core_types.Just(x);
}
 
 
// monadic lift
export function _mlift_parse_10173(input, pred, inp) /* forall<a,h,e> (input : local-var<h,sslice/sslice>, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>, inp : sslice/sslice) -> <local<h>|e> maybe<a> */  {
  var _x2 = pred(inp);
  if (_x2 !== null) {
     
    var x_0_10209 = ((input).value = (_x2.value.snd));
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(function(wild___0 /* () */ ) {
        return $std_core_types.Just(_x2.value.fst);
      });
    }
    else {
      return $std_core_types.Just(_x2.value.fst);
    }
  }
  else {
    return $std_core_types.Nothing;
  }
}
 
 
// monadic lift
export function _mlift_parse_10174(x_0, _y_x10081) /* forall<h,a,e> (x@0 : a, sslice/sslice) -> <local<h>|e> parse-error<a> */  {
  return ParseOk(x_0, _y_x10081);
}
 
export function parse(input0, p) /* forall<a,e> (input0 : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */  {
  return function() {
     
    var loc = { value: input0 };
     
    var res = _handle_parse(_Hnd_parse(3, $std_core_hnd.clause_tail0(function() {
          return ((loc).value);
        }), function(m /* hnd/marker<<local<1557>|1564>,parse-error<1563>> */ , ___wildcard_x638__16 /* hnd/ev<parse> */ , x /* string */ ) {
          return $std_core_hnd.yield_to_final(m, function(___wildcard_x638__45 /* (hnd/resume-result<1369,parse-error<1563>>) -> <local<1557>|1564> parse-error<1563> */ ) {
               
              var x_0_10216 = ((loc).value);
              if ($std_core_hnd._yielding()) {
                return $std_core_hnd.yield_extend(function(_y_x10072 /* sslice/sslice */ ) {
                  return ParseError(x, _y_x10072);
                });
              }
              else {
                return ParseError(x, x_0_10216);
              }
            });
        }, function(m_0 /* hnd/marker<<local<1557>|1564>,parse-error<1563>> */ , ___wildcard_x672__16 /* hnd/ev<parse> */ ) {
          return $std_core_hnd.yield_to(m_0, function(k /* (hnd/resume-result<bool,parse-error<1563>>) -> <local<1557>|1564> parse-error<1563> */ ) {
              return $std_core_hnd.protect($std_core_types.Unit, function(___wildcard_x672__55 /* () */ , r /* (bool) -> <local<1557>|1564> parse-error<1563> */ ) {
                   
                  var x_1_10221 = ((loc).value);
                  if ($std_core_hnd._yielding()) {
                    return $std_core_hnd.yield_extend(function(save /* sslice/sslice */ ) {
                      return _mlift_parse_10171(loc, r, save);
                    });
                  }
                  else {
                    return _mlift_parse_10171(loc, r, x_1_10221);
                  }
                }, k);
            });
        }, $std_core_hnd.clause_tail1(function(pred /* (sslice/sslice) -> maybe<(1521, sslice/sslice)> */ ) {
           
          var x_2_10223 = ((loc).value);
          if ($std_core_hnd._yielding()) {
            return $std_core_hnd.yield_extend(function(inp /* sslice/sslice */ ) {
              return _mlift_parse_10173(loc, pred, inp);
            });
          }
          else {
            return _mlift_parse_10173(loc, pred, x_2_10223);
          }
        })), function(x_0_0 /* 1563 */ ) {
         
        var x_3_10225 = ((loc).value);
        if ($std_core_hnd._yielding()) {
          return $std_core_hnd.yield_extend(function(_y_x10081 /* sslice/sslice */ ) {
            return ParseOk(x_0_0, _y_x10081);
          });
        }
        else {
          return ParseOk(x_0_0, x_3_10225);
        }
      }, p);
    return $std_core_hnd.prompt_local_var(loc, res);
  }();
}
 
export function starts_with(s, p) /* forall<a> (s : string, p : () -> parse a) -> maybe<(a, sslice/sslice)> */  {
  var _x3 = parse($std_core_sslice.Sslice(s, 0, s.length), p);
  if (_x3._tag === 1) {
    return $std_core_types.Just($std_core_types.Tuple2(_x3.result, _x3.rest));
  }
  else {
    return $std_core_types.Nothing;
  }
}
 
 
// monadic lift
export function _lp__at_mlift_x_10175_bar__bar__rp_(p1, p2, _y_x10087) /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>, bool) -> <parse|e> a */  {
  if (_y_x10087) {
    return p1();
  }
  else {
    return p2();
  }
}
 
export function _lp__bar__bar__rp_(p1, p2) /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>) -> <parse|e> a */  {
   
  var x_10230 = $std_core_hnd._open_at0($std_core_hnd._evv_index(_tag_parse), function() {
       
      var ev_10233 = $std_core_hnd._evv_at(0);
      return ev_10233.hnd._ctl_pick(ev_10233.marker, ev_10233);
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(function(_y_x10087 /* bool */ ) {
      if (_y_x10087) {
        return p1();
      }
      else {
        return p2();
      }
    });
  }
  else {
    if (x_10230) {
      return p1();
    }
    else {
      return p2();
    }
  }
}
 
export function optional($default, p) /* forall<a,e> (default : a, p : parser<e,a>) -> <parse|e> a */  {
  return _lp__bar__bar__rp_(p, function() {
      return $default;
    });
}
 
 
// monadic lift
export function _mlift_choose_10176(p_0, pp, _y_x10096) /* forall<a,e> (p@0 : parser<e,a>, pp : list<parser<e,a>>, bool) -> <parse|e> a */  {
  if (_y_x10096) {
    return p_0();
  }
  else {
    return choose(pp);
  }
}
 
export function choose(ps) /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */  { tailcall: while(1)
{
  if (ps === null) {
    return $std_core_hnd._open_at1($std_core_hnd._evv_index(_tag_parse), function(msg /* string */ ) {
         
        var ev_10238 = $std_core_hnd._evv_at(0);
        var _x4 = ev_10238.hnd._ctl_fail;
        return _x4(ev_10238.marker, ev_10238, msg);
      }, "no further alternatives");
  }
  else if (ps !== null && ps.tail === null) {
    return ps.head();
  }
  else {
     
    var x_0_10241 = $std_core_hnd._open_at0($std_core_hnd._evv_index(_tag_parse), function() {
         
        var ev_0_10244 = $std_core_hnd._evv_at(0);
        return ev_0_10244.hnd._ctl_pick(ev_0_10244.marker, ev_0_10244);
      });
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(function(_y_x10096_0 /* bool */ ) {
        return _mlift_choose_10176(ps.head, ps.tail, _y_x10096_0);
      });
    }
    else {
      if (x_0_10241) {
        return ps.head();
      }
      else {
        {
          // tail call
          ps = ps.tail;
          continue tailcall;
        }
      }
    }
  }
}}
 
 
// monadic lift
export function _mlift_satisfy_fail_10177(msg, _y_x10101) /* forall<a> (msg : string, maybe<a>) -> parse a */  {
  if (_y_x10101 === null) {
     
    var ev_10246 = $std_core_hnd._evv_at(0);
    var _x5 = ev_10246.hnd._ctl_fail;
    return _x5(ev_10246.marker, ev_10246, msg);
  }
  else {
    return _y_x10101.value;
  }
}
 
export function satisfy_fail(msg, pred) /* forall<a> (msg : string, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse a */  {
   
  var ev_10252 = $std_core_hnd._evv_at(0);
   
  var _x6 = ev_10252.hnd._fun_satisfy;
  var x_10249 = _x6(ev_10252.marker, ev_10252, pred);
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(function(_y_x10101 /* maybe<1746> */ ) {
      return _mlift_satisfy_fail_10177(msg, _y_x10101);
    });
  }
  else {
    if (x_10249 === null) {
       
      var ev_0_10255 = $std_core_hnd._evv_at(0);
      var _x6 = ev_0_10255.hnd._ctl_fail;
      return _x6(ev_0_10255.marker, ev_0_10255, msg);
    }
    else {
      return x_10249.value;
    }
  }
}
 
 
// monadic lift
export function _mlift_eof_10178(_y_x10104) /* (maybe<()>) -> parse () */  {
  if (_y_x10104 === null) {
     
    var ev_10258 = $std_core_hnd._evv_at(0);
    var _x7 = ev_10258.hnd._ctl_fail;
    return _x7(ev_10258.marker, ev_10258, "expecting end-of-input");
  }
  else {
    return $std_core_types.Unit;
  }
}
 
export function eof() /* () -> parse () */  {
   
  var ev_10264 = $std_core_hnd._evv_at(0);
   
  var _x8 = ev_10264.hnd._fun_satisfy;
  var x_10261 = _x8(ev_10264.marker, ev_10264, function(s /* sslice/sslice */ ) {
       
      var _x9 = s.len;
      var b_10039 = $std_core_types._int_gt(_x9,0);
      if (b_10039) {
        return $std_core_types.Nothing;
      }
      else {
        return $std_core_types.Just($std_core_types.Tuple2($std_core_types.Unit, s));
      }
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(_mlift_eof_10178);
  }
  else {
    if (x_10261 === null) {
       
      var ev_0_10267 = $std_core_hnd._evv_at(0);
      var _x8 = ev_0_10267.hnd._ctl_fail;
      return _x8(ev_0_10267.marker, ev_0_10267, "expecting end-of-input");
    }
    else {
      return $std_core_types.Unit;
    }
  }
}
 
 
// monadic lift
export function _mlift_parse_eof_10179(x, wild__) /* forall<a,e> (x : a, wild_ : ()) -> <parse|e> a */  {
  return x;
}
 
 
// monadic lift
export function _mlift_parse_eof_10180(x) /* forall<a,e> (x : a) -> <parse|e> a */  {
   
  var x_0_10270 = $std_core_hnd._open_at0($std_core_hnd._evv_index(_tag_parse), eof);
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(function(wild__ /* () */ ) {
      return x;
    });
  }
  else {
    return x;
  }
}
 
export function parse_eof(input, p) /* forall<a,e> (input : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */  {
  return parse(input, function() {
       
      var x_10274 = p();
      if ($std_core_hnd._yielding()) {
        return $std_core_hnd.yield_extend(function(x_0 /* 1826 */ ) {
          return _mlift_parse_eof_10180(x_0);
        });
      }
      else {
        return _mlift_parse_eof_10180(x_10274);
      }
    });
}
 
export function char_is(msg, pred) /* (msg : string, pred : (char) -> bool) -> parse char */  {
  return satisfy_fail(msg, function(slice /* sslice/sslice */ ) {
      var _x9 = $std_core_sslice.next(slice);
      if (_x9 !== null) {
        if (pred(_x9.value.fst)){
          return $std_core_types.Just($std_core_types.Tuple2(_x9.value.fst, _x9.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
}
 
export function next_while0(slice, pred, acc) /* (slice : sslice/sslice, pred : (char) -> bool, acc : list<char>) -> (list<char>, sslice/sslice) */  { tailcall: while(1)
{
  var _x10 = $std_core_sslice.next(slice);
  if (_x10 !== null) {
    if (pred(_x10.value.fst)){
      {
        // tail call
        var _x11 = $std_core_types.Cons(_x10.value.fst, acc);
        slice = _x10.value.snd;
        acc = _x11;
        continue tailcall;
      }
    }
  }
  return $std_core_types.Tuple2($std_core_list._lift_reverse_append_4948($std_core_types.Nil, acc), slice);
}}
 
export function chars_are(msg, pred) /* (msg : string, pred : (char) -> bool) -> parse list<char> */  {
  return satisfy_fail(msg, function(slice /* sslice/sslice */ ) {
      var _x12 = next_while0(slice, pred, $std_core_types.Nil);
      if (_x12.fst === null) {
        return $std_core_types.Nothing;
      }
      else {
        return $std_core_types.Just($std_core_types.Tuple2(_x12.fst, _x12.snd));
      }
    });
}
 
export function next_match(slice, cs) /* (slice : sslice/sslice, cs : list<char>) -> maybe<sslice/sslice> */  { tailcall: while(1)
{
  if (cs === null) {
    return $std_core_types.Just(slice);
  }
  else {
    var _x13 = $std_core_sslice.next(slice);
    if (_x13 !== null) {
      if (((cs.head) === (_x13.value.fst))){
        {
          // tail call
          slice = _x13.value.snd;
          cs = cs.tail;
          continue tailcall;
        }
      }
    }
    return $std_core_types.Nothing;
  }
}}
 
export function pstring(s) /* (s : string) -> parse string */  {
  return satisfy_fail(s, function(slice /* sslice/sslice */ ) {
      var _x14 = next_match(slice, $std_core_string.list(s));
      if (_x14 !== null) {
        return $std_core_types.Just($std_core_types.Tuple2(s, _x14.value));
      }
      else {
        return $std_core_types.Nothing;
      }
    });
}
 
export function char(c) /* (c : char) -> parse char */  {
   
  var msg_10010 = $std_core_types._lp__plus__plus__rp_("\'", $std_core_types._lp__plus__plus__rp_($std_core_show.show_char(c), "\'"));
  return satisfy_fail(msg_10010, function(slice /* sslice/sslice */ ) {
      var _x15 = $std_core_sslice.next(slice);
      if (_x15 !== null) {
        if ((c === (_x15.value.fst))){
          return $std_core_types.Just($std_core_types.Tuple2(_x15.value.fst, _x15.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
}
 
export function no_digit() /* () -> parse char */  {
  return satisfy_fail("not a digit", function(slice /* sslice/sslice */ ) {
      var _x16 = $std_core_sslice.next(slice);
      if (_x16 !== null) {
         
        var b_10014 = (((_x16.value.fst) >= 0x0030)) ? ((_x16.value.fst) <= 0x0039) : false;
        var _x17 = (b_10014) ? false : true;
        if (_x17){
          return $std_core_types.Just($std_core_types.Tuple2(_x16.value.fst, _x16.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
}
 
 
// monadic lift
export function _mlift_digit_10181(c_0_0) /* (c@0@0 : char) -> parse int */  {
  return ($std_core_hnd._open_none2(function(c_1 /* char */ , d /* char */ ) {
       
      var x_10002 = c_1;
       
      var y_10003 = d;
      return (($std_core_types._int_sub(x_10002,y_10003)));
    }, c_0_0, 0x0030));
}
 
export function digit() /* () -> parse int */  {
   
  var x_10276 = satisfy_fail("digit", function(slice /* sslice/sslice */ ) {
      var _x18 = $std_core_sslice.next(slice);
      if (_x18 !== null) {
        var _x19 = (((_x18.value.fst) >= 0x0030)) ? ((_x18.value.fst) <= 0x0039) : false;
        if (_x19){
          return $std_core_types.Just($std_core_types.Tuple2(_x18.value.fst, _x18.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(_mlift_digit_10181);
  }
  else {
    return ($std_core_hnd._open_none2(function(c_1 /* char */ , d /* char */ ) {
         
        var x_10002 = c_1;
         
        var y_10003 = d;
        return (($std_core_types._int_sub(x_10002,y_10003)));
      }, x_10276, 0x0030));
  }
}
 
export function alpha() /* () -> parse char */  {
  return satisfy_fail("alpha", function(slice /* sslice/sslice */ ) {
      var _x18 = $std_core_sslice.next(slice);
      if (_x18 !== null) {
        if ($std_core_char.is_alpha(_x18.value.fst)){
          return $std_core_types.Just($std_core_types.Tuple2(_x18.value.fst, _x18.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
}
 
export function alpha_num() /* () -> parse char */  {
  return satisfy_fail("alpha-num", function(slice /* sslice/sslice */ ) {
      var _x19 = $std_core_sslice.next(slice);
      if (_x19 !== null) {
        if ($std_core_char.is_alpha_num(_x19.value.fst)){
          return $std_core_types.Just($std_core_types.Tuple2(_x19.value.fst, _x19.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
}
 
export function white() /* () -> parse char */  {
  return satisfy_fail("", function(slice /* sslice/sslice */ ) {
      var _x20 = $std_core_sslice.next(slice);
      if (_x20 !== null) {
        if ($std_core_char.is_white(_x20.value.fst)){
          return $std_core_types.Just($std_core_types.Tuple2(_x20.value.fst, _x20.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
}
 
export function whitespace() /* () -> parse string */  {
   
  var x_10279 = satisfy_fail("", function(slice /* sslice/sslice */ ) {
      var _x21 = next_while0(slice, $std_core_char.is_white, $std_core_types.Nil);
      if (_x21.fst === null) {
        return $std_core_types.Nothing;
      }
      else {
        return $std_core_types.Just($std_core_types.Tuple2(_x21.fst, _x21.snd));
      }
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend($std_core_string.listchar_fs_string);
  }
  else {
    return $std_core_string.listchar_fs_string(x_10279);
  }
}
 
export function whitespace0() /* () -> parse string */  {
  return _lp__bar__bar__rp_(function() {
       
      var x_10281 = satisfy_fail("", function(slice /* sslice/sslice */ ) {
          var _x21 = next_while0(slice, $std_core_char.is_white, $std_core_types.Nil);
          if (_x21.fst === null) {
            return $std_core_types.Nothing;
          }
          else {
            return $std_core_types.Just($std_core_types.Tuple2(_x21.fst, _x21.snd));
          }
        });
      if ($std_core_hnd._yielding()) {
        return $std_core_hnd.yield_extend($std_core_string.listchar_fs_string);
      }
      else {
        return $std_core_string.listchar_fs_string(x_10281);
      }
    }, function() {
      return "";
    });
}
 
export function digits() /* () -> parse string */  {
   
  var x_10283 = satisfy_fail("digit", function(slice /* sslice/sslice */ ) {
      var _x21 = next_while0(slice, $std_core_char.is_digit, $std_core_types.Nil);
      if (_x21.fst === null) {
        return $std_core_types.Nothing;
      }
      else {
        return $std_core_types.Just($std_core_types.Tuple2(_x21.fst, _x21.snd));
      }
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend($std_core_string.listchar_fs_string);
  }
  else {
    return $std_core_string.listchar_fs_string(x_10283);
  }
}
 
export function digits0() /* () -> parse string */  {
  return _lp__bar__bar__rp_(function() {
       
      var x_10285 = satisfy_fail("digit", function(slice /* sslice/sslice */ ) {
          var _x21 = next_while0(slice, $std_core_char.is_digit, $std_core_types.Nil);
          if (_x21.fst === null) {
            return $std_core_types.Nothing;
          }
          else {
            return $std_core_types.Just($std_core_types.Tuple2(_x21.fst, _x21.snd));
          }
        });
      if ($std_core_hnd._yielding()) {
        return $std_core_hnd.yield_extend($std_core_string.listchar_fs_string);
      }
      else {
        return $std_core_string.listchar_fs_string(x_10285);
      }
    }, function() {
      return "0";
    });
}
 
 
// monadic lift
export function _mlift_pnat_10182(_y_x10125) /* (list<char>) -> parse int */  {
   
  var _x_x1_0_10165 = $std_core_string.listchar_fs_string(_y_x10125);
   
  var _x_x1_10163 = $std_core_hnd._open_none2(function(s /* string */ , hex /* ? bool */ ) {
      var _x21 = (hex !== undefined) ? hex : false;
      return $std_core_int.xparse(s, _x21);
    }, _x_x1_0_10165);
  return $std_core_hnd._open_none2(function(m /* maybe<int> */ , nothing /* int */ ) {
      return (m === null) ? nothing : m.value;
    }, _x_x1_10163, 0);
}
 
export function pnat() /* () -> parse int */  {
   
  var x_10287 = satisfy_fail("digit", function(slice /* sslice/sslice */ ) {
      var _x21 = next_while0(slice, $std_core_char.is_digit, $std_core_types.Nil);
      if (_x21.fst === null) {
        return $std_core_types.Nothing;
      }
      else {
        return $std_core_types.Just($std_core_types.Tuple2(_x21.fst, _x21.snd));
      }
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(_mlift_pnat_10182);
  }
  else {
     
    var _x_x1_0_10165 = $std_core_string.listchar_fs_string(x_10287);
     
    var _x_x1_10163 = $std_core_hnd._open_none2(function(s /* string */ , hex /* ? bool */ ) {
        var _x21 = (hex !== undefined) ? hex : false;
        return $std_core_int.xparse(s, _x21);
      }, _x_x1_0_10165);
    return $std_core_hnd._open_none2(function(m /* maybe<int> */ , nothing /* int */ ) {
        return (m === null) ? nothing : m.value;
      }, _x_x1_10163, 0);
  }
}
 
export function none_of(chars) /* (chars : string) -> parse char */  {
  return satisfy_fail("", function(slice /* sslice/sslice */ ) {
      var _x21 = $std_core_sslice.next(slice);
      if (_x21 !== null) {
         
        var b_10040 = ((chars).indexOf(($std_core_string.char_fs_string(_x21.value.fst))) >= 0);
        var _x22 = (b_10040) ? false : true;
        if (_x22){
          return $std_core_types.Just($std_core_types.Tuple2(_x21.value.fst, _x21.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
}
 
export function none_of_many1(chars) /* (chars : string) -> parse string */  {
   
  var x_10290 = satisfy_fail("", function(slice /* sslice/sslice */ ) {
      var _x23 = next_while0(slice, function(c /* char */ ) {
           
          var b_10043 = ((chars).indexOf(($std_core_string.char_fs_string(c))) >= 0);
          return (b_10043) ? false : true;
        }, $std_core_types.Nil);
      if (_x23.fst === null) {
        return $std_core_types.Nothing;
      }
      else {
        return $std_core_types.Just($std_core_types.Tuple2(_x23.fst, _x23.snd));
      }
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend($std_core_string.listchar_fs_string);
  }
  else {
    return $std_core_string.listchar_fs_string(x_10290);
  }
}
 
export function one_of(chars) /* (chars : string) -> parse char */  {
  return satisfy_fail(chars, function(slice /* sslice/sslice */ ) {
      var _x23 = $std_core_sslice.next(slice);
      if (_x23 !== null) {
        if (((chars).indexOf(($std_core_string.char_fs_string(_x23.value.fst))) >= 0)){
          return $std_core_types.Just($std_core_types.Tuple2(_x23.value.fst, _x23.value.snd));
        }
      }
      return $std_core_types.Nothing;
    });
}
 
 
// monadic lift
export function _mlift_many_acc_10183(acc, p, x) /* forall<a,e> (acc : list<a>, p : parser<e,a>, x : a) -> <parse|e> list<a> */  {
  return many_acc(p, $std_core_types.Cons(x, acc));
}
 
export function many_acc(p_0, acc_0) /* forall<a,e> (p : parser<e,a>, acc : list<a>) -> <parse|e> list<a> */  {
  return _lp__bar__bar__rp_(function() {
       
      var x_0_10292 = p_0();
      if ($std_core_hnd._yielding()) {
        return $std_core_hnd.yield_extend(function(x_1 /* 2462 */ ) {
          return _mlift_many_acc_10183(acc_0, p_0, x_1);
        });
      }
      else {
        return _mlift_many_acc_10183(acc_0, p_0, x_0_10292);
      }
    }, function() {
      return $std_core_list._lift_reverse_append_4948($std_core_types.Nil, acc_0);
    });
}
 
 
// The `many` combinator parses `p` until it fails, returning a list of the results of `p`.
// The `many` combinator is non-divergent only when `p` always consumes input or `fail`s.
export function many(p) /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */  {
  return many_acc(p, $std_core_types.Nil);
}
 
 
// monadic lift
export function _mlift_many1_10184(_y_x10133, _y_x10134) /* forall<a,e> (a, list<a>) -> <parse|e> list<a> */  {
  return $std_core_types.Cons(_y_x10133, _y_x10134);
}
 
 
// monadic lift
export function _mlift_many1_10185(p, _y_x10133) /* forall<a,e> (p : parser<e,a>, a) -> <parse|e> list<a> */  {
   
  var x_10294 = many_acc(p, $std_core_types.Nil);
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(function(_y_x10134 /* list<2518> */ ) {
      return $std_core_types.Cons(_y_x10133, _y_x10134);
    });
  }
  else {
    return $std_core_types.Cons(_y_x10133, x_10294);
  }
}
 
 
// The `many1` combinator parses `p` at least once an then until it fails, returning a list of the results of `p`.
// The `many1` combinator is non-divergent only when `p` always consumes input or `fail`s.
export function many1(p) /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */  {
   
  var x_10298 = p();
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(function(_y_x10133 /* 2518 */ ) {
      return _mlift_many1_10185(p, _y_x10133);
    });
  }
  else {
     
    var x_0_10301 = many_acc(p, $std_core_types.Nil);
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(function(_y_x10134 /* list<2518> */ ) {
        return $std_core_types.Cons(x_10298, _y_x10134);
      });
    }
    else {
      return $std_core_types.Cons(x_10298, x_0_10301);
    }
  }
}
 
 
// monadic lift
export function _mlift_count_acc_10186(acc, n, p, x) /* forall<a,e> (acc : list<a>, n : int, p : parser<e,a>, x : a) -> <parse|e> list<a> */  {
  return count_acc($std_core_types._int_sub(n,1), $std_core_types.Cons(x, acc), p);
}
 
export function count_acc(n_0, acc_0, p_0) /* forall<a,e> (n : int, acc : list<a>, p : parser<e,a>) -> <parse|e> list<a> */  { tailcall: while(1)
{
  if ($std_core_types._int_le(n_0,0)) {
    return $std_core_list._lift_reverse_append_4948($std_core_types.Nil, acc_0);
  }
  else {
     
    var x_0_10306 = p_0();
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(function(x_1 /* 2586 */ ) {
        return _mlift_count_acc_10186(acc_0, n_0, p_0, x_1);
      });
    }
    else {
      {
        // tail call
        var _x24 = $std_core_types._int_sub(n_0,1);
        var _x25 = $std_core_types.Cons(x_0_10306, acc_0);
        n_0 = _x24;
        acc_0 = _x25;
        continue tailcall;
      }
    }
  }
}}
 
export function count(n, p) /* forall<a,e> (n : int, p : parser<e,a>) -> <parse|e> list<a> */  {
  return count_acc(n, $std_core_types.Nil, p);
}
 
export function one_of_or(chars, $default) /* (chars : string, default : char) -> parse char */  {
  return _lp__bar__bar__rp_(function() {
      return one_of(chars);
    }, function() {
      return $default;
    });
}
 
 
// monadic lift
export function _mlift_sign_10187(c_0) /* (c@0 : char) -> parse bool */  {
  return (c_0 === 0x002D);
}
 
export function sign() /* () -> parse bool */  {
   
  var x_10309 = _lp__bar__bar__rp_(function() {
      return satisfy_fail("+-", function(slice /* sslice/sslice */ ) {
          var _x26 = $std_core_sslice.next(slice);
          if (_x26 !== null) {
            if (((("+-")).indexOf(($std_core_string.char_fs_string(_x26.value.fst))) >= 0)){
              return $std_core_types.Just($std_core_types.Tuple2(_x26.value.fst, _x26.value.snd));
            }
          }
          return $std_core_types.Nothing;
        });
    }, function() {
      return 0x002B;
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(_mlift_sign_10187);
  }
  else {
    return (x_10309 === 0x002D);
  }
}
 
 
// monadic lift
export function _mlift_pint_10188(neg, i) /* (neg : bool, i : int) -> parse int */  {
  return (neg) ? $std_core_types._int_negate(i) : i;
}
 
 
// monadic lift
export function _mlift_pint_10189(c_0) /* (c@0 : char) -> parse int */  {
   
  var neg = (c_0 === 0x002D);
   
  var x_10312 = pnat();
   
  function next_10313(i) /* (int) -> parse int */  {
    return (neg) ? $std_core_types._int_negate(i) : i;
  }
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(next_10313);
  }
  else {
    return next_10313(x_10312);
  }
}
 
export function pint() /* () -> parse int */  {
   
  var x_10316 = _lp__bar__bar__rp_(function() {
      return satisfy_fail("+-", function(slice /* sslice/sslice */ ) {
          var _x26 = $std_core_sslice.next(slice);
          if (_x26 !== null) {
            if (((("+-")).indexOf(($std_core_string.char_fs_string(_x26.value.fst))) >= 0)){
              return $std_core_types.Just($std_core_types.Tuple2(_x26.value.fst, _x26.value.snd));
            }
          }
          return $std_core_types.Nothing;
        });
    }, function() {
      return 0x002B;
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend(_mlift_pint_10189);
  }
  else {
     
    var neg = (x_10316 === 0x002D);
     
    var x_0_10319 = pnat();
    if ($std_core_hnd._yielding()) {
      return $std_core_hnd.yield_extend(function(i /* int */ ) {
        return (neg) ? $std_core_types._int_negate(i) : i;
      });
    }
    else {
      return (neg) ? $std_core_types._int_negate(x_0_10319) : x_0_10319;
    }
  }
}
 
export function hex_digits() /* () -> parse string */  {
   
  var x_10324 = satisfy_fail("digit", function(slice /* sslice/sslice */ ) {
      var _x26 = next_while0(slice, $std_core_char.is_hex_digit, $std_core_types.Nil);
      if (_x26.fst === null) {
        return $std_core_types.Nothing;
      }
      else {
        return $std_core_types.Just($std_core_types.Tuple2(_x26.fst, _x26.snd));
      }
    });
  if ($std_core_hnd._yielding()) {
    return $std_core_hnd.yield_extend($std_core_string.listchar_fs_string);
  }
  else {
    return $std_core_string.listchar_fs_string(x_10324);
  }
}