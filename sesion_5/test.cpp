#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int n, m=0;
    cout<<"N:"<<endl;
    cin>>n;

    vector<vector<int>> matrix;

    for (int i = 0; i < n; i++) {
        vector<int> num;

        for (int j = 0; j < n; j++) {
            num.push_back(m);
            m++;
        }

        matrix.push_back(num);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<setw(5)<<matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}