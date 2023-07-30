#include "../inc/StockMobileObserver.h"
#include <string>
#include <iostream>
using namespace std;

StockMobileObserver::StockMobileObserver(Observable * ob , string e)
{
    obj = ob;
    number = std::move(e);
}

void StockMobileObserver::update(string msg)
{
    cout<<"Message received in mobile "<<msg<<"\n";
}