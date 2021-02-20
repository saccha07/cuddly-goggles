#ifndef NYIF_
#define NYIF_
#include "PizzaIngredientFactory.h"
#include "MarinaSauce.h"
#include "RegginCheese.h"
#include "ThinCrustDough.h"

class NYPizzaIngredientFactory:public PizzaIngredientFactory
{
    public:
        NYPizzaIngredientFactory();
        Dough *CreateDough();
        Sauce *CreateSauce();
        Cheese *CreateCheese();
};
#endif
