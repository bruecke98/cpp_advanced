# CMake generated Testfile for 
# Source directory: C:/Users/bruec/cppp/04_advanced/04_advanced
# Build directory: C:/Users/bruec/cppp/04_advanced/04_advanced/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests "env" "CTEST_OUTPUT_ON_FAILURE=1" "./tests")
set_tests_properties(tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/bruec/cppp/04_advanced/04_advanced/CMakeLists.txt;43;add_test;C:/Users/bruec/cppp/04_advanced/04_advanced/CMakeLists.txt;0;")
subdirs("_deps/catch2-build")
