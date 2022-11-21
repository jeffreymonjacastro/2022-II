#ifndef P2_CPP_TARJETAS_H
#define P2_CPP_TARJETAS_H

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

class TarjetadeCredito {
private:
    double BIN;
    string fecha_caducidad;
    double monto_limite;
    string fecha_corte;
    string fecha_pago;
public:
    TarjetadeCredito(){}
    TarjetadeCredito(double b, string e, string f, double ml, string fc, string fp):BIN(b), fecha_caducidad(f), monto_limite(ml), fecha_corte(fc), fecha_pago(fp){}

    virtual ~TarjetadeCredito(){}
};


#endif //P2_CPP_TARJETAS_H
