#include <iostream>
#include "Paquete.h"
#include "PaqueteDosDias.h"

using namespace std;

PaqueteDosDias::PaqueteDosDias(): cuotaFija(0) {}
PaqueteDosDias::PaqueteDosDias(int _Cuota) : Paquete() {
    cuotaFija=_Cuota;
}

void PaqueteDosDias::setCuotaFija(int _cuota) {
    cuotaFija=_cuota;
}


double PaqueteDosDias::calcularCosto() {
     Paquete::calcularCosto();
    return total= total+cuotaFija;

}

