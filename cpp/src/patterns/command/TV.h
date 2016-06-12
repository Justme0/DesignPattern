#ifndef TV_H_
#define TV_H_

#include <iostream>
#include <string>
#include "Command.h"
using std::cout;
using std::endl;

class TV {
public:
    TV(std::string location):location_(location){}
    void On() {
        cout << "The TV in " << location_ << " is on." << endl;
    }

    void Off() {
        cout << "The TV in " << location_ << " is off." << endl;
    }
private:
    std::string location_ = "unknown";
};

class TVOnCommand: public Command {
public:
    TVOnCommand(TV *tv):tv_(tv){}

    void Execute() {
        tv_->On();
    }

    void Undo() {
        tv_->Off();
    }
private:
    TV *tv_;
};

class TVOffCommand: public Command {
public:
    TVOffCommand(TV *tv):tv_(tv){}

    void Execute() {
        tv_->Off();
    }

    void Undo() {
        tv_->On();
    }
private:
    TV *tv_;
};
#endif /* TV_H_ */
