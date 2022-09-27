#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

// Detecta cuando un elemento se repite más de una vez
bool isChar(vector<char> &v, char element){
    for(auto iter = begin(v); iter != end(v); iter++){
        if(*iter == element) return true;
    }

    return false;
}

void frecuency(vector<char> &v, vector<int> &u){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(v[i] == v[j]){
                u[i] = u[i] + 1;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Ingrese n: "<<endl; cin>>n; // Tamaño del vector

    vector<char> v(n); // Declarando el espacio del vector

    vector<char> v2; //Vector sin valores

    // Ingresando datos al vector
    for(int i = 0; i < n; i++){
        cout<<(i+1)<<":";
        cin>>v[i];
    }

    // Recibe las letras no repetidas
    for(int i = 0; i < n; i++){
        if(!isChar(v2, v[i]))
            v2.push_back(v[i]);
    }

    vector<int> v3(v2.size()); // cantidad de veces de cada char

    for(int i = 0; i < n; i++) cout<<v[i]<<" ";
    cout<<endl;

    for(int i = 0; i < v2.size(); i++) cout<<v2[i]<<" ";
    cout<<endl;

    frecuency(v,v3); // Hallando la frecuencia de cada palabra

    for(int i = 0; i < v3.size(); i++) cout<<v3[i]<<" ";
    cout<<endl;

    //Creando pair<>
    vector<pair<char,int>> vv;

    for(int i = 0; i < v2.size(); i++){
        vv.push_back(make_pair(v2[i],v3[i]));
    }

    //Imprimiendo pairs
    for(int i = 0; i < vv.size(); i++){
        cout<<"<"<<vv[i].first<<", "<<vv[i].second<<">"<<endl;
    }
    cout<<endl;

    // Ordenando los elementos
    sort(vv.begin(), vv.end());
    for(int i = 0; i < vv.size(); i++){
        cout<<"<"<<vv[i].first<<", "<<vv[i].second<<">"<<endl;
    }
}
