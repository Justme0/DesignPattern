#ifndef TURKEYADAPTER_H_
#define TURKEYADAPTER_H_

#include <iostream>

using std::cout;
using std::endl;

class TurkeyAdapter: public Duck, WildTurkey {
public:
    void DuckFly() {
        cout << "I am a turkey, but i want to fly like duck." << endl;
        TurkeyFly();
    }

    void Quack() {
        cout << "I am a turkey, but i want to quack like duck." << endl;
        Gobble();
    }
};
#endif /* TURKEYADAPTER_H_ */
