// p3 - Clases

#include "imagen.h"

int main(){
    srand(time(nullptr));

    int width1, height1, width2, height2;
    int** M1 = nullptr;
    int** M2 = nullptr;

    cout<<"Primera matriz: "<<endl;
    cout<<"width height: "<<endl; cin>>width1>>height1;

    cout<<"Segunda matriz: "<<endl;
    cout<<"width height: "<<endl; cin>>width2>>height2;

    Image I1(width1, height1, M1);
    Image I2(width2, height2, M2);

    I1.generarMatriz();
    I2.generarMatriz();

    I1.girarHorario();
    I2.girarAntihorario();


    return 0;
}
