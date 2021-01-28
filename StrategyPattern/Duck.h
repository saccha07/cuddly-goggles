#ifndef DUCK_H_
#define DUCK_H_

#include<iostream>
#include "Quack.h"
//#include "Squeak.h"
//#include "FlyNoWay.h"
#include "FlywithWings.h"
using namespace std;


class Duck
{
    public:
    FlyableAbstract *flyAbleAbstract;
    QuackableAbstract *quackAbleAbstract;
    Duck();
    virtual void display()=0;
    void performFly();
    void performQuack();
    void Swim();
    void setFlyBehaviour(FlyableAbstract *fb) {
    flyAbleAbstract = fb; }
    void setQuackBehaviour(QuackableAbstract *qb) {
    quackAbleAbstract = qb;
    } 
};
#endif
