#ifndef P2_CPP_CTRIANGULO_H
#define P2_CPP_CTRIANGULO_H

#include <iostream>
#include <vector>
#include <cmath>

typedef float decimal;
typedef double decimalD;

using namespace std;

// DECLARACIÓN DE UNA CLASE
// En el .h solo se declaran los métodos y atributos

class CTriangulo {

private:
    // Atributos de la clase
    decimal lado1, lado2, lado3;

    // Método semiperimetro() - Este método está en privado, por lo que no se muestra en el main
    decimal semiperimetro();

public:
    CTriangulo(); // Constructor

    CTriangulo(decimal _lado1, decimal _lado2, decimal _lado3);

    virtual ~CTriangulo(); // Destructor

    decimal perimetro();

    decimalD area();

    void setLados(vector<decimal> lados);
    vector<decimal> getLados(); //retorna los tres lados en un vector
};


#endif //P2_CPP_CTRIANGULO_H
