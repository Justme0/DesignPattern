#ifndef PIZZAINGREDIENTFACTORY_H_
#define PIZZAINGREDIENTFACTORY_H_

#include "Dough.h"
#include "Sauce.h"

class PizzaIngredientFactory {
public :
    virtual ~PizzaIngredientFactory() {}
    virtual Dough *CreateDough() = 0;
    virtual Sauce *CreateSauce() = 0;
};

class NewYorkPizzaIngredientFactory: public PizzaIngredientFactory {
public :
    Dough *CreateDough() {
        return new NewYorkDough();
    }

    Sauce *CreateSauce() {
        return new NewYorkSauce();
    }
};

class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory {
public :
    Dough *CreateDough() {
        return new ChicagoDough();
    }

    Sauce *CreateSauce() {
        return new ChicagoSauce();
    }
};
#endif /* PIZZAINGREDIENTFACTORY_H_ */
