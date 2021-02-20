#include "CGStylePizzaStore.h"
using namespace std;


CGStylePizzaStore::CGStylePizzaStore() {}

Pizza *CGStylePizzaStore::createPizza(string type) {
    Pizza *pizza=NULL;
    PizzaIngredientFactory *pizzaIngdF = new CGPizzaIngredientFactory();
    if(type=="cheese"){
        pizza = new CheesePizza(pizzaIngdF);
        pizza->name="CG Style Pizza";}



/*    if(type=="pepperoni")
        pizza = new PepperoniPizza();
    if(type=="panner")
        pizza = new PannerPizza();
    if(type=="clam")
        pizza = new NYClamPizza();
    if(type=="veggie")
        pizza = new NYVeggiePizza();*/
    return pizza;
}
