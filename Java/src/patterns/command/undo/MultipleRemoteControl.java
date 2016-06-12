package patterns.command.undo;

import java.util.Stack;

public class MultipleRemoteControl {
	private Command[] onCommands;
	private Command[] offCommands;
	Stack stack;
	int numberCommand;
	
	public MultipleRemoteControl (int numberCommand) {
		stack = new Stack();
		this.numberCommand = numberCommand;
		onCommands = new Command[this.numberCommand];
		offCommands = new Command[this.numberCommand];
		Command noCommand = new NoCommand();
		for(int i = 0 ; i < this.numberCommand ; i ++) {
			onCommands[i] = noCommand;
			offCommands[i] = noCommand;
		}
	}
	
	public void setCommand(int which, Command on, Command off) {
		onCommands[which] = on;
		offCommands[which] = off;
	}
	
	public void pressOn(int which) {
		stack.push(onCommands[which]);
		onCommands[which].execute();
	}
	
	public void pressOff(int which) {
		stack.push(offCommands[which]);
		offCommands[which].execute();
	}
	
	public boolean pressUndo() {
		if(stack.empty()) return false;
		System.out.println("This is a undo action.");
		((Command)stack.pop()).execute();
		return true;
	}
}
