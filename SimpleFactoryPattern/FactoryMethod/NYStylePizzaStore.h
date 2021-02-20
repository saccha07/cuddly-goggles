#ifndef NY_PIZZA_STORE_ 
#define NY_PIZZA_STORE_

#include<iostream>
#include "PizzaStore.h"
using namespace std;


class NYStylePizzaStore:public PizzaStore 
{
    public:
    NYStylePizzaStore();
    //Pizza *orederPizza(string type);
    Pizza *createPizza(string type);
};
#endif
