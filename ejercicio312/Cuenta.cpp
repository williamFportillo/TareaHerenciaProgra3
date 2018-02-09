#include <iostream>
#include "Cuenta.h"

using namespace std;

Cuenta::Cuenta(): saldo(0) {

}

Cuenta::Cuenta(float s) {
    saldo = s;
    if(saldo >= 0){
        cout << "Cuenta Valida, Bienvenido....."<<endl;
    }
    else{
        cout << "El saldo Inicial es invalido"<<endl;
        saldo=0;
    }
}

void Cuenta::setmiembroAbonar(float i) {
    saldo= saldo+i;
    cout << "El saldo anterior es: "<<saldo-i<<" .Lps"<<endl;
    cout << "El saldo abonado es: "<<i<<" .Lps"<<endl;
    cout << "El nuevo saldo es: "<<saldo<<" .Lps"<<endl;
}

void Cuenta::setmiembroCargar(float c) {
if(c>saldo){
    cout << "El monto a cargar excede el saldo de la cuenta"<<endl;
}
    else{
    saldo = saldo - c;
    cout << "Monto anterior: "<<saldo+c<<" .Lps"<<endl;
    cout << "Monto descontado: "<<c<<" .Lps"<<endl;
    cout << "El saldo actual es: "<<saldo<<" .Lps"<<endl;
}
}

float Cuenta::getobtenerSaldo() {
    return saldo;
}



