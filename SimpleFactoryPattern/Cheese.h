#ifndef _CHEESE_
#define _CHEESE_
#include<iostream>
using namespace std;

class Cheese
{
    public:
        Cheese() {}
        virtual Cheese *CreateCheese()=0;
};
#endif 
