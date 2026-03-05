cmake_minimum_required(VERSION 4.1)
project(Clase_5)

set(CMAKE_CXX_STANDARD 20)

add_executable(Clase_5 main.cpp
        IOperacion.cpp
        IOperacion.h
        Calculadora.cpp
        Calculadora.h
        Suma.cpp
        Suma.h
        Resta.cpp
        Resta.h
        Multiplicacion.cpp
        Multiplicacion.h
        Division.cpp
        Division.h
        Potencia.cpp
        Potencia.h
        Raiz.cpp
        Raiz.h)
