#include "../inc/StockEmailObserver.h"
#include <string>
#include <iostream>
using namespace std;

StockEmailObserver::StockEmailObserver(Observable * ob , string e)
{
    obj = ob;
    email = std::move(e);
}

void StockEmailObserver::update(string msg)
{
    cout<<"Email received "<<msg<<"\n";
}