#ifndef P2_CPP_TVECTOR_H
#define P2_CPP_CVECTOR_H

#include <iostream>

using namespace std;

typedef int entero;
typedef int* array_entero;

class TVector {
private:
    entero tamanio;
    array_entero elementos;
    entero maximo;
    void redimensionar();
public:
    TVector(entero tamanio, const int *elementos, entero maximo);
};


#endif //P2_CPP_TVECTOR_H
