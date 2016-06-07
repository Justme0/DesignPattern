#ifndef CURRENTCOmZIONDISPLAY_H_
#define CURRENTCONDITIONDISPLAY_H_

#include <iostream>
#include "DisplayElement.h"
#include "Subject.h"
#include "Observer.h"

class CurrentConditionDisplay: public DisplayElement, public Observer {
public :
    CurrentConditionDisplay(Subject *subject) {
        subject->RegisterObserver(this);
    }

    void Display() {
        std::cout << "CurrentConditionDisplay: " << temperature_ << " " << humidity_ << " " << pressure_ << std::endl;
    }

    void Update(double temperature, double humidity, double pressure) {
        temperature_ = temperature;
        humidity_ = humidity;
        pressure_ = pressure;
        Display();
    }
private :
    double temperature_;
    double humidity_;
    double pressure_;
};
#endif /* CURRENTCONDITIONDISPLAY_H_ */
