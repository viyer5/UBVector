cmake_minimum_required(VERSION 3.5)
project(UBVectorProject2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp UBVector.cpp)
add_executable(UBVectorProject2 ${SOURCE_FILES} UBVector.cpp)