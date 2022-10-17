#ifndef P2_CPP_CFECHA_H
#define P2_CPP_CFECHA_H

#include <iostream>
using namespace std;

class CFecha {
private:
    int dia,mes,anio;
public:
    CFecha(int, int, int); // Constructor1

    CFecha(long); // Constructor 2

    void mostrarFecha();
};


#endif //P2_CPP_CFECHA_H
