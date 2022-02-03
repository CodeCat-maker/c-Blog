cmake_minimum_required(VERSION 3.21)

project(test_cmake)

set( CMAKE_CXX_FLAGS "-std=c++11" )

add_executable(Demo main.cc)