//
// Created by WilliamPC on 8/2/2018.
//

#ifndef JERARQUIA_PAQUETENOCTURNO_H
#define JERARQUIA_PAQUETENOCTURNO_H
#include "Paquete.h"
#include <iostream>
using  namespace std;

class PaqueteNocturno : public Paquete{
protected:
    int cost;
public:
    PaqueteNocturno();
    PaqueteNocturno(int);
    double calcularCosto();
};
#endif //JERARQUIA_PAQUETENOCTURNO_H
