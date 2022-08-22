// De radianes a sexagesimales

#include <iostream>

using namespace std;

const float PI = 3.14159;

int main(){
    float rad, sexa;
    cout<<"Numero en radianes: ";
    cin>>rad;

    sexa = rad*180/PI;

    cout<<"El valor en sexagesimales es: "<<sexa;

    return 0;
}
