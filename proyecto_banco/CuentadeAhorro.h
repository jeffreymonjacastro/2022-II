#ifndef P2_CPP_CUENTADEAHORRO_H
#define P2_CPP_CUENTADEAHORRO_H

#include "Servicios.h"
#include "TarjetadeDebito.h"
#include <vector>
#include <iostream>

using namespace std;

class CuentadeAhorro: public Servicios {
public:
    CuentadeAhorro(){}

    // Constructor para hacer una composición con la tarjeta de débito
    CuentadeAhorro(long int b, string f){
        tarjeta_debito = new TarjetadeDebito(b, f);
        tipo_servicio = "ahorros";
    }

    void getDatos(){
        cout<<endl;
        cout<<"Cuenta de Ahorro"<<endl;
        cout<<"================="<<endl;
        cout<<"BIN: "<<tarjeta_debito->getBin()<<endl;
        cout<<"Fecha de caducidad: "<<tarjeta_debito->getFechaCaducidad()<<endl;
    }

    virtual ~CuentadeAhorro(){}

    string getTipoServicio(){return tipo_servicio;}

    // Métodos
    TarjetadeDebito* getTarjeta(){return tarjeta_debito;}

    long int getBIN(){return tarjeta_debito->getBin();}
};

#endif //P2_CPP_CUENTADEAHORRO_H
