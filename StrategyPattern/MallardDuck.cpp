#include "MallardDuck.h"
MallardDuck::MallardDuck() {
    quackAbleAbstract = new Quack();
    flyAbleAbstract = new FlywithWings();
}
void MallardDuck::display()
{
    cout<<"I'm a MallardDuck"<<endl;
}
