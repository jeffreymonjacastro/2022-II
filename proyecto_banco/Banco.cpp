#include "Banco.h"
#include "funciones.h"

void Banco::Menu() {
    cout<<setw(20)<<"Banco Trivial"<<endl;
    cout<<setw(18)<<"Bienvenido"<<endl;
    cout<<"============================"<<endl;

    while (true) {
        // Menú principal
        cout << "MENU" << endl;
        cout << "1. Lista de clientes" << endl;
        cout << "2. Cuentas de Ahorro" << endl;
        cout << "3. Cuentas de Credito" << endl;
        cout << "4. Salir del banco"<<endl;

        // Función para selecionar una opción
        int option = seleccionar_opcion(4);

        cout << endl;

        // Opción 1: Lista de clientes
        if (option == 1) {
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

                // Opción 1: Buscar Clientes
                if (suboption == 1) {
                    while(true) {
                        cout << "BUSCAR CLIENTES" << endl;

                        cout<<"Ingrese el nombre del cliente que desea buscar:"<<endl;
                        string name; cin>>name;

                        for (int i = 0; i < clientes.size(); ++i) {
                            if(name == clientes[i].getNombre()){
                                cout<<"Cliente: "<<clientes[i].getNombre()<<" "<<clientes[i].getApellido()<<endl;
                                cout<<"Edad: "<<clientes[i].getEdad()<<endl;
                                cout<<"DNI: "<<clientes[i].getDni()<<endl;
                                cout<<endl;

                                cout<<"Cuentas de Ahorro asociadas: "<<endl;

                                if (clientes[i].getCuentasAhorro().empty()) {
                                    cout << "El cliente no tiene cuentas de ahorro asociadas" << endl;
                                } else {
                                    for (int j = 0; j < clientes[i].getCuentasAhorro().size(); ++j) {
                                        cout<<"Cuenta de Ahorro "<<j+1<<":"<<endl;
                                        cout<<"Tarjeta de debito: "<<endl;
                                        cout<<"BIN: "<<clientes[i].getCuentasAhorro()[j]->getTarjeta()->getBin()<<endl;
                                        cout<<"Fecha de caducidad: "<<clientes[i].getCuentasAhorro()[j]->getTarjeta()->getFechaCaducidad()<<endl;
                                        cout<<endl;
                                    }
                                }

                                cout<<endl;

                                cout<<"Cuentas de Credito asociadas: "<<endl;

                                if (clientes[i].getCuentasCredito().empty()) {
                                    cout << "El cliente no tiene cuentas de credito asociadas" << endl;
                                } else {
                                    for (int j = 0; j < clientes[i].getCuentasCredito().size(); ++j) {
                                        cout<<"Cuenta de Credito "<<j+1<<":"<<endl;
                                        cout<<"Tarjeta de credito: "<<endl;
                                        cout<<"BIN: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getBin()<<endl;
                                        cout<<"Fecha de caducidad: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getFechaCaducidad()<<endl;
                                        cout<<"Monto Limite: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getDatos()
                                        cout<<"Fecha de corte: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getFechaCorte()<<endl;
                                        cout<<"Fecha de pago: "<<clientes[i].getCuentasCredito()[j]->getTarjeta()->getFechaPago()<<endl;
                                        cout<<endl;
                                    }
                                }

                                cout<<endl;

                                while (true) {
                                    cout << "Desea asociar una nueva cuenta con el cliente seleccionado? [S o N]:"
                                         << endl;
                                    char son;
                                    cin >> son;

                                    if (son == 'S') {
                                        char opcion_cuenta;
                                        cout << "Asociar una Cuenta de Ahorro o de Credito? [A o C]" << endl;
                                        cin >> opcion_cuenta;

                                        if (opcion_cuenta == 'A') {
                                            auto nueva_cuenta_ahorro = crear_cuenta_ahorro();

                                            clientes[i] + nueva_cuenta_ahorro;
                                            cuentasAhorro.push_back(clientes[i]);
                                        } else if (opcion_cuenta == 'C') {
                                            auto nueva_cuenta_credito = crear_cuenta_credito();

                                            clientes[i] + nueva_cuenta_credito;
                                            cuentasCredito.push_back(clientes[i]);
                                        }

                                        cout << "Asociando Cuenta..." << endl;

                                    } else if (son == 'N')
                                        break;
                                }
                            } else
                                cout<<"No se encontro al cliente"<<endl;
                        }

                        cout<<endl;

                        cout << "Desea buscar a otro cliente? [S o N]" << endl;
                        char son; cin >> son;

                        if (son == 'N') {
                            cout << "Regresando a la Lista de Clientes..." << endl;
                            break;
                        }
                    }
                }

                    // Opción 2: Agregar Clientes
                else if (suboption == 2) {
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
                            auto nueva_cuenta_ahorro = crear_cuenta_ahorro();

                            cout<<"Se asocia la tarjeta de debito con bin: "<<nueva_cuenta_ahorro->getTarjeta()->getBin()<<" y fecha de caducidad: "<<nueva_cuenta_ahorro->getTarjeta()->getFechaCaducidad()<<endl;

                            cliente + nueva_cuenta_ahorro;
                            cuentasAhorro.push_back(cliente);
                        } else if (opcion_cuenta == 'C') {
                            auto nueva_cuenta_credito = crear_cuenta_credito();

                            cout<<"Se asocia la tarjeta de credito con bin: "<<nueva_cuenta_credito->getTarjeta()->getBin()<<" y fecha de caducidad: "<<nueva_cuenta_credito->getTarjeta()->getFechaCaducidad()<<endl;

                            cliente + nueva_cuenta_credito;
                            cuentasCredito.push_back(cliente);
                        }

                        cout<<endl;

                        cout << "Agregando al cliente..." << endl;
                        clientes.push_back(cliente);

                        cout << "Cliente agregado satisfactoriamente" << endl;
                        cout<<endl;

                        cout << "Desea agregar otro cliente? [S o N]" << endl;
                        char son; cin >> son;

                        if (son == 'N') {
                            cout << "Regresando a la Lista de Clientes..." << endl;
                            break;
                        }
                    }

                    cout<<endl;
                }

                    // Opción 3: Eliminar Clientes
                else if (suboption == 3) {
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

                        cout << "Desea eliminar otro cliente? [S o N]" << endl;
                        char son; cin >> son;

                        if (son == 'N') {
                            cout << "Regresando a la Lista de Clientes..." << endl;
                            break;
                        }
                    }

                    cout<<endl;
                }

                    // Opción 4: Regresar al Menú
                else if (suboption == 4) {
                    cout << "Regresando al menu..." << endl;
                    cout<<endl;
                    break;
                }
            }
        }

            // Opción 2: Cuentas de ahorro
        else if (option == 2) {
            cout << "CUENTAS DE AHORRO" << endl;

            lista_cuentas_ahorro(cuentasAhorro);

            // Buscar el cliente

            // Bloquear o agregar una tarjeta de debito
        }

            // Opción 3: Cuentas de crédito
        else if (option == 3) {
            cout << "CUENTAS DE CREDITO" << endl;

            lista_cuentas_credito(cuentasCredito);

            // Buscar el cliente

            // Bloquear o agregar una tarjeta de credit
        }

            // Opción 4: Cerrar el programa
        else if (option == 4) {
            cout<<"Hasta pronto"<<endl;
            break;
        }
    }
}