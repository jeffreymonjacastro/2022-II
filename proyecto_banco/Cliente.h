#ifndef P2_CPP_CLIENTE_H
#define P2_CPP_CLIENTE_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "CuentadeAhorro.h"
#include "CuentadeCredito.h"

using namespace std;

class Cliente {
private:
    string nombre;
    string apellido;
    int edad;
    long int dni;
    vector<Servicios*> servicios;
public:
    Cliente(){}
    Cliente(string n, string a, int e, double d): nombre(n), apellido(a), edad(e), dni(d){}
    Cliente(const Cliente &cliente) {
        this->nombre = cliente.nombre;
        this->apellido = cliente.apellido;
        this->edad = cliente.edad;
        this->dni = cliente.dni;
        this->servicios = cliente.servicios;
    }

    virtual ~Cliente(){}

    // Al vector de cuentas de ahorro del cliente se le agrega una tarjeta de debito
    // Sobrecarga del operador para agregar una nueva Cuenta de Ahorro
    void operator+(CuentadeAhorro* debito){
        this->servicios.push_back(debito);
    }

    void operator+(CuentadeCredito* credito){
        this->servicios.push_back(credito);
    }

    // Imprimir los datos de los clientes
    void getDatos(){
        cout<<nombre<<setw(15)<<apellido<<setw(15)<<edad<<setw(15)<<dni<<endl;
    }

    // Getters
    string getNombre(){return nombre;}

    string getApellido(){return apellido;}

    int getEdad(){return edad;}

    long getDni(){return dni;}

    vector<Servicios*> getServicios(){return servicios;}
};



#endif //P2_CPP_CLIENTE_H
