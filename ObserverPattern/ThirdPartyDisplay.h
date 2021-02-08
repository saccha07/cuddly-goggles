#ifndef THIRD_PARTY_DISPLAY_
#define THIRD_PARTY_DISPLAY_

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
class ThirdPartyDisplay: public Observer,public DisplayElement
{
    float temp;
    float humidity;
    float pressure;
    Subject *weatherDataObj;
    public:
        ThirdPartyDisplay(Subject *weatherDataObj);
        void update(float temp, float humidity, float pressure);
        void display();
};
#endif
