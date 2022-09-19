#include <iostream>

using namespace std;

int main(){
    int n;

    cout<<"Ingrese la cantidad de elementos"<<endl;
    cin>>n;

    /* Array estático, si se agregan datos no se puede colocar el "n" como tamaño - se almacena en el STACK */

    int A[] = {10, 11, 12, 20, 100};
//    cout<<A[0]<<endl;
//    cout<<&A[0]<<endl;



    /* Array dinámico -> se declara como un puntero que apunta a un array (este sí puede recibir un tamaño "n" dinámico)*/
    int *p = nullptr;
    p = new int[n]; // new: palabra declarada para reservar un espacio en memoria del HEAP
    // p = &A[0];   <-- este no es un array dinámico, es un puntero que apunta a la dirección del primer elemento del array en el stack

    /* Llenar el array */
    for(int i = 0; i < n; i++){
        p[i] = 10;
    }

    /* Imprimir el array */
    for(int i = 0; i < 100; i++){
        cout<<p[i]<<" ";
    }

    return 0;
}