#ifndef STOCK_OBSERVABLE
#define STOCK_OBSERVABLE

#include "../../ObservableInc/Observable.h"
#include "../../ObserverInc/Observer.h"
class StockObservable:public Observable
{
    int stock;
    list<Observer * >oblist;
    public:
    StockObservable(int s);
    void subscribe(Observer * obj);
    void unsubscribe(Observer * obj);
    void notify(string msg);
    void set_data(int d);
    int get_data();
};

#endif