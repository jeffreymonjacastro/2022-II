#ifndef P2_CPP_SERVICIOS_H
#define P2_CPP_SERVICIOS_H

#include <iostream>
#include "TarjetadeDebito.h"
#include "TarjetadeCredito.h"

using namespace std;

class Servicios {
protected:
    string tipo_servicio;
    TarjetadeDebito* tarjeta_debito;
    TarjetadeCredito* tarjeta_credito;
public:
    Servicios() {}

    virtual ~Servicios() {}

    virtual void getDatos() = 0;

    virtual string getTipoServicio() = 0;

    virtual long int getBIN() = 0;
};

#endif //P2_CPP_SERVICIOS_H
