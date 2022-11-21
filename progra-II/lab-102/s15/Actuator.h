#ifndef P2_CPP_ACTUATOR_H
#define P2_CPP_ACTUATOR_H

#include <iostream>
#include "Type.h"

using namespace std;

class Actuator {
private:
    s name;
public:
    Actuator(){}
    Actuator(s n): name(n){}

    s getName(){return name;}

    void start_actuador(){}
    void stop_actuador(){}
    void end_actuador(){}

};

#endif //P2_CPP_ACTUATOR_H
