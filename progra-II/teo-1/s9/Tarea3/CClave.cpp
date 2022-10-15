#include "CClave.h"

// Constructor
CClave::CClave(int tamanio) {
    this->tamanio = tamanio;
}

// Destructor
CClave::~CClave() {}

// Métodos
void CClave::cadenaEncriptada() {
    int random;

    for (int i = 0; i < this->tamanio; i++){
        random = rand()%62;
         this->cadena_encriptada += this->superstring[random];
    }
}

void CClave::generarClave() {
    // si el char tiene numero ascii impar le corresponde 1, caso contrario 0
    // si el char es un digito y par se vuelve cero, si es impar 1
    for(auto i : this->cadena_encriptada){
        if (int(i)%2 == 0)
            this->clave+='0';
        else
            this->clave+='1';
    }
}

void CClave::generarLlave() {
    //creación de la llave
    for(auto i : this->clave){
        if(i == '0')
            this->llave+="11";
        else
            this->llave+="00";
    }

    // Modificación del último dígito de la llave
    if (this->tamanio%2 == 0)
        this->llave[this->llave.size()-1] = '0';
    else
        this->llave[this->llave.size()-1] = '1';
}

void CClave::imprimir() {


    cout<<"La cadena de caracteres es: "<<this->cadena_encriptada<<endl;
    cout<<"La clave es: "<<this->clave<<endl;
    cout<<"La llave es: "<<this->llave<<endl;
}




