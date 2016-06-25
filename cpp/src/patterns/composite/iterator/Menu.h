#ifndef MENU_H_
#define MENU_H_

#include <vector>
#include "MenuIterator.h"
#include "MenuComponent.h"
#include "MenuComponentIterator.h"

class Menu: public MenuComponent {
public:
    Menu(std::string name, std::string description) {
        name_ = name;
        description_ = description;
    }

    void Add(MenuComponent *component) {
        menu_components_.push_back(component);
    }

    void Print() {
        std::cout << "Menu: " << GetName() << ", " << GetDescription() << std::endl; 
    }

    Iterator<MenuComponent> *CreateMenuIterator() {
        return new MenuIterator(menu_components_);
    }

    Iterator<MenuComponent> *CreateIterator() {
        return new MenuComponentIterator(CreateMenuIterator());
    }
private:
    std::vector<MenuComponent*> menu_components_;
};
#endif /* MENU_H_ */
