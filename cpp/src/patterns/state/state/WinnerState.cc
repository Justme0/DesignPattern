#include "WinnerState.h"
#include "VendingMachine.h"

WinnerState::WinnerState(VendingMachine *machine) {
    machine_ = machine;
}

void WinnerState::Insert() {
    cout << "Please wait, we're already giving you a goods." << endl;
}

void WinnerState::Eject() {
    cout << "Sorry, you already bought" << endl;
}

void WinnerState::Bought() {
    cout << "You already bought one, don't do it twice" << endl;
}

void WinnerState::Dispense() {
    cout << "You are the winner, you will get two goods" << endl;
    machine_->Release();
    if(machine_->GetCount() > 0) {
        machine_->Release();
        if(machine_->GetCount() == 0) {
            cout << "Cong, you got the last one." << endl;
            machine_->SetState(machine_->GetSoldOut());
        }
        else {
            machine_->SetState(machine_->GetNoMoney());
        }
    }
    else {
        cout << "I'm soory, there is no goods, the award will send to you next time." << endl;
        machine_->SetState(machine_->GetSoldOut());
    }
}
