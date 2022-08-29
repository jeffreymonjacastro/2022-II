#include <iostream>

using namespace std;

typedef long int tipo_Entero; // sirve para interpretar enteros muy grandes
// Typedef es para definir un tipo. Long int es el tipo que se define y tipo_Entero es el nombre para redefinir el tipo

tipo_Entero LeeSegundos() {
    tipo_Entero n;

    do {
        cout<<"Segundos (>1):"; cin>>n;
    } while (n<=1);

    return n;
}

void ConvertirAHorasMinSeg(tipo_Entero Segundos, tipo_Entero& horas, tipo_Entero& min, tipo_Entero& seg){
    horas = Segundos/3600;
    Segundos %= 3600;
    min = Segundos/60;
    seg = Segundos%60;
}

void imprimir(tipo_Entero h, tipo_Entero m, tipo_Entero s){
    cout<<"Equivale a: ";
    cout<<h<<" horas, "<<m<<" minutos, "<<s<<" segundos";
}

int main(){
    tipo_Entero segundos = 0;
    tipo_Entero Horas=0, Min=0, Seg=0;

    segundos = LeeSegundos();
    ConvertirAHorasMinSeg(segundos, Horas, Min, Seg);

    imprimir(Horas, Min, Seg);

    return 0;
}