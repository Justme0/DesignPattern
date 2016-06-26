#ifndef WINNERSTATE_H_
#define WINNERSTATE_H_

#include "State.h"

class WinnerState: public State {
public:
    WinnerState(VendingMachine *) ;
    void Insert() ;
    void Eject() ;
    void Bought() ;
    void Dispense() ;
};
#endif /* WINNERSTATE_H_ */
