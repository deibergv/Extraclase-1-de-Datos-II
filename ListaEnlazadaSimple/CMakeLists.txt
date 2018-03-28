cmake_minimum_required(VERSION 3.9)
project(ListaEnlazadaSimple)

set(CMAKE_CXX_STANDARD 11)

add_executable(ListaEnlazadaSimple main.cpp List.cpp List.h Node.cpp Node.h)