#include <iostream>

using namespace std;

float funcion_ref(float &k){
    k++;
    k*=6;
    return k;
}

float funcion_valor(float k){
    k++;
    k*=6;
    return k;
}

int main(){
    float k=10;
    cout<<"Valor de k: "<<k<<endl;
    cout<<"Direccion de k: "<<&k<<endl; // Ubicación en memoria del primer byte del float

    funcion_ref(k);
    cout<<"Valor de k: "<<k<<endl;
    cout<<"Valor de k: "<<funcion_valor(k);

    /*
    Punteros: variables que apuntan a la dirección de otra variable
    es decir, cuyo valor es la dirección de esa variable
    Se declara con asteriscos y debe ser del mismo tipo de la variable a la que se quiere apuntar
    Tiene 8 bytes (constante)
    */

    float* ptr_k = &k; // declaramos un puntero de tipo float que apunta a la dirección de k (&k)

    return 0;
}