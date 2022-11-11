#ifndef P2_CPP_RED_H
#define P2_CPP_RED_H

#include <iostream>
#include <vector>

using namespace std;

class Red {
private:
    string nombre;
    int tiempo;
public:
    //Constructores
    Red(){nombre = ""; tiempo = 0;}
    Red(string n, int t):nombre(n), tiempo(t){}

    // Destructor
    virtual ~Red(){}

    //getters y setters
    void setNombre(string n){nombre = n;}

    void setTiempo(int t){tiempo = t;}

    string getNombre(){return nombre;}

    int getTiempo(){return tiempo;}

    // Métodos
    void datos(){
        cout<<"Procesador: "<<nombre<<", tiempo de instruccion: "<<tiempo<<endl;
    }

    // Métodos Polimorfismo
    virtual void activacion(bool _activo){}
    virtual bool getActivo(){}
};

class x86: public Red{
    bool activo;
public:
    // Constructores
    x86(): activo(false){}
    x86(string n, int t, bool a): Red(n,t), activo(a){}

    // Destructor
    virtual ~x86(){}

    //getters y setters
    bool getActivo(){return activo;}

    // Métodos Polimorfismo{
    void activacion(bool _activo){
        activo = _activo;
    }
};


class ARM: public Red{
    bool activo;
public:
    // Constructores
    ARM(): activo(false){}
    ARM(string n, int t, bool a): Red(n,t), activo(a){}

    // Destructor
    virtual ~ARM(){}

    //getters y setters
    bool getActivo(){return activo;}

    // Métodos Polimorfismo{
    void activacion(bool _activo){
        activo = _activo;
    }
};


class MIPS: public Red{
    bool activo;
public:
    // Constructores
    MIPS(): activo(false){}
    MIPS(string n, int t, bool a): Red(n,t), activo(a){}

    // Destructor
    virtual ~MIPS(){}

    //getters y setters
    bool getActivo(){return activo;}

    // Métodos Polimorfismo{
    void activacion(bool _activo){
        activo = _activo;
    }
};


class SPARC: public Red{
    bool activo;
public:
    // Constructores
    SPARC(): activo(false){}
    SPARC(string n, int t, bool a): Red(n,t), activo(a){}

    // Destructor
    virtual ~SPARC(){}

    //getters y setters
    bool getActivo(){return activo;}

    // Métodos Polimorfismo{
    void activacion(bool _activo){
        activo = _activo;
    }
};


#endif //P2_CPP_RED_H
