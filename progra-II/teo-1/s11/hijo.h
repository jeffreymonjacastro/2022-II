#ifndef P2_CPP_HIJO_H
#define P2_CPP_HIJO_H

// clase Hijo derivada de Familia

class Hijo: public Familia{
    string nombre;
    int edad;
public:
    Hijo():nombre(" "),edad(0){}
    Hijo(string a, string n, int e): Familia(a), nombre(n), edad(e){}

    string get_nombre() override {return nombre;}

    void Seguro() override {
        cout<<"El hijo esta asegurado"<<endl;
    }

    void Bienes() override {
        cout<<"El hijo no tiene bienes"<<endl;
    }

    // destructor
    ~Hijo(){cout<<"Destruye Madre"<<endl;}
};
#endif //P2_CPP_HIJO_H
