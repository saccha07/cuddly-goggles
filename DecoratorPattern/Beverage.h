#ifndef BEVERAGE_
#define BEVERAGE_

#include<iostream>
#include<string>
using namespace std;

class Beverage
{
    public:
    string description;
    enum Size {SMALL, MEDIUM, LARGE};
    Size size;
    Beverage(Size size=SMALL){setSize(size);}
    virtual string getDescription()
    {
        return description;
    }
    void setSize(Size size) {this->size=size;}
    Size getSize() {return this->size;}
    virtual double cost()=0;
};
#endif
