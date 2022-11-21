#include "Cliente.h"

int main(){
    vector<Cliente*> clientes;

    Cliente* cliente1 = new Cliente("Aless", "Rodriguez", 17, 77028284);
    CuentadeAhorro* cuenta1 = new CuentadeAhorro()

    clientes.push_back(cliente1);

    cout<<clientes[0]->getNombre()<<endl;
}
