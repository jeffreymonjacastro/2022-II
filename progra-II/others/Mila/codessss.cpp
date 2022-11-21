#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

void menu(char &op);

void borrarEstrella(vector<string> &vec, vector<char> &tipos);

void agregarEstrella(vector<string> &vec, vector<char> &tipos);

void buscarEstrella(vector<string> &vec, vector<char> &tipos);

void ordenarEstrellas(vector<string> &vec, vector<char> &tipos);

void imprimir(vector<string> &vec,vector<char> &tipos);

void buscarEstrella2 (vector <string> &vec, vector<char> &tipos);


int main() {
    vector<string> estrellas={"Canopus","Antares"};
    vector<char> tipos = {'C', 'A'};
    imprimir(estrellas, tipos);

    char op;
    do {
        menu(op);
        switch(op){
            case 'b': borrarEstrella(estrellas, tipos); break;
            case 'a': agregarEstrella(estrellas, tipos); break;
            case 'f': buscarEstrella2(estrellas, tipos); break;
            case 'o': ordenarEstrellas(estrellas, tipos); break;
        }
    }while(op != 's');
    return 0;
}


void menu(char &op) {
    cout << "\nMenu: \nb Borrar \na Agregar \nf Buscar \no Ordenar \nop:";
    cin>>op;
}
void borrarEstrella(vector<string> &vec, vector<char> &tipos){
    string nombre;
    cout << "Ingrese nombre de estrella a borrar: ";
    cin >> nombre;

    for (int i=0; i < vec.size(); i++){
        if (nombre == vec[i]) {
            vec.erase(begin(vec) + i );
            tipos.erase(begin(tipos) + i); }
    }
    imprimir(vec, tipos);
}
void agregarEstrella(vector<string> &vec, vector<char> &tipos){
    string nombre; char tipo;

    cout << "Estrella: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Tipo: ";
    cin >> tipo;
    vec.emplace_back(nombre);
    tipos.emplace_back(tipo);
    imprimir(vec, tipos);
}


void buscarEstrella(vector<string> &vec, vector<char> &tipos){
    string nombre;
    cout<< "Estrella:";
    cin.ignore();
    getline(cin, nombre);

    auto it = std::find(vec.begin(), vec.end(), nombre);
    if (it != vec.end()) {
        int index = it - vec.begin();
        cout << "\n" << vec[index];
        cout << "\t" << tipos[index];
    }
}


void buscarEstrella2 (vector <string> &vec, vector<char> &tipos){
    string nombre;
    cout << "Estrella: ";
    cin >> nombre;

    for (int i=0; i < vec.size(); i++){
        if (nombre == vec[i]){
            cout << "\n" << vec[i];
            cout << "\t" << tipos[i];
        }
    }

}

void ordenarEstrellas(vector<string> &vec, vector<char> &tipos){

    //funcion de c++
    //sort(vec.begin(), vec.end());
    //imprimir(vec, tipos);

    //ordenamiento burbuja
    string aux = vec[0];
    char aux2 = tipos[0];
    for (int i=0; i < vec.size(); i++){
        for (int j=0; j < vec.size(); j++){
            if (vec[i] < vec[j]) {  // si funciona
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;  // bota el mayor al ultimo

                aux2 = tipos[i];
                tipos[i] = tipos[j];
                tipos[j] = aux2;



            }
        }
    }
    imprimir(vec, tipos);

}


void imprimir(vector<string> &vec,vector<char> &tipos){
    for(int i=0; i < vec.size(); i++) {
        cout << left << setw(10) << vec[i] << "\t" << tipos[i] << endl;
    }
}