#include <iostream>
#include "Duck.h"

Duck::Duck() {
    std::cout << "This is a new Duck." << std::endl;
}
Duck::~Duck() {
    delete fly_behavior_;
    delete sound_behavior_;
    std::cout << "Release Duck." << std::endl;
}

void Duck::swim() {
    std::cout << "swim, swim, swim." << std::endl;
}

void Duck::fly() {
    fly_behavior_->fly();
}

void Duck::sound() {
    sound_behavior_->sound();
}

RedheadDuck::RedheadDuck() {
    fly_behavior_ = new FlyWithWings();
    sound_behavior_ = new Quack();
}

void RedheadDuck::display() {
    std::cout << "This is a RedheadDuck." << std::endl;
}

MallardDuck::MallardDuck() {
    fly_behavior_ = new FlyWithWings();
    sound_behavior_ = new Quack();
}

void MallardDuck::display() {
    std::cout << "This is a MallardDuck." << std::endl;
}

RubberDuck::RubberDuck() {
    fly_behavior_ = new FlyCannot();
    sound_behavior_ = new Squeak();
}

void RubberDuck::display() {
    std::cout << "This is a RubberDuck." << std::endl;
}

DeconyDuck::DeconyDuck() {
    fly_behavior_ = new FlyCannot();
    sound_behavior_ = new Silence();
}

void DeconyDuck::display() {
    std::cout << "This is a DeconyDuck." << std::endl;
}
