#ifndef DUCK_H_
#define DUCK_H_

class Duck {
public:
    virtual ~Duck(){}
    virtual void DuckFly() = 0;
    virtual void Quack() = 0;
};

#endif /* DUCK_H_ */
