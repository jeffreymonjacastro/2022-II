#include <iostream>
#include <vector>

using namespace std;

// Ejercicio 1 (Interés simple)
unsigned long interes(long x, int t){
    /*
    I = C.i.t
    Interés = Capital x Tasa de interés x tiempo
    */

    if (t == 0)
        return x;

    return x + interes(x + x*0.08, t-1);
}

// Ejercicio 2 (Máximo)
int max(vector<int> V){
    if (V.size() == 1)
        return V[0];
    if (V.size() == 2) {
        if (V[0] > V[1])
            return V[0];
        else
            return V[1];
    }

    if (V.size() > 2){
        int mid = V.size()/2;
        return max(V[0,mid]);
    }
}




int main(){
    /*
    long x;
    int t;

    cout<<"Capital: "<<endl; cin>>x;
    cout<<"Tiempo: "<< endl; cin>>t;

    cout<<interes(x,t);
    */

    vector<int> V(100, 10, 0, 5);

    return 0;
}
