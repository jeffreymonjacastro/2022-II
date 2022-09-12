#include <iostream>

using namespace std;

int arraydinamico(int n){
    int *notas;
    int suma = 0;

    notas = new int[n];

    for(int i = 1; i <= n; i++){
        cout<<"nota "<<i<<endl;
        cin>>notas[i];
        suma += notas[i];
    }

    int prom;
    prom = suma/n;

    // notas mayor al promedio
    for(int i = 0; i < n; i++){
        if (notas[i] > prom){
            cout<<notas[i];
        }
    }

    return 0;
}


int main(){
    int n;
    do {
        cout<<"# de estudiantes: "<<endl; cin>>n;
    } while(n<=3);



    arraydinamico(n);

    return 0;
}