#include <iostream>
#include "iomanip"

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

// negación de la condición IF
void codes_2(){
    int booleano = 0;

    if (!booleano) //negación de false = true
        cout<<"Helloo";

};

// estructura SWITCH
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

// estructura WHILE
void codes_4(){
    int i=1;

    while (i <= 7){
        cout<<"UTEC"<<endl;
        ++i;
    }
}

// estructura DO WHILE
void codes_5(){
    int i=1;

    do {
        cout<<"Romy"<<endl;
        i++;
    } while (i <= 7);
}

// estructura FOR
void codes_6(){
    for(int i = 1; i <= 7; i++)
        cout<<"Te amo Romy"<<endl;
}

// Ejemplos FOR
void codes_7(){
    int contador, suma;

    for(contador = 10, suma = 0; contador <= 95; contador += 5) {
        suma += contador;
        cout << suma << endl;
    }
    cout<<"La sumatoria es: "<<suma;
}

// Run
int main(){
    codes_7();

    return 0;
}
