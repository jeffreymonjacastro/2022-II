#ifndef P2_CPP_GAME_H
#define P2_CPP_GAME_H
#include <iostream>
#include <vector>
#include "Image.h"

using namespace std;

class Game{
private:
    vector<Image> vI;
    int numI;
public:
    Game();
    Game(vector<Image>, int);

    virtual ~Game();

    void init();
    void mostrarImagen();
};


#endif //P2_CPP_GAME_H
