#ifndef P2_CPP_TARJETADEDEBITO_H
#define P2_CPP_TARJETADEDEBITO_H

#include <iostream>
#include "Tarjeta.h"

using namespace std;

class TarjetadeDebito {
private:
    long int BIN;
    string fecha_caducidad;
public:
    TarjetadeDebito(long int b, string f): BIN(b), fecha_caducidad(f){}

    virtual ~TarjetadeDebito(){}

    void getDatos(){
        cout<<BIN;
        cout<<fecha_caducidad;
    }

    long int getBin(){return BIN;}

    string getFechaCaducidad(){return fecha_caducidad;}
};

#endif //P2_CPP_TARJETADEDEBITO_H
