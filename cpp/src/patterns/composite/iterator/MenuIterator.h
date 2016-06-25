#ifndef MENUITERATOR_H_
#define MENUITERATOR_H_

#include "Iterator.h"
#include "MenuComponent.h"

class MenuIterator: public Iterator<MenuComponent> {
public:
    MenuIterator(std::vector<MenuComponent*> items) {
        items_ = items;
        it_ = items_.begin();
    }

    bool HasNext() {
        return it_ != items_.end();
    }

    MenuComponent *Next() {
        return *it_++;
    }

private:
    std::vector<MenuComponent*> items_; 
    std::vector<MenuComponent*>::iterator it_; 
};
#endif /* MENUITERATOR_H_ */
