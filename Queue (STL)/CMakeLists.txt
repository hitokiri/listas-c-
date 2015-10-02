cmake_minimum_required(VERSION 3.2)
project(Queue)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Queue ${SOURCE_FILES} Nodo.h Persona.h Cola.h Trabajador.h Fecha.h)