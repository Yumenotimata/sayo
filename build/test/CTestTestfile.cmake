# CMake generated Testfile for 
# Source directory: /workspaces/sayo/test
# Build directory: /workspaces/sayo/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(sayo-test "/workspaces/sayo/build/test/sayo-test")
set_tests_properties(sayo-test PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/sayo/test/CMakeLists.txt;32;add_test;/workspaces/sayo/test/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
