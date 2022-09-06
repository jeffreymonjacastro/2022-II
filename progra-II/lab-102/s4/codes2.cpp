#include <iostream>

using namespace std;


// PROBLEMA DOS

// la funcion recibe como parámetros un puntero (*), el cual recibe un valor en memoria (&)
void actualizarPuntosAzul(int *ptosAzules){
    int point;
    cout<<"Ingrese los puntos azules"<<endl; cin>>point;
    *ptosAzules += point;
}

void actualizarPuntosRojo(int *ptosRojos){
    int point;
    cout<<"Ingrese los puntos rojos"<<endl; cin>>point;
    *ptosRojos += point;

}

void imprimir(int *ptosAzules, int *ptosRojos){
    cout<<"El equipo azul tiene: "<<ptosAzules<<endl;
    cout<<"El equipo rojo tiene: "<<ptosRojos<<endl;
}



int main(){
    int option, pointBlue = 0, pointRed = 0;

    do {
        cout<<"MENU"<<endl;
        cout<<"----"<<endl;
        cout<<"1. Ingresa el punto azul"<<endl;
        cout<<"2. Ingresa el punto rojo"<<endl;
        cout<<"3. Imprimir"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>option;

        switch (option) {
            case 1:
                // A cada función se envía de argumento la dirección en memoria de una variable
                actualizarPuntosAzul(&pointBlue);
                break;
            case 2:
                actualizarPuntosRojo(&pointRed);
                break;
            case 3:
                imprimir(&pointBlue, &pointRed);
                break;
        }

    } while(option != 4);

    return 0;
}