#include<iostream>
#include "Duck.h"
using namespace std;

class DecoyDuck: public Duck
{
public:
void display()
{
cout<<"Dispaly"<<endl;
}
};
