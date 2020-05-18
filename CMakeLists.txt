# cmake_minimum_required(VERSION <specify CMake version here>)
project(Unit_test)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)




set(SOURCE_FILES main.cpp tasks.cpp tasks.h)
add_executable(Unit_test main.cpp tasks.cpp tasks.h tests/Class1.h tests/U_test.cpp)
target_link_libraries(Unit_test gtest gtest_main)
