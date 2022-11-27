#ifndef P2_CPP_SERVICIOS_H
#define P2_CPP_SERVICIOS_H

#include <iostream>
#include "Tarjeta.h"

using namespace std;

class Servicios {
protected:
    Tarjeta *tarjeta;
public:
    Servicios() {}

    Servicios(long int b, string f) {
        tarjeta = new Tarjeta(b, f);
    }

    virtual ~Servicios() {}

    virtual Tarjeta *getTarjeta() = 0;
};

#endif //P2_CPP_SERVICIOS_H
