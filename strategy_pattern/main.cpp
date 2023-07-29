#include "./inc/FamilyCar.h"
#include "./inc/RaceCar.h"
#include "./inc/Vehicle.h"
#include <memory>
using namespace std;
int main()
{
    unique_ptr<Vehicle>v1{new FamilyCar()};
    Vehicle * v2 = new RaceCar();

    v1->drive();
    v2->drive();

    delete v2;

    return 0;
}