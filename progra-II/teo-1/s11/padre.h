#ifndef P2_CPP_PADRE_H
#define P2_CPP_PADRE_H

// clase padre, derivada de familia

class Padre: public Familia{
    string nombre;
    int edad;
public:
    // constructores
    Padre():nombre(" "),edad(0){}
    Padre(string a, string n, int e): Familia(a), nombre(n), edad(e){}

     // metodos virtuales
     string get_nombre() override {return nombre;} // override (sobreescribir) en el método virtual

     void Seguro() override {
        cout<<"El padre esta asegurado"<<endl;
    }

    void Bienes() override {
        cout<<"El padre tiene 45% de los bienes"<<endl;
    }

     // destructor
     ~Padre(){cout<<"Destruye Padre"<<endl;}
};


#endif //P2_CPP_PADRE_H
