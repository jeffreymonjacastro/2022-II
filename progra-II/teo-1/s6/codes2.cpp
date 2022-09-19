#include <iostream>

using namespace std;


void cambio(int* ptr, int x){
    for(int i=0;i<x;i++) {
        *(ptr + i) *= *(ptr + i); // Con aritmética de punteros
        ptr[i] = ptr[i] * ptr[i];
        ptr[i] *= ptr[i];
    }
}

int main(){
    // declaración del array
    const int x = 5;
    int *ptr;
    srand(time(nullptr));

    // Definición del array
    ptr = new int[x];

    for(int i = 0; i < x; i++)
        // ptr[i] = rand()%10; // esta forma es con el operador []
        *(ptr + i) = rand()%10; // usando aritmética de punteros

    //imprimir el array
    cout<<"array original:"<<endl;

//    for(int i = 0; )
}