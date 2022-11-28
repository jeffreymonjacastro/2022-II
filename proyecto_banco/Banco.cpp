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
                        string n; cin >> n;

                        for (auto & cliente : clientes) {
                            if(n == cliente.getNombre()){
                                cout<<"Cliente: "<<cliente.getNombre()<<" "<<cliente.getApellido()<<endl;
                                cout<<"Edad: "<<cliente.getEdad()<<endl;
                                cout<<"DNI: "<<cliente.getDni()<<endl;
                                cout<<endl;

                                if (cliente.getServicios().empty()) {
                                    cout << "El cliente no tiene cuentas asociadas" << endl;
                                } else {
                                    for (int j = 0; j < cliente.getServicios().size(); ++j) {
                                        cliente.getServicios()[j]->getDatos();
                                    }
                                }
                            } else
                                cout<<"No se encontro al cliente"<<endl;
                        }

                        cout<<endl;

                        cout << "Desea buscar a otro cliente? [S o N]:" << endl;
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

                        } else if (opcion_cuenta == 'C') {
                            auto nueva_cuenta_credito = crear_cuenta_credito();

                            cout<<"Se asocia la tarjeta de credito con bin: "<<nueva_cuenta_credito->getTarjeta()->getBin()<<" y fecha de caducidad: "<<nueva_cuenta_credito->getTarjeta()->getFechaCaducidad()<<endl;

                            cliente + nueva_cuenta_credito;

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
                        string n; cin>>n;

                        cout<<"Buscando cliente..."<<endl;

                        for (int i = 0; i < clientes.size(); ++i) {
                            if(n == clientes[i].getNombre()){
                                clientes.erase(clientes.begin()+i);
                                cout<<"Cliente eliminado"<<endl;
                            } else
                                cout<<"No se encontró al cliente"<<endl;
                        }

                        cout<<endl;

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
            while (true) {
                cout << "CUENTAS DE AHORRO" << endl;

                lista_cuentas_ahorro(clientes);

                cout<<endl;

                cout<<"1. Buscar Clientes"<<endl;
                cout<<"2. Regresar al Menu"<<endl;

                int suboption = seleccionar_opcion(2);

                cout << endl;

                // Opcion 1: Buscar el cliente
                if(suboption == 1){
                    cout<<"Ingrese el nombre del cliente que desea buscar:"<<endl;
                    string n; cin >> n;

                    for (auto & cliente : clientes) {
                        if(n == cliente.getNombre()){
                            cout<<"Cliente: "<<cliente.getNombre()<<" "<<cliente.getApellido()<<endl;
                            cout<<"Edad: "<<cliente.getEdad()<<endl;
                            cout<<"DNI: "<<cliente.getDni()<<endl;

                            for (int i = 0; i < cliente.getServicios().size(); ++i) {
                                if(cliente.getServicios()[i]->getTipoServicio() == "ahorro")
                                    cliente.getServicios()[i]->getDatos();
                            }

                            cout<<endl;
                            cout << "Desea agregar o bloquear una cuenta con el cliente seleccionado? [S o N]:" << endl;
                            char son; cin >> son;

                            if (son == 'S') {
                                cout<<"1. Agregar cuenta"<<endl;
                                cout<<"2. Bloquear cuenta"<<endl;

                                int suboption2 = seleccionar_opcion(2);

                                cout << endl;

                                // Opcion 1: Agregar cuenta
                                if (suboption2 == 1) {
                                    auto nueva_cuenta_ahorro = crear_cuenta_ahorro();

                                    cliente + nueva_cuenta_ahorro;

                                    cout << "Asociando Cuenta..." << endl;

                                    cout<<"Se asocia la tarjeta de debito con bin: "<<nueva_cuenta_ahorro->getTarjeta()->getBin()<<" y fecha de caducidad: "<<nueva_cuenta_ahorro->getTarjeta()->getFechaCaducidad()<<endl;
                                }

                                // Opcion 2: Bloquear cuenta
                                else if(suboption2 == 2){
                                    cout<<"Ingrese el BIN de la tarjeta: "<<endl;
                                    long b; cin>>b;

                                    for (int i = 0; i < cliente.getServicios().size(); ++i) {
                                        if(b == cliente.getServicios()[i]->getBIN()){
                                            cliente.getServicios().erase(cliente.getServicios().begin()+i);
                                            cout<<"Cuenta bloqueada"<<endl;
                                        } else
                                            cout<<"No se encontro la tarjeta"<<endl;
                                    }
                                }
                            }
                        } else
                            cout<<"No se encontro al cliente"<<endl;
                    }

                    cout<<endl;

                    cout << "Desea buscar a otro cliente? [S o N]:" << endl;
                    char son; cin >> son;

                    if (son == 'N') {
                        cout << "Regresando a la Lista de Clientes..." << endl;
                        cout<<endl;
                        break;
                    }
                }

                // Opción 2: Regresar al menú
                else if(suboption == 2){
                    cout << "Regresando al menu..." << endl;
                    cout<<endl;
                    break;
                }
            }
        }

        // Opción 3: Cuentas de crédito
        else if (option == 3) {
            cout << "CUENTAS DE CREDITO" << endl;

            lista_cuentas_credito(clientes);

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