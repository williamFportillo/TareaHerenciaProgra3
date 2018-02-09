#include <iostream>
#include "Fecha.h"
using namespace std;

Fecha::Fecha(): ano(0), mes(0), dia(0) {

}

Fecha::Fecha(int a, int m , int d) {
    ano = a;
    mes = m;
    dia = d;
}

void Fecha::setAno(int a) {
    ano = a;
}

void Fecha::setMes(int m) {
    if(m<0 || m >12){
        m=1;
        mes = m;
    } else{
        mes = m;
    }
}

void Fecha::setDia(int d) {
    dia = d;
}

int Fecha::getAno() {
    return ano;
}

int Fecha::getMes() {
    return mes;
}

int Fecha::getDia() {
    return dia;
}

void Fecha::mostrarFecha() {
    cout << getAno()<<" // "<< getMes()<<" // "<<getDia()<<endl;
}
