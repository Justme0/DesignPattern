package patterns.command.multipleControl;

public class NoCommand implements Command {
	@Override
	public void execute() {
		System.out.println("No Command");
	}
}