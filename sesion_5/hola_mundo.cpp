// C++
/// Tipado

#include <iostream>
#include <vector>

using namespace std;

// Python
/*
    /// Buscar el tipo de variable
    /// Asemejarlo
    a = [true, 5, 6.7, [], {}, (), 4i]

 */

// POO
class Persona {
private:
    string name;
public:
    Persona(string n): name(n){}

    virtual ~Persona(){}

    void caminar(){
        cout<<name<<"está caminando"<<endl;
    }
};







int recursividad(int n){
    if (n == 1)
        return 1;
    else
        return n + recursividad(n-1);
}










int main(){
//    cout<<recursividad(5)<<endl;
//
//    float a = 19.9;
//    int b = 8;
//    string cadena = "Hello";
//    char c = 'D';
//
//
//    vector<int> enteros = {1,2,3};
//    vector<string> cadenas = {"hola", "mundo"};
//
//
////    cout<<a + b;

    // punteno = dinamico
    int** pMatriz= new int* [5];

    for (int i = 0; i < 5; ++i) {
        pMatriz[i] = new int[5];
    }



    return 0;
}
