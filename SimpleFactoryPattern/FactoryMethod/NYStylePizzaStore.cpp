#include "NYStylePizzaStore.h"
using namespace std;


NYStylePizzaStore::NYStylePizzaStore() {}

Pizza *NYStylePizzaStore::createPizza(string type) {
    Pizza *pizza=NULL;
    if(type=="cheese")
        pizza = new NYCheesePizza();
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
