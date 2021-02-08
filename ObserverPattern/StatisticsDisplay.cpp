#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(Subject *weatherDataObj)
{
    this->weatherDataObj=weatherDataObj;
    weatherDataObj->registerObserver(this);
}
void StatisticsDisplay::update(float temp, float humidity, float pressure)
{
    this->temp=temp;
    this->humidity=humidity;
    this->pressure=pressure;
    display();

}
void StatisticsDisplay::display()
{
    cout<<"StatisticsDisplay condition:: "<<temp<<" F degree "<<humidity <<"and "<<pressure<<endl;
}
