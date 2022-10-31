// generar una clase Rectangulo  que permita generar un rectangulo
// dados su largo y ancho, asi como un constructor copia de Rectangulo
// asi como metodos para hallar su area y perimetro
// tambien una plantilla generica para imprimir la informacion del rectangulo
#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main()
{
    // generar un rectangulo con valores por defecto y usar los setters para dar valores a los atributos
    Rectangulo R1(34.6, 98.2);
    imprimirDatos(R1);


    cout<<endl;
// generar un objeto copia de R1
    Rectangulo Rx(R1);


    cout<<endl;

// generar un reactangulo usando el constructor de asignacion

    cout<<endl;
// generar un rectangulo con un solo argumento en el constructor de asignacion



// imprimir datos

    return 0;
}