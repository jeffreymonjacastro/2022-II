#include <bits/stdc++.h>

using namespace std;

void ejemplo001(){
    int r;
    cout<<"Radio: "; cin>>r;

    float pi = 3.14159;

    float area = 4.0*pi*pow(r,2);

    float volumen = 4.0/3*pi*pow(r,3); //Typecasting del 4/3

    cout<<"El area de la esfera es: "<<fixed<<setprecision(8)<<area<<endl;
    cout<<"El volumen de la esfera es: "<<volumen<<endl;
}

void ejemplo002(){
    cout<<setw(34)<<setfill('#')<<""<<endl;
    cout<<"United Airless Flight 7611"<<endl;
    cout<<"On-time departs in 3 hours 8 mins"<<endl;
    cout<<"JFK"<<setw(15)<<setfill('-')<<">PEK"<<endl;
    cout<<setw(34)<<setfill('-')<<""<<endl;
    cout<<setfill(' ');
    cout<<setw(18)<<left<<"Time"<<setw(10)<<"Terminal"<<"Gate"<<endl;
    cout<<setw(18)<<left<<"3:50 PM"<<setw(10)<<"1"<<"-"<<endl;
}

void ejemplo003(){
    int n;
    cout<<"Colors: "; cin>>n;

    cout<<"Cajas24: "<<n/24<<endl;
    n = n%24;

    cout<<"Cajas12: "<<n/12<<endl;
    n = n%12;

    cout<<"Cajas6: "<<n/6<<endl;

    cout<<"Sobran: "<<n%6<<endl;


}


int main(){
//    ejemplo001();
//    ejemplo002();
    ejemplo003();


    return 0;
}