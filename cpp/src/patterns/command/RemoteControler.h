#ifndef REMOTECONTROLER_H_
#define REMOTECONTROLER_H_

#include <vector>
#include <stack>
#include "Command.h"

class RemoteControler {
public:
    RemoteControler(int number_command) {
        number_command_ = number_command;
        on_commands_.resize(number_command_, new NoCommand());
        off_commands_.resize(number_command_, new NoCommand());
        while(!commands_stack_.empty()) commands_stack_.pop();
    }

    void SetCommand(int which, Command *on, Command *off) {
        on_commands_[which] = on;
        off_commands_[which] = off;
    }

    void PressOn(int which) {
        on_commands_[which]->Execute();
        commands_stack_.push(on_commands_[which]);
    }
 
    void PressOff(int which) {
        off_commands_[which]->Execute();
        commands_stack_.push(off_commands_[which]);
    }

    bool PressUndo() {
        if(commands_stack_.empty()) return false;
        cout << "This is a undo action." << endl;
        commands_stack_.top()->Undo();
        commands_stack_.pop();
        return true;
    }

private:
    int number_command_ = 0;
    std::vector<Command*> on_commands_;
    std::vector<Command*> off_commands_;
    std::stack<Command*> commands_stack_;
};
#endif /* REMOTECONTROLER_H_ */
