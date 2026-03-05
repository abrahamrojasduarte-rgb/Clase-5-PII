//
// Created by ESCINF on 05/03/2026.
//

#ifndef CLASE_5_DIVISION_H
#define CLASE_5_DIVISION_H
#include "IOperacion.h"


class Division : public IOperacion{
public:
    double calcular(double a, double b) const override;
};


#endif //CLASE_5_DIVISION_H