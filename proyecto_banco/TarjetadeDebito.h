#ifndef P2_CPP_TARJETADEDEBITO_H
#define P2_CPP_TARJETADEDEBITO_H

#include <iostream>
#include "Tarjeta.h"

using namespace std;

class TarjetadeDebito: public Tarjeta {

public:
    TarjetadeDebito(long int b, string f): Tarjeta(b, f){}

    virtual ~TarjetadeDebito(){}

    void getDatos(){
        cout<<BIN;
        cout<<fecha_caducidad;
    }
};

#endif //P2_CPP_TARJETADEDEBITO_H
