#ifndef VENDINGMACHINE_H_
#define VENDINGMACHINE_H_

#include <iostream>

using std::cout;
using std::endl;

typedef enum {NO_MONEY, HAS_MONEY, SOLD_OUT, SOLD} State;

class VendingMachine {
public :
    VendingMachine(int count) {
        count_ = count;
        if(count > 0) {
            state_ = NO_MONEY;
        }
        else {
            state_ = SOLD_OUT;
        }
    }

    void Insert() {
        if (state_ == HAS_MONEY) {
            cout << "Already have money." << endl;
        } else if (state_ == NO_MONEY) {
            state_ = HAS_MONEY;
            cout << "You inserted the money" << endl;
        } else if (state_ == SOLD_OUT) {
            cout << "The machine is sold out" << endl;
        } else if (state_ == SOLD) {
            cout << "Please wait, we're already giving you a goods." << endl;
        }
    }

    void Eject() {
        if (state_ == HAS_MONEY) {
            cout << "Money returned" << endl;
            state_ = NO_MONEY;
        } else if (state_ == NO_MONEY) {
            cout << "You haven't inserted money" << endl;
        } else if (state_ == SOLD) {
            cout << "Sorry, you already bought" << endl;
        } else if (state_ == SOLD_OUT) {
            cout << "You haven't inserted money" << endl;
        }
    }

    void Bought() {
        if (state_ == SOLD) {
            cout << "You already bought one, don't do it twice" << endl;;
        } else if (state_ == NO_MONEY) {
            cout << "You turned but there's no money" << endl;
        } else if (state_ == SOLD_OUT) {
            cout << "You turned, but there are no goods" << endl;
        } else if (state_ == HAS_MONEY) {
            cout << "You got the goods..." << endl;
            state_ = SOLD;
            Dispense();
        }
    }

    void Dispense() {
        if (state_ == SOLD) {
            cout << "Coming!!!" << endl;
            count_ = count_ - 1;
            if (count_ == 0) {
                cout << "Cong, you got the last one!" << endl;
                state_ = SOLD_OUT;
            } else {
                state_ = NO_MONEY;
            }
        } else if (state_ == NO_MONEY) {
            cout << "You need to pay first" << endl;
        } else if (state_ == SOLD_OUT) {
            cout << "No dispensed" << endl;
        } else if (state_ == HAS_MONEY) {
            cout << "No dispensed" << endl;
        }
    }

private:
    State state_;
    int count_;
};
#endif /* VENDINGMACHINE_H_ */
