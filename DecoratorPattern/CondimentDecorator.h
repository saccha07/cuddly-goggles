#ifndef CONDIMENT_DECORATOR_
#define CONDIMENT_DECORATOR_

#include "Beverage.h"

class CondimentDecorator: public Beverage
{
    public:
        Beverage *beverage;
        virtual string getDescription()=0;
        Size getSize()
        {
            return beverage->getSize();
        }
};
#endif
