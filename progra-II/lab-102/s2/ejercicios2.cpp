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


int main(){
    e1();

    return 0;
}