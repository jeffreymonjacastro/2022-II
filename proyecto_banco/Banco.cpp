#include "Cliente.h"
#include "funciones.h"
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

        int option = seleccionar_opcion(3);

        cout << endl;

        if(option == 1) {
            while (true) {
                cout << "LISTA DE CLIENTES:" << endl;

                lista_de_clientes(clientes);

                cout<<endl;

                cout << "1. Buscar Clientes" << endl;
                cout << "2. Agregar Clientes" << endl;
                cout << "3. Eliminar Clientes" << endl;
                cout << "4. Regresar al Menu" << endl;

                int suboption = seleccionar_opcion(4);

                cout << endl;

                if (suboption == 1) {
                    cout << "BUSCAR CLIENTES" << endl;
                } else if (suboption == 2) {
                    while (true) {
                        cout << "AGREGAR CLIENTES" << endl;

                        string nombre, apellido;
                        int edad;
                        long int dni;

                        cout << "Ingrese el nombre, apellido, edad y dni:" << endl;
                        cin >> nombre >> apellido >> edad >> dni;

                        cout << "Datos del cliente:" << endl;
                        cout << "Nombre: " << nombre << endl;
                        cout << "Apellido: " << apellido << endl;
                        cout << "Edad: " << edad << endl;
                        cout << "DNI: " << dni << endl;

                        Cliente cliente(nombre, apellido, edad, dni);

                        char opcion_cuenta;
                        cout << "Asociar una Cuenta de Ahorro o de Credito? [A o C]" << endl;
                        cin >> opcion_cuenta;

                        if (opcion_cuenta == 'A') {
                            auto nueva_cuenta_ahorro = new CuentadeAhorro(123456, "12/24");
                            cliente + nueva_cuenta_ahorro;
                        } else if (opcion_cuenta == 'C') {
                            auto nueva_cuenta_credito = new CuentadeCredito(123456, "12/25", 10000.0, "12/22", "01/23");
                            cliente + nueva_cuenta_credito;
                        }

                        cout << "Agregando al cliente..." << endl;
                        clientes.push_back(cliente);

                        cout << "Cliente agregado satisfactoriamente" << endl;
                        cout<<endl;

                        char tof;
                        cout << "Desea agregar otro cliente? [T o F]" << endl;
                        cin >> tof;

                        if (tof == 'F') {
                            cout << "Regresando a la Lista de Clientes..." << endl;
                            break;
                        }
                    }

                    cout<<endl;

                } else if (suboption == 3) {
                    cout << "ELIMINAR CLIENTES" << endl;
                } else if (suboption == 4) {
                    cout << "Regresando al menu..." << endl;
                    cout<<endl;
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
