#include "CTriangulo.h"

// IMPLEMENTACIÓN DE UNA CLASE
// En el .cpp solo se utilizan los método y atributos del .h

// Constructor (Crea el objeto)
CTriangulo::CTriangulo()= default;

CTriangulo::CTriangulo(decimal l1, decimal l2, decimal l3){
    this -> lado1 = l1;
    this -> lado2 = l2;
    this -> lado3 = l3;
}

// Destructor (elimina el objeto)
CTriangulo::~CTriangulo()= default;


decimalD CTriangulo::area(){
    decimal sp = semiperimetro();

    return sqrt(sp*(sp - this->lado1)*(sp - this->lado2)*(sp - this->lado3));
}

decimal CTriangulo::semiperimetro(){
    return(this->lado1 + this->lado2 + this->lado3)/2;
}

decimal CTriangulo::perimetro(){
    return this->lado1 + this->lado2 + this->lado3;
}

void CTriangulo::setLados(vector<decimal> lados) {
    this -> lado1 = lados[0];
    this -> lado2 = lados[1];
    this -> lado3 = lados[2];
}

vector<decimal> CTriangulo::getLados() {
    vector<decimal> v = {this->lado1, this->lado2, this->lado3};
    return v;
}