#ifndef MODEL_DUCK_H_
#define MODEL_DUCK_H_

#include<iostream>
#include "Duck.h" 
#include "FlyNoWay.h"
#include "Squeak.h"
using namespace std;
class ModelDuck: public Duck
{
    public:
        ModelDuck();
        void display();
};
#endif
