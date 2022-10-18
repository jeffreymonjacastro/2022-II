#include "imagen.h"

Image::Image() {}

Image::Image(int _width, int _height, int **_ppI) {
    this->width = _width;
    this->height = _height;
    this->ppI = _ppI;
}

Image::~Image() {}

void Image::generarMatriz(){
    this->ppI = new int* [this->height];

    for(int i=0; i < this->height ;i++){
        this->ppI[i] = new int[this->width];

        for(int j = 0; j < this->width; j++){
            this->ppI[i][j] = rand()%4+1;
        }
    }
}

void Image::girarHorario() {
    int** Mtemp = new int*[this->height];

    for (int i = 0; i < this->height; ++i) {
        Mtemp[i] = new int[this->width];

        for (int j = 0; j < this->width; ++j) {
            Mtemp[i][j] = this->ppI[i+j][j];
        }
    }

    for (int i = 0; i < this->width; ++i) {
        for (int j = 0; j < this->height; ++j) {
            this->ppI[i][j] = 0;
        }
    }
}

void Image::girarAntihorario() {
    for (int i = 0; i < this->width; ++i) {
        for (int j = 0; j < this->height; ++j) {
            this->ppI[i][j] = 0;
        }
    }
}