#ifndef HASMONEYSTATE_H_
#define HASMONEYSTATE_H_

#include "State.h"

class HasMoneyState: public State {
public:
    HasMoneyState(VendingMachine *);
    void Insert() ;
    void Eject() ;
    void Bought() ;
    void Dispense() ;
};
#endif /* HASMONEYSTATE_H_ */
