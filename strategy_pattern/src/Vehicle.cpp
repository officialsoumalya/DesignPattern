#include "../inc/Vehicle.h"
#include "../inc/DriveStrategy.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle():ds(nullptr){}

Vehicle::Vehicle(DriveStrategy * d):ds(d){}

void Vehicle::drive()
{
    ds->drive();
}

Vehicle::~Vehicle()
{
    cout<<"Vehicle destructor called\n";
}