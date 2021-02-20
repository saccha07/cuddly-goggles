#include<iostream>
#include "Pizza.h"
#include "PizzaStore.h"
int main()
{
  cout<<"In main"<<endl;
  SimplePizzaFactory *simplePizzaFactory = new SimplePizzaFactory();
  PizzaStore *pizzaStore = new PizzaStore(simplePizzaFactory);
  pizzaStore->orederPizza("cheese");
  pizzaStore->orederPizza("veggie");
  pizzaStore->orederPizza("clam");
  return 0;
}
