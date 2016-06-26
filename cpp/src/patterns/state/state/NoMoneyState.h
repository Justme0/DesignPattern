#ifndef NOMONEYSTATE_H_
#define NOMONEYSTATE_H_

#include "State.h"

class NoMoneyState: public State {
public:
    NoMoneyState(VendingMachine *);
    void Insert() ;
    void Eject() ;
    void Bought() ;
    void Dispense() ;
};
#endif /* NOMONEYSTATE_H_ */
