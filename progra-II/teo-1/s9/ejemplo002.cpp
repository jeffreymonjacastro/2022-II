#include "CAlumno.h"
#include "CCurso.h"

int main(){
    // CRear un puntero a alumno y curso

    CAlumno* pAlumno = new CAlumno("Jose", 40);
    CCurso* pCurso = new CCurso("Progra 2", 4);

    //Pedir la cantidad de creditos antes de llevar el curso
    cout<<"Creditos antes de llevar "<<pCurso->get_nombre()<<": "<<pAlumno->get_creditos()<<endl;

    // Generar una función que apruebe el curso y sume los créditos al total del alumno
    // creditos al total del alumno
    pAlumno->aprobar(pCurso);

    // imprima la cantidad final de creditos del aluno
    cout<<"Creditos despues de llevar "<<pCurso->get_nombre()<<": "<<pAlumno->get_creditos()<<endl;

    // elimine los punteros
    delete pAlumno;
    delete pCurso;

    return 0;
}