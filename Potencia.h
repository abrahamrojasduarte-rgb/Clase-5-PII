//
// Created by ESCINF on 05/03/2026.
//

#ifndef CLASE_5_POTENCIA_H
#define CLASE_5_POTENCIA_H
#include "IOperacion.h"


class Potencia : public IOperacion{
public:
    double calcular(double a, double b) const override;
};


#endif //CLASE_5_POTENCIA_H