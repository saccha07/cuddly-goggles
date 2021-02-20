#ifndef PT_SAUCE_
#define PT_SAUCE_
#include "Sauce.h"
class PlumTomatoSauce:public Sauce
{
    public:
        PlumTomatoSauce()
        {
            cout<<"PlumTomatoSauce"<<endl;
        }
        Sauce *CreateSauce();
};
#endif
