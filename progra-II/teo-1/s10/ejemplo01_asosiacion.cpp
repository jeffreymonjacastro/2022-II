#include <iostream>

using namespace std;

// Asociacion: objeto de clase A "usa un" objeto de clase B
// A -> B
// Si se retira B, A puede seguir existiendo

// La asociación es cuando una clase tiene de atributo otra clase
//      Paso 1: Crear atributo de la clase asociada
//      Paso 2: Crear método de asociación

class TarjetaCredito{
    string vencimiento;
    string cvv;
public:
    //Constructor
    TarjetaCredito(){vencimiento="", cvv="";}
    TarjetaCredito(string _cvv, string _v): cvv(_cvv), vencimiento(_v){}

    //setters y getters
    void set_vencimiento(string _v){vencimiento = _v;}
    void set_cvv(string _cvv){cvv = _cvv;}

    string get_vencimiento(){return vencimiento;}
    string get_cvv(){return cvv;}

    // destructor
    ~TarjetaCredito(){cout<<"tarjeta borrada"<<endl;}
};

class Persona {
    string nombre;
    int edad;
    TarjetaCredito* VISA = nullptr;
public:
    // Constructor
    Persona(){nombre = "", edad = 0;}
    Persona(string n, int e): nombre(n), edad(e){}

    //setters y getters
    string get_nombre(){return nombre;}

    // Métodos de asociación
    void asociar_tarjeta(TarjetaCredito* visa){
        VISA = visa;
    }

    // Obtener info del atributo tarjeta
    string get_vencimiento_tarjeta(){return VISA->get_vencimiento();}
    void renovar_tarjeta(string fecha){VISA->set_vencimiento(fecha);}

    //destructor
    ~Persona(){cout<<"Persona borrada"<<endl;}
};

int main(){
    // Generar un puntero dinámico a Tarjeta de Crédito y Persona, con v alores
    TarjetaCredito* visa = new TarjetaCredito("123", "01/01/24");
    Persona* A = new Persona("Daniel", 30);

    // asociar la tarjeta a la persona
    A->asociar_tarjeta(visa);

    // Imprimir informacion asociada
    cout<<A->get_nombre()<<" usa una tarjeta que vence el "<<A->get_vencimiento_tarjeta()<<endl;

    // Renovar tarjeta
    A->renovar_tarjeta("01/01/25");

    // imprimir información
    cout<<A->get_nombre()<<" usa una tarjeta que vence el "<<A->get_vencimiento_tarjeta()<<endl;

    //Eliminar punteros dinámicos
    delete visa;
    delete A;


    return 0;
}