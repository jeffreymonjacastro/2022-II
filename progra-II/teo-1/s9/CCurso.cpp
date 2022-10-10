#include "CCurso.h"

CCurso::CCurso() {}

CCurso::CCurso(string n, int c) {
    nombre = n;
    creditos = c;
}

string CCurso::get_nombre() {return nombre;}
int CCurso::get_creditos() {return creditos;}

CCurso::~CCurso() {}