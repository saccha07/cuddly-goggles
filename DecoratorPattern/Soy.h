#ifndef SOY_
#define SOY_
#include "CondimentDecorator.h"


class Soy:public CondimentDecorator
{
    //Beverage *beverage;
    public:
    Soy(Beverage *beverage);
    string getDescription();
    double cost();
};
#endif
