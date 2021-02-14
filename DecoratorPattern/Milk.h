#ifndef MILK_
#define MILK_
#include "CondimentDecorator.h"


class Milk:public CondimentDecorator
{
    Beverage *beverage;
    public:
    Milk(Beverage *beverage);
    string getDescription();
    double cost();
};
#endif
