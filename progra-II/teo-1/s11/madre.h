#ifndef P2_CPP_MADRE_H
#define P2_CPP_MADRE_H

// clase Madre derivada de Familia

class Madre: public Familia{
    string nombre;
    int edad;
public:
    //constructores
    Madre():nombre(" "),edad(0){}
    Madre(string a, string n, int e): Familia(a), nombre(n), edad(e){}

    string get_nombre() override {return nombre;}

    void Seguro() override {
        cout<<"La madre esta asegurado"<<endl;
    }

    void Bienes() override {
        cout<<"El padre tiene 55% de los bienes"<<endl;
    }

    // destructor
    ~Madre(){cout<<"Destruye Madre"<<endl;}
};

#endif //P2_CPP_MADRE_H
