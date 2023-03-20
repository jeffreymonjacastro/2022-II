#include <bits/stdc++.h>

using namespace std;

void ejem1(){
    int entero;
    cout<<"Ingrese un numero entero: "; cin>>entero;

    if(!entero) // la negación es más rápida que la asignación
        cout<<"El numero es 0"<<endl;
    else if(entero % 2 == 0)
        cout<<"El numero es par"<<endl;
    else
        cout<<"El numero es impar"<<endl;
}

void ejem2(){
    int n;
    cout<<"Escoge un numero [1 al 4]"; cin>>n;

    // Los argumentos del swich solo puede ser int o char
    switch (n) {
        case 1:
            cout<<"Primavera"<<endl;
            break;
        case 2:
            cout<<"Verano"<<endl;
            break;
        case 3:
            cout<<"Otonio"<<endl;
            break;
        case 4:
            cout<<"Invierno"<<endl;
            break;
        default:
            cout<<"No hay"<<endl;
            break;
    }
}

int main(){

    // Cosas del bool
//    bool x = true;
//    x = 9;
//    cout<<x<<endl;
//    cout<<boolalpha<<x<<endl;

//    ejem1();
    ejem2();

    return 0;
}