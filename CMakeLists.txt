cmake_minimum_required(VERSION 3.3)
project(Communicate)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Server.cpp Server.cpp Server.h Client.cpp Client.h)
add_executable(Communicate ${SOURCE_FILES})

