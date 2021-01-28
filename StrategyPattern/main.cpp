#include<iostream>
#include "ModelDuck.h"
#include "MallardDuck.h"
#include "FlyRocket.h"
//#include "Duck.h"
using namespace std;


int main()
{
    cout<<"in main"<<endl;
    Duck *mallard = new MallardDuck();
    mallard->performFly();
    mallard->performQuack();
    Duck *model = new ModelDuck();
    model->performQuack();
    model->performFly();
    model->setFlyBehaviour(new FlyRocket());
    model->performFly();
    return 0;
}
