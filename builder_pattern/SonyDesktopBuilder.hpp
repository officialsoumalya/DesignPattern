#ifndef SONY_DESKTOP_BUILDER
#define SONY_DESKTOP_BUILDER

#include "DesktopBuilder.hpp"

class SonyDesktopBuilder : public DesktopBuilder
{

    public:
    void buildRam();
    void buildKeyBoard();
    void buildMonitor();
    void buildMake();

};

#endif