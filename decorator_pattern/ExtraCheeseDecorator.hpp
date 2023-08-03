#ifndef EXTRA_CHEESE
#define EXTRA_CHEESE
#include "PizzaDecorator.hpp"

class ExtraCheeseDecorator:public PizzaDecorator{
    BasePizza * base_pizza;
    public:
    ExtraCheeseDecorator(BasePizza * bp);
    int cost();
};

#endif