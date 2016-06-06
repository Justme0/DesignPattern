#ifndef BEVERAGE_H_
#define BEVERAGE_H_

class Beverage {
public :
    virtual ~Beverage() {}
    virtual double Cost() = 0;
    virtual std::string GetDescription() {
        return description_;
    }
    void output() {
        std::cout << "The Beverage has " << GetDescription() << ", and the cost is " << Cost() << std::endl;
    }
protected:
    std::string description_ = "unkown";
};
#endif /* BEVERAGE_H_ */
