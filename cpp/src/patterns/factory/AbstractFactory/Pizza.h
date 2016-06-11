#ifndef PIZZA_H_
#define PIZZA_H_

#include <iostream>
#include <string>
#include "Dough.h"
#include "Sauce.h"
#include "PizzaIngredientFactory.h"

class Pizza {
public :
    virtual ~Pizza() {
        delete dough_;
        delete sauce_;
    }
    virtual void Prepare() = 0;

    virtual void Bake() {
        std::cout << "Normal Baking: " << name_ << std::endl;
    }

    virtual void Cut() {
        std::cout << "Normal Cutting: " << name_ << std::endl;
    }

    virtual void Box() {
        std::cout << "Normal Boxing: " << name_ << std::endl;
    }
protected:
    std::string name_;
    PizzaIngredientFactory *ingredient_factory_;
    Dough *dough_;
    Sauce *sauce_;
};

class CheessPizza: public Pizza {
public :
    CheessPizza(PizzaIngredientFactory *ingredient_factory) {
        name_ = "Cheese Pizza";
        ingredient_factory_ = ingredient_factory;
    }

    void Prepare () {
        std::cout << "Preparing: " << name_ << std::endl;
        dough_ = ingredient_factory_->CreateDough();
        sauce_ = ingredient_factory_->CreateSauce();
        std::cout << "Dough: " << dough_->ToString() << std::endl;
        std::cout << "Sauce: " << sauce_->ToString() << std::endl;
    }

    void Bake() {
        std::cout << "Spcial Baking: " << name_ << std::endl;
    }
};

class ClamPizza: public Pizza {
public:
    ClamPizza(PizzaIngredientFactory *ingredient_factory) {
        name_ = "Clam Pizza";
        ingredient_factory_ = ingredient_factory;
    }
        
    void Prepare () {
        std::cout << "Preparing: " << name_ << std::endl;
        dough_ = ingredient_factory_->CreateDough();
        sauce_ = ingredient_factory_->CreateSauce();
        std::cout << "Dough: " << dough_->ToString() << std::endl;
        std::cout << "Sauce: " << sauce_->ToString() << std::endl;
    }

    void Cut() {
        std::cout << "Spcial Cutting: " << name_ << std::endl;
    }
};
#endif /* PIZZA_H_ */
