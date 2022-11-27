#ifndef P2_CPP_TARJETA_H
#define P2_CPP_TARJETA_H

#include <iostream>

using namespace std;

class Tarjeta {
protected:
    long int BIN;
    string fecha_caducidad;
public:
    Tarjeta(long int b, string fc): BIN(b), fecha_caducidad(fc){}

    virtual ~Tarjeta(){}

    long int getBin(){return BIN;}

    string getFechaCaducidad(){return fecha_caducidad;}
};

#endif //P2_CPP_TARJETA_H
