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

int main(){
    int n;
    cout<<"Numero de productos:"<<endl;
    cin>>n;

    vector<Producto*> productos;

    for (int i = 0; i < n; ++i) {
        string name;
        char currency;
        double exchange, price;

        cout<<"\nProducto "<<i+1<<endl;
        cout<<"Nombre del producto:"<<endl;
        cin>>name;

        cout<<"Moneda [S o D]:"<<endl;
        cin>>currency;

        cout<<"Tipo de cambio:"<<endl;
        cin>>exchange;

        cout<<"Precio:"<<endl;
        cin>>price;

        Producto* product = new Producto(name, currency, exchange, price);

        productos.push_back(product);
    }

    char moneda;
    cout<<"Total de precios:"<<endl;
    cout<<"Moneda [D o S]:"<<endl;
    cin>>moneda;

    double total = 0;
    for (auto & producto : productos) {
        total += producto->get_price(moneda);
        cout<<producto->get_name()<<" - "<<producto->get_price(moneda)<<endl;
    }
    cout<<"Total = "<<total<<endl;

    return 0;
}
