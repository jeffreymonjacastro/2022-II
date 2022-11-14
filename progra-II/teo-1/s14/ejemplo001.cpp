#include <iostream>
#include <fstream>
using namespace std;
// >> operador de extraccion (right shift)
// << operador de insercion (left shift)
// fstream (entrada y salida), ofstream (salida), ifstream (entrada)
int main() {
    string x,y,z;
    //(Si el archivo no existe, no funciona)
    ifstream archivoEntrada; // lectura, objeto de clase ifstream

    //(Si el archivo no existe, lo crea)
    ofstream archivoSalida; // escritura, objeto de clase ofstream

    // Buscar la ruta del archivo
    archivoEntrada.open("../C:/Users/Usuario/Github/2022-II/progra-II/teo-1/s14/archivo.txt");

    // Al asignar a la función a cada variable, estas leen cada string, cada uno separado por espacios
    archivoEntrada>>x;
    archivoEntrada>>y;
    archivoEntrada>>z;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

    // Se cierra el archivo de entrada como si se borrara, pero el objeto se mantiene
    archivoEntrada.close();

    archivoSalida.open("../C:/Users/Usuario/Github/2022-II/progra-II/teo-1/s14/archivo_salida.txt");

    //(Para escribir en el archivo, se reemplaza el cout por la función)
    // Imprime todos los strings juntos en una linea
    archivoSalida<<x;
    archivoSalida<<y;
    archivoSalida<<z;

    archivoSalida.close();

    // detectar si falla al abrir un archivo
    archivoEntrada.open("../C:/Users/Usuario/Github/2022-II/progra-II/teo-1/s14/otro_archivo.txt");

    // El método .fail() retorna 1 si es que falló en la lectura del archivoo
    if(archivoEntrada.fail()){
        cout<<"No se puede abrir el archivo"<<endl;
    }

    // Con .isopen()
    if (!archivoEntrada.is_open()){
        cout<<"No se puede abrir el archivo"<<endl;
        // exit es lo que sale o retorna al terminar de ejecutarse
        exit(1);
    }
}
