#ifndef MOBILE_OBSERVER
#define MOBILE_OBSERVER

#include "../../ObserverInc/Observer.h"
#include "../../ObservableInc/Observable.h"
#include <string>
using namespace std;

class StockMobileObserver : public Observer
{
    Observable * obj;
    string number;
    public:
    StockMobileObserver(Observable * ob , string n);
    void update(string msg);
};

#endif