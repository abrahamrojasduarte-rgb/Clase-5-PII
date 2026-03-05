//
// Created by ESCINF on 05/03/2026.
//

#ifndef CLASE_5_IOPERACION_H
#define CLASE_5_IOPERACION_H
#include <cmath>

class IOperacion {
public:
    virtual double calcular(double a, double b)const =0;
    virtual ~IOperacion();
};


#endif //CLASE_5_IOPERACION_H