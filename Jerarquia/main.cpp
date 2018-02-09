#include <iostream>
#include "Paquete.h"
#include "PaqueteDosDias.h"
#include "PaqueteNocturno.h"
using namespace std;

int main() {
    string _nombre = "William";
    string _direccion= "Col. Andalucia";
    string _ciudad= "San Pedro Sula";
    string _estado="Pendiente";
    string _codigo= "521532";
    int cuotaFija;
    int kg;
    int ck;
    Paquete p(_nombre,_direccion,_ciudad,_estado,_codigo,kg,ck);
    PaqueteDosDias p2(cuotaFija);
    PaqueteNocturno p3(ck);
    int opc;
    cout << "----------Servicio de Envios-----------"<<endl;
    cout << "1. Paquete Normal"<<endl;
    cout << "2. Paquete DosDias"<<endl;
    cout <<"3. Paquete Nocturno"<<endl;
    cout <<"Ingrese una opcion:  ";
    cin >>opc;
    cout <<endl<<"Kilogramos del paquete: ";
    cin >> kg;
    p.setKilogramo(kg);
    cout <<endl<<"Costo por kilogramo: ";
    cin >>ck;
    p.setCosto(ck);
    switch (opc){
        case 1:
            cout <<endl<<"---------------Paquete Normal------------"<<endl;
            cout <<endl<<"Nombre: "<<_nombre;
            cout <<endl<<"Direccion: "<<_direccion;
            cout <<endl<<"Ciudad: "<<_ciudad;
            cout <<endl<<"Estado: "<<_estado;
            cout <<endl<<"Codigo Postal: "<<_codigo;
            cout <<endl<<"Kilogramos: "<<p.getKg();
            cout <<endl<<"Costo por kilogramos: "<<p.getCk();
            cout <<endl<<"Total: "<<p.calcularCosto();
            break;
        case 2:
            cout <<endl<<"Ingrese la cuota fija: ";
            cin >>cuotaFija;
            p2.setCuotaFija(cuotaFija);
            cout <<endl<<"---------------Paquete Dos Dias------------"<<endl;
            cout <<endl<<"Nombre: "<<_nombre;
            cout <<endl<<"Direccion: "<<_direccion;
            cout <<endl<<"Ciudad: "<<_ciudad;
            cout <<endl<<"Estado: "<<_estado;
            cout <<endl<<"Codigo Postal: "<<_codigo;
            cout <<endl<<"Kilogramos: "<<p.getKg();
            cout <<endl<<"Costo por kilogramos: "<<p.getCk();
            cout <<endl<<"Total: "<<p.calcularCosto()+cuotaFija;

            break;
        case 3:
            cout <<endl<<"---------------Paquete Nocturno------------"<<endl;
            cout <<"-------------------NOTA------------------"<<endl;
            cout <<"En el envio Nocturno el costo por Kilogramo aumenta en un 20%"<<endl;
            cout <<"Nombre: "<<_nombre;
            cout <<endl<<"Direccion: "<<_direccion;
            cout <<endl<<"Ciudad: "<<_ciudad;
            cout <<endl<<"Estado: "<<_estado;
            cout <<endl<<"Codigo Postal: "<<_codigo;
            cout <<endl<<"Kilogramos: "<<p.getKg();
            cout <<endl<<"Costo por kilogramos: "<<p.getCk();
            cout <<endl<<"Total: "<<p.calcularCosto() + (p.calcularCosto()*0.20);
            break;
    }
    return 0;
}