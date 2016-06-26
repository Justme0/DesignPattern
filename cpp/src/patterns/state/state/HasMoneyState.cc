#include "HasMoneyState.h"
#include "VendingMachine.h"

HasMoneyState::HasMoneyState(VendingMachine *machine) {
    machine_ = machine;
}

void HasMoneyState::Insert() {
    cout << "Already have money." << endl;
}

void HasMoneyState::Eject() {
    cout << "Money returned" << endl;
    machine_->SetState(machine_->GetNoMoney());
}

void HasMoneyState::Bought() {
    cout << "You got the goods..." << endl;
    int winner = rand() % 5;
    if(winner == 0) {
        machine_->SetState(machine_->GetWinner());
    }
    else {
        machine_->SetState(machine_->GetSold());
    }
}

void HasMoneyState::Dispense() {
    cout << "No dispensed" << endl;
}
