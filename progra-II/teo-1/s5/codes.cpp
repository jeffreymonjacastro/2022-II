#include <iostream>

using namespace std;

int main(){
    // memoria estática
    // Se necesita la dirección de una variable previamente
    double decimal = 3.444;
    // Apunta a un espacio en el stack
    double* ptr_decimal = &decimal; //puntero estático (pila, stack)

    // En C++: new (construye objeto y retorna el puntero a ese objeto) - Heap
    // delete: libera el espacio en memoria dinámica y borra el puntero
    // Ocupa un espacio en el HEAP
    // El ptr_heap apunta a la dirección de la memoria de un double

    double* ptr_heap = new double(3.444); // puntero dinámico (montón, heap)

    string* nombre = new string("Jeff");
    int* pi4 = new int();

    /*
    Otra forma

    double* ptr_heap = new double;
    *ptr_heap = 3.444;

    */

    // Generar dos doubles de forma dinámica (en el montón) y sumarlos
    double* pnum1 = new double;
    double* pnum2 = new double;

    cout<<"primer numero: "<<endl; cin>>*pnum1;
    cout<<"segundo numero: "<<endl; cin>>*pnum2;

    cout<<"Suma: "<<*pnum1+*pnum2<<endl;
    cout<<"Resta: "<<*pnum1-*pnum2<<endl;
    cout<<"Producto: "<<(*pnum1)*(*pnum2)<<endl;

    // liberar memoria dinámica
    delete ptr_heap; // se libera la memoria dinámica y se elimina el puntero
    delete nombre;
    delete pi4;
    delete pnum1;
    delete pnum2;

    return 0;
}