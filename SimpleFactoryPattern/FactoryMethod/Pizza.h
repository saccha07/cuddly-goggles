#ifndef PIZZA_ 
#define PIZZA_

#include<iostream>

using namespace std;
#include<string>

class Pizza
{
    public:
        string name;
        string dough;
        string sauce;
        Pizza() {}
        virtual void prepare()=0;
        virtual void bake()=0;
        virtual void cut()=0;
        virtual void box()=0;
};
#endif
