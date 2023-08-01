#include "Car.hpp"
#include <iostream>
using namespace std;
void Car::blowHorn()
{
    cout<<"honk honk from car\n";
}

Car::~Car()
{
    cout<<"Car destroyed\n";
}