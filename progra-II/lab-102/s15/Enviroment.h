#ifndef P2_CPP_ENVIROMENT_H
#define P2_CPP_ENVIROMENT_H

#include <iostream>
#include <vector>
#include "Type.h"

using namespace std;

class Enviroment {
private:
    d latitud;
    d longitud;
    i profundidad;
    s fecha;
public:

    // Métodos de herencia
    void mantenimiento(){};
    void operacion(){};
};

#endif //P2_CPP_ENVIROMENT_H
