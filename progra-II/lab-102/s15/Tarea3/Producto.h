#ifndef P2_CPP_PRODUCTO_H
#define P2_CPP_PRODUCTO_H

#include <iostream>
#include <vector>

using namespace std;

class Producto {
private:
    string name;
    char currency;
    double exchange;
    double price;
public:
    Producto(){}
    Producto(string n, char c, double e, double p):name(n), currency(c), exchange(e), price(p){}

    virtual ~Producto(){}

    // Métodos
    string get_name(){return name;}

    double get_price(char currency){
        if (this->currency != currency){
            if (this->currency == 'D')
                return price*exchange;
            else
                return price/exchange;
        }
        return price;
    }

    char get_currency(){return currency;}
};

#endif //P2_CPP_PRODUCTO_H
