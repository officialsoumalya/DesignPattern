#include <iostream>
#include "Margharitta.hpp"
#include "Peperonni.hpp"
#include "ExtraCheeseDecorator.hpp"
#include "ExtraMushroomDecorator.hpp"
using namespace std;

int main()
{
    BasePizza * margh = new Margharitta();

    cout<<margh->cost()<<"\n";

    BasePizza * marghEC = new ExtraCheeseDecorator(margh);

    cout<<marghEC->cost()<<" = marcghEC\n";

    BasePizza * marghEm = new ExtraMushroomDecorator(margh);
    cout<<marghEm->cost()<<" = marghEm\n";

    BasePizza *marghECM = new ExtraMushroomDecorator(marghEC);
    cout<<marghECM->cost()<<" = marghECM\n";
    return 0;
}