#include "iostream"
#include "vector"
#include "cstdlib"
#include "iomanip"
#include "algorithm"


using namespace std;

void inicilizar(string* nombresPtr,int* distanciaPtr,int* pasosPtr,int* turnos_bloqueados){
    nombresPtr[0] = "Rayo McQueen";
    nombresPtr[1] = "Hamilton";
    nombresPtr[2] = "Francesco";
    nombresPtr[3] = "Mate";
    nombresPtr[4] = "Raul";
    nombresPtr[5] = "Shu";
    nombresPtr[6] = "Reep";
    nombresPtr[7] = "Gorvette";

    for(int i=0;i<8;i++){
        distanciaPtr[i] =0;
        pasosPtr[i] = 0;
        turnos_bloqueados[i] = 0;
    }
}

float generarProbabilidad(){
    return (1 + rand()%(99))/100.0;
}


void Carrera(vector<int>ganadores,string* nombres,int * distanciaR,int* pasos,int* turnos_bloqueados){
    while(ganadores.size()!=3){

        for(int i=0;i<8;i++){
            if(ganadores.size() == 3){
                break;
            }

            if(turnos_bloqueados[i] == 0 and distanciaR[i]<300000){
                float prob = generarProbabilidad();
                if(prob >0.8){
                    distanciaR[i] +=83;
                }
                else if(prob>0.6 and prob<=0.8){
                    distanciaR[i] += 50;
                }
                else if(prob>0.4 and prob<=0.6){
                    distanciaR[i] +=30;
                }
                else if(prob>=0.2 and prob<=0.4){
                    turnos_bloqueados[i] += 2;
                }
                else{
                    distanciaR[i] -=10;
                }

                pasos[i]+=1;
                if(distanciaR[i]>=300000){
                    ganadores.push_back(i);
                }
            }

            else if(turnos_bloqueados[i]!=0 and distanciaR[i] < 300000){
                turnos_bloqueados[i]-=1;
                pasos[i]+=1;
            }
        }
    }

    cout<<"Ganador : "<<nombres[ganadores[0]]<<" cantidad de pasos: "<<pasos[ganadores[0]]<<endl;
    cout<<"Segundo Puesto : "<<nombres[ganadores[1]]<<" cantidad de pasos: "<<pasos[ganadores[1]]<<endl;
    cout<<"Tercer Puesto : "<<nombres[ganadores[2]]<<" cantidad de pasos: "<<pasos[ganadores[2]]<<endl;
}

int main(){
    srand(time(0));
    vector<int>ganadores;
    string* nombres = nullptr;
    int* distanciaR = nullptr;
    int* pasos = nullptr;
    int* turnos_bloqueados = nullptr;

    nombres = new string [8];
    distanciaR = new int [8];
    pasos = new int [8];

    turnos_bloqueados = new int[8];
    inicilizar(nombres,distanciaR,pasos,turnos_bloqueados);

    Carrera(ganadores,nombres,distanciaR,pasos,turnos_bloqueados);

    delete [] nombres;
    delete [] distanciaR;
    delete [] pasos;
    delete [] turnos_bloqueados;


    return 0;
}
