#include <iostream>
#include "./ObserverImpl/inc/StockEmailObserver.h"
#include "./ObserverImpl/inc/StockMobileObserver.h"
#include "./ObservableImpl/inc/StockObservable.h"
using namespace std;

int main()
{
    StockObservable sob{0};
    StockEmailObserver s_email{&sob,"abc@email.com"};
    StockMobileObserver s_mobile{&sob,"9090909090"};

    sob.subscribe(&s_email);
    sob.subscribe(&s_mobile);

    sob.set_data(100);
    return 0;
}