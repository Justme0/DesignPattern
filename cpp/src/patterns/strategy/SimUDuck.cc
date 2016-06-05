#include "Duck.h"

int main () {
    RedheadDuck *redhead = new  RedheadDuck();
    redhead->display();
    redhead->swim();
    redhead->fly();
    redhead->sound();

    MallardDuck *mallard = new MallardDuck();
    mallard->display();
    mallard->swim();
    mallard->fly();
    mallard->sound();

    RubberDuck *rubber = new RubberDuck();
    rubber->display();
    rubber->swim();
    rubber->fly();
    rubber->sound();

    DeconyDuck *decony = new DeconyDuck();
    decony->display();
    decony->swim();
    decony->fly();
    decony->sound();
    return 0;
}
