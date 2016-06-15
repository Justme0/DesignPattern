#include "Duck.h"
#include "Turkey.h"
#include "TurkeyAdapter.h"

int main () {
    Turkey *turkey = new WildTurkey();
    TurkeyAdapter *adapter = new TurkeyAdapter(turkey);
    adapter->fly();
    adapter->quack();
    return 0;
}
