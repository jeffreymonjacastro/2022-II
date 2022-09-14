#include <iostream>

using namespace std;

int secuencia_recursiva(int n) {
    cout << n << " ";

    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        return secuencia_recursiva(n / 2);
    }
    else {
        return secuencia_recursiva(n * 3 + 1);
    }
}


int main(){
    int n;
    cout << "ingrese n: " ; cin >> n;
    cout << "secuencia: "<< secuencia_recursiva(n);
    return 0;
}