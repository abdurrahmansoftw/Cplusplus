cmake_minimum_required(VERSION 3.24)
project(FunctionFile)

set(CMAKE_CXX_STANDARD 17)

add_executable(FunctionFile main.cpp utils/greet.cpp)
