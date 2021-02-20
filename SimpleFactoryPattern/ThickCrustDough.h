#ifndef THICK_C_DOUGH_
#define THICK_C_DOUGH_
#include "Dough.h"
class ThickCrustDough:public Dough
{
    public:
        ThickCrustDough()
        {
            cout<<"ThickCrustDough"<<endl;
        }
        Dough *CreateDough();
};
#endif

