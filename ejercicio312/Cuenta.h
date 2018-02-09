//
// Created by WilliamPC on 7/2/2018.
//

#ifndef EJERCICIO312_CUENTA_H
#define EJERCICIO312_CUENTA_H
class Cuenta{
private:
    float saldo;
public:
    Cuenta();
    Cuenta(float);
    void setSaldo(float);
    void  setmiembroAbonar(float);
    void  setmiembroCargar(float);
    float getobtenerSaldo();


};
#endif //EJERCICIO312_CUENTA_H
