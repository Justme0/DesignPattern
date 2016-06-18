#include "Coffe.h"
#include "Tea.h"

int main () {
    Coffe *coffe = new Coffe();
    Tea *tea = new Tea();
    coffe->Prepare();
    tea->Prepare();
    return 0;
}
