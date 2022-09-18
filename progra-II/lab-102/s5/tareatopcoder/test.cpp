#include <iostream>
#include <vector>

using namespace std;

void imprimirVec(vector<int> vec){
    for(int i : vec){
        cout<<i<<' ';
    }
}

void increase(const vector<int> &vec){
    vector<int> newvec;
    int n = vec.size();

    for(int i = 1; i <= vec[0]; i++){
        newvec.push_back(i);
    }
    for(int i = 1; i < n; i++){
        newvec.push_back(vec[i]);
    }

    imprimirVec(newvec);
}

int main(){
    vector<int> vec = {0,0,3,2,1,0,0};
    vector<int> newvec = {};

    int n;
    n = vec.size();

    imprimirVec(vec);
    cout<<endl;

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

    for(int i = start; i <= end; i++){
        newvec.push_back(vec[i]);
    }

    imprimirVec(newvec);
    cout<<endl;

    increase(newvec);

    return 0;
}
