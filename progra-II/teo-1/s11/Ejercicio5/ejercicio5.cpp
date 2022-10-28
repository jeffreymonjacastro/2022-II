#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Disfraces {
    string nombre;
    int cantidad;
public:
    Disfraces(){}
    Disfraces(string _nombre, double _cantidad): nombre(_nombre), cantidad(_cantidad){}

    // Getter y Setter
    string getNombre(){return nombre;}

    int getCantidad(){return cantidad;}

    void setCantidad(int _cantidad){cantidad = _cantidad;}

    virtual ~Disfraces(){}
};


class Tienda {
    string nombre;
    vector<Disfraces*> stock;
public:
    Tienda(){}

    Tienda(string _nombre, Disfraces* fantasma, Disfraces* bruja, Disfraces* frankenstein, Disfraces* esqueleto, Disfraces* zombie){
        nombre = _nombre;
        stock.push_back(fantasma);
        stock.push_back(bruja);
        stock.push_back(frankenstein);
        stock.push_back(esqueleto);
        stock.push_back(zombie);
    }

    // Getters
    vector<Disfraces*> getStock(){return stock;}

    // Destructor
    virtual ~Tienda(){}
};


class disfracesNido {
    string nombre;
    vector<Disfraces*> disfraces;

public:
    disfracesNido(){}
    disfracesNido(string _n): nombre(_n){}

    // Método de agregación
    void agregar_disfraz(Disfraces* disfraz){disfraces.push_back(disfraz);}

    // Getter
    vector<Disfraces*> getDisfraces(){return disfraces;}

    virtual ~disfracesNido(){}
};


int main(){
    srand(time(nullptr));

    Disfraces* fantasma = new Disfraces("fantasma", 30);
    Disfraces* bruja = new Disfraces("bruja", 40);
    Disfraces* frankenstein = new Disfraces("frankenstein", 20);
    Disfraces* esqueleto = new Disfraces("esqueleto", 50);
    Disfraces* zombie = new Disfraces("zombie", 10);

    Tienda TiendaDeDisfraces("Tienda de Disfraces", fantasma, bruja, frankenstein, esqueleto, zombie);

    disfracesNido EstrellitasdelSaber("Estrellitas del Saber");

    for (int i = 0; i < 15; ++i) {
        int azar = rand()%5;

        Disfraces* disfraz = TiendaDeDisfraces.getStock()[azar];

        EstrellitasdelSaber.agregar_disfraz(disfraz);

        TiendaDeDisfraces.getStock()[azar]->setCantidad(TiendaDeDisfraces.getStock()[azar]->getCantidad()-1);
    }

    int disfraces_fantasma = 0;
    int disfraces_bruja = 0;
    int disfraces_frankenstein = 0;
    int disfraces_esqueleto = 0;
    int disfraces_zombie = 0;

    for (int i = 0; i < 15; ++i) {
        if (EstrellitasdelSaber.getDisfraces()[i]->getNombre() == "fantasma"){
            disfraces_fantasma += 1;
        } else if(EstrellitasdelSaber.getDisfraces()[i]->getNombre() == "bruja") {
            disfraces_bruja += 1;
        } else if(EstrellitasdelSaber.getDisfraces()[i]->getNombre() == "frankenstein") {
            disfraces_frankenstein += 1;
        } else if(EstrellitasdelSaber.getDisfraces()[i]->getNombre() == "esqueleto") {
            disfraces_esqueleto += 1;
        } else if(EstrellitasdelSaber.getDisfraces()[i]->getNombre() == "zombie") {
            disfraces_zombie += 1;
        }
    }

    cout<<"Total de disfraces: "<<endl;
    cout<<"Disfraces de fantasma: "<<disfraces_fantasma<<" ................... S/. 160.99 c/u"<<endl;
    cout<<"Disfraces de bruja: "<<disfraces_bruja<<" ................... S/. 159.5 c/u"<<endl;
    cout<<"Disfraces de frankenstein: "<<disfraces_frankenstein<<" ................... S/. 208.54c/u - 25%"<<endl;
    cout<<"Disfraces de esqueleto: "<<disfraces_esqueleto<<" ................... S/. 99.99 c/u"<<endl;
    cout<<"Disfraces de zombie: "<<disfraces_zombie<<" ................... S/. 101.87 c/u"<<endl;

    double suma = 0;
    suma = disfraces_fantasma*160.99 +  disfraces_bruja*159.5 + (0.75)*disfraces_frankenstein*208.54 + disfraces_esqueleto*99.99 + disfraces_zombie*101.87;

    cout<<"Monto total a pagar: S/."<<suma<<endl;

    cout<<endl;

    cout<<"Stock final de la tienda"<<endl;
    cout<<"Stock de disfraces de fantasma: "<<TiendaDeDisfraces.getStock()[0]->getCantidad()<<endl;
    cout<<"Stock de disfraces de bruja: "<<TiendaDeDisfraces.getStock()[1]->getCantidad()<<endl;
    cout<<"Stock de disfraces de frankenstein: "<<TiendaDeDisfraces.getStock()[2]->getCantidad()<<endl;
    cout<<"Stock de disfraces de esqueleto: "<<TiendaDeDisfraces.getStock()[3]->getCantidad()<<endl;
    cout<<"Stock de disfraces de zombie: "<<TiendaDeDisfraces.getStock()[4]->getCantidad()<<endl;


    return 0;
}