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
        cout << "3. Cuentas de Crédito" << endl;
        cout << "4. Salir del banco"<<endl;

        int option = seleccionar_opcion(4);

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
                    while(true) {
                        cout << "BUSCAR CLIENTES" << endl;

                        cout<<"Ingrese el nombre del cliente que desea eliminar:"<<endl;
                        string name; cin>>name;

                        for (int i = 0; i < clientes.size(); ++i) {
                            if(name == clientes[i].getNombre()){
                                cout<<"Cliente: "<<clientes[i].getNombre()<<" "<<clientes[i].getApellido()<<endl;
                                cout<<"Edad: "<<clientes[i].getEdad()<<endl;
                                cout<<"DNI: "<<clientes[i].getDni()<<endl;

                                cout<<"Cuentas de Ahorro asociadas: "<<endl;

                                if (clientes[i].getCuentasAhorro().empty()) {
                                    cout << "El cliente no tiene cuentas de ahorro asociadas" << endl;
                                } else {
                                    for (int j = 0; j < clientes[i].getCuentasAhorro().size(); ++i) {
                                        cout<<"Cuenta de Ahorro "<<j+1<<":"<<endl;
                                        cout<<"Tarjeta de debito: "<<endl;
                                        cout<<"BIN: "<<clientes[i].getCuentasAhorro()[j]->getTarjeta()->getBin()<<endl;
                                        cout<<"Fecha de caducidad: "<<clientes[i].getCuentasAhorro()[j]->getTarjeta()->getFechaCaducidad()<<endl;
                                    }
                                }

                                cout<<"Cuentas de Credito asociadas: "<<endl;

                                if (clientes[i].getCuentasCredito().empty()) {
                                    cout << "El cliente no tiene cuentas de credito asociadas" << endl;
                                } else {
                                    for (int j = 0; j < clientes[i].getCuentasCredito().size(); ++i) {
                                        cout<<"Cuenta de Credito "<<j+1<<":"<<endl;
                                        cout<<"Tarjeta de credito: "<<endl;
                                        cout<<"BIN: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getBin()<<endl;
                                        cout<<"Fecha de caducidad: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getFechaCaducidad()<<endl;
                                        cout<<"Monto Limite: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getMontoLimite()<<endl;
                                        cout<<"Fecha de corte: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getFechaCorte()<<endl;
                                        cout<<"Fecha de pago: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getFechaPago()<<endl;
                                    }
                                }

                            } else
                                cout<<"No se encontró al cliente"<<endl;
                        }

                        cout << "Desea buscar a otro cliente? [T o F]" << endl;
                        char tof; cin >> tof;

                        if (tof == 'F') {
                            cout << "Regresando a la Lista de Clientes..." << endl;
                            break;
                        }
                    }


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

                        cout << "Desea agregar otro cliente? [T o F]" << endl;
                        char tof; cin >> tof;

                        if (tof == 'F') {
                            cout << "Regresando a la Lista de Clientes..." << endl;
                            break;
                        }
                    }

                    cout<<endl;

                } else if (suboption == 3) {
                    while(true) {
                        cout << "ELIMINAR CLIENTES" << endl;

                        cout<<"Ingrese el nombre del cliente que desea eliminar:"<<endl;
                        string name; cin>>name;

                        cout<<"Buscando cliente..."<<endl;

                        for (int i = 0; i < clientes.size(); ++i) {
                            if(name == clientes[i].getNombre()){
                                clientes.erase(clientes.begin()+i);
                                cout<<"Cliente eliminado"<<endl;
                            } else
                                cout<<"No se encontró al cliente"<<endl;
                        }

                        cout << "Desea eliminar otro cliente? [T o F]" << endl;
                        char tof; cin >> tof;

                        if (tof == 'F') {
                            cout << "Regresando a la Lista de Clientes..." << endl;
                            break;
                        }
                    }

                    cout<<endl;

                } else if (suboption == 4) {
                    cout << "Regresando al menu..." << endl;
                    cout<<endl;
                    break;
                }
            }
        } else if (option == 2) {
            cout << "CUENTAS DE AHORRO" << endl;
        } else if (option == 3) {
            cout << "CUENTAS DE CREDITO" << endl;
        } else if (option == 4) {
            cout<<"Hasta pronto"<<endl;
            break;
        }
    }

    return 0;
}
