#include <iostream>
#include <cmath>

using namespace std;

/* RECURSIVIDAD */
// Función factorial
unsigned long long factorial(unsigned int n){
    //unsigned significa que se elimina el byte del int que se utiliza para el signo + o -
    if (n<=1)
        return 1L;
    return n*factorial(n-1);
}

// Función producto de dos números
unsigned long producto_recursivo(int a, int b){
    if(b == 1)
        return a;
    return a + producto_recursivo(a, b-1);
}

// Función potencia
unsigned long potencia_entera(int x, int n){
    if (n == 0)
        return 1;
    return x * pow(x, n-1);
}

// Función Fibonacci
unsigned long long fibonacci(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int n;
    cout<<"n: "<<endl; cin>>n;

    cout<<fibonacci(n);

    return 0;
}