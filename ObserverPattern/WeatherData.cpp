#include "WeatherData.h"

WeatherData::WeatherData()
{
    //observers = new vector<observers>();
}
void WeatherData::registerObserver(Observer *o)
{
    observers.push_back(o);
}
void WeatherData::removeObserver(Observer *o)
{
    vector<Observer*>::iterator it;
    for(it=observers.begin();it!=observers.end();++it)
    {
        observers.erase(it);
    }
}
void WeatherData::notifyObserver()
{

    vector<Observer*>::iterator it;
    for(it=observers.begin();it!=observers.end();++it)
    {
        (*it)->update(temp, humidity, pressure);
    }
}
void WeatherData::measurementsChanges()
{
    notifyObserver();
}
void WeatherData::setMeasurements(float temp, float humidity, float pressure)
{
    this->temp=temp;
    this->humidity=humidity;
    this->pressure=pressure;
    measurementsChanges();

}
