#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14159;

// EJERCICIO 1: De radianes a sexagesimales
void ejercicio1(){
    float rad, sexa;
    cout<<"Numero en radianes: ";
    cin>>rad;

    sexa = rad*180/PI;

    cout<<"El valor en sexagesimales es: "<<sexa;
}

// EJERCICIO 2: Consumo de kw
void ejercicio2(){
    double kw, consumo;

    cout<<"Ingrese el consumo en kW: ";
    cin>>kw;

    consumo = (kw<=100) * (kw*0.4522) + (kw > 100)*(100*0.4522 + (kw-100)*0.7); //Booleanos

    cout<<"El consumo total es: "<<consumo;
}

// EJERCICIO 3: Distancia euclidiana
void ejercicio3(){
    double x1, y1, x2, y2, d;

    cout<<"x1:"; cin>>x1;
    cout<<"y1:"; cin>>y1;
    cout<<"x2:"; cin>>x2;
    cout<<"y2:"; cin>>y2;

    d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    cout<<"La distancia es: "<<d;
}

// Run
int main(){
    ejercicio3();

    return 0;
}