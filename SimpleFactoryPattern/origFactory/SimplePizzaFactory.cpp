
#include "SimplePizzaFactory.h"

SimplePizzaFactory::SimplePizzaFactory()
{
}
Pizza *SimplePizzaFactory::createPizza(string type)
{
    Pizza *pizza=NULL;
    if(type=="cheese")
        pizza = new CheesePizza();
/*    if(type=="pepperoni")
        pizza = new PepperoniPizza();
    if(type=="panner")
        pizza = new PannerPizza();*/
    if(type=="clam")
        pizza = new ClamPizza();
    if(type=="veggie")
        pizza = new VeggiePizza();
    return pizza;
}
