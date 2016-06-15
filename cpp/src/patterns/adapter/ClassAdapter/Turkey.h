#ifndef TURKEY_H_
#define TURKEY_H_

#include <iostream>

using std::cout;
using std::endl;

class Turkey {
public:
    virtual ~Turkey(){}
    virtual void TurkeyFly() = 0;
    virtual void Gobble() = 0;
};

class WildTurkey: public Turkey {
public:
    void TurkeyFly() {
        cout << "I am a WildTurkey, I can fly." << endl;
    }

    void Gobble() {
        cout << "I am a WildTurkey, I can gobble." << endl;
    }
};
#endif /* TURKEY_H_ */
