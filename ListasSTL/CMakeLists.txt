cmake_minimum_required(VERSION 3.2)
project(ListasSTL)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ListasSTL ${SOURCE_FILES}  Lista.h Nodo.h Trabajador.h Fecha.h Persona.h)