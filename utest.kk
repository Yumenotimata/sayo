module utest

import std/core/list

pub effect test<e>
  fun test-fail(expected : string, actual : string) : ()

pub effect test-case<e>
  fun test-case-fail(expected : string, actual : string) : ()

pub effect test-suite<e>
  fun test-suite-fail(suite-name : string, expected : string, actual : string) : ()

pub type test-failure<e, a>
  TestFailure { expected : e; actual : a; msg : string }

pub fun assert-eq(actual : () -> <div> a, expected : () -> <div> a, ?(==) : (a, a) -> bool, ?show : a -> string) : <div, test<e>> ()
  if expected() != actual() then
    test-fail(expected().show(), actual().show())
  else
    ()

pub fun test(test-name : string, tests : () -> <div, test<e>> ()) : <div, test-case<e>> ()
  handle tests
    fun test-fail(expected, actual)
      test-case-fail(expected, actual)

pub fun suite(suite-name : string, test-cases : () -> <div, test-case<e>> ()) : <div, test-suite<e>> ()
  handle test-cases
    fun test-case-fail(expected, actual)
      test-suite-fail(suite-name, expected, actual)

pub fun run-utest(test-suites : () -> <div, test-suite<e>> ()): <div, console> ()
  var failures := []
  handle test-suites
    fun test-suite-fail(suite-name, expected, actual)
      failures := failures.append([(suite-name, expected, actual)])
  
  println("Running test...\n")

  if !failures.is-empty() then
    failures.map(fn((suite-name, expected, actual))
      println("failed at " ++ suite-name.show())
      println("  expected " ++ expected ++ ", but got " ++ actual)
    )
    return ()
  else
    println("All tests passed!")