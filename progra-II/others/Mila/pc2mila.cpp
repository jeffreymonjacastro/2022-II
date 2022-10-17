#include <iostream>
#include <cstdlib>

using namespace std;


char** generarMatriz(int filas, int columnas){
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    srand(time(nullptr));

    char** M = new char* [filas];

    for(int i=0; i < filas ;i++){
        M[i] = new char[columnas];

        for(int j = 0; j < columnas; j++){
             M[i][j] = alpha[rand()%25];
        }
    }

    return M;
}


void imprimirMatriz(char** M, int filas, int columnas){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
}


void liberarMatriz(char** M, int filas){
    for(int i = 0; i <filas; i++) {
        delete[] M[i]; // elimino filas
        delete[] M; // elimino el array de punteros inicial
    }
}

int main(){
    int filas, columnas;
    char** matrix;
    cout<<"Filas columnas: "<<endl; cin>>filas>>columnas;

    matrix = generarMatriz(filas,columnas);

    imprimirMatriz(matrix, filas, columnas);

    while (true){
        string palabra;
        cout<<"palabra:"<<endl; cin>>palabra;

        if (palabra == "salir")
            break;

        int largo = palabra.size();

        string prueba = "";

        for (int i = 0; i < filas; i++){
            for(int j = 0; j < columnas; j++){
                string s_fil = "", s_col = "", s_dig = "";

                for(int k = 0; k < largo; k++){
                    if (j+k < columnas)
                        s_fil += matrix[i][j+k];
                    if (i+k < filas)
                        s_col += matrix[i+k][j];
                    if (j+k < columnas && i+k < filas)
                        s_dig += matrix[i+k][j+k];
                }

                bool activar = false;

                if (palabra == s_fil || palabra == s_col || palabra == s_dig)
                    activar = true;

                if (activar)
                    prueba = "respuesta: [" + to_string(i) + ", " + to_string(j) + "]";
            }
        }

        if (!prueba.empty())
            cout<<prueba<<endl;
        else
            cout<<"respuesta: no se encuentra";
    }

    liberarMatriz(matrix, filas);
}
