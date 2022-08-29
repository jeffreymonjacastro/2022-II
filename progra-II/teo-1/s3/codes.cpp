// FUNCIONES Y RECURSIVIDAD
#include <iostream>

using namespace std;


// Ámbito de una variable
void codes_1(){
    int a, b; // variables que tienen alcance de funcion main

    cout<<"a:"; cin>>a;
    cout<<"b:"; cin>>b;

    if (a<b) {
        int temp = a;
        a = b;
        b = temp;
    }

    cout<<"Valores Actualizados:"<<endl;
    cout<<"a: "<<a<<", b: "<<b<<endl;
}

int linea = 1;
int contador = 0;

// La función de tipo void (sin tipo) no necesita retornar nada
void incrementar_imprimir(int n){
    linea+=n;
    cout<<"linea: "<<linea<<endl;
}

// Funcion que incrementa en 5 los valores de a y b
// Usando paso por referencia
void AumentaenCinco(int& a, int& b){
    a += 5;
    b += 5;
}

void imprimir(int a, int b){
    cout<<"a: "<<a<<", b: "<<b<<endl;
}

void intercambiarValores(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    // Declaro una funcion para reducir las instrucciones en el main
    int a=10, b=33;
    imprimir(a,b);
    AumentaenCinco(a,b);
    imprimir(a,b);
    intercambiarValores(a,b);
    imprimir(a,b);

    return 0;
}