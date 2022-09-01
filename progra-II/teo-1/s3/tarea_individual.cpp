#include <iostream>

using namespace std;

/*
Escriba un programa en C++ que permita ingresar los datos de un estudiante: nombre y apellido, código (de 8 dígitos)usuario  (será el apellido del estudiante) y clave (una combinación de letras minúsculas, mayusculas y dígitos), a través de un menú.

El programa debe verificar si el código tiene 8 dígitos, y si la clave tiene las condiciones señaladas. De lo contrario se pedirá ingresar el dato (pero solo ese dato) de nuevo. Solo se tienen 3 opciones para ingresar los datos correctamente. Luego de ingresar los datos (input), el programa preguntará si se quiere modificar algún dato.

Se abrirá entonces el menú de nuevo para que el usuario escoja un dato para modificar, o ningún dato para salir.

Se debe, finalmente imprimir los datos del estudiante actualizados.

Notas:

El código debe ser eficiente. Debe tener un numero mínimo de instrucciones (líneas de código)
Las entradas de codigo (input) deben estar claramente especificadas
El estudiante decide el formato de salidas de código (output)
Considere la rúbrica del ejercicio (en Canvas)


*/
void e(){
    cout<<endl;
}


void result(){
    string nombre_apellido, codigo, usuario, clave;

    cout<<"=========="<<endl;
    cout<<"UTEC PLUS"<<endl;
    cout<<"=========="<<endl;
    e();

    cout<<"Ingrese sus datos"<<endl;
    e();

    cout<<"Nombre y apellido: "<<endl; cin>>nombre_apellido;
    cout<<"Codigo: "<<endl; cin>>codigo;
    cout<<"Usuario: "<<endl; cin>>usuario;
    cout<<"Clave: "<<endl; cin>>clave;
}

int main(){
    result();

    return 0;
}
