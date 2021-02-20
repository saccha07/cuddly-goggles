#ifndef REGG_CHEESE_
#define REGG_CHEESE_
#include "Cheese.h"
class RegginCheese:public Cheese
{
    public:
        RegginCheese()
        {
            cout<<"RegginCheese"<<endl;
        }
        Cheese*CreateCheese();
};
#endif

