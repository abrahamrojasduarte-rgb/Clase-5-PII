//
// Created by ESCINF on 05/03/2026.
//

#ifndef CLASE_5_CALCULADORA_H
#define CLASE_5_CALCULADORA_H
#include <iostream>
#include "IOperacion.h"
using namespace std;

class Calculadora {
private:
    const IOperacion* OP;
public:
    void menu();
    Calculadora();
    void setOperacion(IOperacion*);
    double ejecutar(double a, double b)const ;

};


#endif //CLASE_5_CALCULADORA_H