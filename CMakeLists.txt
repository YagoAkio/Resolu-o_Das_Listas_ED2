cmake_minimum_required(VERSION 3.28)
project(Resolu_o_Das_Listas_ED2)

set(CMAKE_CXX_STANDARD 14)

include_directories(ListaGen/Exercicio-1)

add_executable(Resolu_o_Das_Listas_ED2
        ListaGen/Exercicio-1/Exercicio1.cpp
        ListaGen/Exercicio-1/Exercicio1.h)
