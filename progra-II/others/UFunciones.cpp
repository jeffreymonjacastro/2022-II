//
// Created by Usuario on 31/08/2022.
//

#include "UFunciones.h"

// Función
// El tipo de variable es unsigned long int
unsigned long int numeroInvertido(unsigned long int num){
    unsigned long int ni, dig;

    ni = 0;
    while(num!=0){
        dig = num % 10;
        ni = ni*10 + dig;
        num = num / 10;
    }

    return ni;
}

