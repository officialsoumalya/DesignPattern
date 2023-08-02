#include "Desktop.hpp"
#include <iostream>
void Desktop::setKeyBoard(string k)
{
    keyboard = k;
}

void Desktop::setMake(string m)
{
    make = m;
}

void Desktop::setMonitor(string m)
{
    monitor = m;
}

void Desktop::setRam(string r)
{
    ram = r; 
}

void Desktop::showSpecs()
{
    cout<<"-----------------------------------\n";
    cout<<"Ram = "<<ram<<"\n";
    cout<<"Monitor = "<<monitor<<"\n";
    cout<<"Make = "<<make<<"\n";
    cout<<"Keyboard = "<<keyboard<<"\n";
    cout<<"-----------------------------------\n";
}

