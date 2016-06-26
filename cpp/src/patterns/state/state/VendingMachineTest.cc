#include "VendingMachine.h"

int main () {
    VendingMachine *machine = new VendingMachine(5); 
    machine->Insert();
    machine->Bought();


    machine->Insert();
    machine->Eject();
    machine->Bought();

    machine->Insert();
    machine->Bought();
    machine->Insert();
    machine->Bought();
    machine->Eject();

    machine->Insert();
    machine->Insert();
    machine->Bought();
    machine->Insert();
    machine->Bought();
    machine->Insert();
    machine->Bought();
    return 0;
}
