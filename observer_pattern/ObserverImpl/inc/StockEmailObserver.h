#ifndef EMAIL_OBSERVER
#define EMAIL_OBSERVER

#include "../../ObserverInc/Observer.h"
#include "../../ObservableInc/Observable.h"
#include <string>
using namespace std;

class StockEmailObserver : public Observer
{
    Observable * obj;
    string email;
    public:
    StockEmailObserver(Observable * ob , string e);
    void update(string msg);
};

#endif