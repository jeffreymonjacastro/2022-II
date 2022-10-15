#ifndef P2_CPP_CCLAVE_H
#define P2_CPP_CCLAVE_H

#include <iostream>
#include <cstdlib>
using namespace std;

class CClave {
private:
    int tamanio;
    string superstring = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string cadena_encriptada = "";
    string clave = "";
    string llave = "";
public:
    // Constructor vacío
    CClave() {};

    // Constructor de inicialización
    CClave(int);

    // Destructor
    virtual ~CClave();

    // Método para hallar la cadena encriptada
    void cadenaEncriptada();

    // Método para hallar la clave
    void generarClave();

    // Método para hallar la llave
    void generarLlave();

    // Método para imprimir
    void imprimir();
};


#endif //P2_CPP_CCLAVE_H
