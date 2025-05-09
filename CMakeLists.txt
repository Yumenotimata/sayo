cmake_minimum_required(VERSION 3.14)
project(sayo)

set(CMAKE_CXX_STANDARD 17)

add_library(
    sayo-lib
    src/term.cpp
)

add_executable(
    sayo
    src/main.cpp
)

target_include_directories(
    sayo
    PRIVATE inc
)

target_include_directories(
    sayo-lib
    PRIVATE inc
)

target_link_libraries(
    sayo
    sayo-lib
)

enable_testing()
add_subdirectory(test)