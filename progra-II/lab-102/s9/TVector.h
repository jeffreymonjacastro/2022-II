#ifndef P2_CPP_TVECTOR_H
#define P2_CPP_TVECTOR_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class TVector {
private:
    int tamanio;
    T* elementos;
    int maximo;
    void redimensionar();
public:
    TVector(); //Constructor vacío

    TVector(int tamanio, T valor); //Constructor inicializador

    TVector(const TVector &otro_vector); //Constructor copia

    virtual ~TVector(); //Destructor

    // Reemplazar elemento
    void setElementos(T elemento, int posicion);

    // Insertar elemento
    void insertElemento(T elemento, int posicion);

    // Agregar elemento
    void agregar(T elemento);

    // getters
    T getElemento(int posicion);
    int getTamanio();
};


#endif //P2_CPP_TVECTOR_H
