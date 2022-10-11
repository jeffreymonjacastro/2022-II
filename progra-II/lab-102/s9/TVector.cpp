#include "TVector.h"

// Inicia los valores a cero
template<typename T>
TVector<T>::TVector() {
    this->tamanio = 0;
    this->maximo = 0;
    this->elementos = nullptr;
}

// Crea un array dinámico con los parámetros
template<typename T>
TVector<T>::TVector(int _tamanio, T valor) {
    // El tamaño debe ser mayor a 0
    if (_tamanio > 0) {
        // Un array dinámico de tipo TVector<T> de tamaño
        this->elementos = reinterpret_cast<double *>(new TVector<T>[_tamanio]);

        for (int i = 0; i < _tamanio; i++)
            this->elementos[i] = valor;
    }
}

// La copia de otro vector
template<typename T>
TVector<T>::TVector(const TVector &otro_vector) {
    // Atributos del otro vector
    this->tamanio = otro_vector.tamanio;
    this->maximo = otro_vector.maximo;

    // Crea un array dinámico que copie los elementos del otro_vector
    this->elementos = reinterpret_cast<double *>(new TVector<T>[this->tamanio]);

    for (int i = 0;i < this->tamanio;i++){
        this->elementos[i] = otro_vector.elementos[i];
    }
}


template<typename T>
TVector<T>::~TVector() {}


template<typename T>
void TVector<T>::redimensionar() {
    // Crea un puntero a una lista de tamaño +1
    T* elementosTemp = new TVector<T>[this->tamanio + 1];

    // Copia los elementos
    for(int i = 0; i < this->tamanio; i++)
        elementosTemp[i] = this->elementos[i];

    // Se elimina el anterior arrray
    delete[] this->elementos;

    // Y el array (T*) apunta al array temporal
    this->elementos = elementosTemp;

    //Actualiza el nuevo tamaño
    this->tamanio = this->tamanio + 1;
}

// MÉTODO PARA CAMBIAR EL VALOR DE UN ELEMENTO
template<typename T>
void TVector<T>::setElementos(T elemento, int posicion) {
    // Al valor del array elementos en la posición dada se cambia por otro elemento
    this->elementos[posicion-1] = elemento;
}

// MÉTODO PARA INSERTAR UN VALOR EN CUALQUIER POSICIÓN

template<typename T>
void TVector<T>::insertElemento(T elemento, int posicion) {
    // 1ra forma
//    // Se crea un array agregándole un espacio al final
//    redimensionar();
//
//    // Se crea un array temporal de tamaño "tamanio"
//    T* elementosTemp = new TVector<T>[this->tamanio];
//
//    //UPDATE
//    // Agregando elementos de izq a derecha
//    for (int i = 0; i < posicion-1; i++)
//        elementosTemp[i] = this->elementos[i];
//
//    // Agregando de derecha a izquierda
//    for (int i = this->tamanio; i > posicion-1; i++)
//        elementosTemp[i] = this->elementos[i-1];
//
//    // Se agrega el valor al espacio vacío en la posición
//    elementosTemp[posicion-1] = elemento;
//
//    // Liberando memoria del array anterior
//    delete [] this->elementos;
//
//    // Ahora el array apunta al array temporal
//    this->elementos = elementosTemp;

    // 2da forma
    if (posicion >= 0 and posicion < this->tamanio){
        redimensionar();

        for(int i = this->tamanio-1; i > posicion-1; --i) {
            this->elementos[i] = this->elementos[i-1];
        }

        this->elementos[posicion-1] = elemento;
    }
}


// MÉTODO PARA AGREGAR UN ELEMENTO AL FINAL
template<typename T>
void TVector<T>::agregar(T elemento) {
    // Se crea un array con los elementos +1
    redimensionar();

    // Al elemento en la última posición se iguala al valor de elemento
    this->elementos[tamanio-1] = elemento;
}

// MÉTODO PARA IMPRIMIR
template<typename T>
void TVector<T>::imprimir(){
    cout<<"{";

    for (int i = 0; i < this->tamanio; i++)
        cout<<this->elementos[i]<<",";

    cout<<"}";
}

template<typename T>
T TVector<T>::getElemento(int posicion) {
    return this->elementos[posicion-1];
}

template<typename T>
int TVector<T>::getTamanio() {
    return this->tamanio;
}


