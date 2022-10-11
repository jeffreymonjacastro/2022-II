#ifndef P2_CPP_TVECTOR_H
#define P2_CPP_TVECTOR_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class TVector {
private:
    int tamanio{};
    T* elementos;
    int maximo{};

    // El método está en privado porque solo se utiliza dentro de la clase
    void redimensionar();
public:
    TVector(); //Constructor vacío

    TVector(int _tamanio, T valor); //Constructor inicializador

    TVector(const TVector &otro_vector); //Constructor copia

    virtual ~TVector(); //Destructor

    // Reemplazar elemento
    void setElementos(T elemento, int posicion);

    // Insertar elemento
    void insertElemento(T elemento, int posicion);

    // Agregar elemento
    void agregar(T elemento);

    // Imprimir vectores
    void imprimir();

    // getters
    T getElemento(int posicion);
    int getTamanio();
};

#include "TVector.cpp"
#endif //P2_CPP_TVECTOR_H
