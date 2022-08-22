// Ejercicio 2

#include <iostream>

using namespace std;

int main(){
    float kw, consumo;

    cout<<"Ingrese el consumo en kW: ";
    cin>>kw;

    consumo = (kw <= 100) * (kw*0.4522) + (kw > 100)*(100*0.4522 + (kw-100)*0.7);

    cout<<"El consumo total es: "<<consumo;

    return 0;
}