#ifndef SUBJECT_H_
#define SUBJECT_H_

#include "Observer.h"

class Subject {
public :
    virtual ~Subject(){}
    virtual void RegisterObserver(Observer*) = 0;
    virtual void RemoveObserver(Observer*) = 0;
    virtual void NotifyObserver() = 0;
};
#endif /* SUBJECT_H_ */
