#ifndef P2_CPP_HORA_H
#define P2_CPP_HORA_H

#include <iostream>

using namespace std;

class Hora {
    int hora;
    int minuto;
public:
    // Valores por defecto en el constructor
    Hora(){}
    Hora(int _h, int _m): hora(_h), minuto(_m){}

    int getHora() const {
        return hora;
    }

    int getMinuto() const {
        return minuto;
    }

    ~Hora(){cout<<"Hora borrada"<<endl;}
};
#endif //P2_CPP_HORA_H
