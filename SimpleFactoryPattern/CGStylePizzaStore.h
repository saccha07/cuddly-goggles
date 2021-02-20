#ifndef CG_PIZZA_STORE_ 
#define CG_PIZZA_STORE_

#include<iostream>
#include "PizzaStore.h"
using namespace std;


class CGStylePizzaStore:public PizzaStore 
{
    public:
    CGStylePizzaStore();
    //Pizza *orederPizza(string type);
    Pizza *createPizza(string type);
};
#endif
