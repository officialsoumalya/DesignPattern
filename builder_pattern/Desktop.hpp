#ifndef DESKTOP
#define DESKTOP

#include<string>
using namespace std;
class Desktop
{
    string make;
    string ram;
    string monitor;
    string keyboard;
    public:
    void setMake(string m);
    void setRam(string r);
    void setMonitor(string m);
    void setKeyBoard(string k);
    void showSpecs();
};

#endif