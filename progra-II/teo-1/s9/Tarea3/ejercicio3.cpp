#include "CClave.h"

int main(){
    srand(time(NULL));
    int tamanio;
    cout<<"Tamanio de la cadena: "<<endl;
    cin>>tamanio;

    CClave encriptacion(tamanio);

    encriptacion.cadenaEncriptada();
    encriptacion.generarClave();
    encriptacion.generarLlave();
    encriptacion.imprimir();

}