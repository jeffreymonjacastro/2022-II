// p2 - Vector

#include <iostream>
#include <vector>

using namespace std;

void intercambio(vector<int> &v1, vector<int> &v2, int inicio){
    int fin;

    if (v1.size() > v2.size())
        fin = v1.size();
    else
        fin = v2.size();


    for (int i = inicio; i < fin; i++) {
        int volatil = v1[i];
        v1[i] = v2[i];
        v2[i] = volatil;
    }
}

void imprimir(vector<int> v){
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<" ";
    }
}


int main(){
    int largo1, largo2;
    cout<<"tam 1:"<<endl; cin>>largo1;

    vector<int> v1(largo1);

    for (int i = 0; i < largo1; i++) {
        cout<<"vector 1:"<<endl;
        cin>>v1[i];
    }

    cout<<"tam 2:"<<endl; cin>>largo2;

    vector<int> v2(largo2);

    for (int i = 0; i < largo2; i++) {
        cout<<"vector 2:"<<endl;
        cin>>v2[i];
    }

    int posicion;
    cout<<"posicion :"<<endl;
    cin>>posicion;

    cout<<endl;
    imprimir(v1);
    imprimir(v2);
    cout<<endl;

    intercambio(v1, v2, posicion);

    cout<<"salida vector 1: "<<endl;

    imprimir(v1);

    cout<<"\nsalida vector 2: "<<endl;

    imprimir(v2);

    return 0;
}