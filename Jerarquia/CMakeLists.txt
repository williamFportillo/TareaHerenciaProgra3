cmake_minimum_required(VERSION 3.8)
project(Jerarquia)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Paquete.h Paquete.cpp PaqueteDosDias.h PaqueteDosDias.cpp PaqueteNocturno.h PaqueteNocturno.cpp)
add_executable(Jerarquia ${SOURCE_FILES})