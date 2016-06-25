#ifndef MENU_H_
#define MENU_H_

#include <vector>
#include "MenuComponent.h"

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
        for(auto component: menu_components_) {
            component->Print();
        }
    }
private:
    std::vector<MenuComponent*> menu_components_;
};
#endif /* MENU_H_ */
