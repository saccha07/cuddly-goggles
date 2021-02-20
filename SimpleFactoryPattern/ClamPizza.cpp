#include "ClamPizza.h"

void ClamPizza::prepare()
{
   cout<<"ClamPizza prepare "<<name<<endl;
    dough =pizzaIngdF->CreateDough();
    sauce =pizzaIngdF->CreateSauce();
    cheese =pizzaIngdF->CreateCheese();

}
void ClamPizza::bake()
{
    cout<<"ClamPizza bake"<<endl;
}
void ClamPizza::cut()
{
    cout<<"ClamPizza cut"<<endl;
}
void ClamPizza::box()
{
    cout<<"ClamPizza box"<<endl;
}
