#ifndef P2_CPP_CUENTADECREDITO_H
#define P2_CPP_CUENTADECREDITO_H

#include <iostream>
#include <vector>
#include "TarjetadeCredito.h"

using namespace std;

class CuentadeCredito: public Servicios{
public:
    CuentadeCredito(){}

    // Constructor para asociar la tarjeta de crédito
    CuentadeCredito(long int b, string f, double ml, string fc, string fp){
        tarjeta_credito = new TarjetadeCredito(b, f, ml, fc, fp);
        tipo_servicio = "credito";
    }

    void getDatos(){
        cout<<endl;
        cout<<"Cuenta de Credito"<<endl;
        cout<<"================="<<endl;
        cout<<"BIN: "<<tarjeta_credito->getBin()<<endl;
        cout<<"Fecha de caducidad: "<<tarjeta_credito->getFechaCaducidad()<<endl;
        cout<<"Monto limite: "<<tarjeta_credito->getMontoLimite()<<endl;
        cout<<"Fecha de corte: "<<tarjeta_credito->getFechaCorte()<<endl;
        cout<<"Fecha de pago: "<<tarjeta_credito->getFechaPago()<<endl;
    }

    virtual ~CuentadeCredito(){}

    string getTipoServicio(){return tipo_servicio;}

    // Métodos
    TarjetadeCredito* getTarjeta(){return tarjeta_credito;}

    long int getBIN(){return tarjeta_credito->getBin();}
};

#endif //P2_CPP_CUENTADECREDITO_H
