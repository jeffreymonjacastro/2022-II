#include "Red.h"

template <typename T>
int ejecutarAlgoritmo(int instrucciones, vector<T> &redPC, vector<int> &activacion){
    redPC[0]->activacion(false);
    redPC[1]->activacion(false);
    redPC[2]->activacion(false);
    redPC[3]->activacion(false);

    for (int i : activacion) {
        redPC[i]->activacion(true);
    }


    int tiempoEjecucion = 0;

    for (int i = 0; i < instrucciones; i++) {
        if (redPC[0]->getActivo())
            tiempoEjecucion += redPC[0]->getTiempo();
        if (redPC[1]->getActivo())
            tiempoEjecucion += redPC[1]->getTiempo();
        if (redPC[2]->getActivo())
            tiempoEjecucion += redPC[2]->getTiempo();
        if (redPC[3]->getActivo())
            tiempoEjecucion += redPC[3]->getTiempo();
    }

    return tiempoEjecucion;
}


int main(){
    // Definiendo las arquitecturas
    auto arquitecturax86 = new x86("x86", 5, false);
    auto arquitecturaARM = new ARM("ARM", 7, false);
    auto arquitecturaMIPS = new MIPS("MIPS", 3, false);
    auto arquitecturaSPARC = new SPARC("SPARC", 10, false);

    // Creando el vector de Red
    vector<Red*> redComputadores = {arquitecturax86,arquitecturaARM,arquitecturaMIPS, arquitecturaSPARC};

    for (auto a:redComputadores){
        a->datos();
    }

    // Primera ejecución 2000 instrucciones
    vector<int> arq1 = {0,1,2};
    int tiempoTotal1;
    tiempoTotal1 = ejecutarAlgoritmo(2000, redComputadores, arq1);

    cout<<"La primera ejecucion tiene un tiempo total de: "<<tiempoTotal1<<" microsegundos"<<endl;

    // Segunda ejecución 4000 instrucciones
    vector<int> arq2 = {0,1,2,3};
    int tiempoTotal2;
    tiempoTotal2 = ejecutarAlgoritmo(4000, redComputadores, arq2);

    cout<<"La segunda ejecucion tiene un tiempo total de: "<<tiempoTotal2<<" microsegundos"<<endl;

    // Tercera ejecución 3000 instrucciones
    vector<int> arq3 = {1,2};
    int tiempoTotal3;
    tiempoTotal3 = ejecutarAlgoritmo(3000, redComputadores, arq3);

    cout<<"La tercera ejecucion tiene un tiempo total de: "<<tiempoTotal3<<" microsegundos"<<endl;

    return 0;
}