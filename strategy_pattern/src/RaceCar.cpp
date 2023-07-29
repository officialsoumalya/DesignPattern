#include "../inc/RaceCar.h"
#include "../inc/SportsDrive.h"
#include <iostream>
using namespace std;
RaceCar::RaceCar():Vehicle(new SportsDrive())
{}

RaceCar::~RaceCar()
{
    cout<<"RaceCar destructor called\n";
}