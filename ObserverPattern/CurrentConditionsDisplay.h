#ifndef CURRENT_COND_DISPLAY_
#define CURRENT_COND_DISPLAY_

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
class CurrentConditionsDisplay: public Observer,public DisplayElement
{
    float temp;
    float humidity;
    float pressure;
    Subject *weatherDataObj;
    public:
    CurrentConditionsDisplay(Subject *weatherDataObj);
    void update(float temp, float humidity, float pressure);
    void display();
};
#endif
