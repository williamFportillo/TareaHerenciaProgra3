#include "Factura.h"
#include <iostream>
using namespace std;

Factura::Factura() {
npieza="";
    descripcion="";
    cant=0;
    precio=0;
    total = 0;
}

Factura::Factura(string n, string d, float c, float p) {
npieza=n;
    descripcion=d;
    cant = c;
    precio = p;
}


void Factura::setNpieza(string np) {
    npieza= np;
}

void Factura::setdescripcion(string des) {
    descripcion = des;
}

void Factura::setCant(float c) {
    cant = c;
}

void Factura::setPrecio(float pr) {
    precio = pr;
}





float Factura::getCant() {
    return cant;
}

float Factura::getPrecio() {
    return precio;

}

int Factura::ObtenermontoFactura() {
    if(cant<0){
        cant=0;
    }
    else{

    }

    if (precio<0){
        precio=0;
    }else{

    }

return total = int(cant*precio);

}

