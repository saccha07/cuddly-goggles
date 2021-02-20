#ifndef CGIF_
#define CGIF_
#include "PizzaIngredientFactory.h"
#include "MozzCheese.h"
#include "PlumTomatoSauce.h"
#include "ThickCrustDough.h"

class CGPizzaIngredientFactory:public PizzaIngredientFactory
{
    public:
        CGPizzaIngredientFactory(); 
        Dough *CreateDough();
        Sauce *CreateSauce();
        Cheese *CreateCheese();
};
#endif
