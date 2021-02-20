#include "NYStylePizzaStore.h"
using namespace std;


NYStylePizzaStore::NYStylePizzaStore() {}

Pizza *NYStylePizzaStore::createPizza(string type) {
    Pizza *pizza=NULL;
    PizzaIngredientFactory *pizzaIngdF = new NYPizzaIngredientFactory();
    
    if(type=="cheese") {
        pizza = new CheesePizza(pizzaIngdF);
        pizza->name="NY Style Pizza";}

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
