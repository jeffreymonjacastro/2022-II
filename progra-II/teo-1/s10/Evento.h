#ifndef P2_CPP_EVENTO_H
#define P2_CPP_EVENTO_H

#include "Fecha.h"

using namespace std;

class Evento {
    string nombre;
    Hora hora;
    Fecha fecha;
public:
    Evento(){}
    Evento(string _n, int _hora, int _minuto, int _dia, int _mes, int _anio): nombre(_n), fecha(_dia, _mes, _anio), hora(_hora, _minuto){}

    void imprimirDatos(){
        cout<<"Evento: "<<nombre<<endl;
        cout<<"Fecha: "<<fecha.getDia()<<" de "<<fecha.getMes()<<" de "<<fecha.getAnio()<<endl;
        cout<<"Hora: "<<hora.getHora()<<" horas con "<<hora.getMinuto()<<" minutos"<<endl;
    }


    ~Evento(){cout<<"Evento destruido"<<endl;}
};


#endif //P2_CPP_EVENTO_H
