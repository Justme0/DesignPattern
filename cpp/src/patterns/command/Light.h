#ifndef LIGHT_H_
#define LIGHT_H_

#include <iostream>
#include <string>
#include "Command.h"
using std::cout;
using std::endl;

class Light {
public:
    Light(std::string location):location_(location){}
    void On() {
        cout << "The light in " << location_ << " is on." << endl;
    }

    void Off() {
        cout << "The light in " << location_ << " is off." << endl;
    }
private:
    std::string location_ = "unknown";
};

class LightOnCommand: public Command {
public:
    LightOnCommand(Light *light):light_(light){}

    void Execute() {
        light_->On();
    }

    void Undo() {
        light_->Off();
    }
private:
    Light *light_;
};

class LightOffCommand: public Command {
public:
    LightOffCommand(Light *light):light_(light){}

    void Execute() {
        light_->Off();
    }

    void Undo() {
        light_->On();
    }
private:
    Light *light_;
};
#endif /* LIGHT_H_ */
