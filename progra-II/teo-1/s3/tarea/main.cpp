#include <iostream>
#include "tarea_individual.h"

using namespace std;

// Declaración de variables globales
string nombre, apellido, codigo, usuario, clave;


// Funcion para dar un espacio
void e(){
    cout<<endl;
}


// Función para imprimir títulos
void titulo(string texto){
    string palabra;
    for(int i = 1; i <= texto.length(); i++){
        palabra += "=";
    }

    cout<<palabra<<endl;
    cout<<texto<<endl;
    cout<<palabra<<endl;
}


// Función mostrar datos
void mostrar_usuario(){
    e();
    cout<<"Bienvenido "<<nombre<<" "<<apellido<<endl;
    e();

    cout<<"Tu codigo es: "<<codigo<<endl;
    cout<<"Tu usuario es: "<<usuario<<endl;
    cout<<"Tu clave es: "<<clave<<endl;
    e();
}


// Función preguntar modificar
int preguntar_modificar() {
    int continuar;

    cout<<"Desea modificar algun dato?"<<endl;
    cout<<"1. Si"<<endl;
    cout<<"2. No"<<endl;
    cin>>continuar;

    if (continuar == 1) {
        int opcion;
        cout << "Que dato desea cambiar?" << endl;
        e();

        cout << "1. Nombre" << endl;
        cout << "2. Apellido" << endl;
        cout << "3. Codigo" << endl;
        cout << "4. Usuario" << endl;
        cout << "5. Clave" << endl;
        e();

        cin >> opcion;

        return opcion;

    } else
        mostrar_usuario();

    return 0;
}


// Función ingresar_usuario
void ingresar_usuario(){
    bool prueba_codigo = false, prueba_clave = false;

    e();
    cout<<"Ingrese sus datos: "<<endl;
    e();

    cout<<"Nombre: "<<endl; cin>>nombre;
    cout<<"Apellido: "<<endl; cin>>apellido;

    // Validación del código
    while(!prueba_codigo){
        cout<<"Codigo: "<<endl; cin>>codigo;

        if(codigo.length() == 8) {
            for (char i: codigo) {
                if (isdigit(i))
                    prueba_codigo = true;
                else {
                    prueba_codigo = false;
                    break;
                }
            }
        }
    }

    cout<<"Usuario: "<<endl; cin>>usuario;

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

    int numero;

    numero = preguntar_modificar();

        switch (numero) {
            case 1:
                cout<<"Cambiar nombre: "<<endl; cin>>nombre;
                preguntar_modificar();
                break;
            case 2:
                cout<<"Cambiar apellido: "<<endl; cin>>apellido;
                preguntar_modificar();
                break;
            case 3:
                cout<<"Cambiar codigo: "<<endl; cin>>codigo;
                preguntar_modificar();
                break;
            case 4:
                cout<<"Cambiar usuario: "<<endl; cin>>usuario;
                preguntar_modificar();
                break;
            case 5:
                cout<<"Cambiar clave: "<<endl; cin>>clave;
                preguntar_modificar();
                break;
            default:
                cout<<"No existe esa opcion";

        }
}


// Función para menú
void inicio(){
    int opcion;
    titulo("MENU");
    e();

    cout << "1. Ingresar usuario" << endl;
    cout << "2. Salir" << endl;
    e();

    cout<<"Ingrese una opcion: "<<endl; cin>>opcion;

    switch (opcion) {
        case 1:
            titulo("Ingresar usuario");
            ingresar_usuario();
            break;
        case 2:
            titulo("Saliendo del programa");
            titulo("FIN DEL PROGRAMA");
            break;
        default:
            cout<<"No hay opcion";
    }
}


// Run
int main(){
    inicio();

    return 0;
}
