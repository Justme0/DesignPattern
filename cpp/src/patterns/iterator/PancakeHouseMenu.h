#ifndef PANCAKEHOUSEMENU_H_
#define PANCAKEHOUSEMENU_H_

#include <vector>
#include <string>
#include "Menu.h" 
#include "MenuItem.h"
#include "Iterator.h"

class PancakeHouseMenuIterator: public Iterator<MenuItem> {
public:
    PancakeHouseMenuIterator(MenuItem **menu_items, int max_size) {
        items_ = menu_items;
        index_ = 0;
        max_size_ = max_size;
    }

    bool HasNext() {
        return index_ < max_size_ && items_[index_];
    }

    MenuItem *Next() {
        return items_[index_ ++];
    }
private:
    MenuItem **items_;
    int index_;
    int max_size_;
};

class PancakeHouseMenu: public Menu {
public:
    PancakeHouseMenu() {
        menu_items_ = new MenuItem*[kMaxItems];
        number_of_items_ = 0;

        AddItem("K&B's Pancake Breakfast", 
                "Pancakes with scrambled eggs, and toast", 
                true, 2.99);
        AddItem("Regular Pancake Breakfast", 
                "Pancakes with fried eggs, sausage", 
                false, 2.99);
        AddItem("Blueberry Pancakes",
                "Pancakes made with fresh blueberries, and blueberry syrup",
                true, 3.49);
        AddItem("Waffles",
                "Waffles, with your choice of blueberries or strawberries",
                true, 3.59);
    }

    void AddItem(std::string name, std::string description, bool vegetarian, double price) {
        MenuItem *item = new MenuItem(name, description, vegetarian, price);
        if(number_of_items_ >= kMaxItems) {
            std::cout << "Sorry, menu is full." << std::endl;
        }
        else {
            menu_items_[number_of_items_ ++] = item;
        }
    }

    Iterator<MenuItem> *CreateIterator() {
        return new PancakeHouseMenuIterator(menu_items_, kMaxItems);
    }

private:
    MenuItem **menu_items_;
    int number_of_items_;
    const static int kMaxItems = 10;
};
#endif /* PANCAKEHOUSEMENU_H_ */
