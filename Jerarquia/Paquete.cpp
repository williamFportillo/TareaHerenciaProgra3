#include <iostream>
#include "Paquete.h"
using  namespace std;

Paquete::Paquete(): nombre(""), direccion(""), ciudad(""), estado(""), codigoPostal(""), kg(0), ck(0), total(0) {}
Paquete::Paquete(string n, string d, string c, string e, string codigo, int kilo, int cost) {
    nombre = n;
    direccion=d;
    ciudad = c;
    estado=e;
    codigoPostal=codigo;
    kg=kilo;
    ck=cost;
}

void Paquete::setNombre(string _n) {
nombre=_n;
}

void Paquete::setDireccion(string _d) {
    direccion=_d;
}
void Paquete::setCiudad(string _c) {
    ciudad=_c;
}
void Paquete::setEstado(string _estado) {
    estado=_estado;
}
void Paquete::setCodigoPostal(string _codigo) {
    codigoPostal=_codigo;
}
void Paquete::setKilogramo(int _kilo) {
    if(_kilo >= 0){
        kg=_kilo;
    }else{
        kg=0;
    }

}
void Paquete::setCosto(int _cost) {
    if(_cost>=0){
        ck=_cost;
    }
    else{
        ck = 0;
    }
}

int Paquete::getKg() {
    return kg;
}

int Paquete::getCk() {
    return ck;
}

double Paquete::calcularCosto() {
    return total = double(kg*ck);
}