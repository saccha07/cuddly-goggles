#ifndef PIZZA_ 
#define PIZZA_

#include<iostream>

using namespace std;
#include<string>
#include "CGPizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"
#include "PizzaIngredientFactory.h"
class Pizza
{
    public:
        string name;
        Dough * dough;
        Sauce * sauce;
        Cheese * cheese;
        Pizza() {}
        virtual void prepare()=0;
        virtual void bake()=0;
        virtual void cut()=0;
        virtual void box()=0;
};
#endif
