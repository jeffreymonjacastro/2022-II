#ifndef P2_CPP_FUNCIONES_H
#define P2_CPP_FUNCIONES_H

#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
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

CuentadeAhorro* crear_cuenta_ahorro(){
    srand(time(nullptr));

    long int bin = rand()%899999 + 100000;

    vector<int> meses = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int n = rand()%11 + 1;

    string fecha_caducidad = to_string(meses[n]) + "/25";

    auto nueva_cuenta = new CuentadeAhorro(bin, fecha_caducidad);

    return nueva_cuenta;
}

CuentadeCredito* crear_cuenta_credito(){
    srand(time(nullptr));

    long int bin = rand()%899999 + 100000;

    vector<int> meses = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int n = rand()%11 + 1;
    int m = rand()%11 + 1;
    int l = rand()%11 + 1;

    string fecha_caducidad = to_string(meses[n]) + "/25";
    string fecha_corte = to_string(meses[m]) + "/25";
    string fecha_pago = to_string(meses[l]) + "/25";

    auto nueva_cuenta = new CuentadeCredito(bin, fecha_caducidad, 10000, fecha_corte, fecha_pago);

    return nueva_cuenta;
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

void lista_cuentas_ahorro(vector<Cliente> &Ahorro){
    if (Ahorro.empty()) {
        cout << "El banco aun no tiene clientes asociados a cuentas de Ahorro" << endl;
        cout<<endl;
    } else {
        cout<<setw(5)<<"Cliente"<<setw(25)<<"Tarjeta de debito"<<endl;

        for (auto & cliente : Ahorro) {
            for (int j = 0; j < cliente.getServicios().size(); ++j) {
                if(cliente.getServicios()[j]->getTipoServicio() == "ahorro") {
                    cout << cliente.getNombre() << " " << cliente.getApellido() << setw(15)
                         << cliente.getServicios()[j]->getBIN()<< endl;
                }
            }
        }
    }
}


void lista_cuentas_credito(vector<Cliente> &Credito){
    if (Credito.empty()) {
        cout << "El banco aun no tiene clientes asociados a cuentas de Credito" << endl;
        cout<<endl;
    } else {
        cout<<setw(5)<<"Cliente"<<setw(25)<<"Tarjeta de credito"<<endl;

        for (auto & cliente : Credito) {
            for (int j = 0; j < i.getCuentasCredito().size(); ++j) {
                cout<<i.getNombre()<<" "<<i.getApellido()<<setw(15)<<i.getCuentasCredito()[j]->getTarjeta()->getBin()<<endl;
            }
        }
    }
}

#endif //P2_CPP_FUNCIONES_H
