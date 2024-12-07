cmake_minimum_required(VERSION 3.20...3.30)
project(MyProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Program_Bin main.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(Tests test/Tests.cpp)
target_link_libraries(Tests GTest::gtest GTest::gtest_main)

include(GoogleTest)