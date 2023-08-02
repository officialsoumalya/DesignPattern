#ifndef DESKTOP_BUILDER
#define DESKTOP_BUILDER
#include "Desktop.hpp"
class DesktopBuilder
{

    protected:
    Desktop * d;
    public:
    DesktopBuilder()
    {
        d = new Desktop();
    }
    virtual void buildRam()=0;
    virtual void buildKeyBoard()=0;
    virtual void buildMonitor()=0;
    virtual void buildMake()=0;
    virtual Desktop * getDesktop()
    {
        return d;
    }

};

#endif