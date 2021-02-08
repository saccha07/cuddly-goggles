#ifndef OBSERVER_H
#define OBSERVER_H

#include<iostream>
using namespace std;


class Observer
{
public:
    virtual void update(float temp, float humidity, float pressure)=0;
};
#endif
