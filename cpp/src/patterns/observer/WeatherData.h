#ifndef WEATHERDATA_H_
#define WEATHERDATA_H_

#include <set>
#include <iostream>
#include "Subject.h"
#include "Observer.h"

class WeatherData: public Subject {
public :
    WeatherData() {
        observers.clear();
    }
    
    ~WeatherData() {
        observers.clear();
    }

    void RegisterObserver(Observer *observer) {
        if(observers.count(observer) != 0) {
            std::cout << "It's already register." << std::endl;
        }
        else {
            observers.insert(observer);
        }
    }

    void RemoveObserver(Observer *observer) {
        if (observers.count(observer) != 0) {
            observers.erase(observer);
        }
        else {
            std::cout << "It's not exists in observers." << std::endl;
        }
    }

    void NotifyObserver() {
        for(auto each: observers) {
            each->Update(temperature_, humidity_, pressure_);
        }
    }

    void SetChange(double temperature, double humidity, double pressure) {
        std::cout << "Now, some change happend!" << std::endl;
        temperature_ = temperature;
        humidity_ = humidity;
        pressure_ = pressure;
        NotifyObserver();
    }

    double GetTemperature() const {
        return temperature_;
    }

    double GetHumidity() const {
        return humidity_;
    }

    double GetPressure() const {
        return pressure_;
    }

private :
    std::set<Observer*> observers;
    double temperature_;
    double humidity_;
    double pressure_;
};
#endif /* WEATHERDATA_H_ */
