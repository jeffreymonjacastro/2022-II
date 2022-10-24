#include <iostream>

using namespace std;

// Clase base (superclase)
class Persona {
private:
    string nombre;

// Private para otras clases pero publico entre clases heredadas
protected:
    int edad;

public:
    Persona(){}
    Persona(string _n, int _e): nombre(_n), edad(_e) {} // Constructor por defecto y asignación

    // Entre clases virtuales y derivadas
    virtual ~Persona(){cout<<"Objeto de clase Persona es destruido"<<endl;}

    string get_nombre(){return nombre;}

    int get_edad(){return edad;}
};

// especificadores de acceso: Public, private, protected

//// Subclase heredada de la superclase
// Sintaxis:
// class <subclase>:public <superclase> {};

class Cientifico: public Persona {
private:
    string especialidad;
public:
    Cientifico(){}
    Cientifico(string _n, int _e, string _s): Persona(_n, _e), especialidad(std::move(_s)){}

    virtual ~Cientifico(){cout<<"Objeto de clase Cientifico destruido"<<endl;}

    string get_especialidad(){return especialidad;}
};


int main(){
    //  generar un puntero a objeto de clase Perosna e impimir sus datos
    auto Jose = new Persona("Jose", 30);

    cout<<"Persona creada, llamada "<<Jose->get_nombre()<<", y edad "<<Jose->get_edad()<<endl;

    // generar un puntero a objeto de clase Cientifico e impimir sus datos
    auto Sagan = new Cientifico("Carl Sagan", 50, "Astrofisico");

    cout<<"Cientifico creado, llamado "<<Sagan->get_nombre()<<", edad "<<Sagan->get_edad()<<" y especialidad "<<Sagan->get_especialidad()<<endl;

    // Al usar virtual en el destructor se elimina en conjunto las clases por la herencia
    delete Jose;
    delete Sagan;

    return 0;
}
