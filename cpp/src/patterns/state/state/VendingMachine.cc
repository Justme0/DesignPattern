#include "VendingMachine.h"

VendingMachine::VendingMachine(int count) {
    count_ = count;

    sold_out_ = new SoldOutState(this);
//    sold_out_->machine_ = this;
    sold_ = new SoldState(this); 
//    sold_->machine_ = this;
    no_money_ = new NoMoneyState(this);
//    no_money_->machine_ = this;
    has_money_ = new HasMoneyState(this);
//    has_money_->machine_ = this;
    winner_ = new WinnerState(this);
//    winner_->machine_ = this;

    if(count > 0) {
        state_ = no_money_;
    }
    else {
        state_ = sold_out_;
    }
}

void VendingMachine::Insert() {
    state_->Insert();
}

void VendingMachine::Eject() {
    state_->Eject();
}

void VendingMachine::Bought() {
    state_->Bought();
    state_->Dispense();
}

void VendingMachine::Dispense() {
    state_->Dispense();
}

void VendingMachine::Release() {
    cout << "A goods is coming out" << endl;
}

void VendingMachine::SetState(State *state) {
    state_ = state;
}

int VendingMachine::GetCount() const {
    return count_;
}

State* VendingMachine::GetSold() const {
    return sold_;
}

State* VendingMachine::GetSoldOut() const {
    return sold_out_;
}

State* VendingMachine::GetWinner() const {
    return winner_;
}

State* VendingMachine::GetNoMoney() const {
    return no_money_;
}

State* VendingMachine::GetHasMoney() const {
    return has_money_;
}
