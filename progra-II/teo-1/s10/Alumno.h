#ifndef P2_CPP_ALUMNO_H
#define P2_CPP_ALUMNO_H

#include "Clase.h"

class Alumno {
    string codigo;
    string nombre;
    int edad;
    vector<Clase*> clases;
public:
    Alumno(){codigo="",nombre="", edad=0;}
    Alumno(string _codigo, string _nombre, int _edad): codigo(_codigo), nombre(_nombre), edad(_edad){}

    string get_codigo(){return codigo;}
    string get_nombre(){return nombre;}

    void agregar_clase(Clase* clase){clases.push_back(clase);}

    ~Alumno(){cout<<"Alumno destruido"<<endl;}
};

#endif //P2_CPP_ALUMNO_H
