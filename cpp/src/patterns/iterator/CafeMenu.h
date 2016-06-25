#ifndef CAFEMENU_H_
#define CAFEMENU_H_

#include <map>
#include <string>
#include "Menu.h" 
#include "MenuItem.h"
#include "Iterator.h"

class CafeMenuIterator: public Iterator<MenuItem> {
public:
    CafeMenuIterator(std::map<std::string, MenuItem*> menu_items) {
        items_ = menu_items;
        it = items_.begin();
    }

    bool HasNext() {
        return it != items_.end();
    }

    MenuItem *Next() {
        return (it++)->second;
    }

private:
    std::map<std::string, MenuItem*> items_;
    std::map<std::string, MenuItem*>::iterator it;
};

class CafeMenu: public Menu {
public:
    CafeMenu() {
        AddItem("Veggie Burger and Air Fries",
                "Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
                true, 3.99);
        AddItem("Soup of the day",
                "A cup of the soup of the day, with a side salad",
                false, 3.69);
        AddItem("Burrito",
                "A large burrito, with whole pinto beans, salsa, guacamole",
                true, 4.29);
    }    

    void AddItem(std::string name, std::string description, bool vegetarian, double price) {
        MenuItem *item = new MenuItem(name, description, vegetarian, price);
        menu_items_[item->GetName()] = item;
    }

    Iterator<MenuItem> *CreateIterator() {
        return new CafeMenuIterator(menu_items_); 
    }

private:
    std::map<std::string, MenuItem*> menu_items_;
};
#endif /* CAFEMENU_H_ */
