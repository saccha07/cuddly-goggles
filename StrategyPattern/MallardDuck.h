#ifndef MALLARD_DUCK_H_
#define MALLARD_DUCK_H_

#include<iostream>
#include "Duck.h" 
#include "FlywithWings.h"
using namespace std;

class MallardDuck: public Duck
{
    public:
        MallardDuck();
        void display();
};
#endif
