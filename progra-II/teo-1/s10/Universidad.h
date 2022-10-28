#ifndef P2_CPP_UNIVERSIDAD_H
#define P2_CPP_UNIVERSIDAD_H

#include "Alumno.h"

class Universidad{
    string nombre;
    vector<Clase*> clases;
    vector<Alumno*> alumnos;
public:
    Universidad(){nombre="";}
    Universidad(string _nombre): nombre(_nombre){}

    string get_nombre(){return nombre;}

    // Método de agregación
    void agregar_alumno(Alumno* alumno){alumnos.push_back(alumno);}
    void agregar_clase(Clase* clase){clases.push_back(clase);}

    int get_cantidadAlumnos(){return alumnos.size();}

    ~Universidad(){}
};

#endif //P2_CPP_UNIVERSIDAD_H
