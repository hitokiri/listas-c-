cmake_minimum_required(VERSION 3.2)
project(Stack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Stack ${SOURCE_FILES} Nodo.h Persona.h Pila.h Trabajador.h Fecha.h)