#include "ModelDuck.h"
ModelDuck::ModelDuck() {
    quackAbleAbstract = new Squeak();
    flyAbleAbstract = new FlyNoWay();
}
void ModelDuck::display()
{
    cout<<"I'm a ModelDuck"<<endl;
}
