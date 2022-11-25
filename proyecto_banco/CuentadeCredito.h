#ifndef P2_CPP_CUENTADECREDITO_H
#define P2_CPP_CUENTADECREDITO_H

#include <iostream>
#include <vector>
#include "TarjetadeCredito.h"

using namespace std;

class CuentadeCredito {
private:
    TarjetadeCredito* tarjeta; //Asociacion
    vector<string> descripcion;
    vector<double> montos;
    vector<string> fechas;
    vector<CuentadeCredito*> cuentas_destino;
public:
    CuentadeCredito(){}

    // Constructor para asociar la tarjeta de crédito
    CuentadeCredito(long int b, string f, double ml, string fc, string fp){
        tarjeta = new TarjetadeCredito(b, f, ml, fc, fp);
    }

    // Historial de movimientos
    CuentadeCredito(string d, double m, string f){
        descripcion.push_back(d);
        montos.push_back(m);
        fechas.push_back(f);
    }

    virtual ~CuentadeCredito(){}

    // Método de asociación
    void asociarTarjeta(TarjetadeCredito* t){
        tarjeta = t;
    }
};

#endif //P2_CPP_CUENTADECREDITO_H