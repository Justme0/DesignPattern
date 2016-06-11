package patterns.command.simpleControl;

public class TV {
	private String location;
	public TV(String location) {
		this.location = location;
	}
	
	public void on() {
		System.out.println("The TV in " + location + " is on.");
	}
	
	public void off() {
		System.out.println("The TV in " + location + " is off.");
	}
}
