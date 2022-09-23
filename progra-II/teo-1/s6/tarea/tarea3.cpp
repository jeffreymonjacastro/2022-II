#include <iostream>
#include <cstdlib>


using namespace std;

// eliminardato
void eliminardato(int* lista, int n){
    // Preguntar si la lista no está vacía
    if(lista != nullptr){
        int* idx_borrar;
        int* anterior = nullptr;

        idx_borrar = lista;

        // Recorrer la lista
        while(idx_borrar != nullptr && *idx_borrar != n){
            anterior = idx_borrar;
            idx_borrar = idx_borrar+1;
        }

        //El elemento no ha sido encontrado
        if(idx_borrar == nullptr)
            cout<<"El elemento no ha sido encontrado"<<endl;

        else if(anterior == nullptr){
            lista = lista+1;
            delete idx_borrar;
        } else {
            anterior = idx_borrar+1;
            delete idx_borrar;
        }
    }
}



int main(){
    double aleatorio = 0;
    int colisiones = 0;
    int anios = 0;
    double m1 = 0.05, m2 = 0.8, m3 = 1, m4 = 0.1;
    double* masas = new double[4];
    masas[0] = m1;
    masas[1] = m2;
    masas[2] = m3;
    masas[3] = m4;

    double d1 = 0.4, d2 = 0.9, d3 = 1, d4 = 0.5;

    string planeta1 = "Mercurio", planeta2 = "Venus", planeta3 = "Tierra", planeta4 = "Marte";

    string* planetas = new string[4];
    planetas[0] = planeta1;
    planetas[1] = planeta2;
    planetas[2] = planeta3;
    planetas[3] = planeta4;

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
        d1 *= 2;
        cout<<"sobrevive "<<planetas[0]<<" con masa de "<<masas[0]<<endl;
    } else {
        masas[1] += (masas[0]/2);
        masas[0] = 0;
        d2 *= 2;
        cout<<"sobrevive "<<planetas[1]<<" con masa de "<<masas[1]<<endl;
    }

    //Segunda colisión
    cout<<"colisionan "<<planeta3<<" y "<<planeta4<<endl;

    if(masas[2] > masas[3]){
        masas[2] += (masas[3]/2);
        masas[3] = 0;
        d2 *= 2;
        cout<<"sobrevive "<<planetas[2]<<" con masa de "<<masas[2]<<endl;
    } else {
        masas[3] += (masas[2]/2);
        masas[2] = 0;
        d2 *= 2;
        cout<<"sobrevive "<<planetas[3]<<" con masa de "<<masas[3]<<endl;
    }

    // Tercera colisión
    int* final = new int[2];

    for(int i = 0; i < 4; i++){
        int j = 0;
        if(masas[i] != 0){
            final[j] = i;
            j++;
        }
    }

    cout<<"colisionan "<<planetas[final[0]]<<" y "<<planetas[final[1]]<<endl;

    if(masas[final[0]] > masas[final[1]]){
        masas[final[0]] += (masas[final[1]]/2);
        masas[final[1]] = 0;
        d2 *= 2;
        cout<<"sobrevive "<<planetas[final[0]]<<" con masa de "<<masas[2]<<endl;
    } else {
        masas[3] += (masas[2]/2);
        masas[2] = 0;
        d2 *= 2;
        cout<<"sobrevive "<<planetas[3]<<" con masa de "<<masas[3]<<endl;
    }
    }



    cout<<"colisiones: "<<colisiones<<endl;
    cout<<"anios: "<<anios;

    return 0;
}


/*
switch(colisiones){
            case 1:
                cout<<"colisionan "<<planeta1<<" y "<<planeta2;

                if(m1 > m2){
                    m1 += (m2/2);
                    d1 *= 2;
                    cout<<"sobrevive "<<planeta1<<" con masa de "<<m1;
                } else {
                    m2 += (m1/2);
                    d2 *= 2;
                    cout<<"sobrevive "<<planeta2<<" con masa de "<<m2;
                }
            case 2:
                cout<<"colisionan "<<planeta1<<" y "<<planeta2;

                if(m3 > m4){
                    m3 += (m2/2);
                    d1 *= 2;
                    cout<<"sobrevive "<<planeta1<<" con masa de "<<m1;
                } else {
                    m2 += (m1/2);
                    d2 *= 2;
                    cout<<"sobrevive "<<planeta2<<" con masa de "<<m2;
                }
        }
 */