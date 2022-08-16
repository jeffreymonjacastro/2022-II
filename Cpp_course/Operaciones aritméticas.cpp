//Operaciones aritméticas

#include<iostream>

using namespace std;

int main(){
	
	/*
	1. Escribe un programa que lea de la entrada estándar dos números y muestre
	en la salida estándar su suma, resta, multiplicación y división
	*/
	
	/*
	int n1;
	int n2;
	
	cout<<"Escriba el primer numero: ";
	cin>>n1;
	
	cout<<"Escriba el segundo numero: ";
	cin>>n2;
	
	cout<<"\nSuma: "<<n1+n2;
	cout<<"\nResta: "<<n1-n2;
	cout<<"\nMultiplicacion: "<<n1*n2;
	cout<<"\nDivision: "<<n1/n2;
	*/
	
	// Las variables se pueden asignar por comas
	int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	// Lo que separa cada código es el ; entonces se puede colocar en una línea
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;
	
	
	/*
	2. Escribe un programa que lea de la entrada estándar el precio de un
	producto y muestre en la salida estandar el precio del producto al aplicarle el IVA (IGB)
	*/
	
	int precio, igb;
	
	cout<<"Precio del producto: "; cin>>precio;
	
	igb = 0.18*precio + precio;
	
	cout<<"\nEl precio del producto con igb es: "<<igb;
	
	
	return 0;
}


