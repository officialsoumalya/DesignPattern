#include "../inc/StockObservable.h"
#include <iostream>
#include <string>
using namespace std;

StockObservable::StockObservable(int s)
{
    stock = s;
}

void StockObservable::subscribe(Observer * obj)
{
    oblist.push_back(obj);
}

void StockObservable::unsubscribe(Observer * obj)
{
    oblist.remove(obj);
}

void StockObservable::notify(string msg)
{
    for(auto observer : oblist)
    {
        observer->update(msg);
    }
}

void StockObservable::set_data(int d)
{
    if(stock == 0)
    {
        if(d <= 0)
        return;
        notify(std::move("Item in stock"));
    }

    stock = d;
}

int StockObservable::get_data()
{
    return stock;
}