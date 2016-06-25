#ifndef MENU_H_
#define MENU_H_

#include "MenuItem.h"
#include "Iterator.h"

class Menu {
public:
    virtual Iterator<MenuItem> *CreateIterator() = 0;
};
#endif /* MENU_H_ */
