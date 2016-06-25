#ifndef WAITRESS_H_
#define WAITRESS_H_

#include <iostream>
#include "CafeMenu.h"
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Iterator.h"

class Waitress {
public:
    Waitress() {
        cafe_menu_ = new CafeMenu();
        diner_menu_ = new DinerMenu();
        pancake_menu_ = new PancakeHouseMenu();
    }
    ~Waitress() {
        delete cafe_menu_;
        delete diner_menu_;
        delete pancake_menu_;
    }

    void PrintMenu() {
        Iterator<MenuItem> *cafe_iterator = cafe_menu_->CreateIterator();
        Iterator<MenuItem> *diner_iterator = diner_menu_->CreateIterator();
        Iterator<MenuItem> *pancake_iterator = pancake_menu_->CreateIterator();
        std::cout << "##### Cafe Menu #####" << std::endl;
        PrintMenu(cafe_iterator);
        std::cout << "##### Diner Menu #####" << std::endl;
        PrintMenu(diner_iterator);
        std::cout << "##### PancakeHouse Menu #####" << std::endl;
        PrintMenu(pancake_iterator);
    }

    void PrintMenu(Iterator<MenuItem> *it) {
        while(it->HasNext()) {
            MenuItem *item = (MenuItem*)it->Next();
            std::cout << item->GetName() << ", " << item->GetDescription() << ", " << item->GetPrice() << std::endl;
        }
    }
private:
    Menu *cafe_menu_;
    Menu *diner_menu_;
    Menu *pancake_menu_;
};
#endif /* WAITRESS_H_ */
