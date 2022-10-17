#include "Image.h"

Image::Image() {}

Image::Image(int width, int height, char numbits) {
    this->width = width;
    this->height = height;
    this->numbits = numbits;
}

Image::~Image() {}

void Image::initImage() {
    this->ppI = new char* [height];

    for(int i = 0; i < height; i++){
        ppI[i] = new char[width];

        for(int j = 0; j < width; j++){
            ppI[i][j] = numbits;
        }
    }
}