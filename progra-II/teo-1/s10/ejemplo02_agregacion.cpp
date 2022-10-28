// Agregacion: objeto de clase A "tiene un" objeto de clase B
// B -<> A

#include "Universidad.h"

// generar las clases Alumno, Clase, Universidad, tal que se pueda agregar (adicionar) clases a los alumnos y alumnos a a la Universidad

// Paso 1: Crear los atributos de clases dentro de clases
// Paso 2: Métodos de agregación

int main(){
    // generar objeto de clase Universidad (no es puntero)
    Universidad UTEC;

    // generar alumnos (punteros de clase) y agregarlos a la universidad
    Alumno* Jose = new Alumno("879373", "Jose", 30);

    UTEC.agregar_alumno(Jose);

    Alumno* Jorge = new Alumno("960272", "Jorge", 25);

    UTEC.agregar_alumno(Jorge);

    Alumno* Carla = new Alumno("200272", "Carla", 22);

    UTEC.agregar_alumno(Carla);

    // Imprimir la cantidad total de alumnos en la universidad, y sus datos
    cout<<"Cantidad total de alumnos: "<<UTEC.get_cantidadAlumnos()<<endl;

    // Generar dos cursos y agregarlos a la Universidad
    Clase* Progra2 = new Clase("CS1112", "Programacion 2");

    UTEC.agregar_clase(Progra2);

    // Agregar los cursos a alumnos e imprimir datos de los cursos de los alumnos
    Jose->agregar_clase(Progra2);


    return 0;
}