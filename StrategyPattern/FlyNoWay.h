#ifndef FLYNOWAY_H_
#define FLYNOWAY_H_

#include<iostream>
#include "FlyableAbstract.h"
using namespace std;

class FlyNoWay: public FlyableAbstract
{
    public:
        FlyNoWay();
        void fly();
};
#endif
