#include <iostream>

using namespace std;

void relojdearena(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == j || i+j == n+1 || i == 1 || i == n){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


void diamante(int n){
    n = n/2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i+j == n-1)
                cout<<"*";
            else
                cout<<" ";
        }

        for(int k = 0; k < n; k++){
            if (k == i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == j)
                cout<<"*";
            else
                cout<<" ";
        }

        for(int k = 0; k < n; k++){
            if (i+k == n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}


void triangle(int n){
    int ancho = 2*n-1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < ancho; j++){
            if(i == 0)
                cout<<"_";
            else if(i+j == n/2+1 && i!= n-1)
                cout<<"\\";
            else if(i+j == ancho && i!=n-1)
                cout<<"/";
            else if(i == n-1 && j == ancho/2)
                cout<<"V";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"N:"<<endl; cin>>n;

//    relojdearena(n);
//    diamante(n);
    triangle(n);

    return 0;
}