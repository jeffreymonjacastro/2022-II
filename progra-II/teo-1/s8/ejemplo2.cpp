#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Planeta : public error_code {
private:
    // Atributos
    string nombre;
    double diametro = 0;
    double masa = 0;

public:
    // Setters
    void set_nombre(string s){nombre = s;}

    void set_diametro(double d){diametro = d;}

    void set_masa(double m){masa = m;}

    // CONSTRUCTORES: funciones de inicializacion (setters)
    // Constructor por defecto -> Se inicializa con el nombre de la clas. Generalmente está sin valores
    Planeta(){cout<<"Objeto Planeta creado por defecto"<<endl;}

    // Constructor de asignación -> Posee valores default
    Planeta(string s, double d, double m){nombre = s; diametro = d; masa = m;}
    Planeta(string s, double d){nombre = s; diametro = d;}
    Planeta(string s){nombre = s;}

    // DESTRUCTORES: liberan el espacio de memoria del objeto de clase
    // x = cout<<"Planeta destruido"<<endl;
    ~Planeta(){}

    // Getters
    string get_nombre(){return nombre;}

    double get_diametro(){return diametro;}

    double get_masa(){return masa;}

};

int main(){
    // Crear un planeta por defecto
    Planeta Marte;

    // Crear un planeta con el constructor de asignación
    Planeta Jupiter("Jupiter", 5, 100);

    // Crear un puntero a clase Planeta (pila, stack) - (se construye un objeto?)
    Planeta* Saturno = nullptr;
    Saturno = &Jupiter;

    // Crear un puntero a clase Planeta (monticulo, heap)
    Planeta* Venus = new Planeta("Venus", 1, 0.8);
    delete Venus;

    // Crear un array dinamico de objetos de clase Planeta
    Planeta* gaseosos = new Planeta[4];

    // Asignar valores (objetos) al array
    gaseosos[0] = Planeta("Jupiter", 5);
    gaseosos[1] = Planeta("Saturno", 5);
    gaseosos[2] = Planeta("Urano", 5);
    gaseosos[3] = Planeta("Neptuno", 5);

    // crear un vector de objetos de clase Planeta
    vector<Planeta> rocosos(4);

    // Asignar valores (objetos) al vector
    rocosos.push_back(Planeta("Mercurio", 0.5, 0.5));
    rocosos.push_back(Planeta("Venus", 0.9, 0.9));
    rocosos.push_back(Planeta("Tierra", 1, 1));
    rocosos.push_back(Planeta("Marte", 1, 0.6));

    // Gaseoso es un puntero a un array, que apunta al primer elemento
    cout<<"----Planetas gaseosos----"<<endl;
    for(int i = 0; i < 4; i++){
        cout<<gaseosos[i].get_nombre()<<endl;
    }

    delete[] gaseosos;

    // Gaseoso
    cout<<"----Planetas rocosos----"<<endl;
    for(auto it = begin(rocosos); it != end(rocosos); it++){
        cout<<(*it).get_nombre()<<endl;
    }

    return 0;
}