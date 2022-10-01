#include "mila.h"

int main(){
    int n, m;
    cout<<"n y m: "<<endl; cin>>n>>m;

    if(n == m){
        // Dejando espacio en el heap
        int** pM1 = nullptr;
        int** pM2 = nullptr;

        // Llenando las matrices de elementos random
        pM1 = inicializador(n, n);
        pM2 = inicializador(m, m);

        // Imprimiendo matrices
        cout<<"Matriz 1:"<<endl;
        imprimir(pM1, n, n);

        cout<<"Matriz 2:"<<endl;
        imprimir(pM2, m, m);

        // Matriz resultante
        int** rM = nullptr;
        rM = new int* [n];

        for(int i=0; i < n ;i++){
            rM[i] = new int[n];

            for(int j = 0; j < n; j++){
                rM[i][j] = pM1[i][j] * pM2[i][j];
            }
        }

        cout<<"Matriz resultante: "<<endl;
        imprimir(rM, n, n);

    } else
        return 0;

    return 0;
}