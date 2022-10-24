#ifndef P2_CPP_FAMILIA_H
#define P2_CPP_FAMILIA_H

#include <iostream>
#include <vector>

using namespace std;

class Familia{
protected:
    string apellido;
public:
    //Constructores
    Familia(){apellido="";}
    Familia(string a): apellido(a){}

    // setters y getters
    void set_apellido(string a){apellido=a;}
    string get_apellido(){return apellido;}

    // usamos métodos virtuales y métodos virtuales puros para elegir el método correcto
    // al llamar a una clase base o derivada
    virtual string get_nombre() = 0; // método virtual puro (que no tiene definicion). Se define en la subclase y define una clase abstracta

    virtual void Seguro() = 0;
    virtual void Bienes() = 0;


    // destructor
    virtual ~Familia(){cout<<"Objeto de clase Familia destuido"<<endl;}
};


#endif //P2_CPP_FAMILIA_H
