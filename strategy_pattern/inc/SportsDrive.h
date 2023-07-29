#ifndef SPORTS_DRIVE
#define SPORTS_DRIVE

#include "DriveStrategy.h"
#include <iostream>
using namespace std;

class SportsDrive:public DriveStrategy
{
    public:
    void drive();
};

#endif