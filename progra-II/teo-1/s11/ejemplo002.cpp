#include "familia.h"
#include "padre.h"
#include "madre.h"
#include "hijo.h"

// definir una clase Familia con clases derivadas Padre, Madre, Hijo
// definir constructores y destructores, setters y getters
// definir metodos Seguros() y Bienes()
// genere un vector de tipo familia

int main(){
    string apellido = "Perez";
    auto pPadre = new Padre(apellido, "Carlos", 50);
    auto pMadre = new Madre(apellido, "Marta", 45);
    auto pHijo = new Hijo(apellido, "Jorge", 25);

    // Vector de familia
    vector<Familia*> familia = {pPadre, pMadre, pHijo};

    for (auto a:familia){
        cout<<a->get_nombre()<<"\t"<<a->get_apellido()<<endl;
        a->Seguro();
        a->Bienes();
        cout<<endl;
    }

    return 0;
}