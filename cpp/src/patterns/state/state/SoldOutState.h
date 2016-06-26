#ifndef SOLDOUTSTATE_H_
#define SOLDOUTSTATE_H_

#include "State.h"

class SoldOutState: public State {
public:
    SoldOutState(VendingMachine *) ;
    void Insert() ;
    void Eject() ;
    void Bought() ;
    void Dispense() ;
};
#endif /* SOLDOUTSTATE_H_ */
