#ifndef MARI_SAUCE_
#define MARI_SAUCE_
#include "Sauce.h"
class MarinaSauce:public Sauce
{
    public:
        MarinaSauce()
        {
            cout<<"MarinaSauce"<<endl;
        }
        Sauce *CreateSauce();
};
#endif

