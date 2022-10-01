#ifndef P2_CPP_MILA_H
#define P2_CPP_MILA_H

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int** inicializador(int filas, int columnas);

void imprimir(int** M, int filas, int columnas);

void liberar(int** M, int filas);

#endif //P2_CPP_MILA_H
