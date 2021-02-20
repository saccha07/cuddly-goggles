#ifndef CHEESEPIZZA_
#define CHEESEPIZZA_

#include "Pizza.h"

class CheesePizza:public Pizza
{
    public:
        CheesePizza() {}
        void prepare();
        void bake();
        void cut();
        void box();


};
#endif
