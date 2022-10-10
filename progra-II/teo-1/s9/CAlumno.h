#ifndef P2_CPP_CALUMNO_H
#define P2_CPP_CALUMNO_H
#include <iostream>
#include "CCurso.h"

using namespace std;


class CAlumno {
private:
    string nombre;
    string apellidos;
    int creditos;
public:
    CAlumno();
    CAlumno(string, int);
    ~CAlumno();

    string get_nombre();
    int get_creditos();
    void aprobar(Ccurso* curso);

};


#endif //P2_CPP_CALUMNO_H
