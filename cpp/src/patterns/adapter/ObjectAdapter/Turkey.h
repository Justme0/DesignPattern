#ifndef TURKEY_H_
#define TURKEY_H_

#include <iostream>

using std::cout;
using std::endl;

class Turkey {
public:
    virtual ~Turkey(){}
    virtual void fly() = 0;
    virtual void gobble() = 0;
};

class WildTurkey: public Turkey {
public:
    void fly() {
        cout << "I am a WildTurkey, I can fly." << endl;
    }

    void gobble() {
        cout << "I am a WildTurkey, I can gobble." << endl;
    }
};
#endif /* TURKEY_H_ */
