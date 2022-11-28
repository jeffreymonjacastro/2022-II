#ifndef P2_CPP_BANCO_H
#define P2_CPP_BANCO_H

#include "Cliente.h"

class Banco {
private:
    string name;
    vector<Cliente> clientes;
public:
    Banco(){}
    Banco(string n):name(n){}

    virtual ~Banco(){}

    string getNombre(){return name;}

    void Menu();
};

#endif //P2_CPP_BANCO_H
