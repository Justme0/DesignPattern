package patterns.command.multipleControl;

public class MultipleRemoteControl {
	private Command[] onCommands;
	private Command[] offCommands;
	int numberCommand;
	
	public MultipleRemoteControl (int numberCommand) {
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
		onCommands[which].execute();
	}
	
	public void pressOff(int which) {
		offCommands[which].execute();
	}
}
