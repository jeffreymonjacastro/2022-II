#include <iostream>

using namespace std;

// Ejercicio_001
void e1(){
    int km;
    string lugar, via;

    cout<<"Lugar:"<<endl; cin>>lugar;
    cout<<"Via:"<<endl; cin>>via;
    cout<<"Velocidad:"<<endl; cin>>km;


    if (lugar == "Zona_urbana") {
        if (via == "Zona_escolar") {
            if (km <= 30)
                cout << "Se encuentra dentro de los limites de velocidad" << endl;
            else
                cout << "Esta fuera de los limites de velocidad" << endl;
        } else if (via == "Calles_y_jirones") {
            if (km <= 40)
                cout << "Se encuentra dentro de los limites de velocidad" << endl;
            else
                cout << "Esta fuera de los limites de velocidad" << endl;
        } else if (via == "Avenidas") {
            if (km <= 60)
                cout << "Se encuentra dentro de los limites de velocidad" << endl;
            else
                cout << "Esta fuera de los limites de velocidad" << endl;
        } else if (via == "Vias_expresas") {
            if (km <= 80)
                cout << "Se encuentra dentro de los limites de velocidad" << endl;
            else
                cout << "Esta fuera de los limites de velocidad" << endl;
        } else
            cout << "Tipo de via no valido";

    } else if (lugar == "Carreteras"){
        if (via == "Caminos_rurales") {
            if (km <= 60)
                cout << "Se encuentra dentro de los limites de velocidad" << endl;
            else
                cout << "Esta fuera de los limites de velocidad" << endl;
        } else if (via == "Vehiculos_de_carga") {
            if (km <= 80)
                cout << "Se encuentra dentro de los limites de velocidad" << endl;
            else
                cout << "Esta fuera de los limites de velocidad" << endl;
        } else if (via == "Transporte_de_pasajeros") {
            if (km <= 90)
                cout << "Se encuentra dentro de los limites de velocidad" << endl;
            else
                cout << "Esta fuera de los limites de velocidad" << endl;
        } else if (via == "vehiculos_ligeros") {
            if (km <= 100)
                cout << "Se encuentra dentro de los limites de velocidad" << endl;
            else
                cout << "Esta fuera de los limites de velocidad" << endl;
        } else
            cout << "Tipo de via no valido";

    } else
        cout << "Lugar no valido";

}

// Ejercicio_002
void e2(){
    int n;

    do {
        cout<<"N:"<<endl; cin>>n;
    } while (n<1 or n>30);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i >= j)
                cout<<"*";
        }
        cout<<endl;
    }
}

// Ejercicio_003
void e3(){
    int n;

    do {
        cout<<"Filas [0 - 9] :"<<endl; cin>>n;
    } while (n<1 or n>9);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++)
            cout<<" ";
        for(int k=1;k<=i;k++) {
            cout << k;
        }
        cout<<endl;
    }
}

// Ejercicio_004
void e4(){
    int n;

    do {
        cout<<"Ingrese n:"<<endl; cin>>n;
    } while(n%2 != 0 or n<4);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 or i == n or j == 1 or j == n)
                cout<<"* ";
            else if ((i == n/2 or i == n/2 + 1) and (j == n/2 or j == n/2 + 1))
                cout<<"+ ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

// Ejercicio_005
void e5(){
    int i=0, personas;
    double  m_i=0, f_i=0, v_i=0;
    string bebida;

    cout<<"Cuantas personas haran la encuesta? (entre 5 y 30)"; cin>>personas;

    for(i=1; i<=personas; i++){
        cout<<"Que bebida prefiere?"<<endl;
        cout<<"Mango Frappuccino (M/m)"<<endl;
        cout<<"Fresa Creme Frappuccino (F/f)"<<endl;
        cout<<"Vainilla Creme Frappuccino (V/v)"<<endl;
        cin>>bebida;

        if(bebida == "M" || bebida == "m") m_i++;
        else if(bebida == "F" || bebida == "f") f_i++;
        else v_i++;
    }

    cout<<(m_i/personas)*100<<"% prefieren Mango Frappuccino"<<endl;
    cout<<(f_i/personas)*100<<"% prefieren Fresa Creme Frappuccino"<<endl;
    cout<<(v_i/personas)*100<<"% prefieren Vainilla Creme Frappuccino"<<endl;
}

int main(){
    e1();
    e2();
    e3();
    e4();
    e5();

    return 0;
}

