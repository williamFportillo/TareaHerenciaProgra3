#include <iostream>
#include "Cuenta.h"
using namespace std;
int main() {
    int opc=0;
    int opc2=0;
float s,i;
    cout << "Ingrese saldo: ";
    cin >> s;
    if(s < 0){
        exit(0);
    }
Cuenta c(s);
    cout << "----- Cuenta Bancaria -----" << endl;
    cout << "1. Ver estado de la cuenta." << endl;
    cout << "2. Retirar saldo." << endl;
    cout << "3. Abonar saldo." << endl;
    cout << "------------------  -1 Para salir."<<endl;
cout << "ingrese una opcion: ";

    while(opc!= -1) {
        cin >> opc;

        switch (opc){

            case 1 :
                cout << "-------- ver estado de la cuenta ----------"<<endl;
                cout << "Saldo actual es: "<<c.getobtenerSaldo()<< " .Lps"<<endl;
                break;
            case 2:
                cout << "----------Retirar Saldo------------"<<endl;
                cout << "Cantidad A RETIRAR: ";
                cin >> i;
                c.setmiembroCargar(i);
                break;
            case 3:
                cout << "------------------ Abonar Saldo ----------------------"<<endl;
                cout << "Cantidad a abonar: ";
                cin >> i;
                c.setmiembroAbonar(i);
                break;
        }
        cout << "----- Cuenta Bancaria -----" << endl;
        cout << "1. Ver estado de la cuenta." << endl;
        cout << "2. Retirar saldo." << endl;
        cout << "3. Abonar saldo." << endl;
        cout << "------------------  -1 Para salir."<<endl;

    }
    return 0;
}