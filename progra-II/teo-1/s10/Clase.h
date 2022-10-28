#ifndef P2_CPP_CLASE_H
#define P2_CPP_CLASE_H
#include <iostream>
#include <vector>

using namespace std;

class Clase {
    string nombre;
    string codigo;

public:
    Clase(){codigo="",nombre="";}
    Clase(string _codigo, string _nombre): codigo(_codigo), nombre(_nombre){}

    string get_codigo(){return codigo;}
    string get_nombre(){return nombre;}

    ~Clase(){}
};

#endif //P2_CPP_CLASE_H
