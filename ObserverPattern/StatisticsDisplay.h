#ifndef STATISTICS_DISPLAY_
#define STATISTICS_DISPLAY_

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
class StatisticsDisplay: public Observer,public DisplayElement
{
    float temp;
    float humidity;
    float pressure;
    Subject *weatherDataObj;
    public:
    StatisticsDisplay(Subject *weatherDataObj);
    void update(float temp, float humidity, float pressure);
    void display();
};
#endif
