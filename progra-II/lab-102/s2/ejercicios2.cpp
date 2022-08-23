#include <iostream>
#include <cmath>

using namespace std;

// Ejemplo 001
void e1(){
    int n, i, i_pares=0, i_impares=0;

    cout<<"Ingrese un numero: "; cin>>n;

    /*
     * CON UN BUCLE WHILE
    while(n!=0){
        cout<<"Ingrese un numero:"; cin>>n;
        i++;
    }

     * CON UN BUCLE DO WHILE
    do{
        cout<<"Ingrese un numero:"; cin>>n;
        i++;
    } while(n!=0);
    */

    // CON BUCLE FOR
    for(i=0; n!=0; i++){
        if(n % 2 == 0)
            i_pares++;
        else
            i_impares++;

        cout<<"Ingrese un numero: "; cin>>n;
    }
    cout<<"La cantidad de numeros es:"<<i<<endl;
    cout<<"La cantidad de numeros pares es:"<<i_pares<<endl;
    cout<<"La cantidad de numeros impares es:"<<i_impares<<endl;
}

// Ejemplo 002
void e2(){
    int n, i=0, pares=0, impares=0;

    cout<<"Numero: "; cin>>n;

    while(n<100) {
        cout << "Numero: "; cin >> n;
    }

    while(n!=0){
        if(n%2 == 0) pares++;
        else impares++;

        n = n/10;
        i++;
    }

    cout<<"Numero de digitos:"<<i<<endl;
    cout<<"Digitos pares:"<<pares<<endl;
    cout<<"Digitos impares:"<<impares<<endl;
}

// Ejemplo 003
void e3(){
    int n, i, v = 2;
    double x = 3;

    cout<<"Iteraciones: "; cin>>n;

    for(i=1; i<=n; i++){
        if(i % 2 == 0) {
            x -= 4.0/((v)*(v+1)*(v+2));
        }else{
            x += 4.0/((v)*(v+1)*(v+2));
        }
        v += 2;

        cout<<"El valor de PI para i: "<<i<<" es: "<<x<<endl;
    }
}

int main(){
    e3();

    return 0;
}