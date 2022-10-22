#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class CPoint {
private:
    float x, y, z;
public:
    CPoint();
    CPoint(float _x, float _y, float _z);
    CPoint(CPoint &p);

    virtual ~CPoint();

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    float getZ() const;

    void setZ(float z);

    //Funciones
    CPoint suma(CPoint &p1, CPoint &p2);

    CPoint resta(CPoint &p1, CPoint &p2);

    double dotproduct(CPoint &p1, CPoint &p2);

    CPoint crossproduct(CPoint &p1, CPoint &p2);

    double distancia(CPoint &p1, CPoint &p2);

    void imprimir();
};

CPoint::CPoint() {}

CPoint::CPoint(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

CPoint::CPoint(CPoint &p) {
    x = p.x;
    y = p.y;
    z = p.z;
}

CPoint::~CPoint() {}

float CPoint::getX() const {
    return x;
}

void CPoint::setX(float x) {
    CPoint::x = x;
}

float CPoint::getY() const {
    return y;
}

void CPoint::setY(float y) {
    CPoint::y = y;
}

float CPoint::getZ() const {
    return z;
}

void CPoint::setZ(float z) {
    CPoint::z = z;
}

// Funciones
CPoint CPoint::suma(CPoint &p1, CPoint &p2) {
    CPoint p((p1.getX() + p2.getX()), (p1.getY() + p2.getY()), (p1.getZ() + p2.getZ()));

    return p;
}

CPoint CPoint::resta(CPoint &p1, CPoint &p2) {
    CPoint p((p1.getX() - p2.getX()), (p1.getY() - p2.getY()), (p1.getZ() - p2.getZ()));

    return p;
}

double CPoint::dotproduct(CPoint &p1, CPoint &p2) {
    double product;

    product = (p1.getX()*p2.getX()) + (p1.getY() * p2.getY()) + (p1.getZ() * p2.getZ());

    return product;
}

CPoint CPoint::crossproduct(CPoint &p1, CPoint &p2) {
    CPoint p;
    p.setX((p1.getY() * p2.getZ()) - (p1.getZ() * p2.getY()));
    p.setY((p1.getZ() * p2.getX()) - (p1.getX() * p2.getZ()));
    p.setZ((p1.getX() * p2.getY()) - (p1.getY() * p2.getX()));

    return p;
}

double CPoint::distancia(CPoint &p1, CPoint &p2) {
    double distance;

    distance = sqrt((pow((p2.getX()-p1.getX()), 2) + pow((p2.getY()-p1.getY()), 2) + pow((p2.getZ()-p2.getZ()), 2)));

    return distance;
}

void CPoint::imprimir() {
    cout<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
}

int main(){
    float x1, y1, z1;
    float x2, y2, z2;

    cout<<"Ingrese las coordenadas del primer punto: "<<endl;
    cin>>x1>>y1>>z1;
    cout<<"Ingrese las coordenadas del segundo punto: "<<endl;
    cin>>x2>>y2>>z2;

    CPoint p1(x1,y1,z1);
    CPoint p2(x2,y2,z2);

    cout<<"Las coordenadas de p1 son: "<<endl;
    p1.imprimir();

    cout<<"Las coordenadas de p2 son: "<<endl;
    p2.imprimir();

    string opcion;
    while (true){
        cout<<"Ingrese operacion(+, -, ., x, d, 0 para cerrar):"<<endl;
        cin>>opcion;

        if(opcion == "0") {
            cout << "Gracias" << endl;
            break;
        }
        else if (opcion == "+"){
            CPoint p3;
            p3 = p3.suma(p1, p2);
            cout<<"La suma de p1 y p2 es:"<<endl;
            p3.imprimir();
        } else if (opcion == "-"){
            CPoint p3;
            p3 = p3.resta(p1, p2);
            cout<<"La resta de p1 y p2 es:"<<endl;
            p3.imprimir();
        } else if (opcion == "."){
            CPoint p3;
            int producto = p3.dotproduct(p1, p2);
            cout<<"El producto punto de p1 y p2 es:"<<endl;
            cout<<producto<<endl;
        } else if (opcion == "x"){
            CPoint p3;
            p3.crossproduct(p1, p2);
            cout<<"El producto cruz de p1 y p2 es:"<<endl;
            p3.imprimir();
        } else if (opcion == "d"){
            CPoint p3;
            double distancia = p3.distancia(p1, p2);
            cout<<"La distancia entre p1 y p2 es:"<<endl;
            cout<<distancia<<endl;
        } else {
            cout<<"caracter no valido"<<endl;
        }
    }

    return 0;
}