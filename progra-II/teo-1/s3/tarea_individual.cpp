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

void titulo(string texto){
    string palabra;
    for(int i = 1; i <= texto.length(); i++){
        palabra += "=";
    }

    cout<<palabra<<endl;
    cout<<texto<<endl;
    cout<<palabra<<endl;
}

void result(){
    string nombre, apellido, codigo, usuario, clave;
    bool prueba_codigo = false, prueba_clave = false;

    titulo("UTEC PLUS");
    e();

    cout<<"Ingrese sus datos"<<endl;
    e();

    cout<<"Nombre: "<<endl; cin>>nombre;
    cout<<"Apellido: "<<endl; cin>>apellido;

    // Validación del código
    while(!prueba_codigo){
        cout<<"Codigo: "<<endl; cin>>codigo;

        if(codigo.length() == 8) {
            for (char i: codigo) {
                if (isdigit(i)) {
                    prueba_codigo = true;
                } else {
                    prueba_codigo = false;
                    break;
                }
            }
        }
    }

    // Creación automática del usuario
    for (char i : apellido){
        usuario += tolower(i);
    }

    // validación de la clave
    bool mayus, minus, digit;

    while(!prueba_clave){
        cout<<"Clave: "<<endl; cin>>clave;
        mayus = minus = digit = false;

        for(char i : clave) {
            if (isupper(i))
                mayus = true;
            if (islower(i))
                minus = true;
            if (isdigit(i))
                digit = true;
        }

        if(mayus && minus && digit)
            prueba_clave = true;
    }

    e();
    cout<<"Bienvenido "<<nombre<<" "<<apellido<<endl;
    e();

    cout<<"Tu codigo es: "<<codigo<<endl;
    cout<<"Tu usuario es: "<<usuario<<endl;
    cout<<"Tu clave es: "<<clave<<endl;
    e();

    titulo("FIN DEL PROGRAMA");
}

int main(){
    result();

    return 0;
}
