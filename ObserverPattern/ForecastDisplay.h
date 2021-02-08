#ifndef FORECAST_DISPLAY_
#define FORECAST_DISPLAY_

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
class ForecastDisplay: public Observer,public DisplayElement
{
public:
 ForecastDisplay();
void update();
void display();
};
#endif
