#include "CGStylePizzaStore.h"
using namespace std;


CGStylePizzaStore::CGStylePizzaStore() {}

Pizza *CGStylePizzaStore::createPizza(string type) {
    Pizza *pizza=NULL;
    if(type=="cheese")
        pizza = new CGCheesePizza();
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
