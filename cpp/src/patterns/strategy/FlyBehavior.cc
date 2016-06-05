#include <iostream>
#include "FlyBehavior.h"

void FlyWithWings::fly() {
    std::cout << "fly, fly, fly." << std::endl;
}

void FlyCannot::fly() {
    std::cout << "Cann't fly." << std::endl;
}
