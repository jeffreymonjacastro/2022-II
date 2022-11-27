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

    // Constructor para hacer una composición con la tarjeta de débito
    CuentadeAhorro(long int b, string f){
        tarjeta = new TarjetadeDebito(b, f);
    }

    // Métodos
    // Historial
//    CuentadeAhorro(string d, double m, string f){
//        descripcion.push_back(d);
//        montos.push_back(m);
//        fechas.push_back(f);
//    }

    virtual ~CuentadeAhorro(){}

    // Métodos
    TarjetadeDebito* getTarjeta(){return tarjeta;}
};

#endif //P2_CPP_CUENTADEAHORRO_H
