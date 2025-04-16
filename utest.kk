module utest

pub effect test
  fun test-fail(expected: string, actual: string): ()

pub effect test-case
  fun test-case-fail(expected: string, actual: string): ()

pub effect test-suite
  fun test-suite-fail(suite-name: string, expected: string, actual: string): ()

pub fun assert-eq(expected: a, actual: a, ?(==): (a, a) -> bool, ?show: a -> string) : <test> ()
  if expected != actual then
    test-fail(expected.show(), actual.show())
  else
    test-fail(expected.show(), actual.show())

pub fun test(test-name: string, tests: () -> <test> ()): <test-case> ()
  handle tests
    fun test-fail(expected, actual)
      test-case-fail(expected, actual)

pub fun suite(suite-name: string, cases: () -> <test-case> ()): <test-suite> ()
  handle cases
    fun test-case-fail(expected, actual)
      test-suite-fail("suitef", expected, actual)

pub fun run-test(suites: () -> <test-suite> ())
  var failures := []
  handle suites
    fun test-suite-fail(suite-name, expected, actual)
      failures := failures.append([suite-name])

  println("hello")

  failures.map(fn(expected)
    println(expected)
  )