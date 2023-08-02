#include "./DesktopDirector.hpp"
#include "./AsusDesktopBuilder.hpp"
#include "./SonyDesktopBuilder.hpp"

int main()
{
    AsusDesktopBuilder * builder1 = new AsusDesktopBuilder();
    DesktopDirector * director1 = new DesktopDirector(builder1);

    SonyDesktopBuilder * builder2 = new SonyDesktopBuilder();
    DesktopDirector * director2 = new DesktopDirector(builder2);

    Desktop * d1 = director1->buildDesktop();
    d1->showSpecs();

    Desktop * d2 = director2->buildDesktop();
    d2->showSpecs();

    delete builder1;
    delete builder2;

    delete director1;
    delete director2;

    delete d1;
    delete d2;

    return 0;
}