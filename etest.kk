
module etest

import std/core/list

pub effect test<e>
  fun append(f: () -> e bool): ()

pub effect test-case<e>
  fun test-case-append(f: () -> e bool): ()

pub fun assert-eq(f: () -> e a, g: () -> e a, ?(==): (a, a) -> bool): test<e> ()
  append(fn() f() == g())

pub fun test(name: string, tests: () -> test<e> ()): <test-case<e>> ()
  handle tests
    fun append(f)
      test-case-append(f)

pub fun run-test(cases: () -> <test-case<_e>> ()): _e ()
  handle cases
    fun test-case-append(f)
      if f() then
        println("success")
        return ()
      else
        return ()
        // println("fail")


// pub effect etest
//   fun test-append(t: () -> e bool): ()

// pub effect etest-case
//   fun test-case-append(test-case-name: string, test: () -> e bool): ()

// pub fun assert-eq(actual: () -> e a, expected: () -> e a, ?(==): (a, a) -> bool, ?show: a -> string): <etest> ()
//   test-append(fn()
//     actual() == expected()  
//   )

// pub fun do-test(test-case-name: string, tests: () -> <etest>)
//   handle tests
//     fun test-append(t)
//       return ()
      // test-case-append(test-case-name, t)

// pub fun run-test(cases: () -> <test-case> ())
//   handle cases
//     fun test-case-append(test-case-name, t)
//       if t() then
//         println("test success")
//       else
//         println("test failed")