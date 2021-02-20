#include "VeggiePizza.h"

void VeggiePizza::prepare()
{
    cout<<"VeggiePizza prepare "<<name<<endl;
    dough =pizzaIngdF->CreateDough();
    sauce =pizzaIngdF->CreateSauce();
    cheese =pizzaIngdF->CreateCheese();

}
void VeggiePizza::bake()
{
    cout<<"VeggiePizza bake"<<endl;
}
void VeggiePizza::cut()
{
    cout<<"VeggiePizza cut"<<endl;
}
void VeggiePizza::box()
{
    cout<<"VeggiePizza box"<<endl;
}
