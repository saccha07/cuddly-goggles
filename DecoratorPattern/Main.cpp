#include "Milk.h"
#include "Mocha.h"
#include "Soy.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
int main()
{
Beverage *beverage = new Espresso();
cout <<beverage->getDescription() << " Rs" <<beverage->cost()<<endl;
Beverage *beverage1 = new Espresso();
beverage1 = new Mocha(beverage1);
beverage1 = new Mocha(beverage1);
beverage1 = new Milk(beverage1);

cout <<beverage1->getDescription() << " Rs" <<beverage1->cost()<<endl;
Beverage *beverage2 = new HouseBlend();
beverage2 = new Mocha(beverage2);
beverage2 = new Mocha(beverage2);
beverage2 = new Milk(beverage2);

cout <<beverage2->getDescription() << " Rs" <<beverage2->cost()<<endl;

Beverage *beverage3 = new DarkRoast();
beverage3 = new Mocha(beverage3);
beverage3 = new Mocha(beverage3);
beverage3 = new Milk(beverage3);
beverage3 = new Soy(beverage3);

cout <<beverage3->getDescription() << " Rs" <<beverage3->cost()<<endl;

return 0;
}
