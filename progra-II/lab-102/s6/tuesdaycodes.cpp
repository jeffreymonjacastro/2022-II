//#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

int menu(){
    int op;
    cout<<"--MENU--"<<endl;
    cout<<"1. Reporte Total de resanado"<<endl;
    cout<<"2. Reporte por sector especifico"<<endl;
    cout<<"3. Reporte por letra"<<endl;
    cout<<"4. Salir"<<endl;
    cin>>op;

    return op;
}


void generate_random(int** M, int fil, int col, int li, int ls){
    for(int i = 0; i < fil; i++){
        for(int j = 0; j < col; j++)
            M[i][j] = rand()%(ls-li) + li;
    }
}


void print_matrix(int** M, int fil, int col){
    cout<<"  ";
    for(int i = 0; i < col; i++){
        cout<<setw(3)<<char('A'+i)<<"  ";
    }

    cout<<endl;

    for(int i = 0; i < fil; i++){
        cout<<i<<"  ";
        for(int j = 0; j < col; j++)
            cout<<setw(3)<<M[i][j]<<"  ";
        cout<<endl;
    }
}


void reporte_resanado(int **M, int rows, int columns){
    int counter = 0;

    for(int i = 0; i < rows;  i++){
        for(int j = 0; j < columns; j++){
            if(100 <= M[i][j] and M[i][j] <= 199){
                counter++;
                cout<<char('A' + j)<<i+1<<" ";
            }
        }
    }

    cout<<"\n Total de sectores que necesitan resane: "<<counter;
    cout<<endl;
}


void reporte_sector_esp(int **M){
    char l;
    int fila;
    cout<<"Ingrese la letra que especifique el sector"<<endl; cin>>l;

    cout<<"Ingrese la fila (1-8)"<<endl; cin>>fila;

    int x = M[fila-1][int(l-'A')];

    cout<<"El sector contiene: "<<x;
    cout<<endl;

    if(x >= 100 and x <= 199)
        cout<<"El trabajo a realizar es: 1 - resanado"<<endl;
    else if(x>= 200 and x <= 299)
        cout<<"El trabajo a realizar es: 2 - pintado"<<endl;
    else if(x>= 300 and x <= 399)
        cout<<"El tabajo a realizar es: 3 - arreglo de pasto"<<endl;
    else
        cout<<"No hay necesidad"<<endl;

}


void reporte_letra(int **M, int fil, int col){
    int counter1 = 0, counter2 = 0, counter3 = 0;

    for(int j = 0; j < col; j++){
        cout<<"Los sectores asociados a la letra "<<char('A'+j)<<" son:"<<endl;

        for(int i = 0; i < fil; i++) {
            int x = M[i][j];

            cout<<"Sector "<<char('A'+j)<<i+1<<":"<<x;

            if (x >= 100 and x <= 199) {
                counter1++;
                cout<<" 1 - resanado"<<endl;
            }
            else if (x >= 200 and x <= 299) {
                counter2++;
                cout<<" 2 - pintado de lineas"<<endl;
            }
            else if (x >= 300 and x <= 399) {
                counter3++;
                cout<<" 3 - arreglo de pasto"<<endl;
            }
            else
                cout<<endl;
        }
    }

    cout<<"Total del tipo 1 - resanado "<<counter1<<endl;
    cout<<"Total del tipo 2 - pintado de lineas "<<counter2<<endl;
    cout<<"Total del tipo 3 - arreglo de pasto"<<counter3<<endl;
}


int main(){
    int fils = 8, columns = 10;

    // se define la matriz
    int** ptM = nullptr;
    ptM = new int*[fils]; // filas

    for(int i = 0; i < fils; i++){
        ptM[i] = new int[columns]; // por cada fila una columna
    }

    generate_random(ptM, fils, columns, 0, 399);

    print_matrix(ptM, fils, columns);

    bool isload = true;
    while(isload){
        int op = menu();
        switch(op){
            case 1:
                reporte_resanado(ptM, fils, columns);
                break;
            case 2:
                reporte_sector_esp(ptM);
                break;
            case 3:
                reporte_letra(ptM, fils, columns);
                break;
            case 4:
                isload = false;
                break;
            default:
                break;
        }
    }

    return 0;
}