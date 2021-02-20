#ifndef PIZZA_ 
#define PIZZA_

#include<iostream>

using namespace std;


class Pizza
{
    public:
        Pizza() {}
        virtual void prepare()=0;
        virtual void bake()=0;
        virtual void cut()=0;
        virtual void box()=0;
};
#endif
