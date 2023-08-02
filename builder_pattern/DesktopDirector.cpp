#include "DesktopDirector.hpp"

DesktopDirector::DesktopDirector(DesktopBuilder * b)
{
    builder = b;
}

Desktop * DesktopDirector::buildDesktop()
{
    builder->buildKeyBoard();
    builder->buildMake();
    builder->buildMonitor();
    builder->buildRam();
    builder->getDesktop();
}
