//
// Created by Usuario on 3/10/2022.
//

#ifndef P2_CPP_CCILINDRO_H
#define P2_CPP_CCILINDRO_H
#include <iostream>
#include <cmath>

using namespace std;

class CCilindro {
private:
    double h;
    double r;
public:
    CCilindro();

    CCilindro(double h, double r);

    virtual ~CCilindro();

    double getH() const;

    void setH(double h);

    double getR() const;

    void setR(double r);

    double getArea();

    double getVolumen();
};


#endif //P2_CPP_CCILINDRO_H
