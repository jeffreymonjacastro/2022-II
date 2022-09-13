#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int rows, columns;

    cout<<"Ingrese la cantidad de filas: "<<endl; cin>>rows;
    cout<<"Ingrese la cantidad de columnas: "<<endl; cin>>columns;

    if(rows == columns) {

        // Crear array dinamicoc en el heap de tamaño row*columns
        int **pMatriz = nullptr;
        pMatriz = new int *[rows];
        for (int i = 0; i < rows; i++)
            pMatriz[i] = new int[columns];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++)
                pMatriz[i][j] = rand() % 99;
        }
    }

    return 0;
}