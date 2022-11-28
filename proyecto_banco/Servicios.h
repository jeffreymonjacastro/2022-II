#ifndef P2_CPP_SERVICIOS_H
#define P2_CPP_SERVICIOS_H

#include <iostream>
#include "TarjetadeDebito.h"
#include "TarjetadeCredito.h"

using namespace std;

class Servicios {
protected:
    TarjetadeDebito* tarjeta_debito;
    TarjetadeCredito* tarjeta_credito;
public:
    Servicios() {}

    virtual ~Servicios() {}

    virtual TarjetadeDebito* getTarjetaDebito() = 0;
    virtual TarjetadeCredito* getTarjetaCredito() = 0;
};

#endif //P2_CPP_SERVICIOS_H
