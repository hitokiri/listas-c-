cmake_minimum_required(VERSION 3.2)
project(Lista)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Lista ${SOURCE_FILES} Nodo.h  Lista.h  Fecha.h  Persona.h  Trabajador.h )
