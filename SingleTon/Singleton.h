#ifndef SINGLE_TON_
#define SINGLE_TON_

#include<iostream>
using namespace std;

class Singleton 
{
    static Singleton *singleTon;
    Singleton();
    public:
    static Singleton * createInstance();
};
#endif
