#ifndef PIZZA_H_
#define PIZZA_H_

#include <string>
#include <vector>

class Pizza {
public :
    void Prepare() {
        std::cout << "Normal Preparing: " << name_ << std::endl;
    }

    void Bake() {
        std::cout << "Normal Baking: " << name_ << std::endl;
    }

    void Cut() {
        std::cout << "Normal Cutting: " << name_ << std::endl;
    }

    void Box() {
        std::cout << "Normal Boxing: " << name_ << std::endl;
    }
protected:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;
};

class NewYorkCheessPizza: public Pizza {
public :
    NewYorkCheessPizza() {
        name_ = "New York Cheese Pizza";
        dough_ = "Regular Crust";
        sauce_ = "Marinara Pizza Sauce";
        toppings_.push_back("Fresh Mozzarella");
        toppings_.push_back("Parmesan");
    }
};

class ChicagoCheessPizza: public Pizza {
public :
    ChicagoCheessPizza() {
        name_ = "Chicago Cheese Pizza";
        dough_ = "Regular Crust";
        sauce_ = "Marinara Pizza Sauce";
        toppings_.push_back("Fresh Mozzarella");
        toppings_.push_back("Parmesan");
    }
};

class NewYorkClamPizza: public Pizza {
public:
    NewYorkClamPizza() {
        name_ = "New York Clam Pizza";
        dough_ = "Thin crust";
        sauce_ = "White garlic sauce";
        toppings_.push_back("Clams");
        toppings_.push_back("Grated parmesan cheese");
    }
};

class ChicagoClamPizza: public Pizza {
public:
    ChicagoClamPizza() {
        name_ = "Chicago Clam Pizza";
        dough_ = "Thin crust";
        sauce_ = "White garlic sauce";
        toppings_.push_back("Clams");
        toppings_.push_back("Grated parmesan cheese");
    }
};
#endif /* PIZZA_H_ */
