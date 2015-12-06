cmake_minimum_required(VERSION 3.2)
project(tallerArboles)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(tallerArboles ${SOURCE_FILES}  Nodo.h  AVL.h)