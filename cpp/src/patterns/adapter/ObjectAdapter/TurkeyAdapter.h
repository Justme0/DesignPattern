#ifndef TURKEYADAPTER_H_
#define TURKEYADAPTER_H_

#include <iostream>

using std::cout;
using std::endl;

class TurkeyAdapter: public Duck {
public:
    TurkeyAdapter(Turkey *turkey) {
        turkey_ = turkey;
    }
    void fly() {
        cout << "I am a turkey, but i want to fly like duck." << endl;
        turkey_->fly();
    }

    void quack() {
        cout << "I am a turkey, but i want to quack like duck." << endl;
        turkey_->gobble();
    }
private:
    Turkey *turkey_;
};
#endif /* TURKEYADAPTER_H_ */
