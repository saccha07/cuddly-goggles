#ifndef HEAT_IDX_DISPLAY_
#define HEAT_IDX_DISPLAY_

#include<iostream>
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
using namespace std;

class HeatIndexDisplay:public Observer, public DisplayElement
{
    float temp;
    float humidity;
    float pressure;
    float heatIdx;
    Subject *weatherDataObj;
    public:
    HeatIndexDisplay(Subject *weatherDataObj);
    void update(float temp, float humidity, float pressure);
    void display();
    float computeHeatIdx(float temp, float humidity);
};
#endif
