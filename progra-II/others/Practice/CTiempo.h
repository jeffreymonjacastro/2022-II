#ifndef P2_CPP_CTIEMPO_H
#define P2_CPP_CTIEMPO_H
#include <iostream>

using namespace std;

class CTiempo {
private:
    int horas, minutos, segundos;
public:
    CTiempo(int, int, int);

    CTiempo(long);

    void mostrarTiempo();
};


#endif //P2_CPP_CTIEMPO_H
