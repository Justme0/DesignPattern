#include "SoldOutState.h"
#include "VendingMachine.h"

SoldOutState::SoldOutState(VendingMachine *machine) {
    machine_ = machine;
}

void SoldOutState::Insert() {
    cout << "The machine is sold out" << endl;
}

void SoldOutState::Eject() {
    cout << "You haven't inserted money" << endl;
}

void SoldOutState::Bought() {
    cout << "You turned, but there are no goods" << endl;
}

void SoldOutState::Dispense() {
    cout << "No dispensed" << endl;
} 
