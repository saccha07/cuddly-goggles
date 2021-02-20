#include "NYCheesePizza.h"
NYCheesePizza::NYCheesePizza()
{
name="NY Style Sauce and dough Pizza";
dough= "Thin and crust Dough";
sauce="Marinar Sauce";

}
void NYCheesePizza::prepare()
{
    cout<<"NYCheesePizza prepare "<<name <<" "<<dough<<" "<<sauce<<endl;
}
void NYCheesePizza::bake()
{
    cout<<"NYCheesePizza bake"<<endl;
}
void NYCheesePizza::cut()
{
    cout<<"NYCheesePizza cut"<<endl;
}
void NYCheesePizza::box()
{
    cout<<"NYCheesePizza box"<<endl;
}
