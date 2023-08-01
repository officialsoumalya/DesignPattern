#ifndef VEHICLE
#define VEHICLE
#include<iostream>
class Vehicle
{
    public:
    virtual void blowHorn()=0;
    virtual ~Vehicle()
    {
        std::cout<<"Vehicle destroyed\n";
    }
};

#endif