#include "NYPizzaIngredientFactory.h"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{

}

Dough *NYPizzaIngredientFactory::CreateDough() {
    return new ThinCrustDough();
}
Sauce *NYPizzaIngredientFactory::CreateSauce()
{
    return new MarinaSauce();

}
Cheese *NYPizzaIngredientFactory::CreateCheese()
{
    return new RegginCheese();
}
