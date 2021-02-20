#include "CGCheesePizza.h"
CGCheesePizza::CGCheesePizza()
{
name="Chicago Style Sauce and dough Pizza";
dough= "Thin and crust Dough";
sauce="Marinar Sauce";

}
void CGCheesePizza::prepare()
{
    cout<<"CGCheesePizza prepare "<<name <<" "<<dough<<" "<<sauce<<endl;
}
void CGCheesePizza::bake()
{
    cout<<"CGCheesePizza bake"<<endl;
}
void CGCheesePizza::cut()
{
    cout<<"CGCheesePizza cut"<<endl;
}
void CGCheesePizza::box()
{
    cout<<"CGCheesePizza box"<<endl;
}
