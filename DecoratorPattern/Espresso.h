#ifndef ESPRESSO_
#define ESPRESSO_

#include "Beverage.h"

class Espresso: public Beverage
{
    public:
        Espresso();
        double cost();
};
#endif
