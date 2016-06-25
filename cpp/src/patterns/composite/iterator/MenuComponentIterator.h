#ifndef MENUCOMPONENTITERATOR_H_
#define MENUCOMPONENTITERATOR_H_

#include <stack>
#include <cstring>
#include <typeinfo>

#include "Iterator.h"
#include "MenuComponent.h"

class MenuComponentIterator: public Iterator<MenuComponent> {
public:
    MenuComponentIterator(Iterator<MenuComponent> *iterator) {
        stack_.push(iterator);
    }

    bool HasNext() {
        if(stack_.empty()) return false;
        Iterator<MenuComponent> *iterator = stack_.top();
        if(iterator->HasNext()) return true;
        stack_.pop();
        return HasNext();
    }

    MenuComponent *Next() {
        Iterator<MenuComponent> *iterator = stack_.top();
        MenuComponent *component = iterator->Next();
        // TODO: How to ignore the number befor the class name
        if(strcmp(typeid(*component).name(), "4Menu") == 0) {
        // TODO: How to avoid including each other
        //if(dynamic_cast<Menu *> (component)) {
            stack_.push(component->CreateMenuIterator());
        }
        return component;
    }
private:
    std::stack<Iterator<MenuComponent> *> stack_;
};
#endif /* MENUCOMPONENTITERATOR_H_ */
