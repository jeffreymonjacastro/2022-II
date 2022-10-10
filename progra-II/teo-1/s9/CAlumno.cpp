#include "CAlumno.h"
#include "CCurso.h"

CAlumno::CAlumno() {};

CAlumno::CAlumno(string n, int c) {
    nombre = n;
    creditos = c;
}

string CAlumno::get_nombre() {return nombre;}
int CAlumno::get_creditos() {return creditos;}

void CAlumno::aprobar(CCurso* curso) {
    this->creditos += curso ->get_creditos();
}