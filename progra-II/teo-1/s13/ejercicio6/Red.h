#ifndef P2_CPP_RED_H
#define P2_CPP_RED_H

#include <iostream>

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

    // Métodos Polimorfismo
    virtual void datos(){
        cout<<"Procesador: "<<nombre<<", tiempo de instruccion: "<<tiempo<<endl;
    }
};

class x86: public Red{
public:
    // Constructores
    x86(){}
    x86(string n, int t): Red(n,t){}

    // Destructor
    virtual ~x86(){}

    //getters y setters

    // Métodos Polimorfismo
    void datos(){
        Red::datos();
    }
};


class ARM: public Red{
public:
    // Constructores
    ARM(){}
    ARM(string n, int t): Red(n,t){}

    // Destructor
    virtual ~ARM(){}

    //getters y setters

    // Métodos Polimorfismo
    void datos(){
        Red::datos();
    }
};


class MIPS: public Red{
public:
    // Constructores
    MIPS(){}
    MIPS(string n, int t): Red(n,t){}

    // Destructor
    virtual ~MIPS(){}

    //getters y setters

    // Métodos Polimorfismo
    void datos(){
        Red::datos();
    }
};


class SPARC: public Red{
public:
    // Constructores
    SPARC(){}
    SPARC(string n, int t): Red(n,t){}

    // Destructor
    virtual ~SPARC(){}

    //getters y setters

    // Métodos Polimorfismo
    void datos(){
        Red::datos();
    }
};

#endif //P2_CPP_RED_H
