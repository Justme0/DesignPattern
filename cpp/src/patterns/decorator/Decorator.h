#ifndef DECORATOR_H_
#define DECORATOR_H_

#include <iostream>

class Decorator: public Beverage {
public:
    virtual ~Decorator() {}
    virtual std::string GetDescription() = 0; 
private :
};

class Moca: public Decorator {
public :
    Moca(Beverage *beverage) {
        beverage_ = beverage;
    }

    std::string GetDescription() {
        return beverage_->GetDescription() + ", Moca";
    }

    double Cost() {
        return beverage_->Cost() + 0.2;
    }
private:
    Beverage *beverage_;
};

class Milk: public Decorator {
public :
    Milk() {}
    Milk(Beverage *beverage) {
        beverage_ = beverage;
    }

    std::string GetDescription() {
        return beverage_->GetDescription() + ", Milk";
    }

    double Cost() {
        return beverage_->Cost() + 0.15;
    }
private:
    Beverage *beverage_;
};

class Soy: public Decorator {
public :
    Soy() {}
    Soy(Beverage *beverage) {
        beverage_ = beverage;
    }

    std::string GetDescription() {
        return beverage_->GetDescription() + ", Soy";
    }

    double Cost() {
        return beverage_->Cost() + 0.12;
    }
private:
    Beverage *beverage_;
};
#endif /* DECORATOR_H_ */
