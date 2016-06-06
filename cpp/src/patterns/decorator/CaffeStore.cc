#include <iostream>
#include "Beverage.h"
#include "Coffe.h"
#include "Decorator.h"

int main () {
    Beverage *beverage = new DarkRoast(); 
    beverage->output();
    beverage = new Espresso();
    beverage->output();
    beverage = new Moca(beverage);
    beverage->output();
    beverage = new Milk(beverage);
    beverage->output();
    beverage = new Soy(beverage);
    beverage->output();
    return 0;
}
