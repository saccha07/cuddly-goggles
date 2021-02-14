#ifndef MOCHA_
#define MOCHA_
#include "CondimentDecorator.h"


class Mocha:public CondimentDecorator
{
    Beverage *beverage;
    public:
    Mocha(Beverage *beverage);
    string getDescription();
    double cost();
};
#endif
