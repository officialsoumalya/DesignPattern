#include "./inc/FamilyCar.h"
#include "./inc/RaceCar.h"
#include "./inc/Vehicle.h"
int main()
{
    Vehicle * v1 = new FamilyCar();
    Vehicle * v2 = new RaceCar();

    v1->drive();
    v2->drive();

    delete v1;
    delete v2;

    return 0;
}