#include <iostream>

using namespace std;

class CAlimento {
    int x;
public:
    int f(){ cout<<"alimento"<<endl;}
};

class CVerdura: public CAlimento{
    int x;
public:
    int f(){ cout<<"verdura"<<endl;}
};

int main(){
//    CVerdura tomate;
//    CAlimento alimento = tomate;
//    alimento.f();
//    tomate.f();

//    auto pVerdura = CAlimento;
//    auto pVerdura = new CVerdura;
//    CVerdura* pVerdura = new CVerdura;

//    CVerdura pVerdura = new CAlimento;


    return 0;
}