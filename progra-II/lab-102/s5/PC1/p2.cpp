#include <iostream>

using namespace std;

int hallaDias(int& dia, int& mes, int& anio){
    int count_dias = 0, result = 0;

    if (anio % 4 == 0){ //año bisiesto
        result = 366;
        switch(mes){
            case 1:
                count_dias += 31;
                dia = 31 - dia;
                break;
            case 2:
                count_dias += 60;
                dia = 29 - dia;
                break;
            case 3:
                count_dias += 91;
                dia = 31 - dia;
                break;
            case 4:
                count_dias += 121;
                dia = 30 - dia;
                break;
            case 5:
                count_dias += 152;
                dia = 31 - dia;
                break;
            case 6:
                count_dias += 182;
                dia = 30 - dia;
                break;
            case 7:
                count_dias += 213;
                dia = 31 - dia;
                break;
            case 8:
                count_dias += 244;
                dia = 31 - dia;
                break;
            case 9:
                count_dias += 274;
                dia = 30 - dia;
                break;
            case 10:
                count_dias += 305;
                dia = 31 - dia;
                break;
            case 11:
                count_dias += 335;
                dia = 30 - dia;
                break;
            case 12:
                count_dias += 366;
                dia = 31 - dia;
                break;

            default: break;
        }
    } else { // año normal
        result = 365;
        switch(mes){
            case 1:
                count_dias += 31;
                dia = 31 - dia;
                break;
            case 2:
                count_dias += 59;
                dia = 28 - dia;
                break;
            case 3:
                count_dias += 90;
                dia = 31 - dia;
                break;
            case 4:
                count_dias += 120;
                dia = 30 - dia;
                break;
            case 5:
                count_dias += 151;
                dia = 31 - dia;
                break;
            case 6:
                count_dias += 181;
                dia = 30 - dia;
                break;
            case 7:
                count_dias += 212;
                dia = 31 - dia;
                break;
            case 8:
                count_dias += 243;
                dia = 31 - dia;
                break;
            case 9:
                count_dias += 273;
                dia = 30 - dia;
                break;
            case 10:
                count_dias += 304;
                dia = 31 - dia;
                break;
            case 11:
                count_dias += 334;
                dia = 30 - dia;
                break;
            case 12:
                count_dias += 365;
                dia = 31 - dia;
                break;

            default: break;
        }
    }

    // resta de los días
    count_dias -= dia;

    // dias que faltan
    result = result - count_dias;

    return result;
}


int main(){
    int dia, mes, anio;
    cout<<"Dia: "<<endl; cin>>dia;
    cout<<"Mes: "<<endl; cin>>mes;
    cout<<"Anio: "<<endl; cin>>anio;

    cout<<"Los dias que falta para anio nuevo: "<<hallaDias(dia, mes, anio);

    return 0;
}
