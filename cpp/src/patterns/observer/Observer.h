#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer {
public :
    virtual ~Observer(){}
    virtual void Update(double temperature, double humidity, double pressure) = 0;
};
#endif /* OBSERVER_H_ */
