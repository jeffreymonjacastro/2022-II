// Ejercicio Expresiones 1 

#include<iostream>

using namespace std;

int main(){
	// 1. Escribe la siguiente expresión como expresión de c++  -->  a/b +1
	
	/*
	float a,b, resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2); // redondear
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	*/
	
	// 2. Escribe la siguiente expresión matemática: (a+b/c+d)
	
	float a,b,c,d, result = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	cout<<"Digite el valor de d: "; cin>>d;
	
	result = (a+b)/(c+d);
	
	cout.precision(3);
	cout<<"\nEl resultado es: "<<result<<endl;
	
	
	return 0;
}