#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherDataObj) 
{
    this->weatherDataObj=weatherDataObj;
    weatherDataObj->registerObserver(this);
}
void CurrentConditionsDisplay::update(float temp, float humidity, float pressure)
{
    this->temp=temp;
    this->humidity=humidity;
    this->pressure=pressure;
    display();

}
void CurrentConditionsDisplay::display()
{
    cout<<"Current condition:: "<<temp<<" F degree "<<humidity <<"and "<<pressure<<endl;
}
