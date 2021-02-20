#include "CGPizzaIngredientFactory.h"

CGPizzaIngredientFactory::CGPizzaIngredientFactory()
{

}

Dough *CGPizzaIngredientFactory::CreateDough() {
    return new ThickCrustDough();
}
Sauce *CGPizzaIngredientFactory::CreateSauce()
{
    return new PlumTomatoSauce();

}
Cheese *CGPizzaIngredientFactory::CreateCheese()
{
    return new MozzCheese();
}
