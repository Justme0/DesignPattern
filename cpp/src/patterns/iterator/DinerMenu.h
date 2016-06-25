#ifndef DINERMENU_H_
#define DINERMENU_H_

#include <vector>
#include <string>
#include "Menu.h" 
#include "MenuItem.h"
#include "Iterator.h"

class DinerMenuIterator: public Iterator<MenuItem> {
public:
    DinerMenuIterator(std::vector<MenuItem*> menu_items) {
        items_ = menu_items;
        it = items_.begin();
    }

    bool HasNext() {
        return it != items_.end();
    }

    MenuItem *Next() {
        return *it++;
    }
private:
    std::vector<MenuItem*> items_;
    std::vector<MenuItem*>::iterator it;
};

class DinerMenu: public Menu {
public:
    DinerMenu() {
        AddItem("Vegetarian BLT",
                "(Fakin') Bacon with lettuce & tomato on whole wheat",
                true, 2.99);
        AddItem("BLT",
                "Bacon with lettuce & tomato on whole wheat",
                false, 2.99);
        AddItem("Soup of the day",
                "Soup of the day, with a side of potato salad",
                false, 3.29);
        AddItem("Hotdog",
                "A hot dog, with saurkraut, relish, onions, topped with cheese",
                false, 3.05);
        AddItem("Steamed Veggies and Brown Rice",
                "A medly of steamed vegetables over brown rice",
                true, 3.99);
        AddItem("Pasta",
                "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
                true, 3.89);
    }

    void AddItem(std::string name, std::string description, bool vegetarian, double price) {
        MenuItem *item = new MenuItem(name, description, vegetarian, price);
        menu_items_.push_back(item);
    }

    Iterator<MenuItem> *CreateIterator() {
        return new DinerMenuIterator(menu_items_);
    }

private:
    std::vector<MenuItem*> menu_items_;
};
#endif /* DINERMENU_H_ */
