#ifndef P2_CPP_IMAGEN_H
#define P2_CPP_IMAGEN_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Image {
private:
    int width;
    int height;
    int **ppI = nullptr;

public:
    Image();
    Image(int _width, int _height, int **_ppI);

    virtual ~Image();

    void generarMatriz();

    void girarHorario();

    void girarAntihorario();

};


#endif //P2_CPP_IMAGEN_H
