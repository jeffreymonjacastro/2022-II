#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int** generarMatriz(int n){
    srand(time(nullptr));

    int** M = new int* [n];

    for(int i=0; i < n ;i++){
        M[i] = new int[n];

        for(int j = 0; j < n; j++){
            if (j % 2 == 0)
                M[i][j] = rand()%50 + 50;
            else
                M[i][j] = rand()%49 + 101;
        }
    }
    return M;
}

void imprimirMatriz(int** M, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout<<M[i][j]<<setw(5)<<" ";
        cout<<endl;
    }
}

int sumatoriaContorno(int** M, int n){
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                suma += M[i][j];
        }
    }

    return suma;
}

void liberarMatriz(int** M, int n){
    for(int i = 0; i <n; i++) {
        delete[] M[i];
    }
    delete[] M;
    M = nullptr;
}


int main(){
    int n;

    while (true){
        cout<<"Filas = Columnas:"<<endl; cin>>n;

        if (n >= 2 && n <= 10)
            break;
    }

    int** M = nullptr;

    M = generarMatriz(n);

    imprimirMatriz(M, n);

    double* promedios = new double[n];
    double prom;

    for(int i = 0; i < n; i++){
        prom = 0;

        for (int j = 0; j < n; ++j) {
            prom += M[j][i];
        }

        prom /= n;

        promedios[i] = prom;
    }

    for (int i = 1; i <= n; ++i) {
        cout<<"Promedio Columna "<<i<<": "<<promedios[i-1]<<endl;
    }

    cout<<"Sumatoria Contorno: "<<sumatoriaContorno(M, n);

    liberarMatriz(M,n);
}