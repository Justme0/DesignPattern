#include <iostream>
#include "PizzaStore.h"

int main () {
    PizzaStore *store = new PizzaStore();
    store->OrderPizza("Cheess");
    store->OrderPizza("Clam");
    return 0;
}
