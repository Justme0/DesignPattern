#ifndef Stereo_H_
#define Stereo_H_

#include <iostream>
#include <string>
#include "Command.h"
using std::cout;
using std::endl;

class Stereo {
public:
    Stereo(std::string location):location_(location){}
    void On() {
        cout << "The Stereo in " << location_ << " is on." << endl;
    }

    void SetCD() {
        cout << "The Stereo in " << location_ << " is set for CD." << endl;
    }

    void SetVolume(int volume) {
        cout << "The volume of Stereo in " << location_ << " is set for " << volume << "." << endl;
    }

    void Play() {
        cout << "The Stereo in " << location_ << " is played." << endl;
    }

    void Off() {
        cout << "The Stereo in " << location_ << " is off." << endl;
    }
private:
    std::string location_ = "unknown";
};

class StereoOnCommand: public Command {
public:
    StereoOnCommand(Stereo *stereo):stereo_(stereo){}

    void Execute() {
        stereo_->On();
        stereo_->SetCD();
        stereo_->SetVolume(10);
        stereo_->Play();
    }

    void Undo() {
        stereo_->Off();
    }
private:
    Stereo *stereo_;
};

class StereoOffCommand: public Command {
public:
    StereoOffCommand(Stereo *stereo):stereo_(stereo){}

    void Execute() {
        stereo_->Off();
    }

    void Undo() {
        stereo_->On();
        stereo_->SetCD();
        stereo_->SetVolume(10);
        stereo_->Play();
    }
private:
    Stereo *stereo_;
};
#endif /* Stereo_H_ */
