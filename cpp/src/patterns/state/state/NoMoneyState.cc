#include "NoMoneyState.h"
#include "VendingMachine.h"


NoMoneyState::NoMoneyState(VendingMachine *machine) {
    machine_ = machine;
}

void NoMoneyState::Insert() {
    cout << "You inserted the money" << endl;
    machine_->SetState(machine_->GetHasMoney());
}

void NoMoneyState::Eject() {
    cout << "You haven't inserted money" << endl;
}

void NoMoneyState::Bought() {
    cout << "You turned but there's no money" << endl;
}

void NoMoneyState::Dispense() {
    cout << "You need to pay first" << endl;
}
