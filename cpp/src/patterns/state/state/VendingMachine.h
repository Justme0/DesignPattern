#ifndef VENDINGMACHINE_H_
#define VENDINGMACHINE_H_

#include <iostream>

#include "State.h"
#include "SoldState.h"
#include "SoldOutState.h"
#include "WinnerState.h"
#include "NoMoneyState.h"
#include "HasMoneyState.h"

using std::cout;
using std::endl;

class VendingMachine {
public :
    VendingMachine(int) ;
    void Insert() ;
    void Eject() ;
    void Bought() ;
    void Dispense() ;
    void Release() ;
    void SetState(State *state) ;
    int GetCount() const ;
    State *GetSold() const ;
    State *GetSoldOut() const ;
    State *GetWinner() const ;
    State *GetNoMoney() const ;
    State *GetHasMoney() const ;
private:
    State *state_;
    State *sold_out_;
    State *sold_;
    State *no_money_;
    State *has_money_;
    State *winner_;
    int count_;
};
#endif /* VENDINGMACHINE_H_ */
