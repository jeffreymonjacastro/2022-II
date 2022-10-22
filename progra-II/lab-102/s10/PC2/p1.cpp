// p1 - Matrices

#include <iostream>
#include <cstdlib>

using namespace std;

int** generarMatriz(int tamanio){
    srand(time(nullptr));

    int** M = new int* [tamanio];

    for(int i=0; i < tamanio ;i++){
        M[i] = new int[tamanio];

        for(int j = 0; j < tamanio; j++){
            M[i][j] = rand()%4+1;
        }
    }

    return M;
}


int** nuevaMatriz(int** M1, int** M2, int tamanio){
    int **M = new int*[tamanio];

    for (int i = 0; i < tamanio; ++i) {
        M[i] = new int[tamanio];

        for (int j = 0; j < tamanio; ++j) {
            if (i == 0 || j == 0 || i == tamanio-1 || j == tamanio-1)
                M[i][j] = M1[i][j] + M2[i][j];
            else
                M[i][j] = 0;
        }
    }
    return M;
}


void rotarMatriz(int **M, int tamanio){
    for (int j = tamanio-1; j >= 0; j--) {
        for (int i = 0; i < tamanio; i++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
}

void imprimirMatriz(int** M, int tamanio){
    for(int i = 0; i < tamanio; i++){
        for(int j = 0; j < tamanio; j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
}

void liberarMatriz(int** M, int tamanio){
    for(int i = 0; i <tamanio; i++) {
        delete[] M[i];
    }
    delete[] M;
    M = nullptr;
}

int main(){
    int tamanio;
    cout<<"Orden de la matriz cuadrada: "<<endl; cin>>tamanio;

    int **M1 = nullptr;
    int **M2 = nullptr;

    M1 = generarMatriz(tamanio);
    M2 = generarMatriz(tamanio);

    cout<<"Matriz 1:"<<endl;
    imprimirMatriz(M1, tamanio);

    cout<<endl;

    cout<<"Matriz 2:"<<endl;
    imprimirMatriz(M2, tamanio);

    cout<<endl;

    int **M3 = nullptr;
    M3 = nuevaMatriz(M1, M2, tamanio);

    cout<<"Matriz 3 Resultado: "<<endl;
    imprimirMatriz(M3, tamanio);

    cout<<endl;
    cout<<"Matriz 4 Resultado: "<<endl;
    rotarMatriz(M3, tamanio);


    // Liberando memoria
    liberarMatriz(M1, tamanio);
    liberarMatriz(M2, tamanio);
    liberarMatriz(M3, tamanio);
    return 0;
}