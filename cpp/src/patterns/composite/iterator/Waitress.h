#ifndef WAITRESS_H_
#define WAITRESS_H_

#include "MenuComponent.h"

class Waitress {
public:
    Waitress(MenuComponent *menu) {
        menu_ = menu;
    }

    void PrintMenu() {
        Iterator<MenuComponent> *iterator = menu_->CreateIterator();
        while(iterator->HasNext()) {
            MenuComponent *component = iterator->Next();
            component->Print();
        }
    }

private:
    MenuComponent *menu_;
};
#endif /* WAITRESS_H_ */
