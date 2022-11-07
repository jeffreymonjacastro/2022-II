#include <iostream>

using namespace std;


// Las funciones amigas son útiles con la sobrecarga de operadores
// y la creación de cierto tipo de funciones

class Usuario1 {
    int celular;
public:
    Usuario1(): celular(0){}
    Usuario1(int cel): celular(cel){}

    // El Usuario2 es amiga con el Usuario1, y ahora Usuario2 tiene acceso a los atributos privados de Usuario1
    friend class Usuario2;

    // La función externa es amiga con el Usuario1 y ahora accede a sus atributos
    friend void cambiar_celular(Usuario1 &A);
};


class Usuario2 {
private:
    int cuenta_bancaria;
public:
    Usuario2(): cuenta_bancaria(0){}
    Usuario2(int cb): cuenta_bancaria(cb){}

    // Es posible acceder al atributo celular de Usuario1?
    void yapear(Usuario1 A){
        cout<<"Usuario2 yapea al celular: "<<A.celular<<endl;
    }
};

void cambiar_celular(Usuario1 &A){
    A.celular = 933495738;
}

int main(){
    // generar Usuarios

    Usuario1 A(933495737);
    Usuario2 B;

    //yapear con celular del Usuario1 desde un método de Usuario2
    B.yapear(A);

    // modificar el celular del Usuario1 (función externa a clase)
    cambiar_celular(A);

    //Yapear con nuevo celular del Usuario1 desde un método de Usuario2
    B.yapear(A);

    return 0;
}