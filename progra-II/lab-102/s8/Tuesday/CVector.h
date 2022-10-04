#ifndef P2_CPP_CVECTOR_H
#define P2_CPP_CVECTOR_H

#include <iostream>

using namespace std;

typedef int entero;
typedef int* array_entero;

class CVector {
private:
    entero tamanio;
    array_entero elementos;
    entero maximo;
    void redimensionar();
public:
    CVector(entero tamanio, const int *elementos, entero maximo);
};


#endif //P2_CPP_CVECTOR_H
