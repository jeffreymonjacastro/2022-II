#ifndef P2_CPP_FUNCIONES_H
#define P2_CPP_FUNCIONES_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "Cliente.h"

using namespace std;

int seleccionar_opcion(int max){
    int option;
    while (true) {
        cout << "Seleccione una opcion:" << endl;
        cin >> option;

        if (option > 0 && option <= max)
            break;
    }

    return option;
}

void lista_de_clientes(vector<Cliente> &clients){
    if (clients.empty()) {
        cout << "El banco aun no tiene clientes" << endl;
    } else {
        cout<<"Nombre"<<setw(15)<<"Apellido"<<setw(15)<<"Edad"<<setw(15)<<"DNI"<<endl;

        for (int i = 0; i < clients.size(); ++i) {
            clients[i].getDatos();
        }
    }
}

#endif //P2_CPP_FUNCIONES_H
