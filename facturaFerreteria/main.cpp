#include <iostream>
#include "Factura.h"
using namespace std;

int main() {
    string a;
    string b;
    float c,p;
    Factura f( a, b, c, p );
    cout << "---------- Ferreteria -------------"<<endl;
    cout << "Nombre de la pieza: ";
    cin >> a;
    cout <<endl<<"Descripcion de la pieza: ";
    cin >>b;
    cout <<endl<<"Cantidad: ";
    cin >> c;
    f.setCant(c);
    cout <<endl<<"Precio: ";
    cin >> p;
    f.setPrecio(p);

    cout <<endl<<"---------------Factura------------------"<<endl;
    cout <<"Nombre de la pieza: "<<a;

    cout <<endl<< "Descripcion: "<<b;

    cout <<endl<< "Cantidad: "<<f.getCant();
    cout <<endl<< "Precio: "<<f.getPrecio();
    cout <<endl<<"Total: "<<f.ObtenermontoFactura()<< " .Lps";

    return 0;
}