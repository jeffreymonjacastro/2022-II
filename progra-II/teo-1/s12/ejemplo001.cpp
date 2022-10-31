#include <iostream>
using namespace std;

// Polimorfismo paramétrico o genérico

// Se agrega una plantilla que detecte cualquier tipo de variable
// No es como auto, este reconoce el tipo al que se le asigna o define

template <typename T>

void intercambio(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

// Se debe crear otra función para utilizar otro tipo de variables
//void intercambio_decimales(double &a, double &b){
//    double temp = a;
//    a = b;
//    b = temp;
//}

int main() {
    int x = 20, y = 1;

    cout<<"x: "<<x<<" , y: "<<y<<endl;
    intercambio<int>(x, y);
    cout<<"x: "<<x<<" , y: "<<y<<endl;


    double d1 = 3.345, d2 = 6.42342;

    cout<<"d1: "<<d1<<" , d2: "<<d2<<endl;
    // No es necesario colocar los <> pero se utiliza para especificar el tipo
    intercambio<double>(d1, d2);
    cout<<"d1: "<<d1<<" , d2: "<<d2<<endl;

    string s1 = "Hola", s2 = "Chao";

    cout<<"s1: "<<s1<<" , s2: "<<s2<<endl;
    intercambio(s1, s2);
    cout<<"s1: "<<s1<<" , s2: "<<s2<<endl;



    return 0;
}