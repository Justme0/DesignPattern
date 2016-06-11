#ifndef PIZZASTORE_H_
#define PIZZASTORE_H_

#include <string>
#include "Pizza.h"
#include "Factory.h"

class PizzaStore {
public :
    PizzaStore() {
        factory_ = new SimplePizzaFactory();
    }
    ~PizzaStore() {
        delete factory_;
    }
    Pizza *OrderPizza(std::string type) {
        std::cout << "There is a new Pizza with type " << type << std::endl;
        Pizza *pizza = factory_->CreatePizza(type);

        pizza->Prepare();
        pizza->Bake();
        pizza->Cut();
        pizza->Box();
        return pizza;
    }
private :
    SimplePizzaFactory *factory_;
};
#endif /* PIZZASTORE_H_ */
