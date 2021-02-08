#ifndef WEATHERDATA_H_
#define WEATHERDATA_H_

#include<iostream>
#include "Subject.h"
#include<vector>
using namespace std;
class WeatherData:public Subject
{
float temp;
float humidity;
float pressure;
vector<Observer*> observers;
public:
    WeatherData();
    void registerObserver(Observer *o);
    void removeObserver(Observer *o);
    void notifyObserver();
    float getTemperature();
    float getHumidity();
    float getPressure();
    void measurementsChanges();
    void setMeasurements(float temp, float humidity, float pressure);
};
#endif

