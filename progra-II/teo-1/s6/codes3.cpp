#include <iostream>
#include <iomanip>

using namespace std;

// matrices (arrays de arrays) dinámicos
// Crear/inicializar la matriz

// Función int doble puntero
int** inicializador(int filas, int columnas){
    int** M = new int* [filas]; // Genero un array de punteros

    for(int i=0; i < filas ;i++){
        M[i] = new int[columnas]; // Genero un array de enteros por cada puntero

        for(int j = 0; j < columnas; j++){
            // M[i][j] = rand()%100; // Forma normal
            *(*(M+i)+j) = rand()%100; // Aritmética de punteros
        }
    }

    return M;
}


void imprimir(int** M, int filas, int columnas){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++)
            cout<<setw(5)<<M[i][j];
        cout<<endl;
    }
}


void liberar(int** M, int filas){
    for(int i = 0; i <filas; i++) {
        delete[] M[i]; // elimino filas
        delete[] M; // elimino el array de punteros inicial
    }
}


//Matriz dinámica
int main(){
    // una matriz en el heap (declaración en una instruccion)
    int filas = 9, columnas = 3;
    int **pMA = nullptr;

    // reservar espacio en el heap y asignar valores
    pMA = inicializador(filas, columnas);

    //imprimir
    imprimir(pMA, filas, columnas);

    // liberar
    liberar(pMA, filas);
}