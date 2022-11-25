#ifndef P2_CPP_TARJETADEDEBITO_H
#define P2_CPP_TARJETADEDEBITO_H

#include <iostream>

using namespace std;

class TarjetadeDebito {
private:
    double BIN;
    string fecha_caducidad;
public:
    TarjetadeDebito(){}
    TarjetadeDebito(double b, string e, string f):BIN(b), fecha_caducidad(f){}

    virtual ~TarjetadeDebito(){}
};

#endif //P2_CPP_TARJETADEDEBITO_H
