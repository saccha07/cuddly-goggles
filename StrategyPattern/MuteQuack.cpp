#include<iostream>
#include "QuackableAbstract.h"
using namespace std;

class MuteQuack:public QuackableAbstract
{
public:
void quack()
{
cout<<"Duck is quacking"<<endl;
}
}; 
