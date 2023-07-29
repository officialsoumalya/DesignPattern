#ifndef VEHICLE
#define VEHICLE
#include "DriveStrategy.h"
class Vehicle
{
    DriveStrategy * ds;
    public:
    Vehicle();
    
    Vehicle(DriveStrategy * d);

    virtual void drive();

    virtual ~Vehicle();
};

#endif