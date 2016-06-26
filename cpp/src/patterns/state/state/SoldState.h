#ifndef SOLDSTATE_H_
#define SOLDSTATE_H_

#include "State.h"

class SoldState: public State {
public:
    SoldState(VendingMachine *) ;
    void Insert() ;
    void Eject() ;
    void Bought() ;
    void Dispense() ;
};
#endif /* SOLDSTATE_H_ */
