#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

using tnum=double;
using tentero=unsigned long long;

class CPunto {
private:
    tnum x,y;
public:
    CPunto(){x=0; y=0;}
    CPunto(tnum x, tnum y):x(x), y(y){}
    CPunto(CPunto &otroPunto);

    virtual ~CPunto(){} // es el destructor

    tnum distancia(CPunto* &otroPunto){
        tnum distance = sqrt(pow(otroPunto->getx()-this->x,2)+ pow(otroPunto->gety()-this->y,2));

        return distance;
    }

//— metodos de acceso
    void setx(tnum x) {x= x;}
    tnum getx(){return x;}
    void sety(tnum y) {y= y;}
    tnum gety(){ return y;}
};

class CPoligono {
private:
    int lados;
    vector<CPunto*> puntos;
public:
    CPoligono(){}
    CPoligono(int l):lados(l){
        vector<CPunto*> p;
        puntos = p;
    }

    virtual ~CPoligono(){}

    void operator+(CPunto* p){
        puntos.push_back(p);
    }

    tnum perimetro(){
        tnum sumaPerimetro = 0;
        for (int i = 0; i < puntos.size()-1; ++i)
            sumaPerimetro += puntos[i]->distancia(puntos[i+1]);

        sumaPerimetro += puntos.back()->distancia(puntos[0]);

        return sumaPerimetro;
    }

    tentero getLados(){return lados;}
};

int main(){
    int n;
    while(true) {
        cout << "N: " << endl;
        cin >> n;

        if (n>=3)
            break;
    }

    CPoligono polygon1(n);

    double x, y;
    for (int i = 0; i < n; ++i) {
        cout<<"x, y"<<endl;
        cin>>x>>y;

        auto n_punto = new CPunto(x, y);

        polygon1+n_punto;
    }

    cout<<"Perimetro: "<<polygon1.perimetro()<<endl;
    cout<<"Lados: "<<polygon1.getLados()<<endl;

    return 0;
}