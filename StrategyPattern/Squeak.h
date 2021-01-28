#ifndef SQUEAK_H_
#define SQUEAK_H_

#include<iostream>
#include "QuackableAbstract.h"
using namespace std;

class Squeak:public QuackableAbstract
{
public:
Squeak();
void quack();
};
#endif 
