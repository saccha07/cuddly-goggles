#ifndef VEGGIEPIZZA_
#define VEGGIEPIZZA_

#include "Pizza.h"

class VeggiePizza:public Pizza
{
PizzaIngredientFactory *pizzaIngdF;
public:
VeggiePizza(PizzaIngredientFactory *pizzaIngdF) {
        this->pizzaIngdF=pizzaIngdF; }

void prepare();
void bake();
void cut();
void box();


};
#endif
