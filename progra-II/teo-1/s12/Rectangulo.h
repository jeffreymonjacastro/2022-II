#ifndef INC_2020II_POO1_U5_CRECTANGULO_H
#define INC_2020II_POO1_U5_CRECTANGULO_H
#include <iostream>
using namespace std;
class Rectangulo
{
private:
    float largo;
    float ancho;
    bool es_r;
public:
    Rectangulo():largo(0),ancho(0){};
    Rectangulo(float l, float a=1){
        largo = l ;
        ancho = a ;
        es_r = true;
    };


    Rectangulo(const Rectangulo &objeto){
        largo=objeto.getLargo();
        ancho=objeto.getAncho();
    };

    float area(){
        return (largo*ancho);
    };

    float perimetro(){
        return(2*largo + 2*ancho);
    };

    bool get_es_r(){
        return es_r;
    }

    //----metodos de acceso
    //--- setter  que permiten asignar un valor al atributo
    void setLargo(float _largo)
    { // if(_largo>0) largo=_largo;
        // expresion condicional en C++
        largo = (_largo > 0)? _largo : this->largo;
    }

    void setAncho(float _ancho)
    {// if(_ancho>0) ancho=_ancho;
        ancho = (_ancho > 0)? _ancho : this->ancho;
    }

    float getLargo() const { return largo; }
    float getAncho() const { return ancho; }
};

/*
void imprimirDatos(Rectangulo &C){
    cout <<"El area del rectangulo es "
         << C.area() << "\n";
    cout <<"El perimetro del retangulo es "<< C.perimetro();
}
*/


class Circulo
{
private:
    float radio;
    const float PI = 3.1416;
    bool es_r;
public:
    Circulo(float radio){
        this->radio = radio;
        es_r = false;
    };

    float  area(){
        return this->PI * this->radio * this->radio;
    };

    float   perimetro(){
        return this->PI * this->radio * 2;
    };

    bool get_es_r(){
        return es_r;
    }

    //----metodos de acceso
    //--- setter
    void setRadio(float _radio) { radio = _radio; }
    //--- getter
    float getRadio() { return radio; }
};

/*
void imprimirDatos(Circulo &C){
    cout <<"El area del circulo es "
         << C.area() << "\n";
    cout <<"El perimetro del circulo es "<< C.perimetro();
}
 */

/*
template <typename T>
void imprimirDatos(T  &R){
    cout <<"El area de la figura es "
         << R.area() << "\n";
    cout <<"El perimetro de la figura es "
         << R.perimetro()<< "\n";
}
*/

template <typename T>
void imprimirDatos(T  &F){
    if(F.get_es_r()) {
        cout << "El area de del rectangulo es "
             << F.area() << "\n";
        cout << "El perimetro del rectangulo es "
             << F.perimetro() << "\n";
    }else{
        cout << "El area de del circulo es "
             << F.area() << "\n";
        cout << "El perimetro del circulo es "
             << F.perimetro() << "\n";
    }

}



#endif //INC_2020II_POO1_U5_CRECTANGULO_H
