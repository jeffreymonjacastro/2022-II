#include <iostream>
#include <iomanip>

using namespace std;

const int filas = 3, columnas = 3;

// generar una función para imprimir la matriz

void imprimir(int M[][columnas], int filas, int columnas){ //M[][columnas] es sintaxis
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++)
            cout<<setw(5)<<M[i][j]; // set --> Separa 5 espacios para las columnas y que se vea ordenadito

        cout<<endl;
    }
}

// matrices (arrays de arrays) - ESTÁTICAS

int main(){
    int A[columnas]; // así genera un array

    // asi genera una matriz en el - STACK
    // int MA[filas][columnas] = { {1,2,3}, {4,5,6}, {7,8,9} }

    int MA[filas][columnas] = { {1,2,3}, {4,5,6}, {7,8,9} };

    cout<<"una matriz en el stack"<<endl;
    imprimir(MA, filas, columnas);


    cout<<"una matriz de ceros"<<endl;
    int MB[filas][columnas] = {};
    imprimir(MB, filas, columnas);


    cout<<"una matriz con valores en la primera columna"<<endl;
    int MC[filas][columnas] = {{1,2}, {4}, {7}};
    imprimir(MC,filas,columnas);


    cout<<"una matriz con valores en la primera fila"<<endl;
    int MD[filas][columnas] = {{1,2,3}};
    imprimir(MD,filas,columnas);
}