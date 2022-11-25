#ifndef P2_CPP_CUENTADEAHORRO_H
#define P2_CPP_CUENTADEAHORRO_H

#include "TarjetadeDebito.h"
#include <vector>
#include <iostream>

using namespace std;

class CuentadeAhorro {
private:
    TarjetadeDebito* tarjeta; //Asociacion
    vector<string> descripcion;
    vector<double> montos;
    vector<string> fechas;
    vector<CuentadeAhorro*> cuentas_destino;
public:
    CuentadeAhorro(){}
    CuentadeAhorro(string d, double m, string f){
        descripcion.push_back(d);
        montos.push_back(m);
        fechas.push_back(f);
    }

    virtual ~CuentadeAhorro(){}

    // Método de asociación
    void asociarTarjeta(TarjetadeDebito* t) {
        tarjeta = t;
    }
};

#endif //P2_CPP_CUENTADEAHORRO_H
