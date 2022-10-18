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
    // Constructores
    Image();
    Image(int _width, int _height, int **_ppI);

    virtual ~Image();

    // Métodos
    void generarMatriz();

    void imprimirMatriz();

    void girarHorario();

    void girarAntihorario();

    // Getters and Setters
    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

    int **getPpI() const;

    void setPpI(int **ppI);
};


#endif //P2_CPP_IMAGEN_H
