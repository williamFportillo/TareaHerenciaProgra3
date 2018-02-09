#include <iostream>
#include "Fecha.h"
using namespace std;
int main() {
int a,m,d;
    Fecha f( a,m, d);
    cout << "Ingrese el año: ";
    cin >> a;
    f.setAno(a);
    cout << endl<<"Ingrese el mes: ";
    cin >> m;
    f.setMes(m);
    cout <<endl<< "Ingrese el dia: ";
    cin >> d;
    f.setDia(d);
    cout <<endl << "La fecha es: ";
    f.mostrarFecha();

    return 0;
}