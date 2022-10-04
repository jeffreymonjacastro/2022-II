#include "CProfesor.h"

CProfesor::CProfesor() {}

CProfesor::CProfesor(string nombre, string apellidos, int edad, int horas) {
    this -> nombre = nombre;
    this -> apellidos = apellidos;
    this -> edad = edad;
    this -> horas = horas;
}

CProfesor::~CProfesor() {}

const string &CProfesor::getNombre() const {
    return nombre;
}

void CProfesor::setNombre(const string &nombre) {
    CProfesor::nombre = nombre;
}

const string &CProfesor::getApellidos() const {
    return apellidos;
}

void CProfesor::setApellidos(const string &apellidos) {
    CProfesor::apellidos = apellidos;
}

int CProfesor::getEdad() const {
    return edad;
}

void CProfesor::setEdad(int edad) {
    CProfesor::edad = edad;
}

int CProfesor::getHoras() const {
    return horas;
}

void CProfesor::setHoras(int horas) {
    CProfesor::horas = horas;
}

