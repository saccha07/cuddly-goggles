#ifndef SIMPLE_PIZZA_FACTORY_ 
#define SIMPLE_PIZZA_FACTORY_ 

#include<iostream>
#include "Pizza.h"
#include<string>
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"

using namespace std;


class SimplePizzaFactory 
{
    public:
        SimplePizzaFactory();
        Pizza *createPizza(string type);
};
#endif
