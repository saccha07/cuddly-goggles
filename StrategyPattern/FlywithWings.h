#ifndef FLYWITHWINGS_H_
#define FLYWITHWINGS_H_

#include<iostream>
#include "FlyableAbstract.h"
using namespace std;

class FlywithWings: public FlyableAbstract
{
    public:
        FlywithWings();
        void fly();
};
#endif 
