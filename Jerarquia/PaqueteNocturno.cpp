#include <iostream>
#include "PaqueteNocturno.h"

using namespace std;

PaqueteNocturno::PaqueteNocturno(): cost(0) {}
PaqueteNocturno::PaqueteNocturno(int _cost): Paquete() {
    cost=_cost;
}

double PaqueteNocturno::calcularCosto() {
    Paquete::calcularCosto();

}