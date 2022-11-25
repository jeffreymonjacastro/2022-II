#ifndef P2_CPP_TARJETADECREDITO_H
#define P2_CPP_TARJETADECREDITO_H

#include <iostream>

using namespace std;

class TarjetadeCredito {
private:
    long int BIN;
    string fecha_caducidad;
    double monto_limite;
    string fecha_corte;
    string fecha_pago;
public:
    TarjetadeCredito(){}
    TarjetadeCredito(long int b, string f, double ml, string fc, string fp):BIN(b), fecha_caducidad(f), monto_limite(ml), fecha_corte(fc), fecha_pago(fp){}

    virtual ~TarjetadeCredito(){}
};


#endif //P2_CPP_TARJETADECREDITO_H
