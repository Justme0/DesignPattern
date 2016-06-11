#ifndef PIZZASTORE_H_
#define PIZZASTORE_H_

#include <string>
#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class PizzaStore {
public :
    virtual ~PizzaStore() {}
    virtual Pizza* CreatePizza(std::string) = 0;
    Pizza *OrderPizza(std::string type) {
        std::cout << "There is a new Pizza with type " << type << std::endl;
        Pizza *pizza = CreatePizza(type);

        pizza->Prepare();
        pizza->Bake();
        pizza->Cut();
        pizza->Box();
        return pizza;
    }
protected:
    PizzaIngredientFactory *ingredient_factory_;
};

class NewYorkPizzaStore: public PizzaStore {
public :
    NewYorkPizzaStore() {
        ingredient_factory_ = new NewYorkPizzaIngredientFactory(); 
    }
    ~NewYorkPizzaStore() {
        delete ingredient_factory_;
    }

    Pizza *CreatePizza(std::string type) {
        Pizza *pizza = NULL;
        if(type == "Cheess") {
            pizza = new CheessPizza(ingredient_factory_);
        }
        else if (type == "Clam") {
            pizza = new ClamPizza(ingredient_factory_);
        }
        return pizza;
    }
};

class ChicagoPizzaStore: public PizzaStore {
public :
    ChicagoPizzaStore() {
        ingredient_factory_ = new ChicagoPizzaIngredientFactory(); 
    }
    ~ChicagoPizzaStore() {
        delete ingredient_factory_;
    }

    Pizza *CreatePizza(std::string type) {
        Pizza *pizza = NULL;
        if(type == "Cheess") {
            pizza = new CheessPizza(ingredient_factory_);
        }
        else if (type == "Clam") {
            pizza = new ClamPizza(ingredient_factory_);
        }
        return pizza;
    }
};
#endif /* PIZZASTORE_H_ */
