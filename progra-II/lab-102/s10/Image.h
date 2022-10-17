#ifndef P2_CPP_IMAGE_H
#define P2_CPP_IMAGE_H
#include <iostream>

using namespace std;

class Image {
private:
    char numbits;
    int width;
    int height;
    char **ppI;

public:
    Image();
    Image(int, int, char);

    virtual ~Image();

    void initImage();
    void mostrar();
    void rotate(int opt);
};


#endif //P2_CPP_IMAGE_H
