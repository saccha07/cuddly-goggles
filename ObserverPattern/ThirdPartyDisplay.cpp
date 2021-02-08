#include "ThirdPartyDisplay.h"

ThirdPartyDisplay::ThirdPartyDisplay(Subject *weatherDataObj)
{
    this->weatherDataObj=weatherDataObj;
    weatherDataObj->registerObserver(this);
}
void ThirdPartyDisplay::update(float temp, float humidity, float pressure)
{
    this->temp=temp;
    this->humidity=humidity;
    this->pressure=pressure;
    display();

}
void ThirdPartyDisplay::display()
{
    cout<<"ThirdPartyDisplay condition:: "<<temp<<" F degree "<<humidity <<"and "<<pressure<<endl;
}

