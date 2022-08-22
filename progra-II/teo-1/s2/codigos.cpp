#include <iostream>

using namespace std;

// estructura IF
void codes_1(){
    int entero = 0;
    cout<<"Ingrese un numero entero: "; cin>>entero;

    if (entero == 0)
        cout<<"El numero es cero"<<endl;
    else if (entero % 2 == 0)
        cout<<"El numero es par"<<endl;
    else
        cout<<"El numero es impar";
}

void codes_2(){
    int booleano = 0;

    if (!booleano) //negación de false = true
        cout<<"Helloo";

};

void codes_3(){
    int numero = 0;
    cout<<"Ingrese un numero entre 1 y 4: "; cin>>numero;

    // argumentos de switch son int/char
    switch (numero) {
        case 1:
            cout<<"Primavera"<<endl;
            break;
        case 2:
            cout<<"Verano"<<endl;
            break;
        case 3:
            cout<<"Otoño"<<endl;
            break;
        case 4:
            cout<<"Invierno"<<endl;
            break;
        default:
            cout<<"No corresponde a ninguna estación";
    }
}


int main(){
    codes_3();


    return 0;
}
