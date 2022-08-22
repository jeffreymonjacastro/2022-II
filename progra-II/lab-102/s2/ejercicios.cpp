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
    int x1, y1, x2, y2;
    float d_e, d_m;

    cout<<"x1:"; cin>>x1;
    cout<<"y1:"; cin>>y1;
    cout<<"x2:"; cin>>x2;
    cout<<"y2:"; cin>>y2;

    d_e = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    d_m = (x2-x1) + (y2-y1);

    cout<<"La distancia euclidiana es: "<<d_e<<endl;
    cout<<"La distancia de manhattan es: "<<d_m<<endl;

}

// EJERCICIO 4: suma de dos ángulos
void ejercicio4(){
    int a1, a1_g, a1_m, a1_s, a2, a2_g, a2_m, a2_s, sum;

    cout<<"angulo 1: "<<endl;
    cout<<"grados:"; cin>>a1_g;
    cout<<"minutos:"; cin>>a1_m;
    cout<<"segundos:"; cin>>a1_s;

    cout<<"angulo 2: "<<endl;
    cout<<"grados:"; cin>>a2_g;
    cout<<"minutos:"; cin>>a2_m;
    cout<<"segundos:"; cin>>a2_s;

    a1 = a1_g*3600 + a1_m*60 + a1_s;
    a2 = a2_g*3600 + a2_m*60 + a2_s;
    sum = a1 + a2;

    cout<<"angulo 1: "<<a1_g<<" grados, "<<a1_m<<" minutos, "<<a1_s<<" segundos"<<endl;
    cout<<"angulo 2: "<<a2_g<<" grados, "<<a2_m<<" minutos, "<<a2_s<<" segundos"<<endl;
    cout<<"La suma es: "<<sum/3600<<" grados, "<<(sum%3600)/60<<" minutos, "<<(sum/3600)%60<<" segundos";
}

// Run
int main(){
    ejercicio4();

    return 0;
}