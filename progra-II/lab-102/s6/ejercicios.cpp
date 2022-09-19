#include <iostream>
#include <cstdlib>

using namespace std;

// Ejemplo 003 - funciones
void print_array(int n, int* p);
void generate_values(int n, int* p);
double calculate_media(double n, int* p);
double calculate_moda(int n, int* p);



// Ejemplo 001
void multiplos5y7(){
    int n;
    cout<<"N: "<<endl; cin>>n;

    int *p1 = new int[n];
    int *p2 = new int[n];
    int *p3 = new int[n];

    // poner números aleatorios
    for(int i = 0; i < n; i++){
        p1[i] = rand()%999;
        p2[i] = 0;
        p3[i] = 0;
    }

    int m = 0, p = 0;

    // Seleccionar los múltiplos de 5 y 7 e insertarlos en los arrays
    for(int i = 0; i < n; i++){
        if(p1[i] % 5 == 0){
            p2[m] = p1[i];
            m++;
        } else if(p1[i] % 7 == 0){
            p3[p] = p1[i];
            p++;
        }
    }

    cout<<"Array 1:"<<endl;
    for(int i = 0; i < n; i++) cout<<p1[i]<<" "; cout<<endl;

    cout<<"Array 2:"<<endl;
    for(int i = 0; i < m; i++) cout<<p2[i]<<" "; cout<<endl;

    cout<<"Array 3:"<<endl;
    for(int i = 0; i < p; i++) cout<<p3[i]<<" "; cout<<endl;
}

// Ejemplo 002
void busquedalideal(){
    int n;
    cout<<"N: "<<endl; cin>>n; //Tamaño del array

    // Arrays dinámicos
    int* p1 = new int[n];
    int* p2 = new int[n];

    // Llenar el primer array con números aleatorios entre [25 - 30]
    for(int i = 0; i < n;i++)
        p1[i] = rand()%5 + 25;

    int x, idx = 0;
    cout<<"Numero a buscar: "<<endl; cin>>x; // Número a buscar

    // Búsqueda lineal --> si lo encuentra, agrega la posición al segundo array
    for(int i = 0; i < n; i++){
        if(p1[i] == x) {
            p2[idx] = i;
            idx++;
        }
    }

    // Imprime el primer array
    cout << "Array 1: ";
    for(int i = 0; i < n;i++){
        cout << p1[i]<<" ";
    }

    cout<<endl;

    // Imprime el segundo array si encuentra al menos una vez
    if(idx == 0)
        cout<<"El numero "<<x<<" no se encuentra en el array";
    else {
        cout << "Array 2: ";
        for (int i = 0; i < idx; i++)
            cout << p2[i] << " ";

        cout<<"El dato se encuentra "<<idx<<"veces";
    }

    delete []p1;
    delete []p2;

    p1 = nullptr;
    p2 = nullptr;
}

// Ejemplo 003
void estadistica(){
    int n;
    cout<<"N:"<<endl; cin>>n;

    int *p = new int[n];

    // Generar valores aleatorios
    generate_values(n, p);

    // Imprimir array
    print_array(n, p);

    cout<<endl;

    // Media
    cout<<calculate_media(n, p)<<endl;

    // Moda
    calculate_moda(n, p);

}


void generate_values(int n, int* p){
    for(int i = 0; i < n; i++)
        p[i] = rand()%29 + 1;
}

void print_array(int n, int* p){
    for(int i = 0; i < n; i++)
        cout<<p[i]<<" ";
}

double calculate_media(double n, int* p){
    double media = 0;
    for(int i = 0; i < n; i++){
        media = media + p[i]/double(n);
    }

    return media;
}

double calculate_moda(int n, int* p){
    int moda_i = 0, moda_counter = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(p[j] == p[i])
                moda_i++;
        }
    }
}


int main(){
    estadistica();

//    busquedalideal();

    return 0;
}