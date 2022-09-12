#include <iostream>

using namespace std;

int main(){
    // arrays estáticos
    // array definido en forma contigua en el stack

    int x = 5;
    int A[x];
    int* ptr = A; // A es la dirección del array (no necesito &)

    cout<<A<<endl;
    cout<<*ptr<<endl;

    // asigna valores al array
    for(int i = 0; i < x; i++)
        A[i] = i; // ptr[i] = i

    // Imprimir el array desde el puntero
    for(int i = 0; i < x; i++)
        cout<<A[i]<<", ";


    cout<<endl;
    // array de chars
    char nombre[5] = {'J', 'e', 'f', 'f', '\0'};
    char* pnombre = "Jeff";
    string nombre_s = "Jeff";

    for(char s:nombre) cout<<s<<endl;

    return 0;


}
