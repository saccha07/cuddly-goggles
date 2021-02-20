#ifndef CLAMPIZZA_
#define CLAMPIZZA_

#include "Pizza.h"

class ClamPizza:public Pizza
{
    PizzaIngredientFactory *pizzaIngdF;
    public:
    ClamPizza(PizzaIngredientFactory *pizzaIngdF) {
        this->pizzaIngdF=pizzaIngdF; }
    void prepare();
    void bake();
    void cut();
    void box();


};
#endif
