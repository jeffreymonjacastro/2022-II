#include <iostream>

using namespace std;

int main(){
    string n = "abcd";

    string prueba = "";

    for (int i = 0; i < 4; i++)
        prueba += "Hi" + to_string(i);


    cout<<prueba;


}