#ifndef OBSERVER
#define OBSERVER

#include "../ObservableInc/Observable.h"
#include <string>
using namespace std;
class Observer
{
    Observable*  obl;
    public:
    virtual void update(string msg)=0;
};

#endif