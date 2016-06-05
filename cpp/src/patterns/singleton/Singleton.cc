#include <iostream>
#include "Singleton.h"

Singleton::Singleton() {
    std::cout << "This is a new Singleton()." << std::endl;
}

Singleton &Singleton::GetInstance() {
    static Singleton unique_instance_;
    return unique_instance_;
}
