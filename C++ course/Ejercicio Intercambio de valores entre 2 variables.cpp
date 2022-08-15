// Ejercicio Intercambio de valores entre 2 variables

#include<iostream>

using namespace std;

int main(){
	// Intercambiar el valor entre dos variables
	int x,y, aux;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl valor de x es: "<<x<<endl;
	cout<<"El valor de y es: "<<y<<endl;
	
	return  0;
}