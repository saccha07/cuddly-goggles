#include<iostream>
using namespace std;
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "ThirdPartyDisplay.h"
#include "HeatIndexDisplay.h"
int main()
{
    WeatherData *weatherData = new WeatherData();
    CurrentConditionsDisplay * currentConditionDisplay = new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);
    ThirdPartyDisplay * thirdPartyDisplay = new ThirdPartyDisplay(weatherData);
    HeatIndexDisplay * heatIdx = new HeatIndexDisplay(weatherData); 
    weatherData->setMeasurements(80, 65, 45);
    weatherData->setMeasurements(90, 60, 40);
    weatherData->setMeasurements(110, 160, 140);
    return 0;
}
