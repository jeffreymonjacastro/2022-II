#ifndef P2_CPP_CPUNTO2D_H
#define P2_CPP_CPUNTO2D_H // No influyen en el código

// Los .h sirven para llevar funciones a otros archivos .cpp

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

class CPunto2D {
private:
    // Atributos (coordenadas)
    int m_x, m_y;
public:
    // EN EL PÚBLIC SOLO SE DECLARAN MÉTODOS
    // Tipos de constructores
    CPunto2D(){m_x = m_y = 0;} // Por defecto (Se utilizan las {} para definir los atributos en 0 por defecto)
    CPunto2D(int, int); // De asignación (Generalmente se necesita solamente el tipo)
    CPunto2D(const CPunto2D &p); // De copia (Si ya cree un objeto, lo copia)

    ~CPunto2D(){} // Destructor

    void datos(); // Método para imprimir los puntos

    double distancia(const CPunto2D &p);

};


#endif //P2_CPP_CPUNTO2D_H
