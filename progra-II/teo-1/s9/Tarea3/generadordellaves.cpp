#include <iostream>

using namespace std;

int main() {
    //definicion de variables
    srand(time(NULL));
    string superstring = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", cadena_generada="", clave="", llave="";
    int n = 0, num_rand = 0;

    //primer input
    cout<<"Numero de terminos :";
    cin>>n;
    for (int i = 0; i < n; i++){
        num_rand = rand()%62;
        cadena_generada += superstring[num_rand];
    }

    // si el char tiene numero ascii impar le corresponde 1, caso contrario 0
    // si el char es un digito y par se vuelve cero, si es impar 1
    for(auto i : cadena_generada){
        if (int(i)%2 == 0)
            clave+='0';
        else
            clave+='1';
    }

    //creación de la llave
    for(auto i : clave){
        if(i == '0')
            llave+="11";
        else
            llave+="00";
    }
    // Modificación del último dígito de la llave
    if (n%2 == 0) llave[llave.size()-1] = '0';
    else llave[llave.size()-1]='1';
    cout<<"La cadena de caracteres es: "<<cadena_generada<<endl;
    cout<<"La clave es: "<<clave<<endl;
    cout<<"La llave es: "<<llave<<endl;
    return 0;
}