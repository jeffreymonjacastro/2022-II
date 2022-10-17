#include <iostream>
#include <vector>
#include <cstdlib>



using namespace std;

void ejercicio3(){
    srand(time(nullptr));
    int n;
    cout<<"N: "<<endl;
    cin>>n;

    vector<int> numeros(n,0);

    for(int i = 0; i < numeros.size();i++){
        numeros[i] = rand()%998 + 1;

        cout<<numeros[i]<<", ";
    }

    vector<int> num_con_4;

    for (int i = 0; i < numeros.size(); i++){
        string s = to_string(numeros[i]);

        for (int j = 0; j < s.size(); j++){
            bool palanca = true;

            if (s[j] == '4' && palanca)
                num_con_4.push_back(numeros[i]);
            palanca = false;
        }
    }

    cout<<endl;

    for (int i = 0; i < num_con_4.size(); i++)
        cout<<num_con_4[i]<<", ";
}

void ejercicio5(){
    srand(time(nullptr));
    int n;
    cout<<"N: "<<endl; cin>>n;

    int* arr = new int[n];
    int* newArr = new int[10];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 9 + 1;
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 10; i++)
        newArr[i] = 0;

    int max = -1;

    for (int i = 0; i < n; i++){
        newArr[arr[i]-1] += 1;
    }

    for (int i = 0; i < n;i++){
        if (max < newArr[arr[i]-1])
            max = newArr[arr[i]-1];
    }

    cout<<endl;

    for(int i = 0; i < 10; i++)
        cout<<newArr[i]<<" ";

    cout<<endl;

    cout<<"Veces maxima que se repite: "<<max;

    cout<<endl;

    cout<<"Numero que mas se repite: ";
    for (int i = 0; i < 10; i++){
        if(max == newArr[i])
            cout<<i + 1<<" ";
    }

    cout<<endl;
}

void ejercicio6(){

}

int main(){
//    ejercicio3();
//    ejercicio5();
    ejercicio6();
}
