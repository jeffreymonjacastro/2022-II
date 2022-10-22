#include <iostream>
#include <vector>
#include <iomanip>
#include <iterator>

using namespace std;

int main(){
    vector<string> versiones = {"C++98", "C++03", "C++11", "C++14", "C++17", "C++20"};

    vector<int> fechas = {1998,2003,2011,2014,2017,2020};

    while (true) {
        cout << "----------MENU-----------" << endl;
        cout << "1. VISUALIZAR" << endl;
        cout << "2. AGREGAR VERSION" << endl;
        cout << "3. ELIMINAR" << endl;
        cout << "4. BUSCAR" << endl;
        cout << "5. SALIR" << endl;

        int n;
        cout<<"Ingresar opcion:"<<endl; cin>>n;

        if (n == 5)
            break;

        if (n == 1) {
            for (int i = 0; i < versiones.size(); ++i) {
                cout << i << " : " << versiones[i] << " - " << fechas[i] << endl;
            }
        } else if (n == 2) {
            string name;
            int anio;
            cout<<"Nombre de version:"<<endl; cin>>name;
            cout<<"Anio de publicacion:"<<endl; cin>>anio;

            versiones.push_back(name);
            fechas.push_back(anio);
        } else if (n == 3) {
            int buscar;
            cout<<"Tipo a buscar"<<endl; cin>>buscar;

            bool buton = true;

            for (int i = 0; i < fechas.size(); ++i) {
                if (buscar == fechas[i]){
                    versiones.erase(versiones.begin()+i);
                    fechas.erase(fechas.begin()+i);
                    buton = false;
                }
            }

            if (buton)
                cout<<"La version no se encuentra registrado"<<endl;
        } else if (n == 4){
            int buscar;
            cout<<"Tipo a buscar"<<endl; cin>>buscar;

            bool buton = true;

            for (int i = 0; i < fechas.size(); ++i) {
                if (buscar == fechas[i]){
                    cout<<"Version: "<<versiones[i]<<" publicacion: "<<fechas[i]<<endl;
                    buton = false;
                }
            }

            if (buton)
                cout<<"La version no se encuentra registrado"<<endl;
        }
    }
}