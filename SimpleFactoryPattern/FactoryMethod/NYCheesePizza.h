#ifndef CHEESEPIZZA_
#define CHEESEPIZZA_

#include "Pizza.h"

class NYCheesePizza:public Pizza
{
    public:
        NYCheesePizza();
        void prepare();
        void bake();
        void cut();
        void box();


};
#endif
