#ifndef P2_CPP_CPROFESOR_H
#define P2_CPP_CPROFESOR_H

#include <iostream>

using namespace std;

class CProfesor {
private:
    string nombre;
    string apellidos;
    int edad;
    int horas;
public:
    CProfesor();

    CProfesor(string nombre, string apellidos, int edad, int horas);

    ~CProfesor();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getApellidos() const;

    void setApellidos(const string &apellidos);

    int getEdad() const;

    void setEdad(int edad);

    int getHoras() const;

    void setHoras(int horas);


};


#endif //P2_CPP_CPROFESOR_H
