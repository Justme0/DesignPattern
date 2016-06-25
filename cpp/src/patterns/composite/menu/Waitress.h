#ifndef WAITRESS_H_
#define WAITRESS_H_

#include "MenuComponent.h"

class Waitress {
public:
    Waitress(MenuComponent *menu) {
        menu_ = menu;
    }

    void PrintMenu() {
        menu_->Print();
    }

private:
    MenuComponent *menu_;
};
#endif /* WAITRESS_H_ */
