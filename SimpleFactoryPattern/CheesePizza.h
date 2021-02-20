#ifndef CHEESEPIZZA_
#define CHEESEPIZZA_

#include "Pizza.h"

class CheesePizza:public Pizza
{
        PizzaIngredientFactory *pizzaIngdF;
    public:
        CheesePizza(PizzaIngredientFactory *pizzaIngdF) {
        this->pizzaIngdF=pizzaIngdF; }
        void prepare();
        void bake();
        void cut();
        void box();


};
#endif
