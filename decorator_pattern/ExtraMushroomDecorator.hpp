#ifndef EXTRA_MUSHROOM
#define EXTRA_MUSHROOM
#include "PizzaDecorator.hpp"

class ExtraMushroomDecorator:public PizzaDecorator{
    BasePizza * base_pizza;
    public:
    ExtraMushroomDecorator(BasePizza * bp);
    int cost();
};

#endif