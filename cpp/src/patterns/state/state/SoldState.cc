#include "SoldState.h"
#include "VendingMachine.h"


SoldState::SoldState(VendingMachine *machine) {
    machine_ = machine;
}

void SoldState::Insert() {
    cout << "Please wait, we're already giving you a goods." << endl;
}

void SoldState::Eject() {
    cout << "Sorry, you already bought" << endl;
}

void SoldState::Bought() {
    cout << "You already bought one, don't do it twice" << endl;
}

void SoldState::Dispense() {
    cout << "Coming!!!" << endl;
    machine_->Release();
    if (machine_->GetCount() == 0) {
        cout << "Cong, you got the last one!" << endl;
        machine_->SetState(machine_->GetSoldOut());
    } else {
        machine_->SetState(machine_->GetNoMoney());
    }
}
