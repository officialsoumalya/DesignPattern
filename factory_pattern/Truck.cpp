#include "Truck.hpp"
#include <iostream>
using namespace std;
void Truck::blowHorn()
{
    cout<<"honk honk from Truck\n";
}

Truck::~Truck()
{
    cout<<"Truck destroyed\n";
}