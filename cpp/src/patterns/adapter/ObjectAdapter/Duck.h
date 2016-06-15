#ifndef DUCK_H_
#define DUCK_H_

class Duck {
public:
    virtual ~Duck(){}
    virtual void fly() = 0;
    virtual void quack() = 0;
};

#endif /* DUCK_H_ */
