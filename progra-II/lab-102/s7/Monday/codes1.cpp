#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void imprimirvec(vector<int> &v){
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
}

int main(){

    vector<int> v; // Inicializando el vector (vacío)

    // Agregando elementos al vector vacío
    v.push_back(10);
    v.push_back(70);

    // Imprimiendo el vector (tradicional)
    imprimirvec(v);

    // Ota forma de crear un vector (10 elementos de valor 4)
    vector<int> v2(10, 4);

    // Otra forma de imprimir un vector (<iterator>)
    for(auto it = begin(v2); it != end(v2); it++){
        cout<<*it<<" ";
    }

    // Borrar elementos de un vector
    vector<int> v3 = {10, 20, 100, 90};

    // borra la última posición
//    v3.pop_back();

    // borra un elemento de una determinada posición
    v3.erase(begin(v3)+2);

    cout<<v3[2];



    return 0;
}