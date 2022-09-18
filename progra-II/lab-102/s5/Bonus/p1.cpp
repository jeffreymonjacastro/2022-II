#include <iostream>

using namespace std;

int main(){
    int n, idx = 1;

    cout<<"n: "<<endl; cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n-1 || i+j == n-1){
                cout<<idx;
                idx += 1;
            } else
                cout<<" ";

            if(idx == 10)
                idx = 0;
        }
        cout<<endl;
    }

    return 0;
}