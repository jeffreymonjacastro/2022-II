// Implementación de las funciones

#include "funciones.h" //Se incluye un header con código .h

vector<int> Empaquetar(int colores, vector<int> &tamDeCajas) {

    vector<int> rpta(4);

    for(int i=0; i<tamDeCajas.size(); i++){
        rpta[i] = colores/tamDeCajas[i];
        colores %= tamDeCajas[i];
    }

    rpta[3] = colores; //cantidad de colores que no entran en las cajas

    return rpta;
}

void Imprimir(vector<int> &cajas, vector<int> &tamDeCajas){

    for(int i=0; i<tamDeCajas.size(); i++){
        cout << cajas[i] << " de " << tamDeCajas[i] << "colores\n";
        cout << cajas[3] << " colores que no se pdudieron empaquetar";
    }
}