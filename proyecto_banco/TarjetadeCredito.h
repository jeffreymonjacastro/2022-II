#ifndef P2_CPP_TARJETADECREDITO_H
#define P2_CPP_TARJETADECREDITO_H

#include <iostream>
#include "Tarjeta.h"

using namespace std;


class TarjetadeCredito: public Tarjeta {
private:
    double monto_limite;
    string fecha_corte;
    string fecha_pago;
public:
    TarjetadeCredito(long int b, string f, double ml, string fc, string fp): Tarjeta(b, f), monto_limite(ml), fecha_corte(fc), fecha_pago(fp){}

    virtual ~TarjetadeCredito(){}

    // Getters
    double getMontoLimite(){return monto_limite;}

    string getFechaCorte(){return fecha_corte;}

    string getFechaPago(){return fecha_pago;}
};


#endif //P2_CPP_TARJETADECREDITO_H
