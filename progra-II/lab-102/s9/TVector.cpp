#include "TVector.h"

template<typename T>
TVector<T>::TVector() {}

template<typename T>
TVector<T>::TVector(int tamanio, T valor) {}

template<typename T>
TVector<T>::TVector(const TVector &otro_vector) {}

template<typename T>
TVector<T>::~TVector() {}

template<typename T>
void TVector<T>::setElementos(T elemento, int posicion) {
    // Implementar
}

template<typename T>
void TVector<T>::insertElemento(T elemento, int posicion) {
    // Implementar

}

template<typename T>
void TVector<T>::agregar(T elemento) {
    // Implementar
}

template<typename T>
T TVector<T>::getElemento(int posicion) {
    return NULL;
}

template<typename T>
int TVector<T>::getTamanio() {
    return tamanio;
}
