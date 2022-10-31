#include <iostream>
#include <vector>
using namespace std;
// Polimorfismo de clase
// generar una clase Miarreglo que permita crear un arreglo dinámico
// y un método para hallar el elemento máximo del arreglo

template <typename T>
class Miarreglo{
    T* ptr;
    int size;
public:
    Miarreglo(T* arr, int s){
        ptr = new T[s];
        size = s;

        for(int i = 0; i < size; i++)
            ptr[i] = arr[i];
    }

    T max(){
        T valor_max = ptr[0];
        for (int i = 0; i < size; ++i) {
            if(ptr[i]>valor_max)
                valor_max = ptr[i];
        }

        return valor_max;
    }


    ~Miarreglo(){
        delete[] ptr;
        ptr = nullptr;
    };

};

int main (){
    int arr[5] = {1, 2, 5, 4, 3};

    // Si no se especifica el tipo del template sale error
    Miarreglo<int> A(arr, 5);
    // vector<int> B(4); es similar a vector

    cout<<"El valor maximo es: "<<A.max()<<endl;

    double arr_d[5] = {3.34, 2.344, 8.2, 9.7, 3.11};

    Miarreglo<double> B(arr_d, 5);

    cout<<"El valor maximo es: "<<B.max()<<endl;
}
