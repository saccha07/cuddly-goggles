#include "HeatIndexDisplay.h"

HeatIndexDisplay::HeatIndexDisplay(Subject *weatherDataObj){
    this->weatherDataObj=weatherDataObj;
    weatherDataObj->registerObserver(this);

}

void HeatIndexDisplay::update(float temp, float humidity, float pressure)
{
    this->temp=temp;
    this->humidity=humidity;
    this->pressure=pressure;
    heatIdx =computeHeatIdx(temp, humidity);
    display(); 

}
float HeatIndexDisplay::computeHeatIdx(float temp, float humidity)
{
    return temp+humidity;
}
void HeatIndexDisplay::display()
{
    cout<<"HeatIndex is: "<<heatIdx<<endl;
}
