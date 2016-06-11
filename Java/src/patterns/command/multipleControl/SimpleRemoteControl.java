package patterns.command.multipleControl;

public class SimpleRemoteControl {
	private Command command;
	
	public SimpleRemoteControl(Command command) {
		this.command = command;
	}
	
	public void setCommand(Command command) {
		this.command = command;
	}
	
	public void pressed() {
		command.execute();
	}
}
