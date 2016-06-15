#include "Duck.h"
#include "Turkey.h"
#include "TurkeyAdapter.h"

int main () {
    TurkeyAdapter *adapter = new TurkeyAdapter();
    adapter->DuckFly();
    adapter->Quack();
    return 0;
}
