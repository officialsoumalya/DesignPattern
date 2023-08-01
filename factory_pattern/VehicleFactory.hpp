#ifndef VEHICLE_FACTORY
#define VEHICLE_FACTORY
#include "Vehicle.hpp"
#include <string>
using namespace std;
class VehicleFactory
{
    public:
    static Vehicle* makeVehicle(string type);
};

#endif