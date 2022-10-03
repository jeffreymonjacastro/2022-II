#include <iostream>

using namespace std;

int mas_largo(int *a, int*b){
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;

    if(sizeof(a) > sizeof(b)) return 1;
    else if(sizeof(a) < sizeof(b)) return 2;
    else return 0;
}

int main(){
    int filas=10, columnas = 10;

    double B[filas][columnas];

//    double B2[filas][columnas] = {};




    int** B3 = new int* [filas];



    cout<<B<<endl;
    cout<<B2<<endl;
    cout<<B3<<endl;




//float k = 0;
//float *p, **pp;
//
//p = &k;
//pp = &p;
//*p = 3.14159;
//
//cout<<**pp<<endl;

//    int a[10], b[5];
//
//    cout<<sizeof(a)<<endl;
//    cout<<sizeof(b)<<endl;
//    cout<<mas_largo(a,b)<<endl;

double* a[3];

typeid(a);

    return 0;
}