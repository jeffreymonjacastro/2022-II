#include <iostream>

using namespace std;

// arrays dinámicos
int main(){
   // Defina un array dinámico en C++
   int t = 10;
   int* p_array = new int[t];

   //asigne valores al array usando el puntero
   for(int i = 0; i < t; i++)
       p_array[i] = i*10;

   // imprima valores del array usando el puntero
   for(int i = 0; i < t; i++)
       cout<<p_array[i]<<", ";

   // libere memoria dinámica
   delete [] p_array;
}