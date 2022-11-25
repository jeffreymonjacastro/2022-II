#ifndef P2_CPP_FUNCIONES_H
#define P2_CPP_FUNCIONES_H

#include <iostream>
#include <vector>
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
        for (int i = 0; i < clients.size(); ++i) {
            cout<<clients[i].getNombre()<<endl;
        }
    }
}

#endif //P2_CPP_FUNCIONES_H
