#include "CPunto2D.h"

// El archivo cpp está fuera de la clase, por lo que se pone Global scope :: (los dos puntos)
// Es la consecuencia de derivar funciones a archivos

CPunto2D::CPunto2D(int x, int y){
    // Normalmente
    // m_x = x;
    // m_y = y;

    // this (puntero al objeto creado) - Es un operador de ayuda que te
    // ayuda a diferennciar entre el atributo de la clase y el argumento de la función a usar
    // Se usa cuando se quiere claridad (no confundir variables)
    this-> m_x = x;
    m_y = y;

}

CPunto2D::CPunto2D(const CPunto2D&p) {
    // uso el punto (.) para acceder al atributo desde p (se usa con objetos)
    // uso la flecha (->) para acceder al atributo desde el puntero this (se usa con punteros)
    m_x = p.m_x;
    this->m_y = p.m_y;
}

void CPunto2D::datos(){
    cout<<"("<<m_x<<", "<<m_y<<")"<<endl;
}

double CPunto2D::distancia(const CPunto2D &p) {
    double dist = 0;
    // El m_x es el atributo del objeto creado, y el p.m_x es el atributo de otro objeto
    // dist += pow(p.m_x - this->m_x, 2); --- Puede usarse this

    dist += pow(p.m_x - m_x, 2);
    dist += pow(p.m_y - m_y, 2);
    dist = sqrt(dist);

    return dist;
}