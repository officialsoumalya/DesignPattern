#include "ExtraMushroomDecorator.hpp"

ExtraMushroomDecorator::ExtraMushroomDecorator(BasePizza * bp)
{
    base_pizza = bp;
}

int ExtraMushroomDecorator::cost()
{
    return base_pizza->cost()+98;
}