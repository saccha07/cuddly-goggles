#ifndef _DOUGH_
#define _DOUGH_
#include<iostream>
using namespace std;

class Dough
{
    public:
        Dough() {}
        virtual Dough*CreateDough()=0;
};
#endif 
