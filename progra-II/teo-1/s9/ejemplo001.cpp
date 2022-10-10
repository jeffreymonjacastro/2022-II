#include "CPunto2D.h"

int main() {
    // Genero dos objetos de tipo la clase CPunto2D (STACK)
    CPunto2D punto1(1, 4);
    CPunto2D punto2(6, 8);

    // Genero dos punteros a objetos de tipo de clase CPunto2D (HEAP)
    // Sintaxis: Clase* nombre_del_puntero = new Clase(argumentos);
    CPunto2D *p1 = new CPunto2D(3, 1);
    CPunto2D *p2 = new CPunto2D(7, 1);

    // Genero un array de 10 objetos (STACK)
    CPunto2D Puntos_a[10];
    CPunto2D Puntos_b[2] = {{1, 5},
                            {6, 2}};

    // Genero un array dinámico de objetos (HEAP)
    CPunto2D *puntos = new CPunto2D[5];
    puntos[0] = CPunto2D(1, 2);
    puntos[1] = CPunto2D(5, 2);
    puntos[2] = CPunto2D(1, 4);
    puntos[3] = CPunto2D(7, 2);
    puntos[4] = CPunto2D(9, 2);

    // Un vector de objetos (el tipo del vector es una clase)
    vector<CPunto2D> points;

    for (int i = 0; i < 5; i++)
        points.push_back(puntos[i]);

    delete[] puntos; // Elimina el array dinámico porque ya está en un vector

    // El iterador es un puntero que apunta a objetos
    for (auto iter = points.begin(); iter != points.end(); iter++)
        iter->datos(); // Imprime

    // Calculando la matriz de distancias (se itera dos veces el vector)
    for (auto iter1 = points.begin(); iter1 != points.end(); iter1++){
        for (auto iter2 = points.begin(); iter2 != points.end(); iter2++)
            cout << setw(7) << fixed << setprecision(1) << iter1->distancia(*iter2);
        cout << endl;
    }

    return 0;
}