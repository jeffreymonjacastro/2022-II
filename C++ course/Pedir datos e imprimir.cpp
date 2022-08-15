//Pedir datos e imprimir

#include<iostream>

using namespace std;

int main(){
	/*
	3. Realice un programa que lea de la entrada estándar los siguientes 
	datos de una persona:
	
		Edad: dato tipo entero
		Sexo: dato tipo carácter
		Altura (m): dato tipo real
		
	Tras leer los datos el programa debe mostrarlos en la salida estándar
	*/
	
	int edad;
	char sexo[10]; //Los corchetes es para guardar string más largos
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura (m): "<<altura<<endl;
	
	/*
	Ejecute el programa del ejercicio anterior con entradas erróneas
	y observe los resultados. Por ejemplo, introduzca un dato de tipo 
	carácter cuando se espera un dato de tipo entero
	*/
	
	return 0;
}