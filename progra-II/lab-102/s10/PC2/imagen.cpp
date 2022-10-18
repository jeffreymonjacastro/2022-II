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

void Image::imprimirMatriz() {
    for(int i = 0; i < this->height; i++){
        for(int j = 0; j < this->width; j++)
            cout<<this->ppI[i][j]<<" ";
        cout<<endl;
    }
}


void Image::girarHorario() {
    int** Mtemp = new int*[this->height];

    for (int i = 0; i < this->height; ++i) {
        Mtemp[i] = new int[this->width];

        for (int j = 0; j < this->width; ++j) {
            Mtemp[i][j] = this->ppI[height-1-i][i+j];
        }
    }

    for (int i = 0; i < this->width; ++i) {
        for (int j = 0; j < this->height; ++j) {
            this->ppI[i][j] = Mtemp[i][j];
        }
    }

    for(int i = 0; i < this->height; i++) {
        delete[] Mtemp[i];
        delete[] Mtemp;
    }
}

void Image::girarAntihorario() {
    int** Mtemp = new int*[this->height];

    for (int i = 0; i < this->height; ++i) {
        Mtemp[i] = new int[this->width];

        for (int j = 0; j < this->width; ++j) {
            Mtemp[i][j] = this->ppI[i+j][height-1-i];
        }
    }

    for (int i = 0; i < this->width; ++i) {
        for (int j = 0; j < this->height; ++j) {
            this->ppI[i][j] = Mtemp[i][j];
        }
    }

    for(int i = 0; i < this->height; i++) {
        delete[] Mtemp[i];
        delete[] Mtemp;
    }
}



int Image::getWidth() const {
    return width;
}

void Image::setWidth(int width) {
    Image::width = width;
}

int Image::getHeight() const {
    return height;
}

void Image::setHeight(int height) {
    Image::height = height;
}

int **Image::getPpI() const {
    return ppI;
}

void Image::setPpI(int **ppI) {
    Image::ppI = ppI;
}
