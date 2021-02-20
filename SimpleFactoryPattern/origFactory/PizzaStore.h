#ifndef PIZZA_STORE_ 
#define PIZZA_STORE_

#include<iostream>
#include "SimplePizzaFactory.h"
using namespace std;


class PizzaStore 
{
    SimplePizzaFactory *factory;
    public:
    PizzaStore(SimplePizzaFactory *factory);
    Pizza *orederPizza(string type);
};
#endif
