#ifndef OBSERVABLE
#define OBSERVABLE
#include <iostream>
#include <string>
#include <list>
#include "../ObserverInc/Observer.h"
using namespace std;
class Observable
{
    list<Observer * > olist;
    public:
    virtual void subscribe(Observer * obj)=0;
    virtual void unsubscribe(Observer * obj)=0;
    virtual void notify(string msg)=0;
    virtual void set_data(int d)=0;
    virtual int get_data()=0;

};

#endif