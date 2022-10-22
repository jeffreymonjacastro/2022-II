#include <iostream>
#include <vector>

using namespace std;

class CAtleta{
private:
    string nombre;
    int edad;
    string pais;
    double velocidad;
public:
    const string &getNombre() const;

    void setNombre(const string &nombre);

    int getEdad() const;

    void setEdad(int edad);

    const string &getPais() const;

    void setPais(const string &pais);

    double getVelocidad() const;

    void setVelocidad(double velocidad);

public:
    CAtleta();
    CAtleta(string _nombre, int _edad, string _pais, double _velocidad);
    CAtleta(const CAtleta &A);

    virtual ~CAtleta();
};

CAtleta::CAtleta() {}

CAtleta::CAtleta(std::string _nombre, int _edad, std::string _pais, double _velocidad) {
    nombre = _nombre;
    edad = _edad;
    pais = _pais;
    velocidad = _velocidad;
}

CAtleta::CAtleta(const CAtleta &A) {
    nombre = A.nombre;
    edad = A.edad;
    pais = A.pais;
    velocidad = A.velocidad;
}

CAtleta::~CAtleta() {}

const string &CAtleta::getNombre() const {
    return nombre;
}

void CAtleta::setNombre(const string &nombre) {
    CAtleta::nombre = nombre;
}

int CAtleta::getEdad() const {
    return edad;
}

void CAtleta::setEdad(int edad) {
    CAtleta::edad = edad;
}

const string &CAtleta::getPais() const {
    return pais;
}

void CAtleta::setPais(const string &pais) {
    CAtleta::pais = pais;
}

double CAtleta::getVelocidad() const {
    return velocidad;
}

void CAtleta::setVelocidad(double velocidad) {
    CAtleta::velocidad = velocidad;
}

int main(){
    int n;

    while(true){
        cout<<"Cantidad de participantes en la carrera: "<<endl; cin>>n;

        if (n >= 1)
            break;
    }

    vector<CAtleta> Atletas = {};

    for (int i = 0; i < n; ++i) {
        string name;
        int edad;
        string pais;
        double velocidad;

        cout<<"Nombre del participante "<<i+1<<": "<<endl; cin>>name;
        cout<<"Edad del participante "<<i+1<<": "<<endl; cin>>edad;
        cout<<"Pais del participante "<<i+1<<": "<<endl; cin>>pais;
        cout<<"Velocidad del participante "<<i+1<<": "<<endl; cin>>velocidad;

        CAtleta a(name, edad, pais, velocidad);

        Atletas.push_back(a);
    }

    vector<double> tiempos = {};

    double time;
    for (int i = 0; i < n; ++i) {
        time = 100/(Atletas[i].getVelocidad());

        tiempos.push_back(time);
    }

    double tiempo_min = tiempos[0];

    for (int i = 0; i < n; ++i) {
        if(tiempos[i] < tiempo_min)
            tiempo_min = tiempos[i];
    }

    for (int i = 0; i < n; ++i) {
        if(tiempos[i] == tiempo_min)
            cout<<"El(la) ganador(ra) es: "<<Atletas[i].getNombre()<<" de "<<Atletas[i].getPais()<<", con "<<Atletas[i].getEdad()<<" de edad, corriendo a "<<Atletas[i].getVelocidad()<<" m/s";
    }
}
