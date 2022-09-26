#include "funciones.h"

// Función para ingresar datos a un vector
void ejemplo001(){
    number n;

    cout<<"Ingrese n:"<<endl; cin>>n;

    vector<number> v(n);

    for(auto it = begin(v); it != end(v); it++){
        cout<<"Ingrese el valor: "<<endl;
        cin>>*it;
    }

    cout<<"Los valores son: "<<endl;
    for(auto it = begin(v); it != end(v); it++){
        cout<<*it<<" ";
    }
}

// Función para ingresar datos random a un vector
void ejemplo002(){
    number n;

    cout<<"N: "<<endl; cin>>n;

    vector<number> v(n);

    for(auto it = begin(v); it != end(v); it++){
        *it = rand()%30;
    }

    for(auto it = begin(v); it != end(v); it++){
        cout<<*it<<" ";
    }

}

// Función para hallar promedio
float promedio(vector<number> &v){
    int sum = 0;

    for(auto it = begin(v); it != end(v); it++){
        sum += *it;
    }

    return sum/v.size();
}


// Función para sumar
int sum_value(vector<number> &v, number x){
    int sum = 0;

    for(auto it = begin(v); it != end(v); it++){
        if (*it < x)
            sum += *it;
    }

    return sum;
}

// Función crear nuevo vector
vector<float> dif_vec(vector<number> &v, float prom){
    vector<float> v2;

    for(int i = 0; i<v.size(); i++){
        v2.push_back(prom - v[i]);
    }

    return v2;
}


// Función
void ejemplo003(){
    number n, x;

    cout<<"Ingrese n: "<<endl; cin>>n;

    vector<number> v(n);

    for(auto it = begin(v); it != end(v); it++){
        *it = rand()%99;
    }

    for(auto it = begin(v); it != end(v); it++){
        cout<<*it<<" ";
    }

    float prom = promedio(v);

    cout<<"\nEl promedio es: "<<prom<<endl;

    cout<<"Ingrese el valor: "<<endl; cin>>x;

    cout<<"La suma menor del valor "<<x<<" es: "<<sum_value(v,x)<<endl;

    cout<<"A: "<<endl;

    vector<float> v2 = dif_vec(v, prom);

    for(auto it = begin(v2); it != end(v2); it++){
        cout<<*it<<" ";
    }
}
