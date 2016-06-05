#include <iostream>
#include "SoundBehavior.h"

void Quack::sound() {
    std::cout << "quack, quack, quack." << std::endl;
}

void Squeak::sound() {
    std::cout << "squeak, squeak, squeak." << std::endl;
}

void Silence::sound() {
    std::cout << "Cann't sound, be silence." << std::endl;
}
