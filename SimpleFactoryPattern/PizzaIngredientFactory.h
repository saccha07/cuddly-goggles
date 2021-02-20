#ifndef INGREDIENT_FACTORY_
#define INGREDIENT_FACTORY_
#include "Sauce.h"
#include "Cheese.h"
#include "Dough.h"
#include<iostream>
using namespace std;

class PizzaIngredientFactory
{
    public:
        PizzaIngredientFactory() {}
        virtual Dough *CreateDough()=0;
        virtual Sauce  *CreateSauce()=0;
        virtual Cheese *CreateCheese()=0;
};
#endif

