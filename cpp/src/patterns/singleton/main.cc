#include <iostream>
#include "Singleton.h"

int main () {
    Singleton &singleton1 = Singleton::GetInstance();
    Singleton &singleton2 = Singleton::GetInstance();
    if((&singleton1) == (&singleton2)) {
        std::cout << "They are the same instance." << std::endl;
    }
    // Invalid
    // Singleton *singleton3 = new Singleton();
    // Singleton singleton4 = Singleton::GetInstance();
    return 0;
}
