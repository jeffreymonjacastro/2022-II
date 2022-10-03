#include "CTriangulo.h"

int main(){
    // FORMA 1:

    // Creando el objeto llamando al constructor con los argumentos 3, 4 y 5
    CTriangulo t1(3,4,5);

    cout<<"El perimetro es: "<<t1.perimetro()<<endl;
    cout<<"El area es: "<<t1.area()<<endl;


    // FORMA 2:

    // Creando el objeto con un puntero - new (heap)
    CTriangulo *t2;
    t2 = new CTriangulo(6, 8, 10);

    cout<<"El perimetro es: "<<t2->perimetro()<<endl;
    cout<<"El area es: "<<t2->area()<<endl;


    return 0;
}