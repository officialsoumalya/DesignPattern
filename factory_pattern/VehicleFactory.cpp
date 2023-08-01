#include "VehicleFactory.hpp"
#include "Car.hpp"
#include "Truck.hpp"
Vehicle * VehicleFactory::makeVehicle(string vType)
{
    Vehicle * v;
    if(vType == "car")
    v = new Car();
    else if(vType == "truck")
    v = new Truck();
    else 
    v=nullptr;
    return v;
}