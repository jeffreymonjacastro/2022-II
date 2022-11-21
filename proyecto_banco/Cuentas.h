#ifndef P2_CPP_CUENTAS_H
#define P2_CPP_CUENTAS_H

#include "Tarjetas.h"
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

class CuentadeCredito {
private:
    TarjetadeCredito* tarjeta; //Asociacion
    vector<string> descripcion;
    vector<double> montos;
    vector<string> fechas;
    vector<CuentadeAhorro*> cuentas_destino;
public:
    CuentadeCredito(){}
    CuentadeCredito(string d, double m, string f, CuentadeAhorro* c){
        descripcion.push_back(d);
        montos.push_back(m);
        fechas.push_back(f);
        cuentas_destino.push_back(c);
    }

    virtual ~CuentadeCredito(){}

    // Método de asociación
    void asociarTarjeta(TarjetadeCredito* t){
        tarjeta = t;
    }
};



#endif //P2_CPP_CUENTAS_H
