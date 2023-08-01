#include "VehicleFactory.hpp"
int main()
{
    Vehicle * v1 = VehicleFactory::makeVehicle("car");
    v1->blowHorn();
    Vehicle * v2 = VehicleFactory::makeVehicle("truck");
    v2->blowHorn();
    delete v1;
    delete v2;
    return 0;
}