#include "Duck.h"
Duck::Duck()
{
}
void Duck::performFly()
{
    flyAbleAbstract->fly();
}
void Duck::performQuack() 
{
    quackAbleAbstract->quack();
}
void Duck::Swim()
{

    cout<<"Al ducks can swim"<<endl;
}
