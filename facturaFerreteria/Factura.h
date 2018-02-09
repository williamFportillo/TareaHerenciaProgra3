//
// Created by WilliamPC on 7/2/2018.
//
#include <iostream>
using namespace std;
#ifndef FACTURAFERRETERIA_FACTURA_H
#define FACTURAFERRETERIA_FACTURA_H

class Factura{
private:
    string npieza;
    string descripcion;
    float cant;
    float precio;
    int total;
public:
    Factura();
    Factura(string, string, float, float);
    void setNpieza(string);
    void setdescripcion(string);
    void setCant(float);
    void setPrecio(float);
    void getNpieza();
    void getDescripcion();
    float getCant();
    float getPrecio();
    int ObtenermontoFactura();

};
#endif //FACTURAFERRETERIA_FACTURA_H
