#include "../inc/FamilyCar.h"
#include "../inc/NormalDrive.h"

FamilyCar::FamilyCar():Vehicle(new NormalDrive())
{}

FamilyCar::~FamilyCar()
{
    cout<<"Family Car destructor called\n";
}