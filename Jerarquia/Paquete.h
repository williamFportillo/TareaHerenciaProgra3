//
// Created by WilliamPC on 7/2/2018.
//
#include <iostream>
using  namespace std;
#ifndef JERARQUIA_PAQUETE_H
#define JERARQUIA_PAQUETE_H
class Paquete{
protected:
string nombre;
    string direccion;
    string ciudad;
    string estado;
    string codigoPostal;
    int kg;
    int ck;
    double total;
public:
    Paquete();
    Paquete(string,string,string,string,string,int, int);
    void setNombre(string);
    void setDireccion(string);
    void setCiudad(string);
    void setEstado(string);
    void setCodigoPostal(string);
    void setKilogramo(int);
    void setCosto(int);
    int getKg();
    int getCk();

    virtual double calcularCosto();
};
#endif //JERARQUIA_PAQUETE_H
