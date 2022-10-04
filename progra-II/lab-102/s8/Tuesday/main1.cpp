#include "CAlumno.h"
#include "CProfesor.h"

// Template?
template <typename T>

void mostrarDatosBasicos(T &objeto){
    cout<<"----------"<<endl;
    cout<<"Nombre: "<<objeto.getNombre()<<endl;
    cout<<"Apellidos: "<<objeto.getApellidos()<<endl;
    cout<<"Edad: "<<objeto.getEdad()<<endl;
}

int main(){
    // Primera forma
    CAlumno a1;

    // Colocando sus atributos
    a1.setNombre("Felipe");
    a1.setApellidos("Carranza Arriola");
    a1.setEdad(19);
    a1.setCreditos(100);

    CAlumno a2;
    a2.setNombre("Maria");
    a2.setApellidos("Flores");
    a2.setEdad(20);
    a2.setCreditos(50);

    mostrarDatosBasicos<CAlumno>(a1);
    mostrarDatosBasicos<CAlumno>(a2);

    CProfesor p1;
    p1.setNombre("Jose");
    p1.setApellidos("Campos");
    p1.setEdad(35);
    p1.setHoras(20);

    mostrarDatosBasicos<CProfesor>(p1);

    // Otra forma
//    CAlumno Jeffrey("Jeffrey", "Monja", 17, 20);
//
//    cout<<"Bienvenido "<<Jeffrey.getNombre()<<" "<<Jeffrey.getApellidos()<<endl;

    return 0;
}