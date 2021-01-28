#ifndef FLYROCKET_H_
#define FLYROCKET_H_

#include<iostream>
#include "FlyableAbstract.h"
using namespace std;

class FlyRocket: public FlyableAbstract
{
    public:
        FlyRocket();
        void fly();
};
#endif
