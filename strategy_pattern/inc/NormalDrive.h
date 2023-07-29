#ifndef NORMAL_DRIVE
#define NORMAL_DRIVE

#include "DriveStrategy.h"
#include <iostream>
using namespace std;

class NormalDrive:public DriveStrategy
{
    public:
    void drive();
};

#endif