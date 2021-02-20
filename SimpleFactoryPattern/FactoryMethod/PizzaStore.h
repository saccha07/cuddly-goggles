#ifndef PIZZA_STORE_ 
#define PIZZA_STORE_

#include<iostream>
//#include "SimplePizzaFactory.h"
#include "Pizza.h"
#include "NYCheesePizza.h"
#include "CGCheesePizza.h"
using namespace std;


class PizzaStore 
{
    public:
    PizzaStore();
    Pizza *orederPizza(string type);
    virtual Pizza *createPizza(string type)=0;
};
#endif
