#include <iostream>

using namespace std;

// Funcion para printear los elementos de una matriz
void print(int* arr, int n){
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}

// Bubble sort
void a(int* arr, int n){
    for(int i = 1; i < n; i++){
        int actual = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > actual) {
            arr[j + 1] == arr[j];

        }
    }
}


/*
int main(){
    int* arr = new int[10];

    for(int i = 0; i < 10; i++)
        arr[i] = i * 2;

    print(arr, 10);

    return 0;
}
*/

struct Pair {
    int first;
    string second;
};

int main(){
    pair<int, string> p1 = {2, "pares"};

    pair<int, string> p2[2];


}