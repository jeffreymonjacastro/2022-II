#include "CFecha.h"

CFecha::CFecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

CFecha::CFecha(long fecha) {
    // Como si el año se ingresara de formato 20170109
    anio = int(fecha/10000); // Extraer el anio
    mes = int((fecha-anio*10000)/100); // Extraer el mes
    dia = int(fecha-anio*10000-mes*100); // Extraer dia
}

void CFecha::mostrarFecha() {
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}


