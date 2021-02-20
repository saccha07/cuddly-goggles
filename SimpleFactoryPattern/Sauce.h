#ifndef _SAUCE_
#define _SAUCE_
#include<iostream>
using namespace std;

class Sauce
{
    public:
        Sauce() {}
        virtual Sauce *CreateSauce()=0;
};
#endif 
