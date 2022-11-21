#ifndef P2_CPP_BODY_H
#define P2_CPP_BODY_H

#include <iostream>
#include <vector>
#include <fstream>
#include "Sensor.h"
#include "Actuator.h"
#include "Type.h"


using namespace std;

class Body {
private:
    s filename;
    ofstream file;
    vector<Sensor> *vSensor;
    vector<Actuator> vActuator;

public:
    // Consturctor del Body
    Body(vector<Actuator> vActuator, s filename){
        // Recibe un vector desde afuera y se le asigna al atributo (agregación)
        this->vActuator = vActuator;

        // Crea un vector que se le asigna al atributo (composición)
        this->vSensor = new vector<Sensor>(5);
        this->filename = filename;

    }

    void operator+(Sensor S){
        this->vSensor->push_back(S);
    }

    void operator+(Actuator A){
        this->vActuator.push_back(A);
    }

    vector<Sensor>* getvSensor(){return vSensor;}

    vector<Actuator> getvActuator(){return vActuator;}

    void start_body(){}
    void stop_body(){}
    void end_body(){}


};

#endif //P2_CPP_BODY_H
