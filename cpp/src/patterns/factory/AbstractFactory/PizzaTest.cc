#include <iostream>
#include "PizzaStore.h"

int main () {
    PizzaStore *store = new NewYorkPizzaStore();
    store->OrderPizza("Cheess");
    store->OrderPizza("Clam");
    store = new ChicagoPizzaStore();
    store->OrderPizza("Cheess");
    store->OrderPizza("Clam");
    return 0;
}
