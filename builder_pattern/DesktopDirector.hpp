#ifndef DESKTOP_DIRECTOR
#define DESKTOP_DIRECTOR

#include "DesktopBuilder.hpp"

class DesktopDirector
{

    private:
    DesktopBuilder * builder;
    public:
    DesktopDirector(DesktopBuilder * b);

    Desktop * buildDesktop();

};

#endif