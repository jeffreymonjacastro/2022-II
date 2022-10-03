//
// Created by Usuario on 3/10/2022.
//

#include "CCilindro.h"

CCilindro::CCilindro() {}

CCilindro::CCilindro(double h, double r) : h(h), r(r) {}

CCilindro::~CCilindro() {}

double CCilindro::getH() const {
    return h;
}

void CCilindro::setH(double h) {
    CCilindro::h = h;
}

double CCilindro::getR() const {
    return r;
}

void CCilindro::setR(double r) {
    CCilindro::r = r;
}

double CCilindro::getArea() {
    return 2*M_PI*this->r*(this->r + this->h);
}

double CCilindro::getVolumen() {
    return M_PI * pow(this->r,2) * this->h;
}




