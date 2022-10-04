#ifndef P2_CPP_CALUMNO_H
#define P2_CPP_CALUMNO_H

#include <iostream>

using namespace std;

class CAlumno {
private:
    string nombre;
    string apellidos;
    int edad;
    int creditos;
public:
    CAlumno();

    CAlumno(const string &nombre, const string &apellidos, int edad, int creditos);

    virtual ~CAlumno();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getApellidos() const;

    void setApellidos(const string &apellidos);

    int getEdad() const;

    void setEdad(int edad);

    int getCreditos() const;

    void setCreditos(int creditos);
};


#endif //P2_CPP_CALUMNO_H
