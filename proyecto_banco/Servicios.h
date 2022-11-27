#ifndef P2_CPP_SERVICIOS_H
#define P2_CPP_SERVICIOS_H

#include <iostream>
#include "Tarjeta.h"

using namespace std;

class Servicios {
protected:
    Tarjeta* tarjeta;
    vector<string> descripcion;
    vector<double> montos;
    vector<string> fechas;
    vector<Servicios*> cuentas_destino;
public:
    Servicios(){}
    Servicios(long int b, string f){
        tarjeta = new Tarjeta(b, f);
    }

    virtual ~Servicios(){}
};

#endif //P2_CPP_SERVICIOS_H
