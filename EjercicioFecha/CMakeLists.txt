cmake_minimum_required(VERSION 3.8)
project(EjercicioFecha)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Fecha.cpp Fecha.h)
add_executable(EjercicioFecha ${SOURCE_FILES})