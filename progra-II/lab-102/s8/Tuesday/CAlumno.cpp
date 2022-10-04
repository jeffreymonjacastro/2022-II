#include "CAlumno.h"

CAlumno::CAlumno() {}

CAlumno::CAlumno(const string &nombre, const string &apellidos, int edad, int creditos){
    this -> nombre = nombre;
    this -> apellidos = apellidos;
    this -> edad = edad;
    this -> creditos = creditos;
}

CAlumno::~CAlumno() {}


const string &CAlumno::getNombre() const {
    return nombre;
}

void CAlumno::setNombre(const string &nombre) {
    CAlumno::nombre = nombre;
}

const string &CAlumno::getApellidos() const {
    return apellidos;
}

void CAlumno::setApellidos(const string &apellidos) {
    CAlumno::apellidos = apellidos;
}

int CAlumno::getEdad() const {
    return edad;
}

void CAlumno::setEdad(int edad) {
    CAlumno::edad = edad;
}

int CAlumno::getCreditos() const {
    return creditos;
}

void CAlumno::setCreditos(int creditos) {
    CAlumno::creditos = creditos;
}
