#ifndef COFFE_H_
#define COFFE_H_

class Espresso: public Beverage {
public:
    Espresso() {
        description_ = "Espresso";
    }
    double Cost() {
        return 1.0;
    }
};

class DarkRoast: public Beverage {
public :
    DarkRoast() {
        description_ = "DarkRoast";
    }
    double Cost() {
        return 0.8;
    }
};
#endif /* COFFE_H_ */
