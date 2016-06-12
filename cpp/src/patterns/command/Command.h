#ifndef COMMAND_H_
#define COMMAND_H_

#include <iostream>

using std::cout;
using std::endl;

class Command {
public:
    virtual ~Command(){}
    virtual void Execute() = 0;
    virtual void Undo() = 0;
};

class NoCommand: public Command {
public:
    void Execute() {
        cout << "No command." << endl;
    }

    void Undo() {
        cout << "No Command." << endl;
    }
};
#endif /* COMMAND_H_ */
