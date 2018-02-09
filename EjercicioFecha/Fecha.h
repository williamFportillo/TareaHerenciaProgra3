//
// Created by WilliamPC on 7/2/2018.
//

#ifndef EJERCICIOFECHA_FECHA_H
#define EJERCICIOFECHA_FECHA_H
class Fecha{
private:
    int ano;
    int mes;
    int dia;
public:
    Fecha();
    Fecha(int, int, int);
    void setAno(int);
    void setMes(int);
    void setDia(int);
    int getAno();
    int getMes();
    int getDia();
    void mostrarFecha();
};
#endif //EJERCICIOFECHA_FECHA_H
