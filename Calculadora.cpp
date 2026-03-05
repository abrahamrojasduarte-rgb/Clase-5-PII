//
// Created by ESCINF on 05/03/2026.
//

#include "Calculadora.h"

void Calculadora::menu() {
    int opcion = 0;
    double a,b;
    cout<<"1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n 5. Potencia \n 6. Raiz"<<endl;
    cin>>opcion;

    switch (opcion) {
        case 1:
            cout<<"Ingresa los valores que quiere usar"<<endl;
            cin>>a;
            cin.ignore();
            cin>>b;
            suma->calcular(a,b);
    }
}

Calculadora::Calculadora() {
    this-> OP = nullptr;
}
void Calculadora::setOperacion(IOperacion* op) {
    this-> OP = op;
}

double Calculadora::ejecutar(double a, double b) const {
    if (this-> OP == nullptr) {
        return 0.0;
    }
    return this-> OP -> calcular(a, b);
}
