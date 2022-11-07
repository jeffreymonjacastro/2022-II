#include <iostream>
using namespace std;
// La sobrecarga de operadores permite redefinir ciertos operadores,
// como '+' y '-', para usarlos con las clases que hemos definido.
// Se llama sobrecarga de operadores cuando reutilizamos el mismo operador
// y el compilador decide cómo usar este operador dependiendo sobre qué opera.
class Entero {
private:
    int dato;
public:
    // constructores
    Entero() {dato=0; }
    Entero(int _dato) { dato= _dato; }
    // getter
    int getDato() {return dato;}

    // metodo suma para sumar los valores de dos Enteros
//    Entero suma(Entero y){
//        return Entero(this->dato + y.dato);
//    }

    friend Entero suma(Entero x, Entero y);

    // sobrecarga del operador + para lograr el mismo efecto
    friend Entero operator+(Entero x, Entero y);

    // sobrecarga del operador *
    friend Entero operator*(Entero x, Entero y);

    // sobrecarga del operador ++
    friend Entero operator++(Entero y);

    // sobrecarga del operador << (de insercion), >> (de extraccion)
    friend ostream& operator<<(ostream& o, Entero e);
};

class Decimal{
    double dato;
public:
    Decimal() { dato=0;}
    Decimal(double _dato) { dato= _dato; }
    double getDato() {return dato;}

};

Entero suma(Entero x, Entero y){
    return Entero(x.dato + y.dato);
}

// sobrecargar un operador es cambiar la funcionalidad del mismo (redefinir) en el
// contexto del algoritmo usado

// Función o método externo
// Función suma
Entero operator+(Entero x, Entero y){
    return Entero(x.dato + y.dato);
}

// Función producto (Operador binario)
Entero operator*(Entero x, Entero y){
    return Entero(x.dato*y.dato);
}

// Función prefix increment (Operador unario)
Entero operator++(Entero y){
    ++y.dato;
    return y;
}


ostream& operator<<(ostream& o, Entero e){
    o<<e.dato;
    return o;
}

int main() {
// con enteros (int) puedo hacer lo siguiente:
    int a=10, b=40;
    int c;
    c= a+b;
    cout << a<<" + " <<b<<" = "<< c << "\n";
// Si defino una clase Entero que representa un int
    Entero A(10);
    Entero B(40);
    Entero C,D;

    // puedo usar el metodo suma()
    C = suma(A, B);

    // debo usar getters para imprimir los datos
    cout << A.getDato()<<" + " <<B.getDato()<<" = "<< C.getDato() << "\n";

    // utilizar la sobrecarga al operador +
    C = A+B;
    cout << A<<" + " <<B<<" = "<< C << "\n";

    // utilizar la sobrecarga al operador *
    D = A*B;
    cout << A<<" * " <<B<<" = "<< D << "\n";

    // utilizar la sobrecarga al operador ++
    cout<<"++C: "<<++C<<endl;



    return 0;
}
