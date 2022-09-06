#include <iostream>

using namespace std;

// EJEMPLO 3
// PASO POR REFERENCIA
// la función factorial recibe como parámetro una dirección de memoria de una variable
int factorial(int &numero){
    int result = 1;
    for (int i = 1; i <= numero; i++){
        result *= i;
    }

    return result;
}

int factorial2(int *numero){
    int result = 1;
    for (int i = 1; i <= *numero; i++){
        result *= i;
    }

    return result;
}

int main(){
    int n1, n2, n3, n4;

    cout<<"Ingrese n1: "<<endl; cin>>n1;
    cout<<"Ingrese n2: "<<endl; cin>>n2;

    int *n2Pointer = &n2; //El puntero se declara como la dirección en memoria de la variable

    cout<<"Ingrese n3: "<<endl; cin>>n3;
    cout<<"Ingrese n4: "<<endl; cin>>n4;

    cout<<"El factorial de n1 es: "<<factorial(n1)<<endl;

    cout<<"El factorial de n2 es: "<<factorial2(n2Pointer)<<endl; //La función se declara con esa variable sin (*)


    return 0;
}
