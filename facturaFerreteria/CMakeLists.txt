cmake_minimum_required(VERSION 3.8)
project(facturaFerreteria)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Factura.h Factura.cpp)
add_executable(facturaFerreteria ${SOURCE_FILES})