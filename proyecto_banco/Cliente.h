#ifndef P2_CPP_CLIENTE_H
#define P2_CPP_CLIENTE_H

#include <iostream>
#include <vector>
#include "CuentadeAhorro.h"
#include "CuentadeCredito.h"

using namespace std;

class Cliente {
private:
    string nombre;
    string apellido;
    int edad;
    long int dni;
    vector<CuentadeAhorro*> cuentas_ahorro;
    vector<CuentadeCredito*> cuentas_credito;
public:
    Cliente(){}
    Cliente(string n, string a, int e, double d): nombre(n), apellido(a), edad(e), dni(d){};

    virtual ~Cliente(){}

    // Al vector de cuentas de ahorro del cliente se le agrega una tarjeta de debito
    // Sobrecarga del operador para agregar una nueva Cuenta de Ahorro
    void operator+(CuentadeAhorro* debito){
        this->cuentas_ahorro.push_back(debito);
    }

    void operator+(CuentadeCredito* credito){
        this->cuentas_credito.push_back(credito);
    }

    // Al vector de cuentas de credito del cliente se le agrega una tarjeta de credito
    void asociarCuentaCredito(CuentadeCredito* credito){
        cuentas_credito.push_back(credito);
    }




    string getNombre(){return nombre;}

};



#endif //P2_CPP_CLIENTE_H
