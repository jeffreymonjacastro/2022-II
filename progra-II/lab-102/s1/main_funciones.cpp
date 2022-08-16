//Archivo principal

#include "funciones.h"

int main(){
    int colores;
    vector<int> tamDeCajas = {24, 12, 6};

    cout << "Numero de colores: ";
    cin >> colores;

    vector<int> cajas = Empaquetar(colores, tamDeCajas);

    Imprimir(cajas, tamDeCajas);

    return 0;
}
