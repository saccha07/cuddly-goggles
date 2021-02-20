#include "CheesePizza.h"

void CheesePizza::prepare()
{
    cout<<"CheesePizza prepare "<<name<<endl;
    dough =pizzaIngdF->CreateDough(); 
    sauce =pizzaIngdF->CreateSauce(); 
    cheese =pizzaIngdF->CreateCheese(); 
}
void CheesePizza::bake()
{
    cout<<"CheesePizza bake"<<endl;
}
void CheesePizza::cut()
{
    cout<<"CheesePizza cut"<<endl;
}
void CheesePizza::box()
{
    cout<<"CheesePizza box"<<endl;
}
