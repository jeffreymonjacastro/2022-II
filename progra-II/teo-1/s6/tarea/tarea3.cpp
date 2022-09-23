#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

// hallar volumen
double volumen(double radio) {
    double result;
    result = (4 * M_PI * radio * radio * radio)/3;
    return result;
}


int main(){
    // Contadores
    double aleatorio = 0;
    int colisiones = 0;
    int anios = 0;

    // Datos
    double m1 = 0.05, m2 = 0.8, m3 = 1, m4 = 0.1;
    double* masas = new double[4];
    masas[0] = m1;
    masas[1] = m2;
    masas[2] = m3;
    masas[3] = m4;

    double d1 = 0.4, d2 = 0.9, d3 = 1, d4 = 0.5;

    double* diametros = new double[4];
    diametros[0] = d1;
    diametros[1] = d2;
    diametros[2] = d3;
    diametros[3] = d4;

    string planeta1 = "Mercurio", planeta2 = "Venus", planeta3 = "Tierra", planeta4 = "Marte";

    string* planetas = new string[4];
    planetas[0] = planeta1;
    planetas[1] = planeta2;
    planetas[2] = planeta3;
    planetas[3] = planeta4;

    // Cantidad de interacciones
    for(int i = 0; i < 1000; i++) {
        if(colisiones == 3)
            break;

        aleatorio = (rand() % 90)/3.0;

        if(aleatorio < 0.5)
            colisiones += 1;

        anios += 10;
    }

    // Primera colisión
    cout<<"colisionan "<<planeta1<<" y "<<planeta2<<endl;
    if(masas[0] > masas[1]){
        masas[0] += (masas[1]/2);
        masas[1] = 0;
        diametros[0] *= 2;
        cout<<"sobrevive "<<planetas[0]<<", con masa de "<<masas[0]<<endl;
    } else {
        masas[1] += (masas[0]/2);
        masas[0] = 0;
        diametros[1] *= 2;
        cout<<"sobrevive "<<planetas[1]<<", con masa de "<<masas[1]<<endl;
    }

    //Segunda colisión
    cout<<"colisionan "<<planeta3<<" y "<<planeta4<<endl;

    if(masas[2] > masas[3]){
        masas[2] += (masas[3]/2);
        masas[3] = 0;
        diametros[2] *= 2;
        cout<<"sobrevive "<<planetas[2]<<", con masa de "<<masas[2]<<endl;
    } else {
        masas[3] += (masas[2]/2);
        masas[2] = 0;
        diametros[3] *= 2;
        cout<<"sobrevive "<<planetas[3]<<", con masa de "<<masas[3]<<endl;
    }

    // Tercera colisión
    int* final = new int[2];
    int j = 0;

    for(int i = 0; i < 4; i++){
        if(masas[i] != 0){
            final[j] = i;
            j++;
        }
    }

    cout<<"colisionan "<<planetas[final[0]]<<" y "<<planetas[final[1]]<<endl;

    double volumen_planeta;

    if(masas[final[0]] > masas[final[1]]){
        masas[final[0]] += (masas[final[1]]/2);
        masas[final[1]] = 0;
        diametros[final[0]] *= 2;
        volumen_planeta = volumen(diametros[final[0]]/2);
        cout<<"sobrevive "<<planetas[final[0]]<<", con masa de "<<masas[final[0]]<<" y volumen de "<<volumen_planeta<<", luego de "<<anios<<" anios"<<endl;
    } else {
        masas[final[1]] += (masas[final[0]]/2);
        masas[final[0]] = 0;
        diametros[final[1]] *= 2;
        volumen_planeta = volumen(diametros[final[1]]/2);
        cout<<"sobrevive "<<planetas[final[1]]<<", con masa de "<<masas[final[1]]<<" y volumen de "<<volumen_planeta<<", luego de "<<anios<<" anios"<<endl;
    }

    return 0;
}