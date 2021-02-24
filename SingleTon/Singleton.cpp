#include "Singleton.h"

Singleton*Singleton::singleTon=NULL;
Singleton::Singleton() {

    cout<<"Only One Object\n"<<endl;
}
Singleton *Singleton::createInstance()
{
    if(!singleTon)
        singleTon = new Singleton();
    return singleTon;
}

