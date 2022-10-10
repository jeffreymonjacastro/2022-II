#ifndef P2_CPP_CCURSO_H
#define P2_CPP_CCURSO_H
#include <iostream>

using namespace std;

class CCurso {
private:
    string nombre;
    string apellidos;
    int creditos;
public:
    CCurso();
    CCurso(string, int);
    ~CCurso();

    string get_nombre();
    int get_creditos();
};


#endif //P2_CPP_CCURSO_H
