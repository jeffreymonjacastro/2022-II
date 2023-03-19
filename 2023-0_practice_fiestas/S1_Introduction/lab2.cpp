#include <bits/stdc++.h>

using namespace std;

void ejemplo001(){
    const float PI = 3.14159;

    int select;
    cout<<"1. Rad a sex"<<endl;
    cout<<"2. Sex a rad"<<endl;
    cin>>select;

    if (select == 1) {
        float rad;
        cout<<"Ingresa los radianes: "; cin>>rad;

        cout<<"El numero "<<rad<<" en sexagesimales es: "<<fixed<<setprecision(2)<<rad*180/PI<<" grados"<<endl;
    } else if(select == 2){
        float sex;
        cout<<"Ingresa los sexagesimales: "; cin>>sex;

        cout<<"El numero "<<sex<<" en sexagesimales es: "<<fixed<<setprecision(2)<<sex*PI/180<<" radianes"<<endl;
    }
}

void ejemplo002(){
    double x1=0, y1=0, x2=0, y2=0, distancia=0;

    cout<<"Ingresa coordenadas del primer punto (x1, y1)"<<endl;
    cin>>x1>>y1;

    cout<<"Ingresa coordenadas del segundo punto (x2, y2)"<<endl;
    cin>>x2>>y2;

    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    cout<<"La distancia entre los puntos es: "<<fixed<<setprecision(2)<<distancia<<endl;
}

void ejemplo003(){
    int g1, m1, s1, g2, m2, s2, g3=0, m3=0, s3=0;

    cout<<"Ingresa el primer angulo (grados, minutos, segundos)"<<endl;
    cin>>g1>>m1>>s1;

    cout<<"Ingresa el segundo angulo (grados, minutos, segundos)"<<endl;
    cin>>g2>>m2>>s2;

    s3 = s1 + s2;
    m3 = m1 + m2;
    g3 = g1 + g2;

    if (s3 > 60){
        m3 += s3/60;
        s3 = s3%60;
    }

    if (m3 > 60){
        g3 += m3/60;
        m3 = m3%60;
    }

    cout<<"La suma de los angulos es: "<<g3<<" grados, "<<m3<<" minutos, "<<s3<<" segundos"<<endl;
}

int main(){
//    ejemplo001();
//    ejemplo002();
    ejemplo003();

    return 0;
}
