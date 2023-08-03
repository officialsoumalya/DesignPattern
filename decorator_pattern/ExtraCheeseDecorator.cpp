#include "ExtraCheeseDecorator.hpp"

ExtraCheeseDecorator::ExtraCheeseDecorator(BasePizza * bp)
{
    base_pizza = bp;
}

int ExtraCheeseDecorator::cost()
{
    return base_pizza->cost()+34;
}