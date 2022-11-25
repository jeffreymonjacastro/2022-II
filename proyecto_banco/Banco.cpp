#include "Cliente.h"
#include <iomanip>

int main(){
    // Variables generales
    vector<Cliente*> clientes;

//    Cliente* cliente1 = new Cliente("Aless", "Rodriguez", 17, 77028284);
//    CuentadeAhorro* cuenta1 = new CuentadeAhorro();
//
//    clientes.push_back(cliente1);
//
//    cout<<clientes[0]->getNombre()<<endl;

    cout<<setw(20)<<"Banco Trivial"<<endl;
    cout<<setw(18)<<"Bienvenido"<<endl;
    cout<<"============================"<<endl;

    cout<<"MENU"<<endl;
    cout<<"1. Lista de clientes"<<endl;
    cout<<"2. Cuentas de Ahorro"<<endl;

    int n;
    while(true){
        cout<<"Seleccione una opcion:"<<endl;
        cin>>n;

        if(n>0 && n<3)
            break;
    }

    switch (n) {
        case 1:
            //code
            break;
        case 2:
            //code
            break;
        default:
            cout<<"Error"<<endl;
            break;
    }

}
