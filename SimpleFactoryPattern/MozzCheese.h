#ifndef MOZ_C
#define MOZ_C

#include "Cheese.h"

class MozzCheese:public Cheese
{
    public:
        MozzCheese()
        {
            cout<<"MozzCheese"<<endl;
        }
        Cheese*CreateCheese();
};
#endif

