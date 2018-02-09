cmake_minimum_required(VERSION 3.8)
project(ejercicio312)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Cuenta.h Cuenta.cpp)
add_executable(ejercicio312 ${SOURCE_FILES})