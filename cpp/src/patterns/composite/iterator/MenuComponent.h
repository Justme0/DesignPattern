#ifndef MENUCOMPONENT_H_
#define MENUCOMPONENT_H_

#include <string>
#include <iostream>

#include "Iterator.h"

class MenuComponent {
public:
    virtual ~MenuComponent(){}
    virtual void Add(MenuComponent *component) {}
    virtual void Print() = 0;
    virtual Iterator<MenuComponent> *CreateMenuIterator() {};
    virtual Iterator<MenuComponent> *CreateIterator() = 0;

    virtual std::string GetName() const {
        return name_;
    };

    virtual std::string GetDescription() const {
        return description_;
    }
protected:
    std::string name_;
    std::string description_;
};
#endif /* MENUCOMPONENT_H_ */
