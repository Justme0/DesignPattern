#ifndef COFFE_H_
#define COFFE_H_

#include "CaffeineBeverage.h"

class Coffe: public CaffeineBeverage {
public:
    void BrewCoffeGrinds() {
        cout << "Brew Coffe Grinds." << endl;
    }
    
    void AddMilk() {
        cout << "Add Milk in Coffe." << endl;
    }

    void Brew() {
        BrewCoffeGrinds();
    }

    void AddCondiments() {
        AddMilk();
    }
};
#endif /* COFFE_H_ */
