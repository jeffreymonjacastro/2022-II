#include <iostream>
#include <iomanip>

using namespace std;

int** sumar_cruz(int** M, int n){
    int** Mcruz = new int* [n];

    for (int i = 0; i < n; ++i) {
        Mcruz[i] = new int [n];

        for (int j = 0; j < n; ++j) {
            if (i == 0){
                if (j == 0)
                    Mcruz[i][j] = M[i][j] + M[i+1][j] + M[i][j+1];
                else if (j == n-1)
                    Mcruz[i][j] = M[i][j] + M[i+1][j] + M[i][j-1];
                else
                    Mcruz[i][j] = M[i][j] + M[i+1][j] + M[i][j-1] + M[i][j+1];
            } else if (i == n-1){
                if (j == 0)
                    Mcruz[i][j] = M[i][j] + M[i-1][j] + M[i][j+1];
                else if (j == n-1)
                    Mcruz[i][j] = M[i][j] + M[i-1][j] + M[i][j-1];
            }


            if (i == 0 && j == 0)
                Mcruz[i][j] = M[i][j] + M[i+1][j] + M[i][j+1];
            else if (i == 0 && j == n-1)
                Mcruz[i][j] = M[i][j] + M[i+1][j] + M[i][j-1];
            else if (i == n-1 && j == 0)
                Mcruz[i][j] = M[i][j] + M[i-1][j] + M[i][j+1];
            else if (i == n-1 && j == n-1)
                Mcruz[i][j] = M[i][j] + M[i-1][j] + M[i][j-1];
        }
    }
    

    return Mcruz;
}

int** crear_matriz(int n){
    int m = rand()%8 +1;

    int** M = new int* [n];

    for (int i = 0; i < n; ++i) {
        M[i] = new int [n];

        for (int j = 0; j < n; ++j) {
            M[i][j] = m;
        }
    }

    return M;
}

void imprimir(int** M, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
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

int main(){
    srand(time(nullptr));

    int n;
    cout<<"N:"<<endl;
    cin>>n;

    int** matrix;
    matrix = crear_matriz(n);

    cout<<"Matriz original"<<endl;
    imprimir(matrix, n);

    int** new_matrix;
    cout<<"Nueva matriz"<<endl;
    new_matrix = sumar_cruz(matrix, n);
    imprimir(new_matrix, n);
    
    return 0;
}