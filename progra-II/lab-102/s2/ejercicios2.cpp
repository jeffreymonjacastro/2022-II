#include <iostream>

using namespace std;

// Ejemplo 001
void e1(){
    int n, i=0, i_pares=0, i_impares=0;

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

int main(){
    e2();

    return 0;
}