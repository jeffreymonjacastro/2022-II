#include <iostream>

using namespace std;

// Funciones Header
void recibirDatos();

void imprimirValores(int* ptr1, int* ptr2);

void calcularValores(int* ptr1, int* ptr2);


int main(){
    recibirDatos();

    return 0;
}


// Primera función
void recibirDatos(){
    int n1, n2;

    do {
        cout<<"Ingrese n1: "<<endl; cin>>n1;
    } while(n1 > 7);

    do {
        cout<<"Ingrese n2: "<<endl; cin>>n2;
    } while(n2 > 7);

    int *ptr_n1 = &n1;
    int *ptr_n2 = &n2;

    imprimirValores(ptr_n1,ptr_n2);
}

// Segunda función
void imprimirValores(int* ptr1, int* ptr2){
    calcularValores(ptr1, ptr2);

    cout<<"La direccion de n1 es: "<<ptr1<<endl;
    cout<<"El nuevo valor de n1 es: "<<*ptr1<<endl;

    cout<<"La direccion de n2 es: "<<ptr2<<endl;
    cout<<"El nuevo valor de n2 es: "<<*ptr2<<endl;
}

// Tercera función
void calcularValores(int* ptr1, int* ptr2){
    int temp;

    temp = *ptr1;

    *ptr1 = (*ptr1) * (*ptr2);

    *ptr2 = pow(temp, *ptr2);
}

