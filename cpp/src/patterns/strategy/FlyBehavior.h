#ifndef FLYBEHAVIOR_H_
#define FLYBEHAVIOR_H_

class FlyBehavior {
public :
    virtual void fly() = 0;
};

class FlyWithWings: public FlyBehavior {
public:
    void fly() ;
};

class FlyCannot: public FlyBehavior {
public:
    void fly() ;
};
#endif /* FLYBEHAVIOR_H_ */
