#include "CRectangulo.h"
#include "CFecha.h"

void rectangulos(){
    int n;
    cout<<"Numero de objetos: "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++){
        int largo, ancho;
        cout<<"\nr"<<i<<endl;
        cout<<"Largo y ancho: "<<endl;
        cin>>largo>>ancho;

        CRectangulo r1(largo, ancho);

        cout<<"El perimetro de "<<"r"<<i<<" es: "<<r1.perimetro()<<endl;
        cout<<"El area de "<<"r"<<i<<" es: "<<r1.area()<<endl;
    }
}

void fechas(){
    // Fecha 13/11/2004
    CFecha f1(13,11,2004);

    f1.mostrarFecha();

    // Fecha 2004113
    CFecha f2(20041113);

    f2.mostrarFecha();
}

int main(){
//    rectangulos();
    fechas();

    return 0;
}
