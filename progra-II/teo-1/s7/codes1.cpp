#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void imprimir_vector(vector<int> &v){
    cout<<"{ ";
    for(int i = 0; i<v.size()-1; i++)
        cout << v[i] << ", ";
    cout<<v[v.size()-1]<<" }";
    cout<<endl;
}

void ejemplo1(){
    // Declare un vector de tamaño cero, con elemenos de tipo entero, pero sin valores
    vector<int> v1(10);

    // el vector tiene una capacidad inicial cero
    cout<<"capacidad del vector (v1): "<<v1.capacity()<<endl;
    cout<<"tamanio del vector (v1): "<<v1.size()<<endl;

    // Cada vez que se agrega un elemento, se incrementa la capacidad y eso toma tiempo
    // por eso, es mejor reservar memoria inicialmente
    v1.reserve(50);
    cout<<"capacidad del vector (v1): "<<v1.capacity()<<endl;
    cout<<"tamanio del vector (v1): "<<v1.size()<<endl;

    // Declare un vector con valores predefinidos
    vector<int> v2 = {1,2,3,4,5,6,7,8};

    //Imprima el vector
    cout<<"v2: ";
    imprimir_vector(v2);

    // Defina un vector de tamaño predeterminado, y valores constantes
    vector<int> v3(15, 3);

    cout<<"v3: ";
    imprimir_vector(v3);

    // Vector con 12 elementos inicializados en cero
    vector<int> v4(12);

    cout<<"v4: ";
    imprimir_vector(v4);

    // Cambiar el tamaño del vector
    v4.resize(20);
    cout<<"capacidad del vector (v4): "<<v4.capacity()<<endl;
    cout<<"tamanio del vector (v4): "<<v4.size()<<endl;

    // Ajustar la capacidad del vector
    v4.reserve(50);
    cout<<"capacidad del vector (v4): "<<v4.capacity()<<endl;
    cout<<"tamanio del vector (v4): "<<v4.size()<<endl;

    // borrar el vector (su capacidad y tamaño se convierten en 0)
    v4.clear();
    v4.shrink_to_fit(); // Reduce la capacidad al tamaño actual
    cout<<"v4: ";

    cout<<"capacidad del vector (v4): "<<v4.capacity()<<endl;
    cout<<"tamanio del vector (v4): "<<v4.size()<<endl;
}

void ejemplo2(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    imprimir_vector(v);
}


int main(){
    ejemplo1();
    

    return 0;
}