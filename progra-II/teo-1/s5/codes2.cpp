#include <iostream>

using namespace std;

// puntero a funcion
double* f1(double arg){
    return new double(arg);
}

// funcion con punteros como argumentos

void f2(double* arg){
    *arg = 5.22;
}

int main(){
     double x = 6.3;
    double* z = new double(3.44);
    f2(z);
    cout<<"valor de *z: "<<*z<<endl;

    double* y = nullptr; // inicialmente no apuntaa al stack o heap
    y = f1(x);

    delete z;
    delete y;
}






