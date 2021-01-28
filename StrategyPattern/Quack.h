#ifndef QUACK_H_
#define QUACK_H_

#include<iostream>
#include "QuackableAbstract.h"
using namespace std;

class Quack:public QuackableAbstract
{
public:
Quack();
void quack();
};
#endif 
