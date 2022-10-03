#include <iostream>

using namespace std;

// Una clase: Agrupa objetos de características comunes
// Enlaza atributos(propiedades) y métodos(funciones) de un objeto

class Triangulo {
private:
    //atributos - Se recomienda tener los atributos privados
    string color;
    double longitud_lado1 = 0;
    double longitud_lado2 = 0;
    double longitud_lado3 = 0;

public:
    // métodos - Generalmente en publico
    // setters: Dar, modificar
    void set_color(string c){color = c;}

    void set_lados(double a, double b, double c){
        longitud_lado1 = a;
        longitud_lado2 = b;
        longitud_lado3 = c;
    }

    // getters: Obtener datos
    string get_color(){return color;}

    double get_lado1(){return longitud_lado1;}
    double get_lado2(){return longitud_lado2;}
    double get_lado3(){return longitud_lado3;}

    void imprimir_datos(){
        cout << "Triangulo de color: "<<get_color()<<endl;
        cout<<"Triangulo de lados: "<<get_lado1()<<", "<<get_lado2()<<", "<<get_lado3()<<endl;
    }
};

int main(){
    int x = 4; // Ejemplo de definicion de un entero
    Triangulo A; // Ejemplo de definicion de un objeto de clase

    // A.color = "verde"; NO se pueden modificar atributos al estar en privados
    A.set_color("rojo"); // Modificando el atributo color

    A.set_lados(2.1, 6.1, 8.4); // Modificando los atributos lados

    A.imprimir_datos(); // Llamando al método

    // Creando otro objeto con la misma clase
    Triangulo B;
    B.set_color("azul");
    B.set_lados(3.1, 8.1, 1.4);
    B.imprimir_datos();

    return 0;
}