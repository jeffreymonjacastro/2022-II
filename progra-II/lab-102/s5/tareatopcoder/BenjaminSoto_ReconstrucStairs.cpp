#include "iostream"
#include "vector"
using namespace std;
int main(){
    int indice1,indice2;
    vector<int> v;

    // Modificando el vector
    v = {3, 1, 0, 4, 0, 0, 2};


    for(int i=0;i<v.size();i++){
        if(v[i] !=0){
            indice1=i;
            break;
        }
    }

    for(int i=v.size()-1;i>=0;i--){
        if(v[i] !=0){
            indice2=i;
            break;
        }
    }
    int pos = v[indice1];

    int sum=0,adicional=0;
    for(int i=indice1;i<indice2;i++){

        if(pos>=v[i]){
            pos++;

        }
        else{
            pos= v[i];
            adicional++;
        }

        sum+=v[i];
    }

    if(pos<v[indice2]){
        pos = v[indice2];
    }
    sum+=v[indice2];
    if(adicional!=0){
        pos+=1;
    }

    cout<< pos*(pos+1)/2 -sum;


    return 0;
}
