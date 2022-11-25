#include "Cliente.h"
#include <iomanip>

int main(){
    // Variables generales
    vector<Cliente> clientes;

    cout<<setw(20)<<"Banco Trivial"<<endl;
    cout<<setw(18)<<"Bienvenido"<<endl;
    cout<<"============================"<<endl;

    while (true) {
        cout << "MENU" << endl;
        cout << "1. Lista de clientes" << endl;
        cout << "2. Cuentas de Ahorro" << endl;
        cout << "3. Salir del banco"<<endl;

        int option;
        while (true) {
            cout << "Seleccione una opcion:" << endl;
            cin >> option;

            if (option > 0 && option < 4)
                break;
        }

        cout << endl;

        if(option == 1) {
            while (true) {
                cout << "LISTA DE CLIENTES:" << endl;
                cout << "1. Buscar Clientes" << endl;
                cout << "2. Agregar Clientes" << endl;
                cout << "3. Eliminar Clientes" << endl;
                cout << "4. Regresar al Menu" << endl;

                int suboption;

                while (true) {
                    cout << "Seleccione una opcion:" << endl;
                    cin >> suboption;

                    if (suboption > 0 && suboption < 5)
                        break;
                }

                cout << endl;

                if (suboption == 1) {
                    cout << "BUSCAR CLIENTES" << endl;
                } else if (suboption == 2) {
                    cout << "AGREGAR CLIENTES" << endl;

                    string nombre, apellido;
                    int edad;
                    long int dni;

                    cout << "Ingrese el nombre, apellido, edad y dni:" << endl;
                    cin >> nombre >> apellido >> edad >> dni;

                    cout<< "Datos del cliente:"<<endl;
                    cout<<"Nombre: "<<nombre<<endl;
                    cout<<"Apellido: "<<apellido<<endl;
                    cout<<"Edad: "<<edad<<endl;
                    cout<<"DNI: "<<dni<<endl;

                    Cliente cliente(nombre, apellido, edad, dni);

                    char opcion_cuenta;
                    cout<<"Asociar una Cuenta de Ahorro o de Credito? [A o C]"<<endl;
                    cin>>opcion_cuenta;

                    if (opcion_cuenta == 'A'){
                        auto nueva_cuenta_ahorro = new CuentadeAhorro(123456,"12/24");
                        cliente + nueva_cuenta_ahorro;
                    } else if (opcion_cuenta == 'C'){
                        auto nueva_cuenta_credito = new CuentadeCredito(123456, "12/25", 10000.0, "12/22", "01/23");
                        cliente + nueva_cuenta_credito;
                    }

                    cout<<"Agregando al cliente..."<<endl;
                    clientes.push_back(cliente);

                    cout<<"Cliente agregado satisfactoriamente. Regresando al menu"<<endl;
                    cout<<endl;

                } else if (suboption == 3) {
                    cout << "ELIMINAR CLIENTES" << endl;
                } else if (suboption == 4) {
                    cout << "Regresando al menu..." << endl;
                    break;
                }
            }
        } else if (option == 2) {
            cout << "CUENTAS DE AHORRO" << endl;
        } else if (option == 3) {
            cout<<"Hasta pronto"<<endl;
            break;
        }
    }

    return 0;
}
