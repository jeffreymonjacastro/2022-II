#include "TVector.h"

int main() {
    // Vector sin inicializar
    TVector<double> vector1;

    // Vector inicializado con tamaño 10 y elementos inicializados con 0
    TVector<double> vector2(10, 0);

    // Vector copia
    TVector<double> vector3(vector2);

    // Agregar
    cout<<"Cantidad de elementos: "<<vector2.getTamanio()<<endl;

    vector2.agregar(100);

    cout<<"Cantidad de elementos: "<<vector2.getTamanio()<<endl;

    // Insert
    vector2.insertElemento(5,2);
    cout<<"El valor en la posición 5 es: "<<vector2.getElemento(5)<<endl;

    // Set
    vector2.setElementos(200,1);
    cout<<"El valor en la posición 1 es: "<<vector2.getElemento(1)<<endl;


    return 0;
}
