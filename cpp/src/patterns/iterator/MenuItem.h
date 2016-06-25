#ifndef MENUITEM_H_
#define MENUITEM_H_

class MenuItem {
public:
    MenuItem(std::string name, std::string description, bool vegetarian, double price) {
        name_ = name;
        description_ = description;
        vegetarian_ = vegetarian;
        price_ = price;
    }

    std::string GetName() const {
        return name_;
    }

    std::string GetDescription() const {
        return description_;
    }

    bool GetVegeratian() const {
        return vegetarian_;
    }

    double GetPrice() const {
        return price_;
    }
private:
    std::string name_;
    std::string description_;
    bool vegetarian_;
    double price_;
};
#endif /* MENUITEM_H_ */
