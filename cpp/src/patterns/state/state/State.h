#ifndef STATE_H_
#define STATE_H_

#include <iostream>

class VendingMachine;

using std::cout;
using std::endl;

class State {
public:
    virtual ~State() ;
    virtual void Insert() = 0;
    virtual void Eject() = 0;
    virtual void Bought() = 0;
    virtual void Dispense() = 0;
    
protected:
    VendingMachine *machine_;
};
#endif /* STATE_H_ */
