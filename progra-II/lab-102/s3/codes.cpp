#include <iostream>
#include <cmath>

using namespace std;

void ejercicio001(){
    int n_lados;
    cout<<"Lados: "; cin>>n_lados;

    while(n_lados < 3 or n_lados > 10){
        cout<<"Lados: "; cin>>n_lados;
    }

    int xTemp, yTemp, s = 0;
    int xInit, yInit;
    int x, y;

    for(int i = 1; i <= n_lados; i++){
        cout<<"Vertice num "<<i<<endl;
        cout<<"x = "; cin>>x;
        cout<<"y = "; cin>>y;

        if(i>1){
            s = s + sqrt(pow(xTemp-x, 2) + pow(yTemp-y, 2));
        } else {
            xInit = x;
            yInit = y;
        }

        xTemp = x;
        yTemp = y;
    }

    switch (n_lados) {
        case 3:
            cout<<"Triangulo"<<endl; break;
        case 4:
            cout<<"Cuadrilatero"<<endl; break;
        case 5:
            cout<<"Pentagono"<<endl; break;
        case 6:
            cout<<"Hexagono"<<endl; break;
        case 7:
            cout<<"Heptagono"<<endl; break;
        case 8:
            cout<<"Octogono"<<endl; break;
        case 9:
            cout<<"Nonagono"<<endl; break;
        case 10:
            cout<<"Hexagono"<<endl; break;
        default:
            cout<<"A"; break;
    }

    s = s + sqrt(pow(xTemp-xInit, 2) + pow(yTemp-yInit, 2));
    cout<<"Su perimetro es: "<<s;
}

void ejercicio002(){
    int n;

    while(true){
        cout<<"Ingrese la denominacion: "; cin>>n;

        switch (n) {
            case 1: cout<<"G W"<<endl; break;
            case 2: cout<<"T J"<<endl; break;
            case 5: cout<<"A L"<<endl; break;
            case 10: cout<<"A H"<<endl; break;
            case 20: cout<<"U S G"<<endl; break;
            case 100: cout<<"B F"<<endl; break;
            case 500:
            case 1000:
            case 5000:
            case 10000:
                cout<<"Denominacion descontinuada"<<endl; break;
            default: cout<<"No exista la denominacion"<<endl;
        }
    }
}

void ejercicio003(){
    int n;

    do{
        cout<<"Numero [mayor a 10]: "; cin>>n;
    }while(n<=10);

    int right = n + 1;
    int left = n - 1;

    while(true){
        int counter = 0;
        for(int i=1; i<=right; i++){
            if (right%i == 0) counter++;
            if (counter > 2) break;
        }
        if (counter == 2) break;
        right++;
    }

    while(true){
        int counter = 0;
        for(int i=2; i<=left; i++){
            if (left%i == 0) counter++;
            if (counter > 2) break;
        }
        if (counter == 2) break;
        left--;
    }

    cout<<"El siguiente numero primo es: "<<right<<endl;
    cout<<"El anterior numero primo es: "<<left<<endl;

}

void ejercicio004(){
    int fil, col;

    do{
        cout<<"Filas [mayor a 2]:"; cin>>fil;
    }while(fil <= 2);

    do{
        cout<<"Columnas [mayor a 4]:"; cin>>col;
    }while(col <= 4);

    for(int i=1; i <= fil; i++){
        for(int j=1; j <= col; j++){
            if(i==1 or i==fil){
                cout<<"*";
            }else if(j==1 or j==col){
                cout<<"*";
            }else
                cout<<"o";
        }
        cout<<endl;
    }
}

int main(){
    ejercicio004();

    return 0;
}
