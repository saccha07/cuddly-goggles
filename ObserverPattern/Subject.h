#ifndef SUBJECT_H_
#define SUBJECT_H_

#include<iostream>
#include "Observer.h"
using namespace std;

class Subject
{
public:
    virtual void registerObserver(Observer *o)=0;
    virtual void removeObserver(Observer *o)=0;
    virtual void notifyObserver()=0;
};
#endif

