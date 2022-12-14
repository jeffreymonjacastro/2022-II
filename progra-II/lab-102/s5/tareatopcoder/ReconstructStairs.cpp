#include <iostream>
#include <vector>

using namespace std;


// Función para imprimir vectores
void imprimirVec(vector<int> vec){
    for(int i : vec)
        cout<<i<<' ';
}

// Función para quitar los 0 de los costados
vector<int> simplification(vector<int> vec){
    vector<int> newvec = {};

    int n;
    n = vec.size();

    int start = 0, end = 0;

    for(int i = 0; i < n; i++){
        if(vec[i] != 0) {
            start = i;
            break;
        }
    }

    for(int i = n-1; i >= 0; i--) {
        if (vec[i] != 0) {
            end = i;
            break;
        }
    }

    for(int i = start; i <= end; i++)
        newvec.push_back(vec[i]);

    return newvec;
}

// Función para agregar valores a la izquierda
vector<int> increase(const vector<int> &vec){
    vector<int> newvec;

    int n = vec.size();

    for(int i = 1; i <= vec[0]; i++){
        newvec.push_back(i);
    }
    for(int i = 1; i < n; i++){
        newvec.push_back(vec[i]);
    }

    return newvec;
}

// Main
int main(){
    vector<int> v, v2, v3;

    int input;
    while((cin>>input))
        v.push_back(input);

//    imprimirVec(v); cout<<endl;

    v2 = simplification(v);
//    imprimirVec(v2); cout<<endl;

    v3 = increase(v2);
//    imprimirVec(v3); cout<<endl;

    int n1, n2, sum = 0, formula, result;

    n1 = v2.size();

    for(int i = 0; i < n1; i++){
        sum += v2[i];
    }

    n2 = v3.size();

    formula = ((n2) * (n2 + 1)) / 2;

    result = formula - sum;

    cout<<result;

    return 0;
}