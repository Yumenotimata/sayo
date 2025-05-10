cmake_minimum_required(VERSION 3.14)
project(sayo-test)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
    sayo-test
    term-test.cpp
)

target_link_libraries(
    sayo-test
    GTest::gtest_main
    sayo-lib
)

target_include_directories(
    sayo-test
    PRIVATE ../inc
)

add_test(
    NAME sayo-test
    COMMAND sayo-test
)

enable_testing()