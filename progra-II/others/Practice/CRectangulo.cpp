#include "CRectangulo.h"

CRectangulo::CRectangulo(double _largo, double _ancho) {
    largo = _largo;
    ancho = _ancho;
}

CRectangulo::~CRectangulo() {
    cout<<"Hasta la proxima"<<endl;
}

double CRectangulo::perimetro() {
    return 2*largo + 2*ancho;
}

double CRectangulo::area() {
    return largo*ancho;
}