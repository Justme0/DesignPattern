#ifndef DUCK_H_
#define DUCK_H_

#include "FlyBehavior.h"
#include "SoundBehavior.h"

class Duck {
public :
    Duck();
    virtual ~Duck();
    void swim();
    virtual void display() = 0;
    void fly();
    void sound();
protected:
    FlyBehavior *fly_behavior_;
    SoundBehavior *sound_behavior_;
};

class RedheadDuck: public Duck {
public :
    RedheadDuck() ;
    ~RedheadDuck() {};
    void display() ;
};

class MallardDuck: public Duck {
public :
    MallardDuck() ;
    ~MallardDuck() {};
    void display() ;
};

class RubberDuck: public Duck {
public :
    RubberDuck() ;
    ~RubberDuck() {};
    void display() ;
};

class DeconyDuck: public Duck {
public :
    DeconyDuck() ;
    ~DeconyDuck() {};
    void display() ;
};
#endif /* DUCK_H_ */
