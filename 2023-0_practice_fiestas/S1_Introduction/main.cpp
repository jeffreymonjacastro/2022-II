#include <iostream> //invocación a biblioteca input/output

using namespace std; //objetos de la librería standard

// Usa punto y coma
// Donde colocas el ; termina la instrucción

int main(){

    cout<<"Hola mundo"<<endl;
    cout<<"Chau mundo!"<<endl;

    int entero = 3; // 4 bytes
    float decimal = 6.98; // 4 bytes
    double decimal2 = 3.14159; // 8 bytes
    char caracter = 'a'; // 1 byte
    bool si = true; // 1 byte
    string palabra = "Hola que tal"; // suma de todos los char

    cout<<"Palabra: "<<palabra<<endl;

    //TYPECASTING
    entero = decimal;

    cout<<entero<<endl;


    return 0;
}