#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Ingrese un numero entero positivo: ";
  cin >> n;

  cout << "Numeros primos menores o iguales a " << n << ":\n";

  for (int i = 2; i <= n; i++) {
    bool es_primo = true;

    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        es_primo = false;
        break;
      }
    }

    if (es_primo) {
      cout << i << " ";
    }
  }

  return 0;
}
