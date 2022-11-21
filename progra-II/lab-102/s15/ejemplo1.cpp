#include <iostream>
#include "Body.h"
#include "Enviroment.h"
#include "Type.h"

int main(){
    vector<Actuator> vActuator;

    Actuator brazo("Bracito");
    Sensor S("Sensorcito");

    Body rov(vActuator, "log.txt");

    rov+S;
    rov+brazo;

    cout<<rov.

    return 0;
}