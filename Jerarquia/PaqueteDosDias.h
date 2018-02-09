//
// Created by WilliamPC on 8/2/2018.
//

#ifndef JERARQUIA_PAQUETEDOSDIAS_H
#define JERARQUIA_PAQUETEDOSDIAS_H

#include "Paquete.h"
#include <iostream>
using  namespace std;

class PaqueteDosDias : public Paquete{
protected:
    int cuotaFija;
public:
    PaqueteDosDias();
    PaqueteDosDias(int);
    void setCuotaFija(int);
    double calcularCosto();
};
#endif //JERARQUIA_PAQUETEDOSDIAS_H
