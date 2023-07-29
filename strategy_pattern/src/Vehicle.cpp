#include "../inc/Vehicle.h"
#include "../inc/DriveStrategy.h"

Vehicle::Vehicle():ds(nullptr){}

Vehicle::Vehicle(DriveStrategy * d):ds(d){}

void Vehicle::drive()
{
    ds->drive();
}