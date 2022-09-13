#include <iostream>
#include <stdlib.h>

using namespace std;


//int defMatriz(int rows, int columns){
//    int **pMatriz = nullptr;
//
//    pMatriz = new int *[rows];
//
//    for (int i = 0; i < rows; i++){
//        pMatriz[i] = new int [columns];
//    }
//
//    return **pMatriz;
//}


int main(){
    int rows, columns, opt = 0;

    // Inputs
    cout<<"Ingrese la cantidad de filas: "<<endl; cin>>rows;
    cout<<"Ingrese la cantidad de columnas: "<<endl; cin>>columns;

    // ESTRUCTURA PARA CREAR MATRICES

    int **pMatriz = nullptr; // Se declara un doble puntero

    pMatriz = new int *[rows]; // Se crea un array dinámico con "rows" elementos

    // A cada fila de la matriz se le crea otro array dinámico con "columns" elementos
    for (int i = 0; i < rows; i++) {
        pMatriz[i] = new int[columns];
    }

    // Aquí la matriz está vacía, por lo que devuelve cualquier valor basura
    // cout<<pMatriz[0]<<endl;


    while(opt != 4) {
        // MENU
        do {
            cout << "MENU" << endl;
            cout << "----" << endl;

            cout << "1. Generar matriz aleatoria" << endl;
            cout << "2. Mostrar solo pares" << endl;
            cout << "3. Mostrar solo impares" << endl;
            cout << "4. Salir" << endl;

            cout << "Elije la opcion (1-4): " << endl;
            cin >> opt;

            cout<<endl;
        } while (opt < 1 or opt > 4);

        // OPCIONES
        switch (opt) {
            case 1:
                // ESTRUCTURA PARA AÑADIR ELEMENTOS A LA MATRIZ E IMPRIMIR

                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < columns; j++) {
                        // generar un numero aleatorio y lo agrega a la posición ij de la matriz
                        pMatriz[i][j] = rand() % 100 + 100;

                        cout << pMatriz[i][j] << " ";
                    }
                    cout << endl;
                }

                cout<<endl;
                break;
            case 2:
                // IMPRIMIR SOLO PARES

                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < columns; j++) {
                        if (pMatriz[i][j] % 2 == 0)
                            cout << pMatriz[i][j] << " ";
                        else
                            cout << 0 << " ";
                    }
                    cout << endl;
                }
                cout<<endl;
                break;
            case 3:
                // IMPRIMIR SOLO IMPARES

                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < columns; j++) {
                        if (pMatriz[i][j] % 2 != 0)
                            cout << pMatriz[i][j] << " ";
                        else
                            cout << 0 << " ";
                    }
                    cout << endl;
                }

                cout<<endl;
                break;
            case 4:
                break;
            default:
                break;
        }
    }

    return 0;
}