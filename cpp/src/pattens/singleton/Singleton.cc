#include <iostream>
#include "Singleton.h"

Singleton::Singleton() {
    std::cout << "This is a new Singleton()." << std::endl;
}

Singleton* Singleton::GetInstance() {
    if(unique_instance_ == NULL) {
        unique_instance_ = new Singleton();
    }
    return unique_instance_;
}
