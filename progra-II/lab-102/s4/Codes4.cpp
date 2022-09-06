#include <iostream>

using namespace std;

int main(){
    char v1 = 'A';
    char *p1 = &v1;

    cout<<"El valor de v1 es "<<v1<<endl;
    cout<<"La direccion es  "<<&v1<<endl;

    cout<<"El valor de v1 es "<<*p1<<endl;
    cout<<"La direccion es  "<<p1<<endl;

    char **p2;

    int x = 10; //Valor x
    int *pTemp = &x; //Puntero que tiene la dirección de x
    int **p3 = &pTemp; //Puntero que tiene la dirección de pTemp

    return 0;
}