#ifndef THIN_C_DOUGH_
#define THIN_C_DOUGH_
#include "Dough.h"

class ThinCrustDough:public Dough
{
    public:
        ThinCrustDough()
        {
            cout<<"ThinCrustDough"<<endl;
        }
    Dough * CreateDough();
};
#endif
