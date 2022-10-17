#ifndef P2_CPP_CRECTANGULO_H
#define P2_CPP_CRECTANGULO_H
#include <iostream>

using namespace std;

class CRectangulo {
private:
    double largo;
    double ancho;
public:
    CRectangulo(double, double);

    virtual ~CRectangulo();

    double perimetro();

    double area();
};


#endif //P2_CPP_CRECTANGULO_H
