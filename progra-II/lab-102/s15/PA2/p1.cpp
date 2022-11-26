#include <iostream>
#include <vector>

using namespace std;

class CIngreso {
private:
    int mes;
    float monto;
public:
    CIngreso(){}
    CIngreso(int _mes, float _monto):mes(_mes), monto(_monto){}

    virtual ~CIngreso(){}

    void setMes(int _mes){this->mes = _mes;}

    int getMes(){return mes;}

    void setMonto(float _monto){this->monto = _monto;}

    float getMonto(){return monto;}

};

class CPersona {
private:
    string nombre;
    vector<CIngreso*> vi;
public:
    CPersona(){}
    CPersona(string _nombre):nombre(_nombre){}

    virtual ~CPersona(){}

    string getNombre(){return nombre;}

    void InsertarAlVector(CIngreso* pIngreso){
        vi.push_back(pIngreso);
    }

    float CalcularImpuesto(){
        float impuesto = 0;
        for (int i = 0; i < vi.size(); ++i) {
            impuesto += 8.0/100 * vi[i]->getMonto();
        }

        return impuesto;
    }
};


int main(){
    cout<<"Nombre de la persona:"<<endl;
    string name; cin>>name;

    CPersona p1(name);

    for (int i = 0; i < 12; ++i) {
        cout<<"Ingrese el monto del mes "<<i+1<<endl;
        float m; cin>>m;

        auto ingreso = new CIngreso(i+1,m);

        p1.InsertarAlVector(ingreso);
    }

    cout<<"Monto total de impuesto a pagar por anio de "<<p1.getNombre()<<" es: "<<p1.CalcularImpuesto()<<endl;

    return 0;
}