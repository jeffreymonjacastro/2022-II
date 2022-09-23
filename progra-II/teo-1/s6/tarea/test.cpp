#include <iostream>

using namespace std;


void eliminardato(int* lista, int n){
    // Preguntar si la lista no está vacía
    if(lista != nullptr){
        int* idx_borrar;
        int* anterior = nullptr;

        idx_borrar = lista;

        // Recorrer la lista
        while(idx_borrar != nullptr && *idx_borrar != n){
            anterior = idx_borrar;
            idx_borrar = idx_borrar+1;
        }

        //El elemento no ha sido encontrado
        if(idx_borrar == nullptr) {
            cout << "El elemento no ha sido encontrado" << endl;
        } else if(anterior == nullptr){
            lista = lista+1;
            delete idx_borrar;
        } else {
            anterior = idx_borrar+1;
            delete idx_borrar;
        }
    }
}

int main(){
    int n = 5;

    int* A = nullptr;
    A = new int[n];

    for(int i = 0; i < n; i++)
        A[i] = i;

    cout<<"Lista original: "<<endl;

    for(int i = 0; i < n; i++)
        cout<<A[i]<<" ";

    cout<<endl;

    eliminardato(A, 2);

    cout<<"Lista nueva: "<<endl;

    for(int i = 0; i < n; i++)
        cout<<A[i]<<" ";

    return 0;
}