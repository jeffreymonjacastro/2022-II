#include <iostream>
#include <fstream>
using namespace std;

int main() {
// ejemplo de lectura de un archivo
    string x;

    // Constructor de archivo -> recibe un string de la ruta y su modo de lectura

    fstream archivoEntrada("../C:/Users/Usuario/Github/2022-II/progra-II/teo-1/s14/archivo.txt", ios::in);

// Para imprimir cada línea del archivo
    while(!archivoEntrada.fail()){
        getline(archivoEntrada, x); // leo linea a linea el archivo y almaceno cada linea en el string x

        cout<<x<<endl;
    }

    archivoEntrada.close();


    // Otra forma
    // detectando el final! de un archivo
    archivoEntrada.open("../C:/Users/Usuario/Github/2022-II/progra-II/teo-1/s14/archivo.txt");

    while(getline(archivoEntrada,x)){
        cout<<x<<endl;
    }



    return 0;
}