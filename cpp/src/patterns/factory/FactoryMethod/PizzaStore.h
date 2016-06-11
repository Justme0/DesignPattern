#ifndef PIZZASTORE_H_
#define PIZZASTORE_H_

#include <string>
#include "Pizza.h"

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
private :
};

class NewYorkPizzaStore: public PizzaStore {
public :
    Pizza *CreatePizza(std::string type) {
        Pizza *pizza = NULL;
        if(type == "Cheess") {
            pizza = new NewYorkCheessPizza();
        }
        else if (type == "Clam") {
            pizza = new NewYorkClamPizza();
        }
        return pizza;
    }
};

class ChicagoPizzaStore: public PizzaStore {
public :
    Pizza *CreatePizza(std::string type) {
        Pizza *pizza = NULL;
        if(type == "Cheess") {
            pizza = new ChicagoCheessPizza();
        }
        else if (type == "Clam") {
            pizza = new ChicagoClamPizza();
        }
        return pizza;
    }
};
#endif /* PIZZASTORE_H_ */
