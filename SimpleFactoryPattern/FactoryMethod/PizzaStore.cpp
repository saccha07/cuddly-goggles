#include "PizzaStore.h"


PizzaStore::PizzaStore()
{
}
Pizza * PizzaStore::orederPizza(string type)
{
    Pizza *pizza;
    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}

