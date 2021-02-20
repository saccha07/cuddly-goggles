#ifndef CG_CHEESEPIZZA_
#define CG_CHEESEPIZZA_

#include "Pizza.h"

class CGCheesePizza:public Pizza
{
    public:
        CGCheesePizza();
        void prepare();
        void bake();
        void cut();
        void box();


};
#endif
