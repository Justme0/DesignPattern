#ifndef MENUITEM_H_
#define MENUITEM_H_

#include "MenuComponent.h"
#include "NullIterator.h"

class MenuItem: public MenuComponent {
public:
    MenuItem(std::string name, std::string description, double price) {
        name_ = name;
        description_ = description;
        price_ = price;
    }

    double GetPrice() const {
        return price_;
    }

    void Print() {
        std::cout << "MenuItem: " << GetName() << ", " << GetDescription() << ", " << GetPrice() << std::endl;
    }

    Iterator<MenuComponent> *CreateIterator() {
        return new NullIterator();
    }
private:
    double price_;
};
#endif /* MENUITEM_H_ */
