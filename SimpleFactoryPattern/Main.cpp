#include<iostream>
#include "Pizza.h"
#include "NYStylePizzaStore.h"
#include "CGStylePizzaStore.h"
int main()
{
  cout<<"In main"<<endl;
   
 // SimplePizzaFactory *simplePizzaFactory = new SimplePizzaFactory();
  PizzaStore *pizzaStore = new NYStylePizzaStore();
  Pizza *pizza = NULL;
  pizza = pizzaStore->orederPizza("cheese");
  if(pizza) {
   cout<<"Sachin Order "<<pizza->name<<endl;
}
  
  PizzaStore *cgpizzaStore = new CGStylePizzaStore();
  pizza = cgpizzaStore->orederPizza("cheese");
  if(pizza) {
   cout<<"Sachin Order "<<pizza->name<<endl;
}
  //pizzaStore->orederPizza("veggie");
  //pizzaStore->orederPizza("clam");
  return 0;
}
