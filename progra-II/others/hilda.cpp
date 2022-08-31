#include <iostream>
#include "UFunciones.h"

using namespace std;

int main(){
    unsigned long int numero;

    do {
        cout<<"Numero: "<<endl; cin>>numero;
    }while(numero<100);

    if(numero==numeroInvertido(numero)){
        cout<<"el numero es capicua"<<endl;
    } else {
        cout<<"el numero no es capicua"<<endl;
    }

    cout<<"Bye!";

    return 0;
}

