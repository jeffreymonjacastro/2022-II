#ifndef P2_CPP_FECHA_H
#define P2_CPP_FECHA_H

#include "Hora.h"

class Fecha{
    int dia;
    int mes;
    int anio;
public:
    Fecha(){}
    Fecha(int _dia, int _mes, int _anio): dia(_dia), mes(_mes), anio(_anio){}

    int getDia() const {
        return dia;
    }

    int getMes() const {
        return mes;
    }

    int getAnio() const {
        return anio;
    }

    ~Fecha(){cout<<"Fecha borrada"<<endl;}
};
#endif //P2_CPP_FECHA_H
