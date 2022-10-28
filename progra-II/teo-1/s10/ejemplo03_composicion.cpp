#include "Evento.h"

// Composicion: objeto de clase B "es parte de" objeto de clase A
// B -<#> AA
// Si se retira B, A ya no puede seguir existiendo
// Generar un evento (Event) con datos de las clases Date y Time e imprimir información

int main(){
    // generar un puntero a Evento con el constructor e imprimir sus datos
    auto A = new Evento("OpenDay", 9, 5, 8, 2, 2022);

    // generar un puntero a Evento con el método setDatos e imprimir sus datos
    A->imprimirDatos();

    // eliminar punteros
    delete A;

    return 0;
}
