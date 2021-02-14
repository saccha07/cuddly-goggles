#include "Soy.h"

Soy::Soy(Beverage *beverage)
{
    this->beverage=beverage;
}
string Soy::getDescription()
{
    return beverage->getDescription() + ", Soy";
}

double Soy::cost()
{
    double cost=beverage->cost();
    if(beverage->getSize() == SMALL)
        cost +=.10;
    if(beverage->getSize() == MEDIUM)
        cost +=.15;
    if(beverage->getSize() == LARGE)
        cost +=.20;
    return cost;
}
