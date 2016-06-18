#ifndef CAFFEINEBEVERAGE_H_
#define CAFFEINEBEVERAGE_H_

#include <iostream>
using std::cout;
using std::endl;

class CaffeineBeverage {
public:
    virtual ~CaffeineBeverage() {}

    void Prepare() {
        BoilWater();
        Brew();
        PourInCup();
        AddCondiments();
    }

    void BoilWater() {
        cout << "Boiling Water." << endl;
    }

    void PourInCup() {
        cout << "Pour in Cup." << endl;
    }

    virtual void Brew() = 0;
    virtual void AddCondiments() = 0;
private:
};
#endif /* CAFFEINEBEVERAGE_H_ */
