#ifndef P2_CPP_SENSOR_H
#define P2_CPP_SENSOR_H

#include <iostream>
#include "Type.h"

using namespace std;

class Sensor {
private:
    s name;

public:
    Sensor(){}
    Sensor(s n):name(n){}

    s getName(){return name;}

    void start_sensor(){};
    void stop_sensor(){};
    void end_sensor(){};

};

#endif //P2_CPP_SENSOR_H
